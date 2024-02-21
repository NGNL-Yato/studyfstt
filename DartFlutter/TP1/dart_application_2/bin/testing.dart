void main() {
	Map<String , int> fruits = {'pomme': 1,
	'fraise':2,
	'orange':3
	};
	print (fruits);
	print (fruits['pomme']);
	fruits['pomme']=5;
	fruits.remove('pomme');
	print("Final result is ${fruits.keys}");

}
