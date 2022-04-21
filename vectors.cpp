#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

void display(vector<int> &v){
    system("cls");
    for( int i = 0 ; i < v.size() ; i++){
        cout<<"Element is : "<<v[i]<<endl;
    }
}
int main(){
    system("cls");
    vector<int> vec1;
    int element,size;
    cout << "Enter size of vector : ";
    cin >> size;
    for(int i = 0 ; i < size ; i++){
        cout<<"Enter Element to add to this vector : ";
        cin>>element;
        vec1.push_back(element);

    }
    vec1.pop_back();
    //sort();
    display(vec1);
    return 0;
}
