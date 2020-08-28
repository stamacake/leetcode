/*
Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.
*/

class Solution {
    public String toLowerCase(String str) {
        char[] res = new char[str.length()];
        for(int i =0;i<str.length();i++){
            if(str.charAt(i)<91 &&str.charAt(i)>64 ){
                res[i]=(char)(str.charAt(i)+32);
            }
            else res[i]=str.charAt(i);
        }
        return String.valueOf(res);
    }
}
