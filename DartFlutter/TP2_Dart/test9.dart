void connecter (String host, {int port = 3310, required String user, required String password}) {
	print ("Connexion a $host via le port $port en utilisant $user/password...");
}
void main (){
	connecter("localhost",user:"root",password:"secret");
} 
