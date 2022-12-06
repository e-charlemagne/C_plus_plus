#if (defined(POL) && defined (ENG)) || !(defined(POL) && defined (ENG))
    //#error Please define only one language
#endif

#ifdef POL
    #define phrase1 "The maximum sub for the given number: "
    #define phrase2 "Maksymalna summa dla podanej liczby: "
#elif defined(ENG)
    #define phrase1 "enter a natural number(0 if done):"
    #define phrase2 "Prosze podac liczbe naturalna(0 zeby wyjsc): "
#endif

#include <iostream>



auto max_sum_of_digit(int num)-> int{ // returning the sum of the digits
    auto sum = 0;
    while(num!=0){
        sum=sum+num%10;
        num=num/10;
    }
    return sum;
}

int main() {

  std::cout << max_sum_of_digit(35);

}
