#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/AssetBundleResource.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__BundleSource_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__AssetBundleResource_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "UnityEngine/ResourceManagement/Profiling/zzzz__ContentStatus_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__AssetBundleRequestOptions_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__AssetBundleResource_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IAssetBundleResource_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__BundleSource_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__UnityWebRequestResult_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__IUpdateReceiver_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__WebRequestQueueOperation_def.hpp"
#include "UnityEngine/zzzz__AssetBundleRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundleUnloadOperation_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType::AssetBundleResource_LoadType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType::AssetBundleResource_LoadType() {}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType::None{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType::Local{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType::Web{
  static_cast<int32_t>(0x2)
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66fc198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c.__ctor_b__52_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c::*)(
    ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c::__ctor_b__52_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66fc19c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c*>::get(), "<.ctor>b__52_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c::setStaticF___9(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c*>::get>(
      std::forward<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c*>(value));
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c* UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c*>::get>();
}
inline void
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c::setStaticF___9__52_0(::System::Func_2<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*, bool>*, "<>9__52_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*, bool>* UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c::getStaticF___9__52_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*, bool>*, "<>9__52_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c*>::get>();
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c::__ctor_b__52_0(::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* x) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c*>::get(), "<.ctor>b__52_0",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c* UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource___c::AssetBundleResource___c() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.get_HasTimedOut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::get_HasTimedOut)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x66f92d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                                 "get_HasTimedOut", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.get_BytesToDownload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::get_BytesToDownload)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x66f9314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                                 "get_BytesToDownload", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.CreateWebRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest* (
    ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::CreateWebRequest)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x66f941c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "CreateWebRequest",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.CreateWebRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest* (
    ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::StringW)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::CreateWebRequest)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x66f9444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "CreateWebRequest",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.GetAssetPreloadRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AssetBundleRequest* (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetAssetPreloadRequest)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x66f9794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                                 "GetAssetPreloadRequest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.PercentComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::PercentComplete)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66f98d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                                 "PercentComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.GetDownloadStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (
    ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetDownloadStatus)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x66f98f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                                 "GetDownloadStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.GetAssetBundle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AssetBundle> (
    ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetAssetBundle)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x66f98bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                                 "GetAssetBundle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.AddBundleToProfiler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(
    ::UnityEngine::ResourceManagement::Profiling::ContentStatus, ::UnityEngine::ResourceManagement::Util::BundleSource)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::AddBundleToProfiler)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x66f9650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "AddBundleToProfiler",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Profiling::ContentStatus>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::BundleSource>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.RemoveBundleFromProfiler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::RemoveBundleFromProfiler)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x66fa110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                                 "RemoveBundleFromProfiler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.OnUnloadOperationComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::AsyncOperation*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::OnUnloadOperationComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66fa180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "OnUnloadOperationComplete",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, ::UnityEngine::AssetBundleUnloadOperation*,
    ::System::Func_2<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*, bool>*)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::Start)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x66fa3a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "Start", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AssetBundleUnloadOperation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.WaitForCompletionHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::WaitForCompletionHandler)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x66fa9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                                 "WaitForCompletionHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.AddCallbackInvokeIfDone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(
    ::UnityEngine::AsyncOperation*, ::System::Action_1<::UnityEngine::AsyncOperation*>*)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::AddCallbackInvokeIfDone)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66fb534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                    "AddCallbackInvokeIfDone", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::AsyncOperation*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.GetLoadInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, ::ByRef<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType>, ::ByRef<::StringW>)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetLoadInfo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x66fb594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "GetLoadInfo",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.GetLoadInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::ResourceManager*,
                         ::ByRef<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType>, ::ByRef<::StringW>)>(
        &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetLoadInfo)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x66fb5c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "GetLoadInfo",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.BeginOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::BeginOperation)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x66fa188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                                 "BeginOperation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.LoadLocalBundle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::LoadLocalBundle)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x66fb84c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                                 "LoadLocalBundle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.EnqueueWebRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::WebRequestQueueOperation* (
    ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::StringW)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::EnqueueWebRequest)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x66fb90c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "EnqueueWebRequest",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.AddBeginWebRequestHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(
    ::UnityEngine::ResourceManagement::WebRequestQueueOperation*)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::AddBeginWebRequestHandler)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x66fba28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                    "AddBeginWebRequestHandler", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.BeginWebRequestOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::AsyncOperation*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::BeginWebRequestOperation)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x66fbb3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "BeginWebRequestOperation",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(float_t)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::Update)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x66fbc54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "Update",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.LocalRequestOperationCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::AsyncOperation*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::LocalRequestOperationCompleted)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x66fb474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "LocalRequestOperationCompleted",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.CompleteBundleLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::AssetBundle*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::CompleteBundleLoad)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x66fbe1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "CompleteBundleLoad",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AssetBundle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.WebRequestOperationCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::AsyncOperation*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::WebRequestOperationCompleted)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0x66fad4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "WebRequestOperationCompleted",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.Unload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(
    ::ByRef<::UnityEngine::AssetBundleUnloadOperation*>)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::Unload)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x66fbf98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "Unload", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::AssetBundleUnloadOperation*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x66fc04c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource._GetAssetPreloadRequest_b__30_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::AsyncOperation*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::_GetAssetPreloadRequest_b__30_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66fc134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "<GetAssetPreloadRequest>b__30_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource._AddBeginWebRequestHandler_b__45_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(
    ::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::_AddBeginWebRequestHandler_b__45_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66fc140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                    "<AddBeginWebRequestHandler>b__45_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AssetBundle>& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_AssetBundle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetBundle;
}
constexpr ::UnityW<::UnityEngine::AssetBundle> const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_AssetBundle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetBundle;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_set_m_AssetBundle(::UnityW<::UnityEngine::AssetBundle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AssetBundle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AsyncOperation*& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_RequestOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestOperation;
}
constexpr ::UnityEngine::AsyncOperation* const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_RequestOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestOperation;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_set_m_RequestOperation(::UnityEngine::AsyncOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RequestOperation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation*& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_WebRequestQueueOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WebRequestQueueOperation;
}
constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation* const&
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_WebRequestQueueOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WebRequestQueueOperation;
}
constexpr void
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_set_m_WebRequestQueueOperation(::UnityEngine::ResourceManagement::WebRequestQueueOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_WebRequestQueueOperation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_ProvideHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProvideHandle;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle const&
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_ProvideHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProvideHandle;
}
constexpr void
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_set_m_ProvideHandle(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProvideHandle = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_Options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Options;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions* const&
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_Options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Options;
}
constexpr void
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_set_m_Options(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Options)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_RequestCompletedCallbackCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestCompletedCallbackCalled;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_RequestCompletedCallbackCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestCompletedCallbackCalled;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_set_m_RequestCompletedCallbackCalled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequestCompletedCallbackCalled = value;
}
constexpr int32_t& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_Retries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Retries;
}
constexpr int32_t const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_Retries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Retries;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_set_m_Retries(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Retries = value;
}
constexpr ::UnityEngine::ResourceManagement::Util::BundleSource& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_Source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Source;
}
constexpr ::UnityEngine::ResourceManagement::Util::BundleSource const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_Source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Source;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_set_m_Source(::UnityEngine::ResourceManagement::Util::BundleSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Source = value;
}
constexpr int64_t& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_BytesToDownload() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BytesToDownload;
}
constexpr int64_t const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_BytesToDownload() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BytesToDownload;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_set_m_BytesToDownload(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BytesToDownload = value;
}
constexpr int64_t& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_DownloadedBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DownloadedBytes;
}
constexpr int64_t const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_DownloadedBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DownloadedBytes;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_set_m_DownloadedBytes(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DownloadedBytes = value;
}
constexpr bool& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_Completed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Completed;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_Completed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Completed;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_set_m_Completed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Completed = value;
}
constexpr ::UnityEngine::AssetBundleUnloadOperation*& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_UnloadOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnloadOperation;
}
constexpr ::UnityEngine::AssetBundleUnloadOperation* const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_UnloadOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnloadOperation;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_set_m_UnloadOperation(::UnityEngine::AssetBundleUnloadOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UnloadOperation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_TransformedInternalId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformedInternalId;
}
constexpr ::StringW const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_TransformedInternalId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformedInternalId;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_set_m_TransformedInternalId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TransformedInternalId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AssetBundleRequest*& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_PreloadRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreloadRequest;
}
constexpr ::UnityEngine::AssetBundleRequest* const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_PreloadRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreloadRequest;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_set_m_PreloadRequest(::UnityEngine::AssetBundleRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PreloadRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_PreloadCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreloadCompleted;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_PreloadCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreloadCompleted;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_set_m_PreloadCompleted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreloadCompleted = value;
}
constexpr uint64_t& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_LastDownloadedByteCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastDownloadedByteCount;
}
constexpr uint64_t const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_LastDownloadedByteCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastDownloadedByteCount;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_set_m_LastDownloadedByteCount(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastDownloadedByteCount = value;
}
constexpr float_t& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_TimeoutTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeoutTimer;
}
constexpr float_t const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_TimeoutTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeoutTimer;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_set_m_TimeoutTimer(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TimeoutTimer = value;
}
constexpr int32_t& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_TimeoutOverFrames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeoutOverFrames;
}
constexpr int32_t const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_TimeoutOverFrames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeoutOverFrames;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_set_m_TimeoutOverFrames(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TimeoutOverFrames = value;
}
constexpr bool& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_DownloadOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DownloadOnly;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_DownloadOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DownloadOnly;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_set_m_DownloadOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DownloadOnly = value;
}
constexpr int32_t& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_LastFrameCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastFrameCount;
}
constexpr int32_t const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_LastFrameCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastFrameCount;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_set_m_LastFrameCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastFrameCount = value;
}
constexpr float_t& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_TimeSecSinceLastUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeSecSinceLastUpdate;
}
constexpr float_t const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_TimeSecSinceLastUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeSecSinceLastUpdate;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_set_m_TimeSecSinceLastUpdate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TimeSecSinceLastUpdate = value;
}
constexpr ::System::Func_2<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*, bool>*&
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_RequestRetryCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestRetryCallback;
}
constexpr ::System::Func_2<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*, bool>* const&
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_get_m_RequestRetryCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestRetryCallback;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__cordl_internal_set_m_RequestRetryCallback(
    ::System::Func_2<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RequestRetryCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::get_HasTimedOut() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                               "get_HasTimedOut", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::get_BytesToDownload() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                               "get_BytesToDownload", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Networking::UnityWebRequest*
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::CreateWebRequest(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "CreateWebRequest",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*, false>(this, ___internal_method, loc);
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::CreateWebRequest(::StringW url) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "CreateWebRequest",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*, false>(this, ___internal_method, url);
}
inline ::UnityEngine::AssetBundleRequest* UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetAssetPreloadRequest() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                               "GetAssetPreloadRequest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AssetBundleRequest*, false>(this, ___internal_method);
}
inline float_t UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::PercentComplete() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                               "PercentComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetDownloadStatus() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                               "GetDownloadStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AssetBundle> UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetAssetBundle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                               "GetAssetBundle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AssetBundle>, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::AddBundleToProfiler(::UnityEngine::ResourceManagement::Profiling::ContentStatus status,
                                                                                                         ::UnityEngine::ResourceManagement::Util::BundleSource source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "AddBundleToProfiler",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Profiling::ContentStatus>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::BundleSource>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, status, source);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::RemoveBundleFromProfiler() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                               "RemoveBundleFromProfiler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::OnUnloadOperationComplete(::UnityEngine::AsyncOperation* op) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "OnUnloadOperationComplete",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op);
}
inline void
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle,
                                                                               ::UnityEngine::AssetBundleUnloadOperation* unloadOp,
                                                                               ::System::Func_2<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*, bool>* requestRetryCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "Start", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AssetBundleUnloadOperation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provideHandle, unloadOp, requestRetryCallback);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::WaitForCompletionHandler() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                               "WaitForCompletionHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::AddCallbackInvokeIfDone(::UnityEngine::AsyncOperation* operation,
                                                                                                             ::System::Action_1<::UnityEngine::AsyncOperation*>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "AddCallbackInvokeIfDone",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::AsyncOperation*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operation, callback);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetLoadInfo(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle handle,
                                                                                                 ::ByRef<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType> loadType,
                                                                                                 ::ByRef<::StringW> path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "GetLoadInfo",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle, loadType, path);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetLoadInfo(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                                 ::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
                                                                                                 ::ByRef<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType> loadType,
                                                                                                 ::ByRef<::StringW> path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "GetLoadInfo",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, location, resourceManager, loadType, path);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::BeginOperation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                               "BeginOperation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::LoadLocalBundle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                               "LoadLocalBundle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::WebRequestQueueOperation* UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::EnqueueWebRequest(::StringW internalId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "EnqueueWebRequest",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::WebRequestQueueOperation*, false>(this, ___internal_method, internalId);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::AddBeginWebRequestHandler(::UnityEngine::ResourceManagement::WebRequestQueueOperation* webRequestQueueOperation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                  "AddBeginWebRequestHandler", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, webRequestQueueOperation);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::BeginWebRequestOperation(::UnityEngine::AsyncOperation* asyncOp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "BeginWebRequestOperation",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncOp);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::Update(float_t unscaledDeltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unscaledDeltaTime);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::LocalRequestOperationCompleted(::UnityEngine::AsyncOperation* op) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "LocalRequestOperationCompleted",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::CompleteBundleLoad(::UnityEngine::AssetBundle* bundle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "CompleteBundleLoad",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AssetBundle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bundle);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::WebRequestOperationCompleted(::UnityEngine::AsyncOperation* op) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "WebRequestOperationCompleted",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::Unload(::ByRef<::UnityEngine::AssetBundleUnloadOperation*> unloadOp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "Unload", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::AssetBundleUnloadOperation*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unloadOp);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::_GetAssetPreloadRequest_b__30_0(::UnityEngine::AsyncOperation* operation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "<GetAssetPreloadRequest>b__30_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operation);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::_AddBeginWebRequestHandler_b__45_0(::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOp) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                  "<AddBeginWebRequestHandler>b__45_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncOp);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource* UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>());
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource"
constexpr UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::operator ::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource"
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::i___UnityEngine__ResourceManagement__ResourceProviders__IAssetBundleResource() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::IUpdateReceiver"
constexpr UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::operator ::UnityEngine::ResourceManagement::IUpdateReceiver*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::IUpdateReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::IUpdateReceiver"
constexpr ::UnityEngine::ResourceManagement::IUpdateReceiver* UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::i___UnityEngine__ResourceManagement__IUpdateReceiver() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::IUpdateReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::AssetBundleResource() {}
