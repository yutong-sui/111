#include <iostream>
#include <vector>
using namespace std;
void addBonus(vector<int>&scores, int k){
    for(int&x: scores){
        x+=k;
        if(x>100){x=100;}else{
            x+=0;
        }
    }
}



int main() {
    vector<int> scores = {58, 76, 98};

    addBonus(scores, 5);

    for (int score : scores) {
        cout << score << " ";
    }
    cout << "\n";

    return 0;
}