/*
 * COarse-grain LOck-stepping Virtual Machines for Non-stop Service (COLO)
 * (a.k.a. Fault Tolerance or Continuous Replication)
 *
 * Copyright (c) 2015 HUAWEI TECHNOLOGIES CO.,LTD.
 * Copyright (c) 2015 FUJITSU LIMITED
 * Copyright (c) 2015 Intel Corporation
 *
 * This work is licensed under the terms of the GNU GPL, version 2 or
 * later.  See the COPYING file in the top-level directory.
 */

#include "migration/migration-colo.h"
#include "qmp-commands.h"
#include "net/colo-nic.h"

bool colo_supported(void)
{
    return false;
}

bool migrate_in_colo_state(void)
{
    return false;
}

void colo_init_checkpointer(MigrationState *s)
{
}

void *colo_process_incoming_checkpoints(void *opaque)
{
    return NULL;
}

bool loadvm_in_colo_state(void)
{
    return false;
}

void colo_add_nic_devices(NetClientState *nc)
{
}

void colo_remove_nic_devices(NetClientState *nc)
{
}

void qmp_colo_lost_heartbeat(Error **errp)
{
    error_setg(errp, "COLO is not supported, please rerun configure"
                     " with --enable-colo option in order to support"
                     " COLO feature");
}
