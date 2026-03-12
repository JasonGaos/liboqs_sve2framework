/*
 * Copyright (c) The mlkem-native project authors
 * Copyright (c) The mldsa-native project authors
 * SPDX-License-Identifier: Apache-2.0 OR ISC OR MIT
 */

#ifndef MLD_NATIVE_AARCH64_SVE2_META_H
#define MLD_NATIVE_AARCH64_SVE2_META_H

/*
 * The framework starts with an empty SVE2 backend so ML-DSA falls back to the
 * portable C path until SVE2 primitives are added under native/aarch64_sve2/src.
 */
#define MLD_ARITH_BACKEND_AARCH64_SVE2

#endif /* !MLD_NATIVE_AARCH64_SVE2_META_H */
