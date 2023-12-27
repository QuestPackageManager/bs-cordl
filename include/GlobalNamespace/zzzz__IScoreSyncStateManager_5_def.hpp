#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IScoreSyncStateManager_5)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class LocalMultiplayerSyncState_3;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class MultiplayerSyncState_3;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable> class IScoreSyncStateManager_5;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::IScoreSyncStateManager_5);
// Type: ::IScoreSyncStateManager`5
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14944))
// CS Name: ::IScoreSyncStateManager`5<TStateTable,TType,TState,TSerializable,TDeltaSerializable>*
class CORDL_TYPE IScoreSyncStateManager_5 {
public:
  // Declarations
  __declspec(property(get = get_syncTime)) int64_t syncTime;

  __declspec(property(get = get_connectedPlayerCount)) int32_t connectedPlayerCount;

  __declspec(property(get = get_localState))::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* localState;

  /// @brief Method get_syncTime addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int64_t get_syncTime();

  /// @brief Method get_connectedPlayerCount addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_connectedPlayerCount();

  /// @brief Method get_localState addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* get_localState();

  /// @brief Method GetSyncStateForPlayer addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GetSyncStateForPlayer(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method GetSyncState addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GetSyncState(int32_t i);

  // Ctor Parameters [CppParam { name: "", ty: "IScoreSyncStateManager_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IScoreSyncStateManager_5(IScoreSyncStateManager_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IScoreSyncStateManager_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IScoreSyncStateManager_5(IScoreSyncStateManager_5 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::IScoreSyncStateManager_5, "", "IScoreSyncStateManager`5");
