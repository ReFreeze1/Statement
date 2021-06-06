#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ofstream file("statement.txt", std::ios::app);
    std::string buffer;
    std::string answer;
    int payment;
    do {
        std::cout << "Input Name: ";
        std::getline(std::cin, buffer);
        file << buffer;

        std::cout << "Input date (dd.mm.yyyy): ";
        std::getline(std::cin, buffer);
        file <<" "<< buffer;

        std::cout << "Input payment: ";
        std::cin >> payment;
        file <<" "<< payment << std::endl;

        std::cout << "Do you want add new record? (yes/no)";
        std::cin >> answer;

        std::cin.ignore(32767, '\n');

    } while (answer != "no");
    file.close();
}

