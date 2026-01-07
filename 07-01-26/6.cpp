// https://takeuforward.org/plus/dsa/problems/check-if-the-number-if-armstrong?tab=description
class Solution {
public:
    bool isArmstrong(int n) {
        int temp=n;
        int digit=0;
        while(temp!=0){digit++; temp/=10;}
        int sum=0;
        temp=n;
        while(temp!=0){
            sum+=pow(temp%10, digit);
            temp/=10;
        }
        return sum==n;
    }
};