//Soit la définition suivante des classes erreur et A :
class erreur
{ public :
int num ;
} ;
class A
{ public :
A(int n)
{ if (n==1) { erreur er ; er.num = 999 ; throw er ; }
}
} ;
//Quels résultats fournira ce programme utilisant ces deux classes :
#include <iostream>
using namespace std ;
main()
{ void f() ;
try
{ f() ;
}
catch (erreur er)
{ cout << "dans main : " << er.num << "\n" ; 
}
cout << "suite main\n" ;                     
} void f()
{ try
{ A a(1) ;
}
catch (erreur er)                           /*Le programme affiche :      */
{ cout << "dans f : " << er.num << "\n" ;   /*dans f : 999                */
}                                           /*suite main                  */
}                                           /*                            */
