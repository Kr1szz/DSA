class Solution {
  public:
    int sum_of_ap(int n, int a, int d) {
        // Code here.
            int res=n*(2*a+(n-1)*d)/2;
            return res;

        
    }
};