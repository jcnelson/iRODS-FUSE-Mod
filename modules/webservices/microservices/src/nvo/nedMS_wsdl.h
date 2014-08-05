/* nedMS_wsdl.h
   Generated by wsdl2h 1.2.9l from NED.wsdl and typemap.dat
   2008-01-25 00:34:05 GMT
   Copyright (C) 2001-2007 Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL or Genivia's license for commercial use.
*/

/* NOTE:

 - Compile this file with soapcpp2 to complete the code generation process.
 - Use soapcpp2 option -I to specify paths for #import
   To build with STL, 'stlvector.h' is imported from 'import' dir in package.
 - Use wsdl2h options -c and -s to generate pure C code or C++ code without STL.
 - Use 'typemap.dat' to control schema namespace bindings and type mappings.
   It is strongly recommended to customize the names of the namespace prefixes
   generated by wsdl2h. To do so, modify the prefix bindings in the Namespaces
   section below and add the modified lines to 'typemap.dat' to rerun wsdl2h.
 - Use Doxygen (www.doxygen.org) to browse this file.
 - Use wsdl2h option -l to view the software license terms.

   DO NOT include this file directly into your project.
   Include only the soapcpp2-generated headers and source code files.
*/

//gsoapopt cw

/******************************************************************************\
 *                                                                            *
 * http://voservices.net/ned                                                  *
 *                                                                            *
\******************************************************************************/

/* WSDL Documentation:

This is an <b>XML Web Services</b> interface to <b>NED</b> written by Tamas Budavari &lt;budavari@jhu.edu&gt;<hr>It is a client to the official NED services at tcp://ned.ipac.caltech.edu:10011. It supports SOAP, HttpGet and HttpPost protocols and returns the results in XML format. The data structures are true translations of the C structs of the original client library by Xiuqin Wu (1993).
*/


/******************************************************************************\
 *                                                                            *
 * Import                                                                     *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Namespaces                                                          *
 *                                                                            *
\******************************************************************************/


/* NOTE:

It is strongly recommended to customize the names of the namespace prefixes
generated by wsdl2h. To do so, modify the prefix bindings below and add the
modified lines to typemap.dat to rerun wsdl2h:

ns1 = "http://voservices.net/ned"

*/

//gsoap ns1   schema namespace:	http://voservices.net/ned
//gsoap ns1   schema elementForm:	qualified
//gsoap ns1   schema attributeForm:	unqualified

/******************************************************************************\
 *                                                                            *
 * Schema Types                                                               *
 *                                                                            *
\******************************************************************************/



/// "http://voservices.net/ned":ObjInfo is a complexType.
struct ns1__ObjInfo
{
/// Element ArrayOfCrossID of type "http://voservices.net/ned":ArrayOfCrossID.
    struct ns1__ArrayOfCrossID*          ArrayOfCrossID                 0;	///< Optional element.
/// Element dist of type xs:double.
    double                               dist                           1;	///< Required element.
/// Element no_ref of type xs:int.
    int                                  no_USCOREref                   1;	///< Required element.
/// Element no_note of type xs:int.
    int                                  no_USCOREnote                  1;	///< Required element.
/// Element no_photom of type xs:int.
    int                                  no_USCOREphotom                1;	///< Required element.
/// Element objtype of type xs:string.
    char*                                objtype                        0;	///< Optional element.
/// Element ra of type xs:double.
    double                               ra                             1;	///< Required element.
/// Element dec of type xs:double.
    double                               dec                            1;	///< Required element.
/// Element unc_maj of type xs:double.
    double                               unc_USCOREmaj                  1;	///< Required element.
/// Element unc_min of type xs:double.
    double                               unc_USCOREmin                  1;	///< Required element.
/// Element unc_ang of type xs:double.
    double                               unc_USCOREang                  1;	///< Required element.
/// Element refcode of type xs:string.
    char*                                refcode                        0;	///< Optional element.
/// Element ArrayOfMoreData of type "http://voservices.net/ned":ArrayOfMoreData.
    struct ns1__ArrayOfMoreData*         ArrayOfMoreData                0;	///< Optional element.
};

/// "http://voservices.net/ned":ArrayOfCrossID is a complexType.
struct ns1__ArrayOfCrossID
{
/// Size of array of struct ns1__CrossID* is 0..unbounded
    int                                  __sizeCrossID                 ;
/// Array of length 0..unbounded
    struct ns1__CrossID*                 CrossID                        0;	///< Nullable pointer.
};

/// "http://voservices.net/ned":CrossID is a complexType.
struct ns1__CrossID
{
/// Element objname of type xs:string.
    char*                                objname                        0;	///< Optional element.
/// Element objtype of type xs:string.
    char*                                objtype                        0;	///< Optional element.
};

/// "http://voservices.net/ned":ArrayOfMoreData is a complexType.
struct ns1__ArrayOfMoreData
{
/// Size of array of struct ns1__MoreData* is 0..unbounded
    int                                  __sizeMoreData                ;
/// Array of length 0..unbounded
    struct ns1__MoreData*                MoreData                       0;	///< Nullable pointer.
};

/// "http://voservices.net/ned":MoreData is a complexType.
struct ns1__MoreData
{
/// Element data_typec of type xs:string.
    char*                                data_USCOREtypec               0;	///< Optional element.
/// Element data of type xs:string.
    char*                                data                           0;	///< Optional element.
};

/// "http://voservices.net/ned":ArrayOfObjInfo is a complexType.
struct ns1__ArrayOfObjInfo
{
/// Size of array of struct ns1__ObjInfo* is 0..unbounded
    int                                  __sizeObjInfo                 ;
/// Array of length 0..unbounded
    struct ns1__ObjInfo*                 ObjInfo                        0;	///< Nullable pointer.
};

/// "http://voservices.net/ned":ArrayOfString is a complexType.
struct ns1__ArrayOfString
{
/// Size of array of char** is 0..unbounded
    int                                  __sizestring                  ;
/// Array of length 0..unbounded
    char**                               string                         0;	///< Nullable pointer.
};


/// Element "http://voservices.net/ned":ObjByName of complexType.

/// "http://voservices.net/ned":ObjByName is a complexType.
struct _ns1__ObjByName
{
/// Element objname of type xs:string.
    char*                                objname                        0;	///< Optional element.
};


/// Element "http://voservices.net/ned":ObjByNameResponse of complexType.

/// "http://voservices.net/ned":ObjByNameResponse is a complexType.
struct _ns1__ObjByNameResponse
{
/// Element ObjByNameResult of type "http://voservices.net/ned":ObjInfo.
    struct ns1__ObjInfo*                 ObjByNameResult                0;	///< Optional element.
};


/// Element "http://voservices.net/ned":ObjNearName of complexType.

/// "http://voservices.net/ned":ObjNearName is a complexType.
struct _ns1__ObjNearName
{
/// Element objname of type xs:string.
    char*                                objname                        0;	///< Optional element.
/// Element radius of type xs:double.
    double                               radius                         1;	///< Required element.
};


/// Element "http://voservices.net/ned":ObjNearNameResponse of complexType.

/// "http://voservices.net/ned":ObjNearNameResponse is a complexType.
struct _ns1__ObjNearNameResponse
{
/// Element ObjNearNameResult of type "http://voservices.net/ned":ArrayOfObjInfo.
    struct ns1__ArrayOfObjInfo*          ObjNearNameResult              0;	///< Optional element.
};


/// Element "http://voservices.net/ned":ObjNearPosn of complexType.

/// "http://voservices.net/ned":ObjNearPosn is a complexType.
struct _ns1__ObjNearPosn
{
/// Element ra of type xs:double.
    double                               ra                             1;	///< Required element.
/// Element dec of type xs:double.
    double                               dec                            1;	///< Required element.
/// Element radius of type xs:double.
    double                               radius                         1;	///< Required element.
};


/// Element "http://voservices.net/ned":ObjNearPosnResponse of complexType.

/// "http://voservices.net/ned":ObjNearPosnResponse is a complexType.
struct _ns1__ObjNearPosnResponse
{
/// Element ObjNearPosnResult of type "http://voservices.net/ned":ArrayOfObjInfo.
    struct ns1__ArrayOfObjInfo*          ObjNearPosnResult              0;	///< Optional element.
};


/// Element "http://voservices.net/ned":Revisions of complexType.

/// "http://voservices.net/ned":Revisions is a complexType.
struct _ns1__Revisions
{
};


/// Element "http://voservices.net/ned":RevisionsResponse of complexType.

/// "http://voservices.net/ned":RevisionsResponse is a complexType.
struct _ns1__RevisionsResponse
{
/// Element RevisionsResult of type "http://voservices.net/ned":ArrayOfString.
    struct ns1__ArrayOfString*           RevisionsResult                0;	///< Optional element.
};

/// Element "http://voservices.net/ned":ObjInfo of type "http://voservices.net/ned":ObjInfo.
/// Note: use wsdl2h option -g to generate this global element declaration.

/// Element "http://voservices.net/ned":ArrayOfObjInfo of type "http://voservices.net/ned":ArrayOfObjInfo.
/// Note: use wsdl2h option -g to generate this global element declaration.

/// Element "http://voservices.net/ned":ArrayOfString of type "http://voservices.net/ned":ArrayOfString.
/// Note: use wsdl2h option -g to generate this global element declaration.

/******************************************************************************\
 *                                                                            *
 * Services                                                                   *
 *                                                                            *
\******************************************************************************/


//gsoap ns2  service name:	NEDSoap 
//gsoap ns2  service type:	NEDSoap 
//gsoap ns2  service port:	http://voservices.net/NED/ws_v2_0/NED.asmx 
//gsoap ns2  service namespace:	http://voservices.net/ned/NEDSoap 
//gsoap ns2  service transport:	http://schemas.xmlsoap.org/soap/http 

//gsoap ns3  service name:	NEDSoap12 
//gsoap ns3  service type:	NEDSoap 
//gsoap ns3  service port:	http://voservices.net/NED/ws_v2_0/NED.asmx 
//gsoap ns3  service namespace:	http://voservices.net/ned/NEDSoap12 
//gsoap ns3  service transport:	http://schemas.xmlsoap.org/soap/http 

/** @mainpage Service Definitions

@section Service_documentation Documentation
This is an <b>XML Web Services</b> interface to <b>NED</b> written by Tamas Budavari &lt;budavari@jhu.edu&gt;<hr>It is a client to the official NED services at tcp://ned.ipac.caltech.edu:10011. It supports SOAP, HttpGet and HttpPost protocols and returns the results in XML format. The data structures are true translations of the C structs of the original client library by Xiuqin Wu (1993).

@section Service_bindings Bindings
  - @ref NEDSoap
  - @ref NEDSoap12

*/

/**

@page NEDSoap Binding "NEDSoap"

@section NED_service Service Documentation "NED"
This is an <b>XML Web Services</b> interface to <b>NED</b> written by Tamas Budavari &lt;budavari@jhu.edu&gt;<hr>It is a client to the official NED services at tcp://ned.ipac.caltech.edu:10011. It supports SOAP, HttpGet and HttpPost protocols and returns the results in XML format. The data structures are true translations of the C structs of the original client library by Xiuqin Wu (1993).

@section NEDSoap_operations Operations of Binding  "NEDSoap"
  - @ref __ns2__ObjByName
  - @ref __ns2__ObjNearName
  - @ref __ns2__ObjNearPosn
  - @ref __ns2__Revisions

@section NEDSoap_ports Endpoints of Binding  "NEDSoap"
  - http://voservices.net/NED/ws_v2_0/NED.asmx

Note: use wsdl2h option -N to change the service binding prefix name

*/

/**

@page NEDSoap12 Binding "NEDSoap12"

@section NED_service Service Documentation "NED"
This is an <b>XML Web Services</b> interface to <b>NED</b> written by Tamas Budavari &lt;budavari@jhu.edu&gt;<hr>It is a client to the official NED services at tcp://ned.ipac.caltech.edu:10011. It supports SOAP, HttpGet and HttpPost protocols and returns the results in XML format. The data structures are true translations of the C structs of the original client library by Xiuqin Wu (1993).

@section NEDSoap12_operations Operations of Binding  "NEDSoap12"
  - @ref __ns3__ObjByName
  - @ref __ns3__ObjNearName
  - @ref __ns3__ObjNearPosn
  - @ref __ns3__Revisions

@section NEDSoap12_ports Endpoints of Binding  "NEDSoap12"
  - http://voservices.net/NED/ws_v2_0/NED.asmx

Note: use wsdl2h option -N to change the service binding prefix name

*/

/******************************************************************************\
 *                                                                            *
 * NEDSoap                                                                    *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * __ns2__ObjByName                                                           *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns2__ObjByName" of service binding "NEDSoap"

/**

Operation details:

Resolves an object name to J2000 coordinates (ra,dec) and a lot more<br><b>Input:</b> Object name (string), e.g. m100<br><b>Output:</b> All the relevant information (ObjInfo)
  - SOAP document/literal style
  - SOAP action="http://voservices.net/ned/ObjByName"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns2__ObjByName(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    struct _ns1__ObjByName*             ns1__ObjByName,
    // response parameters:
    struct _ns1__ObjByNameResponse*     ns1__ObjByNameResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns2__ObjByName(
    struct soap *soap,
    // request parameters:
    struct _ns1__ObjByName*             ns1__ObjByName,
    // response parameters:
    struct _ns1__ObjByNameResponse*     ns1__ObjByNameResponse
  );
@endcode

*/

//gsoap ns2  service method-style:	ObjByName document
//gsoap ns2  service method-encoding:	ObjByName literal
//gsoap ns2  service method-action:	ObjByName http://voservices.net/ned/ObjByName
int __ns2__ObjByName(
    struct _ns1__ObjByName*             ns1__ObjByName,	///< Request parameter
    struct _ns1__ObjByNameResponse*     ns1__ObjByNameResponse	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * __ns2__ObjNearName                                                         *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns2__ObjNearName" of service binding "NEDSoap"

/**

Operation details:

Finds all objects in NED around a specified object<br><b>Input 1:</b> Object name (string), e.g. m100<br><b>Input 2:</b> Radius in degrees (double), e.g. 0.4<br><b>Output:</b> All the relevant information (ObjInfo array)
  - SOAP document/literal style
  - SOAP action="http://voservices.net/ned/ObjNearName"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns2__ObjNearName(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    struct _ns1__ObjNearName*           ns1__ObjNearName,
    // response parameters:
    struct _ns1__ObjNearNameResponse*   ns1__ObjNearNameResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns2__ObjNearName(
    struct soap *soap,
    // request parameters:
    struct _ns1__ObjNearName*           ns1__ObjNearName,
    // response parameters:
    struct _ns1__ObjNearNameResponse*   ns1__ObjNearNameResponse
  );
@endcode

*/

//gsoap ns2  service method-style:	ObjNearName document
//gsoap ns2  service method-encoding:	ObjNearName literal
//gsoap ns2  service method-action:	ObjNearName http://voservices.net/ned/ObjNearName
int __ns2__ObjNearName(
    struct _ns1__ObjNearName*           ns1__ObjNearName,	///< Request parameter
    struct _ns1__ObjNearNameResponse*   ns1__ObjNearNameResponse	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * __ns2__ObjNearPosn                                                         *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns2__ObjNearPosn" of service binding "NEDSoap"

/**

Operation details:

Finds all objects in NED around specified position<br><b>Input 1:</b> RA in degrees (double)<br><b>Input 2:</b> Dec in degrees (double)<br><b>Input 3:</b> Radius in degrees (double)<br><b>Output:</b> All the relevant information (ObjInfo array)
  - SOAP document/literal style
  - SOAP action="http://voservices.net/ned/ObjNearPosn"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns2__ObjNearPosn(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    struct _ns1__ObjNearPosn*           ns1__ObjNearPosn,
    // response parameters:
    struct _ns1__ObjNearPosnResponse*   ns1__ObjNearPosnResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns2__ObjNearPosn(
    struct soap *soap,
    // request parameters:
    struct _ns1__ObjNearPosn*           ns1__ObjNearPosn,
    // response parameters:
    struct _ns1__ObjNearPosnResponse*   ns1__ObjNearPosnResponse
  );
@endcode

*/

//gsoap ns2  service method-style:	ObjNearPosn document
//gsoap ns2  service method-encoding:	ObjNearPosn literal
//gsoap ns2  service method-action:	ObjNearPosn http://voservices.net/ned/ObjNearPosn
int __ns2__ObjNearPosn(
    struct _ns1__ObjNearPosn*           ns1__ObjNearPosn,	///< Request parameter
    struct _ns1__ObjNearPosnResponse*   ns1__ObjNearPosnResponse	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * __ns2__Revisions                                                           *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns2__Revisions" of service binding "NEDSoap"

/**

Operation details:

Returns current revision numbers of components
  - SOAP document/literal style
  - SOAP action="http://voservices.net/ned/Revisions"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns2__Revisions(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    struct _ns1__Revisions*             ns1__Revisions,
    // response parameters:
    struct _ns1__RevisionsResponse*     ns1__RevisionsResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns2__Revisions(
    struct soap *soap,
    // request parameters:
    struct _ns1__Revisions*             ns1__Revisions,
    // response parameters:
    struct _ns1__RevisionsResponse*     ns1__RevisionsResponse
  );
@endcode

*/

//gsoap ns2  service method-style:	Revisions document
//gsoap ns2  service method-encoding:	Revisions literal
//gsoap ns2  service method-action:	Revisions http://voservices.net/ned/Revisions
int __ns2__Revisions(
    struct _ns1__Revisions*             ns1__Revisions,	///< Request parameter
    struct _ns1__RevisionsResponse*     ns1__RevisionsResponse	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * NEDSoap12                                                                  *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * __ns3__ObjByName                                                           *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns3__ObjByName" of service binding "NEDSoap12"

/**

Operation details:

Resolves an object name to J2000 coordinates (ra,dec) and a lot more<br><b>Input:</b> Object name (string), e.g. m100<br><b>Output:</b> All the relevant information (ObjInfo)
  - SOAP document/literal style
  - SOAP action="http://voservices.net/ned/ObjByName"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns3__ObjByName(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    struct _ns1__ObjByName*             ns1__ObjByName,
    // response parameters:
    struct _ns1__ObjByNameResponse*     ns1__ObjByNameResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns3__ObjByName(
    struct soap *soap,
    // request parameters:
    struct _ns1__ObjByName*             ns1__ObjByName,
    // response parameters:
    struct _ns1__ObjByNameResponse*     ns1__ObjByNameResponse
  );
@endcode

*/

//gsoap ns3  service method-style:	ObjByName document
//gsoap ns3  service method-encoding:	ObjByName literal
//gsoap ns3  service method-action:	ObjByName http://voservices.net/ned/ObjByName
int __ns3__ObjByName(
    struct _ns1__ObjByName*             ns1__ObjByName,	///< Request parameter
    struct _ns1__ObjByNameResponse*     ns1__ObjByNameResponse	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * __ns3__ObjNearName                                                         *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns3__ObjNearName" of service binding "NEDSoap12"

/**

Operation details:

Finds all objects in NED around a specified object<br><b>Input 1:</b> Object name (string), e.g. m100<br><b>Input 2:</b> Radius in degrees (double), e.g. 0.4<br><b>Output:</b> All the relevant information (ObjInfo array)
  - SOAP document/literal style
  - SOAP action="http://voservices.net/ned/ObjNearName"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns3__ObjNearName(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    struct _ns1__ObjNearName*           ns1__ObjNearName,
    // response parameters:
    struct _ns1__ObjNearNameResponse*   ns1__ObjNearNameResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns3__ObjNearName(
    struct soap *soap,
    // request parameters:
    struct _ns1__ObjNearName*           ns1__ObjNearName,
    // response parameters:
    struct _ns1__ObjNearNameResponse*   ns1__ObjNearNameResponse
  );
@endcode

*/

//gsoap ns3  service method-style:	ObjNearName document
//gsoap ns3  service method-encoding:	ObjNearName literal
//gsoap ns3  service method-action:	ObjNearName http://voservices.net/ned/ObjNearName
int __ns3__ObjNearName(
    struct _ns1__ObjNearName*           ns1__ObjNearName,	///< Request parameter
    struct _ns1__ObjNearNameResponse*   ns1__ObjNearNameResponse	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * __ns3__ObjNearPosn                                                         *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns3__ObjNearPosn" of service binding "NEDSoap12"

/**

Operation details:

Finds all objects in NED around specified position<br><b>Input 1:</b> RA in degrees (double)<br><b>Input 2:</b> Dec in degrees (double)<br><b>Input 3:</b> Radius in degrees (double)<br><b>Output:</b> All the relevant information (ObjInfo array)
  - SOAP document/literal style
  - SOAP action="http://voservices.net/ned/ObjNearPosn"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns3__ObjNearPosn(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    struct _ns1__ObjNearPosn*           ns1__ObjNearPosn,
    // response parameters:
    struct _ns1__ObjNearPosnResponse*   ns1__ObjNearPosnResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns3__ObjNearPosn(
    struct soap *soap,
    // request parameters:
    struct _ns1__ObjNearPosn*           ns1__ObjNearPosn,
    // response parameters:
    struct _ns1__ObjNearPosnResponse*   ns1__ObjNearPosnResponse
  );
@endcode

*/

//gsoap ns3  service method-style:	ObjNearPosn document
//gsoap ns3  service method-encoding:	ObjNearPosn literal
//gsoap ns3  service method-action:	ObjNearPosn http://voservices.net/ned/ObjNearPosn
int __ns3__ObjNearPosn(
    struct _ns1__ObjNearPosn*           ns1__ObjNearPosn,	///< Request parameter
    struct _ns1__ObjNearPosnResponse*   ns1__ObjNearPosnResponse	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * __ns3__Revisions                                                           *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns3__Revisions" of service binding "NEDSoap12"

/**

Operation details:

Returns current revision numbers of components
  - SOAP document/literal style
  - SOAP action="http://voservices.net/ned/Revisions"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns3__Revisions(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    struct _ns1__Revisions*             ns1__Revisions,
    // response parameters:
    struct _ns1__RevisionsResponse*     ns1__RevisionsResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns3__Revisions(
    struct soap *soap,
    // request parameters:
    struct _ns1__Revisions*             ns1__Revisions,
    // response parameters:
    struct _ns1__RevisionsResponse*     ns1__RevisionsResponse
  );
@endcode

*/

//gsoap ns3  service method-style:	Revisions document
//gsoap ns3  service method-encoding:	Revisions literal
//gsoap ns3  service method-action:	Revisions http://voservices.net/ned/Revisions
int __ns3__Revisions(
    struct _ns1__Revisions*             ns1__Revisions,	///< Request parameter
    struct _ns1__RevisionsResponse*     ns1__RevisionsResponse	///< Response parameter
);

/* End of nedMS_wsdl.h */
