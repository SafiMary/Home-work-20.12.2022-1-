#pragma once
#include <iostream>
#include <string>
#include <vector>

class Phonebook
{
public:
	Phonebook();
	Phonebook(const std::vector<size_t>& home_number, 
		const std::vector<size_t>& work_number,
		const std::vector<size_t>& mobile, 
		const std::vector<std::string>& subscriber,
		const std::vector<std::string>& info);
	size_t getHomeNumber(size_t index);
	size_t getWorkNumber(size_t index);
	size_t getMobile(size_t index);
	void addHomeNumber(size_t home_number);
	void addWorkNumber(size_t work_number);
	void addMobile(size_t mobile);

	bool removeHomeNumber(size_t home_number);
	bool removeWorkNumber(size_t work_number);
	bool removeMobile(size_t mobile);

	void removeHomeNumberByIndex(size_t index);
	void removeWorkNumberByIndex(size_t index);
	void removeMobileByIndex(size_t index);

	const std::string& getSubscriber(size_t index);

	void addSubscriber(const std::string& subscriber);

	bool removeSubscriber(const std::string& subscriber);
	void removeSubscriberByIndex(size_t index);
	const std::string& getInfo(size_t index);
	void addInfo(const std::string& info);

	bool removeInfo(const std::string& info);
	void removeInfoByIndex(size_t index);
	void printAllNumber();
	void printAllSubscriber();
	void printAllInfo();

private:
	std::vector<size_t> _home_number;
	std::vector<size_t> _work_number;
	std::vector<size_t> _mobile;
	std::vector<std::string> _subscriber;
	std::vector<std::string> _info;
	
};

