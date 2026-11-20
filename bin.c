#include <stdio.h>

int strlength(char* word) {                    // Die Funktion strlength wird angelegt.
    int counter = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] != '\0') {                 // strlength schaut auf die einzelnen Buchstaben, bis zum Nullterminator \0
            counter++;                         // Für jeden Durchlauf, an dem word an der Stelle i (word[i]) nicht
        }                                      // der Nullterminator ist, wird counter um 1 erhöht, bedeutet, dass die Länge des Wortes um 1 erhöht wird.
    }
    return counter;                            // Der fertige Wert von counter wird ausgegeben.
}

int power(int base, int exp) {                 // Die Funktion power wird angelegt. Hierbei steht 'exp' fü Exponent.
    int value = (base *= exp);                   // Power soll Potenzen berechenen können. Base ist hierbei die Zahl, Exponent die Potenz.
    base = 2;                                  // Hier werden die beiden Variablen base (Wert 2, da wir im Binärsystem sind.)
    exp = 0;                                   // und exp (Wert 0, da das die Anfangspotenz ist. Jede Zahl muss exp um 1 erhöht werden.) mit Werten zum Rechnen ausgestattet.
    return value;                              // Hier wir value, das Ergebnis der Potenzrechnung, ausgegeben.
}

int main(int argc, char* argv[]) {             // Hier wird eine main-Funktion angelegt. Das Character-Array usage_information wird abgerufen, wenn der User einen Eingabefehler macht.
    char* usage_information[] = "Usage: bin <binary number>; Binärzahlen bestehen nur aus den Zahlen 0 und 1. Bitte geben Sie eine Binärzahl an.";
    if (argv[0] > 1) {                         // Diese if-Schleife sagt aus, dass wenn der User mehr als nur eine Zahl in der Kommandozeile angibt,
        printf(usage_information);             // die usage_information abgerufen werden soll
        return -1;                             // und das Programm abgebrochen werden soll.
    }
    if (argv[0] != '0' || argv[0] != '1') {    // Diese if-Schleife sagt aus, dass wenn der User in seiner Eingabe andere Buchstaben als 0 oder 1 eingibt,
        printf(usage_information);             // die usage_information abgerufen werden soll
        return -1;                             // und das Programm abgebrochen werden soll.
    }
    int umwandeln;
    int bin = argv[0] - 1;                     // bin hat den Ausgabewert argv[0], ist also der Wert, der in der Kommandozeile mitgegeben wird. -1 bewirkt, dass der Programmname nicht mitgezählt wird (da argv[0] durch diesen immer um eins größer ist, als es eigentlich ist.)
    for (int i = 0; bin[i] != '\0'; i++) {     // Diese if-Schleife hat die Aufgabe, die Binärzahl in eine Dezimalzahl umzuwandeln.

    }
    return 0;
}