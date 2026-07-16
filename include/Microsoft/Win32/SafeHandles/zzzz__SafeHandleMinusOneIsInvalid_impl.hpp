#pragma once
// IWYU pragma private; include "Microsoft/Win32/SafeHandles/SafeHandleMinusOneIsInvalid.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_impl.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleMinusOneIsInvalid_def.hpp"
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid::*)(bool)>(
    &::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ac5280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid.get_IsInvalid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid::*)()>(
    &::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid::get_IsInvalid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ac5290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid*>(),
                                                                                          { ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid*>(), 5 }));
    return ___internal_method;
  }
};
inline void Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid::_ctor(bool ownsHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ownsHandle);
}
inline bool Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid::get_IsInvalid() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid* Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid::New_ctor(bool ownsHandle) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid*>(ownsHandle));
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid::SafeHandleMinusOneIsInvalid() {}
