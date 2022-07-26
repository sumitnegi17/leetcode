class Solution {
public:
    long long int mySqrt(long long int x) {
        int low=1;
        int high=x;
        int ans=-1;
        if(x==0||x==1)
            return x;
            
        while(low<=high){
            long long int mid = low+(high-low)/2;
            long long int sqr=mid*mid;
            if(sqr==x)
                return mid;
            else if(sqr<x){
                ans=mid;
                low=mid+1;
                
            }
            else {
                high=mid-1;
            }
            
            
        }
        return ans;
        
        
    }
};