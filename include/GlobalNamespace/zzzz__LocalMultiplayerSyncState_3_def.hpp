#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalMultiplayerSyncState_3)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
template <typename T> class IPacketPool_1;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class LocalStateBuffer_3;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class StateBuffer_3;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class __StateBuffer_3__InterpolationDelegate;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class __StateBuffer_3__SmoothingDelegate;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class LocalMultiplayerSyncState_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::LocalMultiplayerSyncState_3);
// Type: ::LocalMultiplayerSyncState`3
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TStateTable, typename TType, typename TState>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(14947)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14947), inst: 3832 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14948))
// CS Name: ::LocalMultiplayerSyncState`3<TStateTable,TType,TState>*
class CORDL_TYPE LocalMultiplayerSyncState_3 : public ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState> {
public:
  // Declarations
  /// @brief Field _player, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__player, put = __cordl_internal_set__player))::GlobalNamespace::IConnectedPlayer* _player;

  /// @brief Field _stateBuffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__stateBuffer, put = __cordl_internal_set__stateBuffer))::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>* _stateBuffer;

  __declspec(property(get = get_stateBuffer))::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>* stateBuffer;

  __declspec(property(get = get_player))::GlobalNamespace::IConnectedPlayer* player;

  __declspec(property(get = get_Item, put = set_Item)) TState Item[];

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__player();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __cordl_internal_get__player() const;

  constexpr void __cordl_internal_set__player(::GlobalNamespace::IConnectedPlayer* value);

  constexpr ::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*& __cordl_internal_get__stateBuffer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*> const& __cordl_internal_get__stateBuffer() const;

  constexpr void __cordl_internal_set__stateBuffer(::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>* value);

  /// @brief Method get_stateBuffer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>* get_stateBuffer();

  /// @brief Method get_player, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IConnectedPlayer* get_player();

  static inline ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*
  New_ctor(::GlobalNamespace::IConnectedPlayer* player, int64_t fullStateUpdateFrequency, int64_t deltaUpdateFrequency, int32_t size,
           ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>* interpolator,
           ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>* smoother);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IConnectedPlayer* player, int64_t fullStateUpdateFrequency, int64_t deltaUpdateFrequency, int32_t size,
                    ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                    ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>* smoother);

  /// @brief Method TryGetSerializedState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGetSerializedState(::GlobalNamespace::IPacketPool_1<T>* pool, ByRef<T> serializable);

  /// @brief Method TryGetSerializedStateDelta, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGetSerializedStateDelta(::GlobalNamespace::IPacketPool_1<T>* pool, ByRef<T> serializable);

  /// @brief Method SetDirty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetDirty();

  /// @brief Method SetCurrentTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetCurrentTime(int64_t time);

  /// @brief Method SetState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetState(TType type, TState state);

  /// @brief Method GetState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TState GetState(TType type);

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TState get_Item(TType t);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Item(TType t, TState value);

  // Ctor Parameters [CppParam { name: "", ty: "LocalMultiplayerSyncState_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalMultiplayerSyncState_3(LocalMultiplayerSyncState_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalMultiplayerSyncState_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalMultiplayerSyncState_3(LocalMultiplayerSyncState_3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalMultiplayerSyncState_3();

public:
  /// @brief Field _player, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____player;

  /// @brief Field _stateBuffer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>* ____stateBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::LocalMultiplayerSyncState_3, "", "LocalMultiplayerSyncState`3");
