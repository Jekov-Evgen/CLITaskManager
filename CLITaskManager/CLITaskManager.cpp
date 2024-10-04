#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "ru");

    const int SIZE_HELP = 5;

    std::cout << "Привет это CLI Task Manager, чтобы узнать доступные функции введи help" << std::endl;
    std::string HELP[SIZE_HELP]{ "1) Добавить задачу(Команда add)",
                        "2) Удалить задачу(Команда del)", 
                        "3) Вывести все задачи (Команда look)", 
                        "4) Редоктировать задачу(Команда edit)", 
                        "5) Завершить процесс(Команда end)"};

    std::cout << "Для начала работы введите go: ";

    std::string command;
    std::cin >> command;

    while (command != "go") {
        if (command != "go") {
            std::cout << "вы неправильно ввели команду" << std::endl;
        }

        std::cout << "Повторный ввод: ";
        std::cin >> command;
    }

    while (command != "end") {
        std::cout << "Ввод: ";
        std::cin >> command;

        if (command == "add") {
            std::cout << "Добавляем задачу" << std::endl;
        }
        else if (command == "del") {
            std::cout << "Удаляем" << std::endl;
        }
        else if (command == "look") {
            std::cout << "Выводим списко задач" << std::endl;
        }
        else if (command == "edit") {
            std::cout << "Редоктируем задачу" << std::endl;
        }
        else if (command == "help") {
            for (int i = 0; i < SIZE_HELP; i++) {
                std::cout << HELP[i] << std::endl;
            }
        }
        else if (command == "end") {
            std::cout << "Завершаем процесс" << std::endl;
        }
        else {
            std::cout << "Команда введена неверно введите help" << std::endl;
        }
    }
}