// https://leetcode.com/problems/reverse-integer/description/
class Solution {
public:
    int reverse(int x) {
        int temp=x;
        int y=0;
        long long out=0;
        while(temp!=0){ y++; temp/=10;}
        temp=x;
        while(temp!=0){
            out+=(temp%10)*pow(10,y-1);
            y--;
            temp/=10;
        }
        if(out<pow(-2,31) || out>pow(2,31)-1)
            return 0;
        return out;
    }
};