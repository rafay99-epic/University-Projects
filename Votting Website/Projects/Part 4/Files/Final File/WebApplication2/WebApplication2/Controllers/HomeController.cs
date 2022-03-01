using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace WebApplication2.Controllers
{
    public class HomeController : Controller
    {
        public ActionResult Index()
        {
            ViewBag.Title = "Home Page";
            /*
            using (DBEntities db = new DBEntities)
            {
                List<admin_LoginController> admin_Logins = db.Admin_login.ToList();
                List<userloginsController> user_Logins = db.userlogin.ToList();
                List<verficationsController> verfiy = db.verfication.ToList();
                List<votecastsController> votecasts = db.castvote.ToList();
                List<votehistoriesController> history = db.history.ToList();

                var q = (from pd in DataContext.userlogin
                         join od in DataContext.castvote on pd.userlogin equals od.userlogin
                         orderby od.castvote
                         select new
                         {
                             od.user_Id,
                             pd.name,
                             pd.email,
                             od.password,
                             od.country,
                             pd.user_id,
                         }).ToList();
            }
            */
            return View();
        }
    }
}
