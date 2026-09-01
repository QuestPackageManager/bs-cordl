#pragma once
// IWYU pragma private; include "Microsoft\Win32\SafeHandles\SafeWaitHandle.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_impl.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeWaitHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeWaitHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::Win32::SafeHandles::SafeWaitHandle::*)(::System::IntPtr, bool)>(&::Microsoft::Win32::SafeHandles::SafeWaitHandle::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ac751c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeWaitHandle*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeWaitHandle.ReleaseHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Microsoft::Win32::SafeHandles::SafeWaitHandle::*)()>(&::Microsoft::Win32::SafeHandles::SafeWaitHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ac7548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeWaitHandle*>(), { ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeWaitHandle*>(), 7 }));
    return ___internal_method;
  }
};
inline void Microsoft::Win32::SafeHandles::SafeWaitHandle::_ctor(::System::IntPtr existingHandle, bool ownsHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeWaitHandle*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, existingHandle, ownsHandle);
}
inline bool Microsoft::Win32::SafeHandles::SafeWaitHandle::ReleaseHandle() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeWaitHandle*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Microsoft::Win32::SafeHandles::SafeWaitHandle* Microsoft::Win32::SafeHandles::SafeWaitHandle::New_ctor(::System::IntPtr existingHandle, bool ownsHandle) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Microsoft::Win32::SafeHandles::SafeWaitHandle*>(existingHandle, ownsHandle));
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::SafeHandles::SafeWaitHandle::SafeWaitHandle() {}
