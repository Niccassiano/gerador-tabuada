# 📋 Gerador de Tabuada em C

> Programa em C que gera a tabuada de qualquer número, exibe no terminal e salva automaticamente o resultado em um arquivo `.txt`.

---

## 📌 Sobre o Projeto

Exercício prático desenvolvido na disciplina de **Algoritmos e Programação I** no **SENAC SP**, aplicando os conceitos de **funções**, **laço `for`** e **manipulação de arquivos** em C.

O programa solicita um número ao usuário, exibe a tabuada completa (de 1 a 10) no terminal e gera automaticamente um arquivo `tabuada.txt` com o resultado salvo.

---

## 🏗️ Tecnologias Utilizadas

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![GCC](https://img.shields.io/badge/GCC-Compiler-A8B9CC?style=for-the-badge&logo=gnu&logoColor=black)
![VS Code](https://img.shields.io/badge/VS_Code-007ACC?style=for-the-badge&logo=visual-studio-code&logoColor=white)

---

## 📁 Estrutura do Projeto

```
gerador-tabuada/
│
├── gerador.c           # Código fonte principal
├── output/             # Pasta de saída dos arquivos .txt gerados
└── .gitignore
```

---

## 🧠 Como o Código Funciona

O programa é dividido em duas partes principais:

**1. Função `gerarTabuada()`** — exibe a tabuada no terminal:

```c
void gerarTabuada(int numero) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}
```

**2. `main()`** — lê o número, chama a função e salva o resultado em arquivo:

```c
FILE *arquivo = fopen("tabuada.txt", "w");

for (int i = 1; i <= 10; i++) {
    fprintf(arquivo, "%d x %d = %d\n", numero, i, numero * i);
}

fclose(arquivo);
```

O programa trata o caso de **erro ao abrir o arquivo** e encerra com mensagem de aviso caso isso ocorra.

---

## 🖥️ Demonstração

**Entrada:**
```
Digite um numero: 7
```

**Saída no terminal:**
```
7 x 1 = 7
7 x 2 = 14
7 x 3 = 21
7 x 4 = 28
7 x 5 = 35
7 x 6 = 42
7 x 7 = 49
7 x 8 = 56
7 x 9 = 63
7 x 10 = 70

Arquivo criado com sucesso!
```

**Arquivo `tabuada.txt` gerado automaticamente com o mesmo conteúdo.**

---

## ▶️ Como Compilar e Executar

### 1. Clone o repositório

```bash
git clone https://github.com/Niccassiano/gerador-tabuada.git
cd gerador-tabuada
```

### 2. Compile com GCC

```bash
gcc gerador.c -o gerador
```

### 3. Execute

```bash
# Windows
gerador.exe

# Linux/Mac
./gerador
```

---

## 📚 Conceitos Aplicados

| Conceito | Aplicação |
|---|---|
| Funções | `gerarTabuada()` separada do `main()` |
| Laço `for` | Iteração de 1 a 10 para cada multiplicação |
| `printf` / `scanf` | Entrada e saída no terminal |
| Manipulação de arquivos | `fopen`, `fprintf`, `fclose` para gerar o `.txt` |
| Tratamento de erro | Verificação de `NULL` ao abrir o arquivo |

---

## 🔗 Links

- 👤 GitHub: [Niccassiano](https://github.com/Niccassiano)
- 📘 Repositório de exercícios: [algoritmos-programacao-I](https://github.com/Niccassiano/algoritmos-programacao-I)

---

```python
| Desenvolvido por Nicolle Cassiano 💻🦖
```
