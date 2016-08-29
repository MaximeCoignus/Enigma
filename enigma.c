#include <stdio.h>
	
//CREATION DES TABLEAUX POUR CHAQUE ROTORS

    int TABrotor1[]= {
        0, // valeur tableau 0
        13,// valeur tableau 1
        6, // valeur tableau 2
        17,// valeur tableau 3
        1, // valeur tableau 4
        11,// valeur tableau 5
        21,// valeur tableau 6
        7, // valeur tableau 7
        8, // valeur tableau 8
        12,// valeur tableau 9
        22,// valeur tableau 10
        9, // valeur tableau 11
        3, // valeur tableau 12
        24,// valeur tableau 13
        14,// valeur tableau 14
        23,// valeur tableau 15
        4, // valeur tableau 16
        19,// valeur tableau 17
        2, // valeur tableau 18
        20,// valeur tableau 19
        5, // valeur tableau 20
        18,// valeur tableau 21
        10,// valeur tableau 22
        16,// valeur tableau 23
        15,// valeur tableau 24 
        25,// valeur tableau 25     
      
      };

    int TABrotor2[]= {
        24,// valeur tableau 0
        0, // valeur tableau 1
        23,// valeur tableau 2
        18,// valeur tableau 3
        20,// valeur tableau 4
        11,// valeur tableau 5
        6, // valeur tableau 6
        8, // valeur tableau 7
        7, // valeur tableau 8
        21,// valeur tableau 9
        19,// valeur tableau 10
        9, // valeur tableau 11
        3, // valeur tableau 12
        14,// valeur tableau 13
        4, // valeur tableau 14
        10,// valeur tableau 15
        5, // valeur tableau 16
        1, // valeur tableau 17
        12,// valeur tableau 18
        17,// valeur tableau 19
        22,// valeur tableau 20
        13,// valeur tableau 21
        14,// valeur tableau 22
        15,// valeur tableau 23
        25,// valeur tableau 24 
        16,// valeur tableau 25     
      
      };

    int TABrotor3[]= {
        14,// valeur tableau 0
        6, // valeur tableau 1
        9, // valeur tableau 2
        10,// valeur tableau 3
        25,// valeur tableau 4
        4, // valeur tableau 5
        13,// valeur tableau 6
        21,// valeur tableau 7
        23,// valeur tableau 8
        2, // valeur tableau 9
        24,// valeur tableau 10
        0, // valeur tableau 11
        17,// valeur tableau 12
        11,// valeur tableau 13
        7, // valeur tableau 14
        20,// valeur tableau 15
        12,// valeur tableau 16
        15,// valeur tableau 17
        22,// valeur tableau 18
        16,// valeur tableau 19
        8, // valeur tableau 20
        18,// valeur tableau 21
        5, // valeur tableau 22
        19,// valeur tableau 23
        3, // valeur tableau 24 
        1, // valeur tableau 25     
      
      };


    int TABrotor4[]= {
        11,// valeur tableau 0
        16,// valeur tableau 1
        4, // valeur tableau 2
        0, // valeur tableau 3
        2, // valeur tableau 4
        22,// valeur tableau 5
        24,// valeur tableau 6
        15,// valeur tableau 7
        13,// valeur tableau 8
        10, // valeur tableau 9
        14,// valeur tableau 10
        5, // valeur tableau 11
        6, // valeur tableau 12
        19,// valeur tableau 13
        25,// valeur tableau 14
        9, // valeur tableau 15
        3, // valeur tableau 16
        17,// valeur tableau 17
        18,// valeur tableau 18
        8, // valeur tableau 19
        12,// valeur tableau 20
        7, // valeur tableau 21
        1, // valeur tableau 22
        23,// valeur tableau 23
        21,// valeur tableau 24 
        20,// valeur tableau 25     
      };

    int TABrotor5[]= {
        2, // valeur tableau 0
        13, // valeur tableau 1
        5, // valeur tableau 2
        14,// valeur tableau 3
        16,// valeur tableau 4
        7, // valeur tableau 5
        15,// valeur tableau 6
        24,// valeur tableau 7
        19,// valeur tableau 8
        22,// valeur tableau 9
        17,// valeur tableau 10
        12,// valeur tableau 11
        8, // valeur tableau 12
        3, // valeur tableau 13
        21,// valeur tableau 14
        23,// valeur tableau 15
        25,// valeur tableau 16
        10,// valeur tableau 17
        4, // valeur tableau 18
        20,// valeur tableau 19
        18,// valeur tableau 20
        1, // valeur tableau 21
        6, // valeur tableau 22
        9, // valeur tableau 23
        11,// valeur tableau 24 
        0, // valeur tableau 25     
      };

    int TABrotor6[]= {
        13,// valeur tableau 0
        25,// valeur tableau 1
        17,// valeur tableau 2
        3, // valeur tableau 3
        22,// valeur tableau 4
        7, // valeur tableau 5
        14,// valeur tableau 6
        9, // valeur tableau 7
        10,// valeur tableau 8
        15,// valeur tableau 9
        5, // valeur tableau 10
        8, // valeur tableau 11
        2, // valeur tableau 12
        6, // valeur tableau 13
        23,// valeur tableau 14
        24,// valeur tableau 15
        16,// valeur tableau 16
        12,// valeur tableau 17
        1, // valeur tableau 18
        19,// valeur tableau 19
        18,// valeur tableau 20
        20,// valeur tableau 21
        21,// valeur tableau 22
        0, // valeur tableau 23
        4, // valeur tableau 24 
        11,// valeur tableau 25     
      };
      


// CREATION DU TABLEAU DE VALEUR / 27 POSITIONS POUR LES ROTORS 

  char decrypt[]={
    'A',  // valeur tableau 0
    'B',  // valeur tableau 1
    'C',  // valeur tableau 2
    'D',  // valeur tableau 3
    'E',  // valeur tableau 4
    'F',  // valeur tableau 5
    'G',  // valeur tableau 6
    'H',  // valeur tableau 7
    'I',  // valeur tableau 8
    'J',  // valeur tableau 9
    'K',  // valeur tableau 10
    'L',  // valeur tableau 11
    'M',  // valeur tableau 12     
    'N',  // valeur tableau 13
    'O',  // valeur tableau 14
    'P',  // valeur tableau 15
    'Q',  // valeur tableau 16
    'R',  // valeur tableau 17
    'S',  // valeur tableau 18
    'T',  // valeur tableau 18
    'U',  // valeur tableau 20
    'V',  // valeur tableau 21
    'W',  // valeur tableau 22
    'X',  // valeur tableau 23
    'Y',  // valeur tableau 24
    'Z',  // valeur tableau 25
    };
/*#############################################################################*/   
/*-----------------------------------------------------------------------------*/  
/*#############################################################################*/       


// FONCTION DE CRYPTAGE   /#######/ A REMETTRE EN FORME  
    
  //  int cryptage(void){
    
    
   
    
/*#############################################################################*/   
/*-----------------------------------------------------------------------------*/  
/*#############################################################################*/   
 
int main (){


//INITIALISATION POSITION DES ROTORS 1 A 6 
        int rotor1=0;
        int rotor2=0;
        int rotor3=0;
        int rotor4=0;
        int rotor5=0;
        int rotor6=0;  
        
 
 
  
//INITIALISATION INCREMENT PAIRAGE DES LETTRES / 11 PAIRAGES POSSIBLES   

  	  int liaison= 0 ;
    
    	  char paires0[1];
       char paires1[1];
       char paires2[1];
       char paires3[1];
   

//PARAMETRAGE DE LA POSITION INITIALE DES 6 ROTORS

	printf("Bonjour, veuillez rentrer le réglage des ROTORS (entre 0 et 25) : \n\n");
	
	begin1: ;
		printf("ROTOR1: ");
		scanf("%d",&rotor1);	
			if(rotor1 > 25){
			printf("Valeur invalide, RECOMMENCEZ\n");
			goto begin1; 
			}
	
	begin2: ;
		printf("ROTOR2: ");
		scanf("%d",&rotor2);
			if(rotor2 > 25){
			printf("Valeur invalide, RECOMMENCEZ\n");
			goto begin2; 
			}
			
	begin3: ;					 
		printf("ROTOR3: ");
		scanf("%d",&rotor3);
			if(rotor3 > 25){
			printf("Valeur invalide, RECOMMENCEZ\n");
			goto begin3; 
			}	
			
	begin4: ;						 
		printf("ROTOR4: ");
		scanf("%d",&rotor4);
			if(rotor4 > 25){
			printf("Valeur invalide, RECOMMENCEZ\n");
			goto begin4; 
			}	
			
	begin5: ;						 
		printf("ROTOR5: ");
		scanf("%d",&rotor5);
			if(rotor5 > 25){
			printf("Valeur invalide, RECOMMENCEZ\n");
			goto begin5; 
			}	
	begin6: ;			 
		printf("ROTOR6: ");
		scanf("%d",&rotor6);
			if(rotor6 > 25){
			printf("Valeur invalide, RECOMMENCEZ\n");
			goto begin6; 
			}	



//INDEXAGE DE LA POSITION DES 6 ROTORS PAR RAPPORT A LA VARIABLE " rotor** "
	
	TABrotor1[rotor1];
	TABrotor2[rotor2];
	TABrotor3[rotor3];
	TABrotor4[rotor4];
	TABrotor5[rotor5];
	TABrotor6[rotor6];
		
	
//AFFICHAGE DU REGLAGE DES ROTORS
	
	printf("REGLAGE DES ROTORS: \n\n");
	
	printf("%d,",rotor1);
	printf("%d,",rotor2);
	printf("%d,",rotor3);
	printf("%d,",rotor4);
	printf("%d,",rotor5);
	printf("%d,\n",rotor6);
	printf("%d,",TABrotor1[rotor1]);
	printf("%d,",TABrotor2[rotor2]);
	printf("%d,",TABrotor3[rotor3]);
	printf("%d,",TABrotor4[rotor4]);
	printf("%d,",TABrotor5[rotor5]);
	printf("%d,\n\n",TABrotor6[rotor6]);




//BOUCLE DE SAISIE PAIRAGE LETTRE
 /*        
	if(rotor1 == 0 && liaison <= 9 ) {   
		printf("Veuillez saisir PAIRAGE N°%d \n",liaison);            
          printf("LETTRE N°1  (paire %d) : \n",liaison);  
              
          scanf("%c \n",paires0);  
        
     } 

     
     if(rotor1 == 0 && liaison <= 9){            
		printf("LETTRE N°2: (paire %d) : \n",liaison);  
		scanf("%c\n",paires1);
    
     }
         
liaison++;     
          
       
	if(rotor1 == 0 && liaison <= 9 ){  
		printf("Veuillez saisir PAIRAGE N°%d \n",liaison); 
		printf("LETTRE N°1  (paire %d) : \n",liaison);  
              
          scanf("%c\n",paires2);  
     }
       
	
	if(rotor1 == 0 && liaison <= 9){   
		printf("LETTRE N°2: (paire %d) : \n",liaison);  
              
          scanf("%c\n",paires3);
        
     }
         else{
		printf("ERREUR\n");
	 }  
          
liaison++; 
   
	printf("%c \n",paires0[1]);
     printf("%c \n",paires1[1]);
     printf("%c \n",paires2[1]);
     printf("%c \n",paires3[1]);
     printf("%d \n",liaison);
                               
*/



// PARTIE INCREMENTATION DES ROTORS

	int rtr1 = 0;
	int rtr2 = 0;
	int rtr3 = 0;
	int rtr4 = 0;
	int rtr5 = 0;
	int rtr6 = 0;
	
     
     int count = 0;   

// Saisie

    char saisie[100];
    char resultat[100];
    
    
    int idx0 = 0; 
    int idxrot1 = 0 ; 
    int idxrot2 = 0 ; 
    int idxrot3 = 0 ;
    int idxrot4 = 0 ; 
    int idxrot5 = 0 ; 
    int idxrot6 = 0 ; 
    

	printf("Saisir MESSAGE à CRYPTER ou DECRYPTER : \n");
                 
	while(count < 100){
	scanf("%s",saisie);	
     
   /*  	for( rtr1 = 0; rtr1 <= 25; rtr1++){
     		
     	
     	}
     	
    */
    
     
     // CONVERSION ALPHANUMERIQUE VERS INDEX LETTRE EN CHIFFRE
    	   	
    	   	if(saisie =="A" ){
    	   	idx0 = 0;
    	   	}
    	   	
    	   	if(saisie == "B"){
    	   	idx0 = 1;
    	   	}
    	   	
    	   	if(saisie == "C"){
    	   	idx0 = 2;
    	   	}
    	   	
    	   	if(saisie == "D"){
    	   	idx0 = 3;
    	   	}
    	   	
    	   	if(saisie == "E"){
    	   	idx0 = 4;
    	   	}
    	   	
    	   	if(saisie =="F"){
    	   	idx0 = 5;
    	   	}
    	   	
    	   	if(saisie == "G"){
    	   	idx0 = 6;
    	   	}
    	   	
    	   	if(saisie == "H"){
    	   	idx0 = 7;
    	   	}
    	   	
    	   	if(saisie == "I"){
    	   	idx0 = 8;
    	   	}
    	   	
    	   	if(saisie == "J"){
    	   	idx0 = 9;
    	   	}
    	   	
    	   	if(saisie == "K"){
    	   	idx0 = 10;
    	   	}
    	   	
    	   	if(saisie == "L"){
    	   	idx0 = 11;
    	   	}
    	   	
    	   	if(saisie == "M"){
    	   	idx0 = 12;
    	   	}
    	   	
    	   	if(saisie == "N"){
    	   	idx0 = 13;
    	   	}
    	   	
    	   	if(saisie == "0"){
    	   	idx0 = 14;
    	   	}
    	   	
    	   	if(saisie == "P"){
    	   	idx0 = 15;
    	   	}
    	   	
    	   	if(saisie == "Q"){
    	   	idx0 = 16;
    	   	}
    	   	
    	   	if(saisie == "R"){
    	   	idx0 = 17;
    	   	}
    	   	
    	   	if(saisie == "S"){
    	   	idx0 = 18;
    	   	}
    	   	
    	   	if(saisie == "T"){
    	   	idx0 = 19;
    	   	}
    	   	
    	   	if(saisie == "U"){
    	   	idx0 = 20;
    	   	}
    	   	
    	   	if(saisie == "V"){
    	   	idx0 = 21;
    	   	}
    	   	
    	   	if(saisie == "W"){
    	   	idx0 = 22;
    	   	}
    	   	
    	   	if(saisie == "X"){
    	   	idx0 = 23;
    	   	}
    	   	
    	   	if(saisie == "Y"){
    	   	idx0 = 24;
    	   	}
    	   	
    	   	if(saisie == "Z"){
    	   	idx0 = 25;
    	   	}
    	   	
    int beforereflect = 0; 
    	   	
    	   	idxrot1 = TABrotor1[idx0];
    	   	idxrot2 = TABrotor2[idxrot1];
    	   	idxrot3 = TABrotor3[idxrot2];
    	   	idxrot4 = TABrotor4[idxrot3];
    	   	idxrot5 = TABrotor5[idxrot4];
    	   	idxrot6 = TABrotor6[idxrot5];
    	   	
    	   	beforereflect = idxrot6;
    	   	
    	   	printf("%d \n",beforereflect);
	
	
    int idxreflect6= 0;
    int idxreflect5= 0;
    int idxreflect4= 0;
    int idxreflect3= 0;
    int idxreflect2= 0;
    int idxreflect1= 0;
    
   int idxreflect = 0;	   	
    
    int idxalphab = 0;
    
  
// CONVERSION REFLECTEUR
  	
    	   	if(beforereflect = 0){
    	   		idxreflect = 24;
    	   	}	
    	   	if(beforereflect= 24){
    	   		idxreflect = 0;
    	   	}
    	    
    	     
    	   	if(beforereflect= 1){
    	   		idxreflect = 3;
    	   	}
    	   	if(beforereflect= 3){
    	   		idxreflect = 1;
    	   	}
    	   	
    	   	
    	   	if(beforereflect= 2){
    	   		idxreflect = 4;
    	   	}
    	   	if(beforereflect= 4){
    	   		idxreflect = 2;
    	   	}
    	   	
    	   	
    	   	if(beforereflect= 5){
    	   		idxreflect = 7;
    	   	}
    	   	if(beforereflect= 7){
    	   		idxreflect = 5;
    	   	}
    	   
    	   
    	   	if(beforereflect= 6){
    	   		idxreflect = 8;
    	   	}
    	   	if(beforereflect= 8){
    	   		idxreflect = 6;
    	   	}
    	   	
    	   	
    	   	if(beforereflect= 9){
    	   		idxreflect = 11;
    	   	}
    	   	if(beforereflect= 11){
    	   		idxreflect = 9;
    	   	}
    	   	
    	   	
    	   	if(beforereflect= 10){
    	   		idxreflect = 12;
    	   	}
    	   	if(beforereflect= 12){
    	   		idxreflect = 10;
    	   	}
    	   	
    	   	
    	   	if(beforereflect= 14){
    	   		idxreflect = 16;
    	   	}
    	   	if(beforereflect= 16){
    	   		idxreflect = 14;
    	   	}
    	   	
    	   	
    	   	if(beforereflect= 13){
    	   		idxreflect = 15;
    	   	}
    	   	if(beforereflect= 15){
    	   		idxreflect = 13;
    	   	}
    	   	
    	   	
    	   	if(beforereflect= 18){
    	   		idxreflect = 20;
    	   	}
    	     if(beforereflect= 20){
    	   		idxreflect = 18;
    	   	}
    	   	
    	   	
    	   	if(beforereflect= 17){
    	   		idxreflect = 19;
    	   	}
    	   	if(beforereflect= 19){
    	   		idxreflect = 17;
    	   	}
    	   	
    	   	
    	   	if(beforereflect= 22){
    	   		idxreflect = 24;
    	   	}
    	   	if(beforereflect= 24){
    	   		idxreflect = 22;
    	   	}
    	   	
    	   	if(beforereflect= 21){
    	   		idxreflect = 23;
    	   	}
    	   	if(beforereflect= 23){
    	   		idxreflect = 21;
    	   	}
    	   	
    	   	
    	   	
    	   	idxreflect6= TABrotor6[idxreflect];
    	   	idxreflect5= TABrotor5[idxreflect6];
    	   	idxreflect4= TABrotor4[idxreflect5];
    	   	idxreflect3= TABrotor3[idxreflect4];
    	   	idxreflect2= TABrotor2[idxreflect3];
    	   	idxreflect1= TABrotor1[idxreflect2];
    	   	
    	   	idxalphab = idxreflect1;
    	   	
    	  // 	printf("%d \n",idxalphab);
    	   	
    	   	
    	   		
    	   	
    	   	
    	  	
    	  	
    	  	
   }
 
                     
     }   
		    
    	   	

		
	
              
             
    
   
       
       
       
       
       
       
             
             
             
            
              
             
              
      
      
     

      
   









  
   
   






