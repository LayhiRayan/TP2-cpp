#include <iostream>
#include <cmath>

using namespace std;

class Point
{
    float x;
    float y;

public:
    Point(float a = 0, float b = 0)
    {
        x = a;
        y = b;
    }

    void saisie(float a, float b)
    {
        x = a;
        y = b;
    }

    void deplacer(float a, float b)
    {
        x += a;
        y += b;
    }

    float getX()
    {
        return x;
    }

    float getY()
    {
        return y;
    }

    void setX(float a)
    {
        x = a;
    }

    void setY(float b)
    {
        y = b;
    }

    void afficher()
    {
        cout << "Coordonnees du point : " << endl;
        cout << "Point(" << x << ", " << y << ")" << endl;
    }

    bool comparer(Point p)
    {
        return (x == p.x && y == p.y);
    }

    float distance(Point p)
    {
        return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
    }
};
int main()
{
    Point p1(1, 5);
    Point p2(3, 6);

    p1.afficher();
    p2.afficher();

    p1.deplacer(3, 3);
    cout << "Apres deplacement : " << endl;
    p1.afficher();

    if (p1.comparer(p2))
    {
        cout << "P1 et P2 sont au meme emplacement." << endl;
    }
    else
    {
        cout <<  "P1 et P2 sont � des positions differentes." << endl;
    }

    cout << "Distance entre P1 et P2 : " << p1.distance(p2) << endl;

    return 0;
}
