class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
    int w=abs(x);
    long long rev=0;
    while(x!=0){
        int digit=x%10;
        rev=rev*10+digit;
        x=x/10;
    }
    if(int(rev)==int(w)){
        return true;
    }
    else{
        return false;
    }
    }
};