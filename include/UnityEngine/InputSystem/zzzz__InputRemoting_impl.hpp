#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputRemoting.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__IObservable_1_impl.hpp"
#include "System/zzzz__IObserver_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlLayoutChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputManager_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputRemoting_MessageType::InputRemoting_MessageType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputRemoting_MessageType::InputRemoting_MessageType() {}
constexpr ::UnityEngine::InputSystem::InputRemoting_MessageType UnityEngine::InputSystem::InputRemoting_MessageType::Connect{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::InputRemoting_MessageType UnityEngine::InputSystem::InputRemoting_MessageType::Disconnect{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::InputRemoting_MessageType UnityEngine::InputSystem::InputRemoting_MessageType::NewLayout{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::InputRemoting_MessageType UnityEngine::InputSystem::InputRemoting_MessageType::NewDevice{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::InputSystem::InputRemoting_MessageType UnityEngine::InputSystem::InputRemoting_MessageType::NewEvents{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputSystem::InputRemoting_MessageType UnityEngine::InputSystem::InputRemoting_MessageType::RemoveDevice{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::InputSystem::InputRemoting_MessageType UnityEngine::InputSystem::InputRemoting_MessageType::RemoveLayout{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::InputSystem::InputRemoting_MessageType UnityEngine::InputSystem::InputRemoting_MessageType::ChangeUsages{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::InputSystem::InputRemoting_MessageType UnityEngine::InputSystem::InputRemoting_MessageType::StartSending{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::InputSystem::InputRemoting_MessageType UnityEngine::InputSystem::InputRemoting_MessageType::StopSending{ static_cast<int32_t>(0x9) };
// Ctor Parameters [CppParam { name: "participantId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::UnityEngine::InputSystem::InputRemoting_MessageType",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputRemoting_Message::InputRemoting_Message(int32_t participantId, ::UnityEngine::InputSystem::InputRemoting_MessageType type,
                                                                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> data) noexcept {
  this->participantId = participantId;
  this->type = type;
  this->data = data;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputRemoting_Message::InputRemoting_Message() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputRemoting_Flags::InputRemoting_Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputRemoting_Flags::InputRemoting_Flags() {}
constexpr ::UnityEngine::InputSystem::InputRemoting_Flags UnityEngine::InputSystem::InputRemoting_Flags::Sending{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::InputRemoting_Flags UnityEngine::InputSystem::InputRemoting_Flags::StartSendingOnConnect{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "senderId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "layouts", ty:
// "::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "devices", ty: "::ArrayW<::UnityEngine::InputSystem::InputRemoting_RemoteInputDevice,::Array<::UnityEngine::InputSystem::InputRemoting_RemoteInputDevice>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputRemoting_RemoteSender::InputRemoting_RemoteSender(
    int32_t senderId, ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> layouts,
    ::ArrayW<::UnityEngine::InputSystem::InputRemoting_RemoteInputDevice, ::Array<::UnityEngine::InputSystem::InputRemoting_RemoteInputDevice>*> devices) noexcept {
  this->senderId = senderId;
  this->layouts = layouts;
  this->devices = devices;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputRemoting_RemoteSender::InputRemoting_RemoteSender() {}
// Ctor Parameters [CppParam { name: "remoteId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "localId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "description", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputRemoting_RemoteInputDevice::InputRemoting_RemoteInputDevice(int32_t remoteId, int32_t localId,
                                                                                                       ::UnityEngine::InputSystem::Layouts::InputDeviceDescription description) noexcept {
  this->remoteId = remoteId;
  this->localId = localId;
  this->description = description;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputRemoting_RemoteInputDevice::InputRemoting_RemoteInputDevice() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting_Subscriber.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting_Subscriber::*)()>(
    &::UnityEngine::InputSystem::InputRemoting_Subscriber::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x45c5ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_Subscriber*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting_Subscriber._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting_Subscriber::*)()>(
    &::UnityEngine::InputSystem::InputRemoting_Subscriber::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x45c430c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_Subscriber*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::InputRemoting*& UnityEngine::InputSystem::InputRemoting_Subscriber::__cordl_internal_get_owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owner;
}
constexpr ::UnityEngine::InputSystem::InputRemoting* const& UnityEngine::InputSystem::InputRemoting_Subscriber::__cordl_internal_get_owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owner;
}
constexpr void UnityEngine::InputSystem::InputRemoting_Subscriber::__cordl_internal_set_owner(::UnityEngine::InputSystem::InputRemoting* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___owner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>*& UnityEngine::InputSystem::InputRemoting_Subscriber::__cordl_internal_get_observer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___observer;
}
constexpr ::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>* const& UnityEngine::InputSystem::InputRemoting_Subscriber::__cordl_internal_get_observer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___observer;
}
constexpr void UnityEngine::InputSystem::InputRemoting_Subscriber::__cordl_internal_set_observer(::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___observer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::InputSystem::InputRemoting_Subscriber::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_Subscriber*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputRemoting_Subscriber::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_Subscriber*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputRemoting_Subscriber* UnityEngine::InputSystem::InputRemoting_Subscriber::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::InputRemoting_Subscriber*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::InputRemoting_Subscriber::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::InputRemoting_Subscriber::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputRemoting_Subscriber::InputRemoting_Subscriber() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting_ConnectMsg.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputRemoting*)>(
    &::UnityEngine::InputSystem::InputRemoting_ConnectMsg::Process)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x45c3700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_ConnectMsg*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputRemoting_ConnectMsg::Process(::UnityEngine::InputSystem::InputRemoting* receiver) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_ConnectMsg*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputRemoting_ConnectMsg::InputRemoting_ConnectMsg() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting_StartSendingMsg.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputRemoting*)>(
    &::UnityEngine::InputSystem::InputRemoting_StartSendingMsg::Process)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x45c420c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_StartSendingMsg*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputRemoting_StartSendingMsg::Process(::UnityEngine::InputSystem::InputRemoting* receiver) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_StartSendingMsg*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputRemoting_StartSendingMsg::InputRemoting_StartSendingMsg() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting_StopSendingMsg.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputRemoting*)>(
    &::UnityEngine::InputSystem::InputRemoting_StopSendingMsg::Process)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x45c421c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_StopSendingMsg*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputRemoting_StopSendingMsg::Process(::UnityEngine::InputSystem::InputRemoting* receiver) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_StopSendingMsg*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputRemoting_StopSendingMsg::InputRemoting_StopSendingMsg() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting_DisconnectMsg.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputRemoting*, ::UnityEngine::InputSystem::InputRemoting_Message)>(
    &::UnityEngine::InputSystem::InputRemoting_DisconnectMsg::Process)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x45c3744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_DisconnectMsg*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting_Message>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputRemoting_DisconnectMsg::Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::InputRemoting_Message msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_DisconnectMsg*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting_Message>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver, msg);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputRemoting_DisconnectMsg::InputRemoting_DisconnectMsg() {}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "layoutJson", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "isOverride", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::NewLayoutMsg_InputRemoting_Data::NewLayoutMsg_InputRemoting_Data(::StringW name, ::StringW layoutJson, bool isOverride) noexcept {
  this->name = name;
  this->layoutJson = layoutJson;
  this->isOverride = isOverride;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::NewLayoutMsg_InputRemoting_Data::NewLayoutMsg_InputRemoting_Data() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting_NewLayoutMsg.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputRemoting_Message> (*)(
    ::UnityEngine::InputSystem::InputRemoting*, ::StringW)>(&::UnityEngine::InputSystem::InputRemoting_NewLayoutMsg::Create)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x45c4680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_NewLayoutMsg*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting_NewLayoutMsg.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputRemoting*, ::UnityEngine::InputSystem::InputRemoting_Message)>(
    &::UnityEngine::InputSystem::InputRemoting_NewLayoutMsg::Process)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x45c37d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_NewLayoutMsg*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting_Message>::get() })));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputRemoting_Message> UnityEngine::InputSystem::InputRemoting_NewLayoutMsg::Create(::UnityEngine::InputSystem::InputRemoting* sender,
                                                                                                                                            ::StringW layoutName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_NewLayoutMsg*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputRemoting_Message>, false>(nullptr, ___internal_method, sender, layoutName);
}
inline void UnityEngine::InputSystem::InputRemoting_NewLayoutMsg::Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::InputRemoting_Message msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_NewLayoutMsg*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting_Message>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver, msg);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputRemoting_NewLayoutMsg::InputRemoting_NewLayoutMsg() {}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "layout", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "deviceId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "usages", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "description", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting_Data::NewDeviceMsg_InputRemoting_Data(::StringW name, ::StringW layout, int32_t deviceId,
                                                                                                       ::ArrayW<::StringW, ::Array<::StringW>*> usages,
                                                                                                       ::UnityEngine::InputSystem::Layouts::InputDeviceDescription description) noexcept {
  this->name = name;
  this->layout = layout;
  this->deviceId = deviceId;
  this->usages = usages;
  this->description = description;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting_Data::NewDeviceMsg_InputRemoting_Data() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c::*)()>(
    &::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x45c62b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c._Create_b__1_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c::_Create_b__1_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x45c62bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c*>::get(), "<Create>b__1_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c::setStaticF___9(::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c*>::get>(
      std::forward<::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c*>(value));
}
inline ::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c* UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c*>::get>();
}
inline void UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c::setStaticF___9__1_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__1_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__1_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c*>::get>();
}
inline void UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c::_Create_b__1_0(::UnityEngine::InputSystem::Utilities::InternedString x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c*>::get(), "<Create>b__1_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c* UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c::NewDeviceMsg_InputRemoting___c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting_NewDeviceMsg.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputRemoting_Message (*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputRemoting_NewDeviceMsg::Create)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x45c4ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_NewDeviceMsg*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting_NewDeviceMsg.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputRemoting*, ::UnityEngine::InputSystem::InputRemoting_Message)>(
    &::UnityEngine::InputSystem::InputRemoting_NewDeviceMsg::Process)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x45c38d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_NewDeviceMsg*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting_Message>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::InputRemoting_Message UnityEngine::InputSystem::InputRemoting_NewDeviceMsg::Create(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_NewDeviceMsg*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputRemoting_Message, false>(nullptr, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputRemoting_NewDeviceMsg::Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::InputRemoting_Message msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_NewDeviceMsg*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting_Message>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver, msg);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputRemoting_NewDeviceMsg::InputRemoting_NewDeviceMsg() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting_NewEventsMsg.CreateResetEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputRemoting_Message (*)(::UnityEngine::InputSystem::InputDevice*, bool)>(
    &::UnityEngine::InputSystem::InputRemoting_NewEventsMsg::CreateResetEvent)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x45c5160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_NewEventsMsg*>::get(), "CreateResetEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting_NewEventsMsg.CreateStateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputRemoting_Message (*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputRemoting_NewEventsMsg::CreateStateEvent)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x45c4ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_NewEventsMsg*>::get(), "CreateStateEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting_NewEventsMsg.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputRemoting_Message (*)(
    ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>, int32_t)>(&::UnityEngine::InputSystem::InputRemoting_NewEventsMsg::Create)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x45c4e08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_NewEventsMsg*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting_NewEventsMsg.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputRemoting*, ::UnityEngine::InputSystem::InputRemoting_Message)>(
    &::UnityEngine::InputSystem::InputRemoting_NewEventsMsg::Process)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x45c3ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_NewEventsMsg*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting_Message>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::InputRemoting_Message UnityEngine::InputSystem::InputRemoting_NewEventsMsg::CreateResetEvent(::UnityEngine::InputSystem::InputDevice* device, bool isHardReset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_NewEventsMsg*>::get(), "CreateResetEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputRemoting_Message, false>(nullptr, ___internal_method, device, isHardReset);
}
inline ::UnityEngine::InputSystem::InputRemoting_Message UnityEngine::InputSystem::InputRemoting_NewEventsMsg::CreateStateEvent(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_NewEventsMsg*>::get(), "CreateStateEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputRemoting_Message, false>(nullptr, ___internal_method, device);
}
inline ::UnityEngine::InputSystem::InputRemoting_Message UnityEngine::InputSystem::InputRemoting_NewEventsMsg::Create(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> events,
                                                                                                                      int32_t eventCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_NewEventsMsg*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputRemoting_Message, false>(nullptr, ___internal_method, events, eventCount);
}
inline void UnityEngine::InputSystem::InputRemoting_NewEventsMsg::Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::InputRemoting_Message msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_NewEventsMsg*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting_Message>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver, msg);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputRemoting_NewEventsMsg::InputRemoting_NewEventsMsg() {}
// Ctor Parameters [CppParam { name: "deviceId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "usages", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting_Data::ChangeUsageMsg_InputRemoting_Data(int32_t deviceId, ::ArrayW<::StringW, ::Array<::StringW>*> usages) noexcept {
  this->deviceId = deviceId;
  this->usages = usages;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting_Data::ChangeUsageMsg_InputRemoting_Data() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c::*)()>(
    &::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x45c646c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c._Create_b__1_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c::_Create_b__1_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x45c6474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c*>::get(), "<Create>b__1_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c::setStaticF___9(::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c*>::get>(
      std::forward<::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c*>(value));
}
inline ::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c* UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c*>::get>();
}
inline void UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c::setStaticF___9__1_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__1_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__1_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c*>::get>();
}
inline void UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c::_Create_b__1_0(::UnityEngine::InputSystem::Utilities::InternedString x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c*>::get(), "<Create>b__1_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c* UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c::ChangeUsageMsg_InputRemoting___c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting_ChangeUsageMsg.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputRemoting_Message (*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputRemoting_ChangeUsageMsg::Create)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x45c4fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_ChangeUsageMsg*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting_ChangeUsageMsg.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputRemoting*, ::UnityEngine::InputSystem::InputRemoting_Message)>(
    &::UnityEngine::InputSystem::InputRemoting_ChangeUsageMsg::Process)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x45c3e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_ChangeUsageMsg*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting_Message>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::InputRemoting_Message UnityEngine::InputSystem::InputRemoting_ChangeUsageMsg::Create(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_ChangeUsageMsg*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputRemoting_Message, false>(nullptr, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputRemoting_ChangeUsageMsg::Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::InputRemoting_Message msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_ChangeUsageMsg*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting_Message>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver, msg);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputRemoting_ChangeUsageMsg::InputRemoting_ChangeUsageMsg() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting_RemoveDeviceMsg.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputRemoting_Message (*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputRemoting_RemoveDeviceMsg::Create)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x45c4f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_RemoveDeviceMsg*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting_RemoveDeviceMsg.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputRemoting*, ::UnityEngine::InputSystem::InputRemoting_Message)>(
    &::UnityEngine::InputSystem::InputRemoting_RemoveDeviceMsg::Process)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x45c41a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_RemoveDeviceMsg*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting_Message>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::InputRemoting_Message UnityEngine::InputSystem::InputRemoting_RemoveDeviceMsg::Create(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_RemoveDeviceMsg*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputRemoting_Message, false>(nullptr, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputRemoting_RemoveDeviceMsg::Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::InputRemoting_Message msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting_RemoveDeviceMsg*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting_Message>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver, msg);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputRemoting_RemoveDeviceMsg::InputRemoting_RemoveDeviceMsg() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.get_sending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputRemoting::*)()>(&::UnityEngine::InputSystem::InputRemoting::get_sending)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x45c3100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "get_sending",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.set_sending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)(bool)>(&::UnityEngine::InputSystem::InputRemoting::set_sending)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x45c310c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "set_sending",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)(::UnityEngine::InputSystem::InputManager*, bool)>(
    &::UnityEngine::InputSystem::InputRemoting::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x45c311c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.StartSending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)()>(&::UnityEngine::InputSystem::InputRemoting::StartSending)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x45c31a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                               "StartSending", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.StopSending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)()>(&::UnityEngine::InputSystem::InputRemoting::StopSending)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x45c3428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "StopSending",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)(::UnityEngine::InputSystem::InputRemoting_Message)>(
    &::UnityEngine::InputSystem::InputRemoting::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x45c367c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                    "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnNext", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting_Message>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)(::System::Exception*)>(
    &::UnityEngine::InputSystem::InputRemoting::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x45c422c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnError",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)()>(
    &::UnityEngine::InputSystem::InputRemoting::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x45c4230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                               "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnCompleted", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.Subscribe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IDisposable* (
    ::UnityEngine::InputSystem::InputRemoting::*)(::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>*)>(&::UnityEngine::InputSystem::InputRemoting::Subscribe)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x45c4234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "Subscribe", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.SendInitialMessages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)()>(
    &::UnityEngine::InputSystem::InputRemoting::SendInitialMessages)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x45c3410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                               "SendInitialMessages", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.SendAllGeneratedLayouts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)()>(
    &::UnityEngine::InputSystem::InputRemoting::SendAllGeneratedLayouts)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x45c4314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                               "SendAllGeneratedLayouts", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.SendLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputRemoting::SendLayout)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x45c45cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "SendLayout", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.SendAllDevices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)()>(&::UnityEngine::InputSystem::InputRemoting::SendAllDevices)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x45c4468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                               "SendAllDevices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.SendDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputRemoting::SendDevice)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x45c4a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "SendDevice", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.SendEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)(
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::InputRemoting::SendEvent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x45c4da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "SendEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.SendDeviceChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)(
    ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange)>(&::UnityEngine::InputSystem::InputRemoting::SendDeviceChange)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x45c4edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "SendDeviceChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDeviceChange>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.SendLayoutChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)(::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange)>(
    &::UnityEngine::InputSystem::InputRemoting::SendLayoutChange)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x45c51d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "SendLayoutChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlLayoutChange>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)(::UnityEngine::InputSystem::InputRemoting_Message)>(
    &::UnityEngine::InputSystem::InputRemoting::Send)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x45c48c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting_Message>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.FindOrCreateSenderRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputRemoting::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputRemoting::FindOrCreateSenderRecord)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x45c52dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "FindOrCreateSenderRecord",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.BuildLayoutNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (*)(int32_t)>(
    &::UnityEngine::InputSystem::InputRemoting::BuildLayoutNamespace)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x45c5380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "BuildLayoutNamespace",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.FindLocalDeviceId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputRemoting::*)(int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputRemoting::FindLocalDeviceId)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x45c5420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "FindLocalDeviceId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.TryGetDeviceByRemoteId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::InputRemoting::*)(int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputRemoting::TryGetDeviceByRemoteId)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x45c5494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "TryGetDeviceByRemoteId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.get_manager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputManager* (::UnityEngine::InputSystem::InputRemoting::*)()>(
    &::UnityEngine::InputSystem::InputRemoting::get_manager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x45c5534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "get_manager",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.RemoveRemoteDevices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputRemoting::RemoveRemoteDevices)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x45c553c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "RemoveRemoteDevices",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::InputRemoting_Flags& UnityEngine::InputSystem::InputRemoting::__cordl_internal_get_m_Flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr ::UnityEngine::InputSystem::InputRemoting_Flags const& UnityEngine::InputSystem::InputRemoting::__cordl_internal_get_m_Flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr void UnityEngine::InputSystem::InputRemoting::__cordl_internal_set_m_Flags(::UnityEngine::InputSystem::InputRemoting_Flags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Flags = value;
}
constexpr ::UnityEngine::InputSystem::InputManager*& UnityEngine::InputSystem::InputRemoting::__cordl_internal_get_m_LocalManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalManager;
}
constexpr ::UnityEngine::InputSystem::InputManager* const& UnityEngine::InputSystem::InputRemoting::__cordl_internal_get_m_LocalManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalManager;
}
constexpr void UnityEngine::InputSystem::InputRemoting::__cordl_internal_set_m_LocalManager(::UnityEngine::InputSystem::InputManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LocalManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputRemoting_Subscriber*, ::Array<::UnityEngine::InputSystem::InputRemoting_Subscriber*>*>&
UnityEngine::InputSystem::InputRemoting::__cordl_internal_get_m_Subscribers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Subscribers;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputRemoting_Subscriber*, ::Array<::UnityEngine::InputSystem::InputRemoting_Subscriber*>*> const&
UnityEngine::InputSystem::InputRemoting::__cordl_internal_get_m_Subscribers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Subscribers;
}
constexpr void UnityEngine::InputSystem::InputRemoting::__cordl_internal_set_m_Subscribers(
    ::ArrayW<::UnityEngine::InputSystem::InputRemoting_Subscriber*, ::Array<::UnityEngine::InputSystem::InputRemoting_Subscriber*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Subscribers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputRemoting_RemoteSender, ::Array<::UnityEngine::InputSystem::InputRemoting_RemoteSender>*>&
UnityEngine::InputSystem::InputRemoting::__cordl_internal_get_m_Senders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Senders;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputRemoting_RemoteSender, ::Array<::UnityEngine::InputSystem::InputRemoting_RemoteSender>*> const&
UnityEngine::InputSystem::InputRemoting::__cordl_internal_get_m_Senders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Senders;
}
constexpr void UnityEngine::InputSystem::InputRemoting::__cordl_internal_set_m_Senders(
    ::ArrayW<::UnityEngine::InputSystem::InputRemoting_RemoteSender, ::Array<::UnityEngine::InputSystem::InputRemoting_RemoteSender>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Senders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::InputSystem::InputRemoting::get_sending() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "get_sending",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputRemoting::set_sending(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "set_sending",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputRemoting::_ctor(::UnityEngine::InputSystem::InputManager* manager, bool startSendingOnConnect) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, manager, startSendingOnConnect);
}
inline void UnityEngine::InputSystem::InputRemoting::StartSending() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "StartSending",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputRemoting::StopSending() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "StopSending",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputRemoting::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext(::UnityEngine::InputSystem::InputRemoting_Message msg) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                               "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnNext", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting_Message>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline void UnityEngine::InputSystem::InputRemoting::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError(::System::Exception* error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnError",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline void UnityEngine::InputSystem::InputRemoting::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                  "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IDisposable* UnityEngine::InputSystem::InputRemoting::Subscribe(::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>* observer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "Subscribe", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IDisposable*, false>(this, ___internal_method, observer);
}
inline void UnityEngine::InputSystem::InputRemoting::SendInitialMessages() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                             "SendInitialMessages", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputRemoting::SendAllGeneratedLayouts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                             "SendAllGeneratedLayouts", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputRemoting::SendLayout(::StringW layoutName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "SendLayout", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, layoutName);
}
inline void UnityEngine::InputSystem::InputRemoting::SendAllDevices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                             "SendAllDevices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputRemoting::SendDevice(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "SendDevice", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputRemoting::SendEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "SendEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventPtr, device);
}
inline void UnityEngine::InputSystem::InputRemoting::SendDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "SendDeviceChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDeviceChange>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, change);
}
inline void UnityEngine::InputSystem::InputRemoting::SendLayoutChange(::StringW layout, ::UnityEngine::InputSystem::InputControlLayoutChange change) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "SendLayoutChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlLayoutChange>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, layout, change);
}
inline void UnityEngine::InputSystem::InputRemoting::Send(::UnityEngine::InputSystem::InputRemoting_Message msg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting_Message>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline int32_t UnityEngine::InputSystem::InputRemoting::FindOrCreateSenderRecord(int32_t senderId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "FindOrCreateSenderRecord",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, senderId);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::InputRemoting::BuildLayoutNamespace(int32_t senderId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "BuildLayoutNamespace",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(nullptr, ___internal_method, senderId);
}
inline int32_t UnityEngine::InputSystem::InputRemoting::FindLocalDeviceId(int32_t remoteDeviceId, int32_t senderIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "FindLocalDeviceId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, remoteDeviceId, senderIndex);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputRemoting::TryGetDeviceByRemoteId(int32_t remoteDeviceId, int32_t senderIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "TryGetDeviceByRemoteId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(this, ___internal_method, remoteDeviceId, senderIndex);
}
inline ::UnityEngine::InputSystem::InputManager* UnityEngine::InputSystem::InputRemoting::get_manager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "get_manager",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputManager*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputRemoting::RemoveRemoteDevices(int32_t participantId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "RemoveRemoteDevices",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, participantId);
}
template <typename TData> inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnityEngine::InputSystem::InputRemoting::SerializeData(TData data) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "SerializeData",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TData>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TData>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, data);
}
template <typename TData> inline TData UnityEngine::InputSystem::InputRemoting::DeserializeData(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "DeserializeData",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TData>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TData>::get() }));
  return ::cordl_internals::RunMethodRethrow<TData, false>(nullptr, ___internal_method, data);
}
inline ::UnityEngine::InputSystem::InputRemoting* UnityEngine::InputSystem::InputRemoting::New_ctor(::UnityEngine::InputSystem::InputManager* manager, bool startSendingOnConnect) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::InputRemoting*>(manager, startSendingOnConnect));
}
/// @brief Convert operator to "::System::IObservable_1<::UnityEngine::InputSystem::InputRemoting_Message>"
constexpr UnityEngine::InputSystem::InputRemoting::operator ::System::IObservable_1<::UnityEngine::InputSystem::InputRemoting_Message>*() noexcept {
  return static_cast<::System::IObservable_1<::UnityEngine::InputSystem::InputRemoting_Message>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObservable_1<::UnityEngine::InputSystem::InputRemoting_Message>"
constexpr ::System::IObservable_1<::UnityEngine::InputSystem::InputRemoting_Message>*
UnityEngine::InputSystem::InputRemoting::i___System__IObservable_1___UnityEngine__InputSystem__InputRemoting_Message_() noexcept {
  return static_cast<::System::IObservable_1<::UnityEngine::InputSystem::InputRemoting_Message>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>"
constexpr UnityEngine::InputSystem::InputRemoting::operator ::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>*() noexcept {
  return static_cast<::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>"
constexpr ::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>*
UnityEngine::InputSystem::InputRemoting::i___System__IObserver_1___UnityEngine__InputSystem__InputRemoting_Message_() noexcept {
  return static_cast<::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputRemoting::InputRemoting() {}
