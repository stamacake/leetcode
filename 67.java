/*
Given two binary strings, return their sum (also a binary string).

The input strings are both non-empty and contains only characters 1 or 0.

Example 1:
Input: a = "11", b = "1"
Output: "100"

Example 2:
Input: a = "1010", b = "1011"
Output: "10101"
*/

class Solution {
    public String addBinary(String a, String b) {
        StringBuilder binary = new StringBuilder();
        int tmp = 0;
        if(a.length()>=b.length()){
            for(int i=b.length()-1, j=a.length()-1; i>=0; i--, j--){
                
                    
                if(b.charAt(i)=='1' && a.charAt(j)=='1' && tmp ==0){
                    binary.insert(0,"0");
                    tmp =1;
                } else {
                    if(b.charAt(i)=='1' && a.charAt(j)=='1' && tmp ==1){
                    binary.insert(0,"1");
                    tmp =1;
                } else {
                       if((b.charAt(i)=='1' || a.charAt(j)=='1') && tmp ==0){
                    binary.insert(0,"1");
                    tmp =0;
                } else {
                           if((b.charAt(i)=='1' || a.charAt(j)=='1') && tmp ==1){
                    binary.insert(0,"0");
                    tmp =1;
                } else {
                               
                              
                        if(b.charAt(i)=='0' && a.charAt(j)=='0' && tmp ==1){
                    binary.insert(0,"1");
                    tmp =0; 
                           } else {
                             if(b.charAt(i)=='0' && a.charAt(j)=='0' && tmp ==0){
                    binary.insert(0,"0");
                    tmp =0; 
                        }
                       }
               
                               
                           }
                       }
                    }
                }
            }
            
            for(int i = a.length()-b.length()-1;i>=0;i--){
                if(a.charAt(i)=='1' && tmp==1){
                    binary.insert(0,"0");
                    tmp =1;
                } else {
                  if(a.charAt(i)=='0' && tmp==1){
                    binary.insert(0,"1");
                    tmp =0;
                } else {
                      if(a.charAt(i)=='1' && tmp==0){
                    binary.insert(0,"1");
                    tmp =0;
                } else {
                    binary.insert(0,"0");
                    tmp =0; 
                      }
                  }  
                }
            }
        } else {
            for(int i=a.length()-1,j=b.length()-1; i>=0; i--,j--){
                
                if(b.charAt(j)=='1' && a.charAt(i)=='1' && tmp ==0){
               //     System.out.println(b.charAt(j)+" "+a.charAt(i) +" "+tmp +" 1" );
                    binary.insert(0,"0");
                    tmp =1;
                } else {
                    if((b.charAt(j)=='1' && a.charAt(i)=='1') && tmp ==1){
                 //       System.out.println(b.charAt(j)+" "+a.charAt(i) +" "+tmp +" 2" );
                    binary.insert(0,"1");
                    tmp =1;
                } else {
                       if((b.charAt(j)=='1' || a.charAt(i)=='1') && tmp ==0){
                     //     System.out.println(b.charAt(j)+" "+a.charAt(i) +" "+tmp +" 3" );
                    binary.insert(0,"1");
                    tmp =0;
                } else {
                           if((b.charAt(j)=='1' || a.charAt(i)=='1') && tmp ==1){
                        //       System.out.println(b.charAt(j)+" "+a.charAt(i) +" "+tmp +" 4" );
                    binary.insert(0,"0");
                    tmp =1;
                } else {
                               
                              
                        if(b.charAt(j)=='0' && a.charAt(i)=='0' && tmp ==1){
                      //     System.out.println(b.charAt(j)+" "+a.charAt(i) +" "+tmp +" 5" );
                    binary.insert(0,"1");
                    tmp =0; 
                           } else {
                             if(b.charAt(j)=='0' && a.charAt(i)=='0' && tmp ==0){
                              //   System.out.println(b.charAt(j)+" "+a.charAt(i) +" "+tmp +" 6" );
                    binary.insert(0,"0");
                    tmp =0; 
                        }
                       }
               
                               
                           }
                       }
                    }
                }
            }
            for(int i = b.length()-a.length()-1;i>=0;i--){
                if(b.charAt(i)=='1' && tmp==1){
                    binary.insert(0,"0");
                    tmp =1;
                } else {
                  if(b.charAt(i)=='0' && tmp==1){
                    binary.insert(0,"1");
                    tmp =0;
                } else {
                      if(b.charAt(i)=='1' && tmp==0){
                    binary.insert(0,"1");
                    tmp =0;
                } else {
                    binary.insert(0,"0");
                    tmp =0; 
                      }
                  }  
                }
            }
        }
        if(tmp==1)binary.insert(0,"1");
    
        return binary.toString();
    }
}
