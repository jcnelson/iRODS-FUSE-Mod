/* currencyConvertorH.h
   Generated by gSOAP 2.7.9l from currencyConvertorMS_wsdl.h
   Copyright(C) 2000-2007, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#ifndef currencyConvertorH_H
#define currencyConvertorH_H
#include "currencyConvertorStub.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifndef WITH_NOIDREF
SOAP_FMAC3 void SOAP_FMAC4 soap_markelement(struct soap*, const void*, int);
SOAP_FMAC3 int SOAP_FMAC4 soap_putelement(struct soap*, const void*, const char*, int, int);
SOAP_FMAC3 void *SOAP_FMAC4 soap_getelement(struct soap*, int*);
SOAP_FMAC3 int SOAP_FMAC4 soap_putindependent(struct soap*);
SOAP_FMAC3 int SOAP_FMAC4 soap_getindependent(struct soap*);
#endif
SOAP_FMAC3 int SOAP_FMAC4 soap_ignore_element(struct soap*);

#ifndef SOAP_TYPE_byte
#define SOAP_TYPE_byte (2)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_byte(struct soap*, char *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_byte(struct soap*, const char *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_byte(struct soap*, const char*, int, const char *, const char*);
SOAP_FMAC3 char * SOAP_FMAC4 soap_get_byte(struct soap*, char *, const char*, const char*);
SOAP_FMAC3 char * SOAP_FMAC4 soap_in_byte(struct soap*, const char*, char *, const char*);

#ifndef SOAP_TYPE_int
#define SOAP_TYPE_int (1)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_int(struct soap*, int *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_int(struct soap*, const int *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_int(struct soap*, const char*, int, const int *, const char*);
SOAP_FMAC3 int * SOAP_FMAC4 soap_get_int(struct soap*, int *, const char*, const char*);
SOAP_FMAC3 int * SOAP_FMAC4 soap_in_int(struct soap*, const char*, int *, const char*);

#ifndef SOAP_TYPE_double
#define SOAP_TYPE_double (9)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_double(struct soap*, double *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_double(struct soap*, const double *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_double(struct soap*, const char*, int, const double *, const char*);
SOAP_FMAC3 double * SOAP_FMAC4 soap_get_double(struct soap*, double *, const char*, const char*);
SOAP_FMAC3 double * SOAP_FMAC4 soap_in_double(struct soap*, const char*, double *, const char*);

#ifndef SOAP_TYPE_ns1__Currency
#define SOAP_TYPE_ns1__Currency (6)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__Currency(struct soap*, enum ns1__Currency *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__Currency(struct soap*, const enum ns1__Currency *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__Currency(struct soap*, const char*, int, const enum ns1__Currency *, const char*);

SOAP_FMAC3S const char* SOAP_FMAC4S soap_ns1__Currency2s(struct soap*, enum ns1__Currency);
SOAP_FMAC3 enum ns1__Currency * SOAP_FMAC4 soap_get_ns1__Currency(struct soap*, enum ns1__Currency *, const char*, const char*);
SOAP_FMAC3 enum ns1__Currency * SOAP_FMAC4 soap_in_ns1__Currency(struct soap*, const char*, enum ns1__Currency *, const char*);

SOAP_FMAC3S int SOAP_FMAC4S soap_s2ns1__Currency(struct soap*, const char*, enum ns1__Currency *);

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (21)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Fault(struct soap*, struct SOAP_ENV__Fault *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Fault(struct soap*, const struct SOAP_ENV__Fault *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Fault(struct soap*, const struct SOAP_ENV__Fault *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Fault(struct soap*, const char*, int, const struct SOAP_ENV__Fault *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Fault * SOAP_FMAC4 soap_get_SOAP_ENV__Fault(struct soap*, struct SOAP_ENV__Fault *, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Fault * SOAP_FMAC4 soap_in_SOAP_ENV__Fault(struct soap*, const char*, struct SOAP_ENV__Fault *, const char*);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (20)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Reason(struct soap*, const struct SOAP_ENV__Reason *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Reason(struct soap*, const struct SOAP_ENV__Reason *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Reason(struct soap*, const char*, int, const struct SOAP_ENV__Reason *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Reason * SOAP_FMAC4 soap_get_SOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Reason * SOAP_FMAC4 soap_in_SOAP_ENV__Reason(struct soap*, const char*, struct SOAP_ENV__Reason *, const char*);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (17)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Detail(struct soap*, const struct SOAP_ENV__Detail *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Detail(struct soap*, const struct SOAP_ENV__Detail *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Detail(struct soap*, const char*, int, const struct SOAP_ENV__Detail *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Detail * SOAP_FMAC4 soap_get_SOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Detail * SOAP_FMAC4 soap_in_SOAP_ENV__Detail(struct soap*, const char*, struct SOAP_ENV__Detail *, const char*);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (15)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Code(struct soap*, const struct SOAP_ENV__Code *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Code(struct soap*, const struct SOAP_ENV__Code *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Code(struct soap*, const char*, int, const struct SOAP_ENV__Code *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Code * SOAP_FMAC4 soap_get_SOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Code * SOAP_FMAC4 soap_in_SOAP_ENV__Code(struct soap*, const char*, struct SOAP_ENV__Code *, const char*);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (14)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Header(struct soap*, struct SOAP_ENV__Header *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Header(struct soap*, const struct SOAP_ENV__Header *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Header(struct soap*, const struct SOAP_ENV__Header *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Header(struct soap*, const char*, int, const struct SOAP_ENV__Header *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Header * SOAP_FMAC4 soap_get_SOAP_ENV__Header(struct soap*, struct SOAP_ENV__Header *, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Header * SOAP_FMAC4 soap_in_SOAP_ENV__Header(struct soap*, const char*, struct SOAP_ENV__Header *, const char*);

#endif

#ifndef SOAP_TYPE___ns1__ConversionRate
#define SOAP_TYPE___ns1__ConversionRate (13)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default___ns1__ConversionRate(struct soap*, struct __ns1__ConversionRate *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize___ns1__ConversionRate(struct soap*, const struct __ns1__ConversionRate *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put___ns1__ConversionRate(struct soap*, const struct __ns1__ConversionRate *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out___ns1__ConversionRate(struct soap*, const char*, int, const struct __ns1__ConversionRate *, const char*);
SOAP_FMAC3 struct __ns1__ConversionRate * SOAP_FMAC4 soap_get___ns1__ConversionRate(struct soap*, struct __ns1__ConversionRate *, const char*, const char*);
SOAP_FMAC3 struct __ns1__ConversionRate * SOAP_FMAC4 soap_in___ns1__ConversionRate(struct soap*, const char*, struct __ns1__ConversionRate *, const char*);

#ifndef SOAP_TYPE__ns1__ConversionRateResponse
#define SOAP_TYPE__ns1__ConversionRateResponse (8)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default__ns1__ConversionRateResponse(struct soap*, struct _ns1__ConversionRateResponse *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns1__ConversionRateResponse(struct soap*, const struct _ns1__ConversionRateResponse *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put__ns1__ConversionRateResponse(struct soap*, const struct _ns1__ConversionRateResponse *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns1__ConversionRateResponse(struct soap*, const char*, int, const struct _ns1__ConversionRateResponse *, const char*);
SOAP_FMAC3 struct _ns1__ConversionRateResponse * SOAP_FMAC4 soap_get__ns1__ConversionRateResponse(struct soap*, struct _ns1__ConversionRateResponse *, const char*, const char*);
SOAP_FMAC3 struct _ns1__ConversionRateResponse * SOAP_FMAC4 soap_in__ns1__ConversionRateResponse(struct soap*, const char*, struct _ns1__ConversionRateResponse *, const char*);

#ifndef SOAP_TYPE__ns1__ConversionRate
#define SOAP_TYPE__ns1__ConversionRate (7)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default__ns1__ConversionRate(struct soap*, struct _ns1__ConversionRate *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns1__ConversionRate(struct soap*, const struct _ns1__ConversionRate *);
SOAP_FMAC3 int SOAP_FMAC4 soap_put__ns1__ConversionRate(struct soap*, const struct _ns1__ConversionRate *, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns1__ConversionRate(struct soap*, const char*, int, const struct _ns1__ConversionRate *, const char*);
SOAP_FMAC3 struct _ns1__ConversionRate * SOAP_FMAC4 soap_get__ns1__ConversionRate(struct soap*, struct _ns1__ConversionRate *, const char*, const char*);
SOAP_FMAC3 struct _ns1__ConversionRate * SOAP_FMAC4 soap_in__ns1__ConversionRate(struct soap*, const char*, struct _ns1__ConversionRate *, const char*);

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_PointerToSOAP_ENV__Reason
#define SOAP_TYPE_PointerToSOAP_ENV__Reason (23)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToSOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToSOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *const*, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToSOAP_ENV__Reason(struct soap*, const char *, int, struct SOAP_ENV__Reason *const*, const char *);
SOAP_FMAC3 struct SOAP_ENV__Reason ** SOAP_FMAC4 soap_get_PointerToSOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason **, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Reason ** SOAP_FMAC4 soap_in_PointerToSOAP_ENV__Reason(struct soap*, const char*, struct SOAP_ENV__Reason **, const char*);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_PointerToSOAP_ENV__Detail
#define SOAP_TYPE_PointerToSOAP_ENV__Detail (22)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToSOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToSOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *const*, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToSOAP_ENV__Detail(struct soap*, const char *, int, struct SOAP_ENV__Detail *const*, const char *);
SOAP_FMAC3 struct SOAP_ENV__Detail ** SOAP_FMAC4 soap_get_PointerToSOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail **, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Detail ** SOAP_FMAC4 soap_in_PointerToSOAP_ENV__Detail(struct soap*, const char*, struct SOAP_ENV__Detail **, const char*);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_PointerToSOAP_ENV__Code
#define SOAP_TYPE_PointerToSOAP_ENV__Code (16)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToSOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToSOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *const*, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToSOAP_ENV__Code(struct soap*, const char *, int, struct SOAP_ENV__Code *const*, const char *);
SOAP_FMAC3 struct SOAP_ENV__Code ** SOAP_FMAC4 soap_get_PointerToSOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code **, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Code ** SOAP_FMAC4 soap_in_PointerToSOAP_ENV__Code(struct soap*, const char*, struct SOAP_ENV__Code **, const char*);

#endif

#ifndef SOAP_TYPE_PointerTo_ns1__ConversionRateResponse
#define SOAP_TYPE_PointerTo_ns1__ConversionRateResponse (11)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTo_ns1__ConversionRateResponse(struct soap*, struct _ns1__ConversionRateResponse *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTo_ns1__ConversionRateResponse(struct soap*, struct _ns1__ConversionRateResponse *const*, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTo_ns1__ConversionRateResponse(struct soap*, const char *, int, struct _ns1__ConversionRateResponse *const*, const char *);
SOAP_FMAC3 struct _ns1__ConversionRateResponse ** SOAP_FMAC4 soap_get_PointerTo_ns1__ConversionRateResponse(struct soap*, struct _ns1__ConversionRateResponse **, const char*, const char*);
SOAP_FMAC3 struct _ns1__ConversionRateResponse ** SOAP_FMAC4 soap_in_PointerTo_ns1__ConversionRateResponse(struct soap*, const char*, struct _ns1__ConversionRateResponse **, const char*);

#ifndef SOAP_TYPE_PointerTo_ns1__ConversionRate
#define SOAP_TYPE_PointerTo_ns1__ConversionRate (10)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTo_ns1__ConversionRate(struct soap*, struct _ns1__ConversionRate *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTo_ns1__ConversionRate(struct soap*, struct _ns1__ConversionRate *const*, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTo_ns1__ConversionRate(struct soap*, const char *, int, struct _ns1__ConversionRate *const*, const char *);
SOAP_FMAC3 struct _ns1__ConversionRate ** SOAP_FMAC4 soap_get_PointerTo_ns1__ConversionRate(struct soap*, struct _ns1__ConversionRate **, const char*, const char*);
SOAP_FMAC3 struct _ns1__ConversionRate ** SOAP_FMAC4 soap_in_PointerTo_ns1__ConversionRate(struct soap*, const char*, struct _ns1__ConversionRate **, const char*);

#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default__QName(struct soap*, char **);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__QName(struct soap*, char *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put__QName(struct soap*, char *const*, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out__QName(struct soap*, const char*, int, char*const*, const char*);
SOAP_FMAC3 char ** SOAP_FMAC4 soap_get__QName(struct soap*, char **, const char*, const char*);
SOAP_FMAC3 char * * SOAP_FMAC4 soap_in__QName(struct soap*, const char*, char **, const char*);

#ifndef SOAP_TYPE_string
#define SOAP_TYPE_string (3)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_string(struct soap*, char **);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_string(struct soap*, char *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_string(struct soap*, char *const*, const char*, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_string(struct soap*, const char*, int, char*const*, const char*);
SOAP_FMAC3 char ** SOAP_FMAC4 soap_get_string(struct soap*, char **, const char*, const char*);
SOAP_FMAC3 char * * SOAP_FMAC4 soap_in_string(struct soap*, const char*, char **, const char*);

#ifdef __cplusplus
}
#endif

#endif

/* End of currencyConvertorH.h */
