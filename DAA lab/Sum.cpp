#include <iostream>
using namespace std;

int main()
{
    int arr[] = {62, 71, 89, 4, 1,99,100};
    int n = 6, sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += arr[i];
    }
    cout << "The array sum is: " << sum << endl;
    return sum;
}