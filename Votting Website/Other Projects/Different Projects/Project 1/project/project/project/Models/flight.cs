//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated from a template.
//
//     Manual changes to this file may cause unexpected behavior in your application.
//     Manual changes to this file will be overwritten if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace project.Models
{
    using System;
    using System.Collections.Generic;
    
    public partial class flight
    {
        [System.Diagnostics.CodeAnalysis.SuppressMessage("Microsoft.Usage", "CA2214:DoNotCallOverridableMethodsInConstructors")]
        public flight()
        {
            this.flight_detail = new HashSet<flight_detail>();
            this.ticket_info = new HashSet<ticket_info>();
        }
    
        public int flight_id { get; set; }
        public string airline_name { get; set; }
        public string from_location { get; set; }
        public string to_location { get; set; }
        public Nullable<System.DateTime> departure_time { get; set; }
        public Nullable<System.DateTime> arrival_time { get; set; }
        public Nullable<System.TimeSpan> duration { get; set; }
        public Nullable<int> total_seats { get; set; }
    
        [System.Diagnostics.CodeAnalysis.SuppressMessage("Microsoft.Usage", "CA2227:CollectionPropertiesShouldBeReadOnly")]
        public virtual ICollection<flight_detail> flight_detail { get; set; }
        [System.Diagnostics.CodeAnalysis.SuppressMessage("Microsoft.Usage", "CA2227:CollectionPropertiesShouldBeReadOnly")]
        public virtual ICollection<ticket_info> ticket_info { get; set; }
    }
}
