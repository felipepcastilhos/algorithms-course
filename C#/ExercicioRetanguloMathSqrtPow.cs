using System;

namespace atribuiçãoValores
{
    class Atribuição
    {
        static void Main(string[] args)
        {

            //DECLARAÇÃO VARIÁVEIS
            double largura, altura, area, perimetro, diagonal;

            //LEITURA INPUTS
            Console.Write("Base do retângulo: ");
            largura = double.Parse(Console.ReadLine());
            Console.Write("Altura do retângulo: ");
            altura = double.Parse(Console.ReadLine());

            //MANIPULAÇÃO DADOS
            area = largura * altura;
            perimetro = 2 * (largura + altura);
            diagonal = Math.Sqrt(Math.Pow(largura, 2.0) + Math.Pow(altura, 2.0));

            //PRINTANDO OUTPUTS
            Console.WriteLine("AREA = " + area.ToString("F4"));
            Console.WriteLine("PERIMETRO = " + perimetro.ToString("F4"));
            Console.WriteLine("DIAGONAL = " + diagonal.ToString("F4"));
        }
    }
}