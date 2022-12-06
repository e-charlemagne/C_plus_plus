#include <iostream>
#include <cmath>
using namespace std;


const double* aver (const double* arr,
                    size_t size , double& average) {


    const double *closest_to_avg = &arr[0];

    for (int i = 0; i < size; i++) {
        average += arr[i] / size;
    }
    for (int j = 0; j < size; j++) {
        closest_to_avg = (std::abs((*closest_to_avg - average))
                          < abs((arr[j] - average))) ? closest_to_avg : &arr[j];
    }
    return closest_to_avg;
}


int main() {


    double arr[] = {1,2,-1.5,3.25,5.5,7.75,-0.25,5.75};

    size_t size = std::size(arr);

    double average = 0;
    const double* p = aver(arr, size, average);
    std::cout << *p << " "<<average  << std::endl;




}
