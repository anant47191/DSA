class Solution {
public:
vector<int> sortedSquares(vector<int>& nums) {
vector<int> a;
vector<int> b;


    int n = nums.size();

    for (int i = 0; i < n; i++) {
        if (nums[i] >= 0) {
            b.push_back(nums[i]);
        } else {
            a.push_back(nums[i]);
        }
    }

    int i = 0, j = 0;
    int neg = a.size();
    int pos = b.size();

    vector<int> res(neg + pos);

    for (int i = 0; i < neg; i++) {
        a[i] = a[i] * a[i];
    }

    reverse(a.begin(), a.end());

    for (int i = 0; i < pos; i++) {
        b[i] = b[i] * b[i];
    }

    int id = 0;

    while (i < neg && j < pos) {
        if (a[i] <= b[j]) {
            res[id] = a[i];
            i++;
        } else {
            res[id] = b[j];
            j++;
        }
        id++;
    }

    while (i < neg) {
        res[id] = a[i];
        id++;
        i++;
    }

    while (j < pos) {
        res[id] = b[j];
        id++;
        j++;
    }

    return res;
}


};
