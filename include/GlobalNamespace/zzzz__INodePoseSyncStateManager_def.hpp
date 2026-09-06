#pragma once
// IWYU pragma private; include "GlobalNamespace/INodePoseSyncStateManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INodePoseSyncStateManager)
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
  requires(::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*> &&
           ::cordl_internals::type_constraint<TStateTable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IEquatableByReference_1<TStateTable>*> && ::cordl_internals::value_type_constraint<TStateTable> &&
           ::cordl_internals::default_constructor_constraint<TStateTable> && ::cordl_internals::type_constraint<TType, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<TType> &&
           ::cordl_internals::default_constructor_constraint<TType> && ::cordl_internals::value_type_constraint<TState> && ::cordl_internals::default_constructor_constraint<TState> &&
           ::cordl_internals::type_constraint<TSerializable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TSerializable, ::GlobalNamespace::ISyncStateSerializable_1<TStateTable>*> &&
           ::cordl_internals::type_constraint<TSerializable, ::GlobalNamespace::IPoolablePacket*> && ::cordl_internals::type_constraint<TDeltaSerializable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TDeltaSerializable, ::GlobalNamespace::ISyncStateDeltaSerializable_1<TStateTable>*> &&
           ::cordl_internals::type_constraint<TDeltaSerializable, ::GlobalNamespace::IPoolablePacket*>)
class INodePoseSyncStateManager_5;
}
namespace GlobalNamespace {
class NodePoseSyncStateDeltaNetSerializable;
}
namespace GlobalNamespace {
class NodePoseSyncStateNetSerializable;
}
namespace GlobalNamespace {
struct NodePoseSyncState_NodePose;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
namespace GlobalNamespace {
struct PoseSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class INodePoseSyncStateManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::INodePoseSyncStateManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::INodePoseSyncStateManager*, "", "INodePoseSyncStateManager");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: INodePoseSyncStateManager
class CORDL_TYPE INodePoseSyncStateManager {
public:
  // Declarations
  /// @brief Convert operator to
  /// "::GlobalNamespace::INodePoseSyncStateManager_5<::GlobalNamespace::NodePoseSyncState,::GlobalNamespace::NodePoseSyncState_NodePose,::GlobalNamespace::PoseSerializable,::GlobalNamespace::NodePoseSyncStateNetSerializable*,::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>"
  constexpr operator ::GlobalNamespace::INodePoseSyncStateManager_5<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::NodePoseSyncState_NodePose, ::GlobalNamespace::PoseSerializable,
                                                                    ::GlobalNamespace::NodePoseSyncStateNetSerializable*, ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>*() noexcept;

  /// @brief Convert to
  /// "::GlobalNamespace::INodePoseSyncStateManager_5<::GlobalNamespace::NodePoseSyncState,::GlobalNamespace::NodePoseSyncState_NodePose,::GlobalNamespace::PoseSerializable,::GlobalNamespace::NodePoseSyncStateNetSerializable*,::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>"
  constexpr ::GlobalNamespace::INodePoseSyncStateManager_5<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::NodePoseSyncState_NodePose, ::GlobalNamespace::PoseSerializable,
                                                           ::GlobalNamespace::NodePoseSyncStateNetSerializable*, ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>*
  i___GlobalNamespace__INodePoseSyncStateManager_5___GlobalNamespace__NodePoseSyncState___GlobalNamespace__NodePoseSyncState_NodePose___GlobalNamespace__PoseSerializable___GlobalNamespace__NodePoseSyncStateNetSerializable____GlobalNamespace__NodePoseSyncStateDeltaNetSerializable__() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "INodePoseSyncStateManager", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INodePoseSyncStateManager(INodePoseSyncStateManagerconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21579 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
