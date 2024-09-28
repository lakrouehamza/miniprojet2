#include<stdio.h>
#include<string.h>
main(){
    int n,index=0,valu,i,choix,teste;
    const N = 10000;
    char titre[N][20],auteur[N][20],nom[20];
    float prix [N];
    int quantite[N];
    
    do{
	    printf("donne un numbre pour choix pour  \n");
	    printf("\tAjouter un livre au stock entre  \"1\" \n");
	    printf("\tAfficher tous les livres disponible  \"2\" \n");
	    printf("\tRechercher un livre par son titre.  \"3\" \n");
	    printf("\tMettre a jour la quantite d'un livre  \"4\" \n");
	    printf("\tSupprimer un livre du stock.  \"5\" \n");
	    printf("\tAfficher le nombre total de livres en stock  \"6\" \n\n\n");
	    printf("entre le choix : ");
	    scanf("%d",&choix);
	    switch(choix){
	    	case 1:
						printf("donne l'attribut e livre tu vuex entre : \n\n");
						printf("donne le titre de livre : ");
					    scanf("%s",titre[index]);
					    printf("donne le auteur de livre : ");
					    scanf("%s",auteur[index]);
					    printf("donne le prix de livre : ");
					    scanf("%f",&prix[index]);
					    printf("donne le quantite de livre : ");
					    scanf("%d",&quantite[index++]); 
					    printf("\n");			
			break;
	    	case 2 :
	    				printf("\t\t\t l'affchage de bibloitique \n\n");
	    				for(i=0;i<index;i++)
	      					printf("(%s,%s,%.4f,%d) \n",titre[i], auteur[i], prix[i], quantite[i]);
			break;
	    	case 3:
		               printf("     \t\t\tRechercher un livre \n\n");
	             	   printf("donne le titre de livre : ");
	                   scanf("%s",nom);
	                   for(i=0;i<index;i++)
			             	if(strcmp(nom,titre[i])==0){
			             		printf("oui le livre  il exeste dans bibloiteque \n");
								break;	
							 }
						if(i==index)
			             	printf("non le livre  il n'exeste pas  dans bibloiteque \n");
					
			break;
	    	case 4:
						printf("   \t \t \t Mettre a Jour la Quantite d'un Livre  \n\n");
				        printf("donne letitre du livre   :  ");
				        scanf("%s",nom);
				        printf("donne le nouvelle quantite :");
				        scanf("%d",&valu);
				        
				        for(i=0;i<index;i++)
				            if(strcmp(titre[i],nom)==0){
				                quantite[i]=valu;
	               			break;
	            			}
			break;
	    	case 5:
			
						printf("     \t\t\tSupprimer un livre du stock \n\n");
			            printf("donne le titre de livre : ");
			            scanf("%s",nom);
			            for(i=0;i<index;i++)
			             	if(strcmp(nom,titre[i])==0)
			             		break;
			            i--;
			            index--;
			            
			            for(;i<index;i++)
	             		strcpy(titre[i],titre[i+1]);
			break;
	    	case 6:
						
				        printf("\t\t\t l'affchage  le nombre total de livres en stock \n\n");	
										int valu = 0;
				    	for(i=0;i<index;i++)
	             	printf("le nombre total de livres en stock %d  et additionnant %d \n",i,valu);
			break;
			
	} 

    printf(" pour entre un autre choix entre 1 sinon entre 0: ");
    scanf("%d",&teste);
	}while(teste==1);
    
}
