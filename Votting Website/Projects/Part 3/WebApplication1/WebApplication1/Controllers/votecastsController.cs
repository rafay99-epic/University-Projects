using System;
using System.Collections.Generic;
using System.Data;
using System.Data.Entity;
using System.Data.Entity.Infrastructure;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;
using System.Web.Http.Description;
using WebApplication1.Models;

namespace WebApplication1.Controllers
{
    public class votecastsController : ApiController
    {
        private vote_databaseEntities3 db = new vote_databaseEntities3();

        // GET: api/votecasts
        public IQueryable<votecast> Getvotecasts()
        {
            return db.votecasts;
        }

        // GET: api/votecasts/5
        [ResponseType(typeof(votecast))]
        public IHttpActionResult Getvotecast(int id)
        {
            votecast votecast = db.votecasts.Find(id);
            if (votecast == null)
            {
                return NotFound();
            }

            return Ok(votecast);
        }

        // PUT: api/votecasts/5
        [ResponseType(typeof(void))]
        public IHttpActionResult Putvotecast(int id, votecast votecast)
        {
            if (!ModelState.IsValid)
            {
                return BadRequest(ModelState);
            }

            if (id != votecast.cast_vote_id)
            {
                return BadRequest();
            }

            db.Entry(votecast).State = System.Data.Entity.EntityState.Modified;

            try
            {
                db.SaveChanges();
            }
            catch (DbUpdateConcurrencyException)
            {
                if (!votecastExists(id))
                {
                    return NotFound();
                }
                else
                {
                    throw;
                }
            }

            return StatusCode(HttpStatusCode.NoContent);
        }

        // POST: api/votecasts
        [ResponseType(typeof(votecast))]
        public IHttpActionResult Postvotecast(votecast votecast)
        {
            if (!ModelState.IsValid)
            {
                return BadRequest(ModelState);
            }

            db.votecasts.Add(votecast);

            try
            {
                db.SaveChanges();
            }
            catch (DbUpdateException)
            {
                if (votecastExists(votecast.cast_vote_id))
                {
                    return Conflict();
                }
                else
                {
                    throw;
                }
            }

            return CreatedAtRoute("DefaultApi", new { id = votecast.cast_vote_id }, votecast);
        }

        // DELETE: api/votecasts/5
        [ResponseType(typeof(votecast))]
        public IHttpActionResult Deletevotecast(int id)
        {
            votecast votecast = db.votecasts.Find(id);
            if (votecast == null)
            {
                return NotFound();
            }

            db.votecasts.Remove(votecast);
            db.SaveChanges();

            return Ok(votecast);
        }

        protected override void Dispose(bool disposing)
        {
            if (disposing)
            {
                db.Dispose();
            }
            base.Dispose(disposing);
        }

        private bool votecastExists(int id)
        {
            return db.votecasts.Count(e => e.cast_vote_id == id) > 0;
        }
    }
}