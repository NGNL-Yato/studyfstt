import 'dart:io';

int factorial (fact) {
	if(fact == 0 ||fact == 1){
	fact = 1;
	} else {
		var temp = 1;
		for (int i = 1;i <= fact; i++){
			temp *= i;
		}; 
		fact = temp;
	}
	return fact;	
}
void main () {
	print ("Entrez un entier :");
	int input = int.parse(stdin.readLineSync()!);
	factorial (input);
	print ("Le factoriel est : ${factorial(input)}");
}
