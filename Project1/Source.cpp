#include <iostream>
#include <string>

using namespace std;

string entoure(const string& mot) {
	return "***" + mot + "***";
}

int main() {
	int choix;
	cout << "Liste des exercices du TD: " << endl;
	cout << "1..Exercice 1" << endl;
	cout << "2..Exercice 2" << endl;
	cout << "3..Exercice 3" << endl;
	cout << "4..Exercice 4" << endl;
	cout << "5..Exercice 5" << endl;
	cout << "6..Exercice 6" << endl;
	cout << "7..Exercice 7" << endl;
	cout << "8..Quitter" << endl;
	cout << "Choisir un nombre: ";
	cin >> choix;
	switch (choix)
	{
		case 1:
			cout << "Exo 1:" << endl;
			int nb1, nb2, somme;
			cout << "Saisir le premier nombre: " << endl;
			cin >> nb1;
			cout << "Saisir le second nombre:  ";
			cin >> nb2;
			somme = nb1 + nb2;
			cout << "La somme des nombres: " << somme << endl;
			break;
		case 2:
			cout << "Exo 2:" << endl;
			float en1, en2, moyenne;
			cout << "Saisir le premier entier: " << endl;
			cin >> en1;
			cout << "Saisir le second entier:  ";
			cin >> en2;
			moyenne = (en1 + en2) / 2;
			cout << "La moyenne des nombres: " << moyenne << endl;
			break;
		case 3:
			string mot;
			cout << "Entrer un mot: ";
			cin >> mot;
			string affiche = entoure(mot);
			cout << "Le mot entoure: " << affiche << endl;
			break;
		case 4:
			break;
	default:
		break;
	}

	return 0;
}