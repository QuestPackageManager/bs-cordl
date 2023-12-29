#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerSyncStateManager_5)
namespace GlobalNamespace {
struct __MultiplayerSessionManager__MessageType;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable> class __MultiplayerSyncStateManager_5____c;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class MultiplayerSyncState_3;
}
namespace GlobalNamespace {
template <typename T> class IPacketPool_1;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class LocalMultiplayerSyncState_3;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class RemoteMultiplayerSyncState_3;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable> class MultiplayerSyncStateManager_5;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable> class __MultiplayerSyncStateManager_5____c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::MultiplayerSyncStateManager_5);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__MultiplayerSyncStateManager_5____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4563))
// CS Name: ::MultiplayerSyncStateManager`5::<>c<TStateTable,TType,TState,TSerializable,TDeltaSerializable>*
class CORDL_TYPE __MultiplayerSyncStateManager_5____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__MultiplayerSyncStateManager_5____c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>* __9;

  /// @brief Field <>9__37_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__37_0, put = setStaticF___9__37_0))::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int32_t>* __9__37_0;

  static inline void setStaticF___9(::GlobalNamespace::__MultiplayerSyncStateManager_5____c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>* value);

  static inline ::GlobalNamespace::__MultiplayerSyncStateManager_5____c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>* getStaticF___9();

  static inline void setStaticF___9__37_0(::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int32_t>* value);

  static inline ::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int32_t>* getStaticF___9__37_0();

  static inline ::GlobalNamespace::__MultiplayerSyncStateManager_5____c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <HandlePlayerConnected>b__37_0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline int32_t _HandlePlayerConnected_b__37_0(::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>* s);

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerSyncStateManager_5____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerSyncStateManager_5____c(__MultiplayerSyncStateManager_5____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerSyncStateManager_5____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerSyncStateManager_5____c(__MultiplayerSyncStateManager_5____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerSyncStateManager_5____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::MultiplayerSyncStateManager`5
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4564))
// CS Name: ::MultiplayerSyncStateManager`5<TStateTable,TType,TState,TSerializable,TDeltaSerializable>*
class CORDL_TYPE MultiplayerSyncStateManager_5 : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__MultiplayerSyncStateManager_5____c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>;

  /// @brief Field _multiplayerSessionManager, offset 0x18, size 0x8
  __declspec(property(get = __get__multiplayerSessionManager, put = __set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _localState, offset 0x20, size 0x8
  __declspec(property(get = __get__localState, put = __set__localState))::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* _localState;

  /// @brief Field _connectedPlayerStates, offset 0x28, size 0x8
  __declspec(property(get = __get__connectedPlayerStates,
                      put = __set__connectedPlayerStates))::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* _connectedPlayerStates;

  /// @brief Field _disconnectedPlayerStates, offset 0x30, size 0x8
  __declspec(
      property(get = __get__disconnectedPlayerStates,
               put = __set__disconnectedPlayerStates))::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* _disconnectedPlayerStates;

  __declspec(property(get = get_multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;

  __declspec(property(get = get_localState))::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* localState;

  __declspec(property(get = get_connectedPlayerCount)) int32_t connectedPlayerCount;

  __declspec(property(get = get_disconnectedPlayerCount)) int32_t disconnectedPlayerCount;

  __declspec(property(get = get_syncTime)) float_t syncTime;

  __declspec(property(get = get_deltaUpdateFrequency)) float_t deltaUpdateFrequency;

  __declspec(property(get = get_fullStateUpdateFrequency)) float_t fullStateUpdateFrequency;

  __declspec(property(get = get_localBufferSize)) int32_t localBufferSize;

  __declspec(property(get = get_remoteBufferSize)) int32_t remoteBufferSize;

  __declspec(property(get = get_serializablePool))::GlobalNamespace::IPacketPool_1<TSerializable>* serializablePool;

  __declspec(property(get = get_deltaSerializablePool))::GlobalNamespace::IPacketPool_1<TDeltaSerializable>* deltaSerializablePool;

  __declspec(property(get = get_messageType))::GlobalNamespace::__MultiplayerSessionManager__MessageType messageType;

  __declspec(property(get = get_deltaMessageType))::GlobalNamespace::__MultiplayerSessionManager__MessageType deltaMessageType;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get__multiplayerSessionManager() const;

  constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*& __get__localState();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*> const& __get__localState() const;

  constexpr void __set__localState(::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>*& __get__connectedPlayerStates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>*> const&
  __get__connectedPlayerStates() const;

  constexpr void __set__connectedPlayerStates(::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>*& __get__disconnectedPlayerStates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>*> const&
  __get__disconnectedPlayerStates() const;

  constexpr void __set__disconnectedPlayerStates(::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* value);

  /// @brief Method get_multiplayerSessionManager addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::GlobalNamespace::IMultiplayerSessionManager* get_multiplayerSessionManager();

  /// @brief Method get_localState addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* get_localState();

  /// @brief Method get_connectedPlayerCount addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t get_connectedPlayerCount();

  /// @brief Method get_disconnectedPlayerCount addr 0x0 size 0xffffffffffffffff virtual false final false
  inline int32_t get_disconnectedPlayerCount();

  /// @brief Method get_syncTime addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t get_syncTime();

  /// @brief Method get_deltaUpdateFrequency addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t get_deltaUpdateFrequency();

  /// @brief Method get_fullStateUpdateFrequency addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t get_fullStateUpdateFrequency();

  /// @brief Method get_localBufferSize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_localBufferSize();

  /// @brief Method get_remoteBufferSize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_remoteBufferSize();

  /// @brief Method get_serializablePool addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::IPacketPool_1<TSerializable>* get_serializablePool();

  /// @brief Method get_deltaSerializablePool addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::IPacketPool_1<TDeltaSerializable>* get_deltaSerializablePool();

  /// @brief Method get_messageType addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::__MultiplayerSessionManager__MessageType get_messageType();

  /// @brief Method get_deltaMessageType addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::__MultiplayerSessionManager__MessageType get_deltaMessageType();

  /// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Start();

  /// @brief Method LateUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void LateUpdate();

  /// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void OnDestroy();

  /// @brief Method Interpolate addr 0x0 size 0xffffffffffffffff virtual true final false
  inline TState Interpolate(TState a, float_t timeA, TState b, float_t timeB, float_t time);

  /// @brief Method Smooth addr 0x0 size 0xffffffffffffffff virtual true final false
  inline TState Smooth(TState a, TState b, float_t smoooth);

  /// @brief Method ClearBufferedStates addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void ClearBufferedStates();

  /// @brief Method TryCreateLocalState addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void TryCreateLocalState();

  /// @brief Method HandlePlayerConnected addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void HandlePlayerConnected(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandlePlayerDisconnected addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandleSyncPacket addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void HandleSyncPacket(TSerializable packet, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandleSyncDeltaPacket addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void HandleSyncDeltaPacket(TDeltaSerializable packet, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method GetSyncState addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GetSyncState(int32_t i);

  /// @brief Method GetSyncStateForPlayer addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GetSyncStateForPlayer(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method GetDisconnectedSyncState addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GetDisconnectedSyncState(int32_t i);

  static inline ::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncStateManager_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerSyncStateManager_5(MultiplayerSyncStateManager_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncStateManager_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerSyncStateManager_5(MultiplayerSyncStateManager_5 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSyncStateManager_5();

public:
  /// @brief Field _multiplayerSessionManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _localState, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* ____localState;

  /// @brief Field _connectedPlayerStates, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* ____connectedPlayerStates;

  /// @brief Field _disconnectedPlayerStates, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* ____disconnectedPlayerStates;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MultiplayerSyncStateManager_5, "", "MultiplayerSyncStateManager`5");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__MultiplayerSyncStateManager_5____c, "", "MultiplayerSyncStateManager`5/<>c");
