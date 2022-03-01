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
using assignment_wad.Models;

namespace assignment_wad.Controllers
{
    public class flight_detailController : ApiController
    {
        private Database1Entities db = new Database1Entities();

        // GET: api/flight_detail
        public IQueryable<flight_detail> Getflight_detail()
        {
            return db.flight_detail;
        }

        // GET: api/flight_detail/5
        [ResponseType(typeof(flight_detail))]
        public IHttpActionResult Getflight_detail(int id)
        {
            flight_detail flight_detail = db.flight_detail.Find(id);
            if (flight_detail == null)
            {
                return NotFound();
            }

            return Ok(flight_detail);
        }

        // PUT: api/flight_detail/5
        [ResponseType(typeof(void))]
        public IHttpActionResult Putflight_detail(int id, flight_detail flight_detail)
        {
            if (!ModelState.IsValid)
            {
                return BadRequest(ModelState);
            }

            if (id != flight_detail.flight_no)
            {
                return BadRequest();
            }

            db.Entry(flight_detail).State = EntityState.Modified;

            try
            {
                db.SaveChanges();
            }
            catch (DbUpdateConcurrencyException)
            {
                if (!flight_detailExists(id))
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

        // POST: api/flight_detail
        [ResponseType(typeof(flight_detail))]
        public IHttpActionResult Postflight_detail(flight_detail flight_detail)
        {
            if (!ModelState.IsValid)
            {
                return BadRequest(ModelState);
            }

            db.flight_detail.Add(flight_detail);

            try
            {
                db.SaveChanges();
            }
            catch (DbUpdateException)
            {
                if (flight_detailExists(flight_detail.flight_no))
                {
                    return Conflict();
                }
                else
                {
                    throw;
                }
            }

            return CreatedAtRoute("DefaultApi", new { id = flight_detail.flight_no }, flight_detail);
        }

        // DELETE: api/flight_detail/5
        [ResponseType(typeof(flight_detail))]
        public IHttpActionResult Deleteflight_detail(int id)
        {
            flight_detail flight_detail = db.flight_detail.Find(id);
            if (flight_detail == null)
            {
                return NotFound();
            }

            db.flight_detail.Remove(flight_detail);
            db.SaveChanges();

            return Ok(flight_detail);
        }

        protected override void Dispose(bool disposing)
        {
            if (disposing)
            {
                db.Dispose();
            }
            base.Dispose(disposing);
        }

        private bool flight_detailExists(int id)
        {
            return db.flight_detail.Count(e => e.flight_no == id) > 0;
        }
    }
}