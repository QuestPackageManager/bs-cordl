#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlLayoutChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputManager_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputRemoting__MessageType::__InputRemoting__MessageType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputRemoting__MessageType::__InputRemoting__MessageType() {}
constexpr ::UnityEngine::InputSystem::__InputRemoting__MessageType UnityEngine::InputSystem::__InputRemoting__MessageType::Connect{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::__InputRemoting__MessageType UnityEngine::InputSystem::__InputRemoting__MessageType::Disconnect{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::__InputRemoting__MessageType UnityEngine::InputSystem::__InputRemoting__MessageType::NewLayout{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::__InputRemoting__MessageType UnityEngine::InputSystem::__InputRemoting__MessageType::NewDevice{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::InputSystem::__InputRemoting__MessageType UnityEngine::InputSystem::__InputRemoting__MessageType::NewEvents{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputSystem::__InputRemoting__MessageType UnityEngine::InputSystem::__InputRemoting__MessageType::RemoveDevice{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::InputSystem::__InputRemoting__MessageType UnityEngine::InputSystem::__InputRemoting__MessageType::RemoveLayout{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::InputSystem::__InputRemoting__MessageType UnityEngine::InputSystem::__InputRemoting__MessageType::ChangeUsages{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::InputSystem::__InputRemoting__MessageType UnityEngine::InputSystem::__InputRemoting__MessageType::StartSending{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::InputSystem::__InputRemoting__MessageType UnityEngine::InputSystem::__InputRemoting__MessageType::StopSending{ static_cast<int32_t>(0x9) };
// Ctor Parameters [CppParam { name: "participantId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::UnityEngine::InputSystem::__InputRemoting__MessageType",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::__InputRemoting__Message::__InputRemoting__Message(int32_t participantId, ::UnityEngine::InputSystem::__InputRemoting__MessageType type,
                                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> data) noexcept {
  this->participantId = participantId;
  this->type = type;
  this->data = data;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputRemoting__Message::__InputRemoting__Message() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputRemoting__Flags::__InputRemoting__Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputRemoting__Flags::__InputRemoting__Flags() {}
constexpr ::UnityEngine::InputSystem::__InputRemoting__Flags UnityEngine::InputSystem::__InputRemoting__Flags::Sending{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::__InputRemoting__Flags UnityEngine::InputSystem::__InputRemoting__Flags::StartSendingOnConnect{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "senderId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "layouts", ty:
// "::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "devices", ty: "::ArrayW<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice,::Array<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice>*>", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::__InputRemoting__RemoteSender::__InputRemoting__RemoteSender(
    int32_t senderId, ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> layouts,
    ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice, ::Array<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice>*> devices) noexcept {
  this->senderId = senderId;
  this->layouts = layouts;
  this->devices = devices;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputRemoting__RemoteSender::__InputRemoting__RemoteSender() {}
// Ctor Parameters [CppParam { name: "remoteId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "localId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "description", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice::__InputRemoting__RemoteInputDevice(int32_t remoteId, int32_t localId,
                                                                                                             ::UnityEngine::InputSystem::Layouts::InputDeviceDescription description) noexcept {
  this->remoteId = remoteId;
  this->localId = localId;
  this->description = description;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice::__InputRemoting__RemoteInputDevice() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputRemoting__Subscriber.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputRemoting__Subscriber::*)()>(
    &::UnityEngine::InputSystem::__InputRemoting__Subscriber::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2aa5ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__Subscriber*>::get(),
                                                                               "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputRemoting__Subscriber._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputRemoting__Subscriber::*)()>(
    &::UnityEngine::InputSystem::__InputRemoting__Subscriber::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aa47fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__Subscriber*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::__InputRemoting__Subscriber::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::InputSystem::InputRemoting*& UnityEngine::InputSystem::__InputRemoting__Subscriber::__get_owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owner;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputRemoting*> const& UnityEngine::InputSystem::__InputRemoting__Subscriber::__get_owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owner;
}
constexpr void UnityEngine::InputSystem::__InputRemoting__Subscriber::__set_owner(::UnityEngine::InputSystem::InputRemoting* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___owner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*& UnityEngine::InputSystem::__InputRemoting__Subscriber::__get_observer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___observer;
}
constexpr ::cordl_internals::to_const_pointer<::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*> const&
UnityEngine::InputSystem::__InputRemoting__Subscriber::__get_observer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___observer;
}
constexpr void UnityEngine::InputSystem::__InputRemoting__Subscriber::__set_observer(::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___observer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::InputSystem::__InputRemoting__Subscriber::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__Subscriber*>::get(),
                                                                             "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::__InputRemoting__Subscriber* UnityEngine::InputSystem::__InputRemoting__Subscriber::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::__InputRemoting__Subscriber*>());
}
inline void UnityEngine::InputSystem::__InputRemoting__Subscriber::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__Subscriber*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputRemoting__Subscriber::__InputRemoting__Subscriber() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputRemoting__ConnectMsg.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputRemoting*)>(
    &::UnityEngine::InputSystem::__InputRemoting__ConnectMsg::Process)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2aa3b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__ConnectMsg*>::get(), "Process", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::__InputRemoting__ConnectMsg::Process(::UnityEngine::InputSystem::InputRemoting* receiver) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__ConnectMsg*>::get(), "Process", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputRemoting__ConnectMsg::__InputRemoting__ConnectMsg() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputRemoting__StartSendingMsg.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputRemoting*)>(
    &::UnityEngine::InputSystem::__InputRemoting__StartSendingMsg::Process)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2aa46f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__StartSendingMsg*>::get(), "Process", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::__InputRemoting__StartSendingMsg::Process(::UnityEngine::InputSystem::InputRemoting* receiver) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__StartSendingMsg*>::get(), "Process", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputRemoting__StartSendingMsg::__InputRemoting__StartSendingMsg() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputRemoting__StopSendingMsg.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputRemoting*)>(
    &::UnityEngine::InputSystem::__InputRemoting__StopSendingMsg::Process)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2aa4700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__StopSendingMsg*>::get(), "Process", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::__InputRemoting__StopSendingMsg::Process(::UnityEngine::InputSystem::InputRemoting* receiver) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__StopSendingMsg*>::get(), "Process", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputRemoting__StopSendingMsg::__InputRemoting__StopSendingMsg() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputRemoting__DisconnectMsg.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputRemoting*, ::UnityEngine::InputSystem::__InputRemoting__Message)>(
    &::UnityEngine::InputSystem::__InputRemoting__DisconnectMsg::Process)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2aa3b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__DisconnectMsg*>::get(), "Process", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputRemoting__Message>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::__InputRemoting__DisconnectMsg::Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::__InputRemoting__Message msg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__DisconnectMsg*>::get(), "Process", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputRemoting__Message>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver, msg);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputRemoting__DisconnectMsg::__InputRemoting__DisconnectMsg() {}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "layoutJson", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "isOverride", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__InputRemoting__NewLayoutMsg__Data::__InputRemoting__NewLayoutMsg__Data(::StringW name, ::StringW layoutJson, bool isOverride) noexcept {
  this->name = name;
  this->layoutJson = layoutJson;
  this->isOverride = isOverride;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputRemoting__NewLayoutMsg__Data::__InputRemoting__NewLayoutMsg__Data() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputRemoting__NewLayoutMsg.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::__InputRemoting__Message> (*)(
    ::UnityEngine::InputSystem::InputRemoting*, ::StringW)>(&::UnityEngine::InputSystem::__InputRemoting__NewLayoutMsg::Create)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2aa4b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__NewLayoutMsg*>::get(), "Create", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputRemoting__NewLayoutMsg.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputRemoting*, ::UnityEngine::InputSystem::__InputRemoting__Message)>(
    &::UnityEngine::InputSystem::__InputRemoting__NewLayoutMsg::Process)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2aa3c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__NewLayoutMsg*>::get(), "Process", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputRemoting__Message>::get() })));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<::UnityEngine::InputSystem::__InputRemoting__Message> UnityEngine::InputSystem::__InputRemoting__NewLayoutMsg::Create(::UnityEngine::InputSystem::InputRemoting* sender,
                                                                                                                                                  ::StringW layoutName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__NewLayoutMsg*>::get(), "Create", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::__InputRemoting__Message>, false>(nullptr, ___internal_method, sender, layoutName);
}
inline void UnityEngine::InputSystem::__InputRemoting__NewLayoutMsg::Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::__InputRemoting__Message msg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__NewLayoutMsg*>::get(), "Process", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputRemoting__Message>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver, msg);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputRemoting__NewLayoutMsg::__InputRemoting__NewLayoutMsg() {}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "layout", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "deviceId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "usages", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "description", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__InputRemoting__NewDeviceMsg__Data::__InputRemoting__NewDeviceMsg__Data(::StringW name, ::StringW layout, int32_t deviceId,
                                                                                                      ::ArrayW<::StringW, ::Array<::StringW>*> usages,
                                                                                                      ::UnityEngine::InputSystem::Layouts::InputDeviceDescription description) noexcept {
  this->name = name;
  this->layout = layout;
  this->deviceId = deviceId;
  this->usages = usages;
  this->description = description;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputRemoting__NewDeviceMsg__Data::__InputRemoting__NewDeviceMsg__Data() {}
//  Writing Method size for method: ::GlobalNamespace::__InputRemoting__NewDeviceMsg____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__InputRemoting__NewDeviceMsg____c::*)()>(
    &::GlobalNamespace::__InputRemoting__NewDeviceMsg____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aa67f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputRemoting__NewDeviceMsg____c*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputRemoting__NewDeviceMsg____c._Create_b__1_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__InputRemoting__NewDeviceMsg____c::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString)>(&::GlobalNamespace::__InputRemoting__NewDeviceMsg____c::_Create_b__1_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2aa6800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputRemoting__NewDeviceMsg____c*>::get(), "<Create>b__1_0", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__InputRemoting__NewDeviceMsg____c::setStaticF___9(::GlobalNamespace::__InputRemoting__NewDeviceMsg____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__InputRemoting__NewDeviceMsg____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputRemoting__NewDeviceMsg____c*>::get>(
      std::forward<::GlobalNamespace::__InputRemoting__NewDeviceMsg____c*>(value));
}
inline ::GlobalNamespace::__InputRemoting__NewDeviceMsg____c* GlobalNamespace::__InputRemoting__NewDeviceMsg____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__InputRemoting__NewDeviceMsg____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputRemoting__NewDeviceMsg____c*>::get>();
}
inline void GlobalNamespace::__InputRemoting__NewDeviceMsg____c::setStaticF___9__1_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__1_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputRemoting__NewDeviceMsg____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* GlobalNamespace::__InputRemoting__NewDeviceMsg____c::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__1_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputRemoting__NewDeviceMsg____c*>::get>();
}
inline ::GlobalNamespace::__InputRemoting__NewDeviceMsg____c* GlobalNamespace::__InputRemoting__NewDeviceMsg____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__InputRemoting__NewDeviceMsg____c*>());
}
inline void GlobalNamespace::__InputRemoting__NewDeviceMsg____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputRemoting__NewDeviceMsg____c*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__InputRemoting__NewDeviceMsg____c::_Create_b__1_0(::UnityEngine::InputSystem::Utilities::InternedString x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputRemoting__NewDeviceMsg____c*>::get(), "<Create>b__1_0", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputRemoting__NewDeviceMsg____c::__InputRemoting__NewDeviceMsg____c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputRemoting__NewDeviceMsg.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputRemoting__Message (*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::__InputRemoting__NewDeviceMsg::Create)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x2aa4fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__NewDeviceMsg*>::get(), "Create", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputRemoting__NewDeviceMsg.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputRemoting*, ::UnityEngine::InputSystem::__InputRemoting__Message)>(
    &::UnityEngine::InputSystem::__InputRemoting__NewDeviceMsg::Process)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x2aa3d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__NewDeviceMsg*>::get(), "Process", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputRemoting__Message>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::__InputRemoting__Message UnityEngine::InputSystem::__InputRemoting__NewDeviceMsg::Create(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__NewDeviceMsg*>::get(), "Create", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputRemoting__Message, false>(nullptr, ___internal_method, device);
}
inline void UnityEngine::InputSystem::__InputRemoting__NewDeviceMsg::Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::__InputRemoting__Message msg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__NewDeviceMsg*>::get(), "Process", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputRemoting__Message>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver, msg);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputRemoting__NewDeviceMsg::__InputRemoting__NewDeviceMsg() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg.CreateResetEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputRemoting__Message (*)(::UnityEngine::InputSystem::InputDevice*, bool)>(
    &::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg::CreateResetEvent)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2aa56bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg*>::get(), "CreateResetEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg.CreateStateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputRemoting__Message (*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg::CreateStateEvent)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2aa51b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg*>::get(), "CreateStateEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputRemoting__Message (*)(
    ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>, int32_t)>(&::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg::Create)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2aa5310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg*>::get(), "Create", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputRemoting*, ::UnityEngine::InputSystem::__InputRemoting__Message)>(
    &::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg::Process)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2aa4260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg*>::get(), "Process", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputRemoting__Message>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::__InputRemoting__Message UnityEngine::InputSystem::__InputRemoting__NewEventsMsg::CreateResetEvent(::UnityEngine::InputSystem::InputDevice* device,
                                                                                                                                      bool isHardReset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg*>::get(), "CreateResetEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputRemoting__Message, false>(nullptr, ___internal_method, device, isHardReset);
}
inline ::UnityEngine::InputSystem::__InputRemoting__Message UnityEngine::InputSystem::__InputRemoting__NewEventsMsg::CreateStateEvent(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg*>::get(), "CreateStateEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputRemoting__Message, false>(nullptr, ___internal_method, device);
}
inline ::UnityEngine::InputSystem::__InputRemoting__Message
UnityEngine::InputSystem::__InputRemoting__NewEventsMsg::Create(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> events, int32_t eventCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg*>::get(), "Create", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputRemoting__Message, false>(nullptr, ___internal_method, events, eventCount);
}
inline void UnityEngine::InputSystem::__InputRemoting__NewEventsMsg::Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::__InputRemoting__Message msg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg*>::get(), "Process", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputRemoting__Message>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver, msg);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg::__InputRemoting__NewEventsMsg() {}
// Ctor Parameters [CppParam { name: "deviceId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "usages", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "",
// def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__InputRemoting__ChangeUsageMsg__Data::__InputRemoting__ChangeUsageMsg__Data(int32_t deviceId, ::ArrayW<::StringW, ::Array<::StringW>*> usages) noexcept {
  this->deviceId = deviceId;
  this->usages = usages;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputRemoting__ChangeUsageMsg__Data::__InputRemoting__ChangeUsageMsg__Data() {}
//  Writing Method size for method: ::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c::*)()>(
    &::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aa69c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c._Create_b__1_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString)>(&::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c::_Create_b__1_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2aa69c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c*>::get(), "<Create>b__1_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__InputRemoting__ChangeUsageMsg____c::setStaticF___9(::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c*>::get>(
      std::forward<::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c*>(value));
}
inline ::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c* GlobalNamespace::__InputRemoting__ChangeUsageMsg____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c*>::get>();
}
inline void GlobalNamespace::__InputRemoting__ChangeUsageMsg____c::setStaticF___9__1_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__1_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* GlobalNamespace::__InputRemoting__ChangeUsageMsg____c::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__1_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c*>::get>();
}
inline ::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c* GlobalNamespace::__InputRemoting__ChangeUsageMsg____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c*>());
}
inline void GlobalNamespace::__InputRemoting__ChangeUsageMsg____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__InputRemoting__ChangeUsageMsg____c::_Create_b__1_0(::UnityEngine::InputSystem::Utilities::InternedString x) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c*>::get(), "<Create>b__1_0", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c::__InputRemoting__ChangeUsageMsg____c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputRemoting__ChangeUsageMsg.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputRemoting__Message (*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::__InputRemoting__ChangeUsageMsg::Create)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2aa5518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__ChangeUsageMsg*>::get(), "Create", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputRemoting__ChangeUsageMsg.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputRemoting*, ::UnityEngine::InputSystem::__InputRemoting__Message)>(
    &::UnityEngine::InputSystem::__InputRemoting__ChangeUsageMsg::Process)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x2aa4320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__ChangeUsageMsg*>::get(), "Process", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputRemoting__Message>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::__InputRemoting__Message UnityEngine::InputSystem::__InputRemoting__ChangeUsageMsg::Create(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__ChangeUsageMsg*>::get(), "Create", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputRemoting__Message, false>(nullptr, ___internal_method, device);
}
inline void UnityEngine::InputSystem::__InputRemoting__ChangeUsageMsg::Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::__InputRemoting__Message msg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__ChangeUsageMsg*>::get(), "Process", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputRemoting__Message>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver, msg);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputRemoting__ChangeUsageMsg::__InputRemoting__ChangeUsageMsg() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputRemoting__RemoveDeviceMsg.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputRemoting__Message (*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::__InputRemoting__RemoveDeviceMsg::Create)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2aa54a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__RemoveDeviceMsg*>::get(), "Create", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputRemoting__RemoveDeviceMsg.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputRemoting*, ::UnityEngine::InputSystem::__InputRemoting__Message)>(
    &::UnityEngine::InputSystem::__InputRemoting__RemoveDeviceMsg::Process)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2aa4630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__RemoveDeviceMsg*>::get(), "Process", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputRemoting__Message>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::__InputRemoting__Message UnityEngine::InputSystem::__InputRemoting__RemoveDeviceMsg::Create(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__RemoveDeviceMsg*>::get(), "Create", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputRemoting__Message, false>(nullptr, ___internal_method, device);
}
inline void UnityEngine::InputSystem::__InputRemoting__RemoveDeviceMsg::Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::__InputRemoting__Message msg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputRemoting__RemoveDeviceMsg*>::get(), "Process", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputRemoting__Message>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver, msg);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputRemoting__RemoveDeviceMsg::__InputRemoting__RemoveDeviceMsg() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.get_sending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputRemoting::*)()>(&::UnityEngine::InputSystem::InputRemoting::get_sending)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aa351c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "get_sending",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.set_sending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)(bool)>(&::UnityEngine::InputSystem::InputRemoting::set_sending)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2aa3528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "set_sending", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)(::UnityEngine::InputSystem::InputManager*, bool)>(
    &::UnityEngine::InputSystem::InputRemoting::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2aa3544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.StartSending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)()>(&::UnityEngine::InputSystem::InputRemoting::StartSending)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2aa35d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                               "StartSending", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.StopSending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)()>(&::UnityEngine::InputSystem::InputRemoting::StopSending)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2aa386c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "StopSending",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)(::UnityEngine::InputSystem::__InputRemoting__Message)>(
    &::UnityEngine::InputSystem::InputRemoting::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2aa3ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnNext",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputRemoting__Message>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)(::System::Exception*)>(
    &::UnityEngine::InputSystem::InputRemoting::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2aa4710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnError",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)()>(
    &::UnityEngine::InputSystem::InputRemoting::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2aa4714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                 "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.Subscribe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IDisposable* (
    ::UnityEngine::InputSystem::InputRemoting::*)(::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*)>(&::UnityEngine::InputSystem::InputRemoting::Subscribe)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2aa4718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "Subscribe", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.SendInitialMessages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)()>(
    &::UnityEngine::InputSystem::InputRemoting::SendInitialMessages)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2aa3854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                               "SendInitialMessages", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.SendAllGeneratedLayouts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)()>(
    &::UnityEngine::InputSystem::InputRemoting::SendAllGeneratedLayouts)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2aa4804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                               "SendAllGeneratedLayouts", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.SendLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputRemoting::SendLayout)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2aa4ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "SendLayout", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.SendAllDevices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)()>(&::UnityEngine::InputSystem::InputRemoting::SendAllDevices)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2aa4958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                               "SendAllDevices", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.SendDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputRemoting::SendDevice)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2aa4f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "SendDevice", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.SendEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)(
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::InputRemoting::SendEvent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2aa52ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "SendEvent", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.SendDeviceChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)(
    ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange)>(&::UnityEngine::InputSystem::InputRemoting::SendDeviceChange)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2aa53e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "SendDeviceChange", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDeviceChange>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.SendLayoutChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)(::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange)>(
    &::UnityEngine::InputSystem::InputRemoting::SendLayoutChange)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2aa5734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "SendLayoutChange", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlLayoutChange>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)(::UnityEngine::InputSystem::__InputRemoting__Message)>(
    &::UnityEngine::InputSystem::InputRemoting::Send)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2aa4dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "Send", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputRemoting__Message>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.FindOrCreateSenderRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputRemoting::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputRemoting::FindOrCreateSenderRecord)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2aa5838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "FindOrCreateSenderRecord",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.BuildLayoutNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (*)(int32_t)>(
    &::UnityEngine::InputSystem::InputRemoting::BuildLayoutNamespace)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2aa58dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "BuildLayoutNamespace",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.FindLocalDeviceId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputRemoting::*)(int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputRemoting::FindLocalDeviceId)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2aa597c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "FindLocalDeviceId", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.TryGetDeviceByRemoteId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::InputRemoting::*)(int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputRemoting::TryGetDeviceByRemoteId)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2aa59f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "TryGetDeviceByRemoteId", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.get_manager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputManager* (::UnityEngine::InputSystem::InputRemoting::*)()>(
    &::UnityEngine::InputSystem::InputRemoting::get_manager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aa5a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "get_manager",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputRemoting.RemoveRemoteDevices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputRemoting::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputRemoting::RemoveRemoteDevices)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2aa5a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "RemoveRemoteDevices",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IObservable_1<::UnityEngine::InputSystem::__InputRemoting__Message>"
constexpr UnityEngine::InputSystem::InputRemoting::operator ::System::IObservable_1<::UnityEngine::InputSystem::__InputRemoting__Message>*() noexcept {
  return static_cast<::System::IObservable_1<::UnityEngine::InputSystem::__InputRemoting__Message>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>"
constexpr UnityEngine::InputSystem::InputRemoting::operator ::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*() noexcept {
  return static_cast<::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::InputSystem::__InputRemoting__Flags& UnityEngine::InputSystem::InputRemoting::__get_m_Flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr ::UnityEngine::InputSystem::__InputRemoting__Flags const& UnityEngine::InputSystem::InputRemoting::__get_m_Flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr void UnityEngine::InputSystem::InputRemoting::__set_m_Flags(::UnityEngine::InputSystem::__InputRemoting__Flags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Flags = value;
}
constexpr ::UnityEngine::InputSystem::InputManager*& UnityEngine::InputSystem::InputRemoting::__get_m_LocalManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalManager;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputManager*> const& UnityEngine::InputSystem::InputRemoting::__get_m_LocalManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalManager;
}
constexpr void UnityEngine::InputSystem::InputRemoting::__set_m_LocalManager(::UnityEngine::InputSystem::InputManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LocalManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__Subscriber*, ::Array<::UnityEngine::InputSystem::__InputRemoting__Subscriber*>*>&
UnityEngine::InputSystem::InputRemoting::__get_m_Subscribers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Subscribers;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__Subscriber*, ::Array<::UnityEngine::InputSystem::__InputRemoting__Subscriber*>*> const&
UnityEngine::InputSystem::InputRemoting::__get_m_Subscribers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Subscribers;
}
constexpr void UnityEngine::InputSystem::InputRemoting::__set_m_Subscribers(
    ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__Subscriber*, ::Array<::UnityEngine::InputSystem::__InputRemoting__Subscriber*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Subscribers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__RemoteSender, ::Array<::UnityEngine::InputSystem::__InputRemoting__RemoteSender>*>&
UnityEngine::InputSystem::InputRemoting::__get_m_Senders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Senders;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__RemoteSender, ::Array<::UnityEngine::InputSystem::__InputRemoting__RemoteSender>*> const&
UnityEngine::InputSystem::InputRemoting::__get_m_Senders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Senders;
}
constexpr void UnityEngine::InputSystem::InputRemoting::__set_m_Senders(
    ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__RemoteSender, ::Array<::UnityEngine::InputSystem::__InputRemoting__RemoteSender>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Senders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::InputSystem::InputRemoting::get_sending() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "get_sending",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputRemoting::set_sending(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "set_sending", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @param startSendingOnConnect: bool (default: false)
inline ::UnityEngine::InputSystem::InputRemoting* UnityEngine::InputSystem::InputRemoting::New_ctor(::UnityEngine::InputSystem::InputManager* manager, bool startSendingOnConnect) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::InputRemoting*>(manager, startSendingOnConnect));
}
/// @param startSendingOnConnect: bool (default: false)
inline void UnityEngine::InputSystem::InputRemoting::_ctor(::UnityEngine::InputSystem::InputManager* manager, bool startSendingOnConnect) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputManager*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, manager, startSendingOnConnect);
}
inline void UnityEngine::InputSystem::InputRemoting::StartSending() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "StartSending",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputRemoting::StopSending() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "StopSending",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputRemoting::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext(::UnityEngine::InputSystem::__InputRemoting__Message msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnNext",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputRemoting__Message>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline void UnityEngine::InputSystem::InputRemoting::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError(::System::Exception* error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                             "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnError", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline void UnityEngine::InputSystem::InputRemoting::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                               "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IDisposable* UnityEngine::InputSystem::InputRemoting::Subscribe(::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>* observer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "Subscribe", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IDisposable*, false>(this, ___internal_method, observer);
}
inline void UnityEngine::InputSystem::InputRemoting::SendInitialMessages() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                             "SendInitialMessages", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputRemoting::SendAllGeneratedLayouts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                             "SendAllGeneratedLayouts", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputRemoting::SendLayout(::StringW layoutName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "SendLayout", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, layoutName);
}
inline void UnityEngine::InputSystem::InputRemoting::SendAllDevices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                             "SendAllDevices", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputRemoting::SendDevice(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "SendDevice", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputRemoting::SendEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "SendEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventPtr, device);
}
inline void UnityEngine::InputSystem::InputRemoting::SendDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "SendDeviceChange", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDeviceChange>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, change);
}
inline void UnityEngine::InputSystem::InputRemoting::SendLayoutChange(::StringW layout, ::UnityEngine::InputSystem::InputControlLayoutChange change) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "SendLayoutChange", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlLayoutChange>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, layout, change);
}
inline void UnityEngine::InputSystem::InputRemoting::Send(::UnityEngine::InputSystem::__InputRemoting__Message msg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "Send", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputRemoting__Message>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline int32_t UnityEngine::InputSystem::InputRemoting::FindOrCreateSenderRecord(int32_t senderId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "FindOrCreateSenderRecord",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, senderId);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::InputRemoting::BuildLayoutNamespace(int32_t senderId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "BuildLayoutNamespace",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(nullptr, ___internal_method, senderId);
}
inline int32_t UnityEngine::InputSystem::InputRemoting::FindLocalDeviceId(int32_t remoteDeviceId, int32_t senderIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "FindLocalDeviceId", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, remoteDeviceId, senderIndex);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputRemoting::TryGetDeviceByRemoteId(int32_t remoteDeviceId, int32_t senderIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "TryGetDeviceByRemoteId", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(this, ___internal_method, remoteDeviceId, senderIndex);
}
inline ::UnityEngine::InputSystem::InputManager* UnityEngine::InputSystem::InputRemoting::get_manager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "get_manager",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputManager*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputRemoting::RemoveRemoteDevices(int32_t participantId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "RemoveRemoteDevices",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, participantId);
}
template <typename TData> inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnityEngine::InputSystem::InputRemoting::SerializeData(TData data) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(),
                                                                                  "SerializeData", std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TData>::get() },
                                                                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TData>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, data);
}
template <typename TData> inline TData UnityEngine::InputSystem::InputRemoting::DeserializeData(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputRemoting*>::get(), "DeserializeData",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TData>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TData>::get() }));
  return ::cordl_internals::RunMethodRethrow<TData, false>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputRemoting::InputRemoting() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
