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
            Console.Write("Quantos números você irá digitar? ");
            qtyNumbers = int.Parse(Console.ReadLine());

            //DECLARAÇÃO VETOR
            double[] vet = new double[qtyNumbers];

            //LEITURA VETOR
            for (int i = 0; i < qtyNumbers; i++)
            {
                Console.Write("Digite o número para a posição " + (i + 1) + "ª do vetor: ");
                vet[i] = double.Parse(Console.ReadLine());
            }

            //PRINTANDO VETOR
            Console.WriteLine("\n" + "O vetor digitado foi: ");
            for (int i = 0; i < qtyNumbers; i++)
            {
                Console.WriteLine(vet[i].ToString("F1"));
            }
        }
    }

}



