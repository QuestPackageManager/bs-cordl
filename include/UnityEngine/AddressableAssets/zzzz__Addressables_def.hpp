#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/Addressables.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IResourceProvider_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Addressables)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Exception;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
namespace UnityEngine::AddressableAssets {
struct Addressables_MergeMode;
}
namespace UnityEngine::AddressableAssets {
class ResourceLocatorInfo;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class ResourceLocationBase;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IInstanceProvider;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct InstantiationParameters;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneReleaseMode;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneParameters;
}
namespace UnityEngine::SceneManagement {
struct UnloadSceneOptions;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
struct Addressables_MergeMode;
}
namespace UnityEngine::AddressableAssets {
class Addressables;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AddressableAssets::Addressables_MergeMode);
MARK_REF_T(::UnityEngine::AddressableAssets::Addressables*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AddressableAssets::Addressables_MergeMode, "UnityEngine.AddressableAssets", "Addressables/MergeMode");
DEFINE_IL2CPP_CLASS(::UnityEngine::AddressableAssets::Addressables*, "UnityEngine.AddressableAssets", "Addressables");
// Dependencies
namespace UnityEngine::AddressableAssets {
// Is value type: true
// CS Name: UnityEngine.AddressableAssets.Addressables/MergeMode
struct CORDL_TYPE Addressables_MergeMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Addressables_MergeMode_Unwrapped
  enum struct __Addressables_MergeMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_UseFirst = static_cast<int32_t>(0x0),
    __E_Union = static_cast<int32_t>(0x1),
    __E_Intersection = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Addressables_MergeMode_Unwrapped() const noexcept {
    return static_cast<__Addressables_MergeMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Addressables_MergeMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr Addressables_MergeMode(int32_t value__) noexcept;

  /// @brief Field Intersection value: I32(2)
  static ::UnityEngine::AddressableAssets::Addressables_MergeMode const Intersection;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::AddressableAssets::Addressables_MergeMode const None;

  /// @brief Field Union value: I32(1)
  static ::UnityEngine::AddressableAssets::Addressables_MergeMode const Union;

  /// @brief Field UseFirst value: I32(0)
  static ::UnityEngine::AddressableAssets::Addressables_MergeMode const UseFirst;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20107 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AddressableAssets::Addressables_MergeMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AddressableAssets::Addressables_MergeMode) == 0x4, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
// Dependencies System.Object, UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider
namespace UnityEngine::AddressableAssets {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.Addressables
class CORDL_TYPE Addressables : public ::System::Object {
public:
  // Declarations
  using MergeMode = ::UnityEngine::AddressableAssets::Addressables_MergeMode;

  /// @brief Field BuildReportPath, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_BuildReportPath, put = setStaticF_BuildReportPath)) ::StringW BuildReportPath;

  /// @brief Field LibraryPath, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_LibraryPath, put = setStaticF_LibraryPath)) ::StringW LibraryPath;

  /// @brief Field m_AddressablesInstance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_AddressablesInstance, put = setStaticF_m_AddressablesInstance)) ::UnityEngine::AddressableAssets::AddressablesImpl* m_AddressablesInstance;

  /// @brief Field reinitializeAddressables, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_reinitializeAddressables, put = setStaticF_reinitializeAddressables)) bool reinitializeAddressables;

  /// @brief Method AddResourceLocator, addr 0x68bc98c, size 0xc4, virtual false, abstract: false, final false
  static inline void AddResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator, ::StringW localCatalogHash,
                                        ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteCatalogLocation);

  /// @brief Method CheckForCatalogUpdates, addr 0x68bc310, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> CheckForCatalogUpdates(bool autoReleaseHandle);

  /// @brief Method CleanBundleCache, addr 0x68bcde4, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> CleanBundleCache(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogsIds);

  /// @brief Method ClearDependencyCacheAsync, addr 0x68b9eb8, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::StringW key, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync, addr 0x68b9c24, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::System::Object* key, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync, addr 0x68b9ddc, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::System::Collections::IEnumerable* keys, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync, addr 0x68b9d00, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
  ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync, addr 0x68b9b64, size 0xc0, virtual false, abstract: false, final false
  static inline void ClearDependencyCacheAsync(::StringW key);

  /// @brief Method ClearDependencyCacheAsync, addr 0x68b8d58, size 0xc0, virtual false, abstract: false, final false
  static inline void ClearDependencyCacheAsync(::System::Object* key);

  /// @brief Method ClearDependencyCacheAsync, addr 0x68b95d0, size 0xc0, virtual false, abstract: false, final false
  static inline void ClearDependencyCacheAsync(::System::Collections::IEnumerable* keys);

  /// @brief Method ClearDependencyCacheAsync, addr 0x68b9050, size 0xc0, virtual false, abstract: false, final false
  static inline void ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations);

  /// @brief Method ClearResourceLocators, addr 0x68bccd0, size 0x9c, virtual false, abstract: false, final false
  static inline void ClearResourceLocators();

  /// @brief Method CreateCatalogLocationWithHashDependencies, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>)
  static inline ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*
  CreateCatalogLocationWithHashDependencies(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteCatalogLocation);

  /// @brief Method CreateCatalogLocationWithHashDependencies, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>)
  static inline ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase* CreateCatalogLocationWithHashDependencies(::StringW remoteCatalogPath);

  /// @brief Method CreateCatalogLocationWithHashDependencies, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>)
  static inline ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase* CreateCatalogLocationWithHashDependencies(::StringW remoteCatalogPath, ::StringW remoteHashPath);

  /// @brief Method DownloadDependenciesAsync, addr 0x68b8504, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependenciesAsync(::System::Object* key, bool autoReleaseHandle);

  /// @brief Method DownloadDependenciesAsync, addr 0x68b8a20, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
  DownloadDependenciesAsync(::System::Collections::IEnumerable* keys, ::UnityEngine::AddressableAssets::Addressables_MergeMode mode, bool autoReleaseHandle);

  /// @brief Method DownloadDependenciesAsync, addr 0x68b8814, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
  DownloadDependenciesAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, bool autoReleaseHandle);

  /// @brief Method GetDownloadSizeAsync, addr 0x68b7808, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::StringW key);

  /// @brief Method GetDownloadSizeAsync, addr 0x68b7670, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::System::Object* key);

  /// @brief Method GetDownloadSizeAsync, addr 0x68b78d8, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::System::Collections::IEnumerable* keys);

  /// @brief Method GetLocatorInfo, addr 0x68ba040, size 0x124, virtual false, abstract: false, final false
  static inline ::UnityEngine::AddressableAssets::ResourceLocatorInfo* GetLocatorInfo(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator);

  /// @brief Method GetLocatorInfo, addr 0x68b9f94, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::AddressableAssets::ResourceLocatorInfo* GetLocatorInfo(::StringW locatorId);

  /// @brief Method InitializeAsync, addr 0x68b698c, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> InitializeAsync();

  /// @brief Method InitializeAsync, addr 0x68b6ae4, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  InitializeAsync(bool autoReleaseHandle);

  /// @brief Method InstantiateAsync, addr 0x68ba890, size 0xf8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::System::Object* key, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x68ba554, size 0x118, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::System::Object* key, ::UnityEngine::Transform* parent, bool instantiateInWorldSpace, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x68ba6e8, size 0x14c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::System::Object* key, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x68bad5c, size 0xf8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                   ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x68ba164, size 0x128, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Transform* parent, bool instantiateInWorldSpace, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x68ba3ac, size 0x14c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                   ::UnityEngine::Transform* parent, bool trackHandle);

  /// [Conditional("ADDRESSABLES_LOG_ALL")]
  /// @brief Method InternalSafeSerializationLog, addr 0x68b60c4, size 0x118, virtual false, abstract: false, final false
  static inline void InternalSafeSerializationLog(::StringW msg, ::UnityEngine::LogType logType);

  /// [Conditional("ADDRESSABLES_LOG_ALL")]
  /// @brief Method InternalSafeSerializationLogFormat, addr 0x68b62f0, size 0x128, virtual false, abstract: false, final false
  static inline void InternalSafeSerializationLogFormat(::StringW format, ::UnityEngine::LogType logType, /* [ParamArray] */ ::ArrayW<::System::Object*> args);

  /// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync(::System::Object* key);

  /// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> LoadAssetsAsync(::StringW key,
                                                                                                                                                              ::System::Action_1<TObject>* callback);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::StringW key, bool releaseDependenciesOnFailure, ::System::Action_1<TObject>* callback);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> LoadAssetsAsync(::System::Object* key,
                                                                                                                                                              ::System::Action_1<TObject>* callback);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Object* key, ::System::Action_1<TObject>* callback, bool releaseDependenciesOnFailure);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::IEnumerable* keys, ::System::Action_1<TObject>* callback, ::UnityEngine::AddressableAssets::Addressables_MergeMode mode);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::IEnumerable* keys, ::System::Action_1<TObject>* callback, ::UnityEngine::AddressableAssets::Addressables_MergeMode mode, bool releaseDependenciesOnFailure);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, ::System::Action_1<TObject>* callback);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, ::System::Action_1<TObject>* callback,
                  bool releaseDependenciesOnFailure);

  /// @brief Method LoadContentCatalogAsync, addr 0x68b6f38, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  LoadContentCatalogAsync(::StringW catalogPath, bool autoReleaseHandle, ::StringW providerSuffix);

  /// @brief Method LoadContentCatalogAsync, addr 0x68b6c50, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  LoadContentCatalogAsync(::StringW catalogPath, ::StringW providerSuffix);

  /// @brief Method LoadResourceLocationsAsync, addr 0x68b7248, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocationsAsync(::System::Object* key, ::System::Type* type);

  /// @brief Method LoadResourceLocationsAsync, addr 0x68b7020, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocationsAsync(::System::Collections::IEnumerable* keys, ::UnityEngine::AddressableAssets::Addressables_MergeMode mode, ::System::Type* type);

  /// @brief Method LoadSceneAsync, addr 0x68bae54, size 0x104, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority,
                 ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode releaseMode);

  /// @brief Method LoadSceneAsync, addr 0x68bb1b0, size 0x104, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode releaseMode, bool activateOnLoad,
                 int32_t priority);

  /// @brief Method LoadSceneAsync, addr 0x68bb2b4, size 0xfc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters, bool activateOnLoad, int32_t priority);

  /// @brief Method LoadSceneAsync, addr 0x68bb3b0, size 0x104, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters, ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode releaseMode,
                 bool activateOnLoad, int32_t priority);

  /// @brief Method LoadSceneAsync, addr 0x68bb4b4, size 0xfc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority);

  /// @brief Method LoadSceneAsync, addr 0x68bb6b4, size 0x104, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneMode loadMode,
                 ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode releaseMode, bool activateOnLoad, int32_t priority);

  /// @brief Method LoadSceneAsync, addr 0x68bb7b8, size 0xfc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters, bool activateOnLoad,
                 int32_t priority);

  /// @brief Method LoadSceneAsync, addr 0x68bb8b4, size 0x104, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters,
                 ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode releaseMode, bool activateOnLoad, int32_t priority);

  /// [Conditional("ADDRESSABLES_LOG_ALL")]
  /// @brief Method Log, addr 0x68b655c, size 0xac, virtual false, abstract: false, final false
  static inline void Log(::StringW msg);

  /// @brief Method LogError, addr 0x68b126c, size 0xac, virtual false, abstract: false, final false
  static inline void LogError(::StringW msg);

  /// @brief Method LogErrorFormat, addr 0x68b1b78, size 0xb4, virtual false, abstract: false, final false
  static inline void LogErrorFormat(::StringW format, /* [ParamArray] */ ::ArrayW<::System::Object*> args);

  /// @brief Method LogException, addr 0x68b68ec, size 0x9c, virtual false, abstract: false, final false
  static inline void LogException(::System::Exception* ex);

  /// @brief Method LogException, addr 0x68b6770, size 0xd0, virtual false, abstract: false, final false
  static inline void LogException(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op, ::System::Exception* ex);

  /// [Conditional("ADDRESSABLES_LOG_ALL")]
  /// @brief Method LogFormat, addr 0x68b6608, size 0xb4, virtual false, abstract: false, final false
  static inline void LogFormat(::StringW format, /* [ParamArray] */ ::ArrayW<::System::Object*> args);

  /// @brief Method LogWarning, addr 0x68b11c0, size 0xac, virtual false, abstract: false, final false
  static inline void LogWarning(::StringW msg);

  /// @brief Method LogWarningFormat, addr 0x68b66bc, size 0xb4, virtual false, abstract: false, final false
  static inline void LogWarningFormat(::StringW format, /* [ParamArray] */ ::ArrayW<::System::Object*> args);

  /// @brief Method Release, addr 0x68b7458, size 0x8, virtual false, abstract: false, final false
  static inline void Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> static inline void Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> handle);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> static inline void Release(TObject obj);

  /// @brief Method ReleaseInstance, addr 0x68b7604, size 0x18, virtual false, abstract: false, final false
  static inline bool ReleaseInstance(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method ReleaseInstance, addr 0x68b761c, size 0x54, virtual false, abstract: false, final false
  static inline bool ReleaseInstance(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> handle);

  /// @brief Method ReleaseInstance, addr 0x68b7460, size 0xac, virtual false, abstract: false, final false
  static inline bool ReleaseInstance(::UnityEngine::GameObject* instance);

  /// @brief Method RemoveResourceLocator, addr 0x68bcb44, size 0xac, virtual false, abstract: false, final false
  static inline void RemoveResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator);

  /// @brief Method ResolveInternalId, addr 0x68b5790, size 0xac, virtual false, abstract: false, final false
  static inline ::StringW ResolveInternalId(::StringW id);

  /// @brief Method UnloadSceneAsync, addr 0x68bc050, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, bool autoReleaseHandle);

  /// @brief Method UnloadSceneAsync, addr 0x68bbd00, size 0xf8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle);

  /// @brief Method UnloadSceneAsync, addr 0x68bc140, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle, bool autoReleaseHandle);

  /// @brief Method UnloadSceneAsync, addr 0x68bbf64, size 0xec, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, bool autoReleaseHandle);

  /// @brief Method UnloadSceneAsync, addr 0x68bb9b8, size 0xf4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle);

  /// @brief Method UpdateCatalogs, addr 0x68bc8a4, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>
  UpdateCatalogs(bool autoCleanBundleCache, ::System::Collections::Generic::IEnumerable_1<::StringW>* catalogs, bool autoReleaseHandle);

  /// @brief Method UpdateCatalogs, addr 0x68bc538, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>
  UpdateCatalogs(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogs, bool autoReleaseHandle);

  static inline ::StringW getStaticF_BuildReportPath();

  static inline ::StringW getStaticF_LibraryPath();

  static inline ::UnityEngine::AddressableAssets::AddressablesImpl* getStaticF_m_AddressablesInstance();

  static inline bool getStaticF_reinitializeAddressables();

  /// @brief Method get_BuildPath, addr 0x68b5cbc, size 0x9c, virtual false, abstract: false, final false
  static inline ::StringW get_BuildPath();

  /// @brief Method get_Instance, addr 0x68af720, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::AddressableAssets::AddressablesImpl* get_Instance();

  /// @brief Method get_InstanceProvider, addr 0x68b56f0, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* get_InstanceProvider();

  /// @brief Method get_InternalIdTransformFunc, addr 0x68b5894, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* get_InternalIdTransformFunc();

  /// @brief Method get_PlayerBuildDataPath, addr 0x68b5e3c, size 0x9c, virtual false, abstract: false, final false
  static inline ::StringW get_PlayerBuildDataPath();

  /// @brief Method get_ResourceLocators, addr 0x68b6028, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* get_ResourceLocators();

  /// @brief Method get_ResourceManager, addr 0x68b5650, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::ResourceManager* get_ResourceManager();

  /// @brief Method get_RuntimePath, addr 0x68b5f88, size 0x9c, virtual false, abstract: false, final false
  static inline ::StringW get_RuntimePath();

  /// @brief Method get_StreamingAssetsSubFolder, addr 0x68b5bac, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW get_StreamingAssetsSubFolder();

  /// @brief Method get_Version, addr 0x68b560c, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW get_Version();

  /// @brief Method get_WebRequestOverride, addr 0x68b5a20, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* get_WebRequestOverride();

  /// @brief Method get_m_Addressables, addr 0x68b55b0, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AddressableAssets::AddressablesImpl* get_m_Addressables();

  static inline void setStaticF_BuildReportPath(::StringW value);

  static inline void setStaticF_LibraryPath(::StringW value);

  static inline void setStaticF_m_AddressablesInstance(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  static inline void setStaticF_reinitializeAddressables(bool value);

  /// @brief Method set_InternalIdTransformFunc, addr 0x68b5954, size 0xb4, virtual false, abstract: false, final false
  static inline void set_InternalIdTransformFunc(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* value);

  /// @brief Method set_WebRequestOverride, addr 0x68b5ae0, size 0xb4, virtual false, abstract: false, final false
  static inline void set_WebRequestOverride(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Addressables();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Addressables", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Addressables(Addressables&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Addressables", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Addressables(Addressables const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20108 };

  /// @brief Field kAddressablesRuntimeBuildLogPath offset 0xffffffff size 0x8
  static constexpr ::ConstString kAddressablesRuntimeBuildLogPath{ u"AddressablesRuntimeBuildLog" };

  /// @brief Field kAddressablesRuntimeDataPath offset 0xffffffff size 0x8
  static constexpr ::ConstString kAddressablesRuntimeDataPath{ u"AddressablesRuntimeDataPath" };

  /// @brief Field k_AddressablesLogConditional offset 0xffffffff size 0x8
  static constexpr ::ConstString k_AddressablesLogConditional{ u"ADDRESSABLES_LOG_ALL" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AddressableAssets::Addressables) == 0x10, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
