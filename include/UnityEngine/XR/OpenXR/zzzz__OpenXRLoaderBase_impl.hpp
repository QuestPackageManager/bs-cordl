#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRLoaderBase.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Management/zzzz__XRLoaderHelper_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderBase_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__UnhandledExceptionEventArgs_def.hpp"
#include "System/zzzz__UnhandledExceptionEventHandler_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderBase_def.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystemDescriptor_def.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6822570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo::__cordl_internal_get_m_nameUi() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_nameUi;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo::__cordl_internal_get_m_nameUi() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_nameUi;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo::__cordl_internal_set_m_nameUi(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_nameUi)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo::__cordl_internal_get_m_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_version;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo::__cordl_internal_get_m_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_version;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo::__cordl_internal_set_m_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo::__cordl_internal_get_m_company() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_company;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo::__cordl_internal_get_m_company() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_company;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo::__cordl_internal_set_m_company(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_company)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo::__cordl_internal_get_m_openxrExtensionStrings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_openxrExtensionStrings;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo::__cordl_internal_get_m_openxrExtensionStrings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_openxrExtensionStrings;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo::__cordl_internal_set_m_openxrExtensionStrings(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_openxrExtensionStrings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo::_ctor(::StringW nameUi, ::StringW version, ::StringW company, ::StringW extensionStrings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameUi, version, company, extensionStrings);
}
inline ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo* UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo::New_ctor(::StringW nameUi, ::StringW version, ::StringW company,
                                                                                                                                              ::StringW extensionStrings) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo*>(nameUi, version, company, extensionStrings));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo::OpenXRLoaderBase_FeatureLoggingInfo() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState::OpenXRLoaderBase_LoaderState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState::OpenXRLoaderBase_LoaderState() {}
constexpr ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState::Uninitialized{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState::InitializeAttempted{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState::Initialized{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState::StartAttempted{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState::Started{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState::StopAttempted{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState::Stopped{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState::DeinitializeAttempted{ static_cast<int32_t>(0x7) };
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate::*)(
    ::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x68238cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate::*)(
    ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent, uint64_t)>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6823a98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate::*)(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6823aac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate::*)(::System::IAsyncResult*)>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6823b50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate::Invoke(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent e, uint64_t payload) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e, payload);
}
inline ::System::IAsyncResult* UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate::BeginInvoke(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent e, uint64_t payload,
                                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, e, payload, callback, object);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate* UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate::New_ctor(::System::Object* object,
                                                                                                                                                              ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate::OpenXRLoaderBase_ReceiveNativeEventDelegate() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6823bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c._InitializeInternal_b__33_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c::*)(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*)>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c::_InitializeInternal_b__33_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6823bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c*>::get(), "<InitializeInternal>b__33_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c._InitializeInternal_b__33_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c::*)(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*)>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c::_InitializeInternal_b__33_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6823c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c*>::get(), "<InitializeInternal>b__33_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c._InitializeInternal_b__33_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c::*)(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*)>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c::_InitializeInternal_b__33_2)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6823c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c*>::get(), "<InitializeInternal>b__33_2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase___c::setStaticF___9(::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c*>::get>(
      std::forward<::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c*>(value));
}
inline ::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c* UnityEngine::XR::OpenXR::OpenXRLoaderBase___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c*>::get>();
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase___c::setStaticF___9__33_0(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>*, "<>9__33_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c*>::get>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>* UnityEngine::XR::OpenXR::OpenXRLoaderBase___c::getStaticF___9__33_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>*, "<>9__33_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c*>::get>();
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase___c::setStaticF___9__33_1(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, int32_t>*, "<>9__33_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c*>::get>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, int32_t>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, int32_t>* UnityEngine::XR::OpenXR::OpenXRLoaderBase___c::getStaticF___9__33_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, int32_t>*, "<>9__33_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c*>::get>();
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase___c::setStaticF___9__33_2(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>*, "<>9__33_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c*>::get>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>* UnityEngine::XR::OpenXR::OpenXRLoaderBase___c::getStaticF___9__33_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>*, "<>9__33_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c*>::get>();
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase___c::_InitializeInternal_b__33_0(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c*>::get(), "<InitializeInternal>b__33_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, f);
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRLoaderBase___c::_InitializeInternal_b__33_1(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c*>::get(), "<InitializeInternal>b__33_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, f);
}
inline ::StringW UnityEngine::XR::OpenXR::OpenXRLoaderBase___c::_InitializeInternal_b__33_2(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c*>::get(), "<InitializeInternal>b__33_2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, f);
}
inline ::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c* UnityEngine::XR::OpenXR::OpenXRLoaderBase___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c::OpenXRLoaderBase___c() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::XR::OpenXR::OpenXRLoaderBase> (*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_Instance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x681f01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.set_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::OpenXRLoaderBase*)>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::set_Instance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x681f078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "set_Instance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.get_currentLoaderState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_currentLoaderState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x681f0d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "get_currentLoaderState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.set_currentLoaderState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)(::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState)>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::set_currentLoaderState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x681f0e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "set_currentLoaderState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.get_displaySubsystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Il2CppObject* (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_displaySubsystem)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x681f0e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "get_displaySubsystem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.get_inputSubsystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::XRInputSubsystem* (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_inputSubsystem)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x681f150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "get_inputSubsystem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.get_isInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_isInitialized)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x681f234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "get_isInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.get_isStarted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_isStarted)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x681f248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "get_isStarted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.ExceptionHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::System::UnhandledExceptionEventArgs*)>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::ExceptionHandler)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x681f2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "ExceptionHandler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UnhandledExceptionEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Initialize)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x681f4f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.InitializeInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::InitializeInternal)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0x681f78c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "InitializeInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.CreateSubsystems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::CreateSubsystems)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6820650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "CreateSubsystems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.ProcessOpenXRMessageLoop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::ProcessOpenXRMessageLoop)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6820ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "ProcessOpenXRMessageLoop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Start)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6820e00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.StartInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::StartInternal)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6820ea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "StartInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Stop)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6821d58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.StopInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::StopInternal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6821e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "StopInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Deinitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Deinitialize)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x6821f4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.SetApplicationInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::SetApplicationInfo)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x682077c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "SetApplicationInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.StringToWCHAR_T
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::StringW)>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::StringToWCHAR_T)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6822444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "StringToWCHAR_T",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.LoadOpenXRSymbols
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::LoadOpenXRSymbols)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68200fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "LoadOpenXRSymbols", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.RequestOpenXRFeatures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::RequestOpenXRFeatures)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x68202f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "RequestOpenXRFeatures", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.LogRequestedOpenXRFeatures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::LogRequestedOpenXRFeatures)> {
  constexpr static std::size_t size = 0x778;
  constexpr static std::size_t addrs = 0x6822610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "LogRequestedOpenXRFeatures", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.DebugLogEnabledSpecExtensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::DebugLogEnabledSpecExtensions)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6820ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "DebugLogEnabledSpecExtensions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.ReceiveNativeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent, uint64_t)>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::ReceiveNativeEvent)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x681ed18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "ReceiveNativeEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.RegisterOpenXRCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::RegisterOpenXRCallbacks)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x68205b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "RegisterOpenXRCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_LoadOpenXRLibrary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_LoadOpenXRLibrary)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x68224e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "Internal_LoadOpenXRLibrary", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_UnloadOpenXRLibrary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_UnloadOpenXRLibrary)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6822304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "Internal_UnloadOpenXRLibrary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_SetCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate*)>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_SetCallbacks)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6823938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "Internal_SetCallbacks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_SetApplicationInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, uint32_t, ::StringW)>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_SetApplicationInfo)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6822368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "Internal_SetApplicationInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_RequestExitSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_RequestExitSession)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x682223c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "Internal_RequestExitSession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_InitializeSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_InitializeSession)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x682028c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "Internal_InitializeSession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_CreateSessionIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_CreateSessionIfNeeded)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6821070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "Internal_CreateSessionIfNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_BeginSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_BeginSession)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x68210dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "Internal_BeginSession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_EndSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_EndSession)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6821ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "Internal_EndSession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_DestroySession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_DestroySession)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x68222a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "Internal_DestroySession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_PumpMessageLoop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_PumpMessageLoop)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6820d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "Internal_PumpMessageLoop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_SetSuccessfullyInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_SetSuccessfullyInitialized)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x681fd34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "Internal_SetSuccessfullyInitialized",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_RequestEnableExtensionString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_RequestEnableExtensionString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x682257c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "Internal_RequestEnableExtensionString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_IsExtensionEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_IsExtensionEnabled)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6822d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "Internal_IsExtensionEnabled",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::_ctor)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x681e668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo*>*&
UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get_featureLoggingInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___featureLoggingInfo;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo*>* const&
UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get_featureLoggingInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___featureLoggingInfo;
}
constexpr void
UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_set_featureLoggingInfo(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___featureLoggingInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get__currentLoaderState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentLoaderState_k__BackingField;
}
constexpr ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState const& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get__currentLoaderState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentLoaderState_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_set__currentLoaderState_k__BackingField(::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentLoaderState_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>*& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get_validLoaderInitStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validLoaderInitStates;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* const&
UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get_validLoaderInitStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validLoaderInitStates;
}
constexpr void
UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_set_validLoaderInitStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___validLoaderInitStates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>*& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get_validLoaderStartStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validLoaderStartStates;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* const&
UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get_validLoaderStartStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validLoaderStartStates;
}
constexpr void
UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_set_validLoaderStartStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___validLoaderStartStates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>*& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get_validLoaderStopStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validLoaderStopStates;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* const&
UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get_validLoaderStopStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validLoaderStopStates;
}
constexpr void
UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_set_validLoaderStopStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___validLoaderStopStates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>*& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get_validLoaderDeinitStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validLoaderDeinitStates;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* const&
UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get_validLoaderDeinitStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validLoaderDeinitStates;
}
constexpr void
UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_set_validLoaderDeinitStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___validLoaderDeinitStates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>*& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get_runningStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___runningStates;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* const&
UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get_runningStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___runningStates;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_set_runningStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___runningStates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get_currentOpenXRState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentOpenXRState;
}
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get_currentOpenXRState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentOpenXRState;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_set_currentOpenXRState(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentOpenXRState = value;
}
constexpr bool& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get_actionSetsAttached() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actionSetsAttached;
}
constexpr bool const& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get_actionSetsAttached() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actionSetsAttached;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_set_actionSetsAttached(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___actionSetsAttached = value;
}
constexpr ::System::UnhandledExceptionEventHandler*& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get_unhandledExceptionHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unhandledExceptionHandler;
}
constexpr ::System::UnhandledExceptionEventHandler* const& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get_unhandledExceptionHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unhandledExceptionHandler;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_set_unhandledExceptionHandler(::System::UnhandledExceptionEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unhandledExceptionHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get_DisableValidationChecksOnEnteringPlaymode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisableValidationChecksOnEnteringPlaymode;
}
constexpr bool const& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get_DisableValidationChecksOnEnteringPlaymode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisableValidationChecksOnEnteringPlaymode;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_set_DisableValidationChecksOnEnteringPlaymode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DisableValidationChecksOnEnteringPlaymode = value;
}
constexpr double_t& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get_lastPollCheckTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastPollCheckTime;
}
constexpr double_t const& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_get_lastPollCheckTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastPollCheckTime;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__cordl_internal_set_lastPollCheckTime(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastPollCheckTime = value;
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::setStaticF_s_DisplaySubsystemDescriptors(::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>*, "s_DisplaySubsystemDescriptors",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* UnityEngine::XR::OpenXR::OpenXRLoaderBase::getStaticF_s_DisplaySubsystemDescriptors() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>*, "s_DisplaySubsystemDescriptors",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get>();
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::setStaticF_s_InputSubsystemDescriptors(::System::Collections::Generic::List_1<Il2CppObject*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "s_InputSubsystemDescriptors",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get>(
      std::forward<::System::Collections::Generic::List_1<Il2CppObject*>*>(value));
}
inline ::System::Collections::Generic::List_1<Il2CppObject*>* UnityEngine::XR::OpenXR::OpenXRLoaderBase::getStaticF_s_InputSubsystemDescriptors() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "s_InputSubsystemDescriptors",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get>();
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::setStaticF__Instance_k__BackingField(::UnityW<::UnityEngine::XR::OpenXR::OpenXRLoaderBase> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::XR::OpenXR::OpenXRLoaderBase>, "<Instance>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get>(
      std::forward<::UnityW<::UnityEngine::XR::OpenXR::OpenXRLoaderBase>>(value));
}
inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRLoaderBase> UnityEngine::XR::OpenXR::OpenXRLoaderBase::getStaticF__Instance_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::XR::OpenXR::OpenXRLoaderBase>, "<Instance>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get>();
}
inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRLoaderBase> UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::OpenXR::OpenXRLoaderBase>, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::set_Instance(::UnityEngine::XR::OpenXR::OpenXRLoaderBase* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "set_Instance", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_currentLoaderState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "get_currentLoaderState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::set_currentLoaderState(::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "set_currentLoaderState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline Il2CppObject* UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_displaySubsystem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "get_displaySubsystem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<Il2CppObject*, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::XRInputSubsystem* UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_inputSubsystem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "get_inputSubsystem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRInputSubsystem*, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_isInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "get_isInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_isStarted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "get_isStarted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::ExceptionHandler(::System::Object* sender, ::System::UnhandledExceptionEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "ExceptionHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UnhandledExceptionEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sender, args);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Initialize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::InitializeInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "InitializeInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::CreateSubsystems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "CreateSubsystems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::ProcessOpenXRMessageLoop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "ProcessOpenXRMessageLoop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Start() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::StartInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "StartInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Stop() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::StopInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "StopInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Deinitialize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TDescriptor, typename TSubsystem>
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::CreateSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "CreateSubsystem",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TDescriptor>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, descriptors, id);
}
template <typename T> inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::StartSubsystem() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "StartSubsystem",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::StopSubsystem() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "StopSubsystem",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::DestroySubsystem() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "DestroySubsystem",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::SetApplicationInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "SetApplicationInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnityEngine::XR::OpenXR::OpenXRLoaderBase::StringToWCHAR_T(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "StringToWCHAR_T",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, s);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::LoadOpenXRSymbols() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "LoadOpenXRSymbols", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::RequestOpenXRFeatures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "RequestOpenXRFeatures", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::LogRequestedOpenXRFeatures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "LogRequestedOpenXRFeatures", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::DebugLogEnabledSpecExtensions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "DebugLogEnabledSpecExtensions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::ReceiveNativeEvent(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent e, uint64_t payload) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "ReceiveNativeEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, e, payload);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::RegisterOpenXRCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "RegisterOpenXRCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_LoadOpenXRLibrary(::ArrayW<uint8_t, ::Array<uint8_t>*> loaderPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "Internal_LoadOpenXRLibrary", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, loaderPath);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_UnloadOpenXRLibrary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "Internal_UnloadOpenXRLibrary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_SetCallbacks(::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "Internal_SetCallbacks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_SetApplicationInfo(::StringW applicationName, ::StringW applicationVersion, uint32_t applicationVersionHash, ::StringW engineVersion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "Internal_SetApplicationInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, applicationName, applicationVersion, applicationVersionHash, engineVersion);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_RequestExitSession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "Internal_RequestExitSession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_InitializeSession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "Internal_InitializeSession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_CreateSessionIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "Internal_CreateSessionIfNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_BeginSession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "Internal_BeginSession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_EndSession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "Internal_EndSession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_DestroySession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "Internal_DestroySession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_PumpMessageLoop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "Internal_PumpMessageLoop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_SetSuccessfullyInitialized(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "Internal_SetSuccessfullyInitialized",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_RequestEnableExtensionString(::StringW extensionString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "Internal_RequestEnableExtensionString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, extensionString);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_IsExtensionEnabled(::StringW extensionName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "Internal_IsExtensionEnabled",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, extensionName);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::OpenXRLoaderBase* UnityEngine::XR::OpenXR::OpenXRLoaderBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRLoaderBase::OpenXRLoaderBase() {}
