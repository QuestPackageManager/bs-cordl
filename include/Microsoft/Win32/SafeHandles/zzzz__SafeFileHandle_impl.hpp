#pragma once
// IWYU pragma private; include "Microsoft/Win32/SafeHandles/SafeFileHandle.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_impl.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeFileHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeFileHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::Win32::SafeHandles::SafeFileHandle::*)(::System::IntPtr, bool)>(&::Microsoft::Win32::SafeHandles::SafeFileHandle::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ac5164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeFileHandle*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeFileHandle.ReleaseHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Microsoft::Win32::SafeHandles::SafeFileHandle::*)()>(&::Microsoft::Win32::SafeHandles::SafeFileHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ac51a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeFileHandle*>(), { ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeFileHandle*>(), 7 }));
    return ___internal_method;
  }
};
inline void Microsoft::Win32::SafeHandles::SafeFileHandle::_ctor(::System::IntPtr preexistingHandle, bool ownsHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeFileHandle*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, preexistingHandle, ownsHandle);
}
inline bool Microsoft::Win32::SafeHandles::SafeFileHandle::ReleaseHandle() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeFileHandle*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Microsoft::Win32::SafeHandles::SafeFileHandle* Microsoft::Win32::SafeHandles::SafeFileHandle::New_ctor(::System::IntPtr preexistingHandle, bool ownsHandle) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Microsoft::Win32::SafeHandles::SafeFileHandle*>(preexistingHandle, ownsHandle));
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::SafeHandles::SafeFileHandle::SafeFileHandle() {}
