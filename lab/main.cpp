#include <iostream>
#include <limits>
int main() {
    //используем тип double, так как мы работает с числами на действительной оси, в которой есть числа с плавающей точкой.
    /*также нам нужна 
    максимальная точность 
    вычислений*/
    double first_edge;
    double second_edge;
    std::cin>>first_edge;
    std::cin>>second_edge;
    double middle = (first_edge+second_edge)/2;
    std::cout<<"middle = "<<middle<<std::endl;
    int k = sizeof(middle)*8;
    double minimum = std::numeric_limits<double>::min();
    double maximum = std::numeric_limits<double>::max();
    std::cout<<"double,involve "<<k<<"bite(s),min = "<<minimum<<" ,max = "<<maximum<<"\n";
    double mini2 = std::numeric_limits<int>::min();
    double maxi2 = std::numeric_limits<int>::max();
    std::cout << "int,involve " << k << "bite(s),min = " << mini2 << " ,max = " << maxi2;

return 0;
}
