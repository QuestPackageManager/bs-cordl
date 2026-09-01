#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\Profiling\ProfilerRuntime.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerCounterValue_1_impl.hpp"
#include "UnityEngine/ResourceManagement/Profiling/zzzz__ProfilerRuntime_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__IAsyncOperation_def.hpp"
#include "UnityEngine/ResourceManagement/Profiling/zzzz__AssetFrameData_def.hpp"
#include "UnityEngine/ResourceManagement/Profiling/zzzz__BundleFrameData_def.hpp"
#include "UnityEngine/ResourceManagement/Profiling/zzzz__CatalogFrameData_def.hpp"
#include "UnityEngine/ResourceManagement/Profiling/zzzz__ContentStatus_def.hpp"
#include "UnityEngine/ResourceManagement/Profiling/zzzz__IProfilerEmitter_def.hpp"
#include "UnityEngine/ResourceManagement/Profiling/zzzz__ProfilerFrameData_2_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__AssetBundleRequestOptions_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__BundleSource_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime.Initialise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::Initialise)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x690bf10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(), { "Initialise", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime.InstanceOnOnLateUpdateDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::InstanceOnOnLateUpdateDelegate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x69246ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(), { "InstanceOnOnLateUpdateDelegate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime.AddCatalog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Hash128)>(&::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::AddCatalog)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6924b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(), { "AddCatalog", {}, { ::i2c::type_of<::UnityEngine::Hash128>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime.AddBundleOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*,
                         ::UnityEngine::ResourceManagement::Profiling::ContentStatus, ::UnityEngine::ResourceManagement::Util::BundleSource)>(
        &::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::AddBundleOperation)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x6919e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(),
                                                                                           { "AddBundleOperation",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(),
                                                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(),
                                                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::Profiling::ContentStatus>(),
                                                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::Util::BundleSource>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime.BundleReleased
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::BundleReleased)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x6919bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(), { "BundleReleased", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime.AddAssetOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, ::UnityEngine::ResourceManagement::Profiling::ContentStatus)>(
    &::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::AddAssetOperation)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x691ed38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(),
                                                                                           { "AddAssetOperation",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(),
                                                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::Profiling::ContentStatus>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime.GetContainingBundleNameForLocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
    &::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::GetContainingBundleNameForLocation)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x6924c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(),
                                                { "GetContainingBundleNameForLocation", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime.AddSceneOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>,
                         ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::Profiling::ContentStatus)>(
        &::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::AddSceneOperation)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x6921e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(),
            { "AddSceneOperation",
              {},
              { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(),
                ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::Profiling::ContentStatus>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime.SceneReleased
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(
        &::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::SceneReleased)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x69228ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(),
                         { "SceneReleased",
                           {},
                           { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime.GetSceneLoadCounterValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::GetSceneLoadCounterValue)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6924f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(), { "GetSceneLoadCounterValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime.PushToProfilerStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::PushToProfilerStream)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x692473c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(), { "PushToProfilerStream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime.RefreshChangedReferenceCounts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::RefreshChangedReferenceCounts)> {
  constexpr static std::size_t size = 0xa48;
  constexpr static std::size_t addrs = 0x6924ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(), { "RefreshChangedReferenceCounts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime.ShouldUpdateFrameDataWithOperationData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, int32_t, float_t, ::by_ref<::System::ValueTuple_2<int32_t, float_t>>)>(
        &::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::ShouldUpdateFrameDataWithOperationData)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x6925a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(),
                                                             { "ShouldUpdateFrameDataWithOperationData",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::System::ValueTuple_2<int32_t, float_t>>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::setStaticF_m_profilerEmitter(::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter*, "m_profilerEmitter", ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(
      std::forward<::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter*>(value));
}
inline ::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter* UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::getStaticF_m_profilerEmitter() {
  return ::cordl_internals::getStaticField<::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter*, "m_profilerEmitter", ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>();
}
inline void UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::setStaticF_kResourceManagerProfilerGuid(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "kResourceManagerProfilerGuid", ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::getStaticF_kResourceManagerProfilerGuid() {
  return ::cordl_internals::getStaticField<::System::Guid, "kResourceManagerProfilerGuid", ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>();
}
inline void UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::setStaticF_CatalogLoadCounter(::Unity::Profiling::ProfilerCounterValue_1<int32_t> value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerCounterValue_1<int32_t>, "CatalogLoadCounter", ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(
      std::forward<::Unity::Profiling::ProfilerCounterValue_1<int32_t>>(value));
}
inline ::Unity::Profiling::ProfilerCounterValue_1<int32_t> UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::getStaticF_CatalogLoadCounter() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerCounterValue_1<int32_t>, "CatalogLoadCounter", ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>();
}
inline void UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::setStaticF_AssetBundleLoadCounter(::Unity::Profiling::ProfilerCounterValue_1<int32_t> value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerCounterValue_1<int32_t>, "AssetBundleLoadCounter", ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(
      std::forward<::Unity::Profiling::ProfilerCounterValue_1<int32_t>>(value));
}
inline ::Unity::Profiling::ProfilerCounterValue_1<int32_t> UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::getStaticF_AssetBundleLoadCounter() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerCounterValue_1<int32_t>, "AssetBundleLoadCounter", ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>();
}
inline void UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::setStaticF_AssetLoadCounter(::Unity::Profiling::ProfilerCounterValue_1<int32_t> value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerCounterValue_1<int32_t>, "AssetLoadCounter", ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(
      std::forward<::Unity::Profiling::ProfilerCounterValue_1<int32_t>>(value));
}
inline ::Unity::Profiling::ProfilerCounterValue_1<int32_t> UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::getStaticF_AssetLoadCounter() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerCounterValue_1<int32_t>, "AssetLoadCounter", ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>();
}
inline void UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::setStaticF_SceneLoadCounter(::Unity::Profiling::ProfilerCounterValue_1<int32_t> value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerCounterValue_1<int32_t>, "SceneLoadCounter", ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(
      std::forward<::Unity::Profiling::ProfilerCounterValue_1<int32_t>>(value));
}
inline ::Unity::Profiling::ProfilerCounterValue_1<int32_t> UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::getStaticF_SceneLoadCounter() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerCounterValue_1<int32_t>, "SceneLoadCounter", ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>();
}
inline void UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::setStaticF_m_CatalogData(
    ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::Hash128, ::UnityEngine::ResourceManagement::Profiling::CatalogFrameData>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::Hash128, ::UnityEngine::ResourceManagement::Profiling::CatalogFrameData>*,
                                    "m_CatalogData", ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(
      std::forward<::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::Hash128, ::UnityEngine::ResourceManagement::Profiling::CatalogFrameData>*>(value));
}
inline ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::Hash128, ::UnityEngine::ResourceManagement::Profiling::CatalogFrameData>*
UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::getStaticF_m_CatalogData() {
  return ::cordl_internals::getStaticField<::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::Hash128, ::UnityEngine::ResourceManagement::Profiling::CatalogFrameData>*,
                                           "m_CatalogData", ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>();
}
inline void UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::setStaticF_m_BundleData(
    ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                      ::UnityEngine::ResourceManagement::Profiling::BundleFrameData>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                                                      ::UnityEngine::ResourceManagement::Profiling::BundleFrameData>*,
                                    "m_BundleData", ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(
      std::forward<::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                                     ::UnityEngine::ResourceManagement::Profiling::BundleFrameData>*>(value));
}
inline ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                         ::UnityEngine::ResourceManagement::Profiling::BundleFrameData>*
UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::getStaticF_m_BundleData() {
  return ::cordl_internals::getStaticField<::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                                                             ::UnityEngine::ResourceManagement::Profiling::BundleFrameData>*,
                                           "m_BundleData", ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>();
}
inline void UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::setStaticF_m_AssetData(
    ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                      ::UnityEngine::ResourceManagement::Profiling::AssetFrameData>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                                                      ::UnityEngine::ResourceManagement::Profiling::AssetFrameData>*,
                                    "m_AssetData", ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(
      std::forward<::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                                     ::UnityEngine::ResourceManagement::Profiling::AssetFrameData>*>(value));
}
inline ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                         ::UnityEngine::ResourceManagement::Profiling::AssetFrameData>*
UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::getStaticF_m_AssetData() {
  return ::cordl_internals::getStaticField<::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                                                             ::UnityEngine::ResourceManagement::Profiling::AssetFrameData>*,
                                           "m_AssetData", ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>();
}
inline void UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::setStaticF_m_SceneData(
    ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                      ::UnityEngine::ResourceManagement::Profiling::AssetFrameData>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                                                      ::UnityEngine::ResourceManagement::Profiling::AssetFrameData>*,
                                    "m_SceneData", ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(
      std::forward<::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                                     ::UnityEngine::ResourceManagement::Profiling::AssetFrameData>*>(value));
}
inline ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                         ::UnityEngine::ResourceManagement::Profiling::AssetFrameData>*
UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::getStaticF_m_SceneData() {
  return ::cordl_internals::getStaticField<::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                                                             ::UnityEngine::ResourceManagement::Profiling::AssetFrameData>*,
                                           "m_SceneData", ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>();
}
inline void UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::setStaticF_m_BundleNameToOperation(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*, "m_BundleNameToOperation",
                                    ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*
UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::getStaticF_m_BundleNameToOperation() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*, "m_BundleNameToOperation",
                                           ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>();
}
inline void UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::setStaticF_m_BundleNameToAssetOperations(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*>*,
      "m_BundleNameToAssetOperations", ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*>*
UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::getStaticF_m_BundleNameToAssetOperations() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*>*,
      "m_BundleNameToAssetOperations", ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>();
}
inline void UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::setStaticF_m_DataChange(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, ::System::ValueTuple_2<int32_t, float_t>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, ::System::ValueTuple_2<int32_t, float_t>>*,
                                    "m_DataChange", ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, ::System::ValueTuple_2<int32_t, float_t>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, ::System::ValueTuple_2<int32_t, float_t>>*
UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::getStaticF_m_DataChange() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, ::System::ValueTuple_2<int32_t, float_t>>*, "m_DataChange",
      ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>();
}
inline void UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::Initialise() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(), { "Initialise", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::InstanceOnOnLateUpdateDelegate(float_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(), { "InstanceOnOnLateUpdateDelegate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, deltaTime);
}
inline void UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::AddCatalog(::UnityEngine::Hash128 buildHash) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(), { "AddCatalog", {}, { ::i2c::type_of<::UnityEngine::Hash128>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buildHash);
}
inline void UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::AddBundleOperation(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle handle,
                                                                                            ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions* requestOptions,
                                                                                            ::UnityEngine::ResourceManagement::Profiling::ContentStatus status,
                                                                                            ::UnityEngine::ResourceManagement::Util::BundleSource source) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(),
                                                                                         { "AddBundleOperation",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(),
                                                                                             ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(),
                                                                                             ::i2c::type_of<::UnityEngine::ResourceManagement::Profiling::ContentStatus>(),
                                                                                             ::i2c::type_of<::UnityEngine::ResourceManagement::Util::BundleSource>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, requestOptions, status, source);
}
inline void UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::BundleReleased(::StringW bundleName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(), { "BundleReleased", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bundleName);
}
inline void UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::AddAssetOperation(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle handle,
                                                                                           ::UnityEngine::ResourceManagement::Profiling::ContentStatus status) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(),
                                                                                         { "AddAssetOperation",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(),
                                                                                             ::i2c::type_of<::UnityEngine::ResourceManagement::Profiling::ContentStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, status);
}
inline ::StringW UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::GetContainingBundleNameForLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(),
                                              { "GetContainingBundleNameForLocation", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, location);
}
inline void UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::AddSceneOperation(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle,
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::ResourceManagement::Profiling::ContentStatus status) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(),
          { "AddSceneOperation",
            {},
            { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(),
              ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::Profiling::ContentStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, location, status);
}
inline void UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::SceneReleased(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(),
                          { "SceneReleased",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline int32_t UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::GetSceneLoadCounterValue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(), { "GetSceneLoadCounterValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::PushToProfilerStream() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(), { "PushToProfilerStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::RefreshChangedReferenceCounts() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(), { "RefreshChangedReferenceCounts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::ShouldUpdateFrameDataWithOperationData(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* activeOperation,
                                                                                                                int32_t frameReferenceCount, float_t framePercentComplete,
                                                                                                                ::by_ref<::System::ValueTuple_2<int32_t, float_t>> newDataOut) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*>(),
                                                           { "ShouldUpdateFrameDataWithOperationData",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::System::ValueTuple_2<int32_t, float_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, activeOperation, frameReferenceCount, framePercentComplete, newDataOut);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime::ProfilerRuntime() {}
