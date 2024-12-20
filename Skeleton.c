/* File generated by the BNF Converter (bnfc 2.9.5). */

/*** Visitor Traversal Skeleton. ***/
/* This traverses the abstract syntax tree.
   To use, copy Skeleton.h and Skeleton.c to
   new files. */

#include <stdlib.h>
#include <stdio.h>

#include "Skeleton.h"

void visitS(S p)
{
  switch(p->kind)
  {
  case is_Sst:
    /* Code for Sst Goes Here */
    visitBlock(p->u.sst_.block_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing S!\n");
    exit(1);
  }
}

void visitBlock(Block p)
{
  switch(p->kind)
  {
  case is_LBlock:
    /* Code for LBlock Goes Here */
    visitCMDS(p->u.lblock_.cmds_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Block!\n");
    exit(1);
  }
}

void visitCMDS(CMDS p)
{
  switch(p->kind)
  {
  case is_CMDSCMD:
    /* Code for CMDSCMD Goes Here */
    visitCMD(p->u.cmdscmd_.cmd_);
    break;
  case is_CMDS1:
    /* Code for CMDS1 Goes Here */
    visitCMD(p->u.cmds1_.cmd_);
    visitCMDS(p->u.cmds1_.cmds_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing CMDS!\n");
    exit(1);
  }
}

void visitCMD(CMD p)
{
  switch(p->kind)
  {
  case is_CMDATRIB:
    /* Code for CMDATRIB Goes Here */
    visitATRIB(p->u.cmdatrib_.atrib_);
    break;
  case is_CMDEXP:
    /* Code for CMDEXP Goes Here */
    visitEXP(p->u.cmdexp_.exp_);
    break;
  case is_CMDUAI:
    /* Code for CMDUAI Goes Here */
    visitUAI(p->u.cmduai_.uai_);
    break;
  case is_CMDQUANTO:
    /* Code for CMDQUANTO Goes Here */
    visitQUANTO(p->u.cmdquanto_.quanto_);
    break;
  case is_CMDPA:
    /* Code for CMDPA Goes Here */
    visitPA(p->u.cmdpa_.pa_);
    break;
  case is_CMDZOIA:
    /* Code for CMDZOIA Goes Here */
    visitZOIA(p->u.cmdzoia_.zoia_);
    break;
  case is_CMDVEMCA:
    /* Code for CMDVEMCA Goes Here */
    visitVEMCA(p->u.cmdvemca_.vemca_);
    break;
  case is_CMDPERMA:
    /* Code for CMDPERMA Goes Here */
    visitPERMA(p->u.cmdperma_.perma_);
    break;
  case is_CMDTREM:
    /* Code for CMDTREM Goes Here */
    visitTREM(p->u.cmdtrem_.trem_);
    break;
  case is_CMDFUNC:
    /* Code for CMDFUNC Goes Here */
    visitFUNC(p->u.cmdfunc_.func_);
    break;
  case is_CMDVAILA:
    /* Code for CMDVAILA Goes Here */
    visitVAILA(p->u.cmdvaila_.vaila_);
    break;
  case is_CMDLABEL:
    /* Code for CMDLABEL Goes Here */
    visitLABEL(p->u.cmdlabel_.label_);
    break;
  case is_CMDSTRUCT:
    /* Code for CMDSTRUCT Goes Here */
    visitSTRUCT(p->u.cmdstruct_.struct_);
    break;
  case is_CMDAPONTA:
    /* Code for CMDAPONTA Goes Here */
    visitAPONTA(p->u.cmdaponta_.aponta_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing CMD!\n");
    exit(1);
  }
}

void visitATRIB(ATRIB p)
{
  switch(p->kind)
  {
  case is_ATRIB1:
    /* Code for ATRIB1 Goes Here */
    visitType(p->u.atrib1_.type_);
    visitIdent(p->u.atrib1_.ident_);
    visitVALUE(p->u.atrib1_.value_);
    break;
  case is_ATRIB2:
    /* Code for ATRIB2 Goes Here */
    visitType(p->u.atrib2_.type_);
    visitIdent(p->u.atrib2_.ident_);
    visitEXP(p->u.atrib2_.exp_);
    break;
  case is_ATRIB3:
    /* Code for ATRIB3 Goes Here */
    visitIdent(p->u.atrib3_.ident_);
    visitVALUE(p->u.atrib3_.value_);
    break;
  case is_ATRIB4:
    /* Code for ATRIB4 Goes Here */
    visitIdent(p->u.atrib4_.ident_);
    visitEXP(p->u.atrib4_.exp_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing ATRIB!\n");
    exit(1);
  }
}

void visitEXP(EXP p)
{
  switch(p->kind)
  {
  case is_EXP1:
    /* Code for EXP1 Goes Here */
    visitEXP(p->u.exp1_.exp_1);
    visitOPerA(p->u.exp1_.opera_);
    visitEXP(p->u.exp1_.exp_2);
    break;
  case is_EXP2:
    /* Code for EXP2 Goes Here */
    visitEXP(p->u.exp2_.exp_1);
    visitOPerL(p->u.exp2_.operl_);
    visitEXP(p->u.exp2_.exp_2);
    break;
  case is_EXP3:
    /* Code for EXP3 Goes Here */
    visitEXP(p->u.exp3_.exp_);
    break;
  case is_EXPVALUE:
    /* Code for EXPVALUE Goes Here */
    visitVALUE(p->u.expvalue_.value_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing EXP!\n");
    exit(1);
  }
}

void visitUAI(UAI p)
{
  switch(p->kind)
  {
  case is_UAI1:
    /* Code for UAI1 Goes Here */
    visitOPL(p->u.uai1_.opl_);
    visitBlock(p->u.uai1_.block_);
    break;
  case is_UAI2:
    /* Code for UAI2 Goes Here */
    visitOPL(p->u.uai2_.opl_);
    visitBlock(p->u.uai2_.block_1);
    visitBlock(p->u.uai2_.block_2);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing UAI!\n");
    exit(1);
  }
}

void visitOPerL(OPerL p)
{
  switch(p->kind)
  {
  case is_OPerL1:
    /* Code for OPerL1 Goes Here */
    break;
  case is_OPerL2:
    /* Code for OPerL2 Goes Here */
    break;
  case is_OPerL3:
    /* Code for OPerL3 Goes Here */
    break;
  case is_OPerL4:
    /* Code for OPerL4 Goes Here */
    break;
  case is_OPerL5:
    /* Code for OPerL5 Goes Here */
    break;
  case is_OPerL6:
    /* Code for OPerL6 Goes Here */
    break;
  case is_OPerL7:
    /* Code for OPerL7 Goes Here */
    break;
  case is_OPerL8:
    /* Code for OPerL8 Goes Here */
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing OPerL!\n");
    exit(1);
  }
}

void visitOPerA(OPerA p)
{
  switch(p->kind)
  {
  case is_OPerA1:
    /* Code for OPerA1 Goes Here */
    break;
  case is_OPerA2:
    /* Code for OPerA2 Goes Here */
    break;
  case is_OPerA3:
    /* Code for OPerA3 Goes Here */
    break;
  case is_OPerA4:
    /* Code for OPerA4 Goes Here */
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing OPerA!\n");
    exit(1);
  }
}

void visitOPL(OPL p)
{
  switch(p->kind)
  {
  case is_OPL1:
    /* Code for OPL1 Goes Here */
    visitEXP(p->u.opl1_.exp_1);
    visitOPerL(p->u.opl1_.operl_);
    visitEXP(p->u.opl1_.exp_2);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing OPL!\n");
    exit(1);
  }
}

void visitZOIA(ZOIA p)
{
  switch(p->kind)
  {
  case is_ZOIA1:
    /* Code for ZOIA1 Goes Here */
    visitVALUE(p->u.zoia1_.value_);
    break;
  case is_ZOIA2:
    /* Code for ZOIA2 Goes Here */
    visitVALUE(p->u.zoia2_.value_1);
    visitVALUE(p->u.zoia2_.value_2);
    break;
  case is_ZOIA3:
    /* Code for ZOIA3 Goes Here */
    visitVALUE(p->u.zoia3_.value_1);
    visitVALUE(p->u.zoia3_.value_2);
    visitVALUE(p->u.zoia3_.value_3);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing ZOIA!\n");
    exit(1);
  }
}

void visitVEMCA(VEMCA p)
{
  switch(p->kind)
  {
  case is_VEMCA1:
    /* Code for VEMCA1 Goes Here */
    visitType(p->u.vemca1_.type_);
    visitIdent(p->u.vemca1_.ident_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing VEMCA!\n");
    exit(1);
  }
}

void visitQUANTO(QUANTO p)
{
  switch(p->kind)
  {
  case is_QUANTO1:
    /* Code for QUANTO1 Goes Here */
    visitOPL(p->u.quanto1_.opl_);
    visitBlock(p->u.quanto1_.block_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing QUANTO!\n");
    exit(1);
  }
}

void visitPA(PA p)
{
  switch(p->kind)
  {
  case is_PA1:
    /* Code for PA1 Goes Here */
    visitType(p->u.pa1_.type_);
    visitIdent(p->u.pa1_.ident_1);
    visitVALUE(p->u.pa1_.value_);
    visitOPL(p->u.pa1_.opl_);
    visitIdent(p->u.pa1_.ident_2);
    visitEXP(p->u.pa1_.exp_);
    visitBlock(p->u.pa1_.block_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing PA!\n");
    exit(1);
  }
}

void visitVALUE(VALUE p)
{
  switch(p->kind)
  {
  case is_VALUEIdent:
    /* Code for VALUEIdent Goes Here */
    visitIdent(p->u.valueident_.ident_);
    break;
  case is_VALUE1:
    /* Code for VALUE1 Goes Here */
    visitIdent(p->u.value1_.ident_);
    visitEXP(p->u.value1_.exp_);
    break;
  case is_VALUE2:
    /* Code for VALUE2 Goes Here */
    visitIdent(p->u.value2_.ident_);
    visitEXP(p->u.value2_.exp_1);
    visitEXP(p->u.value2_.exp_2);
    break;
  case is_VALUEString:
    /* Code for VALUEString Goes Here */
    visitString(p->u.valuestring_.string_);
    break;
  case is_VALUEInteger:
    /* Code for VALUEInteger Goes Here */
    visitInteger(p->u.valueinteger_.integer_);
    break;
  case is_VALUEDouble:
    /* Code for VALUEDouble Goes Here */
    visitDouble(p->u.valuedouble_.double_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing VALUE!\n");
    exit(1);
  }
}

void visitType(Type p)
{
  switch(p->kind)
  {
  case is_Type_intero:
    /* Code for Type_intero Goes Here */
    break;
  case is_Type_floati:
    /* Code for Type_floati Goes Here */
    break;
  case is_Type_stringo:
    /* Code for Type_stringo Goes Here */
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Type!\n");
    exit(1);
  }
}

void visitTREM(TREM p)
{
  switch(p->kind)
  {
  case is_TREM1:
    /* Code for TREM1 Goes Here */
    visitType(p->u.trem1_.type_);
    visitIdent(p->u.trem1_.ident_);
    visitInteger(p->u.trem1_.integer_);
    break;
  case is_TREM2:
    /* Code for TREM2 Goes Here */
    visitType(p->u.trem2_.type_);
    visitIdent(p->u.trem2_.ident_);
    visitInteger(p->u.trem2_.integer_);
    visitConjValues(p->u.trem2_.conjvalues_);
    break;
  case is_TREM3:
    /* Code for TREM3 Goes Here */
    visitType(p->u.trem3_.type_);
    visitIdent(p->u.trem3_.ident_);
    visitInteger(p->u.trem3_.integer_1);
    visitInteger(p->u.trem3_.integer_2);
    break;
  case is_TREM4:
    /* Code for TREM4 Goes Here */
    visitType(p->u.trem4_.type_);
    visitIdent(p->u.trem4_.ident_);
    visitInteger(p->u.trem4_.integer_1);
    visitInteger(p->u.trem4_.integer_2);
    visitConjValues2D(p->u.trem4_.conjvalues2d_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing TREM!\n");
    exit(1);
  }
}

void visitSTRUCT(STRUCT p)
{
  switch(p->kind)
  {
  case is_STRUCT1:
    /* Code for STRUCT1 Goes Here */
    visitInteger(p->u.struct1_.integer_);
    visitHeteroElements(p->u.struct1_.heteroelements_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing STRUCT!\n");
    exit(1);
  }
}

void visitHeteroElements(HeteroElements p)
{
  switch(p->kind)
  {
  case is_HeteroElementsHeteroElement:
    /* Code for HeteroElementsHeteroElement Goes Here */
    visitHeteroElement(p->u.heteroelementsheteroelement_.heteroelement_);
    break;
  case is_HeteroElements1:
    /* Code for HeteroElements1 Goes Here */
    visitHeteroElement(p->u.heteroelements1_.heteroelement_);
    visitHeteroElements(p->u.heteroelements1_.heteroelements_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing HeteroElements!\n");
    exit(1);
  }
}

void visitHeteroElement(HeteroElement p)
{
  switch(p->kind)
  {
  case is_HeteroElementString:
    /* Code for HeteroElementString Goes Here */
    visitString(p->u.heteroelementstring_.string_);
    break;
  case is_HeteroElementDouble:
    /* Code for HeteroElementDouble Goes Here */
    visitDouble(p->u.heteroelementdouble_.double_);
    break;
  case is_HeteroElementInteger:
    /* Code for HeteroElementInteger Goes Here */
    visitInteger(p->u.heteroelementinteger_.integer_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing HeteroElement!\n");
    exit(1);
  }
}

void visitFUNC(FUNC p)
{
  switch(p->kind)
  {
  case is_FUNC1:
    /* Code for FUNC1 Goes Here */
    visitIdent(p->u.func1_.ident_);
    visitBlock(p->u.func1_.block_);
    break;
  case is_FUNC2:
    /* Code for FUNC2 Goes Here */
    visitIdent(p->u.func2_.ident_);
    break;
  case is_FUNC3:
    /* Code for FUNC3 Goes Here */
    visitIdent(p->u.func3_.ident_);
    visitVALUE(p->u.func3_.value_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing FUNC!\n");
    exit(1);
  }
}

void visitVAILA(VAILA p)
{
  switch(p->kind)
  {
  case is_VAILA1:
    /* Code for VAILA1 Goes Here */
    visitInteger(p->u.vaila1_.integer_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing VAILA!\n");
    exit(1);
  }
}

void visitLABEL(LABEL p)
{
  switch(p->kind)
  {
  case is_LABEL1:
    /* Code for LABEL1 Goes Here */
    visitInteger(p->u.label1_.integer_);
    visitBlock(p->u.label1_.block_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing LABEL!\n");
    exit(1);
  }
}

void visitConjValues(ConjValues p)
{
  switch(p->kind)
  {
  case is_ConjValuesVALUE:
    /* Code for ConjValuesVALUE Goes Here */
    visitVALUE(p->u.conjvaluesvalue_.value_);
    break;
  case is_ConjValues1:
    /* Code for ConjValues1 Goes Here */
    visitVALUE(p->u.conjvalues1_.value_);
    visitConjValues(p->u.conjvalues1_.conjvalues_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing ConjValues!\n");
    exit(1);
  }
}

void visitConjValues2D(ConjValues2D p)
{
  switch(p->kind)
  {
  case is_ConjValues2D1:
    /* Code for ConjValues2D1 Goes Here */
    visitConjValues(p->u.conjvalues2d1_.conjvalues_);
    break;
  case is_ConjValues2D2:
    /* Code for ConjValues2D2 Goes Here */
    visitConjValues(p->u.conjvalues2d2_.conjvalues_);
    visitConjValues2D(p->u.conjvalues2d2_.conjvalues2d_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing ConjValues2D!\n");
    exit(1);
  }
}

void visitPERMA(PERMA p)
{
  switch(p->kind)
  {
  case is_LConst:
    /* Code for LConst Goes Here */
    visitType(p->u.lconst_.type_);
    visitIdent(p->u.lconst_.ident_);
    visitVALUE(p->u.lconst_.value_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing PERMA!\n");
    exit(1);
  }
}

void visitAPONTA(APONTA p)
{
  switch(p->kind)
  {
  case is_LPoint:
    /* Code for LPoint Goes Here */
    visitType(p->u.lpoint_.type_);
    visitIdent(p->u.lpoint_.ident_1);
    visitIdent(p->u.lpoint_.ident_2);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing APONTA!\n");
    exit(1);
  }
}

void visitIdent(Ident i)
{
  /* Code for Ident Goes Here */
}
void visitInteger(Integer i)
{
  /* Code for Integer Goes Here */
}
void visitDouble(Double d)
{
  /* Code for Double Goes Here */
}
void visitChar(Char c)
{
  /* Code for Char Goes Here */
}
void visitString(String s)
{
  /* Code for String Goes Here */
}

