/**
 * Copyright (c)  2022  Xiaomi Corporation (authors: Fangjun Kuang)
 *
 * See LICENSE for clarification regarding multiple authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef SHERPA_PYTHON_CSRC_RNNT_MODEL_H_
#define SHERPA_PYTHON_CSRC_RNNT_MODEL_H_

#include "sherpa/python/csrc/sherpa.h"

namespace sherpa {

void PybindRnntModel(py::module &m);

}  // namespace sherpa

#endif  // SHERPA_PYTHON_CSRC_RNNT_MODEL_H_
