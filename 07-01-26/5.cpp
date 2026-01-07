// https://takeuforward.org/plus/dsa/problems/gcd-of-two-numbers
class Solution {
public:
    int GCD(int n1,int n2) {
        int low=(n1<n2)?n1:n2;
        if(low%n1==0 && low%n2==0)
            return low;
        int g_div=1;
        int i=low/2+1;
        while(i>0){
            if(n1%i==0 && n2%i==0){
                g_div=i;
                break;
            }
            i--;
        }
        return g_div;
    }
};