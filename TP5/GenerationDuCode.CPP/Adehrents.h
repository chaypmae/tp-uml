#ifndef Adehrents_h
#define Adehrents_h

class Bibliotheque;
class Emprunter;

class Adehrents {

 public:

    virtual void inscription();

    virtual void desinscription();

    virtual void Emprunter();

    virtual void Restituer();


 private:
    String Nom;
    String Prenom;

 public:

    /**
     * @element-type Bibliotheque
     */
    Bibliotheque *1.1;

    Bibliotheque *myBibliotheque;

    /**
     * @element-type Livres
     */
    Emprunter *EmprunterAssoc;
};

#endif // Adehrents_h
