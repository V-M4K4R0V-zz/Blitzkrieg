//author : V-M4K4R0V
//add music , graphics , national anthem
//more dialogs

#include <stdio.h>

int main()
{
    char    enemy;
    char    path;
    char    RSPY;
    char    Cuser;
    int     i;

    printf("privyet!! Comrade\n");


    printf('enter your name : ');
    scanf("%s",Cuser);

    RSPY = open('/home/o11q/Desktop/git clone/Stalina-Blitzkrieg/mozer racha/names.txt','r');

    i = 19; 
    printf("You know what ill call you %s \n",RSPY);
    printf("is it okay to call you %s my FKHIEND [YES]or[NO] : ");
    scanf("%s",path);

    //ADD A LOOP
    if (path == 'NO')
    {
        printf("SYKAA!! GET OUT U FUCKING WESTERN SPY");
    }
    else if(path == 'YES')
    {
        printf("SO! my APYR what country  u want to invade today ?");
        printf("choose your enemy : ");
        //call func here enemy
    }
    else
    {
        print("you fucking donkey i said yes or not %s \n",path);
    }
    return 0;
}
