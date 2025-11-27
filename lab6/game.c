#include <stdio.h>

char box[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void Board_create();
void Board_marking(int, char);
int Check_win();
int main() {
    int choice, player=1, i;
    char mark;
    do{
        Board_create();
        if(player%2 !=0) player =1;
        else player=2;
        
        printf("Nguoi choi %d, nhap so:", player);
        scanf("%d", &choice);

        if (player==1) {
            mark = 'X';
        } else {
            mark = 'O';
        }
        Board_marking(choice, mark);
        
        i=Check_win();
        player++;
    } while(i == -1);
    Board_create();
    if (i==1) printf("nguoi choi %d da thang", --player);
    else printf("hoa");
    return 0;
}
void Board_create() {
    printf("Co ca ro");
    printf("\nnguoi choi 1: (X)--nguoi choi 2: (O)\n");
    printf("%c  | %c   |  %c\n", box[1], box[2], box[3]);
    printf("-----|-----|-----\n");
    printf("%c  | %c   |  %c\n", box[4], box[5], box[6]);
    printf("-----|-----|-----\n");
    printf("%c  | %c   |  %c\n", box[7], box[8], box[9]);
    printf("-----|-----|-----\n");
}

void Board_marking(int choice, char mark) {
    if (choice ==1 && box[1]=1) box[1] = mark;
    else if (choice ==2 && box[2]=2) box[2]=mark;
    else if (choice ==3 && box[3]=3) box[3]=mark;
    else if (choice ==4 && box[4]=4) box[4]=mark;
    else if (choice ==5 && box[5]=5) box[5]=mark;
    else if (choice ==6 && box[6]=6) box[6]=mark;
    else if (choice ==7 && box[7]=7) box[7]=mark;
    else if (choice ==8 && box[8]=8) box[8]=mark;
    else if (choice ==9 && box[9]=9) box[9]=mark;
    else printf("nuoc di hay day");
}
int check_win() {
    //check ngang
    if (box[1] == box[2] && box[2]  == box[3]) return 1;
    else if(box[4]==box[5] && box[5]== box[6]) return 1;
    else if(box[7]==box[8] && box[8]== box[9]) return 1;
    //check doc
    else if(box[1]==box[4] && box[4]== box[7]) return 1;
    else if(box[2]==box[5] && box[5]== box[8]) return 1;
    else if(box[3]==box[6] && box[6]== box[9]) return 1;
    //check cheo
    else if(box[1]==box[5] && box[5]== box[9]) return 1;
    else if(box[3]==box[5] && box[5]== box[7]) return 1;

    else if(box[1]!= '1' && box[2]!= '2' && box[3]!= '3' && box[4]!= '4'&& box[5]!= '5' && box[6]!= '6'&& box[7]!= '7' && box[8]!= '8' && box[9]!='9')
        return 0;
    else
        return -1;
}