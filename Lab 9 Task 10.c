#include<stdio.h>
int turn;
int basicAttack(int dmg, int hp) { return hp - dmg; }
int powerStrike(int dmg, int hp) { return hp - (int)(dmg * 2.5); }
int heal(int dmg, int hp) { return hp + 20; }
int poisonAttack(int dmg, int hp) { 
    printf("Target is poisoned!\n"); 
    return hp-(dmg / 2); 
}
int main(){
    int hp=100,dmg=25,choice;
    int (*action)(int, int); 
    for(turn=1;turn<=3;turn++){
        printf("\nTurn %d | Current HP: %d\n", turn, hp);
        printf("Select Action (1:Basic, 2:Power, 3:Heal, 4:Poison): ");
        scanf("%d", &choice);
        if(choice==1)action=basicAttack;
        else if(choice==2)action=powerStrike;
        else if(choice==3)action=heal;
        else 
		action=poisonAttack;
        hp=action(dmg, hp);
    }
    printf("\nFinal HP after 3 turns: %d\n", hp);
    return 0;
}
