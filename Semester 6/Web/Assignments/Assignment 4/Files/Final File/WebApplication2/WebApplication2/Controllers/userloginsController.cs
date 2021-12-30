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
using WebApplication2.Models;

namespace WebApplication2.Controllers
{
    public class userloginsController : ApiController
    {
        private voteDBEntities1 db = new voteDBEntities1();

        // GET: api/userlogins
        public IQueryable<userlogin> Getuserlogins()
        {
            return db.userlogins;
        }

        // GET: api/userlogins/5
        [ResponseType(typeof(userlogin))]
        public IHttpActionResult Getuserlogin(int id)
        {
            userlogin userlogin = db.userlogins.Find(id);
            if (userlogin == null)
            {
                return NotFound();
            }

            return Ok(userlogin);
        }

        // PUT: api/userlogins/5
        [ResponseType(typeof(void))]
        public IHttpActionResult Putuserlogin(int id, userlogin userlogin)
        {
            if (!ModelState.IsValid)
            {
                return BadRequest(ModelState);
            }

            if (id != userlogin.user_Id)
            {
                return BadRequest();
            }

            db.Entry(userlogin).State = EntityState.Modified;

            try
            {
                db.SaveChanges();
            }
            catch (DbUpdateConcurrencyException)
            {
                if (!userloginExists(id))
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

        // POST: api/userlogins
        [ResponseType(typeof(userlogin))]
        public IHttpActionResult Postuserlogin(userlogin userlogin)
        {
            if (!ModelState.IsValid)
            {
                return BadRequest(ModelState);
            }

            db.userlogins.Add(userlogin);

            try
            {
                db.SaveChanges();
            }
            catch (DbUpdateException)
            {
                if (userloginExists(userlogin.user_Id))
                {
                    return Conflict();
                }
                else
                {
                    throw;
                }
            }

            return CreatedAtRoute("DefaultApi", new { id = userlogin.user_Id }, userlogin);
        }

        // DELETE: api/userlogins/5
        [ResponseType(typeof(userlogin))]
        public IHttpActionResult Deleteuserlogin(int id)
        {
            userlogin userlogin = db.userlogins.Find(id);
            if (userlogin == null)
            {
                return NotFound();
            }

            db.userlogins.Remove(userlogin);
            db.SaveChanges();

            return Ok(userlogin);
        }

        protected override void Dispose(bool disposing)
        {
            if (disposing)
            {
                db.Dispose();
            }
            base.Dispose(disposing);
        }

        private bool userloginExists(int id)
        {
            return db.userlogins.Count(e => e.user_Id == id) > 0;
        }
    }
}