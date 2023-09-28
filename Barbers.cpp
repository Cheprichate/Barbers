
#include <iostream>

int main() {
    int mansCount;
    int barbersCount;
    setlocale(LC_ALL, "Russian");

    std::cout << "************** Барбершоп-калькулятор **************\n";
    std::cout << "Введите число мужчин в городе: ";
    std::cin >> mansCount;
    std::cout << "Сколько барберов работают ?";
    std::cin >> barbersCount;

    int mansPerBarber = 8;
    int mansPerBarberPerMonth = mansPerBarber * 30;
    std::cout << "Один барбер стрижет столько клиентов в месяц " << mansPerBarberPerMonth << "\n";

    int requiredBarbersCount = mansCount / mansPerBarberPerMonth;
    if (requiredBarbersCount * mansPerBarberPerMonth < mansCount) {
        requiredBarbersCount += 1;
    }
    std::cout << "Необходимое число барберов: " << requiredBarbersCount << "\n";

    // Сравниваем с количеством имеющихся барберов
    if (requiredBarbersCount > barbersCount) {
        std::cout << "Нужно больше работников!!!\n";
    }
    else if (requiredBarbersCount == barbersCount) {
        std::cout << "Работников столько, сколько нужно!!!\n";
    }
    else {
        std::cout << "Барберов хватает!!!\n";
    }

}