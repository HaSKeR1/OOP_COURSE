#include <iostream>

class Fraction
{
public:
    double numerator;
    double denominator;

    // Сложение
    double sum()
    {
        return numerator + denominator;
    }

    // Вычитание
    double subs()
    {
        return numerator - denominator;
    }

    // Умножение
    double mult()
    {
        return numerator * denominator;
    }

    // Деление
    double div()
    {
        if (denominator != 0)
            return numerator / denominator;
        else
            std::cout << "Деление на ноль!";
    }
};

int main()
{
    setlocale(LC_ALL, "rus");
    Fraction frac;

    std::cout << "Введите числитель: ";
    std::cin >> frac.numerator;

    std::cout << "Введите знаменатель: ";
    std::cin >> frac.denominator;

    std::cout << "Сумма: " << frac.sum() << std::endl;
    std::cout << "Разность: " << frac.subs() << std::endl;
    std::cout << "Произведение: " << frac.mult() << std::endl;
    std::cout << "Частное: " << frac.div() << std::endl;

    return 0;
}
