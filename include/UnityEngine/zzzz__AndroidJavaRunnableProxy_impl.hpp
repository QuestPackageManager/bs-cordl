#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJavaRunnableProxy.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
#include "UnityEngine/zzzz__AndroidJavaRunnableProxy_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaRunnable_def.hpp"
//  Writing Method size for method: ::UnityEngine::AndroidJavaRunnableProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AndroidJavaRunnableProxy::*)(::UnityEngine::AndroidJavaRunnable*)>(&::UnityEngine::AndroidJavaRunnableProxy::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6a27e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaRunnableProxy*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AndroidJavaRunnable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaRunnableProxy.run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AndroidJavaRunnableProxy::*)()>(&::UnityEngine::AndroidJavaRunnableProxy::run)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6a27f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaRunnableProxy*>(), { "run", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaRunnableProxy.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::AndroidJavaRunnableProxy::*)(::StringW, ::System::IntPtr)>(&::UnityEngine::AndroidJavaRunnableProxy::Invoke)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6a27fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaRunnableProxy*>(), { ::i2c::class_of<::UnityEngine::AndroidJavaRunnableProxy*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AndroidJavaRunnable*& UnityEngine::AndroidJavaRunnableProxy::__cordl_internal_get_mRunnable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRunnable;
}
constexpr ::UnityEngine::AndroidJavaRunnable* const& UnityEngine::AndroidJavaRunnableProxy::__cordl_internal_get_mRunnable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRunnable;
}
constexpr void UnityEngine::AndroidJavaRunnableProxy::__cordl_internal_set_mRunnable(::UnityEngine::AndroidJavaRunnable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mRunnable = value;
}
inline void UnityEngine::AndroidJavaRunnableProxy::_ctor(::UnityEngine::AndroidJavaRunnable* runnable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaRunnableProxy*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AndroidJavaRunnable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runnable);
}
inline void UnityEngine::AndroidJavaRunnableProxy::run() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaRunnableProxy*>(), { "run", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::AndroidJavaRunnableProxy::Invoke(::StringW methodName, ::System::IntPtr javaArgs) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AndroidJavaRunnableProxy*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, methodName, javaArgs);
}
inline ::UnityEngine::AndroidJavaRunnableProxy* UnityEngine::AndroidJavaRunnableProxy::New_ctor(::UnityEngine::AndroidJavaRunnable* runnable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AndroidJavaRunnableProxy*>(runnable));
}
// Ctor Parameters []
constexpr ::UnityEngine::AndroidJavaRunnableProxy::AndroidJavaRunnableProxy() {}
