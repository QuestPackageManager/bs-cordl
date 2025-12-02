#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Profiling/ProfilerRuntime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCounterValue_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerRuntime)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class IAsyncOperation;
}
namespace UnityEngine::ResourceManagement::Profiling {
struct AssetFrameData;
}
namespace UnityEngine::ResourceManagement::Profiling {
struct BundleFrameData;
}
namespace UnityEngine::ResourceManagement::Profiling {
struct CatalogFrameData;
}
namespace UnityEngine::ResourceManagement::Profiling {
struct ContentStatus;
}
namespace UnityEngine::ResourceManagement::Profiling {
class IProfilerEmitter;
}
namespace UnityEngine::ResourceManagement::Profiling {
template <typename T1, typename T2> class ProfilerFrameData_2;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class AssetBundleRequestOptions;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace UnityEngine::ResourceManagement::Util {
struct BundleSource;
}
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Profiling {
class ProfilerRuntime;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime);
// Dependencies System.Guid, System.Object, Unity.Profiling.ProfilerCounterValue`1<T>
namespace UnityEngine::ResourceManagement::Profiling {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Profiling.ProfilerRuntime
class CORDL_TYPE ProfilerRuntime : public ::System::Object {
public:
  // Declarations
  /// @brief Field AssetBundleLoadCounter, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_AssetBundleLoadCounter, put = setStaticF_AssetBundleLoadCounter)) ::Unity::Profiling::ProfilerCounterValue_1<int32_t> AssetBundleLoadCounter;

  /// @brief Field AssetLoadCounter, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_AssetLoadCounter, put = setStaticF_AssetLoadCounter)) ::Unity::Profiling::ProfilerCounterValue_1<int32_t> AssetLoadCounter;

  /// @brief Field CatalogLoadCounter, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_CatalogLoadCounter, put = setStaticF_CatalogLoadCounter)) ::Unity::Profiling::ProfilerCounterValue_1<int32_t> CatalogLoadCounter;

  /// @brief Field SceneLoadCounter, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_SceneLoadCounter, put = setStaticF_SceneLoadCounter)) ::Unity::Profiling::ProfilerCounterValue_1<int32_t> SceneLoadCounter;

  /// @brief Field kResourceManagerProfilerGuid, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_kResourceManagerProfilerGuid, put = setStaticF_kResourceManagerProfilerGuid)) ::System::Guid kResourceManagerProfilerGuid;

  /// @brief Field m_AssetData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_AssetData,
                      put = setStaticF_m_AssetData)) ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                                                                       ::UnityEngine::ResourceManagement::Profiling::AssetFrameData>* m_AssetData;

  /// @brief Field m_BundleData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_BundleData,
                      put = setStaticF_m_BundleData)) ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                                                                        ::UnityEngine::ResourceManagement::Profiling::BundleFrameData>* m_BundleData;

  /// @brief Field m_BundleNameToAssetOperations, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_BundleNameToAssetOperations, put = setStaticF_m_BundleNameToAssetOperations)) ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*>* m_BundleNameToAssetOperations;

  /// @brief Field m_BundleNameToOperation, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_m_BundleNameToOperation,
      put = setStaticF_m_BundleNameToOperation)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* m_BundleNameToOperation;

  /// @brief Field m_CatalogData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_CatalogData,
                      put = setStaticF_m_CatalogData)) ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::Hash128,
                                                                                                                         ::UnityEngine::ResourceManagement::Profiling::CatalogFrameData>* m_CatalogData;

  /// @brief Field m_DataChange, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_DataChange, put = setStaticF_m_DataChange)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                                                                                  ::System::ValueTuple_2<int32_t, float_t>>* m_DataChange;

  /// @brief Field m_SceneData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_SceneData,
                      put = setStaticF_m_SceneData)) ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                                                                       ::UnityEngine::ResourceManagement::Profiling::AssetFrameData>* m_SceneData;

  /// @brief Field m_profilerEmitter, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_profilerEmitter, put = setStaticF_m_profilerEmitter)) ::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter* m_profilerEmitter;

  /// @brief Method AddAssetOperation, addr 0x66fec80, size 0x6e0, virtual false, abstract: false, final false
  static inline void AddAssetOperation(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle handle, ::UnityEngine::ResourceManagement::Profiling::ContentStatus status);

  /// @brief Method AddBundleOperation, addr 0x66f9de4, size 0x32c, virtual false, abstract: false, final false
  static inline void AddBundleOperation(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle handle,
                                        ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions* requestOptions,
                                        ::UnityEngine::ResourceManagement::Profiling::ContentStatus status, ::UnityEngine::ResourceManagement::Util::BundleSource source);

  /// @brief Method AddCatalog, addr 0x6704a74, size 0xe0, virtual false, abstract: false, final false
  static inline void AddCatalog(::UnityEngine::Hash128 buildHash);

  /// @brief Method AddSceneOperation, addr 0x6701da0, size 0x260, virtual false, abstract: false, final false
  static inline void AddSceneOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle,
                                       ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::ResourceManagement::Profiling::ContentStatus status);

  /// @brief Method BundleReleased, addr 0x66f9b00, size 0x2e4, virtual false, abstract: false, final false
  static inline void BundleReleased(::StringW bundleName);

  /// @brief Method GetContainingBundleNameForLocation, addr 0x6704b54, size 0x37c, virtual false, abstract: false, final false
  static inline ::StringW GetContainingBundleNameForLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method GetSceneLoadCounterValue, addr 0x6704ed0, size 0x68, virtual false, abstract: false, final false
  static inline int32_t GetSceneLoadCounterValue();

  /// @brief Method Initialise, addr 0x66ebe58, size 0x23c, virtual false, abstract: false, final false
  static inline void Initialise();

  /// @brief Method InstanceOnOnLateUpdateDelegate, addr 0x6704634, size 0x50, virtual false, abstract: false, final false
  static inline void InstanceOnOnLateUpdateDelegate(float_t deltaTime);

  /// @brief Method PushToProfilerStream, addr 0x6704684, size 0x3f0, virtual false, abstract: false, final false
  static inline void PushToProfilerStream();

  /// @brief Method RefreshChangedReferenceCounts, addr 0x6704f38, size 0xa48, virtual false, abstract: false, final false
  static inline void RefreshChangedReferenceCounts();

  /// @brief Method SceneReleased, addr 0x67027f4, size 0x290, virtual false, abstract: false, final false
  static inline void SceneReleased(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle);

  /// @brief Method ShouldUpdateFrameDataWithOperationData, addr 0x6705980, size 0x2f4, virtual false, abstract: false, final false
  static inline bool ShouldUpdateFrameDataWithOperationData(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* activeOperation, int32_t frameReferenceCount,
                                                            float_t framePercentComplete, ::ByRef<::System::ValueTuple_2<int32_t, float_t>> newDataOut);

  static inline ::Unity::Profiling::ProfilerCounterValue_1<int32_t> getStaticF_AssetBundleLoadCounter();

  static inline ::Unity::Profiling::ProfilerCounterValue_1<int32_t> getStaticF_AssetLoadCounter();

  static inline ::Unity::Profiling::ProfilerCounterValue_1<int32_t> getStaticF_CatalogLoadCounter();

  static inline ::Unity::Profiling::ProfilerCounterValue_1<int32_t> getStaticF_SceneLoadCounter();

  static inline ::System::Guid getStaticF_kResourceManagerProfilerGuid();

  static inline ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                                  ::UnityEngine::ResourceManagement::Profiling::AssetFrameData>*
  getStaticF_m_AssetData();

  static inline ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                                  ::UnityEngine::ResourceManagement::Profiling::BundleFrameData>*
  getStaticF_m_BundleData();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*>*
  getStaticF_m_BundleNameToAssetOperations();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* getStaticF_m_BundleNameToOperation();

  static inline ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::Hash128, ::UnityEngine::ResourceManagement::Profiling::CatalogFrameData>* getStaticF_m_CatalogData();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, ::System::ValueTuple_2<int32_t, float_t>>* getStaticF_m_DataChange();

  static inline ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                                  ::UnityEngine::ResourceManagement::Profiling::AssetFrameData>*
  getStaticF_m_SceneData();

  static inline ::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter* getStaticF_m_profilerEmitter();

  static inline void setStaticF_AssetBundleLoadCounter(::Unity::Profiling::ProfilerCounterValue_1<int32_t> value);

  static inline void setStaticF_AssetLoadCounter(::Unity::Profiling::ProfilerCounterValue_1<int32_t> value);

  static inline void setStaticF_CatalogLoadCounter(::Unity::Profiling::ProfilerCounterValue_1<int32_t> value);

  static inline void setStaticF_SceneLoadCounter(::Unity::Profiling::ProfilerCounterValue_1<int32_t> value);

  static inline void setStaticF_kResourceManagerProfilerGuid(::System::Guid value);

  static inline void setStaticF_m_AssetData(::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                                                              ::UnityEngine::ResourceManagement::Profiling::AssetFrameData>* value);

  static inline void setStaticF_m_BundleData(::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                                                               ::UnityEngine::ResourceManagement::Profiling::BundleFrameData>* value);

  static inline void setStaticF_m_BundleNameToAssetOperations(
      ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*>* value);

  static inline void setStaticF_m_BundleNameToOperation(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value);

  static inline void
  setStaticF_m_CatalogData(::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::Hash128, ::UnityEngine::ResourceManagement::Profiling::CatalogFrameData>* value);

  static inline void
  setStaticF_m_DataChange(::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, ::System::ValueTuple_2<int32_t, float_t>>* value);

  static inline void setStaticF_m_SceneData(::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*,
                                                                                                              ::UnityEngine::ResourceManagement::Profiling::AssetFrameData>* value);

  static inline void setStaticF_m_profilerEmitter(::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerRuntime();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProfilerRuntime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProfilerRuntime(ProfilerRuntime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProfilerRuntime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProfilerRuntime(ProfilerRuntime const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18762 };

  /// @brief Field kAssetDataTag offset 0xffffffff size 0x4
  static constexpr int32_t kAssetDataTag{ static_cast<int32_t>(0x2) };

  /// @brief Field kBundleDataTag offset 0xffffffff size 0x4
  static constexpr int32_t kBundleDataTag{ static_cast<int32_t>(0x1) };

  /// @brief Field kCatalogTag offset 0xffffffff size 0x4
  static constexpr int32_t kCatalogTag{ static_cast<int32_t>(0x0) };

  /// @brief Field kSceneDataTag offset 0xffffffff size 0x4
  static constexpr int32_t kSceneDataTag{ static_cast<int32_t>(0x3) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Profiling
NEED_NO_BOX(::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Profiling::ProfilerRuntime*, "UnityEngine.ResourceManagement.Profiling", "ProfilerRuntime");
