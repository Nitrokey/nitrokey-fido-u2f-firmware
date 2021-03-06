/*
 * Copyright (c) 2016, Conor Patrick
 * Copyright (c) 2018, Nitrokey UG
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

 */

#ifndef CUSTOM_H_
#define CUSTOM_H_

#include "app.h"
#include "u2f_hid.h"

#define U2F_CUSTOM_GET_RNG		(U2FHID_VENDOR_FIRST+0)
#define U2F_CUSTOM_SEED_RNG		(U2FHID_VENDOR_FIRST+1)
#define U2F_CUSTOM_WINK			(U2FHID_VENDOR_FIRST+2)
#define U2F_CUSTOM_FACTORY_RESET		(U2FHID_VENDOR_FIRST+3)
#define U2F_CUSTOM_UPDATE_CONFIG		(U2FHID_VENDOR_FIRST+4)
#define U2F_CUSTOM_STATUS		(U2FHID_VENDOR_FIRST+5)
#define U2F_SANITY_CHECK		(U2FHID_VENDOR_FIRST+6)



uint8_t custom_command(struct u2f_hid_msg * msg);


#endif
