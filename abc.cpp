#include <iostream>
#include <vector>
using namespace std;
int countPassing(const vector<int>& scores, int passingScore) {
    int count = 0;
    for (int score : scores) {
        if (score >= passingScore) {
            count++;
        }
    }
    return count;
}


int main() {
    vector<int> scores = {58, 60, 75, 90, 42};

    int passed = countPassing(scores, 60);

    cout << "Passed: " << passed << "\n";

    return 0;
}