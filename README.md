# Tic-Tac-Toe Game

## Opis
Projekt przedstawia konsolową adaptację gry w kółko i krzyżyk (Tic-Tac-Toe) w języku C++. Gra umożliwia rozgrywkę między dwoma graczami bądź między graczem a komputerem.


## Klasy
- **Player**: Klasa bazowa dla wszystkich typów graczy. Zawiera wirtualną metodę `makeMove`.
- **Human**: Klasa reprezentująca gracza ludzkiego. Dziedziczy po `Player` i implementuje metodę `makeMove`.
- **CPU**: Klasa odpowiedzialna za logikę AI (tryb singleplayer).
- **Board**: Klasa reprezentująca planszę do gry. Zawiera metody do rysowania planszy, sprawdzania stanu gry oraz wykonywania ruchów.
- **Game**: Klasa zarządzająca rozgrywką. Inicjalizuje planszę oraz graczy, kontroluje przebieg gry.

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

```
Player 1's turn
Enter position to make a move: 1


 X - -
 - - -
 - - -

Player 2's turn
Enter position to make a move: 5

 X - -
 - O -
 - - -

Player 1's turn
Enter position to make a move: 2

 X X -
 - O -
 - - -

... (gra trwa, aż do wygranej lub remisu)
```

## Uwagi
Program nie radzi sobie z wprowadzaniem liczb wielocyfrowych oraz znaków innych niż cyfry.


## Author
- Aleksander Serwik 
- discord.gg/@andrewlisowsky
- https://github.com/AndLisowsky

