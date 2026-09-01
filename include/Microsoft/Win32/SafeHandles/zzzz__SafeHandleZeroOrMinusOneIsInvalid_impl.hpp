#pragma once
// IWYU pragma private; include "Microsoft\Win32\SafeHandles\SafeHandleZeroOrMinusOneIsInvalid.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_impl.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::*)(bool)>(
    &::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ac7490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid.get_IsInvalid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::*)()>(
    &::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::get_IsInvalid)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ac756c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid*>(),
                                                                                          { ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid*>(), 5 }));
    return ___internal_method;
  }
};
inline void Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::_ctor(bool ownsHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ownsHandle);
}
inline bool Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::get_IsInvalid() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid* Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::New_ctor(bool ownsHandle) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid*>(ownsHandle));
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::SafeHandleZeroOrMinusOneIsInvalid() {}
