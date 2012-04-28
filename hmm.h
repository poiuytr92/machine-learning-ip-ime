#ifndef HMM_H
#define HMM_H

#include "treinador.h"
#include "classificadorhmm.h"

class HMM : public Treinador
{
    public:
        virtual ~HMM();
        virtual ClassificadorHMM *executarTreinamento( Corpus &corpus, int atributo );
};

#endif // HMM_H
