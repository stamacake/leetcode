/*
Given a date string in the form Day Month Year, where:

Day is in the set {"1st", "2nd", "3rd", "4th", ..., "30th", "31st"}.
Month is in the set {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"}.
Year is in the range [1900, 2100].
Convert the date string to the format YYYY-MM-DD, where:

YYYY denotes the 4 digit year.
MM denotes the 2 digit month.
DD denotes the 2 digit day.
 
*/

class Solution {
    
    public enum Month{
        Jan("01"),Feb("02"),Mar("03"),
        Apr("04"),May("05"),Jun("06"),
        Jul("07"),Aug("08"),Sep("09"),
        Oct("10"),Nov("11"),Dec("12");
        
        public final String num;
 
        private Month(String num) {
            this.num = num;
        }
    }
    
    public String reformatDate(String date) {
        String[] formatDate = date.split(" ");
        String day;
        if(formatDate[0].length()==3) day="0"+formatDate[0].substring(0,1);
        else day=formatDate[0].substring(0,2);
        return formatDate[2]+"-"+Month.valueOf(formatDate[1]).num+"-"+day;
    }
}
