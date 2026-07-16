#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJavaObjectUnityOwned.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_impl.hpp"
#include "UnityEngine/zzzz__AndroidJavaObjectUnityOwned_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::AndroidJavaObjectUnityOwned._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AndroidJavaObjectUnityOwned::*)(::System::IntPtr)>(&::UnityEngine::AndroidJavaObjectUnityOwned::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a2be80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaObjectUnityOwned*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaObjectUnityOwned.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AndroidJavaObjectUnityOwned::*)(bool)>(&::UnityEngine::AndroidJavaObjectUnityOwned::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a2be84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaObjectUnityOwned*>(), { ::i2c::class_of<::UnityEngine::AndroidJavaObjectUnityOwned*>(), 5 }));
    return ___internal_method;
  }
};
inline void UnityEngine::AndroidJavaObjectUnityOwned::_ctor(::System::IntPtr jobject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaObjectUnityOwned*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jobject);
}
inline void UnityEngine::AndroidJavaObjectUnityOwned::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AndroidJavaObjectUnityOwned*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::UnityEngine::AndroidJavaObjectUnityOwned* UnityEngine::AndroidJavaObjectUnityOwned::New_ctor(::System::IntPtr jobject) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AndroidJavaObjectUnityOwned*>(jobject));
}
// Ctor Parameters []
constexpr ::UnityEngine::AndroidJavaObjectUnityOwned::AndroidJavaObjectUnityOwned() {}
