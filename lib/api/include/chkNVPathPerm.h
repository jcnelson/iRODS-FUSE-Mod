/*** Copyright (c), The Regents of the University of California            ***
 *** For more information please refer to files in the COPYRIGHT directory ***/
/* chkNVPathPerm.h - This file may be generated by a program or script
 */

#ifndef CHK_NV_PATH_PERM_H
#define CHK_NV_PATH_PERM_H

/* This is a low level file type API call */

#include "rods.h"
#include "rcMisc.h"
#include "procApiRequest.h"
#include "apiNumber.h"
#include "initServer.h"
#include "fileDriver.h"
#include "fileOpen.h"

#ifdef  __cplusplus
extern "C" {
#endif

#if defined(RODS_SERVER)
#define RS_CHK_NV_PATH_PERM rsChkNVPathPerm
/* prototype for the server handler */
int
rsChkNVPathPerm (rsComm_t *rsComm, fileOpenInp_t *chkNVPathPermInp);
int
rsChkNVPathPermByHost (rsComm_t *rsComm, fileOpenInp_t *chkNVPathPermInp,
rodsServerHost_t *rodsServerHost);
int
_rsChkNVPathPerm (rsComm_t *rsComm, fileOpenInp_t *chkNVPathPermInp);
int
remoteChkNVPathPerm (rsComm_t *rsComm, fileOpenInp_t *chkNVPathPermInp,
rodsServerHost_t *rodsServerHost);
#else
#define RS_CHK_NV_PATH_PERM NULL
#endif

/* prototype for the client call */
int
rcChkNVPathPerm (rcComm_t *conn, fileOpenInp_t *chkNVPathPermInp);

#ifdef  __cplusplus
}
#endif

#endif	/* CHK_NV_PATH_PERM_H */
