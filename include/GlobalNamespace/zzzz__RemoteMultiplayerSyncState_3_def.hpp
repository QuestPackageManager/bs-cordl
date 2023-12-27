#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteMultiplayerSyncState_3)
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class __StateBuffer_3__InterpolationDelegate;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class StateBuffer_3;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class __StateBuffer_3__SmoothingDelegate;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class RemoteStateBuffer_3;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class RemoteMultiplayerSyncState_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::RemoteMultiplayerSyncState_3);
// Type: ::RemoteMultiplayerSyncState`3
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TStateTable, typename TType, typename TState>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14947), inst: 3836 }), TypeDefinitionIndex(TypeDefinitionIndex(14947))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14949))
// CS Name: ::RemoteMultiplayerSyncState`3<TStateTable,TType,TState>*
class CORDL_TYPE RemoteMultiplayerSyncState_3 : public ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState> {
public:
  // Declarations
  /// @brief Field _player, offset 0x10, size 0x8
  __declspec(property(get = __get__player, put = __set__player))::GlobalNamespace::IConnectedPlayer* _player;

  /// @brief Field _stateBuffer, offset 0x18, size 0x8
  __declspec(property(get = __get__stateBuffer, put = __set__stateBuffer))::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>* _stateBuffer;

  __declspec(property(get = get_stateBuffer))::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>* stateBuffer;

  __declspec(property(get = get_player))::GlobalNamespace::IConnectedPlayer* player;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __get__player();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __get__player() const;

  constexpr void __set__player(::GlobalNamespace::IConnectedPlayer* value);

  constexpr ::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>*& __get__stateBuffer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>*> const& __get__stateBuffer() const;

  constexpr void __set__stateBuffer(::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>* value);

  /// @brief Method get_stateBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>* get_stateBuffer();

  /// @brief Method get_player addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::IConnectedPlayer* get_player();

  /// @brief Method UpdateState addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void UpdateState(T serializable);

  /// @brief Method UpdateDelta addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void UpdateDelta(T serializable);

  static inline ::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*
  New_ctor(::GlobalNamespace::IConnectedPlayer* player, int32_t size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>* interpolator,
           ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>* smoother);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::GlobalNamespace::IConnectedPlayer* player, int32_t size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                    ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>* smoother);

  // Ctor Parameters [CppParam { name: "", ty: "RemoteMultiplayerSyncState_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemoteMultiplayerSyncState_3(RemoteMultiplayerSyncState_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemoteMultiplayerSyncState_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemoteMultiplayerSyncState_3(RemoteMultiplayerSyncState_3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemoteMultiplayerSyncState_3();

public:
  /// @brief Field _player, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____player;

  /// @brief Field _stateBuffer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>* ____stateBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RemoteMultiplayerSyncState_3, "", "RemoteMultiplayerSyncState`3");
