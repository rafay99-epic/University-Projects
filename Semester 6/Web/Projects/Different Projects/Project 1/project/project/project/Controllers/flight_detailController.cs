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
    public class flight_detailController : Controller
    {
        private Database1Entities db = new Database1Entities();

        // GET: flight_detail
        public ActionResult Index()
        {
            var flight_detail = db.flight_detail.Include(f => f.flight);
            return View(flight_detail.ToList());
        }

        // GET: flight_detail/Details/5
        public ActionResult Details(int? id)
        {
            if (id == null)
            {
                return new HttpStatusCodeResult(HttpStatusCode.BadRequest);
            }
            flight_detail flight_detail = db.flight_detail.Find(id);
            if (flight_detail == null)
            {
                return HttpNotFound();
            }
            return View(flight_detail);
        }

        // GET: flight_detail/Create
        public ActionResult Create()
        {
            ViewBag.flight_id = new SelectList(db.flights, "flight_id", "airline_name");
            return View();
        }

        // POST: flight_detail/Create
        // To protect from overposting attacks, enable the specific properties you want to bind to, for 
        // more details see https://go.microsoft.com/fwlink/?LinkId=317598.
        [HttpPost]
        [ValidateAntiForgeryToken]
        public ActionResult Create([Bind(Include = "flight_departure_date,price,available_seats,flight_id,flight_no")] flight_detail flight_detail)
        {
            if (ModelState.IsValid)
            {
                db.flight_detail.Add(flight_detail);
                db.SaveChanges();
                return RedirectToAction("Index");
            }

            ViewBag.flight_id = new SelectList(db.flights, "flight_id", "airline_name", flight_detail.flight_id);
            return View(flight_detail);
        }

        // GET: flight_detail/Edit/5
        public ActionResult Edit(int? id)
        {
            if (id == null)
            {
                return new HttpStatusCodeResult(HttpStatusCode.BadRequest);
            }
            flight_detail flight_detail = db.flight_detail.Find(id);
            if (flight_detail == null)
            {
                return HttpNotFound();
            }
            ViewBag.flight_id = new SelectList(db.flights, "flight_id", "airline_name", flight_detail.flight_id);
            return View(flight_detail);
        }

        // POST: flight_detail/Edit/5
        // To protect from overposting attacks, enable the specific properties you want to bind to, for 
        // more details see https://go.microsoft.com/fwlink/?LinkId=317598.
        [HttpPost]
        [ValidateAntiForgeryToken]
        public ActionResult Edit([Bind(Include = "flight_departure_date,price,available_seats,flight_id,flight_no")] flight_detail flight_detail)
        {
            if (ModelState.IsValid)
            {
                db.Entry(flight_detail).State = EntityState.Modified;
                db.SaveChanges();
                return RedirectToAction("Index");
            }
            ViewBag.flight_id = new SelectList(db.flights, "flight_id", "airline_name", flight_detail.flight_id);
            return View(flight_detail);
        }

        // GET: flight_detail/Delete/5
        public ActionResult Delete(int? id)
        {
            if (id == null)
            {
                return new HttpStatusCodeResult(HttpStatusCode.BadRequest);
            }
            flight_detail flight_detail = db.flight_detail.Find(id);
            if (flight_detail == null)
            {
                return HttpNotFound();
            }
            return View(flight_detail);
        }

        // POST: flight_detail/Delete/5
        [HttpPost, ActionName("Delete")]
        [ValidateAntiForgeryToken]
        public ActionResult DeleteConfirmed(int id)
        {
            flight_detail flight_detail = db.flight_detail.Find(id);
            db.flight_detail.Remove(flight_detail);
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
