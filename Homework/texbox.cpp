#include <string>
using namespace std;
class TextBox{
    private: 
        string value;
    TextBox(){
        value = "";
    }
    TextBox(string value){
        value = value;
    }
    
    string getValue(){
        return value;
    }
    void setValue(string value){
        value = value;
    }

};