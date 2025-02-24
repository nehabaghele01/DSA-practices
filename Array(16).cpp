#include <iostream>
using namespace std;
int a[10];

// Initialize / deaclaration
int a[5] = {1, 2, 3, 4, 5};
int name[] = {1, 2, 3, 3};
int arr[10];
int a[4] = {2, 4}; // storage loss
int arr[5] = {0};  // at all the index(0 1 2 3 4) - zero value

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int arr[] = {1, 2, 3, 4, 5};
  int arr[6] = {2, 4, 4};
  int arr[6] = {0};
  int arr[4];
  for (int i = 0; i < 4; i++)
  {
    cout << arr[i];
  }
  for (int i = 0; i < 4; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}

int main()
{
  int size;
  cin >> size;
  int arr[1000];
  for (int i = 0; i < size; i++)
    cin >> arr[i];

  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";

  return 0;
}

int main()
{
  int arr[5] = {1, 3, 4, 5, 6};
  bool a;
  cout << sizeof(a) << " ";

  return 0;

} /// size of a = 1 byte

int main()
{
  int arr[5] = {1, 3, 4, 5, 6};
  int a;

  cout << sizeof(a) << endl;

  return 0;

} // a = 4 byte (int)

int main()
{ // 4*5=20
  int arr[5] = {3, 4, 5, 6, 7};
  cout << sizeof(arr) / sizeof(arr[0]) << endl; // 20/4 = 5
  return 0;
}

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int ans = INT16_MAX;
  // min vaalue
  for (int i = 0; i < 5; i++)
  {
    if (arr[i] < ans)
      ans = arr[i];
  }
  cout << ans;
  return 0;
}

int main()
{
  int arr[5] = {1, 2, 9, 4, 5};
  int ans = INT16_MIN;
  // min vaalue
  for (int i = 0; i < 5; i++)
  {
    if (arr[i] > ans)
      ans = arr[i];
  }
  cout << ans << endl;
  return 0;
}

// Reverse array
int main()
{
  int arr[6] = {1, 2, 3, 4, 5, 6};
  int start = 0, end = 5;
  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  };
  for (int i = 0; i < 6; i++)
    cout << arr[i] << " ";
}

// Fibonacci series

int main()
{
  int n;
  cout << "Enter the number:";
  cin >> n;
  int arr[1000]; // take max size
  // first = 0;
  // second = 1;

  arr[0] = 0;
  arr[1] = 1;

  for (int i = 2; i <= n - 1; i++)
    arr[i] = arr[i - 1] + arr[i - 2];

  cout << arr[n - 1] << " ";
}

void fun(int a[], int n)
{
  cout << sizeof(a) << endl;
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
}

int main()
{
  int arr[7] = {3, 2, 1, 6, 7, 4, 5};
  fun(arr, 7);
}