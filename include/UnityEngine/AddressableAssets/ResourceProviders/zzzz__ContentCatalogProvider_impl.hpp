#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/ResourceProviders/ContentCatalogProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_impl.hpp"
#include "UnityEngine/AddressableAssets/ResourceProviders/zzzz__ContentCatalogProvider_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__ContentCatalogData_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceProviders/zzzz__ContentCatalogProvider_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__WebRequestQueueOperation_def.hpp"
#include "UnityEngine/zzzz__AssetBundleCreateRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundleRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_DependencyHashIndex::ContentCatalogProvider_DependencyHashIndex(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_DependencyHashIndex::ContentCatalogProvider_DependencyHashIndex() {}
constexpr ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_DependencyHashIndex
    UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_DependencyHashIndex::Remote{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_DependencyHashIndex
    UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_DependencyHashIndex::Cache{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_DependencyHashIndex
    UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_DependencyHashIndex::Local{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_DependencyHashIndex
    UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_DependencyHashIndex::Count{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog.add_OnLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)(
    ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*)>(
    &::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::add_OnLoaded)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x62493f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(), "add_OnLoaded",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog.remove_OnLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)(
    ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*)>(
    &::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::remove_OnLoaded)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x624a090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(), "remove_OnLoaded",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog.get_OpInProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)()>(
    &::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::get_OpInProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x624a150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(), "get_OpInProgress",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog.get_OpIsSuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)()>(
    &::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::get_OpIsSuccess)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x624a158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(), "get_OpIsSuccess",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)(
    ::StringW, int32_t)>(&::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x62492e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)()>(
    &::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::Finalize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x624a178;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog.Unload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)()>(
    &::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::Unload)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x624a1d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(), "Unload",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog.LoadCatalogFromBundleAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)()>(
    &::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::LoadCatalogFromBundleAsync)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x62494b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(),
        "LoadCatalogFromBundleAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog.WebRequestOperationCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)(
    ::UnityEngine::AsyncOperation*)>(&::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::WebRequestOperationCompleted)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x624a1fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(),
        "WebRequestOperationCompleted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog.LoadTextAssetRequestComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)(
    ::UnityEngine::AsyncOperation*)>(&::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::LoadTextAssetRequestComplete)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x624a418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(),
        "LoadTextAssetRequestComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog.WaitForCompletion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)()>(
    &::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::WaitForCompletion)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x62490cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(), "WaitForCompletion",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog._LoadCatalogFromBundleAsync_b__19_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(
        &::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::_LoadCatalogFromBundleAsync_b__19_1)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x624a5cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(),
        "<LoadCatalogFromBundleAsync>b__19_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog._LoadCatalogFromBundleAsync_b__19_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)(
    ::UnityEngine::AsyncOperation*)>(&::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::_LoadCatalogFromBundleAsync_b__19_0)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x624a668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(),
        "<LoadCatalogFromBundleAsync>b__19_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_get_m_BundlePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BundlePath;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_get_m_BundlePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BundlePath;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_set_m_BundlePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BundlePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_get_m_OpInProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpInProgress;
}
constexpr bool const& UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_get_m_OpInProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpInProgress;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_set_m_OpInProgress(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OpInProgress = value;
}
constexpr ::UnityEngine::AssetBundleCreateRequest*& UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_get_m_LoadBundleRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadBundleRequest;
}
constexpr ::UnityEngine::AssetBundleCreateRequest* const&
UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_get_m_LoadBundleRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadBundleRequest;
}
constexpr void
UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_set_m_LoadBundleRequest(::UnityEngine::AssetBundleCreateRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LoadBundleRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AssetBundle>& UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_get_m_CatalogAssetBundle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CatalogAssetBundle;
}
constexpr ::UnityW<::UnityEngine::AssetBundle> const&
UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_get_m_CatalogAssetBundle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CatalogAssetBundle;
}
constexpr void
UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_set_m_CatalogAssetBundle(::UnityW<::UnityEngine::AssetBundle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CatalogAssetBundle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AssetBundleRequest*& UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_get_m_LoadTextAssetRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadTextAssetRequest;
}
constexpr ::UnityEngine::AssetBundleRequest* const&
UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_get_m_LoadTextAssetRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadTextAssetRequest;
}
constexpr void
UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_set_m_LoadTextAssetRequest(::UnityEngine::AssetBundleRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LoadTextAssetRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*&
UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_get_m_CatalogData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CatalogData;
}
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* const&
UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_get_m_CatalogData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CatalogData;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_set_m_CatalogData(
    ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CatalogData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation*&
UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_get_m_WebRequestQueueOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WebRequestQueueOperation;
}
constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation* const&
UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_get_m_WebRequestQueueOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WebRequestQueueOperation;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_set_m_WebRequestQueueOperation(
    ::UnityEngine::ResourceManagement::WebRequestQueueOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_WebRequestQueueOperation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AsyncOperation*& UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_get_m_RequestOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestOperation;
}
constexpr ::UnityEngine::AsyncOperation* const& UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_get_m_RequestOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestOperation;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_set_m_RequestOperation(::UnityEngine::AsyncOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RequestOperation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_get_m_WebRequestTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WebRequestTimeout;
}
constexpr int32_t const& UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_get_m_WebRequestTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WebRequestTimeout;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_set_m_WebRequestTimeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WebRequestTimeout = value;
}
constexpr ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*&
UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_get_OnLoaded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnLoaded;
}
constexpr ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* const&
UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_get_OnLoaded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnLoaded;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::__cordl_internal_set_OnLoaded(
    ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnLoaded)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::add_OnLoaded(
    ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(),
                                  "add_OnLoaded", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::remove_OnLoaded(
    ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(),
                                  "remove_OnLoaded", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::get_OpInProgress() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(),
                                  "get_OpInProgress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::get_OpIsSuccess() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(),
                                  "get_OpIsSuccess", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::_ctor(::StringW bundlePath, int32_t webRequestTimeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bundlePath, webRequestTimeout);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::Unload() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(),
                                  "Unload", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::LoadCatalogFromBundleAsync() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(),
                                  "LoadCatalogFromBundleAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::WebRequestOperationCompleted(::UnityEngine::AsyncOperation* op) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(),
                                  "WebRequestOperationCompleted", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::LoadTextAssetRequestComplete(::UnityEngine::AsyncOperation* op) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(),
                                  "LoadTextAssetRequestComplete", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op);
}
inline bool UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::WaitForCompletion() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(),
                                  "WaitForCompletion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::_LoadCatalogFromBundleAsync_b__19_1(
    ::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOp) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(),
                                  "<LoadCatalogFromBundleAsync>b__19_1", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncOp);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::_LoadCatalogFromBundleAsync_b__19_0(::UnityEngine::AsyncOperation* loadOp) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>::get(),
                                  "<LoadCatalogFromBundleAsync>b__19_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loadOp);
}
inline ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*
UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::New_ctor(::StringW bundlePath, int32_t webRequestTimeout) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(bundlePath, webRequestTimeout));
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::InternalOp_ContentCatalogProvider_BundledCatalog() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, bool, bool)>(&::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::Start)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x62480f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>::get(), "Start",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp.WaitForCompletionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::*)()>(
    &::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::WaitForCompletionCallback)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6248fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>::get(),
                                                 "WaitForCompletionCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::*)()>(
    &::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::Release)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6247f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>::get(),
                                                 "Release", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp.CanLoadCatalogFromBundle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::*)(::StringW, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
        &::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::CanLoadCatalogFromBundle)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x624892c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>::get(), "CanLoadCatalogFromBundle",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp.LoadCatalog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::*)(::StringW, bool)>(
    &::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::LoadCatalog)> {
  constexpr static std::size_t size = 0x5f4;
  constexpr static std::size_t addrs = 0x62489f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>::get(), "LoadCatalog",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp.CatalogLoadOpCompleteCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>)>(
    &::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::CatalogLoadOpCompleteCallback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6249768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>::get(),
                                   "CatalogLoadOpCompleteCallback", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                       ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp.GetTransformedInternalId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::GetTransformedInternalId)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6249218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>::get(), "GetTransformedInternalId",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp.DetermineIdToLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Collections::Generic::IList_1<::System::Object*>*, bool)>(
    &::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::DetermineIdToLoad)> {
  constexpr static std::size_t size = 0x6c8;
  constexpr static std::size_t addrs = 0x6248264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>::get(), "DetermineIdToLoad",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp.OnCatalogLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::*)(
    ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*)>(&::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::OnCatalogLoaded)> {
  constexpr static std::size_t size = 0x894;
  constexpr static std::size_t addrs = 0x62497f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>::get(), "OnCatalogLoaded",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::*)()>(
    &::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62480f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp._LoadCatalog_b__14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::*)(
    ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*)>(&::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::_LoadCatalog_b__14_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x624a088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>::get(), "<LoadCatalog>b__14_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_get_m_LocalDataPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalDataPath;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_get_m_LocalDataPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalDataPath;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_set_m_LocalDataPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LocalDataPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_get_m_RemoteHashValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RemoteHashValue;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_get_m_RemoteHashValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RemoteHashValue;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_set_m_RemoteHashValue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RemoteHashValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_get_m_LocalHashValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalHashValue;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_get_m_LocalHashValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalHashValue;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_set_m_LocalHashValue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LocalHashValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle&
UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_get_m_ProviderInterface() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProviderInterface;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle const&
UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_get_m_ProviderInterface() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProviderInterface;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_set_m_ProviderInterface(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProviderInterface = value;
}
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*&
UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_get_m_ContentCatalogData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentCatalogData;
}
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* const&
UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_get_m_ContentCatalogData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentCatalogData;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_set_m_ContentCatalogData(
    ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ContentCatalogData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>&
UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_get_m_ContentCatalogDataLoadOp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentCatalogDataLoadOp;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> const&
UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_get_m_ContentCatalogDataLoadOp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentCatalogDataLoadOp;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_set_m_ContentCatalogDataLoadOp(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContentCatalogDataLoadOp = value;
}
constexpr ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*&
UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_get_m_BundledCatalog() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BundledCatalog;
}
constexpr ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog* const&
UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_get_m_BundledCatalog() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BundledCatalog;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_set_m_BundledCatalog(
    ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BundledCatalog)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_get_m_Retried() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Retried;
}
constexpr bool const& UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_get_m_Retried() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Retried;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_set_m_Retried(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Retried = value;
}
constexpr bool& UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_get_m_DisableCatalogUpdateOnStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisableCatalogUpdateOnStart;
}
constexpr bool const& UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_get_m_DisableCatalogUpdateOnStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisableCatalogUpdateOnStart;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_set_m_DisableCatalogUpdateOnStart(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DisableCatalogUpdateOnStart = value;
}
constexpr bool& UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_get_m_IsLocalCatalogInBundle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsLocalCatalogInBundle;
}
constexpr bool const& UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_get_m_IsLocalCatalogInBundle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsLocalCatalogInBundle;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::__cordl_internal_set_m_IsLocalCatalogInBundle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsLocalCatalogInBundle = value;
}
inline void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface,
                                                                                                        bool disableCatalogUpdateOnStart, bool isLocalCatalogInBundle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>::get(), "Start",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, providerInterface, disableCatalogUpdateOnStart, isLocalCatalogInBundle);
}
inline bool UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::WaitForCompletionCallback() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>::get(),
                                               "WaitForCompletionCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::Release() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>::get(),
                                               "Release", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool
UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::CanLoadCatalogFromBundle(::StringW idToLoad,
                                                                                                               ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>::get(), "CanLoadCatalogFromBundle",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, idToLoad, location);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::LoadCatalog(::StringW idToLoad, bool loadCatalogFromLocalBundle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>::get(), "LoadCatalog",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idToLoad, loadCatalogFromLocalBundle);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::CatalogLoadOpCompleteCallback(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> op) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>::get(),
                                  "CatalogLoadOpCompleteCallback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op);
}
inline ::StringW
UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::GetTransformedInternalId(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>::get(), "GetTransformedInternalId",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, loc);
}
inline ::StringW
UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::DetermineIdToLoad(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                                        ::System::Collections::Generic::IList_1<::System::Object*>* dependencyObjects,
                                                                                                        bool disableCatalogUpdateOnStart) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>::get(), "DetermineIdToLoad",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, location, dependencyObjects, disableCatalogUpdateOnStart);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::OnCatalogLoaded(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* ccd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>::get(), "OnCatalogLoaded",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ccd);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::_LoadCatalog_b__14_0(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* ccd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>::get(), "<LoadCatalog>b__14_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ccd);
}
inline ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp* UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::ContentCatalogProvider_InternalOp() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*)>(&::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6247dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Object*)>(&::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::Release)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6247e8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider.Provide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::Provide)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6247f88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*>::get(), 17));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::__cordl_internal_get_DisableCatalogUpdateOnStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisableCatalogUpdateOnStart;
}
constexpr bool const& UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::__cordl_internal_get_DisableCatalogUpdateOnStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisableCatalogUpdateOnStart;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::__cordl_internal_set_DisableCatalogUpdateOnStart(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DisableCatalogUpdateOnStart = value;
}
constexpr bool& UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::__cordl_internal_get_IsLocalCatalogInBundle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsLocalCatalogInBundle;
}
constexpr bool const& UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::__cordl_internal_get_IsLocalCatalogInBundle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsLocalCatalogInBundle;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::__cordl_internal_set_IsLocalCatalogInBundle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsLocalCatalogInBundle = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
                                                       ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>*&
UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::__cordl_internal_get_m_LocationToCatalogLoadOpMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocationToCatalogLoadOpMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
                                                       ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>* const&
UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::__cordl_internal_get_m_LocationToCatalogLoadOpMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocationToCatalogLoadOpMap;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::__cordl_internal_set_m_LocationToCatalogLoadOpMap(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
                                                 ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LocationToCatalogLoadOpMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::_ctor(::UnityEngine::ResourceManagement::ResourceManager* resourceManagerInstance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resourceManagerInstance);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                               ::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, location, obj);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, providerInterface);
}
inline ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*
UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::New_ctor(::UnityEngine::ResourceManagement::ResourceManager* resourceManagerInstance) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*>(resourceManagerInstance));
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::ContentCatalogProvider() {}
