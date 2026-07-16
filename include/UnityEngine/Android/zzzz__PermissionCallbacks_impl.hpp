#pragma once
// IWYU pragma private; include "UnityEngine/Android/PermissionCallbacks.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
#include "UnityEngine/Android/zzzz__PermissionCallbacks_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Android/zzzz__PermissionCallbacks_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Android::PermissionCallbacks_Result::PermissionCallbacks_Result(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::PermissionCallbacks_Result::PermissionCallbacks_Result() {}
constexpr ::UnityEngine::Android::PermissionCallbacks_Result UnityEngine::Android::PermissionCallbacks_Result::Dismissed{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Android::PermissionCallbacks_Result UnityEngine::Android::PermissionCallbacks_Result::Granted{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Android::PermissionCallbacks_Result UnityEngine::Android::PermissionCallbacks_Result::Denied{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Android::PermissionCallbacks_Result UnityEngine::Android::PermissionCallbacks_Result::DeniedDontAskAgain{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::Android::PermissionCallbacks.add_PermissionGranted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Android::PermissionCallbacks::*)(::System::Action_1<::StringW>*)>(
    &::UnityEngine::Android::PermissionCallbacks::add_PermissionGranted)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6a2e824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::PermissionCallbacks*>(), { "add_PermissionGranted", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::PermissionCallbacks.remove_PermissionGranted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Android::PermissionCallbacks::*)(::System::Action_1<::StringW>*)>(
    &::UnityEngine::Android::PermissionCallbacks::remove_PermissionGranted)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6a2e8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::PermissionCallbacks*>(), { "remove_PermissionGranted", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::PermissionCallbacks.add_PermissionDenied
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Android::PermissionCallbacks::*)(::System::Action_1<::StringW>*)>(
    &::UnityEngine::Android::PermissionCallbacks::add_PermissionDenied)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6a2e9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::PermissionCallbacks*>(), { "add_PermissionDenied", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::PermissionCallbacks.remove_PermissionDenied
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Android::PermissionCallbacks::*)(::System::Action_1<::StringW>*)>(
    &::UnityEngine::Android::PermissionCallbacks::remove_PermissionDenied)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6a2ea64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::PermissionCallbacks*>(), { "remove_PermissionDenied", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::PermissionCallbacks.add_PermissionDeniedAndDontAskAgain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Android::PermissionCallbacks::*)(::System::Action_1<::StringW>*)>(
    &::UnityEngine::Android::PermissionCallbacks::add_PermissionDeniedAndDontAskAgain)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6a2eb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::PermissionCallbacks*>(),
                                                                                           { "add_PermissionDeniedAndDontAskAgain", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::PermissionCallbacks.remove_PermissionDeniedAndDontAskAgain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Android::PermissionCallbacks::*)(::System::Action_1<::StringW>*)>(
    &::UnityEngine::Android::PermissionCallbacks::remove_PermissionDeniedAndDontAskAgain)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6a2ebe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::PermissionCallbacks*>(),
                                                                                           { "remove_PermissionDeniedAndDontAskAgain", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::PermissionCallbacks.add_PermissionRequestDismissed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Android::PermissionCallbacks::*)(::System::Action_1<::StringW>*)>(
    &::UnityEngine::Android::PermissionCallbacks::add_PermissionRequestDismissed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6a2eca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::PermissionCallbacks*>(),
                                                                                           { "add_PermissionRequestDismissed", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::PermissionCallbacks.remove_PermissionRequestDismissed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Android::PermissionCallbacks::*)(::System::Action_1<::StringW>*)>(
    &::UnityEngine::Android::PermissionCallbacks::remove_PermissionRequestDismissed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6a2ed64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::PermissionCallbacks*>(),
                                                                                           { "remove_PermissionRequestDismissed", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::PermissionCallbacks._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Android::PermissionCallbacks::*)()>(&::UnityEngine::Android::PermissionCallbacks::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6a2ee24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::PermissionCallbacks*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::PermissionCallbacks.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::Android::PermissionCallbacks::*)(::StringW, ::System::IntPtr)>(
    &::UnityEngine::Android::PermissionCallbacks::Invoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a2ee98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Android::PermissionCallbacks*>(), { ::i2c::class_of<::UnityEngine::Android::PermissionCallbacks*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::PermissionCallbacks.onPermissionResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Android::PermissionCallbacks::*)(::System::IntPtr)>(&::UnityEngine::Android::PermissionCallbacks::onPermissionResult)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6a2ef28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::PermissionCallbacks*>(), { "onPermissionResult", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::StringW>*& UnityEngine::Android::PermissionCallbacks::__cordl_internal_get_PermissionGranted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PermissionGranted;
}
constexpr ::System::Action_1<::StringW>* const& UnityEngine::Android::PermissionCallbacks::__cordl_internal_get_PermissionGranted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PermissionGranted;
}
constexpr void UnityEngine::Android::PermissionCallbacks::__cordl_internal_set_PermissionGranted(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PermissionGranted = value;
}
constexpr ::System::Action_1<::StringW>*& UnityEngine::Android::PermissionCallbacks::__cordl_internal_get_PermissionDenied() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PermissionDenied;
}
constexpr ::System::Action_1<::StringW>* const& UnityEngine::Android::PermissionCallbacks::__cordl_internal_get_PermissionDenied() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PermissionDenied;
}
constexpr void UnityEngine::Android::PermissionCallbacks::__cordl_internal_set_PermissionDenied(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PermissionDenied = value;
}
constexpr ::System::Action_1<::StringW>*& UnityEngine::Android::PermissionCallbacks::__cordl_internal_get_PermissionDeniedAndDontAskAgain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PermissionDeniedAndDontAskAgain;
}
constexpr ::System::Action_1<::StringW>* const& UnityEngine::Android::PermissionCallbacks::__cordl_internal_get_PermissionDeniedAndDontAskAgain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PermissionDeniedAndDontAskAgain;
}
constexpr void UnityEngine::Android::PermissionCallbacks::__cordl_internal_set_PermissionDeniedAndDontAskAgain(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PermissionDeniedAndDontAskAgain = value;
}
constexpr ::System::Action_1<::StringW>*& UnityEngine::Android::PermissionCallbacks::__cordl_internal_get_PermissionRequestDismissed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PermissionRequestDismissed;
}
constexpr ::System::Action_1<::StringW>* const& UnityEngine::Android::PermissionCallbacks::__cordl_internal_get_PermissionRequestDismissed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PermissionRequestDismissed;
}
constexpr void UnityEngine::Android::PermissionCallbacks::__cordl_internal_set_PermissionRequestDismissed(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PermissionRequestDismissed = value;
}
inline void UnityEngine::Android::PermissionCallbacks::add_PermissionGranted(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::PermissionCallbacks*>(), { "add_PermissionGranted", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Android::PermissionCallbacks::remove_PermissionGranted(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::PermissionCallbacks*>(), { "remove_PermissionGranted", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Android::PermissionCallbacks::add_PermissionDenied(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::PermissionCallbacks*>(), { "add_PermissionDenied", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Android::PermissionCallbacks::remove_PermissionDenied(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::PermissionCallbacks*>(), { "remove_PermissionDenied", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Android::PermissionCallbacks::add_PermissionDeniedAndDontAskAgain(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::PermissionCallbacks*>(),
                                                                                         { "add_PermissionDeniedAndDontAskAgain", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Android::PermissionCallbacks::remove_PermissionDeniedAndDontAskAgain(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::PermissionCallbacks*>(),
                                                                                         { "remove_PermissionDeniedAndDontAskAgain", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Android::PermissionCallbacks::add_PermissionRequestDismissed(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::PermissionCallbacks*>(),
                                                                                         { "add_PermissionRequestDismissed", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Android::PermissionCallbacks::remove_PermissionRequestDismissed(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::PermissionCallbacks*>(),
                                                                                         { "remove_PermissionRequestDismissed", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Android::PermissionCallbacks::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::PermissionCallbacks*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Android::PermissionCallbacks::Invoke(::StringW methodName, ::System::IntPtr javaArgs) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Android::PermissionCallbacks*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, methodName, javaArgs);
}
inline void UnityEngine::Android::PermissionCallbacks::onPermissionResult(::System::IntPtr javaArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::PermissionCallbacks*>(), { "onPermissionResult", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, javaArgs);
}
inline ::UnityEngine::Android::PermissionCallbacks* UnityEngine::Android::PermissionCallbacks::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Android::PermissionCallbacks*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::PermissionCallbacks::PermissionCallbacks() {}
