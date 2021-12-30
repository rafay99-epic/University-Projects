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
    public class flightsController : ApiController
    {
        private Database1Entities db = new Database1Entities();

        // GET: api/flights
        public IQueryable<flight> Getflights()
        {
            return db.flights;
        }

        // GET: api/flights/5
        [ResponseType(typeof(flight))]
        public IHttpActionResult Getflight(int id)
        {
            flight flight = db.flights.Find(id);
            if (flight == null)
            {
                return NotFound();
            }

            return Ok(flight);
        }

        // PUT: api/flights/5
        [ResponseType(typeof(void))]
        public IHttpActionResult Putflight(int id, flight flight)
        {
            if (!ModelState.IsValid)
            {
                return BadRequest(ModelState);
            }

            if (id != flight.flight_id)
            {
                return BadRequest();
            }

            db.Entry(flight).State = EntityState.Modified;

            try
            {
                db.SaveChanges();
            }
            catch (DbUpdateConcurrencyException)
            {
                if (!flightExists(id))
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

        // POST: api/flights
        [ResponseType(typeof(flight))]
        public IHttpActionResult Postflight(flight flight)
        {
            if (!ModelState.IsValid)
            {
                return BadRequest(ModelState);
            }

            db.flights.Add(flight);

            try
            {
                db.SaveChanges();
            }
            catch (DbUpdateException)
            {
                if (flightExists(flight.flight_id))
                {
                    return Conflict();
                }
                else
                {
                    throw;
                }
            }

            return CreatedAtRoute("DefaultApi", new { id = flight.flight_id }, flight);
        }

        // DELETE: api/flights/5
        [ResponseType(typeof(flight))]
        public IHttpActionResult Deleteflight(int id)
        {
            flight flight = db.flights.Find(id);
            if (flight == null)
            {
                return NotFound();
            }

            db.flights.Remove(flight);
            db.SaveChanges();

            return Ok(flight);
        }

        protected override void Dispose(bool disposing)
        {
            if (disposing)
            {
                db.Dispose();
            }
            base.Dispose(disposing);
        }

        private bool flightExists(int id)
        {
            return db.flights.Count(e => e.flight_id == id) > 0;
        }
    }
}