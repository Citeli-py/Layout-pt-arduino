# Layout-pt-para-arduino
Nesse projeto mostrarei uma maneira de representar caracteres do teclado em português para o Arduino pro micro.

# Motivação
Não consegui em nenhum lugar da internet achar uma solução para esse problema, logo resolvi printar todos os resultados possiveis 
indo de 0x00 até 0xBB e procurei os caracteres que não consegui exibir na tela com o Keyboard print.

# Caracteres especiais printaveis

```bash
^ => 22
~ => 27
; => 2f 
Ç => 3a
ç => 3b
: => 3f 
´ => 5b
] => 5c 
[ => 5d
¨ => 5e
' => 60 
} => 7c 
{ => 7d 
" => 7e 
KEY_RIGHT_ALT + w => ?
KEY_RIGHT_ALT + 0x71 => /
~ => "
```


## Contribuições
Pull requests são sempre bem-vindas, mas para grandes mudanças no código, primeiro abra uma issue para discutir-mos as mudanças.

## Como usar
Para utilizar o código, basta copiar a função e cola-lá no seu programa, para apertar uma string com caracteres especiais use
```C
print_pt("Sua string");
```
Dessa forma, você conseguirá usar alguns caracteres que não seriam printados com Keyboard.print();

## Conclusões finais

Por mais que boa parte do problema foi solucionado, ele ainda tem falhas. Pelo o que eu analisei, ainda falta o caracter \, se 
alguém conseguir solucionar para os caracteres que faltam, por favor faça um comentário nesse repositório.

## License
[MIT](https://choosealicense.com/licenses/mit/)
