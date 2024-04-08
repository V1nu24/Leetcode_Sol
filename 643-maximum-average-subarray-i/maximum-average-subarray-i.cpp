class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0,maxAvg=INT_MIN;
        for(int i=0;i<k;i++) {
            sum+= nums[i];
        }
        maxAvg=max(maxAvg,(sum/k));
        int n=nums.size(),st=0;
        for(int i=k;i<n;i++) {
            sum+= nums[i];
            sum-=nums[st++];
            maxAvg=max(maxAvg,(sum/k));
        }
        return maxAvg;
    }
};