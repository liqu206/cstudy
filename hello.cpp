#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int i;
    do{
        cin>>i;
        v.push_back(i);
    }while(cin.get()!='\n');
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}