#include <iostream>
#include <string>
using namespace std;

class Automotive  // Tworzenie klasy bazowej
{
public:
  virtual string carConcept () = 0;      // Metoda wirtualna zwracająca opis konceptu samochodu
};

class JDMy : public Automotive    // Definiuję klasę JDMy, która dziedziczy publicznie z klasy bazowej Automotive 
{
public:
  string carConcept () override
  {
    return "JDMy concept";
  }
};

class america : public Automotive         // Definiuję klasę america, która dziedziczy publicznie z klasy bazowej Automotive
{
public:
  string carConcept () override
  {
    return "Amerykanski concept";
  }
};

class eu : public Automotive             // Definiuję klasę eu, która dziedziczy publicznie z klasy bazowej Automotive
{
public:
  string carConcept () override
  {
    return "Europejski concept";
  }
};

class Nissan : public JDMy      // Definiuję klasę Nissan, która dziedziczy publicznie zarówno z klasy bazowej Automotive jak i po klasie pochodnej JDMy
{
public:
  string carConcept () override  // Ta komenda sprawia, że tekst pod spodem zostanie wyświetlony po wybraniu tej marki
  {
    return   
      "Nissan 2020 Vision Gran Turismo. Prototyp nawiązuje swoją stylistyką do aktualnego modelu GT-R, jest jednak dużo bardziej futurystyczny, jak na koncept przystało. W samochodzie uwagę zwraca bardzo agresywna stylistyka, która rozwiewa wszelkie wątpliwości, z jakiego typu autem mamy do czynienia. pierwotnie koncepcyjny Nissan miał znaleźć się jedynie w świecie wirtualnym w najnowszej odsłonie gry Gran Turismo, jednak Japończycy zdecydowali się na przeniesienie swojej szalonej myśli do świata rzeczywistości. Kto wie, może właśnie tak będzie wyglądać kolejna generacja GT-R-a?";  
      }
};

class Toyota : public JDMy     // Definiuję klasę Toyota, która dziedziczy publicznie zarówno z klasy bazowej Automotive jak i po klasie pochodnej JDMy
{
public:
  string carConcept () override 
  {
    return
      "Toyota LQ. Na targach w Tokio zadebiutuje koncepcyjna Toyota LQ, nowa generacja Toyoty Concept-i, pokazanej w 2017 roku. Nowy model ma wbudowany system zautomatyzowanego prowadzenia. Wyposażono go też w Yui. Jest to interaktywny awatar sztucznej inteligencji, który uczy się zachowań kierowcy.";
  }
};

class Honda : public JDMy    // Definiuję klasę Honda, która dziedziczy publicznie zarówno z klasy bazowej Automotive jak i po klasie pochodnej JDMy
{
public:
  string carConcept () override  
  {
    return
      "Honda Sports EV. Dwudrzwiowe, dwuosobowe auto sportowe wyróżnia się m.in. okrągłymi światłami LED i długą maską. Zamiast lusterek zdecydowano się na system kamer.";
  }
};

class Ford : public america    // Definiuję klasę Ford, która dziedziczy publicznie zarówno z klasy bazowej Automotive jak i po klasie pochodnej america
{
public:
  string carConcept () override 
  {
    return "Ford Evos. Podczas salonu samochodowego we Frankfurcie Ford przedstawi prototyp o nazwie Evos, który zapowiada linię stylistyczną przyszłych aut tej marki. Zastosowano w nim kilka ciekawych rozwiązań z dziedziny ochrony zdrowia.";
  }
};

class Cadillac : public america    // Definiuję klasę Cadillac, która dziedziczy publicznie zarówno z klasy bazowej Automotive jak i po klasie pochodnej america
{
public:
  string carConcept () override
  {
    return "Cadillac InnerSpace. Cadillac InnerSpace to wizja autonomicznego luksusowego samochodu dla dwojga. Koncepcyjny pojazd został pokazany na targach elektroniki CES w Las Vegas. Poza niezwykłą koncepcją otwierania kabiny - podwójne drzwi w których można również otwierać części dachu - auto oferuje wnętrze przypominające bardziej salon niż kabinę auta. Pasażerowie autonomicznego pojazdu zajmują miejsce na kanapie złudnie przypominającą domową sofę. Mają przed sobą ogromnych rozmiarów ekran i wygodne podnóżki.";
  }
};

class Dodge : public america    // Definiuję klasę Dodge, która dziedziczy publicznie zarówno z klasy bazowej Automotive jak i po klasie pochodnej america
{
public:
  string carConcept () override
  {
    return "Dodge ZEO. W styczniu 2008r. odbyła się premiera koncepcyjnego, sportowego samochodu elektrycznego Dodge ZEO. Pojazd posiada dobre osiągi (przyspieszenie od 0 do 100 km/h w 6 s, zasięg 400 km) i może zabrać w podróż 4 osoby. Z pewność nie wszystkim przypadną do gustu drzwi otwierane do góry.";
  }
};

class BMW : public eu     // Definiuję klasę BMW, która dziedziczy publicznie zarówno z klasy bazowej Automotive jak i po klasie pochodnej eu
{
public:
  string carConcept () override
  {
    return "BMW i Vision Dee. Nadwozie BMW i Vision Dee składa się z 240 segmentów z tzw. e-tuszem. Potrafi przybrać on jeden z 32 kolorów, co oznacza, że kierowca może natychmiast „przemalować” samochód. Mało tego, barwę każdego z 240 segmentów da się ustalać oddzielnie, co prowadzi do niezliczonych kombinacji kolorystycznych. Dodatkowo, kształt i wzór przednich reflektorów scalonych z grillem będzie można także modyfikować. ";
  }
};

class MercedesBenz : public eu    // Definiuję klasę MercedesBenz, która dziedziczy publicznie zarówno z klasy bazowej Automotive jak i po klasie pochodnej eu
{
public:
  string carConcept () override
  {
    return "Mercedes-Benz Vision AVTR. Człon AVTR odnosi się oczywiście do filmu Avatar, ale też stanowi skrót od Advanced Vehicle Transformation. We wnętrzu pojazdu, zamiast tradycyjnej kierownicy, dźwigni zmiany biegów i deski rozdzielczej, w środkowej konsoli znajduje się wielofunkcyjny element sterujący, który łączy człowieka z maszyną. Po umieszczeniu na nim ręki, wnętrze ożywa, a pojazd rozpoznaje kierowcę na podstawie jego tętna i oddechu. Z kolei unosząc dłoń, wyświetla się na niej menu z różnymi funkcjami do wyboru.";
  }
};

class Ferrari : public eu    // Definiuję klasę Ferrari, która dziedziczy publicznie zarówno z klasy bazowej Automotive jak i po klasie pochodnej eu
{
public:
  string carConcept () override
  {
    return "Ferrari F80. Jego wirtualny projekt miałby ważyć jedyne 800 kg. 6,3-litrowy silnik V12 zastąpiono podwójnie doładowanym V8, który dysponowałby mocą 900 KM. Dodatkowe 300 KM pochodziłoby z sytemu KERS. Dysponując taką mocą F80 powinien przyspieszać do 100 km/h w czasie 2,2 sekundy, a jego prędkość maksymalna mogłaby wynieść aż 500 km/h.";
  }
};

int main ()
{
    string name;   // Deklaruję string name 
    cout << "Podaj mi swoje imię: ";   // Tutaj użytkownik podaje swoje imię 
    cin >> name;
    
  cout <<     // Aplikacja wita się z użytkownikiem zwracając się do niego z użyciem wcześniej podanego imienia 
    "Cześć " + name + "! " + "Chciałbym Ci przedstawić ciekawy koncept samochodu. Powiedz mi jaka motoryzacja Ciebie interesuje? (JDMy / Motoryzacja Amerykańska / Motoryzacja Europejska):";
  string whichAutomotive;   // Deklaruję string whichAutomotive oraz to wczytuje odpowiedź użytkownika dotyczącą rodzaju Motoryzacji 
  cin >> whichAutomotive;

  Automotive *automotive = nullptr;   // Dzięki temu mogę operować na obiekcie przy użyciu wskaźnika automotive i wywoływać metody zdefiniowane w klasach pochodnych

  if (whichAutomotive == "JDM") // Sprawdza wybraną Motoryzacje i tworzy instancje odpowiedniej marki
    {
      cout << "Wybierz marke JDM (Nissan / Toyota / Honda): ";
      string brand;      // Deklaruję string brand oraz to wczytuje odpowiedź użytkownika dotyczącą wyboru marki
      cin >> brand;    

      if (brand == "Nissan")  // Tworzy instancję wybranej marki JDM
	{
	  automotive = new Nissan ();
	}
      else if (brand == "Toyota")
	{
	  automotive = new Toyota ();
	}
      else if (brand == "Honda")
	{
	  automotive = new Honda ();
	}
      else
	{
	  cout << 
	    "Niestety nie znam żadnego ciekawego konceptu tej marki.";   // wyświetla komunikat jeśli użytkownik wybierze inną markę który informuje o nieznanej marce 
	  return 0;
	}
    }
  else if (whichAutomotive == "amerykanska")
    {
      cout <<  
	"Wybierz markę Motoryzacji Amerykańskiej (Ford / Cadillac / Dodge): ";
      string brand;
      cin >> brand;

      if (brand == "Ford")   // Tworzy instancję wybranej marki amerkańskiej
	{
	  automotive = new Ford ();
	}
      else if (brand == "Cadillac")
	{
	  automotive = new Cadillac ();
	}
      else if (brand == "Dodge")
	{
	  automotive = new Dodge ();
	}
      else
	{
	  cout <<
	    "Niestety nie znam żadnego ciekawego konceptu tej marki.";
	  return 0;
	}
    }
  else if (whichAutomotive == "europejska")
    {
      cout <<
	"Wybierz markę Motoryzacji Europejskiej (BMW / Mercedes-Benz / Ferrari): ";
      string brand;
      cin >> brand;

      if (brand == "BMW")   // Tworzy instancję wybranej marki europejskiej
	{
	  automotive = new BMW ();
	}
      else if (brand == "Mercedes-Benz")
	{
	  automotive = new MercedesBenz ();
	}
      else if (brand == "Ferrari")
	{
	  automotive = new Ferrari ();
	}
      else
	{
	  cout << "Niestety nie znam żadnego ciekawego konceptu tej marki.";
	  return 0;
	}
    }
  else
    {
      cout << "Niestety nie znam tych samochodow.";   // wyświetla komunikat o nieznanej motoryzacji
      return 0;
    }

  cout << automotive->carConcept () << endl;   // wyświetla koncepcję samochodu wybranej marki

  delete automotive;  // zwalnia pamięć zajmowaną przez obiekt automotive

  return 0;
}