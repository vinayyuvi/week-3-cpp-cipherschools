#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=10, b=0;
    try{
        if(b == 0){
            // throw 0;
            throw 'a';
            cout << a/b << endl;
        }
    }
    // catch(int e){
    catch(...){        
        // cout << e << " thrown from the try block.!" << endl;
        cout << " thrown from the try block.!" << endl;

    }
    // catch(char err){
    //     cout << err << " thrown from the try block.!" << endl;
    // }
    cout << "program ended normally" << endl;
    return 0;
}