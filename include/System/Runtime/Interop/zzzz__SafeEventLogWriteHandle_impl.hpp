#pragma once
// IWYU pragma private; include "System/Runtime/Interop/SafeEventLogWriteHandle.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_impl.hpp"
#include "System/Runtime/Interop/zzzz__SafeEventLogWriteHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::Runtime::Interop::SafeEventLogWriteHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Interop::SafeEventLogWriteHandle::*)()>(&::System::Runtime::Interop::SafeEventLogWriteHandle::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6184e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Interop::SafeEventLogWriteHandle*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Interop::SafeEventLogWriteHandle.RegisterEventSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Interop::SafeEventLogWriteHandle* (*)(::StringW, ::StringW)>(
    &::System::Runtime::Interop::SafeEventLogWriteHandle::RegisterEventSource)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6184ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Interop::SafeEventLogWriteHandle*>(),
                                                                                           { "RegisterEventSource", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Interop::SafeEventLogWriteHandle.DeregisterEventSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::System::Runtime::Interop::SafeEventLogWriteHandle::DeregisterEventSource)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6185094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Interop::SafeEventLogWriteHandle*>(), { "DeregisterEventSource", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Interop::SafeEventLogWriteHandle.ReleaseHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Interop::SafeEventLogWriteHandle::*)()>(&::System::Runtime::Interop::SafeEventLogWriteHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x618511c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Interop::SafeEventLogWriteHandle*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Interop::SafeEventLogWriteHandle*>(), 7 }));
    return ___internal_method;
  }
};
inline void System::Runtime::Interop::SafeEventLogWriteHandle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Interop::SafeEventLogWriteHandle*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Interop::SafeEventLogWriteHandle* System::Runtime::Interop::SafeEventLogWriteHandle::RegisterEventSource(::StringW uncServerName, ::StringW sourceName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Interop::SafeEventLogWriteHandle*>(),
                                                                                         { "RegisterEventSource", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Interop::SafeEventLogWriteHandle*>(nullptr, ___internal_method, uncServerName, sourceName);
}
inline bool System::Runtime::Interop::SafeEventLogWriteHandle::DeregisterEventSource(::System::IntPtr hEventLog) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Interop::SafeEventLogWriteHandle*>(), { "DeregisterEventSource", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hEventLog);
}
inline bool System::Runtime::Interop::SafeEventLogWriteHandle::ReleaseHandle() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Interop::SafeEventLogWriteHandle*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Runtime::Interop::SafeEventLogWriteHandle* System::Runtime::Interop::SafeEventLogWriteHandle::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Interop::SafeEventLogWriteHandle*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Interop::SafeEventLogWriteHandle::SafeEventLogWriteHandle() {}
