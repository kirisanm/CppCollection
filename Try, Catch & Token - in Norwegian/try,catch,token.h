// Coded by Kirisan Manivannan | 05.02.18 | Bibliotek notater.

Exceptions, try, throw, catch:

// Exception betyr "Unntak" på norsk.
// For å få tak i exceptions, så er en del av koden lagt/skrevet under "Exception" innspeksjon. 
// Dette gjør man ved å skrive den delen med koden under et "try"-block.
// Den delen som behandler exceptions (Unntak), kalles CATCH.

// Etter å ha brukt en try-block, så må man ha "CATCH". 
// Try og Catch henger sammen, og må brukes sammen hvis try skal brukes.

// Et eksempel på hvordan en try og catch kode ser ut:
int main () {
  try
  {
    throw 20;
  }
  catch (int e)
  {
    cout << "An exception occurred. Exception Nr. " << e << '\n';
  }
  return 0;
}

// En "throw" uttrykk aksepterer kun en parameter om gangen. 
// I eksemplet over så er det en int parameter som har blitt brukt. 

// Siden "throw" kaster ut en int type, så MÅ vi benevne det i CATHCH, om at den skal ta imot en int. 
// Det som kastes ut og det som skal tas imot, må matche og stemme overrens med hverandre. 
// Hvis throw-typen(char, int, string etc..) ikke matcher med catch, så vil ikke catch behandle exceptinonen som kommer inn.

// ##############################################################################################################################################################

// Flere CATCHER kan bli koblet sammen. Hver og en med sine egne parameter typer.
// Kun den catchen som passer med throwen, vil kunne bli behandlet. 

// Hvis man bruker en ellipse(...) som en parameter i catch, så vil behandleren ta imot og behandle exception uansett hvilken type den parameter som har blitt kastet(throw) til catchen.
// Denne type catch kan man bruke som en default handler, som vil ta imot exceptions som ikke ble tatt i mot av andre handlers.
// Eksempel på dette:
try {
  // code here
}
catch (int param) { cout << "int exception"; }
catch (char param) { cout << "char exception"; }
catch (...) { cout << "default exception"; }

// I dette tilfellet så vil den siste catchen ta imot uansett type throw, som enten kan være int eller char.

// e.what() står for exception.what
// e.what() brukes for string type parametere. 

Token:

// En token er en gruppe med karakterer som tilhører hverandre/ henger sammen. 
// C++ bruker følgende typer av tokens:
// keywords, identifier, literals, punctuators, Operators.
// Literals er også kalt kontanter på norsk. Dette er data som aldri bytter verdien under kjøring.
// De godkjente literals i c++ er:
// int, string, char og float(vi bruker double istedenfor float).

// Dette er en forklaring på token fra boka:
class Token {
    public:
        char kind; // what kind of token
        double value; // for numbers - a value
        Token(char ch) // make a token from a char using a constructor
            :kind(ch), value(0) {} // set kind to ch and value to val
        Token(char ch, double val) // make a Token from a char and a double
            :kind(ch), value(val) {}
};

// Eksempel på hvordan man bruker cin på vector av en token:

Token get_token() {} // read a token from cin

vector<Token> tok; // put the tokens in this vector

while(cin >> t5) {
        Token t5 = get_token();
        tok.push_back(t5);
    }
    return 0;
	
	
	
	
	




















