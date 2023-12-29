#pragma once
#include "GlobalNamespace/zzzz__INodePoseSyncStateManager_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__INodePoseSyncStateManager_5_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateDeltaNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_def.hpp"
/// @brief Convert operator to
/// "::GlobalNamespace::INodePoseSyncStateManager_5<::GlobalNamespace::NodePoseSyncState,::GlobalNamespace::__NodePoseSyncState__NodePose,::GlobalNamespace::PoseSerializable,::GlobalNamespace::NodePoseSyncStateNetSerializable*,::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>"
constexpr GlobalNamespace::INodePoseSyncStateManager::operator ::GlobalNamespace::INodePoseSyncStateManager_5<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::__NodePoseSyncState__NodePose,
                                                                                                              ::GlobalNamespace::PoseSerializable, ::GlobalNamespace::NodePoseSyncStateNetSerializable*,
                                                                                                              ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>*() noexcept {
  return static_cast<::GlobalNamespace::INodePoseSyncStateManager_5<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::__NodePoseSyncState__NodePose, ::GlobalNamespace::PoseSerializable,
                                                                    ::GlobalNamespace::NodePoseSyncStateNetSerializable*, ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>*>(
      static_cast<void*>(this));
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
