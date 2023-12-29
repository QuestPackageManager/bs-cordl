#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Management/zzzz__XRLoaderHelper_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderBase_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderBase_def.hpp"
#include "System/zzzz__UnhandledExceptionEventArgs_def.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystemDescriptor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystem_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderBase_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "System/zzzz__UnhandledExceptionEventHandler_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState::__OpenXRLoaderBase__LoaderState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState::__OpenXRLoaderBase__LoaderState() {}
constexpr ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState::Uninitialized{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState::InitializeAttempted{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState::Initialized{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState::StartAttempted{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState::Started{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState::StopAttempted{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState::Stopped{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState::DeinitializeAttempted{ static_cast<int32_t>(0x7) };
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate::*)(::System::Object*, void*)>(
    &::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b0178c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate::*)(
    ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent, uint64_t)>(&::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2b019a8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate::*)(::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent, uint64_t, ::System::AsyncCallback*,
                                                                                  ::System::Object*)>(&::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2b019bc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate::*)(::System::IAsyncResult*)>(
    &::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b01a70;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate* UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                    void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate*>(object, method));
}
inline void UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate::Invoke(::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent e, uint64_t payload) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e, payload);
}
inline ::System::IAsyncResult* UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate::BeginInvoke(::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent e,
                                                                                                                    uint64_t payload, ::System::AsyncCallback* callback, ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, e, payload, callback, object);
}
inline void UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate*>::get(), "EndInvoke",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate::__OpenXRLoaderBase__ReceiveNativeEventDelegate() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c::*)()>(
    &::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b01ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c._InitializeInternal_b__31_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c::*)(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*)>(
    &::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c::_InitializeInternal_b__31_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b01ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c*>::get(), "<InitializeInternal>b__31_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c._InitializeInternal_b__31_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c::*)(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*)>(
    &::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c::_InitializeInternal_b__31_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b01b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c*>::get(), "<InitializeInternal>b__31_1", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c._InitializeInternal_b__31_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c::*)(
    ::UnityEngine::XR::OpenXR::Features::OpenXRFeature*)>(&::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c::_InitializeInternal_b__31_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b01b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c*>::get(), "<InitializeInternal>b__31_2", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c::setStaticF___9(::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c*>::get>(
      std::forward<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c*>(value));
}
inline ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c* UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c*>::get>();
}
inline void UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c::setStaticF___9__31_0(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>*, "<>9__31_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>* UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c::getStaticF___9__31_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>*, "<>9__31_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c*>::get>();
}
inline void UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c::setStaticF___9__31_1(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, int32_t>*, "<>9__31_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, int32_t>* UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c::getStaticF___9__31_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, int32_t>*, "<>9__31_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c*>::get>();
}
inline void UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c::setStaticF___9__31_2(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>*, "<>9__31_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>* UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c::getStaticF___9__31_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>*, "<>9__31_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c*>::get>();
}
inline ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c* UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c*>());
}
inline void UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c::_InitializeInternal_b__31_0(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c*>::get(), "<InitializeInternal>b__31_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, f);
}
inline int32_t UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c::_InitializeInternal_b__31_1(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c*>::get(), "<InitializeInternal>b__31_1", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, f);
}
inline ::StringW UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c::_InitializeInternal_b__31_2(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c*>::get(), "<InitializeInternal>b__31_2", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, f);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c::__OpenXRLoaderBase____c() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::OpenXRLoaderBase* (*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2afcd18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "get_Instance", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.set_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::OpenXRLoaderBase*)>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::set_Instance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2afcd70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "set_Instance", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.get_currentLoaderState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_currentLoaderState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2afcdcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "get_currentLoaderState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.set_currentLoaderState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)(::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState)>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::set_currentLoaderState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2afcdd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "set_currentLoaderState", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.get_displaySubsystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Il2CppObject* (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_displaySubsystem)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2afcddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "get_displaySubsystem", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.get_inputSubsystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::XRInputSubsystem* (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_inputSubsystem)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2afce4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "get_inputSubsystem", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.get_isInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_isInitialized)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2afcf24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "get_isInitialized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.get_isStarted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_isStarted)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2afcf40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "get_isStarted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.ExceptionHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::System::UnhandledExceptionEventArgs*)>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::ExceptionHandler)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2afcf94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "ExceptionHandler", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UnhandledExceptionEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Initialize)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2afd1c8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.InitializeInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::InitializeInternal)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x2afd428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "InitializeInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.CreateSubsystems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::CreateSubsystems)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2afe810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "CreateSubsystems", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.ProcessOpenXRMessageLoop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::ProcessOpenXRMessageLoop)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2afecd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "ProcessOpenXRMessageLoop", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2afedd4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.StartInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::StartInternal)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2afee74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "StartInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Stop)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2b00658;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.StopInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::StopInternal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b00778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "StopInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Deinitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Deinitialize)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x2b00834;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.SetApplicationInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::SetApplicationInfo)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2afde38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "SetApplicationInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.StringToWCHAR_T
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::StringW)>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::StringToWCHAR_T)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2b00cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "StringToWCHAR_T",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.LoadOpenXRSymbols
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::LoadOpenXRSymbols)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2afdc44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "LoadOpenXRSymbols", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.RequestOpenXRFeatures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::RequestOpenXRFeatures)> {
  constexpr static std::size_t size = 0x7dc;
  constexpr static std::size_t addrs = 0x2afdf9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "RequestOpenXRFeatures", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.DebugLogEnabledSpecExtensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::DebugLogEnabledSpecExtensions)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2afeb00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "DebugLogEnabledSpecExtensions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.ReceiveNativeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent, uint64_t)>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::ReceiveNativeEvent)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2afcadc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "ReceiveNativeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.RegisterOpenXRCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::RegisterOpenXRCallbacks)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2afe778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "RegisterOpenXRCallbacks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_LoadOpenXRLibrary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_LoadOpenXRLibrary)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b00d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "Internal_LoadOpenXRLibrary", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_UnloadOpenXRLibrary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_UnloadOpenXRLibrary)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b00bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "Internal_UnloadOpenXRLibrary", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_SetCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate*)>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_SetCallbacks)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b01850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "Internal_SetCallbacks", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_SetApplicationInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, uint32_t, ::StringW)>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_SetApplicationInfo)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2b00c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "Internal_SetApplicationInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_RequestExitSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_RequestExitSession)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b00af8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "Internal_RequestExitSession", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_InitializeSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_InitializeSession)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2afddc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "Internal_InitializeSession", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_CreateSessionIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_CreateSessionIfNeeded)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2aff01c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "Internal_CreateSessionIfNeeded", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_BeginSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_BeginSession)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2aff08c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "Internal_BeginSession", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_EndSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_EndSession)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b007d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "Internal_EndSession", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_DestroySession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_DestroySession)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b00b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "Internal_DestroySession", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_PumpMessageLoop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_PumpMessageLoop)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2afed70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                               "Internal_PumpMessageLoop", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_RequestEnableExtensionString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_RequestEnableExtensionString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2b00e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "Internal_RequestEnableExtensionString",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderBase::_ctor)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x2afc3fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get__currentLoaderState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentLoaderState_k__BackingField;
}
constexpr ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState const& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get__currentLoaderState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentLoaderState_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set__currentLoaderState_k__BackingField(::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentLoaderState_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>*& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_validLoaderInitStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validLoaderInitStates;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>*> const&
UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_validLoaderInitStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validLoaderInitStates;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set_validLoaderInitStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___validLoaderInitStates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>*& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_validLoaderStartStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validLoaderStartStates;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>*> const&
UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_validLoaderStartStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validLoaderStartStates;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set_validLoaderStartStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___validLoaderStartStates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>*& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_validLoaderStopStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validLoaderStopStates;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>*> const&
UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_validLoaderStopStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validLoaderStopStates;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set_validLoaderStopStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___validLoaderStopStates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>*& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_validLoaderDeinitStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validLoaderDeinitStates;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>*> const&
UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_validLoaderDeinitStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validLoaderDeinitStates;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set_validLoaderDeinitStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___validLoaderDeinitStates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>*& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_runningStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___runningStates;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>*> const&
UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_runningStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___runningStates;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set_runningStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___runningStates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_currentOpenXRState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentOpenXRState;
}
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent const& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_currentOpenXRState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentOpenXRState;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set_currentOpenXRState(::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentOpenXRState = value;
}
constexpr bool& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_actionSetsAttached() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actionSetsAttached;
}
constexpr bool const& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_actionSetsAttached() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actionSetsAttached;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set_actionSetsAttached(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___actionSetsAttached = value;
}
constexpr ::System::UnhandledExceptionEventHandler*& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_unhandledExceptionHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unhandledExceptionHandler;
}
constexpr ::cordl_internals::to_const_pointer<::System::UnhandledExceptionEventHandler*> const& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_unhandledExceptionHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unhandledExceptionHandler;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set_unhandledExceptionHandler(::System::UnhandledExceptionEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unhandledExceptionHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_DisableValidationChecksOnEnteringPlaymode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisableValidationChecksOnEnteringPlaymode;
}
constexpr bool const& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_DisableValidationChecksOnEnteringPlaymode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisableValidationChecksOnEnteringPlaymode;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set_DisableValidationChecksOnEnteringPlaymode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DisableValidationChecksOnEnteringPlaymode = value;
}
constexpr double_t& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_lastPollCheckTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastPollCheckTime;
}
constexpr double_t const& UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_lastPollCheckTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastPollCheckTime;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set_lastPollCheckTime(double_t value) {
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
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::setStaticF__Instance_k__BackingField(::UnityEngine::XR::OpenXR::OpenXRLoaderBase* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*, "<Instance>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get>(
      std::forward<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>(value));
}
inline ::UnityEngine::XR::OpenXR::OpenXRLoaderBase* UnityEngine::XR::OpenXR::OpenXRLoaderBase::getStaticF__Instance_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*, "<Instance>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get>();
}
inline ::UnityEngine::XR::OpenXR::OpenXRLoaderBase* UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "get_Instance", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::set_Instance(::UnityEngine::XR::OpenXR::OpenXRLoaderBase* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "set_Instance", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_currentLoaderState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "get_currentLoaderState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::set_currentLoaderState(::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "set_currentLoaderState", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline Il2CppObject* UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_displaySubsystem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "get_displaySubsystem", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<Il2CppObject*, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::XRInputSubsystem* UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_inputSubsystem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "get_inputSubsystem", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRInputSubsystem*, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_isInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "get_isInitialized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_isStarted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "get_isStarted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::ExceptionHandler(::System::Object* sender, ::System::UnhandledExceptionEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "ExceptionHandler", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UnhandledExceptionEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sender, args);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "Initialize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::InitializeInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "InitializeInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::CreateSubsystems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "CreateSubsystems", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::ProcessOpenXRMessageLoop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "ProcessOpenXRMessageLoop", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::StartInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "StartInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Stop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "Stop",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::StopInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "StopInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Deinitialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "Deinitialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TDescriptor, typename TSubsystem>
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::CreateSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "CreateSubsystem",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TDescriptor>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, descriptors, id);
}
template <typename T> inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::StartSubsystem() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "StartSubsystem",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::StopSubsystem() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "StopSubsystem",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::DestroySubsystem() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "DestroySubsystem",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::SetApplicationInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "SetApplicationInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnityEngine::XR::OpenXR::OpenXRLoaderBase::StringToWCHAR_T(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "StringToWCHAR_T",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, s);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::LoadOpenXRSymbols() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "LoadOpenXRSymbols", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::RequestOpenXRFeatures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "RequestOpenXRFeatures", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::DebugLogEnabledSpecExtensions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "DebugLogEnabledSpecExtensions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::ReceiveNativeEvent(::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent e, uint64_t payload) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "ReceiveNativeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, e, payload);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::RegisterOpenXRCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "RegisterOpenXRCallbacks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_LoadOpenXRLibrary(::ArrayW<uint8_t, ::Array<uint8_t>*> loaderPath) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "Internal_LoadOpenXRLibrary", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, loaderPath);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_UnloadOpenXRLibrary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "Internal_UnloadOpenXRLibrary", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_SetCallbacks(::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "Internal_SetCallbacks", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_SetApplicationInfo(::StringW applicationName, ::StringW applicationVersion, uint32_t applicationVersionHash, ::StringW engineVersion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "Internal_SetApplicationInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, applicationName, applicationVersion, applicationVersionHash, engineVersion);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_RequestExitSession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "Internal_RequestExitSession", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_InitializeSession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "Internal_InitializeSession", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_CreateSessionIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "Internal_CreateSessionIfNeeded", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_BeginSession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "Internal_BeginSession", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_EndSession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "Internal_EndSession", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_DestroySession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "Internal_DestroySession", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_PumpMessageLoop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                             "Internal_PumpMessageLoop", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_RequestEnableExtensionString(::StringW extensionString) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), "Internal_RequestEnableExtensionString",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, extensionString);
}
inline ::UnityEngine::XR::OpenXR::OpenXRLoaderBase* UnityEngine::XR::OpenXR::OpenXRLoaderBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>());
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRLoaderBase::OpenXRLoaderBase() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
