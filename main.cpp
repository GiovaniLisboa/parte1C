#include <stdlib.h>
#include <iostream>
using std::cout;
using std::cin;

int main(int argc, char **argv)
{
    int selecao; // variável de seleção
    int nota; // seleção 1
    int valor1, valor2; //seleção 2    
    double nota1, nota2, nota3, media, notafinal; // seleção 3
    char frequencia; // seleção 3
    int f, f_1, f_2, cont, sequencia; //seleção 4
           
    cout << "1. Codigo para indicar o conceito do aluno.\n";
    cout << "2. Tarefa 1 (18.10.2017)\n";
    cout << "3. Aula 25.10.2017\n";
    cout << "4. Tarefa 2 (25.10.2017)\n";
    cout << "\n";
    cout << "Selecione a atividade que deseja analisar: ";
    
    cin >> selecao;
    cout<< "\n\n"; 
    
    switch (selecao)
    {
        case 1:
        {
            nota = -1;
            
            while (nota<0 || nota>100)
            {
                cout << "Insira a nota do aluno: ";
                cin >> nota;
            }
            
            if(nota>=90)
            cout << "EXC";
            else if(nota>=70)
                cout << "BOM";
                else if(nota>=50)
                    cout << "REG";
                    else
                        cout << "INS";
            
            break;
        }
        
        case 2:
        {
                cout << "Insira o primeiro numero: ";
                cin >> valor1;
                
                cout << "Insira o segundo numero: ";
                cin >> valor2;
                
                cout << "\n";
                
                if (valor1 > valor2)
                    {
                        cout << valor1;
                        cout << " maior que ";
                        cout << valor2;
                    }
                    else if (valor1 < valor2)
                         {
                        cout << valor2;
                        cout << " maior que ";
                        cout << valor1;
                        }
                        else
                            cout << "Os valores saaaaao iguais \n";
                    
                break;
        }
        
        case 3:
        {
            cout << "Insira a primeira nota do aluno: ";
            cin >> nota1;
    
            cout << "\n Insira a segunda nota do aluno: ";
            cin >> nota2;
    
            cout << "\n Insira a terceira nota do aluno: ";
            cin >> nota3;
    
            media = ( nota1 + nota2 + nota3 ) / 3;
    
            cout << "\n A frequencia do aluno foi maior que 80%? (s/n) ";
            cin >> frequencia;
    
            notafinal = ( frequencia == 's' ) ? (++media) : media;
    
            cout << "\n Nota final do aluno: ";
            cout << notafinal;
            
            cout << "\n \n";
    
            notafinal = media++;
            cout << "Pos incremento: ";
            cout << notafinal;
            cout << "\n";
    
            notafinal = ++media;
            cout << "Pre incremento: ";
            cout << notafinal;

            break;
        }
        
        case 4:
        {
            sequencia = 0;
            
            while (sequencia < 1 || sequencia > 45)
            {
                cout << "Insira quantos termos da sequencia de Fibonacci deseja exibir (1 a 45): ";
                cin >> sequencia;
            }
            
            f_2 = 0;
            f_1 = 0;
            f = 1;
            
            for (cont = 1; cont <= sequencia; cont++)
            {
                cout << "f(";
                cout << cont;
                cout << "): ";
                cout << f;
                cout << "\n";
                f_2 = f_1;
                f_1 = f;
                f = f_1 + f_2;
            }
            
            break;
        }
        
        default:
        cout << "Ate mais!";
        break;
    }
           
    cout<< "\n\n";  
    system ("pause");
    return 0;
}