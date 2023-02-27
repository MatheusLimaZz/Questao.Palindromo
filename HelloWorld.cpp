#include <iostream>
#include <string>

bool palindromo(std::string str) {
	//string sem espaços
	std::string wstr{};
	int x{};
	for (int i = 0; i < std::size(str); i++) {
		if (str[i] != ' ') {
			wstr += str[i];
			x++;
		}
	}
	std::cout<< "Sem espacos:\t" << wstr;
	//string invertida
	std::string iwstr{};
	for (int i = 0; i < x; i++) {
		iwstr += wstr[x - i - 1];
	}
	std::cout << "\n" << "Invertida:\t" << iwstr;

	for (int i = 0; i < x; i++) {
		if (wstr[i] != iwstr[i]) {
			return false;
		}
	}
}
bool tentarDeNovo() {
	std::cout << "\n" << "Tenatr de novo(s/n): ";
	char choice[2]{};
	std::cin >> choice;
	if (choice[0] == 's') return true;
	else if(choice[0] == 'n') return false;
}
int main() {
	do{
		std::cout << "Digite algo:\t";
		std::string str{};
		getline(std::cin >> std::ws, str);

		if (palindromo(str)) {
			std::cout << "\n\nPalindromo\n\n";
		}
		else {
			std::cout << "\n\nNao eh palindromo\n\n";
		}
	} while (tentarDeNovo());
	

	return 0;
}