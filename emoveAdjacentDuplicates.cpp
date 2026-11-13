#include <iostream>
#include <vector>
using namespace std;

// 返回去掉相邻重复元素后的新 vector
vector<int> removeAdjacentDuplicates(const vector<int>& nums) {
    vector<int> result;

    for (int x : nums) {
        if (result.empty() || result.back() != x) {
            result.push_back(x);
        }
    }

    return result;
}

// 打印一个 vector
void printVector(const vector<int>& nums) {
    for (int x : nums) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    vector<int> nums1 = {4, 4, 7, 7, 7, 4, 9, 9};
    vector<int> nums2 = {};
    vector<int> nums3 = {5, 5, 5};

    vector<int> answer1 = removeAdjacentDuplicates(nums1);
    vector<int> answer2 = removeAdjacentDuplicates(nums2);
    vector<int> answer3 = removeAdjacentDuplicates(nums3);

    cout << "Test 1: ";
    printVector(answer1);

    cout << "Test 2: ";
    printVector(answer2);

    cout << "Test 3: ";
    printVector(answer3);

    return 0;
}