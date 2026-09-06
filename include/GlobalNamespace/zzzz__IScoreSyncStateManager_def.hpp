#pragma once
// IWYU pragma private; include "GlobalNamespace/IScoreSyncStateManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IScoreSyncStateManager)
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
class IScoreSyncStateManager_5;
}
namespace GlobalNamespace {
class StandardScoreSyncStateDeltaNetSerializable;
}
namespace GlobalNamespace {
class StandardScoreSyncStateNetSerializable;
}
namespace GlobalNamespace {
struct StandardScoreSyncState_Score;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
// Forward declare root types
namespace GlobalNamespace {
class IScoreSyncStateManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IScoreSyncStateManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IScoreSyncStateManager*, "", "IScoreSyncStateManager");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IScoreSyncStateManager
class CORDL_TYPE IScoreSyncStateManager {
public:
  // Declarations
  /// @brief Convert operator to
  /// "::GlobalNamespace::IScoreSyncStateManager_5<::GlobalNamespace::StandardScoreSyncState,::GlobalNamespace::StandardScoreSyncState_Score,int32_t,::GlobalNamespace::StandardScoreSyncStateNetSerializable*,::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>"
  constexpr operator ::GlobalNamespace::IScoreSyncStateManager_5<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t,
                                                                 ::GlobalNamespace::StandardScoreSyncStateNetSerializable*, ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>*() noexcept;

  /// @brief Convert to
  /// "::GlobalNamespace::IScoreSyncStateManager_5<::GlobalNamespace::StandardScoreSyncState,::GlobalNamespace::StandardScoreSyncState_Score,int32_t,::GlobalNamespace::StandardScoreSyncStateNetSerializable*,::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>"
  constexpr ::GlobalNamespace::IScoreSyncStateManager_5<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t,
                                                        ::GlobalNamespace::StandardScoreSyncStateNetSerializable*, ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>*
  i___GlobalNamespace__IScoreSyncStateManager_5___GlobalNamespace__StandardScoreSyncState___GlobalNamespace__StandardScoreSyncState_Score_int32_t___GlobalNamespace__StandardScoreSyncStateNetSerializable____GlobalNamespace__StandardScoreSyncStateDeltaNetSerializable__() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IScoreSyncStateManager", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IScoreSyncStateManager(IScoreSyncStateManagerconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21581 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
