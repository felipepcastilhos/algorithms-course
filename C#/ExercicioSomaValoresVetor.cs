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
            Console.Write("Quantos numeros você vai digitar? ");
            qtyNumbers = int.Parse(Console.ReadLine());

            //DECLARAÇÃO VETOR
            double[] vetNumbers = new double[qtyNumbers];

            //LEITURA VETOR
            for (int i = 0; i < qtyNumbers; i++)
            {
                Console.Write("Digite um numero: ");
                vetNumbers[i] = double.Parse(Console.ReadLine());
            }

            //MANIPULAÇÃO DADOS         
            double sum = 0;
            double media = 0;
            for (int i = 0; i < qtyNumbers; i++)
            {
                sum += vetNumbers[i];
            }
            media = sum / qtyNumbers;

            //PRINT OUTPUTS
            Console.Write("\n");
            Console.Write("VALORES = ");
            for (int i = 0; i < qtyNumbers; i++)
            {
                Console.Write(vetNumbers[i].ToString("F1") + " ");
            }
            Console.Write("\n");
            Console.WriteLine("SOMA = " + sum.ToString("F2"));
            Console.WriteLine("MEDIA = " + media.ToString("F2"));

        }
    }
}




