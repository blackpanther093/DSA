// https://takeuforward.org/plus/dsa/problems/reverse-an-array?tab=description
class Solution{
public:
    void reverse(int arr[], int n){
        for(int i=0; i<n/2; i++)
            swap(arr[i], arr[n-i-1]);
    }
};
