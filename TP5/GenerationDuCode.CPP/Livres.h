#ifndef Livres_h
#define Livres_h

#include "Volumes.h"

class Emprunter;

class Livres : public Volumes {

 public:

    virtual void Empruntable();

 public:
    Integer newAttr;
    Integer newAttr;

 private:
    Boolean emprunte;

 public:

    /**
     * @element-type Adehrents
     */
    Emprunter *EmprunterAssoc;
};

#endif // Livres_h
