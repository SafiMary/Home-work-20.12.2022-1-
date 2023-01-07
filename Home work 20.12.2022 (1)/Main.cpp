#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "Phonebook.h"
#include <vector>

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Phonebook a;
	
	//�������� ������� ��������
	a.addSubscriber("�����"); //�������� �������
	a.addHomeNumber(123);    //��������  �������� �����
	a.addWorkNumber(235);    //�������� ������� �����
	a.addMobile(87878);      //�������� ��������� �����
	a.addInfo("����");       //�������� ���������� � ��������
	// �������� ������� ��������
	a.addSubscriber("������"); //�������� �������
	a.addHomeNumber(8877);    //��������  �������� �����
	a.addWorkNumber(98877);    //�������� ������� �����
	a.addMobile(87807);      //�������� ��������� �����
	a.addInfo("�������");      //�������� ���������� � ��������


	//������� �� ������ ������ � �������� ��������
	std::cout << a.getSubscriber(0) << " " << a.getHomeNumber(0) << " " << a.getWorkNumber(0) << " " << a.getMobile(0) << " " << a.getInfo(0) << '\n';
	std::cout << a.getSubscriber(1) << " " << a.getHomeNumber(1) << " " << a.getWorkNumber(1) << " " << a.getMobile(1) << " " << a.getInfo(1) << '\n';
	std::cout << "****************************\n";

	a.printAllSubscriber(); //�������� ��� ��������
	a.printAllNumber();    //�������� ��� ������
	std::cout << "****************************\n";

	a.removeHomeNumberByIndex(1); //������� ����� �� �������
	a.removeWorkNumber(235);      //������� ����� �� ������ ��������
	a.removeInfo("����");          //������� ����������
	a.removeInfoByIndex(1);        //������� ���� �� �������
	a.removeSubscriber("�����");  //������� �������

	a.printAllSubscriber(); //�������� ��� ��������
	a.printAllNumber();     //�������� ��� ������
	a.printAllInfo();            //�������� ��� ����������
}