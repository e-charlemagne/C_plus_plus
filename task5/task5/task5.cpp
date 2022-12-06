#include <iostream>

    unsigned short encode(int sex , int marit,
                          int age, int edu,
                          int place, int region,
                          int answer);

    void info (unsigned short code);



unsigned short encode(int sex , int marit,
                      int age, int edu,
                      int place, int region,
                      int answer){

    unsigned short information =0;

       information |=sex ,
       information = (information<<2)|marit ,
       information = (information << 2) | age,
       information = (information << 2) | edu,
       information = (information<< 2) | place,
       information = (information<< 4) | region ,
       information = (information<< 3) | answer;

    return information;
}
void info(unsigned short code){
    int sex,
         marit ,
             age,
                 edu,
                    place,
                        region,
                            answer;


    answer = 0b111 & code;
    code  >>= 3;

    region = 0b1111& code;
    code >>=4;

    place = 0b11 & code;
    code >>=2;

    edu = 0b11 & code;
    code >>= 2;

    age = 0b11& code;
    code >>= 2;

    marit = 0b11 & code;
    code >>= 2;

    sex = 0b1 & code;


    std::cout<< "sex: "<< sex << '\n';
    std::cout<< "region: "<< region << '\n';
    std::cout<< "place: "<< place << '\n';
    std::cout<< "marit: "<< marit << '\n';
    std::cout<< "edu: "<<edu << '\n' ;
    std::cout<< "age: "<< age << '\n';
    std::cout<< "answer: "<< answer << '\n' ;


}

int main() {



    unsigned short encode_1 = encode(1,1,
                                     3,3,
                                     4,5,0);
    unsigned short encode_2= encode(1,4,4,3,
                                    4,5,5);

    info(encode_1);
    std::cout<<'\n';
    info(encode_2);


}
