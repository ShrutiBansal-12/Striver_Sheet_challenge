class Solution {
public:
//approach using recursion
    double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        if(n<0){
            n=abs(n);   //changing x and n
            x=1.0/x;
        }
        if(n%2==0){
            return myPow(x*x,n/2);   //dividing recursion
        }
        else{
            return x*myPow(x,n-1);  //decreasing recursion
        }
    }
};
