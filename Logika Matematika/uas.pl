ayah(abdul,fatah).
ayah(feri,fia).
ayah(fatah,rijal).
ayah(fatah,mia).
ibu(dewi,fatah).
ibu(nana,fia).
ibu(nana,rijal).
ibu(nana,mia).

anak(X,Y) :- ayah(Y,X); ibu(Y,X).
kakek(X,Z) :- anak(Z,Y), ayah(X,Y);

