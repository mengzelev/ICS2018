#include "cpu/exec.h"

/*data-mov.c*/
make_EHelper(mov);
make_EHelper(push);
make_EHelper(pop);
make_EHelper(pusha);
make_EHelper(popa);
make_EHelper(leave);
make_EHelper(movsx);
make_EHelper(cltd);
make_EHelper(cwtl);


/*arith.c*/
make_EHelper(add);
make_EHelper(sub);
make_EHelper(cmp);
make_EHelper(inc);
make_EHelper(dec);
make_EHelper(neg);
make_EHelper(adc);
make_EHelper(sbb);
make_EHelper(mul);
make_EHelper(imul1);
make_EHelper(imul2);
make_EHelper(imul3);
make_EHelper(div);
make_EHelper(idiv);


/*logic.c*/
make_EHelper(xor);
make_EHelper(test);
make_EHelper(and);
make_EHelper(or);


/*control.c*/
make_EHelper(call);
make_EHelper(ret);


/*special.c*/
make_EHelper(nop);

make_EHelper(operand_size);

make_EHelper(inv);
make_EHelper(nemu_trap);
