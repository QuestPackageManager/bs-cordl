#pragma once
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
constexpr ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex::__ContentCatalogProvider__DependencyHashIndex(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex::__ContentCatalogProvider__DependencyHashIndex() {}
constexpr ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex
    UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex::Remote{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex
    UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex::Cache{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex
    UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex::Count{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog.add_OnLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::*)(
    ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*)>(&::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::add_OnLoaded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2f5b570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(), "add_OnLoaded",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog.remove_OnLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::*)(
    ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*)>(&::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::remove_OnLoaded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2f5c15c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(), "remove_OnLoaded",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog.get_OpInProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::*)()>(
    &::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::get_OpInProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f5c20c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(),
                                                 "get_OpInProgress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog.get_OpIsSuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::*)()>(
    &::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::get_OpIsSuccess)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2f5c214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(),
                                                 "get_OpIsSuccess", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::*)(::StringW, int32_t)>(
    &::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2f5b448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::*)()>(
    &::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::Finalize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2f5c234;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog.Unload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::*)()>(
    &::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::Unload)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f5c2dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(), "Unload",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog.LoadCatalogFromBundleAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::*)()>(
    &::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::LoadCatalogFromBundleAsync)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x2f5b620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(),
                                                 "LoadCatalogFromBundleAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog.WebRequestOperationCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::*)(::UnityEngine::AsyncOperation*)>(
    &::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::WebRequestOperationCompleted)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x2f5c304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(), "WebRequestOperationCompleted",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog.LoadTextAssetRequestComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::*)(::UnityEngine::AsyncOperation*)>(
    &::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::LoadTextAssetRequestComplete)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2f5c500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(), "LoadTextAssetRequestComplete",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog.WaitForCompletion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::*)()>(
    &::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::WaitForCompletion)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2f5b250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(),
                                                 "WaitForCompletion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog._LoadCatalogFromBundleAsync_b__19_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::*)(
    ::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(&::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::_LoadCatalogFromBundleAsync_b__19_1)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f5c698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(),
                                    "<LoadCatalogFromBundleAsync>b__19_1", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog._LoadCatalogFromBundleAsync_b__19_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::*)(::UnityEngine::AsyncOperation*)>(
    &::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::_LoadCatalogFromBundleAsync_b__19_0)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2f5c730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(), "<LoadCatalogFromBundleAsync>b__19_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_get_m_BundlePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BundlePath;
}
constexpr ::StringW const& GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_get_m_BundlePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BundlePath;
}
constexpr void GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_set_m_BundlePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BundlePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_get_m_OpInProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpInProgress;
}
constexpr bool const& GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_get_m_OpInProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpInProgress;
}
constexpr void GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_set_m_OpInProgress(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OpInProgress = value;
}
constexpr ::UnityEngine::AssetBundleCreateRequest*& GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_get_m_LoadBundleRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadBundleRequest;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundleCreateRequest*> const&
GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_get_m_LoadBundleRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadBundleRequest;
}
constexpr void GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_set_m_LoadBundleRequest(::UnityEngine::AssetBundleCreateRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LoadBundleRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AssetBundle>& GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_get_m_CatalogAssetBundle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CatalogAssetBundle;
}
constexpr ::UnityW<::UnityEngine::AssetBundle> const& GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_get_m_CatalogAssetBundle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CatalogAssetBundle;
}
constexpr void GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_set_m_CatalogAssetBundle(::UnityW<::UnityEngine::AssetBundle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CatalogAssetBundle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AssetBundleRequest*& GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_get_m_LoadTextAssetRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadTextAssetRequest;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundleRequest*> const&
GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_get_m_LoadTextAssetRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadTextAssetRequest;
}
constexpr void GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_set_m_LoadTextAssetRequest(::UnityEngine::AssetBundleRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LoadTextAssetRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*& GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_get_m_CatalogData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CatalogData;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> const&
GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_get_m_CatalogData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CatalogData;
}
constexpr void
GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_set_m_CatalogData(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CatalogData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation*& GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_get_m_WebRequestQueueOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WebRequestQueueOperation;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::WebRequestQueueOperation*> const&
GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_get_m_WebRequestQueueOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WebRequestQueueOperation;
}
constexpr void
GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_set_m_WebRequestQueueOperation(::UnityEngine::ResourceManagement::WebRequestQueueOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_WebRequestQueueOperation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AsyncOperation*& GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_get_m_RequestOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestOperation;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AsyncOperation*> const&
GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_get_m_RequestOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestOperation;
}
constexpr void GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_set_m_RequestOperation(::UnityEngine::AsyncOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RequestOperation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_get_m_WebRequestTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WebRequestTimeout;
}
constexpr int32_t const& GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_get_m_WebRequestTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WebRequestTimeout;
}
constexpr void GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_set_m_WebRequestTimeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WebRequestTimeout = value;
}
constexpr ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*&
GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_get_OnLoaded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnLoaded;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*> const&
GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_get_OnLoaded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnLoaded;
}
constexpr void GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__cordl_internal_set_OnLoaded(
    ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnLoaded)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::add_OnLoaded(::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(), "add_OnLoaded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::remove_OnLoaded(::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(), "remove_OnLoaded",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::get_OpInProgress() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(),
                                               "get_OpInProgress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::get_OpIsSuccess() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(),
                                               "get_OpIsSuccess", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
/// @param webRequestTimeout: int32_t (default: static_cast<int32_t>(0x0))
inline ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog* GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::New_ctor(::StringW bundlePath,
                                                                                                                                                                int32_t webRequestTimeout) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>(bundlePath, webRequestTimeout));
}
/// @param webRequestTimeout: int32_t (default: static_cast<int32_t>(0x0))
inline void GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::_ctor(::StringW bundlePath, int32_t webRequestTimeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bundlePath, webRequestTimeout);
}
inline void GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::Unload() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(), "Unload",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::LoadCatalogFromBundleAsync() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(),
                                               "LoadCatalogFromBundleAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::WebRequestOperationCompleted(::UnityEngine::AsyncOperation* op) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(), "WebRequestOperationCompleted",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op);
}
inline void GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::LoadTextAssetRequestComplete(::UnityEngine::AsyncOperation* op) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(), "LoadTextAssetRequestComplete",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op);
}
inline bool GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::WaitForCompletion() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(),
                                               "WaitForCompletion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::_LoadCatalogFromBundleAsync_b__19_1(::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOp) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(),
                                  "<LoadCatalogFromBundleAsync>b__19_1", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncOp);
}
inline void GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::_LoadCatalogFromBundleAsync_b__19_0(::UnityEngine::AsyncOperation* loadOp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*>::get(), "<LoadCatalogFromBundleAsync>b__19_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loadOp);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog::__ContentCatalogProvider__InternalOp__BundledCatalog() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, bool, bool)>(&::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::Start)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2f5a364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>::get(), "Start",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp.WaitForCompletionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::*)()>(
    &::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::WaitForCompletionCallback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2f5b188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>::get(),
                                    "WaitForCompletionCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::*)()>(
    &::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::Release)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2f5a1f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>::get(),
                                    "Release", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp.CanLoadCatalogFromBundle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::*)(
    ::StringW, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
    &::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::CanLoadCatalogFromBundle)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2f5ac28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>::get(), "CanLoadCatalogFromBundle",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp.LoadCatalog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::*)(::StringW, bool)>(
    &::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::LoadCatalog)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x2f5acec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>::get(), "LoadCatalog",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp.CatalogLoadOpCompleteCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>)>(
    &::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::CatalogLoadOpCompleteCallback)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2f5b8b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>::get(),
                                   "CatalogLoadOpCompleteCallback", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                       ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp.GetTransformedInternalId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::GetTransformedInternalId)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2f5b38c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>::get(), "GetTransformedInternalId",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp.DetermineIdToLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Collections::Generic::IList_1<::System::Object*>*, bool)>(
    &::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::DetermineIdToLoad)> {
  constexpr static std::size_t size = 0x748;
  constexpr static std::size_t addrs = 0x2f5a4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>::get(), "DetermineIdToLoad",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp.OnCatalogLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::*)(
    ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*)>(&::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::OnCatalogLoaded)> {
  constexpr static std::size_t size = 0x7c0;
  constexpr static std::size_t addrs = 0x2f5b994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>::get(), "OnCatalogLoaded",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::*)()>(
    &::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f5a35c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp._LoadCatalog_b__14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::*)(
    ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*)>(&::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::_LoadCatalog_b__14_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f5c154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>::get(), "<LoadCatalog>b__14_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_get_m_LocalDataPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalDataPath;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_get_m_LocalDataPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalDataPath;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_set_m_LocalDataPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LocalDataPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_get_m_RemoteHashValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RemoteHashValue;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_get_m_RemoteHashValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RemoteHashValue;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_set_m_RemoteHashValue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RemoteHashValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_get_m_LocalHashValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalHashValue;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_get_m_LocalHashValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalHashValue;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_set_m_LocalHashValue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LocalHashValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle&
UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_get_m_ProviderInterface() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProviderInterface;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle const&
UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_get_m_ProviderInterface() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProviderInterface;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_set_m_ProviderInterface(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProviderInterface = value;
}
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*&
UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_get_m_ContentCatalogData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentCatalogData;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> const&
UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_get_m_ContentCatalogData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentCatalogData;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_set_m_ContentCatalogData(
    ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ContentCatalogData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>&
UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_get_m_ContentCatalogDataLoadOp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentCatalogDataLoadOp;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> const&
UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_get_m_ContentCatalogDataLoadOp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentCatalogDataLoadOp;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_set_m_ContentCatalogDataLoadOp(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContentCatalogDataLoadOp = value;
}
constexpr ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*&
UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_get_m_BundledCatalog() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BundledCatalog;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*> const&
UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_get_m_BundledCatalog() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BundledCatalog;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_set_m_BundledCatalog(
    ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BundledCatalog)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_get_m_Retried() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Retried;
}
constexpr bool const& UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_get_m_Retried() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Retried;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_set_m_Retried(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Retried = value;
}
constexpr bool& UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_get_m_DisableCatalogUpdateOnStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisableCatalogUpdateOnStart;
}
constexpr bool const& UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_get_m_DisableCatalogUpdateOnStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisableCatalogUpdateOnStart;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_set_m_DisableCatalogUpdateOnStart(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DisableCatalogUpdateOnStart = value;
}
constexpr bool& UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_get_m_IsLocalCatalogInBundle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsLocalCatalogInBundle;
}
constexpr bool const& UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_get_m_IsLocalCatalogInBundle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsLocalCatalogInBundle;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__cordl_internal_set_m_IsLocalCatalogInBundle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsLocalCatalogInBundle = value;
}
inline void UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface,
                                                                                                           bool disableCatalogUpdateOnStart, bool isLocalCatalogInBundle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>::get(), "Start",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, providerInterface, disableCatalogUpdateOnStart, isLocalCatalogInBundle);
}
inline bool UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::WaitForCompletionCallback() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>::get(),
                                  "WaitForCompletionCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::Release() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>::get(), "Release",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool
UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::CanLoadCatalogFromBundle(::StringW idToLoad,
                                                                                                                  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>::get(), "CanLoadCatalogFromBundle",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, idToLoad, location);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::LoadCatalog(::StringW idToLoad, bool loadCatalogFromLocalBundle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>::get(), "LoadCatalog",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idToLoad, loadCatalogFromLocalBundle);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::CatalogLoadOpCompleteCallback(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> op) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>::get(),
                                  "CatalogLoadOpCompleteCallback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op);
}
inline ::StringW
UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::GetTransformedInternalId(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>::get(), "GetTransformedInternalId",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, loc);
}
/// @param disableCatalogUpdateOnStart: bool (default: false)
inline ::StringW
UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::DetermineIdToLoad(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                                           ::System::Collections::Generic::IList_1<::System::Object*>* dependencyObjects,
                                                                                                           bool disableCatalogUpdateOnStart) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>::get(), "DetermineIdToLoad",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, location, dependencyObjects, disableCatalogUpdateOnStart);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::OnCatalogLoaded(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* ccd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>::get(), "OnCatalogLoaded",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ccd);
}
inline ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp* UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>());
}
inline void UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::_LoadCatalog_b__14_0(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* ccd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>::get(), "<LoadCatalog>b__14_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ccd);
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp::__ContentCatalogProvider__InternalOp() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*)>(&::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f5a07c;

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
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2f5a114;

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
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2f5a200;

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
                                                       ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>*&
UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::__cordl_internal_get_m_LocationToCatalogLoadOpMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocationToCatalogLoadOpMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
                                                                                           ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>*> const&
UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::__cordl_internal_get_m_LocationToCatalogLoadOpMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocationToCatalogLoadOpMap;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::__cordl_internal_set_m_LocationToCatalogLoadOpMap(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
                                                 ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LocationToCatalogLoadOpMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::ResourceManager*& UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::__cordl_internal_get_m_RM() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RM;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceManager*> const&
UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::__cordl_internal_get_m_RM() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RM;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::__cordl_internal_set_m_RM(::UnityEngine::ResourceManagement::ResourceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RM)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*
UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::New_ctor(::UnityEngine::ResourceManagement::ResourceManager* resourceManagerInstance) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*>(resourceManagerInstance));
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
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::ContentCatalogProvider() {}
