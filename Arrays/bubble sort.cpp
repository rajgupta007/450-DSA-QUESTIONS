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

void print(vector<int> myVector , int n)
{
    for(int  i = 0 ; i < n ; i++)
    {
        cout << myVector[i] << " " ;
    }
}
void bubbleSort(vector<int> &myVec , int n)
{
    int len = myVec.size();
    for(int i = 0 ; i < len ; i++)
    {
        for(int j = i+1 ; j < len ; j++)
        {
            if(myVec[i] > myVec[j])
            {
                swap(myVec[i] , myVec[j]);
            }
        }
    }
}

int main()
{
    int n;  /// size of the array
    cin >> n;
    vector<int> myVector(n);
    input(myVector , n);
    bubbleSort(myVector , n);
    print(myVector , n);

    return 0;
}