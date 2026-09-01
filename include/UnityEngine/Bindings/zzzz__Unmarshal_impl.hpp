#pragma once
// IWYU pragma private; include "UnityEngine\Bindings\Unmarshal.hpp"
#include "UnityEngine/Bindings/zzzz__Unmarshal_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::Unmarshal.FromIntPtrUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::GCHandle (*)(::System::IntPtr)>(&::UnityEngine::Bindings::Unmarshal::FromIntPtrUnsafe)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6afede4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::Unmarshal>(), { "FromIntPtrUnsafe", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
template <typename T> inline T UnityEngine::Bindings::Unmarshal::UnmarshalUnityObject(::System::IntPtr gcHandlePtr) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::Unmarshal>(), { "UnmarshalUnityObject", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::IntPtr>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, gcHandlePtr);
}
inline ::System::Runtime::InteropServices::GCHandle UnityEngine::Bindings::Unmarshal::FromIntPtrUnsafe(::System::IntPtr gcHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::Unmarshal>(), { "FromIntPtrUnsafe", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::GCHandle>(nullptr, ___internal_method, gcHandle);
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::Unmarshal::Unmarshal() {}
