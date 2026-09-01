#pragma once
// IWYU pragma private; include "Oculus\Platform\Callback.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Callback_RequestCallback::*)()>(&::Oculus::Platform::Callback_RequestCallback::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5db5b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Callback_RequestCallback*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Callback_RequestCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Callback_RequestCallback::*)(::Oculus::Platform::Message_Callback*)>(
    &::Oculus::Platform::Callback_RequestCallback::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db53dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Callback_RequestCallback*>(), { ".ctor", {}, { ::i2c::type_of<::Oculus::Platform::Message_Callback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Callback_RequestCallback.HandleMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Callback_RequestCallback::*)(::Oculus::Platform::Message*)>(
    &::Oculus::Platform::Callback_RequestCallback::HandleMessage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5db5b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::Callback_RequestCallback*>(), { ::i2c::class_of<::Oculus::Platform::Callback_RequestCallback*>(), 4 }));
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
  this->___messageCallback = value;
}
inline void Oculus::Platform::Callback_RequestCallback::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Callback_RequestCallback*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::Callback_RequestCallback::_ctor(::Oculus::Platform::Message_Callback* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Callback_RequestCallback*>(), { ".ctor", {}, { ::i2c::type_of<::Oculus::Platform::Message_Callback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Oculus::Platform::Callback_RequestCallback::HandleMessage(::Oculus::Platform::Message* msg) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Callback_RequestCallback*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline ::Oculus::Platform::Callback_RequestCallback* Oculus::Platform::Callback_RequestCallback::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Callback_RequestCallback*>());
}
inline ::Oculus::Platform::Callback_RequestCallback* Oculus::Platform::Callback_RequestCallback::New_ctor(::Oculus::Platform::Message_Callback* callback) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Callback_RequestCallback*>(callback));
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
  this->___callback = value;
}
template <typename T> inline void Oculus::Platform::Callback_RequestCallback_1<T>::_ctor(::Oculus::Platform::Message_1_Callback<T>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Callback_RequestCallback_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
template <typename T> inline void Oculus::Platform::Callback_RequestCallback_1<T>::HandleMessage(::Oculus::Platform::Message* msg) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Callback_RequestCallback_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
template <typename T> inline ::Oculus::Platform::Callback_RequestCallback_1<T>* Oculus::Platform::Callback_RequestCallback_1<T>::New_ctor(::Oculus::Platform::Message_1_Callback<T>* callback) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Callback_RequestCallback_1<T>*>(callback));
}
// Ctor Parameters []
template <typename T> constexpr ::Oculus::Platform::Callback_RequestCallback_1<T>::Callback_RequestCallback_1() {}
//  Writing Method size for method: ::Oculus::Platform::Callback.SetNotificationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_MessageType, ::Oculus::Platform::Message_Callback*)>(
    &::Oculus::Platform::Callback::SetNotificationCallback)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5db52c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Callback*>(),
                                         { "SetNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_MessageType>(), ::i2c::type_of<::Oculus::Platform::Message_Callback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Callback.AddRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Request*)>(&::Oculus::Platform::Callback::AddRequest)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5db53e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Callback*>(), { "AddRequest", {}, { ::i2c::type_of<::Oculus::Platform::Request*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Callback.RunCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Oculus::Platform::Callback::RunCallbacks)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5db54e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Callback*>(), { "RunCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Callback.RunLimitedCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t)>(&::Oculus::Platform::Callback::RunLimitedCallbacks)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5db5860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Callback*>(), { "RunLimitedCallbacks", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Callback.OnApplicationQuit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Oculus::Platform::Callback::OnApplicationQuit)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5db58ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Callback*>(), { "OnApplicationQuit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Callback.FlushJoinIntentNotificationQueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Oculus::Platform::Callback::FlushJoinIntentNotificationQueue)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5db599c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Callback*>(), { "FlushJoinIntentNotificationQueue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Callback.HandleMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message*)>(&::Oculus::Platform::Callback::HandleMessage)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5db5634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Callback*>(), { "HandleMessage", {}, { ::i2c::type_of<::Oculus::Platform::Message*>() } })));
    return ___internal_method;
  }
};
inline void Oculus::Platform::Callback::setStaticF_requestIDsToRequests(::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Request*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Request*>*, "requestIDsToRequests", ::Oculus::Platform::Callback*>(
      std::forward<::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Request*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Request*>* Oculus::Platform::Callback::getStaticF_requestIDsToRequests() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Request*>*, "requestIDsToRequests", ::Oculus::Platform::Callback*>();
}
inline void Oculus::Platform::Callback::setStaticF_notificationCallbacks(
    ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::Message_MessageType, ::Oculus::Platform::Callback_RequestCallback*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Oculus::Platform::Message_MessageType, ::Oculus::Platform::Callback_RequestCallback*>*, "notificationCallbacks",
                                    ::Oculus::Platform::Callback*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::Oculus::Platform::Message_MessageType, ::Oculus::Platform::Callback_RequestCallback*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::Message_MessageType, ::Oculus::Platform::Callback_RequestCallback*>*
Oculus::Platform::Callback::getStaticF_notificationCallbacks() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Oculus::Platform::Message_MessageType, ::Oculus::Platform::Callback_RequestCallback*>*,
                                           "notificationCallbacks", ::Oculus::Platform::Callback*>();
}
inline void Oculus::Platform::Callback::setStaticF_hasRegisteredJoinIntentNotificationHandler(bool value) {
  ::cordl_internals::setStaticField<bool, "hasRegisteredJoinIntentNotificationHandler", ::Oculus::Platform::Callback*>(std::forward<bool>(value));
}
inline bool Oculus::Platform::Callback::getStaticF_hasRegisteredJoinIntentNotificationHandler() {
  return ::cordl_internals::getStaticField<bool, "hasRegisteredJoinIntentNotificationHandler", ::Oculus::Platform::Callback*>();
}
inline void Oculus::Platform::Callback::setStaticF_latestPendingJoinIntentNotifications(::Oculus::Platform::Message* value) {
  ::cordl_internals::setStaticField<::Oculus::Platform::Message*, "latestPendingJoinIntentNotifications", ::Oculus::Platform::Callback*>(std::forward<::Oculus::Platform::Message*>(value));
}
inline ::Oculus::Platform::Message* Oculus::Platform::Callback::getStaticF_latestPendingJoinIntentNotifications() {
  return ::cordl_internals::getStaticField<::Oculus::Platform::Message*, "latestPendingJoinIntentNotifications", ::Oculus::Platform::Callback*>();
}
template <typename T> inline void Oculus::Platform::Callback::SetNotificationCallback(::Oculus::Platform::Message_MessageType type, ::Oculus::Platform::Message_1_Callback<T>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Oculus::Platform::Callback*>(),
          { "SetNotificationCallback", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Oculus::Platform::Message_MessageType>(), ::i2c::type_of<::Oculus::Platform::Message_1_Callback<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, callback);
}
inline void Oculus::Platform::Callback::SetNotificationCallback(::Oculus::Platform::Message_MessageType type, ::Oculus::Platform::Message_Callback* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Callback*>(),
                                       { "SetNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_MessageType>(), ::i2c::type_of<::Oculus::Platform::Message_Callback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, callback);
}
inline void Oculus::Platform::Callback::AddRequest(::Oculus::Platform::Request* request) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Callback*>(), { "AddRequest", {}, { ::i2c::type_of<::Oculus::Platform::Request*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request);
}
inline void Oculus::Platform::Callback::RunCallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Callback*>(), { "RunCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Oculus::Platform::Callback::RunLimitedCallbacks(uint32_t limit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Callback*>(), { "RunLimitedCallbacks", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, limit);
}
inline void Oculus::Platform::Callback::OnApplicationQuit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Callback*>(), { "OnApplicationQuit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Oculus::Platform::Callback::FlushJoinIntentNotificationQueue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Callback*>(), { "FlushJoinIntentNotificationQueue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Oculus::Platform::Callback::HandleMessage(::Oculus::Platform::Message* msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Callback*>(), { "HandleMessage", {}, { ::i2c::type_of<::Oculus::Platform::Message*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Callback::Callback() {}
