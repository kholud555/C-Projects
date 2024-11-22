
#include <iostream>
#include "clsMyString.h"
using namespace std;

int main()
{
    clsMyString S1;


    cout << "S1 = " << S1.Value << endl;
    S1.Value = "Kholud1";
    cout << "S1 = " << S1.Value << endl;

    S1.Value = "Kholud2";
    cout << "S1 = " << S1.Value << endl;

    S1.Value = "Kholud3";
    cout << "S1 = " << S1.Value << endl;

    S1.Value = "Kholud4";
    cout << "S1 = " << S1.Value << endl;

    S1.Value = "Kholud5";
    cout << "S1 = " << S1.Value << endl;


    cout << "\n\n\n";
    cout << "Undo" << endl;
    S1.Undo();
    cout << "S1 = " << S1.Value << endl;

    S1.Undo();
    cout << "S1 = " << S1.Value << endl;

    S1.Undo();
    cout << "S1 = " << S1.Value << endl;

    S1.Undo();
    cout << "S1 = " << S1.Value << endl;

    S1.Undo();
    cout << "S1 = " << S1.Value << endl;

  

    cout << "\n\n\n";
    S1.Redo();
    cout << "S1 = " << S1.Value << endl;

    S1.Redo();
    cout << "S1 = " << S1.Value << endl;

    S1.Redo();
    cout << "S1 = " << S1.Value << endl;

    S1.Redo();
    cout << "S1 = " << S1.Value << endl;

    S1.Redo();
    cout << "S1 = " << S1.Value << endl;

    S1.Redo();
    cout << "S1 = " << S1.Value << endl;

    S1.Redo();
    cout << "S1 = " << S1.Value << endl;

}
