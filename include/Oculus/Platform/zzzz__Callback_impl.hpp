#pragma once
// IWYU pragma private; include "Oculus/Platform/Callback.hpp"
#include "Oculus/Platform/zzzz__Callback_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Callback_def.hpp"
#include "Oculus/Platform/zzzz__Callback_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Callback_RequestCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Callback_RequestCallback::*)()>(&::Oculus::Platform::Callback_RequestCallback::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ba0bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback_RequestCallback*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Callback_RequestCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Callback_RequestCallback::*)(::Oculus::Platform::Message_Callback*)>(
    &::Oculus::Platform::Callback_RequestCallback::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ba0440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback_RequestCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_Callback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Callback_RequestCallback.HandleMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Callback_RequestCallback::*)(::Oculus::Platform::Message*)>(
    &::Oculus::Platform::Callback_RequestCallback::HandleMessage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ba0bd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback_RequestCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback_RequestCallback*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Message_Callback*& Oculus::Platform::Callback_RequestCallback::__cordl_internal_get_messageCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageCallback;
}
constexpr ::Oculus::Platform::Message_Callback* const& Oculus::Platform::Callback_RequestCallback::__cordl_internal_get_messageCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageCallback;
}
constexpr void Oculus::Platform::Callback_RequestCallback::__cordl_internal_set_messageCallback(::Oculus::Platform::Message_Callback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___messageCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Oculus::Platform::Callback_RequestCallback::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback_RequestCallback*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Oculus::Platform::Callback_RequestCallback::_ctor(::Oculus::Platform::Message_Callback* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback_RequestCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_Callback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
inline void Oculus::Platform::Callback_RequestCallback::HandleMessage(::Oculus::Platform::Message* msg) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback_RequestCallback*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline ::Oculus::Platform::Callback_RequestCallback* Oculus::Platform::Callback_RequestCallback::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Callback_RequestCallback*>());
}
inline ::Oculus::Platform::Callback_RequestCallback* Oculus::Platform::Callback_RequestCallback::New_ctor(::Oculus::Platform::Message_Callback* callback) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Callback_RequestCallback*>(callback));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Callback_RequestCallback::Callback_RequestCallback() {}
template <typename T> constexpr ::Oculus::Platform::Message_1_Callback<T>*& Oculus::Platform::Callback_RequestCallback_1<T>::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename T> constexpr ::Oculus::Platform::Message_1_Callback<T>* const& Oculus::Platform::Callback_RequestCallback_1<T>::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename T> constexpr void Oculus::Platform::Callback_RequestCallback_1<T>::__cordl_internal_set_callback(::Oculus::Platform::Message_1_Callback<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___callback, value);
}
template <typename T> inline void Oculus::Platform::Callback_RequestCallback_1<T>::_ctor(::Oculus::Platform::Message_1_Callback<T>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback_RequestCallback_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1_Callback<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
template <typename T> inline void Oculus::Platform::Callback_RequestCallback_1<T>::HandleMessage(::Oculus::Platform::Message* msg) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback_RequestCallback_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
template <typename T> inline ::Oculus::Platform::Callback_RequestCallback_1<T>* Oculus::Platform::Callback_RequestCallback_1<T>::New_ctor(::Oculus::Platform::Message_1_Callback<T>* callback) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Callback_RequestCallback_1<T>*>(callback));
}
// Ctor Parameters []
template <typename T> constexpr ::Oculus::Platform::Callback_RequestCallback_1<T>::Callback_RequestCallback_1() {}
//  Writing Method size for method: ::Oculus::Platform::Callback.SetNotificationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::Message_MessageType, ::Oculus::Platform::Message_Callback*)>(
    &::Oculus::Platform::Callback::SetNotificationCallback)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5ba0324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get(), "SetNotificationCallback", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_MessageType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_Callback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Callback.AddRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::Request*)>(&::Oculus::Platform::Callback::AddRequest)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5ba0448;

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
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ba0544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get(), "RunCallbacks",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Callback.RunLimitedCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t)>(&::Oculus::Platform::Callback::RunLimitedCallbacks)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ba08c4;

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
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ba0950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get(), "OnApplicationQuit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Callback.FlushJoinIntentNotificationQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Oculus::Platform::Callback::FlushJoinIntentNotificationQueue)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5ba0a00;

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
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5ba0698;

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
    ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::Message_MessageType, ::Oculus::Platform::Callback_RequestCallback*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Oculus::Platform::Message_MessageType, ::Oculus::Platform::Callback_RequestCallback*>*, "notificationCallbacks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::Oculus::Platform::Message_MessageType, ::Oculus::Platform::Callback_RequestCallback*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::Message_MessageType, ::Oculus::Platform::Callback_RequestCallback*>*
Oculus::Platform::Callback::getStaticF_notificationCallbacks() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Oculus::Platform::Message_MessageType, ::Oculus::Platform::Callback_RequestCallback*>*,
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
template <typename T> inline void Oculus::Platform::Callback::SetNotificationCallback(::Oculus::Platform::Message_MessageType type, ::Oculus::Platform::Message_1_Callback<T>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get(), "SetNotificationCallback",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_MessageType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1_Callback<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, callback);
}
inline void Oculus::Platform::Callback::SetNotificationCallback(::Oculus::Platform::Message_MessageType type, ::Oculus::Platform::Message_Callback* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Callback*>::get(), "SetNotificationCallback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_MessageType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_Callback*>::get() })));
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
