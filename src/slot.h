/* Copyright (C) 2022 Simo Sorce <simo@redhat.com>
   SPDX-License-Identifier: Apache-2.0 */

#ifndef _SLOT_H
#define _SLOT_H

/* Slots */
CK_RV p11prov_init_slots(P11PROV_CTX *ctx, P11PROV_SLOTS_CTX **slots);
void p11prov_free_slots(P11PROV_SLOTS_CTX *slots);
CK_RV p11prov_take_slots(P11PROV_CTX *ctx, P11PROV_SLOTS_CTX **slots);
void p11prov_return_slots(P11PROV_SLOTS_CTX *slots);
P11PROV_SLOT *p11prov_fetch_slot(P11PROV_SLOTS_CTX *sctx, int *idx);
int p11prov_slot_get_mechanisms(P11PROV_SLOT *slot, CK_MECHANISM_TYPE **mechs);
int p11prov_check_mechanism(P11PROV_CTX *ctx, CK_SLOT_ID id,
                            CK_MECHANISM_TYPE mechtype);
CK_RV p11prov_slot_get_obj_pool(P11PROV_CTX *provctx, CK_SLOT_ID id,
                                P11PROV_OBJ_POOL **pool);
CK_SLOT_ID p11prov_slot_get_slot_id(P11PROV_SLOT *slot);
CK_FLAGS p11prov_slot_get_slot_flags(P11PROV_SLOT *slot);
CK_TOKEN_INFO *p11prov_slot_get_token(P11PROV_SLOT *slot);
const char *p11prov_slot_get_login_info(P11PROV_SLOT *slot);
const char *p11prov_slot_get_bad_pin(P11PROV_SLOT *slot);
CK_RV p11prov_slot_set_bad_pin(P11PROV_SLOT *slot, const char *bad_pin);
P11PROV_SESSION_POOL *p11prov_slot_get_session_pool(P11PROV_SLOT *slot);

#endif /* _SLOT_H */
