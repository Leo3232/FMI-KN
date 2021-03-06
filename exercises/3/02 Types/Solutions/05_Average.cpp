#include <iostream>

int main()
{
    // деклариране на две целочислени променливи
    int a, b;
    std::cout << "Please, enter two integer values!" << std::endl;

    std::cout << "a = ";
    std::cin >> a;

    std::cout << "b = ";
    std::cin >> b;

    // резултатът ще бъде число с плаваща точка, ако делимото или делителят са числа с плаваща точка
    // float average = (a + b) / 2.0; 

    // ако изразът остане (а + b)/2, деленето ще бъде целочислено
    // а + b е цяло число като сума на две цели числа
    // 2 също е цяло число,
    // дробната част от деленето ще бъде загубена

    // друг начин е явно да преобразуваме сумата (делимото) до число с плаваща точка
    float average = static_cast<float>(a + b) / 2;
    std::cout << "Average: " << average << '\n';

    return 0;
}
