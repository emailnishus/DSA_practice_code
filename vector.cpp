#include<iostream>
#include<vector>

using namespace std;

// void display(vector<int> &v){
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
    
// }

// int main(){
//     vector<int> arr;
//     int element;
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<"Enter array element";
//         cin>>element;
//         arr.push_back(element);
        
//     }
    
//     display(arr);
//     vector<int> :: iterator a = arr.begin();
//     arr.insert(a+1,6,10);  //insert at any position
//     display(arr);

//     return 0;
// }
#include <iostream>
#include <vector>

std::vector<int> integerToArray(int num) {
    std::vector<int> digits;
    
    while (num > 0) {
        digits.insert(digits.begin(), num % 10);
        num /= 10;
    }
    
    return digits;
}

int main() {
    int num = 10;
    std::vector<int> result = integerToArray(num);
    
    for (int digit : result) {
        std::cout << digit << " ";
    }
    
    return 0;
}

