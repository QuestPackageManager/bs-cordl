#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/DiagnosticsEventProvider.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)(::System::Guid)>(
    &::System::Runtime::Diagnostics::DiagnosticsEventProvider::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f6e704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.EtwRegister
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)()>(
    &::System::Runtime::Diagnostics::DiagnosticsEventProvider::EtwRegister)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5f6e74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(),
                                                                               "EtwRegister", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)()>(
    &::System::Runtime::Diagnostics::DiagnosticsEventProvider::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f6e864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)(bool)>(
    &::System::Runtime::Diagnostics::DiagnosticsEventProvider::Dispose)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f6e8d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)()>(
    &::System::Runtime::Diagnostics::DiagnosticsEventProvider::Finalize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f6e938;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.Deregister
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)()>(
    &::System::Runtime::Diagnostics::DiagnosticsEventProvider::Deregister)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f6e918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(),
                                                                               "Deregister", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.EtwEnableCallBack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)(
    ::ByRef<::System::Guid>, ::ByRefConst<int32_t>, ::ByRefConst<uint8_t>, ::ByRefConst<int64_t>, ::ByRefConst<int64_t>, ::ByRefConst<void*>, ::ByRefConst<void*>)>(
    &::System::Runtime::Diagnostics::DiagnosticsEventProvider::EtwEnableCallBack)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f6e988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(), "EtwEnableCallBack", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<int64_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<void*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<void*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.OnControllerCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)()>(
    &::System::Runtime::Diagnostics::DiagnosticsEventProvider::OnControllerCommand)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.IsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)()>(
    &::System::Runtime::Diagnostics::DiagnosticsEventProvider::IsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6e9a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(),
                                                                               "IsEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.IsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)(uint8_t, int64_t)>(
    &::System::Runtime::Diagnostics::DiagnosticsEventProvider::IsEnabled)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f6e9b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(), "IsEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.IsEventEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)(
    ::ByRef<::System::Runtime::Diagnostics::EventDescriptor>)>(&::System::Runtime::Diagnostics::DiagnosticsEventProvider::IsEventEnabled)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f6e9f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(), "IsEventEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.SetLastError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::System::Runtime::Diagnostics::DiagnosticsEventProvider::SetLastError)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f6ea40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(), "SetLastError",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.WriteEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)(
    ::ByRef<::System::Runtime::Diagnostics::EventDescriptor>, ::System::Runtime::Diagnostics::EventTraceActivity*, ::StringW)>(&::System::Runtime::Diagnostics::DiagnosticsEventProvider::WriteEvent)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5f6ead4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(), "WriteEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EventTraceActivity*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.WriteEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticsEventProvider::*)(
    ::ByRef<::System::Runtime::Diagnostics::EventDescriptor>, ::System::Runtime::Diagnostics::EventTraceActivity*, int32_t, ::System::IntPtr)>(
    &::System::Runtime::Diagnostics::DiagnosticsEventProvider::WriteEvent)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f6ec74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(), "WriteEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EventTraceActivity*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticsEventProvider.SetActivityId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::System::Guid>)>(&::System::Runtime::Diagnostics::DiagnosticsEventProvider::SetActivityId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f6ec68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(), "SetActivityId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___etwCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  ::cordl_internals::setStaticField<::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode, "errorCode",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get>(
      std::forward<::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode>(value));
}
inline ::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode System::Runtime::Diagnostics::DiagnosticsEventProvider::getStaticF_errorCode() {
  return ::cordl_internals::getStaticField<::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode, "errorCode",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get>();
}
inline void System::Runtime::Diagnostics::DiagnosticsEventProvider::_ctor(::System::Guid providerGuid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, providerGuid);
}
inline void System::Runtime::Diagnostics::DiagnosticsEventProvider::EtwRegister() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(),
                                                                             "EtwRegister", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::DiagnosticsEventProvider::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::DiagnosticsEventProvider::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::Runtime::Diagnostics::DiagnosticsEventProvider::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::DiagnosticsEventProvider::Deregister() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(),
                                                                             "Deregister", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::DiagnosticsEventProvider::EtwEnableCallBack(::ByRef<::System::Guid> sourceId, ::ByRefConst<int32_t> isEnabled, ::ByRefConst<uint8_t> setLevel,
                                                                                      ::ByRefConst<int64_t> anyKeyword, ::ByRefConst<int64_t> allKeyword, ::ByRefConst<void*> filterData,
                                                                                      ::ByRefConst<void*> callbackContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(), "EtwEnableCallBack", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<int64_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<void*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<void*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sourceId, isEnabled, setLevel, anyKeyword, allKeyword, filterData, callbackContext);
}
inline void System::Runtime::Diagnostics::DiagnosticsEventProvider::OnControllerCommand() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Runtime::Diagnostics::DiagnosticsEventProvider::IsEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(),
                                                                             "IsEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Diagnostics::DiagnosticsEventProvider::IsEnabled(uint8_t level, int64_t keywords) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(), "IsEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, level, keywords);
}
inline bool System::Runtime::Diagnostics::DiagnosticsEventProvider::IsEventEnabled(::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(), "IsEventEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eventDescriptor);
}
inline void System::Runtime::Diagnostics::DiagnosticsEventProvider::SetLastError(int32_t error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(), "SetLastError",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, error);
}
inline bool System::Runtime::Diagnostics::DiagnosticsEventProvider::WriteEvent(::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor,
                                                                               ::System::Runtime::Diagnostics::EventTraceActivity* eventTraceActivity, ::StringW data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(), "WriteEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EventTraceActivity*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eventDescriptor, eventTraceActivity, data);
}
inline bool System::Runtime::Diagnostics::DiagnosticsEventProvider::WriteEvent(::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor,
                                                                               ::System::Runtime::Diagnostics::EventTraceActivity* eventTraceActivity, int32_t dataCount, ::System::IntPtr data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(), "WriteEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EventTraceActivity*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eventDescriptor, eventTraceActivity, dataCount, data);
}
inline void System::Runtime::Diagnostics::DiagnosticsEventProvider::SetActivityId(::ByRef<::System::Guid> id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>::get(), "SetActivityId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, id);
}
inline ::System::Runtime::Diagnostics::DiagnosticsEventProvider* System::Runtime::Diagnostics::DiagnosticsEventProvider::New_ctor(::System::Guid providerGuid) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Diagnostics::DiagnosticsEventProvider*>(providerGuid));
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
