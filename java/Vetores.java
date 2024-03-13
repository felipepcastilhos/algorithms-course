
//import java.util.Locale;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {

		// DECLARAÇÃO VARIÁVEIS
		Scanner sc = new Scanner(System.in);
		int qtyNumbers;

		// LEITURA INPUTS
		System.out.print("Quantos numeros voce vai digitar? ");
		qtyNumbers = sc.nextInt();

		// DECLARAÇÃO VETOR
		double[] vetNumbers = new double[qtyNumbers];

		// LEITURA VETOR
		for (int i = 0; i < qtyNumbers; i++) {
			System.out.print("Digite um numero: ");
			vetNumbers[i] = sc.nextDouble();
		}

		// PRINT OUTPUTS
		System.out.println("\nNUMEROS DIGITADOS:");
		for (int i = 0; i < qtyNumbers; i++) {
			System.out.println(String.format("%.2f", vetNumbers[i]));
		}

		// Desalocar recursos do Scanner
		sc.close();
	}
}
