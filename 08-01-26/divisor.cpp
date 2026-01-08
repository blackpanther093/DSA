// https://takeuforward.org/plus/dsa/problems/divisors-of-a-number?tab=description
class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> div;
        div.push_back(1);
        for(int i=2; i<=n/2; i++){
            if(n%i==0)
                div.push_back(i);
        }
        div.push_back(n);
        return div;
    }
};