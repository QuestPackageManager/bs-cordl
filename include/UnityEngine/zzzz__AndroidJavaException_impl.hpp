#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJavaException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/zzzz__AndroidJavaException_def.hpp"
//  Writing Method size for method: ::UnityEngine::AndroidJavaException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AndroidJavaException::*)(::StringW, ::StringW)>(&::UnityEngine::AndroidJavaException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6a24ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaException.get_StackTrace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AndroidJavaException::*)()>(&::UnityEngine::AndroidJavaException::get_StackTrace)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6a27d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaException*>(), { ::i2c::class_of<::UnityEngine::AndroidJavaException*>(), 8 }));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::AndroidJavaException::__cordl_internal_get_mJavaStackTrace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mJavaStackTrace;
}
constexpr ::StringW const& UnityEngine::AndroidJavaException::__cordl_internal_get_mJavaStackTrace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mJavaStackTrace;
}
constexpr void UnityEngine::AndroidJavaException::__cordl_internal_set_mJavaStackTrace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mJavaStackTrace = value;
}
inline void UnityEngine::AndroidJavaException::_ctor(::StringW message, ::StringW javaStackTrace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, javaStackTrace);
}
inline ::StringW UnityEngine::AndroidJavaException::get_StackTrace() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AndroidJavaException*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::AndroidJavaException* UnityEngine::AndroidJavaException::New_ctor(::StringW message, ::StringW javaStackTrace) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AndroidJavaException*>(message, javaStackTrace));
}
// Ctor Parameters []
constexpr ::UnityEngine::AndroidJavaException::AndroidJavaException() {}
