//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated from a template.
//
//     Manual changes to this file may cause unexpected behavior in your application.
//     Manual changes to this file will be overwritten if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace WebApplication1.Models
{
    using System;
    using System.Collections.Generic;
    
    public partial class votehistory
    {
        public int cast_Id { get; set; }
        public string Parties { get; set; }
        public Nullable<int> totalvotes { get; set; }
        public Nullable<int> incommingvotes_ { get; set; }
        public string Status { get; set; }
        public int user_Id { get; set; }
    
        public virtual userlogin userlogin { get; set; }
    }
}
