using System;
using System.Collections.Generic;
using System.Data;
using System.Data.Entity;
using System.Linq;
using System.Net;
using System.Web;
using System.Web.Mvc;
using project.Models;

namespace project.Controllers
{
    public class ticket_infoController : Controller
    {
        private Database1Entities db = new Database1Entities();

        // GET: ticket_info
        public ActionResult Index()
        {
            var ticket_info = db.ticket_info.Include(t => t.flight).Include(t => t.flight_detail).Include(t => t.passenger);
            return View(ticket_info.ToList());
        }

        // GET: ticket_info/Details/5
        public ActionResult Details(int? id)
        {
            if (id == null)
            {
                return new HttpStatusCodeResult(HttpStatusCode.BadRequest);
            }
            ticket_info ticket_info = db.ticket_info.Find(id);
            if (ticket_info == null)
            {
                return HttpNotFound();
            }
            return View(ticket_info);
        }
        public ActionResult Orderbyname()
        {

        }

        // GET: ticket_info/Create
        public ActionResult Create()
        {
            ViewBag.flight_id = new SelectList(db.flights, "flight_id", "airline_name");
            ViewBag.flight_no = new SelectList(db.flight_detail, "flight_no", "flight_no");
            ViewBag.profile_id = new SelectList(db.passengers, "profile_id", "password");
            return View();
        }

        // POST: ticket_info/Create
        // To protect from overposting attacks, enable the specific properties you want to bind to, for 
        // more details see https://go.microsoft.com/fwlink/?LinkId=317598.
        [HttpPost]
        [ValidateAntiForgeryToken]
        public ActionResult Create([Bind(Include = "ticket_id,profile_id,flight_id,flight_no,status")] ticket_info ticket_info)
        {
            if (ModelState.IsValid)
            {
                db.ticket_info.Add(ticket_info);
                db.SaveChanges();
                return RedirectToAction("Index");
            }

            ViewBag.flight_id = new SelectList(db.flights, "flight_id", "airline_name", ticket_info.flight_id);
            ViewBag.flight_no = new SelectList(db.flight_detail, "flight_no", "flight_no", ticket_info.flight_no);
            ViewBag.profile_id = new SelectList(db.passengers, "profile_id", "password", ticket_info.profile_id);
            return View(ticket_info);
        }

        // GET: ticket_info/Edit/5
        public ActionResult Edit(int? id)
        {
            if (id == null)
            {
                return new HttpStatusCodeResult(HttpStatusCode.BadRequest);
            }
            ticket_info ticket_info = db.ticket_info.Find(id);
            if (ticket_info == null)
            {
                return HttpNotFound();
            }
            ViewBag.flight_id = new SelectList(db.flights, "flight_id", "airline_name", ticket_info.flight_id);
            ViewBag.flight_no = new SelectList(db.flight_detail, "flight_no", "flight_no", ticket_info.flight_no);
            ViewBag.profile_id = new SelectList(db.passengers, "profile_id", "password", ticket_info.profile_id);
            return View(ticket_info);
        }

        // POST: ticket_info/Edit/5
        // To protect from overposting attacks, enable the specific properties you want to bind to, for 
        // more details see https://go.microsoft.com/fwlink/?LinkId=317598.
        [HttpPost]
        [ValidateAntiForgeryToken]
        public ActionResult Edit([Bind(Include = "ticket_id,profile_id,flight_id,flight_no,status")] ticket_info ticket_info)
        {
            if (ModelState.IsValid)
            {
                db.Entry(ticket_info).State = EntityState.Modified;
                db.SaveChanges();
                return RedirectToAction("Index");
            }
            ViewBag.flight_id = new SelectList(db.flights, "flight_id", "airline_name", ticket_info.flight_id);
            ViewBag.flight_no = new SelectList(db.flight_detail, "flight_no", "flight_no", ticket_info.flight_no);
            ViewBag.profile_id = new SelectList(db.passengers, "profile_id", "password", ticket_info.profile_id);
            return View(ticket_info);
        }

        // GET: ticket_info/Delete/5
        public ActionResult Delete(int? id)
        {
            if (id == null)
            {
                return new HttpStatusCodeResult(HttpStatusCode.BadRequest);
            }
            ticket_info ticket_info = db.ticket_info.Find(id);
            if (ticket_info == null)
            {
                return HttpNotFound();
            }
            return View(ticket_info);
        }

        // POST: ticket_info/Delete/5
        [HttpPost, ActionName("Delete")]
        [ValidateAntiForgeryToken]
        public ActionResult DeleteConfirmed(int id)
        {
            ticket_info ticket_info = db.ticket_info.Find(id);
            db.ticket_info.Remove(ticket_info);
            db.SaveChanges();
            return RedirectToAction("Index");
        }

        protected override void Dispose(bool disposing)
        {
            if (disposing)
            {
                db.Dispose();
            }
            base.Dispose(disposing);
        }
    }
}
