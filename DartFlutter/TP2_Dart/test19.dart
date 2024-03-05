class Text {
	final String content;
	const Text ({this.content = ''});
}
void main () {
	var text = Text (content : 'Hello');
	print (text.content );
	//text.content = 'aa';
	//print (text.content =);
}		
