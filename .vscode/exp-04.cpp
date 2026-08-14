#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {10, 20, 30, 40, 50};

    cout << "Elements are: ";

    for (auto x : nums) {
        cout << x << " ";
    }

    return 0;
}