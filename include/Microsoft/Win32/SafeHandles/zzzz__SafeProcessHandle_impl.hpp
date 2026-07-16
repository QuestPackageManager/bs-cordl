#pragma once
// IWYU pragma private; include "Microsoft/Win32/SafeHandles/SafeProcessHandle.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_impl.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeProcessHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeProcessHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::Win32::SafeHandles::SafeProcessHandle::*)(::System::IntPtr)>(&::Microsoft::Win32::SafeHandles::SafeProcessHandle::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fdeda0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeProcessHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::Win32::SafeHandles::SafeProcessHandle::*)(::System::IntPtr, bool)>(
    &::Microsoft::Win32::SafeHandles::SafeProcessHandle::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5fdebb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeProcessHandle.ReleaseHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Microsoft::Win32::SafeHandles::SafeProcessHandle::*)()>(&::Microsoft::Win32::SafeHandles::SafeProcessHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5fdee00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(), { ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(), 7 }));
    return ___internal_method;
  }
};
inline void Microsoft::Win32::SafeHandles::SafeProcessHandle::setStaticF_InvalidHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* value) {
  ::cordl_internals::setStaticField<::Microsoft::Win32::SafeHandles::SafeProcessHandle*, "InvalidHandle", ::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(
      std::forward<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(value));
}
inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* Microsoft::Win32::SafeHandles::SafeProcessHandle::getStaticF_InvalidHandle() {
  return ::cordl_internals::getStaticField<::Microsoft::Win32::SafeHandles::SafeProcessHandle*, "InvalidHandle", ::Microsoft::Win32::SafeHandles::SafeProcessHandle*>();
}
inline void Microsoft::Win32::SafeHandles::SafeProcessHandle::_ctor(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline void Microsoft::Win32::SafeHandles::SafeProcessHandle::_ctor(::System::IntPtr existingHandle, bool ownsHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, existingHandle, ownsHandle);
}
inline bool Microsoft::Win32::SafeHandles::SafeProcessHandle::ReleaseHandle() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* Microsoft::Win32::SafeHandles::SafeProcessHandle::New_ctor(::System::IntPtr handle) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(handle));
}
inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* Microsoft::Win32::SafeHandles::SafeProcessHandle::New_ctor(::System::IntPtr existingHandle, bool ownsHandle) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(existingHandle, ownsHandle));
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::SafeHandles::SafeProcessHandle::SafeProcessHandle() {}
