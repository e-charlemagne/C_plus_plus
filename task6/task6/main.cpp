#include <iostream>
#include <regex>


bool checkpass (const char * pass){
    bool checking= false;
    std::regex password;
    password = "^(?=.*\\d)(?=.*[a-z])(?=.*[A-Z])(?=.*[@$!%*#?&^_-]).{8,}";
    /**
     *
     * This regex is going to check the:
     * 1)At least one upper case character
     * 2)At least one Lower case character
     * 3)At least one digit
     * 4)Minimum 8 characters
     * 5)at least one symbolic/special character , such as "@$!%*#?&^_-"

    if (std::regex_match(pass,password)){
        checking= true;
    }
    return checking;
}

int main() {

using std::cout; using std::endl;

const char* passes[] = {

"AbcDe93", "A1b:A1b>", "Ab:Acb<",
"abc123><", "Zorro@123",nullptr

};

for(int i =0 ; passes[i] != nullptr; i++){
    cout << "checking: " << passes[i] << endl;
    if (checkpass(passes[i])){
        cout<< passes[i] << " - " << "OK" <<'\n';
    }else {
        cout << "It did not pass through REGEX"<<'\n' ;
    }
    cout << endl;
}


}
