#pragma once
// IWYU pragma private; include "GlobalNamespace/NodePoseSyncStateManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__INodePoseSyncStateManager_5_def.hpp"
#include "GlobalNamespace/zzzz__INodePoseSyncStateManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncStateManager_5_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NodePoseSyncStateManager)
namespace GlobalNamespace {
template <typename T> class IPacketPool_1;
}
namespace GlobalNamespace {
struct MultiplayerSessionManager_MessageType;
}
namespace GlobalNamespace {
class NodePoseSyncStateDeltaNetSerializable;
}
namespace GlobalNamespace {
class NodePoseSyncStateNetSerializable;
}
namespace GlobalNamespace {
struct PoseSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class NodePoseSyncStateManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NodePoseSyncStateManager);
// Dependencies INodePoseSyncStateManager, INodePoseSyncStateManager`5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>, MultiplayerSyncStateManager`5<TStateTable, TType, TState,
// TSerializable, TDeltaSerializable>, NodePoseSyncState, NodePoseSyncState::NodePose, PoseSerializable
namespace GlobalNamespace {
// Is value type: false
// CS Name: NodePoseSyncStateManager
class CORDL_TYPE NodePoseSyncStateManager
    : public ::GlobalNamespace::MultiplayerSyncStateManager_5<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::NodePoseSyncState_NodePose, ::GlobalNamespace::PoseSerializable,
                                                              ::GlobalNamespace::NodePoseSyncStateNetSerializable*, ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*> {
public:
  // Declarations
  __declspec(property(get = get_deltaMessageType)) ::GlobalNamespace::MultiplayerSessionManager_MessageType deltaMessageType;

  __declspec(property(get = get_deltaSerializablePool)) ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>* deltaSerializablePool;

  __declspec(property(get = get_deltaUpdateFrequencyMs)) int64_t deltaUpdateFrequencyMs;

  __declspec(property(get = get_fullStateUpdateFrequencyMs)) int64_t fullStateUpdateFrequencyMs;

  __declspec(property(get = get_localBufferSize)) int32_t localBufferSize;

  __declspec(property(get = get_messageType)) ::GlobalNamespace::MultiplayerSessionManager_MessageType messageType;

  __declspec(property(get = get_remoteBufferSize)) int32_t remoteBufferSize;

  __declspec(property(get = get_serializablePool)) ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::NodePoseSyncStateNetSerializable*>* serializablePool;

  /// @brief Convert operator to "::GlobalNamespace::INodePoseSyncStateManager"
  constexpr operator ::GlobalNamespace::INodePoseSyncStateManager*() noexcept;

  /// @brief Convert operator to
  /// "::GlobalNamespace::INodePoseSyncStateManager_5<::GlobalNamespace::NodePoseSyncState,::GlobalNamespace::NodePoseSyncState_NodePose,::GlobalNamespace::PoseSerializable,::GlobalNamespace::NodePoseSyncStateNetSerializable*,::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>"
  constexpr operator ::GlobalNamespace::INodePoseSyncStateManager_5<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::NodePoseSyncState_NodePose, ::GlobalNamespace::PoseSerializable,
                                                                    ::GlobalNamespace::NodePoseSyncStateNetSerializable*, ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>*() noexcept;

  /// @brief Method Interpolate, addr 0x3e6d988, size 0x6c, virtual true, abstract: false, final false
  inline ::GlobalNamespace::PoseSerializable Interpolate(::GlobalNamespace::PoseSerializable prev, int64_t prevTime, ::GlobalNamespace::PoseSerializable curr, int64_t currTime, int64_t time);

  static inline ::GlobalNamespace::NodePoseSyncStateManager* New_ctor();

  /// @brief Method Smooth, addr 0x3e6d9f4, size 0x5c, virtual true, abstract: false, final false
  inline ::GlobalNamespace::PoseSerializable Smooth(::GlobalNamespace::PoseSerializable a, ::GlobalNamespace::PoseSerializable b, float_t smooth);

  /// @brief Method .ctor, addr 0x3e6da50, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_deltaMessageType, addr 0x3e6d980, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerSessionManager_MessageType get_deltaMessageType();

  /// @brief Method get_deltaSerializablePool, addr 0x3e6d970, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>* get_deltaSerializablePool();

  /// @brief Method get_deltaUpdateFrequencyMs, addr 0x3e6d948, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_deltaUpdateFrequencyMs();

  /// @brief Method get_fullStateUpdateFrequencyMs, addr 0x3e6d950, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_fullStateUpdateFrequencyMs();

  /// @brief Method get_localBufferSize, addr 0x3e6d958, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_localBufferSize();

  /// @brief Method get_messageType, addr 0x3e6d978, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerSessionManager_MessageType get_messageType();

  /// @brief Method get_remoteBufferSize, addr 0x3e6d960, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_remoteBufferSize();

  /// @brief Method get_serializablePool, addr 0x3e6d968, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::NodePoseSyncStateNetSerializable*>* get_serializablePool();

  /// @brief Convert to "::GlobalNamespace::INodePoseSyncStateManager"
  constexpr ::GlobalNamespace::INodePoseSyncStateManager* i___GlobalNamespace__INodePoseSyncStateManager() noexcept;

  /// @brief Convert to
  /// "::GlobalNamespace::INodePoseSyncStateManager_5<::GlobalNamespace::NodePoseSyncState,::GlobalNamespace::NodePoseSyncState_NodePose,::GlobalNamespace::PoseSerializable,::GlobalNamespace::NodePoseSyncStateNetSerializable*,::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>"
  constexpr ::GlobalNamespace::INodePoseSyncStateManager_5<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::NodePoseSyncState_NodePose, ::GlobalNamespace::PoseSerializable,
                                                           ::GlobalNamespace::NodePoseSyncStateNetSerializable*, ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>*
  i___GlobalNamespace__INodePoseSyncStateManager_5___GlobalNamespace__NodePoseSyncState___GlobalNamespace__NodePoseSyncState_NodePose___GlobalNamespace__PoseSerializable___GlobalNamespace__NodePoseSyncStateNetSerializable____GlobalNamespace__NodePoseSyncStateDeltaNetSerializable__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NodePoseSyncStateManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NodePoseSyncStateManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NodePoseSyncStateManager(NodePoseSyncStateManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NodePoseSyncStateManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NodePoseSyncStateManager(NodePoseSyncStateManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17372 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NodePoseSyncStateManager, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NodePoseSyncStateManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NodePoseSyncStateManager*, "", "NodePoseSyncStateManager");
