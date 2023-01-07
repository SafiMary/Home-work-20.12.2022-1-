#include "Phonebook.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

Phonebook::Phonebook() {}
Phonebook::Phonebook(const std::vector<size_t>& home_number,
    const std::vector<size_t>& work_number,
    const std::vector<size_t>& mobile,
    const std::vector<std::string>& subscriber,
    const std::vector<std::string>& info): _home_number(home_number), _work_number(work_number), _mobile(mobile), _subscriber(subscriber), _info(info){}

size_t Phonebook::getHomeNumber(size_t index) {
	return _home_number[index];
}
size_t Phonebook::getWorkNumber(size_t index) {
	return _work_number[index];
}
size_t Phonebook::getMobile(size_t index) {
	return _mobile[index];
}
void Phonebook::addHomeNumber(size_t home_number) {
	_home_number.push_back(home_number);
}
void Phonebook::addWorkNumber(size_t work_number) {
	_work_number.push_back(work_number);
}
void Phonebook::addMobile(size_t mobile) {
	_mobile.push_back(mobile);
}

bool Phonebook::removeHomeNumber(size_t home_number) {
	for (size_t i = 0; i < _home_number.size(); i++) {
		if (_home_number[i] == home_number) {
			_home_number.erase(_home_number.begin() + i);
			return true;
		}
	}
	return false;
}
bool Phonebook::removeWorkNumber(size_t work_number) {
	for (size_t i = 0; i < _work_number.size(); i++) {
		if (_work_number[i] == work_number) {
			_work_number.erase(_work_number.begin() + i);
			return true;
		}
	}
	return false;
}
bool Phonebook::removeMobile(size_t mobile) {
	for (size_t i = 0; i < _mobile.size(); i++) {
		if (_mobile[i] == mobile) {
			_mobile.erase(_mobile.begin() + i);
			return true;
		}
	}
	return false;
}

void Phonebook::removeHomeNumberByIndex(size_t index) {
	_home_number.erase(_home_number.begin() + index);
}
void Phonebook::removeWorkNumberByIndex(size_t index) {
	_work_number.erase(_work_number.begin() + index);
}
void Phonebook::removeMobileByIndex(size_t index) {
	_mobile.erase(_mobile.begin() + index);
}

const std::string& Phonebook::getSubscriber(size_t index) {
	return _subscriber[index];
}

void Phonebook::addSubscriber(const std::string& subscriber) {
	_subscriber.push_back(subscriber);
}

bool Phonebook::removeSubscriber(const std::string& subscriber) {
	for (size_t i = 0; i < _subscriber.size(); i++) {
		if (_subscriber[i] == subscriber) {
			_subscriber.erase(_subscriber.begin() + i);
			return true;
		}
	}
	return false;

}
void Phonebook::removeSubscriberByIndex(size_t index) {
	_subscriber.erase(_subscriber.begin() + index);
}
const std::string& Phonebook::getInfo(size_t index) {
	return _info[index];
}

void Phonebook::addInfo(const std::string& info) {
	_info.push_back(info);
}

bool Phonebook::removeInfo(const std::string& info) {
	for (size_t i = 0; i < _info.size(); i++) {
		if (_info[i] == info) {
			_info.erase(_info.begin() + i);
			return true;
		}
	}
	return false;

}
void Phonebook::removeInfoByIndex(size_t index) {
	_info.erase(_info.begin() + index);
}

void Phonebook::printAllNumber() {
	std::cout << "Рабочие номера:  \n";
	for (size_t i = 0; i < _work_number.size(); i++) {
		std::cout << _work_number[i] << '\n';
	}
	std::cout << "Домашние номера:  \n";
	for (size_t i = 0; i < _home_number.size(); i++) {
		std::cout << _home_number[i] << '\n';
	}
	std::cout << "Мобильные номера: \n";
	for (size_t i = 0; i < _mobile.size(); i++) {
		std::cout << _mobile[i] << '\n';
	}
}
void Phonebook::printAllSubscriber() {
	std::cout << "Все контакты: \n";
	for (size_t i = 0; i < _subscriber.size(); i++) {
		std::cout << _subscriber[i] << '\n';
	}
}
void Phonebook::printAllInfo() {
	std::cout << "Инфо обо всех контактах: \n";
	for (size_t i = 0; i < _info.size(); i++) {
		std::cout << _info[i] << '\n';
	}
}