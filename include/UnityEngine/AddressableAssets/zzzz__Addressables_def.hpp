#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/Addressables.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::Addressables);
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16148 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AddressableAssets::Addressables_MergeMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Addressables_MergeMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
// Dependencies System.Object
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

  /// @brief Method AddResourceLocator, addr 0x44e9858, size 0xb0, virtual false, abstract: false, final false
  static inline void AddResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator, ::StringW localCatalogHash,
                                        ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteCatalogLocation);

  /// @brief Method CheckForCatalogUpdates, addr 0x44e92a4, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> CheckForCatalogUpdates(bool autoReleaseHandle);

  /// @brief Method CleanBundleCache, addr 0x44e9c70, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> CleanBundleCache(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogsIds);

  /// @brief Method ClearDependencyCacheAsync, addr 0x44e6b50, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::StringW key, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync, addr 0x44e6840, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::System::Object* key, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync, addr 0x44e69c8, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys,
                                                                                                                           bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync, addr 0x44e6a8c, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::System::Collections::IEnumerable* keys, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync, addr 0x44e6904, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
  ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync, addr 0x44e6794, size 0xac, virtual false, abstract: false, final false
  static inline void ClearDependencyCacheAsync(::StringW key);

  /// @brief Method ClearDependencyCacheAsync, addr 0x44e58d0, size 0xac, virtual false, abstract: false, final false
  static inline void ClearDependencyCacheAsync(::System::Object* key);

  /// @brief Method ClearDependencyCacheAsync, addr 0x44e612c, size 0xac, virtual false, abstract: false, final false
  static inline void ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys);

  /// @brief Method ClearDependencyCacheAsync, addr 0x44e66e8, size 0xac, virtual false, abstract: false, final false
  static inline void ClearDependencyCacheAsync(::System::Collections::IEnumerable* keys);

  /// @brief Method ClearDependencyCacheAsync, addr 0x44e5b80, size 0xac, virtual false, abstract: false, final false
  static inline void ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations);

  /// @brief Method ClearResourceLocators, addr 0x44e9b70, size 0x90, virtual false, abstract: false, final false
  static inline void ClearResourceLocators();

  /// @brief Method CreateCatalogLocationWithHashDependencies, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*
  CreateCatalogLocationWithHashDependencies(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteCatalogLocation);

  /// @brief Method CreateCatalogLocationWithHashDependencies, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase* CreateCatalogLocationWithHashDependencies(::StringW remoteCatalogPath);

  /// @brief Method CreateCatalogLocationWithHashDependencies, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase* CreateCatalogLocationWithHashDependencies(::StringW remoteCatalogPath, ::StringW remoteHashPath);

  /// @brief Method DownloadDependencies, addr 0x44e4ec0, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependencies(::System::Object* key);

  /// @brief Method DownloadDependenciesAsync, addr 0x44e4f40, size 0xcc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependenciesAsync(::System::Object* key, bool autoReleaseHandle);

  /// @brief Method DownloadDependenciesAsync, addr 0x44e5490, size 0xd8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
  DownloadDependenciesAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::UnityEngine::AddressableAssets::Addressables_MergeMode mode, bool autoReleaseHandle);

  /// @brief Method DownloadDependenciesAsync, addr 0x44e57f8, size 0xd8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
  DownloadDependenciesAsync(::System::Collections::IEnumerable* keys, ::UnityEngine::AddressableAssets::Addressables_MergeMode mode, bool autoReleaseHandle);

  /// @brief Method DownloadDependenciesAsync, addr 0x44e5284, size 0xcc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
  DownloadDependenciesAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, bool autoReleaseHandle);

  /// @brief Method GetDownloadSize, addr 0x44e3af4, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSize(::System::Object* key);

  /// @brief Method GetDownloadSizeAsync, addr 0x44e3ce4, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::StringW key);

  /// @brief Method GetDownloadSizeAsync, addr 0x44e3b6c, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::System::Object* key);

  /// @brief Method GetDownloadSizeAsync, addr 0x44e3da0, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys);

  /// @brief Method GetDownloadSizeAsync, addr 0x44e4e04, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::System::Collections::IEnumerable* keys);

  /// @brief Method GetLocatorInfo, addr 0x44e6cac, size 0x10c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AddressableAssets::ResourceLocatorInfo* GetLocatorInfo(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator);

  /// @brief Method GetLocatorInfo, addr 0x44e6c14, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::AddressableAssets::ResourceLocatorInfo* GetLocatorInfo(::StringW locatorId);

  /// @brief Method Initialize, addr 0x44e29c0, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> Initialize();

  /// @brief Method InitializeAsync, addr 0x44e2a28, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> InitializeAsync();

  /// @brief Method InitializeAsync, addr 0x44e2b60, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  InitializeAsync(bool autoReleaseHandle);

  /// @brief Method Instantiate, addr 0x44e750c, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  Instantiate(::System::Object* key, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle);

  /// @brief Method Instantiate, addr 0x44e7184, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> Instantiate(::System::Object* key, ::UnityEngine::Transform* parent,
                                                                                                                                            bool instantiateInWorldSpace, bool trackHandle);

  /// @brief Method Instantiate, addr 0x44e72f8, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  Instantiate(::System::Object* key, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent, bool trackHandle);

  /// @brief Method Instantiate, addr 0x44e76b0, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  Instantiate(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters,
              bool trackHandle);

  /// @brief Method Instantiate, addr 0x44e6db8, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  Instantiate(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Transform* parent, bool instantiateInWorldSpace, bool trackHandle);

  /// @brief Method Instantiate, addr 0x44e6f70, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  Instantiate(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent,
              bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x44e75bc, size 0xf4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::System::Object* key, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x44e721c, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::System::Object* key, ::UnityEngine::Transform* parent, bool instantiateInWorldSpace, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x44e73e0, size 0x12c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::System::Object* key, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x44e6e7c, size 0xf4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                   ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x44e7760, size 0x10c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Transform* parent, bool instantiateInWorldSpace, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x44e7058, size 0x12c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                   ::UnityEngine::Transform* parent, bool trackHandle);

  /// @brief Method InternalSafeSerializationLog, addr 0x44e215c, size 0x114, virtual false, abstract: false, final false
  static inline void InternalSafeSerializationLog(::StringW msg, ::UnityEngine::LogType logType);

  /// @brief Method InternalSafeSerializationLogFormat, addr 0x44e2378, size 0x124, virtual false, abstract: false, final false
  static inline void InternalSafeSerializationLogFormat(::StringW format, ::UnityEngine::LogType logType, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LoadAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAsset(::System::Object* key);

  /// @brief Method LoadAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAsset(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync(::System::Object* key);

  /// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method LoadAssets, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> LoadAssets(::System::Object* key,
                                                                                                                                                         ::System::Action_1<TObject>* callback);

  /// @brief Method LoadAssets, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssets(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::System::Action_1<TObject>* callback, ::UnityEngine::AddressableAssets::Addressables_MergeMode mode);

  /// @brief Method LoadAssets, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssets(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, ::System::Action_1<TObject>* callback);

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
  LoadAssetsAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::System::Action_1<TObject>* callback, ::UnityEngine::AddressableAssets::Addressables_MergeMode mode);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::System::Action_1<TObject>* callback, ::UnityEngine::AddressableAssets::Addressables_MergeMode mode,
                  bool releaseDependenciesOnFailure);

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

  /// @brief Method LoadContentCatalog, addr 0x44e2cac, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  LoadContentCatalog(::StringW catalogPath, ::StringW providerSuffix);

  /// @brief Method LoadContentCatalogAsync, addr 0x44e2fc0, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  LoadContentCatalogAsync(::StringW catalogPath, bool autoReleaseHandle, ::StringW providerSuffix);

  /// @brief Method LoadContentCatalogAsync, addr 0x44e2d2c, size 0xc8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  LoadContentCatalogAsync(::StringW catalogPath, ::StringW providerSuffix);

  /// @brief Method LoadResourceLocations, addr 0x44e342c, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocations(::System::Object* key, ::System::Type* type);

  /// @brief Method LoadResourceLocations, addr 0x44e30a0, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocations(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::UnityEngine::AddressableAssets::Addressables_MergeMode mode, ::System::Type* type);

  /// @brief Method LoadResourceLocationsAsync, addr 0x44e34ac, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocationsAsync(::System::Object* key, ::System::Type* type);

  /// @brief Method LoadResourceLocationsAsync, addr 0x44e3130, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocationsAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::UnityEngine::AddressableAssets::Addressables_MergeMode mode, ::System::Type* type);

  /// @brief Method LoadResourceLocationsAsync, addr 0x44e3358, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocationsAsync(::System::Collections::IEnumerable* keys, ::UnityEngine::AddressableAssets::Addressables_MergeMode mode, ::System::Type* type);

  /// @brief Method LoadScene, addr 0x44e7f4c, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadScene(::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority);

  /// @brief Method LoadScene, addr 0x44e80e0, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadScene(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority);

  /// @brief Method LoadSceneAsync, addr 0x44e7fe4, size 0xfc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority);

  /// @brief Method LoadSceneAsync, addr 0x44e84c4, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters, bool activateOnLoad, int32_t priority);

  /// @brief Method LoadSceneAsync, addr 0x44e8178, size 0xfc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority);

  /// @brief Method LoadSceneAsync, addr 0x44e8690, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters, bool activateOnLoad,
                 int32_t priority);

  /// @brief Method Log, addr 0x44e25d4, size 0x98, virtual false, abstract: false, final false
  static inline void Log(::StringW msg);

  /// @brief Method LogError, addr 0x44dda40, size 0x98, virtual false, abstract: false, final false
  static inline void LogError(::StringW msg);

  /// @brief Method LogErrorFormat, addr 0x44de2c8, size 0xa8, virtual false, abstract: false, final false
  static inline void LogErrorFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogException, addr 0x44e292c, size 0x90, virtual false, abstract: false, final false
  static inline void LogException(::System::Exception* ex);

  /// @brief Method LogException, addr 0x44e27bc, size 0xd4, virtual false, abstract: false, final false
  static inline void LogException(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op, ::System::Exception* ex);

  /// @brief Method LogFormat, addr 0x44e266c, size 0xa8, virtual false, abstract: false, final false
  static inline void LogFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogWarning, addr 0x44dd9a8, size 0x98, virtual false, abstract: false, final false
  static inline void LogWarning(::StringW msg);

  /// @brief Method LogWarningFormat, addr 0x44e2714, size 0xa8, virtual false, abstract: false, final false
  static inline void LogWarningFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Release, addr 0x44e36b8, size 0xc4, virtual false, abstract: false, final false
  static inline void Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> static inline void Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> handle);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> static inline void Release(TObject obj);

  /// @brief Method ReleaseInstance, addr 0x44e395c, size 0xc8, virtual false, abstract: false, final false
  static inline bool ReleaseInstance(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method ReleaseInstance, addr 0x44e3a24, size 0xd0, virtual false, abstract: false, final false
  static inline bool ReleaseInstance(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> handle);

  /// @brief Method ReleaseInstance, addr 0x44e37c8, size 0x98, virtual false, abstract: false, final false
  static inline bool ReleaseInstance(::UnityEngine::GameObject* instance);

  /// @brief Method RemoveResourceLocator, addr 0x44e9a00, size 0x98, virtual false, abstract: false, final false
  static inline void RemoveResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator);

  /// @brief Method ResolveInternalId, addr 0x44e18b8, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW ResolveInternalId(::StringW id);

  /// @brief Method UnloadScene, addr 0x44e88d8, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadScene(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, bool autoReleaseHandle);

  /// @brief Method UnloadScene, addr 0x44e8a60, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadScene(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle, bool autoReleaseHandle);

  /// @brief Method UnloadScene, addr 0x44e8bc8, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadScene(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle,
              ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle);

  /// @brief Method UnloadScene, addr 0x44e8770, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadScene(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, bool autoReleaseHandle);

  /// @brief Method UnloadSceneAsync, addr 0x44e8978, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, bool autoReleaseHandle);

  /// @brief Method UnloadSceneAsync, addr 0x44e8ca8, size 0xf4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle);

  /// @brief Method UnloadSceneAsync, addr 0x44e8af0, size 0xd8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle, bool autoReleaseHandle);

  /// @brief Method UnloadSceneAsync, addr 0x44e8800, size 0xd8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, bool autoReleaseHandle);

  /// @brief Method UnloadSceneAsync, addr 0x44e8d9c, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle);

  /// @brief Method UpdateCatalogs, addr 0x44e9784, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>
  UpdateCatalogs(bool autoCleanBundleCache, ::System::Collections::Generic::IEnumerable_1<::StringW>* catalogs, bool autoReleaseHandle);

  /// @brief Method UpdateCatalogs, addr 0x44e949c, size 0xc8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>
  UpdateCatalogs(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogs, bool autoReleaseHandle);

  static inline ::StringW getStaticF_BuildReportPath();

  static inline ::StringW getStaticF_LibraryPath();

  static inline ::UnityEngine::AddressableAssets::AddressablesImpl* getStaticF_m_AddressablesInstance();

  static inline bool getStaticF_reinitializeAddressables();

  /// @brief Method get_BuildPath, addr 0x44e1d90, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW get_BuildPath();

  /// @brief Method get_InitializationOperation, addr 0x44e3094, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> get_InitializationOperation();

  /// @brief Method get_Instance, addr 0x44dcc74, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::AddressableAssets::AddressablesImpl* get_Instance();

  /// @brief Method get_InstanceProvider, addr 0x44e1824, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* get_InstanceProvider();

  /// @brief Method get_InternalIdTransformFunc, addr 0x44e19a4, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* get_InternalIdTransformFunc();

  /// @brief Method get_PlayerBuildDataPath, addr 0x44e1efc, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW get_PlayerBuildDataPath();

  /// @brief Method get_ResourceLocators, addr 0x44e20cc, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* get_ResourceLocators();

  /// @brief Method get_ResourceManager, addr 0x44e1794, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::ResourceManager* get_ResourceManager();

  /// @brief Method get_RuntimePath, addr 0x44e2038, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW get_RuntimePath();

  /// @brief Method get_StreamingAssetsSubFolder, addr 0x44e1c94, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW get_StreamingAssetsSubFolder();

  /// @brief Method get_WebRequestOverride, addr 0x44e1b1c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* get_WebRequestOverride();

  /// @brief Method get_m_Addressables, addr 0x44e173c, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::AddressableAssets::AddressablesImpl* get_m_Addressables();

  static inline void setStaticF_BuildReportPath(::StringW value);

  static inline void setStaticF_LibraryPath(::StringW value);

  static inline void setStaticF_m_AddressablesInstance(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  static inline void setStaticF_reinitializeAddressables(bool value);

  /// @brief Method set_InternalIdTransformFunc, addr 0x44e1a5c, size 0xa0, virtual false, abstract: false, final false
  static inline void set_InternalIdTransformFunc(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* value);

  /// @brief Method set_WebRequestOverride, addr 0x44e1bd4, size 0xa0, virtual false, abstract: false, final false
  static inline void set_WebRequestOverride(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Addressables();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Addressables", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Addressables(Addressables&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Addressables", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Addressables(Addressables const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16149 };

  /// @brief Field kAddressablesRuntimeBuildLogPath offset 0xffffffff size 0x8
  static constexpr ::ConstString kAddressablesRuntimeBuildLogPath{ u"AddressablesRuntimeBuildLog" };

  /// @brief Field kAddressablesRuntimeDataPath offset 0xffffffff size 0x8
  static constexpr ::ConstString kAddressablesRuntimeDataPath{ u"AddressablesRuntimeDataPath" };

  /// @brief Field k_AddressablesLogConditional offset 0xffffffff size 0x8
  static constexpr ::ConstString k_AddressablesLogConditional{ u"ADDRESSABLES_LOG_ALL" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Addressables, 0x10>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Addressables_MergeMode, "UnityEngine.AddressableAssets", "Addressables/MergeMode");
NEED_NO_BOX(::UnityEngine::AddressableAssets::Addressables);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Addressables*, "UnityEngine.AddressableAssets", "Addressables");
