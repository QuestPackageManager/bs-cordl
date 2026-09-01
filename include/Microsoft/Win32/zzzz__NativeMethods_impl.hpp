#pragma once
// IWYU pragma private; include "Microsoft\Win32\NativeMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Microsoft/Win32/zzzz__NativeMethods_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeProcessHandle_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Microsoft::Win32::NativeMethods.DuplicateHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef,
                                                                ::System::Runtime::InteropServices::HandleRef, ::by_ref<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>, int32_t, bool, int32_t)>(
    &::Microsoft::Win32::NativeMethods::DuplicateHandle)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5fe4260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::NativeMethods*>(),
                                                { "DuplicateHandle",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::InteropServices::HandleRef>(), ::i2c::type_of<::System::Runtime::InteropServices::HandleRef>(),
                                                    ::i2c::type_of<::System::Runtime::InteropServices::HandleRef>(), ::i2c::type_of<::by_ref<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::NativeMethods.GetCurrentProcess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Microsoft::Win32::NativeMethods::GetCurrentProcess)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fe43f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::NativeMethods*>(), { "GetCurrentProcess", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::NativeMethods.GetExitCodeProcess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<int32_t>)>(&::Microsoft::Win32::NativeMethods::GetExitCodeProcess)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5fe4408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::NativeMethods*>(),
                                                                                           { "GetExitCodeProcess", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::NativeMethods.GetExitCodeProcess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*, ::by_ref<int32_t>)>(&::Microsoft::Win32::NativeMethods::GetExitCodeProcess)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5fe4408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::NativeMethods*>(),
                                                { "GetExitCodeProcess", {}, { ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::NativeMethods.GetProcessTimes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<int64_t>, ::by_ref<int64_t>, ::by_ref<int64_t>, ::by_ref<int64_t>)>(
    &::Microsoft::Win32::NativeMethods::GetProcessTimes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe44b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::NativeMethods*>(), { "GetProcessTimes",
                                                                                     {},
                                                                                     { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int64_t>>(),
                                                                                       ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::NativeMethods.GetProcessTimes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*, ::by_ref<int64_t>, ::by_ref<int64_t>, ::by_ref<int64_t>, ::by_ref<int64_t>)>(
    &::Microsoft::Win32::NativeMethods::GetProcessTimes)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5fe44bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::NativeMethods*>(),
                                                             { "GetProcessTimes",
                                                               {},
                                                               { ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(), ::i2c::type_of<::by_ref<int64_t>>(),
                                                                 ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::NativeMethods.GetCurrentProcessId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Microsoft::Win32::NativeMethods::GetCurrentProcessId)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fe45b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::NativeMethods*>(), { "GetCurrentProcessId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::NativeMethods.CloseProcess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::Microsoft::Win32::NativeMethods::CloseProcess)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fe45b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::NativeMethods*>(), { "CloseProcess", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline bool Microsoft::Win32::NativeMethods::DuplicateHandle(::System::Runtime::InteropServices::HandleRef hSourceProcessHandle, ::System::Runtime::InteropServices::HandleRef hSourceHandle,
                                                             ::System::Runtime::InteropServices::HandleRef hTargetProcess, ::by_ref<::Microsoft::Win32::SafeHandles::SafeProcessHandle*> targetHandle,
                                                             int32_t dwDesiredAccess, bool bInheritHandle, int32_t dwOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::NativeMethods*>(),
                                              { "DuplicateHandle",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::InteropServices::HandleRef>(), ::i2c::type_of<::System::Runtime::InteropServices::HandleRef>(),
                                                  ::i2c::type_of<::System::Runtime::InteropServices::HandleRef>(), ::i2c::type_of<::by_ref<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSourceProcessHandle, hSourceHandle, hTargetProcess, targetHandle, dwDesiredAccess, bInheritHandle, dwOptions);
}
inline ::System::IntPtr Microsoft::Win32::NativeMethods::GetCurrentProcess() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::NativeMethods*>(), { "GetCurrentProcess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline bool Microsoft::Win32::NativeMethods::GetExitCodeProcess(::System::IntPtr processHandle, ::by_ref<int32_t> exitCode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::NativeMethods*>(),
                                                                                         { "GetExitCodeProcess", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, processHandle, exitCode);
}
inline bool Microsoft::Win32::NativeMethods::GetExitCodeProcess(::Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle, ::by_ref<int32_t> exitCode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::NativeMethods*>(),
                                              { "GetExitCodeProcess", {}, { ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, processHandle, exitCode);
}
inline bool Microsoft::Win32::NativeMethods::GetProcessTimes(::System::IntPtr handle, ::by_ref<int64_t> creation, ::by_ref<int64_t> exit, ::by_ref<int64_t> kernel, ::by_ref<int64_t> user) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::NativeMethods*>(), { "GetProcessTimes",
                                                                                   {},
                                                                                   { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int64_t>>(),
                                                                                     ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, creation, exit, kernel, user);
}
inline bool Microsoft::Win32::NativeMethods::GetProcessTimes(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle, ::by_ref<int64_t> creation, ::by_ref<int64_t> exit, ::by_ref<int64_t> kernel,
                                                             ::by_ref<int64_t> user) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::NativeMethods*>(),
                                                           { "GetProcessTimes",
                                                             {},
                                                             { ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(), ::i2c::type_of<::by_ref<int64_t>>(),
                                                               ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, creation, exit, kernel, user);
}
inline int32_t Microsoft::Win32::NativeMethods::GetCurrentProcessId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::NativeMethods*>(), { "GetCurrentProcessId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool Microsoft::Win32::NativeMethods::CloseProcess(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::NativeMethods*>(), { "CloseProcess", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::NativeMethods::NativeMethods() {}
