#include <iostream>


enum class Banks {
    PKO , BGZ , BRE , BPH
};

struct Account {
    Banks bank;
    int balance;
};
struct Person {
    char name[20];
    Account account;
};
struct Couple {
    Person he;
    Person she;
};

const Couple* bestClient (const Couple* cpls, int size , Banks bank){

    int checking_best_couple = -1;

    for(int i =0 ; i < size; i++){
        if (cpls[i].he.account.bank == bank || cpls[i].she.account.bank == bank){
         if(checking_best_couple == -1 || ((cpls[i].he.account.balance + cpls[i].she.account.balance) > (cpls[checking_best_couple].he.account.balance + cpls[checking_best_couple].she.account.balance))){
             checking_best_couple = i;
                }
            }
    }
    if(checking_best_couple == -1){
        return nullptr;
    }else {
        return cpls + checking_best_couple;
    }
}

int main() {

    using std::cout;
    using std::endl;

    Couple cpls[]= {{{"Johny",{Banks::PKO,1200}},
                    {"Mary",{Banks::BGZ,1400}}},

                    {{"Peter",{Banks::BGZ,1400}},
                    {"Suzy",{Banks::BRE,-1500}}},

                    {{"Kevin",{Banks::PKO,1600}},
                     {"Katy" , {Banks::BPH,1500}}},

                    {{"Kenny",{Banks::BPH,200}},
                    {"Lucy", {Banks::BRE,-201}}}
    };
    const Couple* p = bestClient(cpls,4,Banks::BRE);
    if (p) {
        cout << p->he.name << " AND " << p->she.name
             << ": " << p->he.account.balance + p->she.account.balance << endl;
    }else{
        cout<< "No such couple ... \n";
    }
}
