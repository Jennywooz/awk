/* Generated by Nim Compiler v0.13.1 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/adminuser/Nim/lib -o /home/adminuser/awknim/nimcache/stdlib_options.o /home/adminuser/awknim/nimcache/stdlib_options.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Option141225 Option141225;
typedef struct Slice90081 Slice90081;
typedef struct UnpackerrorHEX3Aobjecttype124011 UnpackerrorHEX3Aobjecttype124011;
typedef struct Valueerror3446 Valueerror3446;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Cell47905 Cell47905;
typedef struct Cellseq47921 Cellseq47921;
typedef struct Gcheap50418 Gcheap50418;
typedef struct Gcstack50416 Gcstack50416;
typedef struct Cellset47917 Cellset47917;
typedef struct Pagedesc47913 Pagedesc47913;
typedef struct Memregion30088 Memregion30088;
typedef struct Smallchunk30040 Smallchunk30040;
typedef struct Llchunk30082 Llchunk30082;
typedef struct Bigchunk30042 Bigchunk30042;
typedef struct Intset30014 Intset30014;
typedef struct Trunk30010 Trunk30010;
typedef struct Avlnode30086 Avlnode30086;
typedef struct Gcstat50414 Gcstat50414;
typedef struct Regexmatch141004 Regexmatch141004;
typedef struct Option143524 Option143524;
typedef struct RegexHEX3Aobjecttype141019 RegexHEX3Aobjecttype141019;
typedef struct TY141054 TY141054;
typedef struct Basechunk30038 Basechunk30038;
typedef struct Freecell30030 Freecell30030;
typedef struct Pcre94258 Pcre94258;
typedef struct Extradata94270 Extradata94270;
typedef struct Table141032 Table141032;
typedef struct Keyvaluepairseq141035 Keyvaluepairseq141035;
typedef struct Slice141059 Slice141059;
typedef struct Keyvaluepair141038 Keyvaluepair141038;
struct  Slice90081  {
NI a;
NI b;
};
struct  Option141225  {
Slice90081 val;
NIM_BOOL has;
};
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  Valueerror3446  {
  Exception Sup;
};
struct  UnpackerrorHEX3Aobjecttype124011  {
  Valueerror3446 Sup;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Cell47905  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47921  {
NI len;
NI cap;
Cell47905** d;
};
struct  Cellset47917  {
NI counter;
NI max;
Pagedesc47913* head;
Pagedesc47913** data;
};
typedef Smallchunk30040* TY30103[512];
typedef Trunk30010* Trunkbuckets30012[256];
struct  Intset30014  {
Trunkbuckets30012 data;
};
struct  Memregion30088  {
NI minlargeobj;
NI maxlargeobj;
TY30103 freesmallchunks;
Llchunk30082* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30042* freechunkslist;
Intset30014 chunkstarts;
Avlnode30086* root;
Avlnode30086* deleted;
Avlnode30086* last;
Avlnode30086* freeavlnodes;
};
struct  Gcstat50414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap50418  {
Gcstack50416* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47921 zct;
Cellseq47921 decstack;
Cellset47917 cycleroots;
Cellseq47921 tempstack;
NI recgclock;
Memregion30088 region;
Gcstat50414 stat;
};
struct  Regexmatch141004  {
RegexHEX3Aobjecttype141019* pattern;
NimStringDesc* str;
TY141054* pcrematchbounds;
};
struct  Option143524  {
Regexmatch141004 val;
NIM_BOOL has;
};
struct  Gcstack50416  {
Gcstack50416* prev;
Gcstack50416* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY30019[8];
struct  Pagedesc47913  {
Pagedesc47913* next;
NI key;
TY30019 bits;
};
struct  Basechunk30038  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30040  {
  Basechunk30038 Sup;
Smallchunk30040* next;
Smallchunk30040* prev;
Freecell30030* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30082  {
NI size;
NI acc;
Llchunk30082* next;
};
struct  Bigchunk30042  {
  Basechunk30038 Sup;
Bigchunk30042* next;
Bigchunk30042* prev;
NI align;
NF data;
};
struct  Trunk30010  {
Trunk30010* next;
NI key;
TY30019 bits;
};
typedef Avlnode30086* TY30093[2];
struct  Avlnode30086  {
TY30093 link;
NI key;
NI upperbound;
NI level;
};
struct  Table141032  {
Keyvaluepairseq141035* data;
NI counter;
};
struct  RegexHEX3Aobjecttype141019  {
NimStringDesc* pattern;
Pcre94258* pcreobj;
Extradata94270* pcreextra;
Table141032 capturenametoid;
};
struct  Slice141059  {
int a;
int b;
};
struct  Freecell30030  {
Freecell30030* next;
NI zerofield;
};
struct  Pcre94258  {
char dummy;
};
struct  Extradata94270  {
long flags;
void* studydata;
long matchlimit;
void* calloutdata;
void* tables;
long matchlimitrecursion;
void* mark;
void* executablejit;
};
struct Keyvaluepair141038 {
NI Field0;
NimStringDesc* Field1;
NI Field2;
};
struct TY141054 {
  TGenericSeq Sup;
  Slice141059 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq141035 {
  TGenericSeq Sup;
  Keyvaluepair141038 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_22201)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NIM_BOOL, isnone_141296)(Option141225* self);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP348)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47905*, usrtocell_52040)(void* usr);
static N_INLINE(void, rtladdzct_53601)(Cell47905* c);
N_NOINLINE(void, addzct_52017)(Cellseq47921* s, Cell47905* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_86004, TNimType* mt);
N_NIMCALL(NIM_BOOL, isnone_143709)(Option143524* self);
STRING_LITERAL(TMP349, "Can\'t obtain a value from a `none`", 34);
extern TFrame* frameptr_19436;
extern TNimType NTI3446; /* ValueError */
TNimType NTI124011; /* UnpackError:ObjectType */
TNimType NTI124004; /* UnpackError */
extern Gcheap50418 gch_50459;
TNimType NTI141225; /* Option */
extern TNimType NTI90081; /* Slice */
extern TNimType NTI130; /* bool */
extern TNimType NTI141054; /* seq[Slice[system.cint]] */
TNimType NTI143524; /* Option */
extern TNimType NTI141004; /* RegexMatch */

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI LOC1;
	LOC1 = 0;
	{
		if (!(frameptr_19436 == NIM_NIL)) goto LA4;
		LOC1 = ((NI) 0);
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_19436).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s).calldepth = ((NI16) (LOC1));
	(*s).prev = frameptr_19436;
	frameptr_19436 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_22201();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_19436 = (*frameptr_19436).prev;
}

N_NIMCALL(Option141225, some_141244)(Slice90081 val) {
	Option141225 result;
	nimfr("some", "options.nim")
	memset((void*)(&result), 0, sizeof(result));
	nimln(84, "options.nim");
	result.has = NIM_TRUE;
	nimln(85, "options.nim");
	result.val = val;
	popFrame();
	return result;
}

N_NIMCALL(Option141225, none_141256)(void) {
	Option141225 result;
	nimfr("none", "options.nim")
	memset((void*)(&result), 0, sizeof(result));
	nimln(89, "options.nim");
	result.has = NIM_FALSE;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, issome_141280)(Option141225* self) {
	NIM_BOOL result;
	nimfr("isSome", "options.nim")
	result = 0;
	nimln(93, "options.nim");
	result = (*self).has;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, isnone_141296)(Option141225* self) {
	NIM_BOOL result;
	nimfr("isNone", "options.nim")
	result = 0;
	nimln(96, "options.nim");
	result = !((*self).has);
	popFrame();
	return result;
}
N_NIMCALL(void, TMP348)(void* p, NI op) {
	UnpackerrorHEX3Aobjecttype124011* a;
	a = (UnpackerrorHEX3Aobjecttype124011*)p;
	nimGCvisit((void*)(*a).Sup.Sup.parent, op);
	nimGCvisit((void*)(*a).Sup.Sup.message, op);
	nimGCvisit((void*)(*a).Sup.Sup.trace, op);
}

static N_INLINE(Cell47905*, usrtocell_52040)(void* usr) {
	Cell47905* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(137, "gc.nim");
	result = ((Cell47905*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47905))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_53601)(Cell47905* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(218, "gc.nim");
	addzct_52017((&gch_50459.zct), c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47905* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(252, "gc.nim");
	c = usrtocell_52040(p);
	nimln(254, "gc.nim");
	{
		nimln(186, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln(187, "gc.nim");
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		nimln(255, "gc.nim");
		rtladdzct_53601(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(Slice90081, get_141288)(Option141225* self) {
	Slice90081 result;
	nimfr("get", "options.nim")
	memset((void*)(&result), 0, sizeof(result));
	nimln(105, "options.nim");
	nimln(107, "options.nim");
	{
		NIM_BOOL LOC3;
		UnpackerrorHEX3Aobjecttype124011* LOC6;
		NimStringDesc* LOC7;
		LOC3 = 0;
		LOC3 = isnone_141296(self);
		if (!LOC3) goto LA4;
		LOC6 = 0;
		LOC6 = (UnpackerrorHEX3Aobjecttype124011*) newObj((&NTI124004), sizeof(UnpackerrorHEX3Aobjecttype124011));
		(*LOC6).Sup.Sup.Sup.m_type = (&NTI124011);
		LOC7 = 0;
		LOC7 = (*LOC6).Sup.Sup.message; (*LOC6).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP349));
		if (LOC7) nimGCunrefNoCycle(LOC7);
		nimln(108, "options.nim");
		raiseException((Exception*)LOC6, "UnpackError:ObjectType");
	}
	LA4: ;
	result = (*self).val;
	popFrame();
	return result;
}

N_NIMCALL(void, some_143590)(Regexmatch141004* val, Option143524* Result) {
	nimfr("some", "options.nim")
	nimln(84, "options.nim");
	(*Result).has = NIM_TRUE;
	nimln(85, "options.nim");
	unsureAsgnRef((void**) (&(*Result).val.pattern), (*val).pattern);
	unsureAsgnRef((void**) (&(*Result).val.str), copyString((*val).str));
	genericSeqAssign((&(*Result).val.pcrematchbounds), (*val).pcrematchbounds, (&NTI141054));
	popFrame();
}

N_NIMCALL(void, none_143599)(Option143524* Result) {
	nimfr("none", "options.nim")
	nimln(89, "options.nim");
	(*Result).has = NIM_FALSE;
	popFrame();
}

N_NIMCALL(NIM_BOOL, issome_143693)(Option143524* self) {
	NIM_BOOL result;
	nimfr("isSome", "options.nim")
	result = 0;
	nimln(93, "options.nim");
	result = (*self).has;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, isnone_143709)(Option143524* self) {
	NIM_BOOL result;
	nimfr("isNone", "options.nim")
	result = 0;
	nimln(96, "options.nim");
	result = !((*self).has);
	popFrame();
	return result;
}

N_NIMCALL(void, get_143701)(Option143524* self, Regexmatch141004* Result) {
	nimfr("get", "options.nim")
	nimln(105, "options.nim");
	nimln(107, "options.nim");
	{
		NIM_BOOL LOC3;
		UnpackerrorHEX3Aobjecttype124011* LOC6;
		NimStringDesc* LOC7;
		LOC3 = 0;
		LOC3 = isnone_143709(self);
		if (!LOC3) goto LA4;
		LOC6 = 0;
		LOC6 = (UnpackerrorHEX3Aobjecttype124011*) newObj((&NTI124004), sizeof(UnpackerrorHEX3Aobjecttype124011));
		(*LOC6).Sup.Sup.Sup.m_type = (&NTI124011);
		LOC7 = 0;
		LOC7 = (*LOC6).Sup.Sup.message; (*LOC6).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP349));
		if (LOC7) nimGCunrefNoCycle(LOC7);
		nimln(108, "options.nim");
		raiseException((Exception*)LOC6, "UnpackError:ObjectType");
	}
	LA4: ;
	unsureAsgnRef((void**) (&(*Result).pattern), (*self).val.pattern);
	unsureAsgnRef((void**) (&(*Result).str), copyString((*self).val.str));
	genericSeqAssign((&(*Result).pcrematchbounds), (*self).val.pcrematchbounds, (&NTI141054));
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_optionsInit000)(void) {
	nimfr("options", "options.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_optionsDatInit000)(void) {
static TNimNode* TMP371[2];
static TNimNode* TMP452[2];
static TNimNode TMP326[7];
NTI124011.size = sizeof(UnpackerrorHEX3Aobjecttype124011);
NTI124011.kind = 17;
NTI124011.base = (&NTI3446);
TMP326[0].len = 0; TMP326[0].kind = 2;
NTI124011.node = &TMP326[0];
NTI124004.size = sizeof(UnpackerrorHEX3Aobjecttype124011*);
NTI124004.kind = 22;
NTI124004.base = (&NTI124011);
NTI124004.marker = TMP348;
NTI141225.size = sizeof(Option141225);
NTI141225.kind = 18;
NTI141225.base = 0;
NTI141225.flags = 3;
TMP371[0] = &TMP326[2];
TMP326[2].kind = 1;
TMP326[2].offset = offsetof(Option141225, val);
TMP326[2].typ = (&NTI90081);
TMP326[2].name = "val";
TMP371[1] = &TMP326[3];
TMP326[3].kind = 1;
TMP326[3].offset = offsetof(Option141225, has);
TMP326[3].typ = (&NTI130);
TMP326[3].name = "has";
TMP326[1].len = 2; TMP326[1].kind = 2; TMP326[1].sons = &TMP371[0];
NTI141225.node = &TMP326[1];
NTI143524.size = sizeof(Option143524);
NTI143524.kind = 18;
NTI143524.base = 0;
NTI143524.flags = 2;
TMP452[0] = &TMP326[5];
TMP326[5].kind = 1;
TMP326[5].offset = offsetof(Option143524, val);
TMP326[5].typ = (&NTI141004);
TMP326[5].name = "val";
TMP452[1] = &TMP326[6];
TMP326[6].kind = 1;
TMP326[6].offset = offsetof(Option143524, has);
TMP326[6].typ = (&NTI130);
TMP326[6].name = "has";
TMP326[4].len = 2; TMP326[4].kind = 2; TMP326[4].sons = &TMP452[0];
NTI143524.node = &TMP326[4];
}

