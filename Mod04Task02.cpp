#include <iostream>
// Задача 2. Счета

struct bankAccount
{
    int accountNum;
    std::string name;
    int accountSum;
};

void setNewSum(bankAccount* sum)
{
    int newSum;
    std::cout << "Please set a new sum:" << std::endl;
    std::cin >> newSum;
    sum->accountSum = newSum;
}
int main()
{
    bankAccount person;
    std::cout << "Please enter an account number:" << std::endl;
    std::cin >> person.accountNum;

    std::cout << "Please enter a name:" << std::endl;
    std::cin >> person.name;

    std::cout << "Please enter a sum:" << std::endl;
    std::cin >> person.accountSum;
        
    std::cout << "Accont number: " << person.accountNum << std::endl;
    std::cout << "Accont name: " << person.name << std::endl;
    std::cout << "Accont sum: " << person.accountSum << std::endl;

    setNewSum(&person);

    std::cout << person.accountNum << "\t" << person.name << "\t" << person.accountSum << std::endl;
    
return 0;
}