#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter num: " << endl;
    cin >> n;
    int d = 2;
    bool divided = false;
    while (d<n)
    {
        if (n % d == 0){
            cout << "Not prime" << endl;
            divided = true;
        }
        d++;
    }
    if (!divided){
        cout << "Prime" << endl;
    }
    
    return 0;
}
