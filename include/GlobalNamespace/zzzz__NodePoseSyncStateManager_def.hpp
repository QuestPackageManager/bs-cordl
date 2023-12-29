#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerSyncStateManager_5_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateDeltaNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NodePoseSyncStateManager)
namespace GlobalNamespace {
class INodePoseSyncStateManager;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
namespace GlobalNamespace {
class NodePoseSyncStateNetSerializable;
}
namespace GlobalNamespace {
struct PoseSerializable;
}
namespace GlobalNamespace {
template <typename T> class IPacketPool_1;
}
namespace GlobalNamespace {
class NodePoseSyncStateDeltaNetSerializable;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable> class INodePoseSyncStateManager_5;
}
namespace GlobalNamespace {
struct __MultiplayerSessionManager__MessageType;
}
namespace GlobalNamespace {
struct __NodePoseSyncState__NodePose;
}
// Forward declare root types
namespace GlobalNamespace {
class NodePoseSyncStateManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NodePoseSyncStateManager);
// Type: ::NodePoseSyncStateManager
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12895)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4564), inst: 3574 }),
// TypeDefinitionIndex(TypeDefinitionIndex(12896)), TypeDefinitionIndex(TypeDefinitionIndex(12893)), TypeDefinitionIndex(TypeDefinitionIndex(12894)), TypeDefinitionIndex(TypeDefinitionIndex(15187)),
// TypeDefinitionIndex(TypeDefinitionIndex(4564))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4579)) CS Name: ::NodePoseSyncStateManager*
class CORDL_TYPE NodePoseSyncStateManager
    : public ::GlobalNamespace::MultiplayerSyncStateManager_5<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::__NodePoseSyncState__NodePose, ::GlobalNamespace::PoseSerializable,
                                                              ::GlobalNamespace::NodePoseSyncStateNetSerializable*, ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*> {
public:
  // Declarations
  __declspec(property(get = get_deltaUpdateFrequency)) float_t deltaUpdateFrequency;

  __declspec(property(get = get_fullStateUpdateFrequency)) float_t fullStateUpdateFrequency;

  __declspec(property(get = get_localBufferSize)) int32_t localBufferSize;

  __declspec(property(get = get_remoteBufferSize)) int32_t remoteBufferSize;

  __declspec(property(get = get_serializablePool))::GlobalNamespace::IPacketPool_1<::GlobalNamespace::NodePoseSyncStateNetSerializable*>* serializablePool;

  __declspec(property(get = get_deltaSerializablePool))::GlobalNamespace::IPacketPool_1<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>* deltaSerializablePool;

  __declspec(property(get = get_messageType))::GlobalNamespace::__MultiplayerSessionManager__MessageType messageType;

  __declspec(property(get = get_deltaMessageType))::GlobalNamespace::__MultiplayerSessionManager__MessageType deltaMessageType;

  /// @brief Convert operator to "::GlobalNamespace::INodePoseSyncStateManager"
  constexpr operator ::GlobalNamespace::INodePoseSyncStateManager*() noexcept;

  /// @brief Convert operator to
  /// "::GlobalNamespace::INodePoseSyncStateManager_5<::GlobalNamespace::NodePoseSyncState,::GlobalNamespace::__NodePoseSyncState__NodePose,::GlobalNamespace::PoseSerializable,::GlobalNamespace::NodePoseSyncStateNetSerializable*,::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>"
  constexpr operator ::GlobalNamespace::INodePoseSyncStateManager_5<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::__NodePoseSyncState__NodePose, ::GlobalNamespace::PoseSerializable,
                                                                    ::GlobalNamespace::NodePoseSyncStateNetSerializable*, ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>*() noexcept;

  /// @brief Method get_deltaUpdateFrequency addr 0x221d34c size 0xc virtual true final false
  inline float_t get_deltaUpdateFrequency();

  /// @brief Method get_fullStateUpdateFrequency addr 0x221d358 size 0xc virtual true final false
  inline float_t get_fullStateUpdateFrequency();

  /// @brief Method get_localBufferSize addr 0x221d364 size 0x8 virtual true final false
  inline int32_t get_localBufferSize();

  /// @brief Method get_remoteBufferSize addr 0x221d36c size 0x8 virtual true final false
  inline int32_t get_remoteBufferSize();

  /// @brief Method get_serializablePool addr 0x221d374 size 0x8 virtual true final false
  inline ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::NodePoseSyncStateNetSerializable*>* get_serializablePool();

  /// @brief Method get_deltaSerializablePool addr 0x221d37c size 0x8 virtual true final false
  inline ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>* get_deltaSerializablePool();

  /// @brief Method get_messageType addr 0x221d384 size 0x8 virtual true final false
  inline ::GlobalNamespace::__MultiplayerSessionManager__MessageType get_messageType();

  /// @brief Method get_deltaMessageType addr 0x221d38c size 0x8 virtual true final false
  inline ::GlobalNamespace::__MultiplayerSessionManager__MessageType get_deltaMessageType();

  /// @brief Method Interpolate addr 0x221d394 size 0x5c virtual true final false
  inline ::GlobalNamespace::PoseSerializable Interpolate(::GlobalNamespace::PoseSerializable prev, float_t prevTime, ::GlobalNamespace::PoseSerializable curr, float_t currTime, float_t time);

  /// @brief Method Smooth addr 0x221d3f0 size 0x5c virtual true final false
  inline ::GlobalNamespace::PoseSerializable Smooth(::GlobalNamespace::PoseSerializable a, ::GlobalNamespace::PoseSerializable b, float_t smooth);

  static inline ::GlobalNamespace::NodePoseSyncStateManager* New_ctor();

  /// @brief Method .ctor addr 0x221d44c size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NodePoseSyncStateManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NodePoseSyncStateManager(NodePoseSyncStateManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NodePoseSyncStateManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NodePoseSyncStateManager(NodePoseSyncStateManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NodePoseSyncStateManager();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NodePoseSyncStateManager, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NodePoseSyncStateManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NodePoseSyncStateManager*, "", "NodePoseSyncStateManager");
