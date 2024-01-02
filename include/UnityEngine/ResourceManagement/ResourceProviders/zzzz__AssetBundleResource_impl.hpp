#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__AssetBundleResource_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IAssetBundleResource_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandlerAssetBundle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__IUpdateReceiver_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__AssetBundleResource_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__WebRequestQueueOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__AssetBundleRequestOptions_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/zzzz__AssetBundleRequest_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType::__AssetBundleResource__LoadType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType::__AssetBundleResource__LoadType() {}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType::None{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType::Local{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType::Web{
  static_cast<int32_t>(0x2)
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.get_HasTimedOut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::get_HasTimedOut)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2bd3af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                                 "get_HasTimedOut", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.get_BytesToDownload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::get_BytesToDownload)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2bd3b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                                 "get_BytesToDownload", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.CreateWebRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest* (
    ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::CreateWebRequest)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bd3c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "CreateWebRequest", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.CreateWebRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest* (
    ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::StringW)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::CreateWebRequest)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2bd3c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "CreateWebRequest",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.GetAssetPreloadRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AssetBundleRequest* (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetAssetPreloadRequest)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2bd3e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                                 "GetAssetPreloadRequest", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.PercentComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::PercentComplete)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2bd403c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                                 "PercentComplete", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.GetDownloadStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (
    ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetDownloadStatus)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2bd4054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                                 "GetDownloadStatus", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.GetAssetBundle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AssetBundle* (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetAssetBundle)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2bd3f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                                 "GetAssetBundle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::Start)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x2bd41a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "Start", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.WaitForCompletionHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::WaitForCompletionHandler)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x2bd4970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                                 "WaitForCompletionHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.AddCallbackInvokeIfDone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(
    ::UnityEngine::AsyncOperation*, ::System::Action_1<::UnityEngine::AsyncOperation*>*)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::AddCallbackInvokeIfDone)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2bd51a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                    "AddCallbackInvokeIfDone", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::AsyncOperation*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.GetLoadInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, ByRef<::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType>, ByRef<::StringW>)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetLoadInfo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2bd5200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "GetLoadInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.GetLoadInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::ResourceManager*,
                         ByRef<::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType>, ByRef<::StringW>)>(
        &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetLoadInfo)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2bd5230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "GetLoadInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.BeginOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::BeginOperation)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x2bd45f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                                 "BeginOperation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.BeginWebRequestOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::AsyncOperation*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::BeginWebRequestOperation)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2bd5424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "BeginWebRequestOperation",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(float_t)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::Update)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2bd5510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "Update",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.LocalRequestOperationCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::AsyncOperation*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::LocalRequestOperationCompleted)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2bd5630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "LocalRequestOperationCompleted",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.CompleteBundleLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::AssetBundle*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::CompleteBundleLoad)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2bd56bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "CompleteBundleLoad",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AssetBundle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.WebRequestOperationCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::AsyncOperation*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::WebRequestOperationCompleted)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x2bd4bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "WebRequestOperationCompleted",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.Unload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::Unload)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2bd57f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "Unload",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bd5898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource._GetAssetPreloadRequest_b__25_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::AsyncOperation*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::_GetAssetPreloadRequest_b__25_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2bd58a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "<GetAssetPreloadRequest>b__25_0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource._BeginOperation_b__34_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(
    ::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::_BeginOperation_b__34_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2bd58ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "<BeginOperation>b__34_0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource"
constexpr UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::operator ::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::IUpdateReceiver"
constexpr UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::operator ::UnityEngine::ResourceManagement::IUpdateReceiver*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::IUpdateReceiver*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::AssetBundle*& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_AssetBundle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetBundle;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundle*> const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_AssetBundle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetBundle;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_AssetBundle(::UnityEngine::AssetBundle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AssetBundle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Networking::DownloadHandlerAssetBundle*& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_downloadHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_downloadHandler;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::DownloadHandlerAssetBundle*> const&
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_downloadHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_downloadHandler;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_downloadHandler(::UnityEngine::Networking::DownloadHandlerAssetBundle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_downloadHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AsyncOperation*& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_RequestOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestOperation;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AsyncOperation*> const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_RequestOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestOperation;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_RequestOperation(::UnityEngine::AsyncOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RequestOperation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation*& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_WebRequestQueueOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WebRequestQueueOperation;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::WebRequestQueueOperation*> const&
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_WebRequestQueueOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WebRequestQueueOperation;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_WebRequestQueueOperation(::UnityEngine::ResourceManagement::WebRequestQueueOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_WebRequestQueueOperation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_ProvideHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProvideHandle;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_ProvideHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProvideHandle;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_ProvideHandle(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProvideHandle = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_Options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Options;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*> const&
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_Options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Options;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_Options(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Options)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_WebRequestCompletedCallbackCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WebRequestCompletedCallbackCalled;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_WebRequestCompletedCallbackCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WebRequestCompletedCallbackCalled;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_WebRequestCompletedCallbackCalled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WebRequestCompletedCallbackCalled = value;
}
constexpr int32_t& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_Retries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Retries;
}
constexpr int32_t const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_Retries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Retries;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_Retries(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Retries = value;
}
constexpr int64_t& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_BytesToDownload() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BytesToDownload;
}
constexpr int64_t const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_BytesToDownload() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BytesToDownload;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_BytesToDownload(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BytesToDownload = value;
}
constexpr int64_t& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_DownloadedBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DownloadedBytes;
}
constexpr int64_t const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_DownloadedBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DownloadedBytes;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_DownloadedBytes(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DownloadedBytes = value;
}
constexpr bool& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_Completed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Completed;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_Completed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Completed;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_Completed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Completed = value;
}
constexpr ::StringW& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_TransformedInternalId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformedInternalId;
}
constexpr ::StringW const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_TransformedInternalId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformedInternalId;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_TransformedInternalId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TransformedInternalId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AssetBundleRequest*& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_PreloadRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreloadRequest;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundleRequest*> const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_PreloadRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreloadRequest;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_PreloadRequest(::UnityEngine::AssetBundleRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PreloadRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_PreloadCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreloadCompleted;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_PreloadCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreloadCompleted;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_PreloadCompleted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreloadCompleted = value;
}
constexpr uint64_t& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_LastDownloadedByteCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastDownloadedByteCount;
}
constexpr uint64_t const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_LastDownloadedByteCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastDownloadedByteCount;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_LastDownloadedByteCount(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastDownloadedByteCount = value;
}
constexpr float_t& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_TimeoutTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeoutTimer;
}
constexpr float_t const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_TimeoutTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeoutTimer;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_TimeoutTimer(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TimeoutTimer = value;
}
constexpr int32_t& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_TimeoutOverFrames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeoutOverFrames;
}
constexpr int32_t const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_TimeoutOverFrames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeoutOverFrames;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_TimeoutOverFrames(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TimeoutOverFrames = value;
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::get_HasTimedOut() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                               "get_HasTimedOut", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::get_BytesToDownload() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                               "get_BytesToDownload", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Networking::UnityWebRequest*
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::CreateWebRequest(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "CreateWebRequest", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*, false>(this, ___internal_method, loc);
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::CreateWebRequest(::StringW url) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "CreateWebRequest",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*, false>(this, ___internal_method, url);
}
inline ::UnityEngine::AssetBundleRequest* UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetAssetPreloadRequest() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                               "GetAssetPreloadRequest", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AssetBundleRequest*, false>(this, ___internal_method);
}
inline float_t UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::PercentComplete() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                               "PercentComplete", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetDownloadStatus() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                               "GetDownloadStatus", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(this, ___internal_method);
}
inline ::UnityEngine::AssetBundle* UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetAssetBundle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                               "GetAssetBundle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AssetBundle*, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "Start", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provideHandle);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::WaitForCompletionHandler() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                               "WaitForCompletionHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::AddCallbackInvokeIfDone(::UnityEngine::AsyncOperation* operation,
                                                                                                             ::System::Action_1<::UnityEngine::AsyncOperation*>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "AddCallbackInvokeIfDone", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::AsyncOperation*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operation, callback);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetLoadInfo(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle handle,
                                                                                                 ByRef<::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType> loadType,
                                                                                                 ByRef<::StringW> path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "GetLoadInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle, loadType, path);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetLoadInfo(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                                 ::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
                                                                                                 ByRef<::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType> loadType,
                                                                                                 ByRef<::StringW> path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "GetLoadInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, location, resourceManager, loadType, path);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::BeginOperation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(),
                                               "BeginOperation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::BeginWebRequestOperation(::UnityEngine::AsyncOperation* asyncOp) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "BeginWebRequestOperation",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncOp);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::Update(float_t unscaledDeltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "Update",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unscaledDeltaTime);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::LocalRequestOperationCompleted(::UnityEngine::AsyncOperation* op) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "LocalRequestOperationCompleted",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::CompleteBundleLoad(::UnityEngine::AssetBundle* bundle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "CompleteBundleLoad",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AssetBundle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bundle);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::WebRequestOperationCompleted(::UnityEngine::AsyncOperation* op) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "WebRequestOperationCompleted",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::Unload() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "Unload",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource* UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>());
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::_GetAssetPreloadRequest_b__25_0(::UnityEngine::AsyncOperation* operation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "<GetAssetPreloadRequest>b__25_0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operation);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::_BeginOperation_b__34_0(::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*>::get(), "<BeginOperation>b__34_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncOp);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::AssetBundleResource() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
