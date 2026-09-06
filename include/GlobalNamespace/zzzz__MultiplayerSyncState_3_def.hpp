#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerSyncState_3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IEquatableByReference_1_def.hpp"
#include "GlobalNamespace/zzzz__IStateTable_3_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerSyncState_3)
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
class MultiplayerSyncState_3;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::MultiplayerSyncState_3);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::MultiplayerSyncState_3, "", "MultiplayerSyncState`3");
// Dependencies IEquatableByReference`1<T>, IStateTable`3<TStateTable, TType, TState>, LiteNetLib.Utils.INetSerializable, System.IConvertible, System.Object
namespace GlobalNamespace {
// cpp template
template <typename TStateTable, typename TType, typename TState>
  requires(::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*> &&
           ::cordl_internals::type_constraint<TStateTable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IEquatableByReference_1<TStateTable>*> && ::cordl_internals::value_type_constraint<TStateTable> &&
           ::cordl_internals::default_constructor_constraint<TStateTable> && ::cordl_internals::type_constraint<TType, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<TType> &&
           ::cordl_internals::default_constructor_constraint<TType> && ::cordl_internals::value_type_constraint<TState> && ::cordl_internals::default_constructor_constraint<TState>)
// Is value type: false
// CS Name: MultiplayerSyncState`3<TStateTable,TType,TState>
class CORDL_TYPE MultiplayerSyncState_3 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_player)) ::GlobalNamespace::IBeatSaberConnectedPlayer* player;

  __declspec(property(get = get_stateBuffer)) ::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>* stateBuffer;

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
  inline ::GlobalNamespace::IBeatSaberConnectedPlayer* get_player();

  /// @brief Method get_stateBuffer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>* get_stateBuffer();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSyncState_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncState_3", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerSyncState_3(MultiplayerSyncState_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncState_3", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerSyncState_3(MultiplayerSyncState_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21585 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
