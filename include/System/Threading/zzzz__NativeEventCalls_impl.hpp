#pragma once
// IWYU pragma private; include "System/Threading/NativeEventCalls.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__NativeEventCalls_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeWaitHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::Threading::NativeEventCalls.CreateEvent_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(bool, bool, ::StringW, ::by_ref<int32_t>)>(&::System::Threading::NativeEventCalls::CreateEvent_internal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cb65e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::NativeEventCalls*>(),
                                                { "CreateEvent_internal", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::NativeEventCalls.CreateEvent_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(bool, bool, char16_t*, int32_t, ::by_ref<int32_t>)>(&::System::Threading::NativeEventCalls::CreateEvent_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb660c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Threading::NativeEventCalls*>(),
            { "CreateEvent_icall", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::NativeEventCalls.SetEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Microsoft::Win32::SafeHandles::SafeWaitHandle*)>(&::System::Threading::NativeEventCalls::SetEvent)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5cb6610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::NativeEventCalls*>(), { "SetEvent", {}, { ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeWaitHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::NativeEventCalls.SetEvent_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::System::Threading::NativeEventCalls::SetEvent_internal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cb66fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::NativeEventCalls*>(), { "SetEvent_internal", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::NativeEventCalls.ResetEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Microsoft::Win32::SafeHandles::SafeWaitHandle*)>(&::System::Threading::NativeEventCalls::ResetEvent)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5cb671c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::NativeEventCalls*>(), { "ResetEvent", {}, { ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeWaitHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::NativeEventCalls.ResetEvent_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::System::Threading::NativeEventCalls::ResetEvent_internal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cb6808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::NativeEventCalls*>(), { "ResetEvent_internal", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::NativeEventCalls.CloseEvent_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::System::Threading::NativeEventCalls::CloseEvent_internal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cb6828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::NativeEventCalls*>(), { "CloseEvent_internal", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr System::Threading::NativeEventCalls::CreateEvent_internal(bool manual, bool initial, ::StringW name, ::by_ref<int32_t> errorCode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::NativeEventCalls*>(),
                                              { "CreateEvent_internal", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, manual, initial, name, errorCode);
}
inline ::System::IntPtr System::Threading::NativeEventCalls::CreateEvent_icall(bool manual, bool initial, char16_t* name, int32_t name_length, ::by_ref<int32_t> errorCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Threading::NativeEventCalls*>(),
                       { "CreateEvent_icall", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, manual, initial, name, name_length, errorCode);
}
inline bool System::Threading::NativeEventCalls::SetEvent(::Microsoft::Win32::SafeHandles::SafeWaitHandle* handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::NativeEventCalls*>(), { "SetEvent", {}, { ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeWaitHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline bool System::Threading::NativeEventCalls::SetEvent_internal(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::NativeEventCalls*>(), { "SetEvent_internal", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline bool System::Threading::NativeEventCalls::ResetEvent(::Microsoft::Win32::SafeHandles::SafeWaitHandle* handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::NativeEventCalls*>(), { "ResetEvent", {}, { ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeWaitHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline bool System::Threading::NativeEventCalls::ResetEvent_internal(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::NativeEventCalls*>(), { "ResetEvent_internal", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline void System::Threading::NativeEventCalls::CloseEvent_internal(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::NativeEventCalls*>(), { "CloseEvent_internal", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
// Ctor Parameters []
constexpr ::System::Threading::NativeEventCalls::NativeEventCalls() {}
