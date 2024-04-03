#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int t = m + n;
    int i = m - 1, j = n - 1;
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] >= nums2[j])
        {
            nums1[t - 1] = nums1[i];
            i--;
            t--;
        }
        else
        {
            nums1[t - 1] = nums2[j];
            j--;
            t--;
        }
    }
    while (i >= 0)
    {
        nums1[t - 1] = nums1[i];
        i--;
        t--;
    }
    while (j >= 0)
    {
        nums1[t - 1] = nums2[j];
        j--;
        t--;
    }
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3;
    int n = 3;
    merge(nums1, m, nums2, n);
    for (auto i : nums1)
    {
        cout << i << " ";
    }
    return 0;
}