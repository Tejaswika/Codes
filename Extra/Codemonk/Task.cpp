#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
	while(t--){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int *ptr = new int[k + 1];
    ptr += k; //last pos
    ptr = arr;
    for (int i = n - 1, count{0}; count < k; i--)
    {
        ptr--;
        *ptr = arr[i];
        count++;
    }
    // cout << *ptr + 1 << endl;
    for (int i = 0; i < n; i++)
    {
        cout << *ptr << " ";
        ptr += 1;
    }
	}
}