#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&arr,int st,int end){
    int p=arr[st];
    int i=st+1, j=end;
    while(i<=j){
        while(i<=end && arr[i]<=p){
            i++;
        }
        while(j>st && arr[j]>=p){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[st]);
    return j;
}
void quicksort(vector<int>&arr,int st,int end){
    if(st>=end) return;
    int pi=partition(arr,st,end);
    quicksort(arr,st,pi-1);
    quicksort(arr,pi+1,end);

}
int main(){
    vector<int>arr;
    // vector<int>arr={4,3,2,1};
    // int n=4;
    cout<<"enter size of array: "<<" ";
    int n,m;
    cin>>n;
    cout<<"enter elemets of arr: "<<" ";
    for(int i=0;i<n;i++){
        cin>>m;
        arr.push_back(m);

    }
    cout<<endl;
    cout<<"original array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    quicksort(arr,0,arr.size()-1);

    cout<<endl;
    cout<<"sorted array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

