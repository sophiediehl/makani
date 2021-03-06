// Copyright 2020 Makani Technologies LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "lib/bazel/swig_test/math.h"

#include <stdint.h>
#include "lib/bazel/swig_test/utils.h"

double PortionA(uint16_t a, uint16_t b) {
  return Scale(a, 100.0) / static_cast<double>(a + b);
}

double PortionB(uint16_t a, uint16_t b) {
  return static_cast<double>(100.0) - PortionA(a, b);
}
