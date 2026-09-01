#pragma once
// IWYU pragma private; include "UnityEngine\AndroidJavaClass.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_impl.hpp"
#include "UnityEngine/zzzz__AndroidJavaClass_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::AndroidJavaClass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AndroidJavaClass::*)(::StringW)>(&::UnityEngine::AndroidJavaClass::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a2dbe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaClass*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaClass._AndroidJavaClass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AndroidJavaClass::*)(::StringW)>(&::UnityEngine::AndroidJavaClass::_AndroidJavaClass)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6a316f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaClass*>(), { "_AndroidJavaClass", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaClass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AndroidJavaClass::*)(::System::IntPtr)>(&::UnityEngine::AndroidJavaClass::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6a310f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaClass*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::AndroidJavaClass::_ctor(::StringW className) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaClass*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, className);
}
inline void UnityEngine::AndroidJavaClass::_AndroidJavaClass(::StringW className) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaClass*>(), { "_AndroidJavaClass", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, className);
}
inline void UnityEngine::AndroidJavaClass::_ctor(::System::IntPtr jclass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaClass*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jclass);
}
inline ::UnityEngine::AndroidJavaClass* UnityEngine::AndroidJavaClass::New_ctor(::StringW className) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AndroidJavaClass*>(className));
}
inline ::UnityEngine::AndroidJavaClass* UnityEngine::AndroidJavaClass::New_ctor(::System::IntPtr jclass) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AndroidJavaClass*>(jclass));
}
// Ctor Parameters []
constexpr ::UnityEngine::AndroidJavaClass::AndroidJavaClass() {}
