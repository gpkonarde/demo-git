#include<iostream>
using namespace std;

// Rohan

// string reverse(string input){
//     int len = input.length();
//     string result = "";
//     for(int i=len-1;i>=0;i--){
//         result+=input[i];
//     }
//     return result;
// }

string remove_vowels(string input) {

 string result = "";
    int length = input.length();

    for(int i = 0 ; i < length ; i++) {
            char current = input[i];
        if(current != 'a' && current != 'A' && current != 'e' && current != 'E' && current != 'i' && current != 'I' && current != 'o' && current != 'O' && current != 'u' && current != 'U') {
            //for each charecter 
            result += current;
        }

    }

    //cout << "Result is " << result << endl;

        return result;

}

int main(){
    string input = "MyNameIsRohan"; // My Name Is Rohan
   
    cout<<"\nResult:: ";
   // cout<<reverse(input);
    cout<<"\n";
    // cout<<spacify(input);
     cout<<remove_vowels(input);

    

}