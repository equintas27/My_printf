# 🖨️ ft_printf

Reimplementação da função **`printf`** em C.  
Este projeto faz parte do currículo da **42 School** e tem como objetivo entender melhor sobre funções  variádicas, manipulação de strings e conversão de tipos.

---

# Funcionalidades

- Implementa os seguintes especificadores de formato:
  - %c → caractere
  - %s → string
  - %p → ponteiro (endereço em hexadecimal)
  - %d / `%i` → inteiros decimais (com sinal)
  - %u → inteiros decimais (sem sinal)
  - %x → hexadecimal (minúsculas)
  - %X → hexadecimal (maiúsculas)
  - %% → imprime o caractere `%`

---

# Estrutura do Projeto

- Makefile
- ft_printf.h
- ft_printf.c
- ft_printf_utils.c
- ft_printf_utils1.c

# Como Compilar
  Clone o repositório e rode o "make":

"bash"

git clone https://github.com/equintas27/My_printf.git

cd ft_printf

make

Isso irá gerar o arquivo libftprintf.a, que pode ser linkado nos teus programas

Depois disso, faça isso no terminal:

gcc main.c  libftprintf.a -o my_program

# Exemplo de Uso:

#include "ft_printf.h"

int main(void)
{

    int num = 42;
    ft_printf("Hello %s! O número é %d\n", "mundo", num);
    return 0;
    
}

# Saída esperada:
Hello mundo! O número é 42

Autor: Eugênio Quintas
