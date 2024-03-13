using System;

namespace atribuiçãoValores
{
    class Atribuição
    {
        static void Main(string[] args)
        {

            //DECLARAÇÃO VARIÁVEIS
            int qtyNumbers;

            //LEITURA INPUTS
            Console.Write("Qual a ordem da matriz? ");
            qtyNumbers = int.Parse(Console.ReadLine());

            //DECLARAÇÃO MATRIZ
            int[,] matNumbers = new int[qtyNumbers, qtyNumbers];

            //LEITURA MATRIZ
            for (int i = 0; i < qtyNumbers; i++)
            {
                for (int j = 0; j < qtyNumbers; j++)
                {
                    Console.Write("Elemento [" + i + "," + j + "]: ");
                    matNumbers[i, j] = int.Parse(Console.ReadLine());
                }

            }

            //MANIPULAÇÃO DADOS E PRINT OUTPUTS
            Console.WriteLine("DIAGONAL PRINCIPAL:");
            for (int i = 0; i < qtyNumbers; i++)
            {
                Console.Write(matNumbers[i, i] + " ");
            }
            Console.WriteLine();

            int qtyNegatives = 0;
            for (int i = 0; i < qtyNumbers; i++)
            {
                for (int j = 0; j < qtyNumbers; j++)
                {
                    if (matNumbers[i, j] < 0)
                    {
                        qtyNegatives++;
                    }
                }
            }
            Console.WriteLine("QUANTIDADE DE NEGATIVOS = " + qtyNegatives);
        }
    }
}