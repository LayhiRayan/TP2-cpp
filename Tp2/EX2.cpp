#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

struct Point {
    float x;
    float y;

    void saisie(float a, float b) {
        x = a;
        y = b;
    }

    // Déplacement (translation)
    void depacer(float dx, float dy) {
        x += dx;
        y += dy;
    }

    float abscisse() {
        return x;
    }

    float ordonnee() {
        return y;
    }

    bool comparer(Point p) {
        return (x == p.x && y == p.y);
    }

    float calcule(Point p) {
        return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
    }

    string toString() {
        return "(" + to_string(x) + ", " + to_string(y) + ")";
    }
};

int main() {
    Point p1, p2, p3;

    // Création des points
    p1.saisie(0, 0);
    p2.saisie(3, 4);
    p3.saisie(10, 10);

    cout << fixed << setprecision(2);
    cout << "Coordonnées des points :" << endl;
    cout << "P1 = " << p1.toString() << endl;
    cout << "P2 = " << p2.toString() << endl;
    cout << "P3 = " << p3.toString() << endl;

    Point origine;
    origine.saisie(0, 0);
    cout << "\nDistance de P1 à l'origine : " << p1.calcule(origine) << endl;

    float d12 = p1.calcule(p2);
    cout << "Distance entre P1 et P2 : " << d12 << endl;

    p2.depacer(20, 13);
    cout << "\nP2 après déplacement par (20, 13) : " << p2.toString() << endl;

    if (p1.comparer(p3)) {
        cout << "\nP1 et P3 sont identiques." << endl;
    } else {
        cout << "\nP1 et P3 sont différents." << endl;
    }

    // Trouver les deux points les plus proches
    float d13 = p1.calcule(p3);
    float d23 = p2.calcule(p3);

    float minDist = d12;
    string paire = "P1 et P2";

    if (d13 < minDist) {
        minDist = d13;
        paire = "P1 et P3";
    }
    if (d23 < minDist) {
        minDist = d23;
        paire = "P2 et P3";
    }

    cout << "\nLes deux points les plus proches sont " << paire << " avec une distance de " << minDist << endl;

    return 0;
}
