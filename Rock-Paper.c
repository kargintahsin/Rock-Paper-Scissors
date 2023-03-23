//Rock-paper-scissors

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); 
    printf("Hello World!\n");
    int computer;
    int player;
    int sayacplayer=0;
    int sayaccomputer=0;
    for (int i = 0; i <= 10; i++)
    {
        printf("%d.Tur \nBirini seciniz:\n 1-Tas\n 2-Kagit\n 3-Makas\nSeciminiz: ",i+1);
        scanf_s("%d", &player);
        computer = (rand() % 3) + 1;
        if (player == 1)
        {   
            printf("Tas sectiniz\n");
            if (computer == 1) 
            {
                printf("Bilgisayar secimi: Tas\n");
                printf("Berabere\n");
            }
            else if (computer == 2) 
            {
                printf("Bilgisayar secimi: kagit\n");
                printf("Bİlgisayar kazandi\n");
                sayaccomputer++;
            }
            else
            {
                printf("Bilgisayar secimi: makas\n");
                printf("Oyuncu kazandi\n");
                sayaccomputer++;
            }
        }
        else if (player == 2)
        {   
            printf("Kagit sectiniz\n");
            if (computer == 2) 
            {
                printf("Bilgisayar secimi: kagit\n");
                printf("Berabere\n");
            }
            else if (computer == 3)
            {
                printf("Bilgisayar secimi: makas\n");
                printf("Bilgisayar kazandi\n");
                sayaccomputer++;
            }
            else
            {
                printf("Bilgisayar secimi: Tas\n");
                printf("Oyuncu kazandi\n");
                sayacplayer++;
            }
        }
        else if (player == 3)
        {   
            printf("Makas sectiniz\n");
            if (computer == 3)
            {
                printf("Bilgisayar secimi: makas\n");
                printf("Berabere\n");
            }
            else if (computer == 1)
            {
                printf("Bilgisayar secimi: Tas\n");
                printf("Bİlgisayar kazandi\n");
                sayaccomputer++;
            }
            else 
            {
                printf("Bilgisayar secimi: kagit\n");
                printf("Oyuncu kazandi\n");
                sayacplayer++;
            }
        }
        else
            printf("Gecersiz secenek");

        printf("Skor:\nOyuncu %d - %d Bilgisayar\n", sayacplayer, sayaccomputer);
       
    }

}

