#include <iostream>

int main()
{
	char c;
	std::cout << "Please, enter a small letter: ";
	std::cin >> c;

	// c - 'a' ������ �� ����� ������ �� ������ �������� c �� ������� ����� 'a'
	// �������� �����, ������������� �� c, �� ������ �� ���� ������� ������ �� '�'

	char capitalLetter = c - 'a' + 'A';
	std::cout << "The corresponding capital letter is: " << capitalLetter << '\n';

	return 0;
}