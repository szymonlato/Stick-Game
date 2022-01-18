/*Szymon LATO WCY19KX2S0
 *ZAD. 3 ZAPAŁKI
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
class Stick {
    std::string name;
    int ilosc_zapalek;

public:

    Stick(int ilosc_zapalek, std::string name) {
        this->ilosc_zapalek = ilosc_zapalek;
        this->name = name;
    }

    void print_zapalki() {
        std::cout << "pozostale zapalki [" << ilosc_zapalek << "] ";
        for (int i = 0; i < ilosc_zapalek; ++i) {
            std::cout << "i ";
        }
        std::cout << std::endl;
    }

    int los_komputer() {
        return ((rand() % 3) + 1);
    }


    int get_value() {
        int value;
        do {
            std::cout << "podaj ile zapalek zabierasz " << name << " <1,2,3>:";
            std::cin >> value;
        } while (value < 1 || value > 3);
        return value;
    }


    int los_dwa_komputer() {
        return ((rand() % 2) + 1);
    }

    void check_if_win(int wartosc) {
        if (wartosc == 0){
            std::cout << "PRZEGRALES" << std::endl;

    }
    }

    void check_if_komp_win(int wartosc) {
        if (wartosc == 0)
            std::cout << "WYGRALES" << std::endl;
    }


//losowanie kto zaczyna wybierac jesli wypadnie liczba 1 to zaczyna gracz jesli 2 to komputer
    void serce_gry() {
        print_zapalki();
        std::cout << "Losowanie kto zaczyna wybierac zapalki";
        int k = ((rand() % 2) + 1), z;
        std::cout << "[" << k << "]" << std::endl;


        //pierwszy warunek
        if (k == 1) {
            std::cout << "zaczyna gracz" << std::endl;

            //zaczyna gracz
            while (ilosc_zapalek > 2) {
                ilosc_zapalek -= get_value();
                print_zapalki();
                check_if_win(ilosc_zapalek);
                if (ilosc_zapalek == 0)
                    break;

                //komputer
                z = los_komputer();
                ilosc_zapalek -= z;
                std::cout << "komputer wybral " << z << std::endl;
                print_zapalki();
                check_if_komp_win(ilosc_zapalek);
                if (ilosc_zapalek == 0)
                    break;
            }
        } else {//komputrer zaczyna
            std::cout << "zaczyna komputer" << std::endl;
            while (ilosc_zapalek > 2) {
                //komputer
                z = los_komputer();
                ilosc_zapalek -= z;
                std::cout << "komputer wybral " << z << std::endl;
                print_zapalki();
                check_if_komp_win(ilosc_zapalek);
                if (ilosc_zapalek == 0)
                    break;

                //gracz
                ilosc_zapalek -= get_value();
                print_zapalki();
                check_if_win(ilosc_zapalek);
                if (ilosc_zapalek == 0)
                    break;
            }
        }

        //drugi warunek

        if (ilosc_zapalek == 2) {
            if (k == 1) {
                //zaczyna gracz
                while (ilosc_zapalek > 0) {
                    ilosc_zapalek -= get_value();
                    print_zapalki();
                    check_if_win(ilosc_zapalek);
                    if (ilosc_zapalek == 0)
                        break;
                    //komputer
                    z = los_dwa_komputer();
                    ilosc_zapalek -= z;
                    std::cout << "komputer wybral " << z << std::endl;
                    print_zapalki();
                    check_if_komp_win(ilosc_zapalek);
                    if (ilosc_zapalek == 0)
                        break;

                };
            } else {
                while (ilosc_zapalek > 0) {
                    //komputer
                    z = los_dwa_komputer();
                    ilosc_zapalek -= z;
                    std::cout << "komputer wybral " << z << std::endl;
                    print_zapalki();
                    check_if_komp_win(ilosc_zapalek);
                    if (ilosc_zapalek == 0)
                        break;

                    //gracz
                    ilosc_zapalek -= get_value();
                    print_zapalki();
                    check_if_win(ilosc_zapalek);
                    if (ilosc_zapalek == 0)
                        break;

                }


            }
        }

        //trzevci warunek
        if (ilosc_zapalek == 1) {
            if (k == 1) {
                //zaczyna gracz
                while (ilosc_zapalek > 0) {
                    ilosc_zapalek -= get_value();
                    print_zapalki();
                    check_if_win(ilosc_zapalek);
                    if (ilosc_zapalek == 0)
                        break;
                    //komputer
                    z = 1;
                    ilosc_zapalek -= z;
                    std::cout << "komputer wybral " << z << std::endl;
                    print_zapalki();
                    check_if_komp_win(ilosc_zapalek);
                    if (ilosc_zapalek == 0)
                        break;
                };
            } else {
                while (ilosc_zapalek > 0) {
                    //komputer
                    z = 1;
                    ilosc_zapalek -= z;
                    std::cout << "komputer wybral " << z << std::endl;
                    print_zapalki();
                    check_if_komp_win(ilosc_zapalek);
                    if (ilosc_zapalek == 0)
                        break;

                    //gracz
                    ilosc_zapalek -= get_value();
                    print_zapalki();
                    check_if_win(ilosc_zapalek);
                    if (ilosc_zapalek == 0)
                        break;

                }
            }
        }
    }
};


int losuj_zapalki(){
    int k =((std::rand() % 13) + 10);
    return k;
}

int main() {
    srand(time(NULL));
  /*//Stick q = Stick::get_name();
  std::string name;
  std::cout<<"podaj nazwe gracza"<<std::endl;
  std::cin>>name;
   Stick game(losuj_zapalki(),name);
   game.print_zapalki();
  //q.losuj_zapalki();
  //q.print_zapalki();
  //std::cout<<q.los_komputer();
  //game.print_zapalki();
  game.serce_gry();
*/

    std::string name;
    std::cout<<"podaj nazwe gracza"<<std::endl;
    std::cin>>name;
    Stick game(losuj_zapalki(),name);
    //game.print_zapalki()
    game.serce_gry();

    return 0;
}
