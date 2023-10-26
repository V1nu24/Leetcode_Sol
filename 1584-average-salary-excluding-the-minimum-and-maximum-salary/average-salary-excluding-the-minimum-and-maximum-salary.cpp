class Solution {
public:
    double average(vector<int>& salary) {
        // calculate the total sum
        int sum = accumulate(salary.begin(), salary.end(), 0);
        // find the maximum value
        int mx = *max_element(salary.begin(), salary.end());
        // find the minimum value
        int mi = *min_element(salary.begin(), salary.end());
		// exclude mi & mx and get the avg 
        return (double) (sum - mx - mi) / (salary.size() - 2);
    }
};