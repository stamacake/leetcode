/*
Implement int sqrt(int x).

Compute and return the square root of x, where x is guaranteed to be a non-negative integer.

Since the return type is an integer, the decimal digits are truncated and only the integer part of the result is returned.
*/
class Solution {

    public int mySqrt(int x) {
         if(x==0)return 0;
        
        int digits = 0;
        int xCopy = x;
        while(xCopy>0){
            xCopy /= 10;
            digits++;
        }
          if(digits%2==0) digits/=2; else digits = (digits+1)/2;
        long left = 1;
        long right = 9;
        for(int i=0;i<digits;i++){
            right = right*10+9;
        }
        long tmp = (left+right)/2;
        long tmp2 = 1;
        while(!(tmp*tmp<=x &&(tmp+1)*(tmp+1)>=x)){
            tmp2 = tmp*tmp;
            if(tmp2>x) {
                right = tmp;
            } else {
                if(tmp2<x){
                    left = tmp;
                } else return (int)tmp;
            }
            tmp = (left+right)/2;
         
        }
        if((tmp+1)*(tmp+1)==x) return (int)tmp+1;
              return (int)tmp;
    }
}
