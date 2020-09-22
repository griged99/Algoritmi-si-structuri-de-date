# Algoritmi-si-structuri-de-date
Să se scrie un program pentru ordonarea crescătoare a unui 
şir de n numere folosind metoda Bubble – Sort (sortarea prin interschimbare).
 2. Să se scrie un program pentru ordonarea crescătoare a 
unui şir de n numere folosind sortarea prin inserţie (Insertion Sort).
 3. Să se scrie un program pentru ordonarea descrescătoare a
 unui şir de n numere folosind sortarea prin selecţie (Selection Sort).
 4. Scrieţi algoritmul pentru căutarea secvenţială a unui 
element într-un şir de n numere.
 5. Scrieţi un algoritm pentru căutarea binară a unui element într-un şir ordonat, de n numere.
 6. Să se implementeze cu alocare dinamică o stivă de numere întregi, cu
următoarele operatii:
(a) void push (a, stiva) care adaugă elementul a în vârful stivei;
(b) int pop (stiva) care scoate elementul din vârful stivei şi îl intoarce ca
rezultat al funcţiei;
(c) int peek(stiva) care întoarce elementul din vârful stivei, fără a-l scoate;
(d) bool empty(stiva) care verifică dacă stiva este vidă sau nu;
(e) int search(a, stiva) care intoarce -1 daca elementul a nu se află in
stiva. Daca a apare in stiva, atunci functia intoarce distanta de la varful stivei
pana la aparitia cea mai apropiata de varf. Se va considera ca varful se afla la
distanta 0.
(f) void afiseaza(stiva) care afiseaza stiva, pornind de la varful ei si
continuand spre baza.
7. Dat un sir w = w1w2 .... wn (n par) de caractere 'a' si 'b', să se decidă
dacă in sirul w numarul de caractere 'a' este acelasi cu numarul de caractere 'b'. Sirul
de intrare se poate parcurge doar o singura data, iar pentru a decide rezultatul se va
folosi o stiva. Nu se permite numărarea aparitiilor caracterelor 'a', 'b'.
8. Dat un sir w = w1w2 ... wn de caractere '(' si ')', sa se foloseasca o stiva
pentru a decide daca acest sir este corect parantezat (i.e., pentru orice subsir w1 ...
wi, cu i 1,n , avem ca numarul de caractere '(' este mai mare sau egal cu numarul
de caractere ')'). In caz ca w nu este parantezat corect, se va indica pozitia primei
paranteze ')' care nu are corespondent.
9. Consideram urmatoarea problema: ni se da o suprafata circulara cu un numar
n de pini (tarusi) pe margini (numerotati de la 1 la n), impreuna cu o lista de perechi
de pini ce trebuie conectati cu fire metalice. Problema cere sa determinati in timp O(n)
daca pentru o configuratie ca mai sus, pinii pereche pot fi conectati, fara ca acestea
sa se intersecteze. La intrare se vor citi:
- n numarul de pini;
- pereche[n] un vector de n componente, unde pereche[i]==pereche[j],
1 <= i < j <= n , daca pinii i si j trebuie conectati.
10. Să se scrie un algoritm pentru evaluarea unei expresii matematice în notație
postfix (forma poloneză).
11. Sa se implementeze o coada de numere intregi, cu urmatoarele operatii:
(a) void push(a, coada) care adauga elementul a in coada;
(b) int pop(coada) care scoate primul element din coada, si il intoarce ca rezultat al functiei;
(c) int peek(coada) care întoarce primul element din coada, fara a-l scoate;
(d) bool empty(coada) care verifica daca coada este vida sau nu;
(e) int search(a, coada) care intoarce -1 daca elementul a nu se afla in coada. Daca a apare in stiva, atunci functia intoarce distanta de la primul element al cozii pana la aparitia cea mai apropiata de primul element al cozii. Se va considera ca primul element se afla la distanta 0.
(f) void afiseaza(coada) care afiseaza coada, pornind de la primul element si continuând spre ultimul.
12. Să se implementeze un arbore binar de căutare echilibrat AVL (eventual, 
utilizând funcțiile implementate pentru arborii binari de căutare), cu următoarele 
operații (cu echilibrare după fiecare operaţie, acolo unde este necesar):
(a) adauga (t, x) - inserează cheia x în arborele de rădăcină t;
(b) afiseaza_SRD (t) – afişează cheile din arborele de rădăcină t, în ordine crescătoare;
(b) afiseaza_RSD (t) – afişează cheile din arborele de rădăcină t, în ordinea specificată 
(necesară pentru a identifica rădăcina arborelui).
13. Să se implementeze metoda de ordonare Merge – Sort.
14. Să se scrie algoritmul pentru sortarea unui şir de numere folosind metoda Heapsort. 
Structura de Heap va fi implementată ca un arbore binar într-una din cele două forme care urmează :
a) max - Heap – arbore binar în care fiecare nod are cheia mai mare decât oricare dintre fiii săi
b) min - Heap – arbore binar în care fiecare nod are cheia mai mică decât oricare dintre fiii săi
Scrieţi funcţii pentru crearea heap-ului şi pentru decapitarea lui.
