/*
Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".

 

Example 1:

Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"
/*

class Solution {
public:
    string defangIPaddr(string address) {
        for(int i=0;i<address.size();i++){
            if(address[i]=='.'){
                address.insert(i, "[");
                address.insert(i+2, "]");
                i++;i++;
            }
        
        }
        
          return address;
    }
  
};

/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Defanging an IP Address.
Memory Usage: 6 MB, less than 100.00% of C++ online submissions for Defanging an IP Address.
*/
