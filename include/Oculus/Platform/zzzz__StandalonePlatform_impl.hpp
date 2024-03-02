#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__StandalonePlatform_def.hpp"
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "Oculus/Platform/zzzz__InitConfigOptions_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__StandalonePlatform_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::__StandalonePlatform__UnityLogDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::__StandalonePlatform__UnityLogDelegate::*)(::System::Object*, void*)>(
    &::Oculus::Platform::__StandalonePlatform__UnityLogDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27f288c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__StandalonePlatform__UnityLogDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::__StandalonePlatform__UnityLogDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::__StandalonePlatform__UnityLogDelegate::*)(void*, void*)>(
    &::Oculus::Platform::__StandalonePlatform__UnityLogDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27f2950;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__StandalonePlatform__UnityLogDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__StandalonePlatform__UnityLogDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::__StandalonePlatform__UnityLogDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::Oculus::Platform::__StandalonePlatform__UnityLogDelegate::*)(void*, void*, ::System::AsyncCallback*, ::System::Object*)>(
        &::Oculus::Platform::__StandalonePlatform__UnityLogDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x27f2964;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__StandalonePlatform__UnityLogDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__StandalonePlatform__UnityLogDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::__StandalonePlatform__UnityLogDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::__StandalonePlatform__UnityLogDelegate::*)(::System::IAsyncResult*)>(
    &::Oculus::Platform::__StandalonePlatform__UnityLogDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27f29fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__StandalonePlatform__UnityLogDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__StandalonePlatform__UnityLogDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::__StandalonePlatform__UnityLogDelegate* Oculus::Platform::__StandalonePlatform__UnityLogDelegate::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::__StandalonePlatform__UnityLogDelegate*>(object, method));
}
inline void Oculus::Platform::__StandalonePlatform__UnityLogDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__StandalonePlatform__UnityLogDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Oculus::Platform::__StandalonePlatform__UnityLogDelegate::Invoke(void* tag, void* msg) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__StandalonePlatform__UnityLogDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tag, msg);
}
inline ::System::IAsyncResult* Oculus::Platform::__StandalonePlatform__UnityLogDelegate::BeginInvoke(void* tag, void* msg, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__StandalonePlatform__UnityLogDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, tag, msg, callback, object);
}
inline void Oculus::Platform::__StandalonePlatform__UnityLogDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__StandalonePlatform__UnityLogDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::__StandalonePlatform__UnityLogDelegate::__StandalonePlatform__UnityLogDelegate() {}
//  Writing Method size for method: ::Oculus::Platform::StandalonePlatform.InitializeInEditor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* (
    ::Oculus::Platform::StandalonePlatform::*)()>(&::Oculus::Platform::StandalonePlatform::InitializeInEditor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x27e68f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::StandalonePlatform*>::get(),
                                                                               "InitializeInEditor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::StandalonePlatform.AsyncInitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* (
    ::Oculus::Platform::StandalonePlatform::*)(uint64_t, ::StringW)>(&::Oculus::Platform::StandalonePlatform::AsyncInitialize)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x27f1f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::StandalonePlatform*>::get(), "AsyncInitialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::StandalonePlatform.AsyncInitializeWithAccessTokenAndOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* (
    ::Oculus::Platform::StandalonePlatform::*)(::StringW, ::StringW, ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions, bool>*)>(
    &::Oculus::Platform::StandalonePlatform::AsyncInitializeWithAccessTokenAndOptions)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x27e6db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::StandalonePlatform*>::get(), "AsyncInitializeWithAccessTokenAndOptions",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::StandalonePlatform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::StandalonePlatform::*)()>(&::Oculus::Platform::StandalonePlatform::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27e68ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::StandalonePlatform*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* Oculus::Platform::StandalonePlatform::InitializeInEditor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::StandalonePlatform*>::get(),
                                                                             "InitializeInEditor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* Oculus::Platform::StandalonePlatform::AsyncInitialize(uint64_t appID, ::StringW accessToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::StandalonePlatform*>::get(), "AsyncInitialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>*, false>(this, ___internal_method, appID, accessToken);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>*
Oculus::Platform::StandalonePlatform::AsyncInitializeWithAccessTokenAndOptions(::StringW appId, ::StringW accessToken,
                                                                               ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions, bool>* initConfigOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::StandalonePlatform*>::get(), "AsyncInitializeWithAccessTokenAndOptions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>*, false>(this, ___internal_method, appId, accessToken, initConfigOptions);
}
inline ::Oculus::Platform::StandalonePlatform* Oculus::Platform::StandalonePlatform::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::StandalonePlatform*>());
}
inline void Oculus::Platform::StandalonePlatform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::StandalonePlatform*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::StandalonePlatform::StandalonePlatform() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
