#pragma once
#include "Oculus/Platform/zzzz__Callback_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Callback_def.hpp"
#include "Oculus/Platform/zzzz__Callback_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::__Callback__RequestCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::__Callback__RequestCallback::*)()>(
    &::Oculus::Platform::__Callback__RequestCallback::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aa5c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Callback__RequestCallback*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::__Callback__RequestCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::__Callback__RequestCallback::*)(::Oculus::Platform::__Message__Callback*)>(
    &::Oculus::Platform::__Callback__RequestCallback::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2aa5558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Callback__RequestCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message__Callback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::__Callback__RequestCallback.HandleMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::__Callback__RequestCallback::*)(::Oculus::Platform::Message*)>(
    &::Oculus::Platform::__Callback__RequestCallback::HandleMessage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2aa5c88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Callback__RequestCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Callback__RequestCallback*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::__Message__Callback*& Oculus::Platform::__Callback__RequestCallback::__cordl_internal_get_messageCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageCallback;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::__Message__Callback*> const& Oculus::Platform::__Callback__RequestCallback::__cordl_internal_get_messageCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageCallback;
}
constexpr void Oculus::Platform::__Callback__RequestCallback::__cordl_internal_set_messageCallback(::Oculus::Platform::__Message__Callback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___messageCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::__Callback__RequestCallback* Oculus::Platform::__Callback__RequestCallback::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::__Callback__RequestCallback*>());
}
inline void Oculus::Platform::__Callback__RequestCallback::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Callback__RequestCallback*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Oculus::Platform::__Callback__RequestCallback* Oculus::Platform::__Callback__RequestCallback::New_ctor(::Oculus::Platform::__Message__Callback* callback) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::__Callback__RequestCallback*>(callback));
}
inline void Oculus::Platform::__Callback__RequestCallback::_ctor(::Oculus::Platform::__Message__Callback* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Callback__RequestCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message__Callback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
inline void Oculus::Platform::__Callback__RequestCallback::HandleMessage(::Oculus::Platform::Message* msg) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Callback__RequestCallback*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::__Callback__RequestCallback::__Callback__RequestCallback() {}
template <typename T> constexpr ::Oculus::Platform::__Message_1__Callback<T>*& Oculus::Platform::__Callback__RequestCallback_1<T>::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::__Message_1__Callback<T>*> const& Oculus::Platform::__Callback__RequestCallback_1<T>::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename T> constexpr void Oculus::Platform::__Callback__RequestCallback_1<T>::__cordl_internal_set_callback(::Oculus::Platform::__Message_1__Callback<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::Oculus::Platform::__Callback__RequestCallback_1<T>* Oculus::Platform::__Callback__RequestCallback_1<T>::New_ctor(::Oculus::Platform::__Message_1__Callback<T>* callback) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::__Callback__RequestCallback_1<T>*>(callback));
}
template <typename T> inline void Oculus::Platform::__Callback__RequestCallback_1<T>::_ctor(::Oculus::Platform::__Message_1__Callback<T>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Callback__RequestCallback_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
template <typename T> inline void Oculus::Platform::__Callback__RequestCallback_1<T>::HandleMessage(::Oculus::Platform::Message* msg) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Callback__RequestCallback_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
// Ctor Parameters []
template <typename T> constexpr ::Oculus::Platform::__Callback__RequestCallback_1<T>::__Callback__RequestCallback_1() {}
//  Writing Method size for method: ::Oculus::Platform::Callback.SetNotificationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::__Message__MessageType, ::Oculus::Platform::__Message__Callback*)>(
    &::Oculus::Platform::Callback::SetNotificationCallback)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2aa5444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get(), "SetNotificationCallback", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message__MessageType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message__Callback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Callback.AddRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::Request*)>(&::Oculus::Platform::Callback::AddRequest)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2aa5580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get(), "AddRequest", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Request*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Callback.RunCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Oculus::Platform::Callback::RunCallbacks)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2aa565c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get(), "RunCallbacks",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Callback.RunLimitedCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t)>(&::Oculus::Platform::Callback::RunLimitedCallbacks)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2aa59d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get(), "RunLimitedCallbacks", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Callback.OnApplicationQuit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Oculus::Platform::Callback::OnApplicationQuit)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2aa5a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get(), "OnApplicationQuit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Callback.FlushJoinIntentNotificationQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Oculus::Platform::Callback::FlushJoinIntentNotificationQueue)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2aa5b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get(), "FlushJoinIntentNotificationQueue",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Callback.HandleMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::Message*)>(&::Oculus::Platform::Callback::HandleMessage)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2aa579c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get(), "HandleMessage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
    return ___internal_method;
  }
};
inline void Oculus::Platform::Callback::setStaticF_requestIDsToRequests(::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Request*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Request*>*, "requestIDsToRequests",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Request*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Request*>* Oculus::Platform::Callback::getStaticF_requestIDsToRequests() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Request*>*, "requestIDsToRequests",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get>();
}
inline void Oculus::Platform::Callback::setStaticF_notificationCallbacks(
    ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::__Message__MessageType, ::Oculus::Platform::__Callback__RequestCallback*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Oculus::Platform::__Message__MessageType, ::Oculus::Platform::__Callback__RequestCallback*>*,
                                    "notificationCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::Oculus::Platform::__Message__MessageType, ::Oculus::Platform::__Callback__RequestCallback*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::__Message__MessageType, ::Oculus::Platform::__Callback__RequestCallback*>*
Oculus::Platform::Callback::getStaticF_notificationCallbacks() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Oculus::Platform::__Message__MessageType, ::Oculus::Platform::__Callback__RequestCallback*>*,
                                           "notificationCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get>();
}
inline void Oculus::Platform::Callback::setStaticF_hasRegisteredJoinIntentNotificationHandler(bool value) {
  ::cordl_internals::setStaticField<bool, "hasRegisteredJoinIntentNotificationHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get>(
      std::forward<bool>(value));
}
inline bool Oculus::Platform::Callback::getStaticF_hasRegisteredJoinIntentNotificationHandler() {
  return ::cordl_internals::getStaticField<bool, "hasRegisteredJoinIntentNotificationHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get>();
}
inline void Oculus::Platform::Callback::setStaticF_latestPendingJoinIntentNotifications(::Oculus::Platform::Message* value) {
  ::cordl_internals::setStaticField<::Oculus::Platform::Message*, "latestPendingJoinIntentNotifications", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get>(
      std::forward<::Oculus::Platform::Message*>(value));
}
inline ::Oculus::Platform::Message* Oculus::Platform::Callback::getStaticF_latestPendingJoinIntentNotifications() {
  return ::cordl_internals::getStaticField<::Oculus::Platform::Message*, "latestPendingJoinIntentNotifications",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get>();
}
template <typename T> inline void Oculus::Platform::Callback::SetNotificationCallback(::Oculus::Platform::__Message__MessageType type, ::Oculus::Platform::__Message_1__Callback<T>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get(), "SetNotificationCallback",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message__MessageType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, callback);
}
inline void Oculus::Platform::Callback::SetNotificationCallback(::Oculus::Platform::__Message__MessageType type, ::Oculus::Platform::__Message__Callback* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get(), "SetNotificationCallback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message__MessageType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message__Callback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, callback);
}
inline void Oculus::Platform::Callback::AddRequest(::Oculus::Platform::Request* request) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get(), "AddRequest", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Request*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, request);
}
inline void Oculus::Platform::Callback::RunCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get(), "RunCallbacks",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Oculus::Platform::Callback::RunLimitedCallbacks(uint32_t limit) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get(), "RunLimitedCallbacks", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, limit);
}
inline void Oculus::Platform::Callback::OnApplicationQuit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get(), "OnApplicationQuit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Oculus::Platform::Callback::FlushJoinIntentNotificationQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get(),
                                                                             "FlushJoinIntentNotificationQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Oculus::Platform::Callback::HandleMessage(::Oculus::Platform::Message* msg) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get(), "HandleMessage", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, msg);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Callback::Callback() {}
