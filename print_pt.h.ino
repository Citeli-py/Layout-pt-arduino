#include "Keyboard.h"
void print_pt(String frase)
{
  char matriz[][3] = {
            { '^', 0x22, ' ' },
            { '~', 0x27, ' ' },
            { ';', 0x2f, '\0' },
            { ':', 0x3f, '\0' },
            { ']', 0x5c, '\0' },
            { '[', 0x5d, '\0' },
            { '\'', 0x60, '\0'},
            { '}', 0x7c, '\0' },
            { '{', 0x7d, '\0' },
            { '\"', '~', '\0' },
            { '?' , 'R', 'w'  },
            { '/' , 'R', 0x71 }};
            
  int len = 12;
  for ( int i=0; i <= frase.length(); i++)
  {
    int j; //Criei fora do for para que a variável j exista fora do loop
    for (j = 0; j < len; j++)
    {
      if (frase[i] == matriz[j][0])
        break;
    }

    if (j < len) //Se j < 10 então o for foi interrompido pelo break
    {
      //Encontrei na tabela -> Imprimir o valor convertido
      if(matriz[j][1] != 'R') // R -> é para utilizar um comando com ALT + alguma tecla
      {
        Keyboard.write(matriz[j][1]);
        if (matriz[j][2] != '\0')
          Keyboard.write(matriz[j][2]);
      }
      else // Caso não possua R só digite
      {
        Keyboard.press(KEY_RIGHT_ALT);
        Keyboard.write(matriz[j][2]);
        Keyboard.releaseAll(); 
      }
    }
    else //Caso contrário, toda a matriz foi percorrida sem nenhuma correspondência
    {
      //Não encontrei na tabela -> Imprimir o valor original
      Keyboard.write(frase[i]);
    }
    
  }
}
