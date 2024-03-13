
//import java.util.Locale;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {

		// DECLARAÇÃO VARIÁVEIS
		Scanner sc = new Scanner(System.in);
		double base, height, area, perimeter, diagonal;

		// LEITURA INPUTS
		System.out.print("Base do retangulo: ");
		base = sc.nextDouble();
		System.out.print("Altura do retangulo: ");
		height = sc.nextDouble();

		// MANIPULAÇÃO DADOS
		area = base * height;
		perimeter = 2 * (base + height);
		diagonal = Math.sqrt(Math.pow(base, 2.0) + Math.pow(height, 2.0));

		// PRINT OUTPUTS
		System.out.println("AREA = " + String.format("%.4f", area));
		System.out.println("PERIMETRO = " + String.format("%.4f", perimeter));
		System.out.println("DIAGONAL = " + String.format("%.4f", diagonal));

		// Desalocar recursos do Scanner
		sc.close();
	}
}
