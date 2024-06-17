#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int find_first_duplicate(vector<int> &nums)
{
    unordered_set<int> seen;
    for (int num : nums)
    {
        if (seen.count(num) > 0)
        {
            return num;
        }
        seen.insert(num);
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }
    int result = find_first_duplicate(nums);
    cout << result << endl;
    return 0;
}
