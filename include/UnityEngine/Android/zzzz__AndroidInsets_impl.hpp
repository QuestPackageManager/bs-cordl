#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidInsets.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidInsets_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::Android::AndroidInsets.SetNativeHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Android::AndroidInsets::*)(::System::IntPtr)>(&::UnityEngine::Android::AndroidInsets::SetNativeHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e82944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidInsets*>(), { "SetNativeHandle", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::Android::AndroidInsets::__cordl_internal_get_m_NativeHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NativeHandle;
}
constexpr ::System::IntPtr const& UnityEngine::Android::AndroidInsets::__cordl_internal_get_m_NativeHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NativeHandle;
}
constexpr void UnityEngine::Android::AndroidInsets::__cordl_internal_set_m_NativeHandle(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NativeHandle = value;
}
inline void UnityEngine::Android::AndroidInsets::SetNativeHandle(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidInsets*>(), { "SetNativeHandle", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ptr);
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidInsets::AndroidInsets() {}
