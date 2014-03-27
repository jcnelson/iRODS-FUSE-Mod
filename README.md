iRODS-FUSE-Mod
==============

Modified version of iRODS-FUSE client in order to optimize file read performance

Overview
--------

Original read performance of iRODS FUSE client is way slower than "iget" command-line utility. This is because "iget" uses multi-threaded parallel access to the data file and bigger chunk size per request while "iRODS FUSE client" uses single thread and small chunk size. Hence "iget" program utilizes network bandwidth more efficiently.

In this project, read operations will be boosted by running "iget" in background. While reading a big file from iRODS server, background "iget" will download whole file to local disk. Later read operations will be the same as simple local file read.

Cache Policy
------------

Here's basic policy on controlling cache.
- When the program starts, clear all cache
- When the program exits, clear all cache
- When the file is opened, it tries to download in background and put it in cache
- When the file size is bigger than available space in local disk, it doesn't download
- When cached file's last modified time or file size is not matching with those of remote original file, the cache is out-dated
- When the number of cached file is bigger than threshold (Threshold = 100), evicts the oldest cache


Modified Sources
----------------

To not cause unexpected side effects and version management issue, I did not fixed their core source code. Instead, I added few lines to the iFuseOper.c which mainly implements fuse operations and added new file to implement background download job.

Here's the list of modified or added source files.
- iFuseOper.c (Modified, irodsOpen/irodsRead)
- irodsFs.c (Modified, main)
- bgdownload.c (Added)

Settings & Misc.
----------------

Background downloading will execute "iget" program which is a part of "iCommand" tools. Thus, "iCommand" tools need to be installed on your system. Plus, a path to "iget" must be registered on environment.

```
export ICOMMAND_PATH=/opt/irods/clients/icommands/bin
```

As "iget" and "irods-fuse" will run as different processes, they use different iRODS configuration files. iRODS client generally creates "~/.irods" directory to store iRODS configuration files and creates files named "~/.irods/.irodsEnv" and "~/.irods/.irodsEnv.<process_id>" in it. Because of this configuration isolation, we need to make sure "iget" and "irods-fuse" refers the same configuration. For example, current-working-path can be differ between "iget" and "irods-fuse".

If you want to mount a specific directory through "irods-fuse" and make "iget" to refer the same directory, you should modify the file "~/.irods/.irodsEnv". Here's an example.

[~/.irods/.irodsEnv]
```
irodsHost <your irods host>
irodsPort <host irods port>
irodsUserName <user name>
irodsZone <zone>
irodsCwd=<irods path to the directory you would like to mount>
```







