class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0){
        return false;
       }
       long long int rv=0;
       int ans=x;

       while(x>0){
        int num=x%10;
        rv = (rv*10) + num;
        x=x/10;
       }
       if(rv==ans){
        return true;
       }
       else{
        return false;
       }
    }
};