using System;

namespace atribuiçãoValores
{
    class Atribuição
    {
        static void Main(string[] args)
        {

            //DECLARAÇÃO VARIÁVEIS
            int linhasMatriz, colunasMatriz;

            //LEITURA INPUTS
            Console.Write("Quantas linhas vai ter a matriz? ");
            linhasMatriz = int.Parse(Console.ReadLine());
            Console.Write("Quantas colunas vai ter a matriz? ");
            colunasMatriz = int.Parse(Console.ReadLine());

            //DECLARAÇÃO MATRIZ
            int[,] matriz1 = new int[linhasMatriz, colunasMatriz];

            //LEITURA MATRIZ
            for (int i = 0; i < linhasMatriz; i++)
            {
                for (int j = 0; j < colunasMatriz; j++)
                {
                    Console.Write("Qual valor para a posição [" + i + "][" + j + "]: ");
                    matriz1[i, j] = int.Parse(Console.ReadLine());
                }
            }
            //poderia ser Console.WriteLine();
            //Console.Write("MATRIZ DIGITADA:");
            Console.WriteLine("\n" + "MATRIZ DIGITADA:");
            //PRINTANDO MATRIZ
            for (int i = 0; i < linhasMatriz; i++)
            {
                for (int j = 0; j < colunasMatriz; j++)
                {
                    Console.Write(matriz1[i, j] + " ");
                }
                //Console.WriteLine()
                Console.Write("\n");
            }

        }
    }
}