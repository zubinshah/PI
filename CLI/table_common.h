/* Copyright 2013-present Barefoot Networks, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PI_CLI_TABLE_COMMON_H_
#define PI_CLI_TABLE_COMMON_H_

#include "error_codes.h"

#include "PI/pi.h"

extern pi_p4info_t *p4info;
extern pi_dev_tgt_t dev_tgt;

pi_cli_status_t read_action_data(char *in, pi_p4_id_t a_id,
                                 pi_action_data_t *adata);

char *complete_table_and_action(const char *text, int state);

#endif  // PI_CLI_TABLE_COMMON_H_
