#ifndef CLIENT_ELEMENTSFACTORY_H
#define CLIENT_ELEMENTSFACTORY_H

#include "Food.h"
#include "Player.h"
#include "EjectedFood.h"

struct ElementsFactory {

public:

    static ElementsFactory* get_instance();
    ~ElementsFactory();

    Food* create_food(QString, QString, QString);
    Player* create_player( QString, QString, QString, QString, QString, QString );
    EjectedFood* create_ejected_food( QString , QString , QString );

private:

    static ElementsFactory* elements_factory_ptr;
};


#endif //CLIENT_ELEMENTSFACTORY_H