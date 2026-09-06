#pragma once
// IWYU pragma private; include "GlobalNamespace/RemoteMultiplayerSyncState_3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IEquatableByReference_1_def.hpp"
#include "GlobalNamespace/zzzz__IStateTable_3_def.hpp"
#include "GlobalNamespace/zzzz__ISyncStateDeltaSerializable_1_def.hpp"
#include "GlobalNamespace/zzzz__ISyncStateSerializable_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteMultiplayerSyncState_3)
namespace GlobalNamespace {
class IBeatSaberConnectedPlayer;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState>
  requires(::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*> &&
           ::cordl_internals::type_constraint<TStateTable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IEquatableByReference_1<TStateTable>*> && ::cordl_internals::value_type_constraint<TStateTable> &&
           ::cordl_internals::default_constructor_constraint<TStateTable> && ::cordl_internals::type_constraint<TType, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<TType> &&
           ::cordl_internals::default_constructor_constraint<TType> && ::cordl_internals::value_type_constraint<TState> && ::cordl_internals::default_constructor_constraint<TState>)
class RemoteStateBuffer_3;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState>
  requires(::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*> &&
           ::cordl_internals::type_constraint<TStateTable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IEquatableByReference_1<TStateTable>*> && ::cordl_internals::value_type_constraint<TStateTable> &&
           ::cordl_internals::default_constructor_constraint<TStateTable> && ::cordl_internals::type_constraint<TType, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<TType> &&
           ::cordl_internals::default_constructor_constraint<TType> && ::cordl_internals::value_type_constraint<TState> && ::cordl_internals::default_constructor_constraint<TState>)
class StateBuffer_3_InterpolationDelegate;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState>
  requires(::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*> &&
           ::cordl_internals::type_constraint<TStateTable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IEquatableByReference_1<TStateTable>*> && ::cordl_internals::value_type_constraint<TStateTable> &&
           ::cordl_internals::default_constructor_constraint<TStateTable> && ::cordl_internals::type_constraint<TType, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<TType> &&
           ::cordl_internals::default_constructor_constraint<TType> && ::cordl_internals::value_type_constraint<TState> && ::cordl_internals::default_constructor_constraint<TState>)
class StateBuffer_3_SmoothingDelegate;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState>
  requires(::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*> &&
           ::cordl_internals::type_constraint<TStateTable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IEquatableByReference_1<TStateTable>*> && ::cordl_internals::value_type_constraint<TStateTable> &&
           ::cordl_internals::default_constructor_constraint<TStateTable> && ::cordl_internals::type_constraint<TType, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<TType> &&
           ::cordl_internals::default_constructor_constraint<TType> && ::cordl_internals::value_type_constraint<TState> && ::cordl_internals::default_constructor_constraint<TState>)
class StateBuffer_3;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState>
  requires(::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*> &&
           ::cordl_internals::type_constraint<TStateTable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IEquatableByReference_1<TStateTable>*> && ::cordl_internals::value_type_constraint<TStateTable> &&
           ::cordl_internals::default_constructor_constraint<TStateTable> && ::cordl_internals::type_constraint<TType, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<TType> &&
           ::cordl_internals::default_constructor_constraint<TType> && ::cordl_internals::value_type_constraint<TState> && ::cordl_internals::default_constructor_constraint<TState>)
class RemoteMultiplayerSyncState_3;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::RemoteMultiplayerSyncState_3);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::RemoteMultiplayerSyncState_3, "", "RemoteMultiplayerSyncState`3");
// Dependencies IEquatableByReference`1<T>, IStateTable`3<TStateTable, TType, TState>, ISyncStateDeltaSerializable`1<T>, ISyncStateSerializable`1<T>, LiteNetLib.Utils.INetSerializable,
// MultiplayerSyncState`3<TStateTable, TType, TState>, System.IConvertible
namespace GlobalNamespace {
// cpp template
template <typename TStateTable, typename TType, typename TState>
  requires(::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*> &&
           ::cordl_internals::type_constraint<TStateTable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IEquatableByReference_1<TStateTable>*> && ::cordl_internals::value_type_constraint<TStateTable> &&
           ::cordl_internals::default_constructor_constraint<TStateTable> && ::cordl_internals::type_constraint<TType, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<TType> &&
           ::cordl_internals::default_constructor_constraint<TType> && ::cordl_internals::value_type_constraint<TState> && ::cordl_internals::default_constructor_constraint<TState>)
// Is value type: false
// CS Name: RemoteMultiplayerSyncState`3<TStateTable,TType,TState>
class CORDL_TYPE RemoteMultiplayerSyncState_3 : public ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState> {
public:
  // Declarations
  /// @brief Field _player, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__player, put = __cordl_internal_set__player)) ::GlobalNamespace::IBeatSaberConnectedPlayer* _player;

  /// @brief Field _stateBuffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__stateBuffer, put = __cordl_internal_set__stateBuffer)) ::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>* _stateBuffer;

  __declspec(property(get = get_player)) ::GlobalNamespace::IBeatSaberConnectedPlayer* player;

  __declspec(property(get = get_stateBuffer)) ::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>* stateBuffer;

  static inline ::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>* New_ctor(::GlobalNamespace::IBeatSaberConnectedPlayer* player, int32_t size,
                                                                                                      ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                                                                                                      ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>* smoother);

  /// @brief Method UpdateDelta, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::ISyncStateDeltaSerializable_1<TStateTable>*>)
  inline void UpdateDelta(T serializable);

  /// @brief Method UpdateState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::ISyncStateSerializable_1<TStateTable>*>)
  inline void UpdateState(T serializable);

  constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& __cordl_internal_get__player() const;

  constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& __cordl_internal_get__player();

  constexpr ::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>* const& __cordl_internal_get__stateBuffer() const;

  constexpr ::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>*& __cordl_internal_get__stateBuffer();

  constexpr void __cordl_internal_set__player(::GlobalNamespace::IBeatSaberConnectedPlayer* value);

  constexpr void __cordl_internal_set__stateBuffer(::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatSaberConnectedPlayer* player, int32_t size, ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                    ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>* smoother);

  /// @brief Method get_player, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IBeatSaberConnectedPlayer* get_player();

  /// @brief Method get_stateBuffer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>* get_stateBuffer();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemoteMultiplayerSyncState_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RemoteMultiplayerSyncState_3", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemoteMultiplayerSyncState_3(RemoteMultiplayerSyncState_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemoteMultiplayerSyncState_3", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemoteMultiplayerSyncState_3(RemoteMultiplayerSyncState_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21587 };

  /// @brief Field _player, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberConnectedPlayer* ____player;

  /// @brief Field _stateBuffer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>* ____stateBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
