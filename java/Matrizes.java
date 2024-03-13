
//import java.util.Locale;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {

		// DECLARAÇÃO VARIÁVEIS
		Scanner sc = new Scanner(System.in);
		int qtyLines, qtyColumns;

		// LEITURA INPUTS
		System.out.print("Quantas linhas vai ter a matriz? ");
		qtyLines = sc.nextInt();
		System.out.print("Quantas colunas vai ter a matriz? ");
		qtyColumns = sc.nextInt();

		// DECLARAÇÃO MATRIZ
		int[][] matNumbers = new int[qtyLines][qtyColumns];

		// LEITURA MATRIZ
		for (int i = 0; i < qtyLines; i++) {
			for (int j = 0; j < qtyColumns; j++) {
				System.out.print("Elemento [" + i + "," + j + "]: ");
				matNumbers[i][j] = sc.nextInt();
			}
		}

		// PRINT OUTPUTS
		System.out.println("\nMATRIZ DIGITADA: ");
		for (int i = 0; i < qtyLines; i++) {
			for (int j = 0; j < qtyColumns; j++) {
				System.out.print(matNumbers[i][j] + " ");
			}
			System.out.println();
		}

		// Desalocar recursos do Scanner
		sc.close();
	}
}
