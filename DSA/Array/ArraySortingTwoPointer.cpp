#include<iostream>
#include<vector>
// #include<algorithm>

using namespace std;
//  void swap(vector<int>&v,int i, int j){
//   int temp;
//   v[i]=temp;
//   v[i]=v[j];
//    v[j]=temp;
//    }
void sort01(vector<int>&v, int n){
    int i=0, j=n-1;
    while(i<j){ if(v[i]==0) i++;
   if(v[j]==1) j--;
   if(i>j) break;
    if(v[i]==1 && v[j]==0){ 
      // swap(v,i,j);
      v[i]=0,v[j]=1; 
      i++,j--;
    }
    
   //  swap(v,i,j);
   //  cout<<i<<" ";
   } }

int main(){
vector<int>v;

v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(0);v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(1);v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(1);
int n=v.size();

for(int i=0;i<n;i++)
 cout<<v[i]<<" ";
cout<<endl;



sort01(v,n);

for(int i=0;i<n;i++)
 cout<<v[i]<<" ";
cout<<endl;



}