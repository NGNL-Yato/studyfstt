import 'dart:io';

void main() {
	int num1;
	double num2;
	print("Saisir un entier :");
	num1 = int.parse(stdin.readLineSync()!);
	print ("Saisir un double :");
	num2 = double.parse(stdin.readLineSync()!);
	print ("Le numero entier est $num1, et double est $num2");
}
