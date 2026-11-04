class Solution {
public:
    int mirrorDistance(int n) {
        int original=n;
        int rv=0;
        while(n>0){
            int digit=n%10;
            rv=rv*10+digit;
            n=n/10;

        }
        return abs(original-rv);
        
    }
};