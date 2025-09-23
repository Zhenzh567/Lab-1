#include <iostream>
int main() {
    //используем тип double,так как мы работает с числами на действительной оси,в которой есть числа с плавающей точкой, и нам нужна максимальная точность вычислений
    double first_edge;
    double second_edge;
    std::cin>>first_edge;
    std::cin>>second_edge;
    double middle = (first_edge+second_edge)/2;
    std::cout<<"середина интервала = "<<middle<<std::endl;
    int k = sizeof(middle)*8;
    double minimum = 2.2250738585072014*pow(10,-308);
    double maximum = 1.7976931348623157*pow(10,308);
    std::cout<<"double,занимает "<<k<<"бит(а),мин.значение = "<<minimum<<"максимальное значение = "<<maximum;

return 0;
}
