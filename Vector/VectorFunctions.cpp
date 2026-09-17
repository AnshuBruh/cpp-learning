#include<iostream>
#include<vector>
using namespace std;
int main(){

//    vector<int> vec = {1, 2, 3};
//    cout << vec[4]; 
   
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    cout << "Size = " << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(45);
    cout << "After push back Size = " << vec.size() << endl;
    vec.pop_back(); //45
    cout << "After pop back Size = " << vec.size() << endl;

    //for(int val : vec){ //FOR EACH LOOP
    //    cout << val << endl;
   // }

   cout << vec.front() << endl;
   cout << vec.back() << endl;
   cout << vec.at(2) << endl;
    
    return 0;
}

