// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#ifdef IR_COMPILE

#include "exec/old-hash-table.h"

namespace impala {

uint8_t* OldHashTable::expr_values_buffer() const {
  return expr_values_buffer_;
}

uint8_t* OldHashTable::expr_value_null_bits() const {
  return expr_value_null_bits_;
}

ExprContext* const* OldHashTable::build_expr_ctxs() const {
  return &build_expr_ctxs_[0];
}

ExprContext* const* OldHashTable::probe_expr_ctxs() const {
  return &probe_expr_ctxs_[0];
}

}

#endif
