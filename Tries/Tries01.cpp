#include<iostream>
using namespace std;

class Tries{
    public:
    char data;
    Tries *children[26];
    bool isTerminal;

    Tries(char d){
        this->data = d;
        for(int i = 0; i<26; i++){
            children[i] = NULL;
        }
        this->isTerminal = false;
    }

};
void insertWord(Tries *root, string str){

    // for checking 
    cout<<"inserting:   "<<str<<endl;
    // agar koi bhi word na ho 
    if(str.length() == 0){
        root->isTerminal = true;
        return ; 

    }
    char ch = str[0];
    int ind = ch - 'A';
    Tries *child;
    if(root->children[ind]!=NULL)
    {
        child = root->children[ind];
    }
    else{
        child = new Tries(ch);
        root->children[ind] = child;
    }
    insertWord(child, str.substr(1));
}
bool searchWord(Tries *root, string str ){

}
int main(){
    Tries * root = new Tries('-');
    insertWord(root, "Ashutosh");
    return 0;
}