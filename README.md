## Anotações aula 01:

- Linguagens compiladas: C/C++, C#, Java, Rust
- Linguagens interpretadas: Python, JS, PHP, Ruby, etc

## Debug:

- Execução passo a passo
- Para adicionar breakpoint, “clica na linha que quer partir dela para debugar+F5” (F8 para passar sequencialmente pelas linhas do algorítmo)

## SEÇÃO 4 - CONDICIONAL:

- Se não deve realizar nem a condição da parte afirmativa do condicional, em caso de condição negativa do condicional estiver de acordo, iniciar condicional pela condição que seria negativa; (Se isso for dentro de um looping, normalmente receber valores antes de entrar no looping, e ler novamente no final do looping antes de reiniciar);
- Operadores Comparativos (<>=)
- Operadores Lógicos(e ou não)
- Comando caso(switch), quando tem muitas condições sobre o valor de apenas uma variável, podendo em um caso, atribuir mais de 1 possível valor para a variável escolhida

## SEÇÃO 5 - ESTRUTURAS REPETITIVAS:

- While(enquanto): para quando não souber a quantidade de repetições previamente
- For(para): para quando souber quantidade de repetições previamente
- Do While(repita-até): semelhante ao enquanto, porém a condição não vai na abertura da repetição, mas no final

## SEÇÃO 6 - VETORES:

- Indexados: utilizam índices para serem acessados
- Unidimensional: uma dimensão
- Homogêneos: dados do mesmo tipo
- Na sua declaração é preciso definir quantidade de índices

## SEÇÃO 7 - MATRIZES:

- Se eu preciso salvar todos valores de uma linha, ou de uma coluna, talvez seja melhor eu salvar eles em um novo vetor para rodar posteriormente. Ou se for apenas printar algum valor ou outro, mas não toda linha ou toda coluna, não precise do vetor;
- Pensar se preciso rodar toda a matriz ou apenas uma parte com alguma característica específica:(2 hífens abaixo)
  - Para diagonal principal, posso rodar a matriz com apenas 1 for de i, usando matriz[i][i];
  - Para acima da diagonal principal, posso rodar a matriz com 2 for, mas apenas 1 variável, primeiro for com i, e o segundo com “i+1”;

## SEÇÃO 9 - LInguagem C:

- Atentar-se ao “lixo de memória”, quando uma variável é inicializada sem estar zerada ou atribuída algum valor;
- Atribuição de string: “strcpy(nome, "Maria SIlva");”
- Se eu dividir 2 números inteiros, o resultado será inteiro independentemente da variável atribuída ser ou não;
- Vetor não precisa de & para referência á memoria para printar;
- scanf para string apenas sem espaço;
- string com espaço é com fgets e limpar entrada antes sempre para remover o “enter” do buffer;
- precisa chamar a função limpar entrada() antes de ler um char também para consumir a quebra de linha pendente;
- fgets pega inclusive o \n, por isso se não desejar, após ele precisa adicionar comando strtok (ambos comandos precisam da biblioteca string.h);
- Debugger só funciona dentro de um projeto, e não dentro de um arquivo exclusivo;
- Divisão entre 2 inteiros que pode resultar em um double, fazer casting, usar função: “media = (double) numerador/denominador”
- Declaração de vetor de strings exemplo: “char names[numberOfPeople][50]”, um vetor com 1 string de nome de pessoa por posição do vetor, com no máximo 50 caracteres cada string
- Declarar matrizes “int mat[5][5];”;

## SEÇÃO 10 - LInguagem C++:

- Muito semelhante à linguagem C;
- Ou eu utilizo o comando “using namespace std;” e posteriormente posso usar apenas cout e endl, senão vou precisar utilizar std::cout e std::endl
- char pode atribuir direto por ‘aspas simples’
- string pode atribuir direto por “aspas duplas”
- Operadores aritméticos, lógicos e comparativos são idênticos aos da linguagem C
- ”cout <<” que faz parte da biblioteca “iostream”, substitui o printf, utilizando “using namespace std;”
- setar precisão casas decimas com ponto flutuante pela biblioteca “iomanip”, comando “cout << fixed << setprecision(2);”
- biblioteca universal: “bits/stdc++.h
- comandos: “cout << “texto” << endl” (endline representa \n), ou pode utilizar “cout << “texto\n” “
- Ao invés de utilizar os placeholders como no C, utilizo “”cout << “texto” << variavel << “texto << …” para ir concatenando
- Precisa também fazer casting, por exemplo “(double) a/b”, se a e b forem int e precisar de um resultado double;
- ”cin >> variavel;“, podendo ser int, double, char, string, para “scanf” ou getline para ler até quebra de linha(com espaços)
- também é preciso realizar “limpeza de buffer” antes de utilizar getline, caso já tenha sido lido algo anteriormente e tenha ficado pendente uma quebra de linha, para isso: incluir biblioteca “climits” e código antes do getline
  "“cin.ignore(INT_MAX, ‘\n’);”
  “getline(cin, nome);”"
- while e for iguais a linguagem c

# SEÇÃO 11 - LInguagem Java:

- Saída de Dados em Java: \
  - ”sysout+ctrl+space” > snipets; \ 
  - ”System.out.print(nome_variavel); \
  - “System.out.println(“”);”//Escreve e adiciona \n no final \
  - Para concatenar usar o +; \
  - Formatação casas decimais para double: “System.out.println(String.format(“%.2f”, salario));” \
  - Para garantir impressão que o separador de decimais seja o ponto: “Locale.setDefault(Locale.US);”, importando através da biblioteca “import java.util.Locale;” // adicionar esse “locale…” em cima da parte da declaração das variáveis abaixo da public static void \
  - Para atribuir resultado float entre numerador e denominador sendo ambos inteiros, é necessário realizar o casting (double) antes da operação de divisão. Não é possível um inteiro receber um double sem o casting explícito;
  -Entrada de Dados:
- Para input preciso declarar uma variável do tipo “Scanner”, através do termo “Scanner sc = new Scanner(System.in);”, onde essa parte do “new Scanner..” é ja a parte da criação do objeto. Além disso, é preciso adicionar a biblioteca: “import java.util.Scanner;”. Com isso, para ler dado tipo:

  - ”int x = sc.nextInt();”;
  - ”double y = sc.nextDouble();”;
  - ”char z = sc.next().charAt(0);”; // pois sc le como string, pegando a posição 0
  - ”String s = sc.nextLine();”;
  - Com isso, no final do programa, convém utilizar “sc.close(); para liberar o recurso alocado”;
  - Comando limpeza de buffer em caso de já ter lido algum dado, deixou uma quebra de linha pendente, e após for ler uma string, utilizar “sc.nextLine();” antes da linha para ler a string até a quebra de linha;
    - Para atribuição “String” com S Maiúsculo e aspas duplas “”;
    - Para atribuição de char, aspas simples’’

- Se falta adicionar alguma biblioteca, é possível utilizar o shortcut “Ctrl+shift+O”;

- Operadores em Java:

  - Aritméticos, comparativos e lógicos são exatamente os mesmos da linguagens C;

- Estruturas de Controle (Condicionais e Repetitivas):

  - Exatamente iguais na linguagem C; // If/ While/ For

- Vetores:

  - //Declarando vetor:
  - double[] vetNumbers = new double[qtyNumbers];
  - //Leitura Vetor
  - vetNumbers[i] = sc.nextDouble();
  - //Print Vetor
  - System.out.println(String.format("%.2f", vetNumbers[i]));

- Matrizes:

  - //Declarando Matriz
  - int[][] matNumbers = new int[qtyLines][qtyColumns];
  - //Leitura Matriz
  - matNumbers[i][j] = sc.nextInt();
  - //Print Matriz
  - System.out.print(matNumbers[i][j] + " ");

- Função raiz quadrada e exponenciação:
  - diagonal = Math.Sqrt(Math.Pow(largura,2.0) + Math.Pow(altura,2.0));

QUALQUER DÚVIDA VERIFICAR PDF CURSO===============

# SEÇÃO 12 - Linguagem C#:

- Main com M Maiúsculo;
- String não declara tamanho,
- Operadores aritméticos, comparativos e lógicos são iguais os de C;
- Saída de Dados em C#: (estes abaixos pertencentes a biblitoeca “using System;”
  - Console.Write: escreve na mesma linha;
  - Console.WriteLine: escreve com quebra de linha no final;
- Para formatar casas decimais:
  - Console.WriteLine(“VALOR DE X = “ + x.ToString(“F2”));
- Não precisa de “placeholders” para printar variáveis
  - //neste caso printou já com ponto flutuante ao invés da vírgula(corretamente), mas se printasse com vírgula precisiaria adicionar a biblioteca abaixo
  - //using System.Globalization;
  - //na hora de printar teria que utilizar "Console.WriteLine(x.ToString("F2"));" \*para definir com 2 casas decimais
  - //"Console.WriteLine(x.ToString("F2", CultureInfo.InvariantCulture));" \*para substituir a vírgula decimal por ponto flutuante
  - //Para linha acima poderia atribuir uma variável para abreviar este comando desta forma(dentro do main): "CultureInfo CI = CultureInfo.InvariantCulture;"
- Para concatenar utilizar “+”;
- Para fazer o casting entre tipos de variáveis utilizar por exemplo “resultado = (double)a/b;”//NÃO posso atribuir uma variável a outra sendo que elas são de tipos diferentes. Precisando fazer o casting na variável que será atribuida e não na que vai receber;
- Printando vetor
  - for(int i=0; i(simbolomenor)qtyNumbers; i++) {
    - Console.WriteLine(vet[i].ToString("F1"));
    - }
- Printando Matriz

  - for(int i=0; i(simbolomenor)linhasMatriz; i++) { - for(int j=0; j<colunasMatriz; j++) { - Console.Write(matriz1[i,j] + " "); - } - //Console.WriteLine() - Console.Write("\n"); - }

- Entrada de Dados:
- Utilizar o comando “string x = Console.ReadLine(); para ler texto até a quebra de linha ”
- Comando de leitura para “int, double ou char”: exemplo:
  - int x = int.Parse(Console.ReadLine());
- Nunca será preciso de algo semelhante ao “fflush” para consumir alguma quebra de linha pendente, pois o comando ReadLine já consome e não deixa acumular no buffer, permitindo também ler palavras compostas por espaço entre elas;
- Declarando vetor - -double[] vet = new double[qtyNumbers];
- Declarando Matriz - int[,] matriz1 = new int[linhasMatriz,colunasMatriz];

- Estrutura Condicional, While, For:

  - Exatamente igual em C

- Função raiz quadrada e exponenciação:
  - diagonal = Math.Sqrt(Math.Pow(largura,2.0) + Math.Pow(altura,2.0));

# SEÇÃO 13 - LInguagem Python 3:

- Tipos de dados: int, float, str, str, boolean
- Saída de Dado:
  - print(“”)
- Aloca variável no meio do print: "%d, %s" ou "%f"; "sem ,"; "%name_string" (placeholder)
- 2 casas decimais e arredonda pra cima ou pra baixo:
  - print("O valor é %.2f . " %valor)
- print(“texto {0} texto {1} texto”. format(variavel1, variavel2))
- print(“texto {:.2f} texto”.format(variavel1))
- print(f”IDADE = {variavel1:.2f}”)
- print(f”ALTURA = {variavel2:.2f}”)
- print(f”A funcionaria {var_nome}, sexo {var_sexo}, ganha {var_salario:.2f} e tem {var_idade} anos”)
- Para concatenar usar o +;
- Para saltar linha: print()
- Formatação casas decimais para float:
  - print("SALARIO = %.2f" %salario)
- Para atribuir resultado float entre numerador e denominador sendo ambos inteiros, NÃO é necessário realizar o casting (float) antes da operação de divisão. É possível um inteiro receber um double sem o casting explícito. No caso o casting seria mais para comparações entre variáveis de diferentes tipos

- Entrada de Dados:
  - val0 = int(input(“Digite um número inteiro: “))
  - val1 = float(input(“Digite um valor real: “))
  - str1 = input (“Digite um nome completo”))
  - Não precisa necessariamente declarar tipagem de variáveis
- Mas caso queira: - idade: int //apenas isso - nome = "Maria Silva" - genero = "F"

- Para atribuição “string” aspas simples ou duplas “”;
- Para atribuição de char, aspas simples ou duplas’’

- Operadores:

  - Aritméticos, +, -, \*, /, %, \*\*(exponenciação), //(divisao inteira);
  - Comparativos: <, >, <=, >=, ==, != ou <>
  - Lógicos: and, or, not;

- Estruturas de Controle (Condicionais e Repetitivas):

  - IF:
    - if condição :
      - comando1
      - comando2 #tudo que tiver identado estará dentro do IF
  - if pode ser simples (if embaixo de if), composto (if / else), ou encadeado (if dentro de if, ou if / elif / else

  - WHILE:

    - while conidção :
      - comando1
      - comando2

  - FOR:
    - for name_variavel in range(valor_inicial, valor_final, [passo]):
      - comando1
      - comando2
  - \*o valor inicial é considerado e o valor final não, pois vai até valor_final-1 sendo considerado, semelhante aos indices de um vetor vet[0..9], utilizaria valor inicial=0 e valor final=10

- Vetores:

  - Python não utiliza propriamente estrutura de dados para Vetor clássico, mas Listas e Tuplas. Utilizarei Listas porque conseguimos acessar os elementos da lista com indexador de colchete.
  - Declarando vetor:
  - name_vetor: [tipo] = [0 for x in range(numero_de_elementos)] #o tipo é opcional
  - Exemplos:
  - qtyNumbers = int(input("Quantos numeros voce vai digitar? "))
  - vet: [float] = [0 for x in range(qtyNumbers)]
  - Leitura Vetor
    - for i in range(0, qtyNumbers): - vet[i] = float(input("Digite um número: "))
  - Print Vetor
    - for i in range(0, qtyNumbers):
  - print("%.2f" %vet[i])

  - System.out.println(String.format("%.2f", vetNumbers[i]));

- Matrizes:

  - Python não utiliza propriamente estrutura de dados para Matrizes clássica, mas Listas de Listas.
  - Declarando Matriz
  - name_matriz: [[tipo]] = [[0 for x in range(numero_de_colunas)] for x in range(numero_de_linhas)]
    - Exemplos:
    - qtyLines = int(input("Quantas linhas vai ter a matriz? "))
  - qtyColumns = int(input("Quantas colunas vai ter a matriz? "))
  - matriz1: [[int]] = [[0 for x in range(qtyColumns)] for x in range(qtyLines)]

  - Leitura Matriz

    - for i in range(0, qtyLines): - for j in range(0, qtyColumns): - matriz1[i][j] = int(input(f"Elemento [{i},{j}]: "))

  - Print Matriz
  - for i in range(0, qtyLines):
    - for j in range(0, qtyColumns):
      - print(f"{matriz1[i][j]} ", end="")
    - print()

- Função raiz quadrada e exponenciação:
  - diagonal = Math.Sqrt(Math.Pow(largura,2.0) + Math.Pow(altura,2.0));
