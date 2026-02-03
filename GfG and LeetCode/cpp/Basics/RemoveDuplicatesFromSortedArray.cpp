class Solution
{

public:
    int removeDuplicates(vector<int> &nums)
    {

        if (nums.size() == 1)
            return 1;

        int cnt = 0;

        int n = 1;

        for (int i = 0; i < nums.size() - 1; i++)
        {

            if (nums[i] != nums[i + 1])
            {

                cnt++;

                nums[n] = nums[i + 1];

                n++;
            }
        }

        return cnt + 1;
    }
};