class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        vector<int> arr(m + n);
        for (int i = 0; i < m; i++) {
            arr[i] = nums1[i];
        }

        for (int i = 0; i < n; i++) {
            arr[m + i] = nums2[i];
        }
        sort(arr.begin(), arr.end());

        int size = m + n;

        if (size % 2 == 1) {
            return arr[size / 2];
        }
        else {
            return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
        }
    }
};
