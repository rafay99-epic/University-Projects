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
    
    public partial class votecast
    {
        public int cast_vote_id { get; set; }
        public int user_Id { get; set; }
        public string party { get; set; }
        public string post { get; set; }
        public string email { get; set; }
    
        public virtual userlogin userlogin { get; set; }
    }
}
