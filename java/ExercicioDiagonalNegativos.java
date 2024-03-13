import java.util.Locale;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {

		// DECLARAÇÃO VARIÁVEIS
		Scanner sc = new Scanner(System.in);
		int orderMatriz;

		// LEITURA INPUTS
		System.out.print("Qual a ordem da matriz? ");
		orderMatriz = sc.nextInt();

		// DECLARAÇÃO MATRIZ
		int[][] matrizNumbers = new int[orderMatriz][orderMatriz];

		// LEITURA MATRIZ
		for (int i = 0; i < orderMatriz; i++) {
			for (int j = 0; j < orderMatriz; j++) {
				System.out.print("Elemento [" + i + "," + j + "]: ");
				matrizNumbers[i][j] = sc.nextInt();
			}
		}

		// MANIPULAÇÃO DADOS
		int qtyNegatives = 0;
		for (int i = 0; i < orderMatriz; i++) {
			for (int j = 0; j < orderMatriz; j++) {
				if (matrizNumbers[i][j] < 0) {
					qtyNegatives++;
				}
			}
		}

		// PRINT OUTPUTS
		System.out.println("DIAGONAL PRINCIPAL: ");
		for (int i = 0; i < orderMatriz; i++) {
			System.out.print(matrizNumbers[i][i] + " ");
		}
		System.out.println();
		System.out.println("QUANTIDADE DE NEGATIVOS = " + qtyNegatives);

		// Desalocar recursos do Scanner
		sc.close();
	}
}
