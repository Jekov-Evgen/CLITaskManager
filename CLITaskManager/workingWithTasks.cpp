#include "workingWithTasks.h"
#include <iostream>
#include <fstream>

int count = 0;

void addingTask() {
	std::string task;
	std::cout << "Введите вашу заметку: ";
	std::cin >> task;

	try {
		std::ofstream addFile;

		addFile.open("task.txt", std::ofstream::app);

		if (!addFile.is_open()) {
			throw "Ошибка, просмотрите корень проекта";
		}

		count++;

		addFile << count << ") " << task << std::endl;

		addFile.close();
	}
	catch (const char* msg) {
		std::cout << msg << std::endl;
	}
}

void lookTask() {
	try {
		std::fstream readFile("task.txt");

		if (!readFile.is_open()) {
			throw "Ошибка чтения, скорее всего файл поврежден";
		}

		while (readFile) {
			std::string conclusion;
			readFile >> conclusion;
			std::cout << std::endl;
			std::cout << conclusion << std::endl;
		}

	}
	catch (const char* msg) {
		std::cout << msg << std::endl;
	}
}

void delTask(){
	try {
		std::fstream readFile("task.txt");
		int lineCount = 0;

		if (!readFile.is_open()) {
			throw "Ошибка открытия";
		}

		std::string line;

		while (std::getline(readFile, line)) {
			lineCount++;
		}

		lineCount - 2;

		std::cout << lineCount << std::endl;
	}
	catch (const char* msg) {
		std::cout << msg << std::endl;
	}
}