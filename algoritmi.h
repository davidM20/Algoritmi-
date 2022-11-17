#ifndef ALGORITMI_H_INCLUDED
#define ALGORITMI_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define n 3000


#ifdef _WIN32
  #include<windows.h>
#endif  



// Carcteres al ternativos para usar como separador 

// stringg_read()        stringg_create()

//Para que funcione debe haber un espacio al principio y otro al final

int Numero_elementos =0;        
int array[n];     int aux=0;

//                                                FUNCIONES

// Lee arrays tipo Stringg y de un elemnto en base al indice
char stringg_read(char tu_array[], char resultado[] ,int indice); 

void orgranizar(char []);  // Organiza es una funcion para dividir el arrglo char en secciones y asi simular un arrglo de strings

// Esta funcion recibe un texto y devuelve el numero de elementos
int len(); 

// lin limpia los arreglos que y los deja listo para volver a cargarse
char lin(char datoo []);

// Enumera los elemento de un array tipo algoritmi
int items(char k[]); 

// Stringg crea un tipo de array separado por "," y te lo concatena con la frase que le proporciones
char stringg(char destino[], char palabra[]); 

//Es para leer un string y verificar que si hay numero en un texto
int ver_si_tiene_numero(char ann []); 

char conca (char destino[], char frase[], int indicee);

// Esta funcion se encarga de hacer un scanf y guardar datos en el array que le proporciones
char stringgf(char you_array[]);

// Esta funcion devuelve 1 si encuentra una letra (Funcina en mayusculas y minusculas)
int lt(char input[]);


// Guarda y concatena tu valor de input con el array que le proporciones
char stringfw(char tu_array[]);

// Esta funcion se encarga de limpiar la pantalla usando como subprograma el comando System("clear"), System("cls")
void cls();

// esta funcion se encarga de dado un string devolver un int 
int intf(char str[]);



//##########################################################################################################################################



//Organiza cumple con el papel de encontrar las coordenadas de acceso en el arreglo    cuenta las "," que encuentra
void orgranizar(char texto[]){ // Organiza es una funcion para dividir el arrglo char en secciones y asi simular un arrglo de strings

    for(int i=0 ; i <= n; i++) // Esta funcion segmenta una cadena de char para pasen a ser un string emulado
    {
        if (texto[i]=='|')          //      |  ☂|↨↨|✔︎✔︎
        {
            array[aux]= i;
            Numero_elementos++; // aqui le estoy restando uno para que me cuente de manera exacta los elemntos en array sin el 0
            aux++;

        }
    }

}

int len(char text[]){ // len es una funcion para contar el numero de elemtos de una funcion

    int contador=0;     char check;
        for(int i =0 ; i < 3000; i++ ){
            check = text[i];
            if ( check == '\0')
                break;
            contador ++;
        }
        return contador;
}

char lin(char datoo []){

    memset(datoo, 0, n);

}


int items(char k[]){
    int item = len(k);    int numero=0;
    for (int i = 0; i <item; i++)
    {
        if (k[i]=='|')  // |
        {
            numero++;
        }
    }numero--;
    return numero;
    
}

// Stringg crea un lista de elemetos con un array de entrada 
char stringg(char destino[n], char palabra[]){
    
    
    int total = len(palabra);    
    int final= len(destino);
    if (destino[final-1]!='|')
    {
        destino[final]= destino[final]+'|'; 
    }
    
    
    final= len(destino);         
    
        for (int i =0 ; i< total; i++)
        {
        destino[final]= destino[final]+palabra[i];
        final++;
        }
        destino[final]= destino[final]+'|';       //      |✔︎✔︎✔︎

    
    



}


int ver_si_tiene_numero(char ann []){

    int tope= len(ann);

    for (int i = 0; i <tope ; i++)
    {
        if (ann[i]=='1'||ann[i]=='2'||ann[i]=='3'||ann[i]=='4'||ann[i]=='5'||ann[i]=='6'||ann[i]=='7'||ann[i]=='8'||ann[i]=='9'||ann[i]=='0'){
            int a=1;
            return a;
            break;
        }

        
        


    }
    

}




char stringg_read(char tu_array[],char resultado[] ,int indice){ //Lista es el resulta de emular un arreglo de estrings
    orgranizar(tu_array);    int j=0; int d =0;
    if (indice>0){
        j= array[indice-1];
        //j= array[indice];
    }

    for (j ; j < array[indice]; j++){

          if (tu_array[j]!='|')         // |∮∮|⌈⌈
          {
            resultado[d]=resultado[d]+tu_array[j];
            d++;
          }
        }

        indice++;

}


char stringgf(char you_array[]){
    char var[n];
    gets(var);
    stringg(you_array, var);

}

char stringfw(char tu_array[]){
    char ver[n];
    scanf("%s",ver);
    stringg(tu_array,ver);
}


int lt(char input[]){

    int y = len(input);
    int salida= 0;

    for (int i = 0; i < y; i++)
    {
        char p = tolower(input[i]);

        if (p=='a')
        {
            int f=1;
            return f;
            break;
        }

        if (p=='b')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='c')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='d')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='e')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='f')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='g')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='h')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='i')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='j')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='k')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='l')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='m')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='n')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='o')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='p')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='q')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='r')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='s')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='t')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='u')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='v')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='x')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='y')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='z')
        {
            int f=1;
            return f;
            break;
        }
        if (p=='1')
        {
            
            return salida;
            
        }
        if (p=='2')
        {
            
            return salida;
            
        }
        if (p=='3')
        {
           
            return salida;
        }
        if (p=='4')
        {
           
            return salida;
        }
        if (p=='5')
        {
            
            return salida;
        }
        if (p=='6')
        {
           
            return salida;
        }
        if (p=='7')
        {
           
            return salida;
        }
        if (p=='8')
        {
            
            return salida;
        }
        if (p=='9')
        {

            return salida;
        }
        if (p=='0')
        {
            
            return salida;
        }
        

       
        



    }
    
    
    



}




void cls(){
    #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}


int intf(char str[]){
    int l= atoi(str);
    return l;
}








#endif // ALGORITMI_H_INCLUDED
