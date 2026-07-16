#pragma once
// IWYU pragma private; include "Microsoft/Win32/SafeHandles/SafePasswordHandle.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_impl.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafePasswordHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafePasswordHandle.CreateHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Microsoft::Win32::SafeHandles::SafePasswordHandle::*)(::StringW)>(
    &::Microsoft::Win32::SafeHandles::SafePasswordHandle::CreateHandle)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ac4f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(), { "CreateHandle", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafePasswordHandle.FreeHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::Win32::SafeHandles::SafePasswordHandle::*)()>(&::Microsoft::Win32::SafeHandles::SafePasswordHandle::FreeHandle)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ac4f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(), { "FreeHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafePasswordHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::Win32::SafeHandles::SafePasswordHandle::*)(::StringW)>(&::Microsoft::Win32::SafeHandles::SafePasswordHandle::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ac4fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafePasswordHandle.ReleaseHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Microsoft::Win32::SafeHandles::SafePasswordHandle::*)()>(&::Microsoft::Win32::SafeHandles::SafePasswordHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ac504c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(),
                                                                                          { ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafePasswordHandle.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::Win32::SafeHandles::SafePasswordHandle::*)(bool)>(&::Microsoft::Win32::SafeHandles::SafePasswordHandle::Dispose)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ac5078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(),
                                                                                          { ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafePasswordHandle.get_IsInvalid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Microsoft::Win32::SafeHandles::SafePasswordHandle::*)()>(&::Microsoft::Win32::SafeHandles::SafePasswordHandle::get_IsInvalid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ac50f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(),
                                                                                          { ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafePasswordHandle.Mono_DangerousGetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Microsoft::Win32::SafeHandles::SafePasswordHandle::*)()>(
    &::Microsoft::Win32::SafeHandles::SafePasswordHandle::Mono_DangerousGetString)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ac5108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(), { "Mono_DangerousGetString", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::IntPtr Microsoft::Win32::SafeHandles::SafePasswordHandle::CreateHandle(::StringW password) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(), { "CreateHandle", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, password);
}
inline void Microsoft::Win32::SafeHandles::SafePasswordHandle::FreeHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(), { "FreeHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Microsoft::Win32::SafeHandles::SafePasswordHandle::_ctor(::StringW password) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, password);
}
inline bool Microsoft::Win32::SafeHandles::SafePasswordHandle::ReleaseHandle() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Microsoft::Win32::SafeHandles::SafePasswordHandle::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool Microsoft::Win32::SafeHandles::SafePasswordHandle::get_IsInvalid() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Microsoft::Win32::SafeHandles::SafePasswordHandle::Mono_DangerousGetString() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(), { "Mono_DangerousGetString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Microsoft::Win32::SafeHandles::SafePasswordHandle* Microsoft::Win32::SafeHandles::SafePasswordHandle::New_ctor(::StringW password) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(password));
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::SafeHandles::SafePasswordHandle::SafePasswordHandle() {}
