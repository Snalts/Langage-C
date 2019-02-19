#include <stdio.h>
#include <fraction.h>

int
main() 
{
  err_t noerr = OK;
  fraction_t * fraction = NULL ; 

  printf( "Debut du programme des test sur les objets de type fraction_t\n" ) ; 

  printf( "Test d'existance sur un fraction_t inexistant\n" ) ;
  ( fraction_existe(fraction) ? printf("-->KO\n") : printf ("-->OK\n") )  ;

  printf( "Test creation fraction_t\n" ) ;
  fraction = fraction_creer( 5 , 7 ) ;

  printf( "Test affichage fraction\n" ) ;
	fraction->p_f_afficher(fraction); 
  printf( "\n");

  printf( "Test d'existance sur un fraction_t existant\n" ) ;
  ( fraction_existe(fraction) ? printf("-->OK\n") : printf ("-->KO\n") )  ;

  printf( "Test destruction fraction\n" ) ;
	noerr=fraction->p_f_detruire(&fraction);
	#ifdef _DEBUG_
	if(!noerr){
		printf("OK");
	}
	#endif
  printf( "Fin du programme des test sur les objets de type fraction_t\n" ) ; 

  printf( "Nombre de fraction_t  = %lu\n" , fraction_cpt ) ;

  return(0) ; 
}
