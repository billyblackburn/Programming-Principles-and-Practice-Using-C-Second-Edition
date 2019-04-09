#include "std_lib_facilities.h"
int main(){


string disliked = "Broccoli";
vector<string> words;
cout << "Enter some words seperated by spaces: \n";
for(string holder; cin >> holder;)
    words.push_back(holder);
    cout << "\nNumber of words is: " << words.size() << '\n';
int i;
for(i = 0; i < words.size(); ++i )
    if( words[i] == disliked)
        cout << "Zappo\n";
    else 
        cout << words[i] << '\n';






}