#include<stdio.h>

void ReverseASentence(char Sentence[]);

int main(){

	FILE *f1;
	int i=0;
	char str[100],ch;


	f1=fopen("B-small-practice.in","r");

	while( !(feof(f1)) ){

		ch=fgetc(f1);

		if(ch!='\n'){
			str[i]=ch;
			i++;
		}
		else{
			str[i]='\0';
			printf("\n%s\n",str);
			ReverseASentence(str);
			i=0;
		}
	}

	

	return 0;

}


void ReverseASentence(char Sentence[]){

	int StringLength=0,i=0,temp=0;


	while(Sentence[StringLength] != '\0'){
		StringLength++;
	}
	//printf("\nString length : %d\n",StringLength);

	temp=StringLength-1;
	StringLength=StringLength-1;
	
	//printf("\nString length : %d temp : %d\n",StringLength,temp);

	while(StringLength >= 0){

		if(Sentence[StringLength] == ' '){
			//printf("Inside");
			for(i=(StringLength+1);i<=temp;i++){
				printf("%c",Sentence[i]);
			}
			printf("%c",Sentence[StringLength]);
			temp=StringLength-1;
		}
		StringLength=StringLength-1;
	}
	for(i=0;i<=temp;i++){
		printf("%c",Sentence[i]);
	}
}
