 
#include "Keyboard.h"
 
void print_pt(String phrase)
{
  int len = phrase.length();

  for ( int i=0; i <= len; i++)
  {
    switch(phrase[i])
      {
        case '^':
          Keyboard.write(0x22);
          Keyboard.write(' ');
          break;
  
        case '~':
          Keyboard.write(0x27);
          Keyboard.write(' ');
          break;
  
        case ';':
          Keyboard.write(0x2f);
          break;
  
        case ':':
          Keyboard.write(0x3f);
          break;
        
        case ']':
          Keyboard.write(0x5c);
          break;
  
        case '[':
          Keyboard.write(0x5d);
          break;
  
        case '\'':
          Keyboard.write(0x60);
          break;
  
        case '}':
          Keyboard.write(0x7c);
          break;
  
        case '{':
          Keyboard.write(0x7d);
          break;
  
        case '\"':
          Keyboard.write('~');
          break;
  
        case '?':
          Keyboard.press(KEY_RIGHT_ALT);
          Keyboard.press('w');
          Keyboard.releaseAll();
          break;
  
        case '/':
          Keyboard.press(KEY_RIGHT_ALT);
          Keyboard.press(0x71);
          Keyboard.releaseAll();
          break;
  
        default:
          Keyboard.write(phrase[i]);
          break;
      
      }
  }
}
