class Solution {
public:
    double myPow(double x, int n) {

        return (double)pow(x,n);




        // if (n == INT_MAX) return (x == 1) ? 1 : (x == -1) ? -1 : 0;
        // if (n == INT_MIN) return (x == 1 || x == -1) ? 1 : 0;
        // double num = 1;
        // if(n>=0){
        //     while(n>0){
        //         num *= x;
        //         n--;
        //     }
        // }
        // else{
        //     n = -n;
        //     while(n>0){
        //         num *= x;
        //         n--;
        //     }
        //     num = 1.0/num;
        // }
        // return num;
    
        // if(n == 0) return 1.0;
        // if(n == 1) return x;
        // if(n < 0) return myPow(1/x, -n);

        // double result = 1;
        // for(int i = 0; i < n; ++i)
        //     result *= x;

        // return result;

        // // // // if (x > (-100) & x < 100 )
        // // // // {
        // // // //     if ( x != 0 || n > 0){
                  
        // // //        double ans = pow(x,n);

        // // //         return ans;

        // // return myPow(x, n);  
        
    }
};