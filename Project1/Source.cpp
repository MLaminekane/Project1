#include <iostream>
#include <string>
#include <cmath>
#include "Source.h"

	using namespace std;

	string entoure(const string& mot) {
		return "***" + mot + "***";
	}

	int main() {
		int choix;
		bool quitter = false;

		while (!quitter) {
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

			switch (choix) {
				case 1: {
					cout << "Exo 1:" << endl;
					int nb1, nb2, somme;
					cout << "Saisir le premier nombre: " << endl;
					cin >> nb1;
					cout << "Saisir le second nombre:  ";
					cin >> nb2;
					somme = nb1 + nb2;
					cout << "La somme des nombres: " << somme << endl;
					break;
				}
				case 2: {
					cout << "Exo 2:" << endl;
					float en1, en2, moyenne;
					cout << "Saisir le premier entier: " << endl;
					cin >> en1;
					cout << "Saisir le second entier:  ";
					cin >> en2;
					moyenne = (en1 + en2) / 2;
					cout << "La moyenne des nombres: " << moyenne << endl;
					break;
				}
				case 3: {
					cout << "Exo 3:" << endl;
					string mot;
					cout << "Entrer un mot: ";
					getline(cin >> ws, mot);
					string affiche = entoure(mot);
					cout << "Le mot entoure: " << affiche << endl;
					break;
				}
				case 4: {
					cout << "exo 4: " << endl;
					int choixCorps;
					float masseRelative, vitesse, vLumiere, masseElec, masseProton, masseNeutron;

					vLumiere = 3 * pow(10, 8);
					bool quitterCase4 = false;
					do {
						cout << "Entrer la masse d'un corps ou choisir dans la liste: " << endl;
						cout << "1..masse de l'electron" << endl;
						cout << "2..masse du proton" << endl;
						cout << "3..masse du neutron" << endl;
						cout << "4..saisir la masse et la vitesse d'un corps" << endl;
						cout << "votre choix: " << endl;
						cin >> choixCorps;

						switch (choixCorps) {
							case 1: {
								cout << "Entrer la vitesse de l'electron (en m/s): ";
								cin >> vitesse;
								masseElec = 9.1095585 * pow(10, -31);
								masseRelative = masseElec / sqrt(1 - pow(vitesse, 2) / pow(vLumiere, 2));
								cout << "La masse relative de l'electron est : " << masseRelative << " kg" << endl;
								break;
							}
							case 2: {
								cout << "Entrer la vitesse du proton (en m/s): ";
								cin >> vitesse;
								masseProton = 1.672614 * pow(10, -27);
								masseRelative = masseProton / sqrt(1 - pow(vitesse, 2) / pow(vLumiere, 2));
								cout << "La masse relative du Proton est : " << masseRelative << " kg" << endl;
								break;
							}
							case 3: {
								cout << "Entrer la vitesse du neutron (en m/s): ";
								cin >> vitesse;
								masseNeutron = 1.674920 * pow(10, -27);
								masseRelative = masseNeutron / sqrt(1 - pow(vitesse, 2) / pow(vLumiere, 2));
								cout << "La masse relative du Neutron est : " << masseRelative << " kg" << endl;
								break;
							}
							case 4: {
								float saisirM, saisirV, AffMasseRelative;
								int puissanceMasse;
								cout << "Entrer la masse d'un corps: ";
								cin >> saisirM;
								cout << "Entrer la puissance de la masse: ";
								cin >> puissanceMasse;
								cout << "Entrer la vitesse du corps (en m/s): " << endl;
								cin >> saisirV;
								if (saisirV >= vLumiere) {
									cout << "Erreur : la vitesse ne peut pas dépasser la vitesse de la lumière." << endl;
									return 0;
								}
								AffMasseRelative = saisirM * pow(10, puissanceMasse) / sqrt(1 - pow(saisirV, 2) / pow(vLumiere, 2));
								cout << "La masse relative du corps est : " << AffMasseRelative << " kg" << endl;
								break;
							}
						}
						cout << "Revenir au menu ? (1 pour oui, 0 pour non): ";
						int reponse;
						cin >> reponse;
						quitterCase4 = reponse == 1;
					} while (!quitterCase4);

					break;
				}
				case 5: {
					int billet100, billet50, billet20, billet10, billet5, piece2, piece1;

					cout << "Exo: 5:" << endl;
					int montant;
					cout << "Entrer le montant que vous souhaitez reunir: ";
					cin >> montant;
					billet100 = montant / 100;
					montant %= 100;
					billet50 = montant / 50;
					montant %= 50;
					billet20 = montant / 20;
					montant %= 20;
					billet10 = montant / 10;
					montant %= 10;
					billet5 = montant / 5;
					montant %= 5;
					piece2 = montant / 2;
					montant %= 2;
					piece1 = montant;
					cout << "Votre monnaie sera: ";
					if (billet100 > 0) cout << "Billets de 100$ : " << billet100 << endl;
					if (billet50 > 0) cout << "Billets de 50$ : " << billet50 << endl;
					if (billet20 > 0) cout << "Billets de 20$ : " << billet20 << endl;
					if (billet10 > 0) cout << "Billets de 10$ : " << billet10 << endl;
					if (billet5 > 0) cout << "Billets de 5$ : " << billet5 << endl;
					if (piece2 > 0) cout << "piece de 2$ : " << piece2 << endl;
					if (piece1 > 0) cout << "piece de 1$ : " << piece1 << endl;
					break;
				}
				case  7: {
					double degre1, minutes1, secondes1;
					double degre2, minutes2, secondes2;
					double degre3, minutes3, secondes3;

					cout << "Exo 7: " << endl;
					cout << "entrer les valeurs de l'angle 1 separes par des espaces: ";
					cin >> degre1 >> minutes1 >> secondes1;
					double convert1 = degre1 + (minutes1 / 60) + (secondes1 / 3600);

					cout << "entrer les valeurs de l'angle 2 separes par des espaces: ";
					cin >> degre2 >> minutes2 >> secondes2;
					double convert2 = degre2 + (minutes2 / 60) + (secondes2 / 3600);

					double convert3 = 180 - (convert1 + convert2);
					degre3 = int(convert3);
					minutes3 = int((convert3 - degre3) * 60);
					secondes3 = (((convert3 - degre3) * 60) - minutes3) * 60;

					cout << "Le troisieme angle du triangle mesure: " << degre3 << " degres, " << minutes3 << " minutes et " << secondes3 << " secondes." << endl;
				}
				case 8: {
					quitter = true;
					break;
				}
				default: {
					cout << "Choix non valide." << endl;
					break;
				}
			}
		}
		return 0;
	}
