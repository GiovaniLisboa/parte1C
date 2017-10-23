#include <stdlib.h>
#include <iostream>

int main(int argc, char **argv)
{
	int nota;
    nota=80;
    if(nota>=90)
        cout << "EXC";
    else if(nota>=70)
        cout << "BOM";
    else if(nota>=50)
        cout << "REG";
    else
        cout << "INS";
        
    cout<< "\n\n";
    
    system ("pause");
    return 0;
}
