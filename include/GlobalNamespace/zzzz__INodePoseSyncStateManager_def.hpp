#pragma once
// IWYU pragma private; include "GlobalNamespace/INodePoseSyncStateManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INodePoseSyncStateManager)
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable> class INodePoseSyncStateManager_5;
}
namespace GlobalNamespace {
class NodePoseSyncStateDeltaNetSerializable;
}
namespace GlobalNamespace {
class NodePoseSyncStateNetSerializable;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
namespace GlobalNamespace {
struct PoseSerializable;
}
namespace GlobalNamespace {
struct __NodePoseSyncState__NodePose;
}
// Forward declare root types
namespace GlobalNamespace {
class INodePoseSyncStateManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::INodePoseSyncStateManager);
// Type: ::INodePoseSyncStateManager
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::INodePoseSyncStateManager*
class CORDL_TYPE INodePoseSyncStateManager {
public:
  // Declarations
  /// @brief Convert operator to
  /// "::GlobalNamespace::INodePoseSyncStateManager_5<::GlobalNamespace::NodePoseSyncState,::GlobalNamespace::__NodePoseSyncState__NodePose,::GlobalNamespace::PoseSerializable,::GlobalNamespace::NodePoseSyncStateNetSerializable*,::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>"
  constexpr operator ::GlobalNamespace::INodePoseSyncStateManager_5<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::__NodePoseSyncState__NodePose, ::GlobalNamespace::PoseSerializable,
                                                                    ::GlobalNamespace::NodePoseSyncStateNetSerializable*, ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>*() noexcept;

  /// @brief Convert to
  /// "::GlobalNamespace::INodePoseSyncStateManager_5<::GlobalNamespace::NodePoseSyncState,::GlobalNamespace::__NodePoseSyncState__NodePose,::GlobalNamespace::PoseSerializable,::GlobalNamespace::NodePoseSyncStateNetSerializable*,::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>"
  constexpr ::GlobalNamespace::INodePoseSyncStateManager_5<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::__NodePoseSyncState__NodePose, ::GlobalNamespace::PoseSerializable,
                                                           ::GlobalNamespace::NodePoseSyncStateNetSerializable*, ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>*
  i___GlobalNamespace__INodePoseSyncStateManager_5___GlobalNamespace__NodePoseSyncState___GlobalNamespace____NodePoseSyncState__NodePose___GlobalNamespace__PoseSerializable___GlobalNamespace__NodePoseSyncStateNetSerializable____GlobalNamespace__NodePoseSyncStateDeltaNetSerializable__() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "INodePoseSyncStateManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INodePoseSyncStateManager(INodePoseSyncStateManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INodePoseSyncStateManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INodePoseSyncStateManager(INodePoseSyncStateManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17291 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::INodePoseSyncStateManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INodePoseSyncStateManager*, "", "INodePoseSyncStateManager");
