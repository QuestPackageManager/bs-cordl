#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
struct __Addressables__MergeMode;
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
struct __Addressables__MergeMode;
}
namespace UnityEngine::AddressableAssets {
class Addressables;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AddressableAssets::__Addressables__MergeMode);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::Addressables);
// Type: ::MergeMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: true
// CS Name: ::Addressables::MergeMode
struct CORDL_TYPE __Addressables__MergeMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Addressables__MergeMode_Unwrapped
  enum struct ____Addressables__MergeMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_UseFirst = static_cast<int32_t>(0x0),
    __E_Union = static_cast<int32_t>(0x1),
    __E_Intersection = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Addressables__MergeMode_Unwrapped() const noexcept {
    return static_cast<____Addressables__MergeMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Addressables__MergeMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Addressables__MergeMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Intersection value: static_cast<int32_t>(0x2)
  static ::UnityEngine::AddressableAssets::__Addressables__MergeMode const Intersection;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::AddressableAssets::__Addressables__MergeMode const None;

  /// @brief Field Union value: static_cast<int32_t>(0x1)
  static ::UnityEngine::AddressableAssets::__Addressables__MergeMode const Union;

  /// @brief Field UseFirst value: static_cast<int32_t>(0x0)
  static ::UnityEngine::AddressableAssets::__Addressables__MergeMode const UseFirst;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__Addressables__MergeMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::__Addressables__MergeMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: UnityEngine.AddressableAssets::Addressables
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// CS Name: ::UnityEngine.AddressableAssets::Addressables*
class CORDL_TYPE Addressables : public ::System::Object {
public:
  // Declarations
  using MergeMode = ::UnityEngine::AddressableAssets::__Addressables__MergeMode;

  /// @brief Field LibraryPath, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_LibraryPath, put = setStaticF_LibraryPath))::StringW LibraryPath;

  /// @brief Field m_AddressablesInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_AddressablesInstance, put = setStaticF_m_AddressablesInstance))::UnityEngine::AddressableAssets::AddressablesImpl* m_AddressablesInstance;

  /// @brief Field reinitializeAddressables, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_reinitializeAddressables, put = setStaticF_reinitializeAddressables)) bool reinitializeAddressables;

  /// @brief Method AddResourceLocator, addr 0x2b65128, size 0xb0, virtual false, abstract: false, final false
  static inline void AddResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator, ::StringW localCatalogHash,
                                        ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteCatalogLocation);

  /// @brief Method CheckForCatalogUpdates, addr 0x2b64b68, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> CheckForCatalogUpdates(bool autoReleaseHandle);

  /// @brief Method CleanBundleCache, addr 0x2b6554c, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> CleanBundleCache(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogsIds);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2b627bc, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::StringW key, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2b624ac, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::System::Object* key, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2b62634, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys,
                                                                                                                           bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2b626f8, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::System::Collections::IEnumerable* keys, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2b62570, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
  ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2b62400, size 0xac, virtual false, abstract: false, final false
  static inline void ClearDependencyCacheAsync(::StringW key);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2b614d4, size 0xac, virtual false, abstract: false, final false
  static inline void ClearDependencyCacheAsync(::System::Object* key);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2b61d8c, size 0xac, virtual false, abstract: false, final false
  static inline void ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2b62354, size 0xac, virtual false, abstract: false, final false
  static inline void ClearDependencyCacheAsync(::System::Collections::IEnumerable* keys);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2b617d0, size 0xac, virtual false, abstract: false, final false
  static inline void ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations);

  /// @brief Method ClearResourceLocators, addr 0x2b6544c, size 0x90, virtual false, abstract: false, final false
  static inline void ClearResourceLocators();

  /// @brief Method DownloadDependencies, addr 0x2b60ac4, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependencies(::System::Object* key);

  /// @brief Method DownloadDependenciesAsync, addr 0x2b60b44, size 0xcc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependenciesAsync(::System::Object* key, bool autoReleaseHandle);

  /// @brief Method DownloadDependenciesAsync, addr 0x2b61098, size 0xd8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
  DownloadDependenciesAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, bool autoReleaseHandle);

  /// @brief Method DownloadDependenciesAsync, addr 0x2b613fc, size 0xd8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
  DownloadDependenciesAsync(::System::Collections::IEnumerable* keys, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, bool autoReleaseHandle);

  /// @brief Method DownloadDependenciesAsync, addr 0x2b60e8c, size 0xcc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
  DownloadDependenciesAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, bool autoReleaseHandle);

  /// @brief Method GetDownloadSize, addr 0x2b5f86c, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSize(::System::Object* key);

  /// @brief Method GetDownloadSizeAsync, addr 0x2b5fa5c, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::StringW key);

  /// @brief Method GetDownloadSizeAsync, addr 0x2b5f8e4, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::System::Object* key);

  /// @brief Method GetDownloadSizeAsync, addr 0x2b5fb18, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys);

  /// @brief Method GetDownloadSizeAsync, addr 0x2b60a08, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::System::Collections::IEnumerable* keys);

  /// @brief Method Initialize, addr 0x2b5e70c, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> Initialize();

  /// @brief Method InitializeAsync, addr 0x2b5e774, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> InitializeAsync();

  /// @brief Method InitializeAsync, addr 0x2b5e8ac, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  InitializeAsync(bool autoReleaseHandle);

  /// @brief Method Instantiate, addr 0x2b62fd4, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  Instantiate(::System::Object* key, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle);

  /// @brief Method Instantiate, addr 0x2b62c4c, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> Instantiate(::System::Object* key, ::UnityEngine::Transform* parent,
                                                                                                                                            bool instantiateInWorldSpace, bool trackHandle);

  /// @brief Method Instantiate, addr 0x2b62dc0, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  Instantiate(::System::Object* key, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent, bool trackHandle);

  /// @brief Method Instantiate, addr 0x2b63178, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  Instantiate(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters,
              bool trackHandle);

  /// @brief Method Instantiate, addr 0x2b62880, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  Instantiate(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Transform* parent, bool instantiateInWorldSpace, bool trackHandle);

  /// @brief Method Instantiate, addr 0x2b62a38, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  Instantiate(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent,
              bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x2b63084, size 0xf4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::System::Object* key, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x2b62ce4, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::System::Object* key, ::UnityEngine::Transform* parent, bool instantiateInWorldSpace, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x2b62ea8, size 0x12c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::System::Object* key, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x2b62944, size 0xf4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                   ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x2b63228, size 0x10c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Transform* parent, bool instantiateInWorldSpace, bool trackHandle);

  /// @brief Method InstantiateAsync, addr 0x2b62b20, size 0x12c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                   ::UnityEngine::Transform* parent, bool trackHandle);

  /// @brief Method InternalSafeSerializationLog, addr 0x2b5dea8, size 0x114, virtual false, abstract: false, final false
  static inline void InternalSafeSerializationLog(::StringW msg, ::UnityEngine::LogType logType);

  /// @brief Method InternalSafeSerializationLogFormat, addr 0x2b5e0c4, size 0x124, virtual false, abstract: false, final false
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
  LoadAssets(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::System::Action_1<TObject>* callback, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode);

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
  LoadAssetsAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::System::Action_1<TObject>* callback, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::System::Action_1<TObject>* callback, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode,
                  bool releaseDependenciesOnFailure);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::IEnumerable* keys, ::System::Action_1<TObject>* callback, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::IEnumerable* keys, ::System::Action_1<TObject>* callback, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, bool releaseDependenciesOnFailure);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, ::System::Action_1<TObject>* callback);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, ::System::Action_1<TObject>* callback,
                  bool releaseDependenciesOnFailure);

  /// @brief Method LoadContentCatalog, addr 0x2b5e9f8, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  LoadContentCatalog(::StringW catalogPath, ::StringW providerSuffix);

  /// @brief Method LoadContentCatalogAsync, addr 0x2b5ed38, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  LoadContentCatalogAsync(::StringW catalogPath, bool autoReleaseHandle, ::StringW providerSuffix);

  /// @brief Method LoadContentCatalogAsync, addr 0x2b5ea78, size 0xc8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  LoadContentCatalogAsync(::StringW catalogPath, ::StringW providerSuffix);

  /// @brief Method LoadResourceLocations, addr 0x2b5f1a4, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocations(::System::Object* key, ::System::Type* type);

  /// @brief Method LoadResourceLocations, addr 0x2b5ee18, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocations(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, ::System::Type* type);

  /// @brief Method LoadResourceLocationsAsync, addr 0x2b5f224, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocationsAsync(::System::Object* key, ::System::Type* type);

  /// @brief Method LoadResourceLocationsAsync, addr 0x2b5eea8, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocationsAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, ::System::Type* type);

  /// @brief Method LoadResourceLocationsAsync, addr 0x2b5f0d0, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocationsAsync(::System::Collections::IEnumerable* keys, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, ::System::Type* type);

  /// @brief Method LoadScene, addr 0x2b63a24, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadScene(::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority);

  /// @brief Method LoadScene, addr 0x2b63b9c, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadScene(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority);

  /// @brief Method LoadSceneAsync, addr 0x2b63abc, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority);

  /// @brief Method LoadSceneAsync, addr 0x2b63c34, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority);

  /// @brief Method Log, addr 0x2b5e320, size 0x98, virtual false, abstract: false, final false
  static inline void Log(::StringW msg);

  /// @brief Method LogError, addr 0x2b59964, size 0x98, virtual false, abstract: false, final false
  static inline void LogError(::StringW msg);

  /// @brief Method LogErrorFormat, addr 0x2b5a290, size 0xa8, virtual false, abstract: false, final false
  static inline void LogErrorFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogException, addr 0x2b5e678, size 0x90, virtual false, abstract: false, final false
  static inline void LogException(::System::Exception* ex);

  /// @brief Method LogException, addr 0x2b5e508, size 0xd4, virtual false, abstract: false, final false
  static inline void LogException(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op, ::System::Exception* ex);

  /// @brief Method LogFormat, addr 0x2b5e3b8, size 0xa8, virtual false, abstract: false, final false
  static inline void LogFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogWarning, addr 0x2b598cc, size 0x98, virtual false, abstract: false, final false
  static inline void LogWarning(::StringW msg);

  /// @brief Method LogWarningFormat, addr 0x2b5e460, size 0xa8, virtual false, abstract: false, final false
  static inline void LogWarningFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Release, addr 0x2b5f430, size 0xc4, virtual false, abstract: false, final false
  static inline void Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> static inline void Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> handle);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> static inline void Release(TObject obj);

  /// @brief Method ReleaseInstance, addr 0x2b5f6d4, size 0xc8, virtual false, abstract: false, final false
  static inline bool ReleaseInstance(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method ReleaseInstance, addr 0x2b5f79c, size 0xd0, virtual false, abstract: false, final false
  static inline bool ReleaseInstance(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> handle);

  /// @brief Method ReleaseInstance, addr 0x2b5f540, size 0x98, virtual false, abstract: false, final false
  static inline bool ReleaseInstance(::UnityEngine::GameObject* instance);

  /// @brief Method RemoveResourceLocator, addr 0x2b652d8, size 0x98, virtual false, abstract: false, final false
  static inline void RemoveResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator);

  /// @brief Method ResolveInternalId, addr 0x2b5d67c, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW ResolveInternalId(::StringW id);

  /// @brief Method UnloadScene, addr 0x2b6418c, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadScene(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, bool autoReleaseHandle);

  /// @brief Method UnloadScene, addr 0x2b64314, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadScene(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle, bool autoReleaseHandle);

  /// @brief Method UnloadScene, addr 0x2b649c0, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadScene(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle,
              ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle);

  /// @brief Method UnloadScene, addr 0x2b64024, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadScene(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, bool autoReleaseHandle);

  /// @brief Method UnloadSceneAsync, addr 0x2b6422c, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, bool autoReleaseHandle);

  /// @brief Method UnloadSceneAsync, addr 0x2b64778, size 0xf4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle);

  /// @brief Method UnloadSceneAsync, addr 0x2b643a4, size 0xd8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle, bool autoReleaseHandle);

  /// @brief Method UnloadSceneAsync, addr 0x2b640b4, size 0xd8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, bool autoReleaseHandle);

  /// @brief Method UnloadSceneAsync, addr 0x2b6447c, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle);

  /// @brief Method UpdateCatalogs, addr 0x2b65054, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>
  UpdateCatalogs(bool autoCleanBundleCache, ::System::Collections::Generic::IEnumerable_1<::StringW>* catalogs, bool autoReleaseHandle);

  /// @brief Method UpdateCatalogs, addr 0x2b64d64, size 0xc8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>
  UpdateCatalogs(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogs, bool autoReleaseHandle);

  static inline ::StringW getStaticF_LibraryPath();

  static inline ::UnityEngine::AddressableAssets::AddressablesImpl* getStaticF_m_AddressablesInstance();

  static inline bool getStaticF_reinitializeAddressables();

  /// @brief Method get_BuildPath, addr 0x2b5db00, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW get_BuildPath();

  /// @brief Method get_InitializationOperation, addr 0x2b5ee0c, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> get_InitializationOperation();

  /// @brief Method get_Instance, addr 0x2b5d560, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::AddressableAssets::AddressablesImpl* get_Instance();

  /// @brief Method get_InstanceProvider, addr 0x2b5d5e8, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* get_InstanceProvider();

  /// @brief Method get_InternalIdTransformFunc, addr 0x2b5d714, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* get_InternalIdTransformFunc();

  /// @brief Method get_PlayerBuildDataPath, addr 0x2b5dc6c, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW get_PlayerBuildDataPath();

  /// @brief Method get_ResourceLocators, addr 0x2b5de18, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* get_ResourceLocators();

  /// @brief Method get_ResourceManager, addr 0x2b5d4d0, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::ResourceManager* get_ResourceManager();

  /// @brief Method get_RuntimePath, addr 0x2b5dd84, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW get_RuntimePath();

  /// @brief Method get_StreamingAssetsSubFolder, addr 0x2b5da04, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW get_StreamingAssetsSubFolder();

  /// @brief Method get_WebRequestOverride, addr 0x2b5d88c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* get_WebRequestOverride();

  /// @brief Method get_m_Addressables, addr 0x2b5d478, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::AddressableAssets::AddressablesImpl* get_m_Addressables();

  static inline void setStaticF_LibraryPath(::StringW value);

  static inline void setStaticF_m_AddressablesInstance(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  static inline void setStaticF_reinitializeAddressables(bool value);

  /// @brief Method set_InternalIdTransformFunc, addr 0x2b5d7cc, size 0xa0, virtual false, abstract: false, final false
  static inline void set_InternalIdTransformFunc(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* value);

  /// @brief Method set_WebRequestOverride, addr 0x2b5d944, size 0xa0, virtual false, abstract: false, final false
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
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__Addressables__MergeMode, "UnityEngine.AddressableAssets", "Addressables/MergeMode");
NEED_NO_BOX(::UnityEngine::AddressableAssets::Addressables);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Addressables*, "UnityEngine.AddressableAssets", "Addressables");
