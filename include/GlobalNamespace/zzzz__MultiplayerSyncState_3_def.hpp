#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerSyncState_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerSyncState_3)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class StateBuffer_3;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class MultiplayerSyncState_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::MultiplayerSyncState_3);
// Type: ::MultiplayerSyncState`3
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TStateTable, typename TType, typename TState>
// Is value type: false
// CS Name: ::MultiplayerSyncState`3<TStateTable,TType,TState>*
class CORDL_TYPE MultiplayerSyncState_3 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_player))::GlobalNamespace::IConnectedPlayer* player;

  __declspec(property(get = get_stateBuffer))::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>* stateBuffer;

  /// @brief Method ClearBufferedStates, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ClearBufferedStates();

  /// @brief Method GetLatestState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TState GetLatestState(TType type);

  /// @brief Method GetLatestTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int64_t GetLatestTime();

  /// @brief Method GetState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TState GetState(TType type, int64_t time);

  static inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_player, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::IConnectedPlayer* get_player();

  /// @brief Method get_stateBuffer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>* get_stateBuffer();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSyncState_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncState_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerSyncState_3(MultiplayerSyncState_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncState_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerSyncState_3(MultiplayerSyncState_3 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MultiplayerSyncState_3, "", "MultiplayerSyncState`3");
