#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int evluation(char a[100],int posi,int numofopitions );
      
int main (int argc, char *argv[]){
    int input[100] = {0};
    char choice[100]= {0};
    int pos = 0;
    int posi= 0;
    int c=0;
    int invalidchoice=0;
    int i=0;
    int flag=0;
    printf("Please enter dice values:\n");
    printf("> ");

    //int DISTING=0; 

    while(c!= '\n'){                                                //get number
        c=getchar();
        if(c== ' '){
            flag = 0;
        }
        if(c!=' '&& c!='\n'){
            if (flag == 1) {
                printf("Incorrect Input Format\n");
                //DISTING=1
                break;
            }
            /*if (pos % 2 != 0 && c != ' ') {
			printf("Incorrect Input Format\n");
		}*/
            input[pos]=c;
            pos++;
            flag = 1;
                                       
    }
}
   /* printf("\n");
    printf("Your dice values are: ");*/
    int printcounter=0;
    for(printcounter=0;printcounter<=4;printcounter++){
       printf("%d ",input[printcounter]-'0');
    }
    printf("\n");

    int numOfNumber = 0;
    int error=3;
     
    while(i<pos){                                                  //evaluation of input
        if(input[i]<'0'||input[i]>'9'){
            printf("Incorrect Input Format\n");
            error=0;
            return 0;
         }
         else if(input[i]<'0'||input[i]>'6'){
            printf("Value Out of Range\n");
            error=0;
            return 0;  
         } 
         else {
            numOfNumber++;
         }
          i++; 
     }
         
     if (numOfNumber != 5 && error==3) {
             
        printf("Incorrect Number of Values\n");
             
        return 0;
    }
     
    printf("\n");
    printf("Please choose:\n");
    printf("  1 -> Reroll some dice\n");
    printf("  2 -> Reroll all dice\n");
    printf("  3 -> Keep dice\n");
    printf("> ");
    
  
    int numofoperation=3;
       
    	
    while(invalidchoice!='\n'){                                                  //evaluation of choice of operation of dice 
        invalidchoice=getchar();//fgetc(stdin);
        if(invalidchoice==' ' || invalidchoice=='\n' || isdigit(invalidchoice)){
				 
				 if(invalidchoice=='\n')
					 break;
				 
                 choice[posi]=invalidchoice;
				 posi++;
             } 
             else {
	         printf("Invalid choice\n");
	         return 0;				 
             }
       }
    int operation=evluation(choice, posi,numofoperation);
     printf("\n");
    printf("Your score opitions are:\n");
    
if(operation==3){                                                              
        int countercheck=0;
        int dicearray[100]={0};
        while(countercheck<5){
            if(input[countercheck]=='1'){
                dicearray[0]++;
	    }
            if(input[countercheck]=='2'){
                  dicearray[1]++; 
            }
            if(input[countercheck]=='3'){
                  dicearray[2]++;
	    }

            if(input[countercheck]=='4'){
                  dicearray[3]++;
	    }

            if(input[countercheck]=='5'){
	   						
                  dicearray[4]++;
	    }

          
               countercheck++;
        }
      
        
       int E=0;
       int R=0;
       int T=0;
       int check=0;
       int sum=(input[0]-'0')+(input[1]-'0')+(input[2]-'0')+(input[3]-'0')+(input[4]-'0');
       while(check<5){
	    if(dicearray[check]>=3){
                printf("1 -> Three of a Kind (%d)\n",sum);
                E=E+1;         

            }
            if(dicearray[check]>=4){
            	printf("2 -> Four of a Kind (%d)\n",sum);
                R=R+1;

            }
            if(dicearray[check]==3 && (dicearray[0]==2||dicearray[1]==2||dicearray[2]==2||dicearray[3]==2
                                      ||dicearray[4]==2)){
                printf("2 -> Full House (%d)\n",sum);
                T=T+1;
                
            }
            check++;
            
       }
       int numofconplus=0;
       int numofconminu=0;
       int counter;
       int P=0;
       int W=0;
       int Q=0;
       for(counter=0;counter<4;counter++){
           if(input[counter]==input[counter+1]+1){
               numofconplus++;
           }
           if(input[counter]==input[counter+1]-1){
               numofconminu++;
           }
       }
           
       if(numofconminu==3 || numofconplus==3){     //&& ((input[1]==input[2]-1 && input[2]== input[3]-1)||(input[1]==input[2]+1 && input[2]==input[3]+1))){
           printf("1 -> Small Straight (30)\n");
              Q=Q+1;
       
       }
       if(numofconminu==4 || numofconplus==4){
           printf("2 -> Straight (40)\n"); 
           W=W+1;
       }
       
if(input[0]==input[1] && input[1]==input[2] && input[2]==input[3] && input[3]==input[4]){
           P=P+1;
           printf("3 -> Yahtzee (50)\n");
       }
        int numofscoreopitions=E+R+T+Q+W+P;
      printf("%d -> Chance (15)\n",numofscoreopitions=E+R+T+Q+W+P+1);
       
   


      printf("> ");	
     
       
       int posin = 0;
       int invalidchoice2=0;
       char scorechoice[100]={0};	
       while(invalidchoice2!='\n'){
             invalidchoice2=getchar();//fgetc(stdin);
             if(invalidchoice2==' ' || invalidchoice2=='\n' || isdigit(invalidchoice2)){
				 
				 if(invalidchoice2=='\n')
					 break;
				 
                 scorechoice[posin]=invalidchoice2;
				 posin++;
             } 
             else {
				
                 printf("Invalid choice\n");
	         return 0;				 
             }
        }
       
       int finalchoice2=evluation(scorechoice,posin, numofscoreopitions); 
        printf("\n");
       printf("Your score is:  ");
       
       if((finalchoice2==1||finalchoice2==2) && (E==1||R==1||T==1)){
       printf("%d",sum);
       
       }
       else if(finalchoice2==1&& Q==1){
       printf("30\n");
       }
       else if(finalchoice2==2&& W==1){
       printf("40\n");
       }
       else if(finalchoice2==3&& P==1){
       printf("50\n");
       }
       else  {
       printf("15\n");
       }
       printf("\n");
    
}




/*int rerlldice;
    int reroll[100];
    int rerollpos;
    if(){
    printf("Please enter dice to reroll (1 - 5):\n");
    printf(">");
    
    while(rerolldice!= '\n'){
        rerolldice=getchar();
        if(rerolldice!=' '&& rerolldice!='\n'){
            reroll[rerollpos]=rerolldice;
            rerollpos++;
        }                               
    }*/
 
   
   
    return EXIT_SUCCESS;
}




int evluation(char a[100],int posi,int numofopitions){
	int choice;
	int finalchoice;
	sscanf(a,"%d", &choice);
	if((choice <= numofopitions) && (choice >=1)) {
		finalchoice=choice;
                //printf("the choice is %d\n", choice);
	        return finalchoice;
         }
	else {
		printf("Invalid choice\n");
		exit(0);
	}
}
     
    /*int l=0;
    for(l=0;l<=q;l++){printf("%d",a[l]);}*/

        
 
