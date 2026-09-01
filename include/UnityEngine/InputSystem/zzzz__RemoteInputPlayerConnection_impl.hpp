#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\RemoteInputPlayerConnection.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__RemoteInputPlayerConnection_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_def.hpp"
#include "UnityEngine/InputSystem/zzzz__RemoteInputPlayerConnection_def.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__IEditorPlayerConnection_def.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__MessageEventArgs_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber::*)()>(
    &::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65657dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber::*)()>(
    &::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65650f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::InputSystem::RemoteInputPlayerConnection>& UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber::__cordl_internal_get_owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owner;
}
constexpr ::UnityW<::UnityEngine::InputSystem::RemoteInputPlayerConnection> const& UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber::__cordl_internal_get_owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owner;
}
constexpr void UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber::__cordl_internal_set_owner(::UnityW<::UnityEngine::InputSystem::RemoteInputPlayerConnection> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___owner = value;
}
constexpr ::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>*& UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber::__cordl_internal_get_observer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___observer;
}
constexpr ::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>* const& UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber::__cordl_internal_get_observer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___observer;
}
constexpr void UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber::__cordl_internal_set_observer(::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___observer = value;
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber* UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber::RemoteInputPlayerConnection_Subscriber() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*, bool)>(
    &::UnityEngine::InputSystem::RemoteInputPlayerConnection::Bind)> {
  constexpr static std::size_t size = 0x724;
  constexpr static std::size_t addrs = 0x6564750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                                             { "Bind", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.Subscribe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IDisposable* (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>*)>(
        &::UnityEngine::InputSystem::RemoteInputPlayerConnection::Subscribe)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6564f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                                             { "Subscribe", {}, { ::i2c::type_of<::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.OnConnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(int32_t)>(
    &::UnityEngine::InputSystem::RemoteInputPlayerConnection::OnConnected)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6564e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(), { "OnConnected", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.OnDisconnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(int32_t)>(
    &::UnityEngine::InputSystem::RemoteInputPlayerConnection::OnDisconnected)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6565204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(), { "OnDisconnected", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.OnNewDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*)>(
    &::UnityEngine::InputSystem::RemoteInputPlayerConnection::OnNewDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65652e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                                             { "OnNewDevice", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.OnNewLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*)>(
    &::UnityEngine::InputSystem::RemoteInputPlayerConnection::OnNewLayout)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65652ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                                             { "OnNewLayout", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.OnNewEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*)>(
    &::UnityEngine::InputSystem::RemoteInputPlayerConnection::OnNewEvents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65652f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                                             { "OnNewEvents", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.OnRemoveDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*)>(
    &::UnityEngine::InputSystem::RemoteInputPlayerConnection::OnRemoveDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6565304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                                             { "OnRemoveDevice", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.OnChangeUsages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*)>(
    &::UnityEngine::InputSystem::RemoteInputPlayerConnection::OnChangeUsages)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6565310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                                             { "OnChangeUsages", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.OnStartSending
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*)>(
    &::UnityEngine::InputSystem::RemoteInputPlayerConnection::OnStartSending)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x656531c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                                             { "OnStartSending", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.OnStopSending
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*)>(
    &::UnityEngine::InputSystem::RemoteInputPlayerConnection::OnStopSending)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6565328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                                             { "OnStopSending", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.SendToSubscribers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::UnityEngine::InputSystem::InputRemoting_MessageType,
                                                                                                                         ::UnityEngine::Networking::PlayerConnection::MessageEventArgs*)>(
    &::UnityEngine::InputSystem::RemoteInputPlayerConnection::SendToSubscribers)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x65650f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                            { "SendToSubscribers",
                              {},
                              { ::i2c::type_of<::UnityEngine::InputSystem::InputRemoting_MessageType>(), ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::UnityEngine::InputSystem::InputRemoting_Message)>(
    &::UnityEngine::InputSystem::RemoteInputPlayerConnection::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x6565334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                         { "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnNext", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputRemoting_Message>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::System::Exception*)>(
    &::UnityEngine::InputSystem::RemoteInputPlayerConnection::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65655e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                                             { "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnError", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)()>(
    &::UnityEngine::InputSystem::RemoteInputPlayerConnection::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65655e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                                                                           { "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnCompleted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)()>(&::UnityEngine::InputSystem::RemoteInputPlayerConnection::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65655e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*& UnityEngine::InputSystem::RemoteInputPlayerConnection::__cordl_internal_get_m_Connection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Connection;
}
constexpr ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection* const& UnityEngine::InputSystem::RemoteInputPlayerConnection::__cordl_internal_get_m_Connection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Connection;
}
constexpr void UnityEngine::InputSystem::RemoteInputPlayerConnection::__cordl_internal_set_m_Connection(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Connection = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber*>& UnityEngine::InputSystem::RemoteInputPlayerConnection::__cordl_internal_get_m_Subscribers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Subscribers;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber*> const& UnityEngine::InputSystem::RemoteInputPlayerConnection::__cordl_internal_get_m_Subscribers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Subscribers;
}
constexpr void UnityEngine::InputSystem::RemoteInputPlayerConnection::__cordl_internal_set_m_Subscribers(::ArrayW<::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Subscribers = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::InputSystem::RemoteInputPlayerConnection::__cordl_internal_get_m_ConnectedIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConnectedIds;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::InputSystem::RemoteInputPlayerConnection::__cordl_internal_get_m_ConnectedIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConnectedIds;
}
constexpr void UnityEngine::InputSystem::RemoteInputPlayerConnection::__cordl_internal_set_m_ConnectedIds(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ConnectedIds = value;
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::setStaticF_kNewDeviceMsg(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "kNewDeviceMsg", ::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid UnityEngine::InputSystem::RemoteInputPlayerConnection::getStaticF_kNewDeviceMsg() {
  return ::cordl_internals::getStaticField<::System::Guid, "kNewDeviceMsg", ::UnityEngine::InputSystem::RemoteInputPlayerConnection*>();
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::setStaticF_kNewLayoutMsg(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "kNewLayoutMsg", ::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid UnityEngine::InputSystem::RemoteInputPlayerConnection::getStaticF_kNewLayoutMsg() {
  return ::cordl_internals::getStaticField<::System::Guid, "kNewLayoutMsg", ::UnityEngine::InputSystem::RemoteInputPlayerConnection*>();
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::setStaticF_kNewEventsMsg(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "kNewEventsMsg", ::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid UnityEngine::InputSystem::RemoteInputPlayerConnection::getStaticF_kNewEventsMsg() {
  return ::cordl_internals::getStaticField<::System::Guid, "kNewEventsMsg", ::UnityEngine::InputSystem::RemoteInputPlayerConnection*>();
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::setStaticF_kRemoveDeviceMsg(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "kRemoveDeviceMsg", ::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid UnityEngine::InputSystem::RemoteInputPlayerConnection::getStaticF_kRemoveDeviceMsg() {
  return ::cordl_internals::getStaticField<::System::Guid, "kRemoveDeviceMsg", ::UnityEngine::InputSystem::RemoteInputPlayerConnection*>();
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::setStaticF_kChangeUsagesMsg(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "kChangeUsagesMsg", ::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid UnityEngine::InputSystem::RemoteInputPlayerConnection::getStaticF_kChangeUsagesMsg() {
  return ::cordl_internals::getStaticField<::System::Guid, "kChangeUsagesMsg", ::UnityEngine::InputSystem::RemoteInputPlayerConnection*>();
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::setStaticF_kStartSendingMsg(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "kStartSendingMsg", ::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid UnityEngine::InputSystem::RemoteInputPlayerConnection::getStaticF_kStartSendingMsg() {
  return ::cordl_internals::getStaticField<::System::Guid, "kStartSendingMsg", ::UnityEngine::InputSystem::RemoteInputPlayerConnection*>();
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::setStaticF_kStopSendingMsg(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "kStopSendingMsg", ::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid UnityEngine::InputSystem::RemoteInputPlayerConnection::getStaticF_kStopSendingMsg() {
  return ::cordl_internals::getStaticField<::System::Guid, "kStopSendingMsg", ::UnityEngine::InputSystem::RemoteInputPlayerConnection*>();
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::Bind(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection* connection, bool isConnected) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                                           { "Bind", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, isConnected);
}
inline ::System::IDisposable* UnityEngine::InputSystem::RemoteInputPlayerConnection::Subscribe(::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>* observer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                                           { "Subscribe", {}, { ::i2c::type_of<::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(this, ___internal_method, observer);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnConnected(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(), { "OnConnected", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnDisconnected(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(), { "OnDisconnected", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnNewDevice(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                                                                         { "OnNewDevice", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnNewLayout(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                                                                         { "OnNewLayout", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnNewEvents(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                                                                         { "OnNewEvents", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnRemoveDevice(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                                           { "OnRemoveDevice", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnChangeUsages(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                                           { "OnChangeUsages", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnStartSending(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                                           { "OnStartSending", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnStopSending(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                                           { "OnStopSending", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::SendToSubscribers(::UnityEngine::InputSystem::InputRemoting_MessageType type,
                                                                                     ::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
          { "SendToSubscribers", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputRemoting_MessageType>(), ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, args);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext(::UnityEngine::InputSystem::InputRemoting_Message msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                       { "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnNext", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputRemoting_Message>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError(::System::Exception* error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                                           { "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnError", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(),
                                                                                         { "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::RemoteInputPlayerConnection* UnityEngine::InputSystem::RemoteInputPlayerConnection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>());
}
/// @brief Convert operator to "::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>"
constexpr UnityEngine::InputSystem::RemoteInputPlayerConnection::operator ::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>*() noexcept {
  return static_cast<::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>"
constexpr ::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>*
UnityEngine::InputSystem::RemoteInputPlayerConnection::i___System__IObserver_1___UnityEngine__InputSystem__InputRemoting_Message_() noexcept {
  return static_cast<::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IObservable_1<::UnityEngine::InputSystem::InputRemoting_Message>"
constexpr UnityEngine::InputSystem::RemoteInputPlayerConnection::operator ::System::IObservable_1<::UnityEngine::InputSystem::InputRemoting_Message>*() noexcept {
  return static_cast<::System::IObservable_1<::UnityEngine::InputSystem::InputRemoting_Message>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObservable_1<::UnityEngine::InputSystem::InputRemoting_Message>"
constexpr ::System::IObservable_1<::UnityEngine::InputSystem::InputRemoting_Message>*
UnityEngine::InputSystem::RemoteInputPlayerConnection::i___System__IObservable_1___UnityEngine__InputSystem__InputRemoting_Message_() noexcept {
  return static_cast<::System::IObservable_1<::UnityEngine::InputSystem::InputRemoting_Message>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::RemoteInputPlayerConnection::RemoteInputPlayerConnection() {}
