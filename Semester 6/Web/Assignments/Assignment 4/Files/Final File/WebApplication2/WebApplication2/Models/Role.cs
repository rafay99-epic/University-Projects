//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated from a template.
//
//     Manual changes to this file may cause unexpected behavior in your application.
//     Manual changes to this file will be overwritten if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace WebApplication2.Models
{
    using System;
    using System.Collections.Generic;
    
    public partial class Role
    {
        public int role_Id { get; set; }
        public int user_ID { get; set; }
        public string role_name { get; set; }
        public int admin_Id { get; set; }
    
        public virtual admin_Login admin_Login { get; set; }
        public virtual userlogin userlogin { get; set; }
    }
}
