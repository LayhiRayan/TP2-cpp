#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Etudiant {
private:
    string nom;
    string prenom;
    int cne;
    float notes[5];

public:
    void creer() {
        cout << "Nom : ";
        cin >> nom;
        cout << "Prénom : ";
        cin >> prenom;
        cout << "CNE : ";
        cin >> cne;
        for (int i = 0; i < 5; i++) {
            cout << "Note " << i + 1 << " : ";
            cin >> notes[i];
        }
    }

    void initialiser(string n, string p, int c, float nts[5]) {
        nom = n;
        prenom = p;
        cne = c;
        for (int i = 0; i < 5; i++) {
            notes[i] = nts[i];
        }
    }

    float getMaxNote() {
        float max = notes[0];
        for (int i = 1; i < 5; i++) {
            if (notes[i] > max)
                max = notes[i];
        }
        return max;
    }

    float getMinNote() {
        float min = notes[0];
        for (int i = 1; i < 5; i++) {
            if (notes[i] < min)
                min = notes[i];
        }
        return min;
    }

    float getMoyenneNote() {
        float somme = 0;
        for (int i = 0; i < 5; i++) {
            somme += notes[i];
        }
        return somme / 5;
    }

    float getQuota() {
        int count = 0;
        for (int i = 0; i < 5; i++) {
            if (notes[i] >= 10)
                count++;
        }
        return (count / 5.0f) * 100;
    }

    void affiche() {
        cout << "Nom : " << nom << ", Prénom : " << prenom << ", CNE : " << cne << endl;
        cout << "Notes : ";
        for (int i = 0; i < 5; i++) {
            cout << fixed << setprecision(1) << notes[i] << " ";
        }
        cout << endl;
        cout << "Note max : " << getMaxNote() << ", Note min : " << getMinNote() << endl;
        cout << "Moyenne : " << getMoyenneNote() << ", Quota >=10 : " << getQuota() << "%" << endl;
    }
};

int main() {
    Etudiant etudiants[3];

    float notes1[5] = {15.5, 10.0, 8.0, 17.0, 12.5};
    etudiants[0].initialiser("Zineb", "ElAmrani", 123456, notes1);

    float notes2[5] = {9.0, 11.5, 10.0, 14.0, 13.5};
    etudiants[1].initialiser("Rayan", "Bennis", 654321, notes2);



    cout << "\n===== Affichage des étudiants =====\n";
    for (int i = 0; i < 3; i++) {
        cout << "\nÉtudiant " << i + 1 << " :\n";
        etudiants[i].affiche();
    }

    return 0;
}
