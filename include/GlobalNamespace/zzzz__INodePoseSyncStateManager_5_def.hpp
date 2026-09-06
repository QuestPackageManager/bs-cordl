#pragma once
// IWYU pragma private; include "GlobalNamespace/INodePoseSyncStateManager_5.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IEquatableByReference_1_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "GlobalNamespace/zzzz__IStateTable_3_def.hpp"
#include "GlobalNamespace/zzzz__ISyncStateDeltaSerializable_1_def.hpp"
#include "GlobalNamespace/zzzz__ISyncStateSerializable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(INodePoseSyncStateManager_5)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState>
  requires(::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*> &&
           ::cordl_internals::type_constraint<TStateTable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IEquatableByReference_1<TStateTable>*> && ::cordl_internals::value_type_constraint<TStateTable> &&
           ::cordl_internals::default_constructor_constraint<TStateTable> && ::cordl_internals::type_constraint<TType, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<TType> &&
           ::cordl_internals::default_constructor_constraint<TType> && ::cordl_internals::value_type_constraint<TState> && ::cordl_internals::default_constructor_constraint<TState>)
class LocalMultiplayerSyncState_3;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState>
  requires(::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*> &&
           ::cordl_internals::type_constraint<TStateTable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IEquatableByReference_1<TStateTable>*> && ::cordl_internals::value_type_constraint<TStateTable> &&
           ::cordl_internals::default_constructor_constraint<TStateTable> && ::cordl_internals::type_constraint<TType, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<TType> &&
           ::cordl_internals::default_constructor_constraint<TType> && ::cordl_internals::value_type_constraint<TState> && ::cordl_internals::default_constructor_constraint<TState>)
class MultiplayerSyncState_3;
}
// Forward declare root types
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
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::INodePoseSyncStateManager_5);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::INodePoseSyncStateManager_5, "", "INodePoseSyncStateManager`5");
// Dependencies IEquatableByReference`1<T>, IPoolablePacket, IStateTable`3<TStateTable, TType, TState>, ISyncStateDeltaSerializable`1<T>, ISyncStateSerializable`1<T>,
// LiteNetLib.Utils.INetSerializable, System.IConvertible
namespace GlobalNamespace {
// cpp template
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
// Is value type: false
// CS Name: INodePoseSyncStateManager`5<TStateTable,TType,TState,TSerializable,TDeltaSerializable>
class CORDL_TYPE INodePoseSyncStateManager_5 {
public:
  // Declarations
  __declspec(property(get = get_connectedPlayerCount)) int32_t connectedPlayerCount;

  __declspec(property(get = get_localState)) ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* localState;

  __declspec(property(get = get_syncTime)) int64_t syncTime;

  /// @brief Method ClearBufferedStates, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ClearBufferedStates();

  /// @brief Method GetSyncState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GetSyncState(int32_t i);

  /// @brief Method GetSyncStateForPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GetSyncStateForPlayer(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method get_connectedPlayerCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_connectedPlayerCount();

  /// @brief Method get_localState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* get_localState();

  /// @brief Method get_syncTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t get_syncTime();

  // Ctor Parameters [CppParam { name: "", ty: "INodePoseSyncStateManager_5", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INodePoseSyncStateManager_5(INodePoseSyncStateManager_5const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21578 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
