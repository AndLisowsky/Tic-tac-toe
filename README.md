# Tic-Tac-Toe Game

## Opis
Projekt przedstawia implementację gry w kółko i krzyżyk (Tic-Tac-Toe) w języku C++. Gra umożliwia rozgrywkę między dwoma graczami ludzkimi.

## Struktura plików
Projekt składa się z następujących plików:

- `main.cpp`: Plik startowy zawierający funkcję `main`.
- `Player.h`: Plik nagłówkowy dla klasy bazowej `Player`.
- `Human.h`: Plik nagłówkowy dla klasy `Human`, dziedziczącej po `Player`.
- `Human.cpp`: Plik źródłowy zawierający implementację klasy `Human`.
- `Board.h`: Plik nagłówkowy dla klasy `Board`, reprezentującej planszę do gry.
- `Board.cpp`: Plik źródłowy zawierający implementację klasy `Board`.
- `Game.h`: Plik nagłówkowy dla klasy `Game`, zarządzającej rozgrywką.
- `Game.cpp`: Plik źródłowy zawierający implementację klasy `Game`.

## Klasy
- **Player**: Klasa bazowa dla wszystkich typów graczy. Zawiera wirtualną metodę `makeMove`.
- **Human**: Klasa reprezentująca gracza ludzkiego. Dziedziczy po `Player` i implementuje metodę `makeMove`.
- **Board**: Klasa reprezentująca planszę do gry. Zawiera metody do rysowania planszy, sprawdzania stanu gry oraz wykonywania ruchów.
- **Game**: Klasa zarządzająca rozgrywką. Inicjalizuje planszę oraz graczy, kontroluje przebieg gry.

## Kompilacja i uruchomienie
Aby skompilować i uruchomić projekt, wykonaj następujące kroki:

1. Skopiuj wszystkie pliki źródłowe do jednego katalogu.
2. Otwórz terminal lub wiersz poleceń i przejdź do tego katalogu.
3. Wpisz poniższą komendę, aby skompilować projekt (zakładając, że używasz kompilatora `g++`):
    ```sh
    g++ -o TicTacToe main.cpp Human.cpp Board.cpp Game.cpp
    ```
4. Uruchom skompilowany program:
    ```sh
    ./TicTacToe
    ```

## Instrukcja gry
1. Po uruchomieniu programu, gra rozpocznie się od wyboru trybu gry:
- 1 - multiplayer;
- 2 - singleplayer (vs AI).
2. Po wyborze trybu gracz(e) deklaruje(ą) swoje nickname'y.
3. Gracze na zmianę wprowadzają numery pozycji (od 1 do 9), na które chcą postawić swój symbol ('X' lub 'O'). Numeracja pól jest następująca:
    ```
    1 | 2 | 3
    --+---+--
    4 | 5 | 6
    --+---+--
    7 | 8 | 9
    ```
4. Po każdym ruchu plansza jest aktualizowana i wyświetlana.
5. Gra kończy się, gdy jeden z graczy wygra lub gdy plansza zostanie całkowicie wypełniona.

## Przykład użycia
Przykład gry może wyglądać tak:
Player 1's turn
Enter position to make a move: 1

// X - -
// - - -
// - - -

Player 2's turn
Enter position to make a move: 5

// X - -
// - O -
// - - -

Player 1's turn
Enter position to make a move: 2

// X X -
// - O -
// - - -

... (gra trwa, aż do wygranej lub remisu)


## Uwagi
Program nie radzi sobie z wprowadzaniem liczb wielocyfrowych oraz znaków innych niż cyfry.


## Author
- Aleksander Serwik 
- discord.gg/@andrewlisowsky
- https://github.com/AndLisowsky

