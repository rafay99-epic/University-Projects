﻿//------------------------------------------------------------------------------
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
    using System.Data.Entity;
    using System.Data.Entity.Infrastructure;
    
    public partial class voteDBEntities1 : DbContext
    {
        public voteDBEntities1()
            : base("name=voteDBEntities1")
        {
        }
    
        protected override void OnModelCreating(DbModelBuilder modelBuilder)
        {
            throw new UnintentionalCodeFirstException();
        }
    
        public virtual DbSet<admin_Login> admin_Login { get; set; }
        public virtual DbSet<Role> Roles { get; set; }
        public virtual DbSet<userlogin> userlogins { get; set; }
        public virtual DbSet<verfication> verfications { get; set; }
        public virtual DbSet<votecast> votecasts { get; set; }
        public virtual DbSet<votehistory> votehistories { get; set; }
    }
}
