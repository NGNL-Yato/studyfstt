import 'dart:io';

void main () {
	int numArt = 0;
	String? nomArt;
stdout.write('Entrez nom Article');
	nomArt= stdin.readLineSync();
	switch (nomArt) {
		case 1:
			numArt = 1;
			break;
		case 2:
			numArt = 2;
			break;
	}
	print ("Le numero qui correspond a l'article $nomArt est $numArt");
}
