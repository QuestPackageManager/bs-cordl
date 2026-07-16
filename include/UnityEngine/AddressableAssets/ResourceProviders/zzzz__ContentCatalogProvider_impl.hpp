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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)(
    ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*)>(
    &::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::add_OnLoaded)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6461de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(),
                                                { "add_OnLoaded", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog.remove_OnLoaded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)(
    ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*)>(
    &::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::remove_OnLoaded)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6462a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(),
                                                { "remove_OnLoaded", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog.get_OpInProgress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)()>(
    &::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::get_OpInProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6462b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(), { "get_OpInProgress", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog.get_OpIsSuccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)()>(
    &::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::get_OpIsSuccess)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6462b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(), { "get_OpIsSuccess", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)(::StringW, int32_t)>(
    &::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6461cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)()>(
    &::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::Finalize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6462b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(),
                                                            { ::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog.Unload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)()>(
    &::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::Unload)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6462bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(), { "Unload", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog.LoadCatalogFromBundleAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)()>(
    &::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::LoadCatalogFromBundleAsync)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x6461ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(), { "LoadCatalogFromBundleAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog.WebRequestOperationCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)(::UnityEngine::AsyncOperation*)>(
    &::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::WebRequestOperationCompleted)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6462bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(),
                                                             { "WebRequestOperationCompleted", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog.LoadTextAssetRequestComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)(::UnityEngine::AsyncOperation*)>(
    &::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::LoadTextAssetRequestComplete)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6462e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(),
                                                             { "LoadTextAssetRequestComplete", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog.WaitForCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)()>(
    &::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::WaitForCompletion)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6461abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(), { "WaitForCompletion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog._LoadCatalogFromBundleAsync_b__19_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(
        &::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::_LoadCatalogFromBundleAsync_b__19_1)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6462fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(),
                                                             { "<LoadCatalogFromBundleAsync>b__19_1", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog._LoadCatalogFromBundleAsync_b__19_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::*)(::UnityEngine::AsyncOperation*)>(
    &::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::_LoadCatalogFromBundleAsync_b__19_0)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6463058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(),
                                                             { "<LoadCatalogFromBundleAsync>b__19_0", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
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
  this->___m_BundlePath = value;
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
  this->___m_LoadBundleRequest = value;
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
  this->___m_CatalogAssetBundle = value;
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
  this->___m_LoadTextAssetRequest = value;
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
  this->___m_CatalogData = value;
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
  this->___m_WebRequestQueueOperation = value;
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
  this->___m_RequestOperation = value;
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
  this->___OnLoaded = value;
}
inline void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::add_OnLoaded(
    ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(),
                                              { "add_OnLoaded", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::remove_OnLoaded(
    ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(),
                                              { "remove_OnLoaded", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::get_OpInProgress() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(), { "get_OpInProgress", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::get_OpIsSuccess() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(), { "get_OpIsSuccess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::_ctor(::StringW bundlePath, int32_t webRequestTimeout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bundlePath, webRequestTimeout);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::Unload() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(), { "Unload", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::LoadCatalogFromBundleAsync() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(), { "LoadCatalogFromBundleAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::WebRequestOperationCompleted(::UnityEngine::AsyncOperation* op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(),
                                                           { "WebRequestOperationCompleted", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::LoadTextAssetRequestComplete(::UnityEngine::AsyncOperation* op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(),
                                                           { "LoadTextAssetRequestComplete", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline bool UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::WaitForCompletion() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(), { "WaitForCompletion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::_LoadCatalogFromBundleAsync_b__19_1(
    ::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(),
                                                           { "<LoadCatalogFromBundleAsync>b__19_1", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncOp);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::_LoadCatalogFromBundleAsync_b__19_0(::UnityEngine::AsyncOperation* loadOp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(),
                                                           { "<LoadCatalogFromBundleAsync>b__19_0", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loadOp);
}
inline ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*
UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::New_ctor(::StringW bundlePath, int32_t webRequestTimeout) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*>(bundlePath, webRequestTimeout));
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog::InternalOp_ContentCatalogProvider_BundledCatalog() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, bool, bool)>(&::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::Start)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6460ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>(),
                                         { "Start", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp.WaitForCompletionCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::*)()>(
    &::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::WaitForCompletionCallback)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x64619d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>(), { "WaitForCompletionCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::*)()>(
    &::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::Release)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6460968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>(), { "Release", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp.CanLoadCatalogFromBundle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::*)(::StringW, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
        &::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::CanLoadCatalogFromBundle)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x646131c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>(),
                            { "CanLoadCatalogFromBundle", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp.LoadCatalog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::*)(::StringW, bool)>(
    &::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::LoadCatalog)> {
  constexpr static std::size_t size = 0x5f4;
  constexpr static std::size_t addrs = 0x64613e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>(),
                                                                                           { "LoadCatalog", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp.CatalogLoadOpCompleteCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>)>(
    &::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::CatalogLoadOpCompleteCallback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6462158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>(),
            { "CatalogLoadOpCompleteCallback",
              {},
              { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp.GetTransformedInternalId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::GetTransformedInternalId)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6461c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>(),
                                                             { "GetTransformedInternalId", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp.DetermineIdToLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Collections::Generic::IList_1<::System::Object*>*, bool)>(
    &::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::DetermineIdToLoad)> {
  constexpr static std::size_t size = 0x6c8;
  constexpr static std::size_t addrs = 0x6460c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>(),
                                                             { "DetermineIdToLoad",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp.OnCatalogLoaded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::*)(
    ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*)>(&::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::OnCatalogLoaded)> {
  constexpr static std::size_t size = 0x894;
  constexpr static std::size_t addrs = 0x64621e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>(),
                                                             { "OnCatalogLoaded", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::*)()>(
    &::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6460ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp._LoadCatalog_b__14_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::*)(
    ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*)>(&::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::_LoadCatalog_b__14_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6462a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>(),
                                                             { "<LoadCatalog>b__14_0", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>() } })));
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
  this->___m_LocalDataPath = value;
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
  this->___m_RemoteHashValue = value;
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
  this->___m_LocalHashValue = value;
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
  this->___m_ContentCatalogData = value;
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
  this->___m_BundledCatalog = value;
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
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>(),
                                       { "Start", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, providerInterface, disableCatalogUpdateOnStart, isLocalCatalogInBundle);
}
inline bool UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::WaitForCompletionCallback() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>(), { "WaitForCompletionCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::Release() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool
UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::CanLoadCatalogFromBundle(::StringW idToLoad,
                                                                                                               ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>(),
                          { "CanLoadCatalogFromBundle", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, idToLoad, location);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::LoadCatalog(::StringW idToLoad, bool loadCatalogFromLocalBundle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>(),
                                                                                         { "LoadCatalog", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idToLoad, loadCatalogFromLocalBundle);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::CatalogLoadOpCompleteCallback(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>(),
                       { "CatalogLoadOpCompleteCallback",
                         {},
                         { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline ::StringW
UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::GetTransformedInternalId(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>(),
                                                           { "GetTransformedInternalId", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, loc);
}
inline ::StringW
UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::DetermineIdToLoad(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                                        ::System::Collections::Generic::IList_1<::System::Object*>* dependencyObjects,
                                                                                                        bool disableCatalogUpdateOnStart) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>(),
                                                           { "DetermineIdToLoad",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, location, dependencyObjects, disableCatalogUpdateOnStart);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::OnCatalogLoaded(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* ccd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>(),
                                                           { "OnCatalogLoaded", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ccd);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::_LoadCatalog_b__14_0(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* ccd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>(),
                                                           { "<LoadCatalog>b__14_0", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ccd);
}
inline ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp* UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp::ContentCatalogProvider_InternalOp() {}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::*)(::UnityEngine::ResourceManagement::ResourceManager*)>(
    &::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x64607dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Object*)>(&::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::Release)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x646087c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider.Provide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::Provide)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6460978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*>(), 17 }));
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
  this->___m_LocationToCatalogLoadOpMap = value;
}
inline void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::_ctor(::UnityEngine::ResourceManagement::ResourceManager* resourceManagerInstance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resourceManagerInstance);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                               ::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, location, obj);
}
inline void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, providerInterface);
}
inline ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*
UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::New_ctor(::UnityEngine::ResourceManagement::ResourceManager* resourceManagerInstance) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*>(resourceManagerInstance));
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::ContentCatalogProvider() {}
