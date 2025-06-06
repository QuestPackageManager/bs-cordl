#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerSyncStateManager_5.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerSyncStateManager_5)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
template <typename T> class IPacketPool_1;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class LocalMultiplayerSyncState_3;
}
namespace GlobalNamespace {
struct MultiplayerSessionManager_MessageType;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable> class MultiplayerSyncStateManager_5___c;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class MultiplayerSyncState_3;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class RemoteMultiplayerSyncState_3;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable> class MultiplayerSyncStateManager_5;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable> class MultiplayerSyncStateManager_5___c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::MultiplayerSyncStateManager_5);
MARK_GEN_REF_PTR_T(::GlobalNamespace::MultiplayerSyncStateManager_5___c);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
// Is value type: false
// CS Name: MultiplayerSyncStateManager`5/<>c<TStateTable,TType,TState,TSerializable,TDeltaSerializable>
class CORDL_TYPE MultiplayerSyncStateManager_5___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>* __9;

  /// @brief Field <>9__37_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__37_0, put = setStaticF___9__37_0)) ::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int32_t>* __9__37_0;

  static inline ::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>* New_ctor();

  /// @brief Method <HandlePlayerConnected>b__37_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t _HandlePlayerConnected_b__37_0(::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>* s);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int32_t>* getStaticF___9__37_0();

  static inline void setStaticF___9(::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>* value);

  static inline void setStaticF___9__37_0(::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSyncStateManager_5___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncStateManager_5___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerSyncStateManager_5___c(MultiplayerSyncStateManager_5___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncStateManager_5___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerSyncStateManager_5___c(MultiplayerSyncStateManager_5___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17361 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// cpp template
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
// Is value type: false
// CS Name: MultiplayerSyncStateManager`5<TStateTable,TType,TState,TSerializable,TDeltaSerializable>
class CORDL_TYPE MultiplayerSyncStateManager_5 : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>;

  /// @brief Field _connectedPlayerStates, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get__connectedPlayerStates,
      put = __cordl_internal_set__connectedPlayerStates)) ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* _connectedPlayerStates;

  /// @brief Field _disconnectedPlayerStates, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__disconnectedPlayerStates,
                      put = __cordl_internal_set__disconnectedPlayerStates)) ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>*
      _disconnectedPlayerStates;

  /// @brief Field _localState, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__localState, put = __cordl_internal_set__localState)) ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* _localState;

  /// @brief Field _multiplayerSessionManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  __declspec(property(get = get_connectedPlayerCount)) int32_t connectedPlayerCount;

  __declspec(property(get = get_deltaMessageType)) ::GlobalNamespace::MultiplayerSessionManager_MessageType deltaMessageType;

  __declspec(property(get = get_deltaSerializablePool)) ::GlobalNamespace::IPacketPool_1<TDeltaSerializable>* deltaSerializablePool;

  __declspec(property(get = get_deltaUpdateFrequencyMs)) int64_t deltaUpdateFrequencyMs;

  __declspec(property(get = get_disconnectedPlayerCount)) int32_t disconnectedPlayerCount;

  __declspec(property(get = get_fullStateUpdateFrequencyMs)) int64_t fullStateUpdateFrequencyMs;

  __declspec(property(get = get_localBufferSize)) int32_t localBufferSize;

  __declspec(property(get = get_localState)) ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* localState;

  __declspec(property(get = get_messageType)) ::GlobalNamespace::MultiplayerSessionManager_MessageType messageType;

  __declspec(property(get = get_multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;

  __declspec(property(get = get_remoteBufferSize)) int32_t remoteBufferSize;

  __declspec(property(get = get_serializablePool)) ::GlobalNamespace::IPacketPool_1<TSerializable>* serializablePool;

  __declspec(property(get = get_syncTime)) int64_t syncTime;

  /// @brief Method ClearBufferedStates, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void ClearBufferedStates();

  /// @brief Method GetDisconnectedSyncState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GetDisconnectedSyncState(int32_t i);

  /// @brief Method GetSyncState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GetSyncState(int32_t i);

  /// @brief Method GetSyncStateForPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GetSyncStateForPlayer(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandlePlayerConnected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandlePlayerConnected(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandlePlayerDisconnected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandleSyncDeltaPacket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleSyncDeltaPacket(TDeltaSerializable packet, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandleSyncPacket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleSyncPacket(TSerializable packet, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method Interpolate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TState Interpolate(TState a, int64_t timeA, TState b, int64_t timeB, int64_t time);

  /// @brief Method LateUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>* New_ctor();

  /// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Smooth, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TState Smooth(TState a, TState b, float_t smoooth);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryCreateLocalState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void TryCreateLocalState();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* const& __cordl_internal_get__connectedPlayerStates() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>*& __cordl_internal_get__connectedPlayerStates();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* const& __cordl_internal_get__disconnectedPlayerStates() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>*& __cordl_internal_get__disconnectedPlayerStates();

  constexpr ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* const& __cordl_internal_get__localState() const;

  constexpr ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*& __cordl_internal_get__localState();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr void __cordl_internal_set__connectedPlayerStates(::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* value);

  constexpr void __cordl_internal_set__disconnectedPlayerStates(::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* value);

  constexpr void __cordl_internal_set__localState(::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_connectedPlayerCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_connectedPlayerCount();

  /// @brief Method get_deltaMessageType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerSessionManager_MessageType get_deltaMessageType();

  /// @brief Method get_deltaSerializablePool, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IPacketPool_1<TDeltaSerializable>* get_deltaSerializablePool();

  /// @brief Method get_deltaUpdateFrequencyMs, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int64_t get_deltaUpdateFrequencyMs();

  /// @brief Method get_disconnectedPlayerCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_disconnectedPlayerCount();

  /// @brief Method get_fullStateUpdateFrequencyMs, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int64_t get_fullStateUpdateFrequencyMs();

  /// @brief Method get_localBufferSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_localBufferSize();

  /// @brief Method get_localState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* get_localState();

  /// @brief Method get_messageType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerSessionManager_MessageType get_messageType();

  /// @brief Method get_multiplayerSessionManager, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IMultiplayerSessionManager* get_multiplayerSessionManager();

  /// @brief Method get_remoteBufferSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_remoteBufferSize();

  /// @brief Method get_serializablePool, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IPacketPool_1<TSerializable>* get_serializablePool();

  /// @brief Method get_syncTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int64_t get_syncTime();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSyncStateManager_5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncStateManager_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerSyncStateManager_5(MultiplayerSyncStateManager_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncStateManager_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerSyncStateManager_5(MultiplayerSyncStateManager_5 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17362 };

  /// @brief Field _multiplayerSessionManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _localState, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* ____localState;

  /// @brief Field _connectedPlayerStates, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* ____connectedPlayerStates;

  /// @brief Field _disconnectedPlayerStates, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* ____disconnectedPlayerStates;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MultiplayerSyncStateManager_5, "", "MultiplayerSyncStateManager`5");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MultiplayerSyncStateManager_5___c, "", "MultiplayerSyncStateManager`5/<>c");
