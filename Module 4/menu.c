

int affichermenu()
{   int choix;
     	system("color C");
	   while(choix>=7 && choix<=1)
	 {  
	 	printf("%n ** vous devez choisir l'option que vous voulez faire **\n\n"); //choix d'operation 
	    printf ("\n\n");
        printf ("\t\t************************************\n");
        printf ("\t\t**\n");
        printf ("\t\t** 1 ..Afficher les donn�es dans l�ordre du fichier .csv \n");
        printf ("\t\t** 2 ..Afficher les donn�es en ordre croissant/d�croissant (selon le temps, selon le pouls)    \n");
        printf ("\t\t** 3 ..Rechercher et afficher les donn�es pour un temps particulier\n");
        printf ("\t\t** 4 ..Afficher la moyenne de pouls dans une plage de temps donn�e\n");
        printf ("\t\t** 5 ..Afficher le nombre de lignes de donn�es actuellement en m�moire\n");
        printf ("\t\t** 6 ..Rechercher et afficher les max/min de pouls (avec le temps associ�)\n");
        printf ("\t\t** 7 ..Quitter l�application\n");
    
        printf ("\t\t**\n");
        printf ("\t\t************************************\n");
    
    
     	 	printf("\n\n ce que vous voulez faire \n\ttapper  (1 ou 2...4)  :   ");
            scanf("%d",&choix);
	
    
	 }
	 return choix;

}

void choixmenu (int choix)
 
{ int r,q;
switch (choix)
 {
	case 1:
	   break;
	case 2:
       break;
	case 3:
      break;
	case 4:
      break;
	 case 5:	 
	   break;
	 case 6:
	 	break;
			
	 case 7:
	 	printf("\n\n\n\\t\t\tnvous aller quitter le prgramme \n\n\n\n");
	 	for (r=1;r<=1;r++) 
		 { // pour gagner du temps avant la fermmiture du programme 
            for (q=0;q<=800000000;q++);

         }
	 	system ("cls");
	 	break;
					 
 }
	
}
	 

