#include <iostream>
#include <vector>
using namespace std;
int sumPositive(const vector<int>& nums) {
    int sum = 0;
    for(int x : nums){
        if(x>0){
            sum+=x;
        }
    
    }
    return sum;}
int main() {
    vector<int> numbers = {3, -2, 7, 0, -5, 10};

    int result=sumPositive(numbers);


cout<<result;

    return 0;
}