/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include "Pass.h"
#include "PassManager.h"

/**
 * This pass is meant to be run after OptimizeResourcesPass. Its purpose is
 * simply to define a discrete place in the pass order for the reachability of
 * classes to be recomputed, after dead resource files have been removed.
 */
class LayoutReachabilityPass : Pass {
 public:
  LayoutReachabilityPass() : Pass("LayoutReachabilityPass") {}

  void run_pass(DexStoresVector&, ConfigFiles&, PassManager&) override;
};