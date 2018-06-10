#include <iostream>
#include <fstream>

using namespace std;

string lee(ifstream &a); // a== archivo
int cuenta(const string &contenido, char c); // c==contenido


int main()
{
    int cantidad;
    string contenido;
    ifstream españa;
    españa.open ("España.txt");

    if (!españa.is_open ()){
        cout << "Error: No se ha podido abrir el archivo" << endl;
        return 1;
    }

    contenido = lee(españa);
    cantidad = cuenta(contenido, '.'); // lo q quieras Buscar A..33
    cout << cantidad << endl;

    return 0;
}

string lee(ifstream &a)
{
    string s, contenido;

    while (getline (a, s))
        contenido += s + "\n";
    return contenido;
}

int cuenta(const string &contenido, char c)
{
    int contador = 0;

    string::const_iterator i;

    for (i = contenido.begin (); i != contenido.end (); ++i)
        if (*i == c)
            ++contador;
    return contador;

}
