class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
    for(int i=0;i<s.length();i++)
    {
        int value=0;
        switch(s[i]){
            case 'I': value=1;
            break;
            case 'V': value=5;
            break;
            case 'X': value=10;
            break;
            case 'L': value=50;
            break;
            case 'C': value=100;
            break;
            case 'D': value=500;
            break;
            case 'M': value=1000;
            break;
        }
        if(i+1<s.length()){
            int val=0;
            switch(s[i+1]){
            case 'I': val=1;
            break;
            case 'V': val=5;
            break;
            case 'X': val=10;
            break;
            case 'L': val=50;
            break;
            case 'C': val=100;
            break;
            case 'D': val=500;
            break;
            case 'M': val=1000;
            break;
        }
        if(value>=val){
            ans+=value;
        }
        else{
            ans-=value;
        }
        }
        else{
            ans+=value;
        }
    }
    return ans;
    }
};