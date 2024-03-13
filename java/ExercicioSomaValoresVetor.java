import java.util.Locale;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {

		// DECLARAÇÃO VARIÁVEIS
		Scanner sc = new Scanner(System.in);
		int qtyNumbers;
		double sum, avarege;

		// LEITURA INPUTS
		System.out.print("Quantos numeros voce vai digitar? ");
		qtyNumbers = sc.nextInt();

		// DECLARAÇÃO VETOR
		double[] vetNUmbers = new double[qtyNumbers];

		// LEITURA VETOR
		for (int i = 0; i < qtyNumbers; i++) {
			System.out.print("Digite um numero: ");
			vetNUmbers[i] = sc.nextDouble();
		}

		// MANIPULAÇÃO DADOS
		sum = 0;
		avarege = 0;

		for (int i = 0; i < qtyNumbers; i++) {
			sum += vetNUmbers[i];
		}
		avarege = (double) sum / qtyNumbers;

		// PRINT OUTPUTS
		System.out.println();
		System.out.print("VALORES = ");
		for (int i = 0; i < qtyNumbers; i++) {
			System.out.print(String.format("%.1f", vetNUmbers[i]) + " ");
		}
		System.out.println();
		// System.out.println("SOMA = " + String.format("%.2f", sum));
		System.out.print("SOMA = ");
		System.out.println(String.format("%.2f", sum));
		// System.out.println("MEDIA = " + String.format("%.2f", avarege));
		System.out.print("MEDIA = ");
		System.out.println(String.format("%.2f", avarege));

		// Desalocar recursos do Scanner
		sc.close();
	}
}
