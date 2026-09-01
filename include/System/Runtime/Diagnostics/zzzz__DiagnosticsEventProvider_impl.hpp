#pragma once
// IWYU pragma private; include "System\Runtime\Diagnostics\DiagnosticsEventProvider.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Diagnostics/zzzz__DiagnosticsEventProvider_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__DiagnosticsEventProvider_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EventDescriptor_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EventTraceActivity_def.hpp"
#include "System/Runtime/Interop/zzzz__UnsafeNativeMethods_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode::DiagnosticsEventProvider_WriteEventErrorCode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode::DiagnosticsEventProvider_WriteEventErrorCode() {}
constexpr ::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode::NoError{ static_cast<int32_t>(0x0) };
constexpr ::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode::NoFreeBuffers{ static_cast<int32_t>(
    0x1) };
constexpr ::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode::EventTooBig{ static_cast<int32_t>(
    0x2) };
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)(::System::Guid)>(
    &::System::Runtime::Diagnostics::DiagnosticsEventProvider::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x618ade8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(), { ".ctor", {}, { ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.EtwRegister
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)()>(&::System::Runtime::Diagnostics::DiagnosticsEventProvider::EtwRegister)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x618ae30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(), { "EtwRegister", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)()>(&::System::Runtime::Diagnostics::DiagnosticsEventProvider::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x618af48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)(bool)>(&::System::Runtime::Diagnostics::DiagnosticsEventProvider::Dispose)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x618afb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)()>(&::System::Runtime::Diagnostics::DiagnosticsEventProvider::Finalize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x618b01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.Deregister
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)()>(&::System::Runtime::Diagnostics::DiagnosticsEventProvider::Deregister)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x618affc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(), { "Deregister", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.EtwEnableCallBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)(
    ::by_ref<::System::Guid>, ::ByRefConst<int32_t>, ::ByRefConst<uint8_t>, ::ByRefConst<int64_t>, ::ByRefConst<int64_t>, ::ByRefConst<void*>, ::ByRefConst<void*>)>(
    &::System::Runtime::Diagnostics::DiagnosticsEventProvider::EtwEnableCallBack)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x618b06c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(),
                            { "EtwEnableCallBack",
                              {},
                              { ::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<::ByRefConst<int32_t>>(), ::i2c::type_of<::ByRefConst<uint8_t>>(), ::i2c::type_of<::ByRefConst<int64_t>>(),
                                ::i2c::type_of<::ByRefConst<int64_t>>(), ::i2c::type_of<::ByRefConst<void*>>(), ::i2c::type_of<::ByRefConst<void*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.OnControllerCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)()>(
    &::System::Runtime::Diagnostics::DiagnosticsEventProvider::OnControllerCommand)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.IsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)()>(&::System::Runtime::Diagnostics::DiagnosticsEventProvider::IsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x618b08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(), { "IsEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.IsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)(uint8_t, int64_t)>(
    &::System::Runtime::Diagnostics::DiagnosticsEventProvider::IsEnabled)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x618b094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(), { "IsEnabled", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.IsEventEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)(::by_ref<::System::Runtime::Diagnostics::EventDescriptor>)>(
    &::System::Runtime::Diagnostics::DiagnosticsEventProvider::IsEventEnabled)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x618b0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(),
                                                                                           { "IsEventEnabled", {}, { ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.SetLastError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::System::Runtime::Diagnostics::DiagnosticsEventProvider::SetLastError)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x618b124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(), { "SetLastError", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.WriteEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)(::by_ref<::System::Runtime::Diagnostics::EventDescriptor>,
                                                                                                                          ::System::Runtime::Diagnostics::EventTraceActivity*, ::StringW)>(
    &::System::Runtime::Diagnostics::DiagnosticsEventProvider::WriteEvent)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x618b1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(),
                                                             { "WriteEvent",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>(),
                                                                 ::i2c::type_of<::System::Runtime::Diagnostics::EventTraceActivity*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.WriteEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)(
    ::by_ref<::System::Runtime::Diagnostics::EventDescriptor>, ::System::Runtime::Diagnostics::EventTraceActivity*, int32_t, ::System::IntPtr)>(
    &::System::Runtime::Diagnostics::DiagnosticsEventProvider::WriteEvent)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x618b358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(),
                                                { "WriteEvent",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>(), ::i2c::type_of<::System::Runtime::Diagnostics::EventTraceActivity*>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.SetActivityId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Guid>)>(&::System::Runtime::Diagnostics::DiagnosticsEventProvider::SetActivityId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x618b34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(), { "SetActivityId", {}, { ::i2c::type_of<::by_ref<::System::Guid>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*& System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_get_etwCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___etwCallback;
}
constexpr ::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback* const& System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_get_etwCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___etwCallback;
}
constexpr void System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_set_etwCallback(::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___etwCallback = value;
}
constexpr int64_t& System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_get_traceRegistrationHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___traceRegistrationHandle;
}
constexpr int64_t const& System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_get_traceRegistrationHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___traceRegistrationHandle;
}
constexpr void System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_set_traceRegistrationHandle(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___traceRegistrationHandle = value;
}
constexpr uint8_t& System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_get_currentTraceLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentTraceLevel;
}
constexpr uint8_t const& System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_get_currentTraceLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentTraceLevel;
}
constexpr void System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_set_currentTraceLevel(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentTraceLevel = value;
}
constexpr int64_t& System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_get_anyKeywordMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anyKeywordMask;
}
constexpr int64_t const& System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_get_anyKeywordMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anyKeywordMask;
}
constexpr void System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_set_anyKeywordMask(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___anyKeywordMask = value;
}
constexpr int64_t& System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_get_allKeywordMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allKeywordMask;
}
constexpr int64_t const& System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_get_allKeywordMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allKeywordMask;
}
constexpr void System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_set_allKeywordMask(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allKeywordMask = value;
}
constexpr bool& System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_get_isProviderEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isProviderEnabled;
}
constexpr bool const& System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_get_isProviderEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isProviderEnabled;
}
constexpr void System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_set_isProviderEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isProviderEnabled = value;
}
constexpr ::System::Guid& System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_get_providerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___providerId;
}
constexpr ::System::Guid const& System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_get_providerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___providerId;
}
constexpr void System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_set_providerId(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___providerId = value;
}
constexpr int32_t& System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_get_isDisposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDisposed;
}
constexpr int32_t const& System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_get_isDisposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDisposed;
}
constexpr void System::Runtime::Diagnostics::DiagnosticsEventProvider::__cordl_internal_set_isDisposed(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isDisposed = value;
}
inline void System::Runtime::Diagnostics::DiagnosticsEventProvider::setStaticF_errorCode(::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode value) {
  ::cordl_internals::setStaticField<::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode, "errorCode", ::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(
      std::forward<::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode>(value));
}
inline ::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode System::Runtime::Diagnostics::DiagnosticsEventProvider::getStaticF_errorCode() {
  return ::cordl_internals::getStaticField<::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode, "errorCode", ::System::Runtime::Diagnostics::DiagnosticsEventProvider*>();
}
inline void System::Runtime::Diagnostics::DiagnosticsEventProvider::_ctor(::System::Guid providerGuid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(), { ".ctor", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, providerGuid);
}
inline void System::Runtime::Diagnostics::DiagnosticsEventProvider::EtwRegister() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(), { "EtwRegister", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::DiagnosticsEventProvider::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::DiagnosticsEventProvider::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Runtime::Diagnostics::DiagnosticsEventProvider::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::DiagnosticsEventProvider::Deregister() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(), { "Deregister", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::DiagnosticsEventProvider::EtwEnableCallBack(::by_ref<::System::Guid> sourceId, ::ByRefConst<int32_t> isEnabled, ::ByRefConst<uint8_t> setLevel,
                                                                                      ::ByRefConst<int64_t> anyKeyword, ::ByRefConst<int64_t> allKeyword, ::ByRefConst<void*> filterData,
                                                                                      ::ByRefConst<void*> callbackContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(),
                          { "EtwEnableCallBack",
                            {},
                            { ::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<::ByRefConst<int32_t>>(), ::i2c::type_of<::ByRefConst<uint8_t>>(), ::i2c::type_of<::ByRefConst<int64_t>>(),
                              ::i2c::type_of<::ByRefConst<int64_t>>(), ::i2c::type_of<::ByRefConst<void*>>(), ::i2c::type_of<::ByRefConst<void*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceId, isEnabled, setLevel, anyKeyword, allKeyword, filterData, callbackContext);
}
inline void System::Runtime::Diagnostics::DiagnosticsEventProvider::OnControllerCommand() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Runtime::Diagnostics::DiagnosticsEventProvider::IsEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(), { "IsEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Diagnostics::DiagnosticsEventProvider::IsEnabled(uint8_t level, int64_t keywords) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(), { "IsEnabled", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, level, keywords);
}
inline bool System::Runtime::Diagnostics::DiagnosticsEventProvider::IsEventEnabled(::by_ref<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(),
                                                                                         { "IsEventEnabled", {}, { ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eventDescriptor);
}
inline void System::Runtime::Diagnostics::DiagnosticsEventProvider::SetLastError(int32_t error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(), { "SetLastError", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, error);
}
inline bool System::Runtime::Diagnostics::DiagnosticsEventProvider::WriteEvent(::by_ref<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor,
                                                                               ::System::Runtime::Diagnostics::EventTraceActivity* eventTraceActivity, ::StringW data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(),
                                                                                         { "WriteEvent",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>(),
                                                                                             ::i2c::type_of<::System::Runtime::Diagnostics::EventTraceActivity*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eventDescriptor, eventTraceActivity, data);
}
inline bool System::Runtime::Diagnostics::DiagnosticsEventProvider::WriteEvent(::by_ref<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor,
                                                                               ::System::Runtime::Diagnostics::EventTraceActivity* eventTraceActivity, int32_t dataCount, ::System::IntPtr data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(),
                                              { "WriteEvent",
                                                {},
                                                { ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>(), ::i2c::type_of<::System::Runtime::Diagnostics::EventTraceActivity*>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eventDescriptor, eventTraceActivity, dataCount, data);
}
inline void System::Runtime::Diagnostics::DiagnosticsEventProvider::SetActivityId(::by_ref<::System::Guid> id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(), { "SetActivityId", {}, { ::i2c::type_of<::by_ref<::System::Guid>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id);
}
inline ::System::Runtime::Diagnostics::DiagnosticsEventProvider* System::Runtime::Diagnostics::DiagnosticsEventProvider::New_ctor(::System::Guid providerGuid) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(providerGuid));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Runtime::Diagnostics::DiagnosticsEventProvider::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Runtime::Diagnostics::DiagnosticsEventProvider::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Diagnostics::DiagnosticsEventProvider::DiagnosticsEventProvider() {}
