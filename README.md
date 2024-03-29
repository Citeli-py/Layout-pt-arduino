# Layout pt-br para arduino
Nesse projeto mostrarei uma maneira de representar caracteres do teclado em português para o Arduino pro micro.

# Motivação
Não consegui em nenhum lugar da internet achar uma solução para esse problema, logo resolvi printar todos os resultados possiveis 
indo de 0x00 até 0xBB e procurei os caracteres que não consegui exibir na tela com o Keyboard print.

# Caracteres especiais printaveis

```bash
0x22 => ^
0x27 => ~ 
0x2f => ; 
0x3a => Ç
0x3b => ç
0x3f => : 
0x5b => `
0x5c => ] 
0x5d => [
0x5e => ¨
0x60 => ' 
0x7c => }
0x7d => { 
0x7e => " 
KEY_RIGHT_ALT + w => ?
KEY_RIGHT_ALT + 0x71 => /
~ => "
```


## Contribuições
Pull requests são sempre bem-vindas, mas para grandes mudanças no código, primeiro abra uma issue para discutir-mos as mudanças.

## Como usar
Para utilizar o código, basta colocar o header na pasta do seu projeto e incluir:
```C
#include "print_pt.h"
```
Para digitar uma string:
```C
print_pt("Sua string");
```
Dessa forma, você conseguirá usar alguns caracteres que não seriam printados com Keyboard.print();

## Conclusões finais

Por mais que boa parte do problema foi solucionado, ele ainda tem falhas. Pelo o que eu analisei, ainda falta o caracter 
contrabarra(backslash), se alguém conseguir solucionar para os caracteres que faltam, por favor faça um comentário nesse 
repositório.

## License
[MIT](https://choosealicense.com/licenses/mit/)
