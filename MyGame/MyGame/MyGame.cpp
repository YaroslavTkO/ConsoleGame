
#include "Classes.h"

int main()
{
    //default settings
    srand(time(0));
    Player p[10];
    Hero h[10];
    string bot1, bot2, bot3, bot4, bot5, bot6, bot7, bot8, bot9, bot10;
    PlayerHero ph[10];
    bot1 = "BOT James";
    bot2 = "BOT Jacob";
    bot3 = "BOT Frank";
    bot4 = "BOT Patrick";
    bot5 = "BOT Freddie";
    bot6 = "BOT Tom";
    bot7 = "BOT Endy";
    bot8 = "BOT Merry";
    bot9 = "BOT Peter";
    bot10 = "BOT Vasiliy";
    p[0].setname(bot1);
    p[1].setname(bot2);
    p[2].setname(bot3);
    p[3].setname(bot4);
    p[4].setname(bot5);
    p[5].setname(bot6);
    p[6].setname(bot7);
    p[7].setname(bot8);
    p[8].setname(bot9);
    p[9].setname(bot10);
    h[0].CreateHero(1, 50, 55, "Young Sorcerrer");
    h[1].CreateHero(2, 100, 30, "Warrior");
    h[2].CreateHero(3, 120, 25, "Fighter");
    h[3].CreateHero(4, 200, 5, "Tank");
    h[4].CreateHero(5, 50, 50, "Sniper");
    h[5].CreateHero(6, 40, 60, "Mage");
    h[6].CreateHero(7, 35, 70, "Higher Mage");
    h[7].CreateHero(8, 80, 35, "Shooter");
    h[8].CreateHero(9, 20, 120, "Dark sorcerrer");
    h[9].CreateHero(10, 70, 15, "Weapon carrier");
    //creating players
    for (int i = 0; i < 10; i++) {
        int sw;
        cout << "**************\n" << "Do you wish to add player?\n1.Yes\n2.No\n" << "**************" << endl;
        cin >> sw;
        switch (sw) {
        case 1:
            p[i].createplayer();
            break;
        case 2:
            goto aftercreating;
            break;
        default:
            cout << "Invalid number. Skipping..." << endl;
        }
    }
aftercreating:;
    //Randomising player's and hero's ids
    const int k = 10;
    int m[k];

    for (int i = 0; i < k; i++)
    {
    a: m[i] = 1 + rand() % k;
        for (int j = 0; j < i; j++)
            if (m[j] == m[i]) goto a;
    }
   int v[k];

   for (int i = 0; i < k; i++)
   {
   b: v[i] = 1 + rand() % k;
       for (int j = 0; j < i; j++)
           if (v[j] == v[i]) goto b;
   }
   for (int i = 0; i < 10; i++) {
       p[i].setId(m[i]);
  }
   for (int i = 0; i < 10; i++) {
       h[i].SetHeroId(m[i]);
   }
   for (int i = 0; i < 10; i++) {
       for (int j = 0; j < 10; j++) {
           if (p[i].getId() == h[j].getHeroId()) {
               ph[i].MatchingHeroPlayer(p[i], h[j]);
           }
       }
   }
   for (int i = 0; i < 10; i++) {
       ph[i].View();
   }



}