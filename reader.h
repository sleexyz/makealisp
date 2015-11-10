#include "linkedlist.h"

#ifndef READER_H
#define READER_H

LList* tokenizer(char* input);

typedef struct Reader Reader;
struct Reader {
  LList* tokens;
  LNode* curr;
  int pos;
};

Reader* r_create(char* input);
void r_free(Reader* r);
void r_checkInvariants(Reader* r);
LNode* r_peek(Reader* r);
LNode* r_next(Reader* r);



LNode* parse(Reader* r);
LNode* parseList(Reader* r);
LNode* parseAtom(Reader* r);

#endif