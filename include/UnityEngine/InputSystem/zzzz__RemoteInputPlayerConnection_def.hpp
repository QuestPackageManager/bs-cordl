#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteInputPlayerConnection)
namespace System {
template <typename T> class IObserver_1;
}
namespace UnityEngine::Networking::PlayerConnection {
class IEditorPlayerConnection;
}
namespace UnityEngine::InputSystem {
struct __InputRemoting__Message;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem {
class __RemoteInputPlayerConnection__Subscriber;
}
namespace System {
class Exception;
}
namespace UnityEngine::InputSystem {
struct __InputRemoting__MessageType;
}
namespace UnityEngine::Networking::PlayerConnection {
class MessageEventArgs;
}
namespace System {
template <typename T> class IObservable_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class RemoteInputPlayerConnection;
}
namespace UnityEngine::InputSystem {
class __RemoteInputPlayerConnection__Subscriber;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::RemoteInputPlayerConnection);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber);
// Type: ::Subscriber
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6272))
// CS Name: ::RemoteInputPlayerConnection::Subscriber*
class CORDL_TYPE __RemoteInputPlayerConnection__Subscriber : public ::System::Object {
public:
  // Declarations
  /// @brief Field owner, offset 0x10, size 0x8
  __declspec(property(get = __get_owner, put = __set_owner))::UnityEngine::InputSystem::RemoteInputPlayerConnection* owner;

  /// @brief Field observer, offset 0x18, size 0x8
  __declspec(property(get = __get_observer, put = __set_observer))::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>* observer;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::UnityEngine::InputSystem::RemoteInputPlayerConnection*& __get_owner();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::RemoteInputPlayerConnection*> const& __get_owner() const;

  constexpr void __set_owner(::UnityEngine::InputSystem::RemoteInputPlayerConnection* value);

  constexpr ::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*& __get_observer();

  constexpr ::cordl_internals::to_const_pointer<::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*> const& __get_observer() const;

  constexpr void __set_observer(::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>* value);

  /// @brief Method Dispose, addr 0x2aa79e0, size 0x58, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber* New_ctor();

  /// @brief Method .ctor, addr 0x2aa7344, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__RemoteInputPlayerConnection__Subscriber", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RemoteInputPlayerConnection__Subscriber(__RemoteInputPlayerConnection__Subscriber&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RemoteInputPlayerConnection__Subscriber", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RemoteInputPlayerConnection__Subscriber(__RemoteInputPlayerConnection__Subscriber const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RemoteInputPlayerConnection__Subscriber();

public:
  /// @brief Field owner, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::RemoteInputPlayerConnection* ___owner;

  /// @brief Field observer, offset: 0x18, size: 0x8, def value: None
  ::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>* ___observer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber, ___owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber, ___observer) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::RemoteInputPlayerConnection
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210)), TypeDefinitionIndex(TypeDefinitionIndex(2406))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6273))
// CS Name: ::UnityEngine.InputSystem::RemoteInputPlayerConnection*
class CORDL_TYPE RemoteInputPlayerConnection : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using Subscriber = ::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber;

  /// @brief Field m_Connection, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Connection, put = __set_m_Connection))::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection* m_Connection;

  /// @brief Field m_Subscribers, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Subscribers, put = __set_m_Subscribers))::ArrayW<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*,
                                                                                     ::Array<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*>*> m_Subscribers;

  /// @brief Field m_ConnectedIds, offset 0x28, size 0x8
  __declspec(property(get = __get_m_ConnectedIds, put = __set_m_ConnectedIds))::ArrayW<int32_t, ::Array<int32_t>*> m_ConnectedIds;

  /// @brief Field kNewDeviceMsg, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_kNewDeviceMsg, put = setStaticF_kNewDeviceMsg))::System::Guid kNewDeviceMsg;

  /// @brief Field kNewLayoutMsg, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_kNewLayoutMsg, put = setStaticF_kNewLayoutMsg))::System::Guid kNewLayoutMsg;

  /// @brief Field kNewEventsMsg, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_kNewEventsMsg, put = setStaticF_kNewEventsMsg))::System::Guid kNewEventsMsg;

  /// @brief Field kRemoveDeviceMsg, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_kRemoveDeviceMsg, put = setStaticF_kRemoveDeviceMsg))::System::Guid kRemoveDeviceMsg;

  /// @brief Field kChangeUsagesMsg, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_kChangeUsagesMsg, put = setStaticF_kChangeUsagesMsg))::System::Guid kChangeUsagesMsg;

  /// @brief Field kStartSendingMsg, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_kStartSendingMsg, put = setStaticF_kStartSendingMsg))::System::Guid kStartSendingMsg;

  /// @brief Field kStopSendingMsg, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_kStopSendingMsg, put = setStaticF_kStopSendingMsg))::System::Guid kStopSendingMsg;

  /// @brief Convert operator to "::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>"
  constexpr operator ::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*() noexcept;

  /// @brief Convert operator to "::System::IObservable_1<::UnityEngine::InputSystem::__InputRemoting__Message>"
  constexpr operator ::System::IObservable_1<::UnityEngine::InputSystem::__InputRemoting__Message>*() noexcept;

  constexpr ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*& __get_m_Connection();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*> const& __get_m_Connection() const;

  constexpr void __set_m_Connection(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection* value);

  constexpr ::ArrayW<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*, ::Array<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*>*>& __get_m_Subscribers();

  constexpr ::ArrayW<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*, ::Array<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*>*> const&
  __get_m_Subscribers() const;

  constexpr void
  __set_m_Subscribers(::ArrayW<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*, ::Array<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_m_ConnectedIds();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_m_ConnectedIds() const;

  constexpr void __set_m_ConnectedIds(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_kNewDeviceMsg(::System::Guid value);

  static inline ::System::Guid getStaticF_kNewDeviceMsg();

  static inline void setStaticF_kNewLayoutMsg(::System::Guid value);

  static inline ::System::Guid getStaticF_kNewLayoutMsg();

  static inline void setStaticF_kNewEventsMsg(::System::Guid value);

  static inline ::System::Guid getStaticF_kNewEventsMsg();

  static inline void setStaticF_kRemoveDeviceMsg(::System::Guid value);

  static inline ::System::Guid getStaticF_kRemoveDeviceMsg();

  static inline void setStaticF_kChangeUsagesMsg(::System::Guid value);

  static inline ::System::Guid getStaticF_kChangeUsagesMsg();

  static inline void setStaticF_kStartSendingMsg(::System::Guid value);

  static inline ::System::Guid getStaticF_kStartSendingMsg();

  static inline void setStaticF_kStopSendingMsg(::System::Guid value);

  static inline ::System::Guid getStaticF_kStopSendingMsg();

  /// @brief Method Bind, addr 0x2aa69ec, size 0x6dc, virtual false, abstract: false, final false
  inline void Bind(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection* connection, bool isConnected);

  /// @brief Method Subscribe, addr 0x2aa71a4, size 0x1a0, virtual true, abstract: false, final true
  inline ::System::IDisposable* Subscribe(::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>* observer);

  /// @brief Method OnConnected, addr 0x2aa70c8, size 0xdc, virtual false, abstract: false, final false
  inline void OnConnected(int32_t id);

  /// @brief Method OnDisconnected, addr 0x2aa7458, size 0xdc, virtual false, abstract: false, final false
  inline void OnDisconnected(int32_t id);

  /// @brief Method OnNewDevice, addr 0x2aa7534, size 0xc, virtual false, abstract: false, final false
  inline void OnNewDevice(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args);

  /// @brief Method OnNewLayout, addr 0x2aa7540, size 0xc, virtual false, abstract: false, final false
  inline void OnNewLayout(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args);

  /// @brief Method OnNewEvents, addr 0x2aa754c, size 0xc, virtual false, abstract: false, final false
  inline void OnNewEvents(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args);

  /// @brief Method OnRemoveDevice, addr 0x2aa7558, size 0xc, virtual false, abstract: false, final false
  inline void OnRemoveDevice(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args);

  /// @brief Method OnChangeUsages, addr 0x2aa7564, size 0xc, virtual false, abstract: false, final false
  inline void OnChangeUsages(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args);

  /// @brief Method OnStartSending, addr 0x2aa7570, size 0xc, virtual false, abstract: false, final false
  inline void OnStartSending(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args);

  /// @brief Method OnStopSending, addr 0x2aa757c, size 0xc, virtual false, abstract: false, final false
  inline void OnStopSending(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args);

  /// @brief Method SendToSubscribers, addr 0x2aa734c, size 0x10c, virtual false, abstract: false, final false
  inline void SendToSubscribers(::UnityEngine::InputSystem::__InputRemoting__MessageType type, ::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args);

  /// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnNext, addr 0x2aa7588, size 0x264, virtual true, abstract: false, final true
  inline void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext(::UnityEngine::InputSystem::__InputRemoting__Message msg);

  /// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnError, addr 0x2aa77ec, size 0x4, virtual true, abstract: false, final true
  inline void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError(::System::Exception* error);

  /// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnCompleted, addr 0x2aa77f0, size 0x4, virtual true, abstract: false, final true
  inline void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted();

  static inline ::UnityEngine::InputSystem::RemoteInputPlayerConnection* New_ctor();

  /// @brief Method .ctor, addr 0x2aa77f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RemoteInputPlayerConnection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemoteInputPlayerConnection(RemoteInputPlayerConnection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemoteInputPlayerConnection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemoteInputPlayerConnection(RemoteInputPlayerConnection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemoteInputPlayerConnection();

public:
  /// @brief Field m_Connection, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection* ___m_Connection;

  /// @brief Field m_Subscribers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*, ::Array<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*>*> ___m_Subscribers;

  /// @brief Field m_ConnectedIds, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_ConnectedIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::RemoteInputPlayerConnection, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::RemoteInputPlayerConnection, ___m_Connection) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::RemoteInputPlayerConnection, ___m_Subscribers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::RemoteInputPlayerConnection, ___m_ConnectedIds) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::RemoteInputPlayerConnection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::RemoteInputPlayerConnection*, "UnityEngine.InputSystem", "RemoteInputPlayerConnection");
NEED_NO_BOX(::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*, "UnityEngine.InputSystem", "RemoteInputPlayerConnection/Subscriber");
