// vector -- exactly like array except its dynamic

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> pixels;
    vector<int> pixels2 = {1,2,3,4,5};
    vector<int> pixels3(3 /*This is the length of vector*/,0/*This is the element which needs to placed in each index*/);

    // cout << pixels[0] << endl;
    cout << pixels2[1] << endl;
    cout << pixels3[1] << endl; 


    return 0;
}