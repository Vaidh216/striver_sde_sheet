class Solution {
public:
    double myPow(double x, int n) {
        
        double ans=1;
        if(n > 0){
            while(n > 0){
                if(n%2 == 0){
                    x*=x;
                    n/=2;
                }
                ans*=x;
                n--;
            }
        }else{
            
            while(n < 0){
                if(n%2 == 0){
                    x*=x;
                    n/=2;
                }
                
                n++;
                ans*= (1/x);
            }
        }
        return ans;
    }
};