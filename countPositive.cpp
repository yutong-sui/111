#include <iostream>
#include <vector>
using namespace std;
int countPositive(const vector<int>& nums) {
    int count=0;
    for(int x : nums ){
        if (x > 0){
            count++;
        }
    }
     cout << count << endl;
    return 0;}
int main() {
    vector <int> numbers = {3, -2, 7, 0, -5, 10};

    int result = countPositive(numbers);

    cout << result << endl;

    return 0;
}