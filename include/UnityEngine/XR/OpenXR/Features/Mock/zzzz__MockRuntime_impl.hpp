#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/Mock/zzzz__MockRuntime_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/Mock/zzzz__MockRuntime_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrResult_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrReferenceSpaceType_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpaceLocationFlags_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSessionState_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrViewStateFlags_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrViewConfigurationType_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent::__MockRuntime__ScriptEvent(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent::__MockRuntime__ScriptEvent() {}
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent::EndFrame{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent::HapticImpulse{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent::HapticStop{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate::*)(::System::Object*, void*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b177dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate::*)(
    ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent, uint64_t)>(&::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2b178a0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate::*)(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent,
                                                                                                                           uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2b178b4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate::*)(::System::IAsyncResult*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b17968;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate* UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                            void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*>(object, method));
}
inline void UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate::Invoke(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent evt, uint64_t param) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, param);
}
inline ::System::IAsyncResult* UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate::BeginInvoke(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent evt,
                                                                                                                        uint64_t param, ::System::AsyncCallback* callback, ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, evt, param, callback, object);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*>::get(), "EndInvoke",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate::__MockRuntime__ScriptEventDelegate() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate::*)(::System::Object*, void*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2b16cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (
    ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate::*)(::StringW)>(&::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2b17974;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2b17988;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate::*)(::System::IAsyncResult*)>(
        &::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b179a8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*
UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>(object, method));
}
inline void UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate::Invoke(::StringW functionName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>::get(),
                                               "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult, false>(this, ___internal_method, functionName);
}
inline ::System::IAsyncResult* UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate::BeginInvoke(::StringW functionName, ::System::AsyncCallback* callback,
                                                                                                                           ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, functionName, callback, object);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>::get(), "EndInvoke",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate::__MockRuntime__BeforeFunctionDelegate() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate::*)(::System::Object*, void*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2b16d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate::*)(
    ::StringW, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult)>(&::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2b179d0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate::*)(::StringW, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult, ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2b179e4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate::*)(::System::IAsyncResult*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b17a78;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*
UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>(object, method));
}
inline void UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate::Invoke(::StringW functionName, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, functionName, result);
}
inline ::System::IAsyncResult* UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate::BeginInvoke(::StringW functionName,
                                                                                                                          ::UnityEngine::XR::OpenXR::NativeTypes::XrResult result,
                                                                                                                          ::System::AsyncCallback* callback, ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, functionName, result, callback, object);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>::get(), "EndInvoke",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate::__MockRuntime__AfterFunctionDelegate() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.add_onScriptEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::add_onScriptEvent)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2b166dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "add_onScriptEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.remove_onScriptEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::remove_onScriptEvent)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2b16798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "remove_onScriptEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime* (*)()>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b16854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                               "get_Instance", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.ReceiveScriptEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent, uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ReceiveScriptEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b165e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "ReceiveScriptEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.BeforeFunctionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(::StringW)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::BeforeFunctionCallback)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2b16660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "BeforeFunctionCallback",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.AfterFunctionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::AfterFunctionCallback)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b16694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "AfterFunctionCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetFunctionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*,
                                                                                           ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x2b169b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetFunctionCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetFunctionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2b16ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetFunctionCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetFunctionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2b16f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetFunctionCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.GetBeforeFunctionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate* (*)(::StringW)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetBeforeFunctionCallback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b1689c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "GetBeforeFunctionCallback",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.GetAfterFunctionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate* (*)(::StringW)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetAfterFunctionCallback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b16928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "GetAfterFunctionCallback",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.ClearFunctionCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ClearFunctionCallbacks)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2b16f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                               "ClearFunctionCallbacks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.ResetDefaults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ResetDefaults)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b16f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                               "ResetDefaults", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.OnInstanceDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::OnInstanceDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b16fe4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.HookCreateInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(void*)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::HookCreateInstance)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b16fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "HookCreateInstance",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetKeepFunctionCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetKeepFunctionCallbacks)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b17060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetKeepFunctionCallbacks",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetViewPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector4)>(
        &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetViewPose)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2b170dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetViewPose", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetViewState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType, ::UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags)>(
        &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetViewState)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b171d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetViewState", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType, ::UnityEngine::Vector3,
                                                                                           ::UnityEngine::Quaternion, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetSpace)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2b17250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetSpace", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    uint64_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetSpace)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2b1732c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetSpace", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.Internal_RegisterScriptEventCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(
    ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*)>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_RegisterScriptEventCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b17408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "Internal_RegisterScriptEventCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.Internal_TransitionToState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState, bool)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_TransitionToState)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2b17484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "Internal_TransitionToState", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.Internal_GetSessionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState (*)()>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_GetSessionState)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b1750c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                               "Internal_GetSessionState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.RequestExitSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::RequestExitSession)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b17574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                               "RequestExitSession", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.CauseInstanceLoss
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::CauseInstanceLoss)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b175d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                               "CauseInstanceLoss", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetReferenceSpaceBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType, ::UnityEngine::Vector2)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetReferenceSpaceBounds)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2b1763c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetReferenceSpaceBounds", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.GetEndFrameStats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<int32_t>, ByRef<int32_t>)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetEndFrameStats)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2b176d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                               "GetEndFrameStats", std::vector<Il2CppClass*>{},
                                                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.ActivateSecondaryView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType, bool)>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ActivateSecondaryView)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b17754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "ActivateSecondaryView", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.MockRuntime_RegisterFunctionCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*, ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*)>(
        &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::MockRuntime_RegisterFunctionCallbacks)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2b16e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "MockRuntime_RegisterFunctionCallbacks", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b177d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::__get_ignoreValidationErrors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreValidationErrors;
}
constexpr bool const& UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::__get_ignoreValidationErrors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreValidationErrors;
}
constexpr void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::__set_ignoreValidationErrors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ignoreValidationErrors = value;
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::setStaticF_s_AfterFunctionCallbacks(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>*,
                                    "s_AfterFunctionCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>*
UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::getStaticF_s_AfterFunctionCallbacks() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>*,
                                           "s_AfterFunctionCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get>();
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::setStaticF_s_BeforeFunctionCallbacks(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>*,
                                    "s_BeforeFunctionCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>*
UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::getStaticF_s_BeforeFunctionCallbacks() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>*,
                                           "s_BeforeFunctionCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get>();
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::setStaticF_onScriptEvent(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*, "onScriptEvent",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get>(
      std::forward<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*>(value));
}
inline ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::getStaticF_onScriptEvent() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*, "onScriptEvent",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get>();
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::add_onScriptEvent(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "add_onScriptEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::remove_onScriptEvent(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "remove_onScriptEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                             "get_Instance", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ReceiveScriptEvent(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent evt, uint64_t param) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "ReceiveScriptEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, evt, param);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::BeforeFunctionCallback(::StringW function) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "BeforeFunctionCallback",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult, false>(nullptr, ___internal_method, function);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::AfterFunctionCallback(::StringW function, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "AfterFunctionCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, function, result);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback(::StringW function,
                                                                                      ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate* beforeCallback,
                                                                                      ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate* afterCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetFunctionCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, function, beforeCallback, afterCallback);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback(::StringW function,
                                                                                      ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate* beforeCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetFunctionCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, function, beforeCallback);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback(::StringW function,
                                                                                      ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate* afterCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetFunctionCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, function, afterCallback);
}
inline ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetBeforeFunctionCallback(::StringW function) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "GetBeforeFunctionCallback",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*, false>(nullptr, ___internal_method, function);
}
inline ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetAfterFunctionCallback(::StringW function) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "GetAfterFunctionCallback",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*, false>(nullptr, ___internal_method, function);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ClearFunctionCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                             "ClearFunctionCallbacks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ResetDefaults() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                             "ResetDefaults", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::OnInstanceDestroy(uint64_t instance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "OnInstanceDestroy",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance);
}
inline void* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::HookCreateInstance(void* func) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "HookCreateInstance",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, func);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetKeepFunctionCallbacks(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetKeepFunctionCallbacks",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetViewPose(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType viewConfigurationType, int32_t viewIndex,
                                                                              ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector4 fov) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetViewPose", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, viewConfigurationType, viewIndex, position, orientation, fov);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetViewState(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType viewConfigurationType,
                                                                               ::UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags viewStateFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetViewState", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, viewConfigurationType, viewStateFlags);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetSpace(::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType referenceSpace, ::UnityEngine::Vector3 position,
                                                                           ::UnityEngine::Quaternion orientation, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags locationFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetSpace", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, referenceSpace, position, orientation, locationFlags);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetSpace(uint64_t actionHandle, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation,
                                                                           ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags locationFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetSpace", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actionHandle, position, orientation, locationFlags);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult
UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_RegisterScriptEventCallback(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "Internal_RegisterScriptEventCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult, false>(nullptr, ___internal_method, callback);
}
inline bool UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_TransitionToState(::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState state, bool forceTransition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "Internal_TransitionToState", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, state, forceTransition);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_GetSessionState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                             "Internal_GetSessionState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::RequestExitSession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                             "RequestExitSession", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::CauseInstanceLoss() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                             "CauseInstanceLoss", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetReferenceSpaceBounds(::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType referenceSpace, ::UnityEngine::Vector2 bounds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "SetReferenceSpaceBounds", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, referenceSpace, bounds);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetEndFrameStats(ByRef<int32_t> primaryLayerCount, ByRef<int32_t> secondaryLayerCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "GetEndFrameStats", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, primaryLayerCount, secondaryLayerCount);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ActivateSecondaryView(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType viewConfigurationType, bool activate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "ActivateSecondaryView", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, viewConfigurationType, activate);
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::MockRuntime_RegisterFunctionCallbacks(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate* hookBefore,
                                                                                                        ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate* hookAfter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(), "MockRuntime_RegisterFunctionCallbacks", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, hookBefore, hookAfter);
}
inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime* UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>());
}
inline void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::MockRuntime() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
