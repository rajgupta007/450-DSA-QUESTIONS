// Program to reverse the array in C++

#include<iostream>
#include<vector>

using namespace std;
void input(vector<int> &myVector , int n)
{
    for(int i = 0;i < n ; i++)
    {
        cin >> myVector[i];
    }
}

void print(vector<int> myVector)
{
    for(int  i = 0 ; i < n ; i++)
    {
        cout << myVector[i] << " " ;
    }
}

void reverse(vector<int> &myVector)
{
    int i = 0 , j = myVector.size()-1;
    while(i < j)
    {
        int temp = myVector[i] ;
        myVector[i++] = myVector[j] ;
        myVector[j--] = temp ;
    }
}

int main()
{
    int n;  /// size of the array
    cin >> n;
    vector<int> myVector(n);
    input(myVector);
    reverse(myVector);
    print(myVector);

    return 0;
}