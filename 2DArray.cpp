#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> DArray;
    int m;
    int n;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>DArray[i][j];
        }
    }
    

 return 0;
}