#include <iostream>

int sumDigits(int n);
int numDigits(int n) ;
void printOddEven(int n);
void hailstone(int n);
int gcdRec(int a , int b);



int gcdRec(int a, int b) {
    return (b ==0? a: gcdRec(b, a%b));
}

int sumDigits(int n) {
    return (n==0 ? n:  n % 10 + sumDigits(n/10));
}

int numDigits(int n){
    return (n == 0 ? n:(1+ numDigits(n/10)));
}
void printOddEven(int n) {


//    if(n - 2 > 0){
//        printOddEven(n-2);
//        std::cout << n << ' ';
//    }
  if ( n > 0){
      if (n % 2  !=0 ){
          std::cout<< n << ' ';
      }printOddEven(--n);
  }
}

void hailstone(int n) {
    std::cout<< n << ' ';
   if(n >1) {
       if (n % 2 == 0) {
           hailstone(n / 2);
       } else if (n % 2 != 0) {
           hailstone((n * 3) + 1);
       }
   }
}











int main() {

    std::cout << "GCDREC(12,42) = " << gcdRec(12,42) << '\n';
    std::cout << "GCDREC(12,25) = " << gcdRec(12,25) << '\n';
    std::cout << "sumDigits(123) = " << sumDigits(123) << '\n';
    std::cout << "sumDigits(971) = " << sumDigits(971) << '\n';
    std::cout << "numDigits(12345) = " << numDigits(12345) << '\n';
    std::cout << "numDigits(971) = " << numDigits(971) << '\n';

    std::cout << "printOddEven(15): " ;
    printOddEven(15);
    std::cout << '\n';

    std::cout << "printOddEven(14): ";
    printOddEven(14);
    std::cout << '\n';

    std::cout << "hailstone(13): ";
    hailstone(13);
    std::cout << '\n';

    }
