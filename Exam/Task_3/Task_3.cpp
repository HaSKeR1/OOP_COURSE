#include <iostream>

class Wallet {
public:
    std::string name;
    double money = 0;
    void Deposit(double money_deposit) {
        money += money_deposit;
        std::cout << "Счёт карты " << name << " успешно пополнен на " << money_deposit << "руб\n";
    }
};

int main()
{
    setlocale(LC_ALL, "rus");
    int choice;
    double money_deposit;
    Wallet first_debit_card, first_credit_card;

    first_debit_card.name = "0001";
    first_credit_card.name = "0002";
    first_credit_card.Deposit(100000);
    first_debit_card.Deposit(100);

    std::cout << "Выберите карту:\n1 - Дебетовая карта " << first_debit_card.name << std::endl;
    std::cin >> choice;
    switch (choice) {
    case 1:
        std::cout << "\nДебетовая карта " << first_debit_card.name;
        std::cout << "\nСчёт: " << first_debit_card.money << "руб";
    }
    return 0;
}