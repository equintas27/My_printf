# 🖨️ ft_printf

Reimplementação da função **`printf`** em C.  
Este projeto faz parte do currículo da **42 School** e tem como objetivo entender melhor variádicos, manipulação de strings e conversão de tipos.

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
- ft_putchar.c
- ft_putstr.c
- ft_putnbr.c
- ft_putunbr.c
- ft_puthex.c
- ft_putptr.c
 ...

  ## Como Compilar
  Clone o repositório e rode o "make":

"bash"
git clone https://github.com/teu-usuario/ft_printf.git
cd ft_printf
make
Isso irá gerar o arquivo libftprintf.a, que pode ser linkado nos teus programas
gcc main.c -L. -lftprintf -o my_program

Autor: Eugênio Quintas
