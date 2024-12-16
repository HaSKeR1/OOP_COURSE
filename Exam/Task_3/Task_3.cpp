#include <iostream>

class Wallet {
public:
    std::string name;
    double money = 0;
    void Deposit() {
        double money_deposit;
        std::cout << "Введите на какую сумму вы хотите пополнить счёт:";
        std::cin >> money_deposit;
        money += money_deposit;
        std::cout << "Счёт карты " << name << " успешно пополнен на " << money_deposit << "руб\n";
    }
};

void Menu(int choice) {
    Wallet first_debit_card, first_credit_card;

    first_debit_card.name = "0001";
    first_credit_card.name = "0002";
    double money_deposit;

    std::cout << "Выберите карту:\n"
        << "1 - Дебетовая карта " << first_debit_card.name << std::endl
        << "0 - Выход\n";
    std::cout << "Ваше действие: ";
    std::cin >> choice;
    while (choice != 0) {
        switch (choice) {
        case 1:
            std::cout << "\nДебетовая карта " << first_debit_card.name;
            std::cout << "\nВыберите действие:\n"
                << "1 - Пополнить счёт\n"
                << "0 - Назад\n";
            std::cout << "Ваше действие: ";
            std::cin >> choice;
            switch (choice) {
            case 1:
                first_debit_card.Deposit();
            }
            break;
        default:
            std::cout << "Error!";
            break;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    int choice = 999;

    
    while (choice != 0) {
        Menu(choice);
    }

    return 0;
}