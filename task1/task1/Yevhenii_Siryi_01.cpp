#include <iostream>
int main() {
    int number;
    int max = 0;
    int longest_seq =0;
    int previous=0;
    int counter = 1;

    std::cout << "Enter a list of int , terminate by pressing 0"<< std::endl;

    while (number !=0) {
        std::cin >> number;
        if (number == previous){
            counter++;
        }
        else {
            counter=1;
            previous=number;
        }
        if (max < counter) {
            max = counter;
            longest_seq=number;
        }

    }
    std::cout<< max << " times " << longest_seq;
}



