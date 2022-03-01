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
    public class votehistoriesController : ApiController
    {
        private vote_databaseEntities3 db = new vote_databaseEntities3();

        // GET: api/votehistories
        public IQueryable<votehistory> Getvotehistories()
        {
            return db.votehistories;
        }

        // GET: api/votehistories/5
        [ResponseType(typeof(votehistory))]
        public IHttpActionResult Getvotehistory(int id)
        {
            votehistory votehistory = db.votehistories.Find(id);
            if (votehistory == null)
            {
                return NotFound();
            }

            return Ok(votehistory);
        }

        // PUT: api/votehistories/5
        [ResponseType(typeof(void))]
        public IHttpActionResult Putvotehistory(int id, votehistory votehistory)
        {
            if (!ModelState.IsValid)
            {
                return BadRequest(ModelState);
            }

            if (id != votehistory.cast_Id)
            {
                return BadRequest();
            }

            db.Entry(votehistory).State = System.Data.Entity.EntityState.Modified;

            try
            {
                db.SaveChanges();
            }
            catch (DbUpdateConcurrencyException)
            {
                if (!votehistoryExists(id))
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

        // POST: api/votehistories
        [ResponseType(typeof(votehistory))]
        public IHttpActionResult Postvotehistory(votehistory votehistory)
        {
            if (!ModelState.IsValid)
            {
                return BadRequest(ModelState);
            }

            db.votehistories.Add(votehistory);

            try
            {
                db.SaveChanges();
            }
            catch (DbUpdateException)
            {
                if (votehistoryExists(votehistory.cast_Id))
                {
                    return Conflict();
                }
                else
                {
                    throw;
                }
            }

            return CreatedAtRoute("DefaultApi", new { id = votehistory.cast_Id }, votehistory);
        }

        // DELETE: api/votehistories/5
        [ResponseType(typeof(votehistory))]
        public IHttpActionResult Deletevotehistory(int id)
        {
            votehistory votehistory = db.votehistories.Find(id);
            if (votehistory == null)
            {
                return NotFound();
            }

            db.votehistories.Remove(votehistory);
            db.SaveChanges();

            return Ok(votehistory);
        }

        protected override void Dispose(bool disposing)
        {
            if (disposing)
            {
                db.Dispose();
            }
            base.Dispose(disposing);
        }

        private bool votehistoryExists(int id)
        {
            return db.votehistories.Count(e => e.cast_Id == id) > 0;
        }
    }
}