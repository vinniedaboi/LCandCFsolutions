#include <iostream>
#include <string>
 
 
using namespace std;
 
int main(){
 
    string input;
    cin >> input;
 
    if (input.size() == 1){
        if(isupper(input[0])){
                input[0] = tolower(input[0]);
            }
            else if(islower(input[0])){
                input[0] = toupper(input[0]);
        }
    }
 
    bool changeLetter = false;
 
    for(int i = 1; i < input.size(); ++i){
        if(isupper(input.at(i))){
            changeLetter = true;
        }
        else{
            changeLetter = false;
            break;
        }
    }
 
    if(changeLetter){
        for(int i = 0; i < input.size(); ++i){
            if(isupper(input.at(i))){
                input[i] = tolower(input[i]);
            }
            else if(islower(input.at(i))){
                input[i] = toupper(input[i]);
            }
        }
    }
 
    cout << input << endl;
}