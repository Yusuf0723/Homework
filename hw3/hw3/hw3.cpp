#include <iostream>

using namespace std;
void forth(int num[], int x) {
        int sum = 0;
        int i = 0;
        while (i < x) {
            sum += num[i];
            i++;
        }
        cout << "Sum: " << sum << endl;
    }
    
void third(int nums[], int x) {
    int a = 0;
    while (a < x) {
        if (nums[a] % 2 == 0) {
            cout << nums[a] << endl;
        }
        a++;
    }
}
int main() {
    int arr[] = { 12, 143, 5, 0, 23, 45, 233, 10, 7 };
    third(arr, x);
}