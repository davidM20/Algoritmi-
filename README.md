# Libreria-para-C-
Esta es una librería hecha para simplificar los problemas con los string y hacer que los programas tengas menos líneas de código

Con un arrglo de char en c es posible crear dentro de el secciones de elementos asi digamos que si quiero agregar un nombre o una palabra utilizaria la funcion write() que recibe como primer parametro el array destino (aquel donde se guardara los elementos) y como segundo la frase o arrglo que se desea agregar al array destino. Internamente lo que hara esta funcion es una concatenacion de elementos separado por un "|" de esta manera cada elemento de la funcion tendra un indice en base al numero de "|" en que de encuentre. Para leer lo que contine se hace uso de la funcion "read()" la cual devuelve un puntero con el texto y su uso es verdaderamente sencillo, el primer parametro es el array tipo stringg que ya fue previamente llenado usando la funcion write y el segundo parametro sera un entero que le indicara el indice del elemento al que se desea acceder. 

ejemplo:

int main(){

  char text[200];
  write(text,"Esto es una frase");
  write(text,"Esto es una frase 2");
  

  printf("%s", read(text,0);
  return 0;
  
}

salida :

$ Esto es una frase 
