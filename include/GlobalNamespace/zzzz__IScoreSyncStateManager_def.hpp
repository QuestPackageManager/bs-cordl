#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IScoreSyncStateManager)
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable> class IScoreSyncStateManager_5;
}
namespace GlobalNamespace {
class StandardScoreSyncStateDeltaNetSerializable;
}
namespace GlobalNamespace {
class StandardScoreSyncStateNetSerializable;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
namespace GlobalNamespace {
struct __StandardScoreSyncState__Score;
}
// Forward declare root types
namespace GlobalNamespace {
class IScoreSyncStateManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IScoreSyncStateManager);
// Type: ::IScoreSyncStateManager
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IScoreSyncStateManager*
class CORDL_TYPE IScoreSyncStateManager {
public:
  // Declarations
  /// @brief Convert operator to
  /// "::GlobalNamespace::IScoreSyncStateManager_5<::GlobalNamespace::StandardScoreSyncState,::GlobalNamespace::__StandardScoreSyncState__Score,int32_t,::GlobalNamespace::StandardScoreSyncStateNetSerializable*,::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>"
  constexpr operator ::GlobalNamespace::IScoreSyncStateManager_5<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::__StandardScoreSyncState__Score, int32_t,
                                                                 ::GlobalNamespace::StandardScoreSyncStateNetSerializable*, ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>*() noexcept;

  /// @brief Convert to
  /// "::GlobalNamespace::IScoreSyncStateManager_5<::GlobalNamespace::StandardScoreSyncState,::GlobalNamespace::__StandardScoreSyncState__Score,int32_t,::GlobalNamespace::StandardScoreSyncStateNetSerializable*,::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>"
  constexpr ::GlobalNamespace::IScoreSyncStateManager_5<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::__StandardScoreSyncState__Score, int32_t,
                                                        ::GlobalNamespace::StandardScoreSyncStateNetSerializable*, ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>*
  i___GlobalNamespace__IScoreSyncStateManager_5___GlobalNamespace__StandardScoreSyncState___GlobalNamespace____StandardScoreSyncState__Score_int32_t___GlobalNamespace__StandardScoreSyncStateNetSerializable____GlobalNamespace__StandardScoreSyncStateDeltaNetSerializable__() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IScoreSyncStateManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IScoreSyncStateManager(IScoreSyncStateManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IScoreSyncStateManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IScoreSyncStateManager(IScoreSyncStateManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IScoreSyncStateManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IScoreSyncStateManager*, "", "IScoreSyncStateManager");
