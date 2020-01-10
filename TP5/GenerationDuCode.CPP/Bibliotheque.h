#ifndef Bibliotheque_h
#define Bibliotheque_h

#include <vector>


class Adehrents;
class Documents;

class Bibliotheque {

 public:

    virtual void ajouterAdherent();

    virtual void supprimerAdherent();

 public:


    /**
     * @element-type Adehrents
     */
    std::vector< Adehrents* > myAdehrents;

    /**
     * @element-type Documents
     */
    std::vector< Documents* > myDocuments;
};

#endif // Bibliotheque_h
