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
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace System {
class Exception;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IInstanceProvider;
}
namespace UnityEngine::SceneManagement {
struct UnloadSceneOptions;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::AddressableAssets {
struct __Addressables__MergeMode;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct InstantiationParameters;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine {
struct LogType;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14320))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Addressables__MergeMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Addressables__MergeMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::AddressableAssets::__Addressables__MergeMode const None;

  /// @brief Field UseFirst value: static_cast<int32_t>(0x0)
  static ::UnityEngine::AddressableAssets::__Addressables__MergeMode const UseFirst;

  /// @brief Field Union value: static_cast<int32_t>(0x1)
  static ::UnityEngine::AddressableAssets::__Addressables__MergeMode const Union;

  /// @brief Field Intersection value: static_cast<int32_t>(0x2)
  static ::UnityEngine::AddressableAssets::__Addressables__MergeMode const Intersection;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14321))
// CS Name: ::UnityEngine.AddressableAssets::Addressables*
class CORDL_TYPE Addressables : public ::System::Object {
public:
  // Declarations
  using MergeMode = ::UnityEngine::AddressableAssets::__Addressables__MergeMode;

  /// @brief Field reinitializeAddressables, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_reinitializeAddressables, put = setStaticF_reinitializeAddressables)) bool reinitializeAddressables;

  /// @brief Field m_AddressablesInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_AddressablesInstance, put = setStaticF_m_AddressablesInstance))::UnityEngine::AddressableAssets::AddressablesImpl* m_AddressablesInstance;

  /// @brief Field LibraryPath, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_LibraryPath, put = setStaticF_LibraryPath))::StringW LibraryPath;

  static inline void setStaticF_reinitializeAddressables(bool value);

  static inline bool getStaticF_reinitializeAddressables();

  static inline void setStaticF_m_AddressablesInstance(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  static inline ::UnityEngine::AddressableAssets::AddressablesImpl* getStaticF_m_AddressablesInstance();

  static inline void setStaticF_LibraryPath(::StringW value);

  static inline ::StringW getStaticF_LibraryPath();

  /// @brief Method get_m_Addressables addr 0x28952b8 size 0x58 virtual false final false
  static inline ::UnityEngine::AddressableAssets::AddressablesImpl* get_m_Addressables();

  /// @brief Method get_ResourceManager addr 0x2895310 size 0x90 virtual false final false
  static inline ::UnityEngine::ResourceManagement::ResourceManager* get_ResourceManager();

  /// @brief Method get_Instance addr 0x28953a0 size 0x88 virtual false final false
  static inline ::UnityEngine::AddressableAssets::AddressablesImpl* get_Instance();

  /// @brief Method get_InstanceProvider addr 0x2895428 size 0x94 virtual false final false
  static inline ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* get_InstanceProvider();

  /// @brief Method ResolveInternalId addr 0x28954bc size 0x98 virtual false final false
  static inline ::StringW ResolveInternalId(::StringW id);

  /// @brief Method get_InternalIdTransformFunc addr 0x2895554 size 0x9c virtual false final false
  static inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* get_InternalIdTransformFunc();

  /// @brief Method set_InternalIdTransformFunc addr 0x289560c size 0xa0 virtual false final false
  static inline void set_InternalIdTransformFunc(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* value);

  /// @brief Method get_WebRequestOverride addr 0x28956cc size 0x9c virtual false final false
  static inline ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* get_WebRequestOverride();

  /// @brief Method set_WebRequestOverride addr 0x2895784 size 0xa0 virtual false final false
  static inline void set_WebRequestOverride(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* value);

  /// @brief Method get_StreamingAssetsSubFolder addr 0x2895844 size 0xbc virtual false final false
  static inline ::StringW get_StreamingAssetsSubFolder();

  /// @brief Method get_BuildPath addr 0x2895940 size 0x90 virtual false final false
  static inline ::StringW get_BuildPath();

  /// @brief Method get_PlayerBuildDataPath addr 0x2895aac size 0x90 virtual false final false
  static inline ::StringW get_PlayerBuildDataPath();

  /// @brief Method get_RuntimePath addr 0x2895bc4 size 0x90 virtual false final false
  static inline ::StringW get_RuntimePath();

  /// @brief Method get_ResourceLocators addr 0x2895c58 size 0x90 virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* get_ResourceLocators();

  /// @brief Method InternalSafeSerializationLog addr 0x2895ce8 size 0x114 virtual false final false
  static inline void InternalSafeSerializationLog(::StringW msg, ::UnityEngine::LogType logType);

  /// @brief Method InternalSafeSerializationLogFormat addr 0x2895f04 size 0x124 virtual false final false
  static inline void InternalSafeSerializationLogFormat(::StringW format, ::UnityEngine::LogType logType, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Log addr 0x2896160 size 0x98 virtual false final false
  static inline void Log(::StringW msg);

  /// @brief Method LogFormat addr 0x28961f8 size 0xa8 virtual false final false
  static inline void LogFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogWarning addr 0x289170c size 0x98 virtual false final false
  static inline void LogWarning(::StringW msg);

  /// @brief Method LogWarningFormat addr 0x28962a0 size 0xa8 virtual false final false
  static inline void LogWarningFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogError addr 0x28917a4 size 0x98 virtual false final false
  static inline void LogError(::StringW msg);

  /// @brief Method LogException addr 0x2896348 size 0xd4 virtual false final false
  static inline void LogException(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op, ::System::Exception* ex);

  /// @brief Method LogException addr 0x28964b8 size 0x90 virtual false final false
  static inline void LogException(::System::Exception* ex);

  /// @brief Method LogErrorFormat addr 0x28920d0 size 0xa8 virtual false final false
  static inline void LogErrorFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Initialize addr 0x289654c size 0x68 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> Initialize();

  /// @brief Method InitializeAsync addr 0x28965b4 size 0xac virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> InitializeAsync();

  /// @brief Method InitializeAsync addr 0x28966ec size 0xbc virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  InitializeAsync(bool autoReleaseHandle);

  /// @brief Method LoadContentCatalog addr 0x2896838 size 0x80 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  LoadContentCatalog(::StringW catalogPath, ::StringW providerSuffix);

  /// @brief Method LoadContentCatalogAsync addr 0x28968b8 size 0xc8 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  LoadContentCatalogAsync(::StringW catalogPath, ::StringW providerSuffix);

  /// @brief Method LoadContentCatalogAsync addr 0x2896b78 size 0xd4 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  LoadContentCatalogAsync(::StringW catalogPath, bool autoReleaseHandle, ::StringW providerSuffix);

  /// @brief Method get_InitializationOperation addr 0x2896c4c size 0xc virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> get_InitializationOperation();

  /// @brief Method LoadAsset addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAsset(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method LoadAsset addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObject> static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAsset(::System::Object* key);

  /// @brief Method LoadAssetAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method LoadAssetAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObject> static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync(::System::Object* key);

  /// @brief Method LoadResourceLocations addr 0x2896c58 size 0x90 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocations(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, ::System::Type* type);

  /// @brief Method LoadResourceLocationsAsync addr 0x2896ce8 size 0xd4 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocationsAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, ::System::Type* type);

  /// @brief Method LoadResourceLocationsAsync addr 0x2896f10 size 0xd4 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocationsAsync(::System::Collections::IEnumerable* keys, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, ::System::Type* type);

  /// @brief Method LoadResourceLocations addr 0x2896fe4 size 0x80 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocations(::System::Object* key, ::System::Type* type);

  /// @brief Method LoadResourceLocationsAsync addr 0x2897064 size 0xc4 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocationsAsync(::System::Object* key, ::System::Type* type);

  /// @brief Method LoadAssets addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssets(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, ::System::Action_1<TObject>* callback);

  /// @brief Method LoadAssetsAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, ::System::Action_1<TObject>* callback);

  /// @brief Method LoadAssetsAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, ::System::Action_1<TObject>* callback,
                  bool releaseDependenciesOnFailure);

  /// @brief Method LoadAssets addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssets(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::System::Action_1<TObject>* callback, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode);

  /// @brief Method LoadAssetsAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::System::Action_1<TObject>* callback, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode);

  /// @brief Method LoadAssetsAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::IEnumerable* keys, ::System::Action_1<TObject>* callback, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode);

  /// @brief Method LoadAssetsAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::System::Action_1<TObject>* callback, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode,
                  bool releaseDependenciesOnFailure);

  /// @brief Method LoadAssetsAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::IEnumerable* keys, ::System::Action_1<TObject>* callback, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, bool releaseDependenciesOnFailure);

  /// @brief Method LoadAssets addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> LoadAssets(::System::Object* key,
                                                                                                                                                         ::System::Action_1<TObject>* callback);

  /// @brief Method LoadAssetsAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> LoadAssetsAsync(::System::Object* key,
                                                                                                                                                              ::System::Action_1<TObject>* callback);

  /// @brief Method LoadAssetsAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Object* key, ::System::Action_1<TObject>* callback, bool releaseDependenciesOnFailure);

  /// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObject> static inline void Release(TObject obj);

  /// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObject> static inline void Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> handle);

  /// @brief Method Release addr 0x2897270 size 0xc4 virtual false final false
  static inline void Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method ReleaseInstance addr 0x2897380 size 0x98 virtual false final false
  static inline bool ReleaseInstance(::UnityEngine::GameObject* instance);

  /// @brief Method ReleaseInstance addr 0x2897514 size 0xc8 virtual false final false
  static inline bool ReleaseInstance(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method ReleaseInstance addr 0x28975dc size 0xd0 virtual false final false
  static inline bool ReleaseInstance(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> handle);

  /// @brief Method GetDownloadSize addr 0x28976ac size 0x78 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSize(::System::Object* key);

  /// @brief Method GetDownloadSizeAsync addr 0x2897724 size 0xbc virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::System::Object* key);

  /// @brief Method GetDownloadSizeAsync addr 0x289789c size 0xbc virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::StringW key);

  /// @brief Method GetDownloadSizeAsync addr 0x2897958 size 0xbc virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys);

  /// @brief Method GetDownloadSizeAsync addr 0x2898848 size 0xbc virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::System::Collections::IEnumerable* keys);

  /// @brief Method DownloadDependencies addr 0x2898904 size 0x80 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependencies(::System::Object* key);

  /// @brief Method DownloadDependenciesAsync addr 0x2898984 size 0xcc virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependenciesAsync(::System::Object* key, bool autoReleaseHandle);

  /// @brief Method DownloadDependenciesAsync addr 0x2898ccc size 0xcc virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
  DownloadDependenciesAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, bool autoReleaseHandle);

  /// @brief Method DownloadDependenciesAsync addr 0x2898ed8 size 0xd8 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
  DownloadDependenciesAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, bool autoReleaseHandle);

  /// @brief Method DownloadDependenciesAsync addr 0x289923c size 0xd8 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
  DownloadDependenciesAsync(::System::Collections::IEnumerable* keys, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync addr 0x2899314 size 0xac virtual false final false
  static inline void ClearDependencyCacheAsync(::System::Object* key);

  /// @brief Method ClearDependencyCacheAsync addr 0x2899610 size 0xac virtual false final false
  static inline void ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations);

  /// @brief Method ClearDependencyCacheAsync addr 0x2899bcc size 0xac virtual false final false
  static inline void ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys);

  /// @brief Method ClearDependencyCacheAsync addr 0x289a194 size 0xac virtual false final false
  static inline void ClearDependencyCacheAsync(::System::Collections::IEnumerable* keys);

  /// @brief Method ClearDependencyCacheAsync addr 0x289a240 size 0xac virtual false final false
  static inline void ClearDependencyCacheAsync(::StringW key);

  /// @brief Method ClearDependencyCacheAsync addr 0x289a2ec size 0xc4 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::System::Object* key, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync addr 0x289a3b0 size 0xc4 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
  ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync addr 0x289a474 size 0xc4 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys,
                                                                                                                           bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync addr 0x289a538 size 0xc4 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::System::Collections::IEnumerable* keys, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync addr 0x289a5fc size 0xc4 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::StringW key, bool autoReleaseHandle);

  /// @brief Method Instantiate addr 0x289a6c0 size 0xc4 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>
  Instantiate(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Transform* parent, bool instantiateInWorldSpace, bool trackHandle);

  /// @brief Method Instantiate addr 0x289a878 size 0xe8 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>
  Instantiate(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent,
              bool trackHandle);

  /// @brief Method Instantiate addr 0x289aa8c size 0x98 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> Instantiate(::System::Object* key, ::UnityEngine::Transform* parent,
                                                                                                                                   bool instantiateInWorldSpace, bool trackHandle);

  /// @brief Method Instantiate addr 0x289ac00 size 0xe8 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>
  Instantiate(::System::Object* key, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent, bool trackHandle);

  /// @brief Method Instantiate addr 0x289ae14 size 0xb0 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>
  Instantiate(::System::Object* key, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle);

  /// @brief Method Instantiate addr 0x289afb8 size 0xb0 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>
  Instantiate(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters,
              bool trackHandle);

  /// @brief Method InstantiateAsync addr 0x289b068 size 0x10c virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>
  InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Transform* parent, bool instantiateInWorldSpace, bool trackHandle);

  /// @brief Method InstantiateAsync addr 0x289a960 size 0x12c virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>
  InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                   ::UnityEngine::Transform* parent, bool trackHandle);

  /// @brief Method InstantiateAsync addr 0x289ab24 size 0xdc virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> InstantiateAsync(::System::Object* key, ::UnityEngine::Transform* parent,
                                                                                                                                        bool instantiateInWorldSpace, bool trackHandle);

  /// @brief Method InstantiateAsync addr 0x289ace8 size 0x12c virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>
  InstantiateAsync(::System::Object* key, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent, bool trackHandle);

  /// @brief Method InstantiateAsync addr 0x289aec4 size 0xf4 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>
  InstantiateAsync(::System::Object* key, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle);

  /// @brief Method InstantiateAsync addr 0x289a784 size 0xf4 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>
  InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                   ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle);

  /// @brief Method LoadScene addr 0x289b864 size 0x98 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadScene(::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority);

  /// @brief Method LoadScene addr 0x289b9dc size 0x98 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadScene(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority);

  /// @brief Method LoadSceneAsync addr 0x289b8fc size 0xe0 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority);

  /// @brief Method LoadSceneAsync addr 0x289ba74 size 0xe0 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority);

  /// @brief Method UnloadScene addr 0x289be64 size 0x90 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadScene(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, bool autoReleaseHandle);

  /// @brief Method UnloadScene addr 0x289bfcc size 0xa0 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadScene(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, bool autoReleaseHandle);

  /// @brief Method UnloadScene addr 0x289c154 size 0x90 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadScene(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle, bool autoReleaseHandle);

  /// @brief Method UnloadSceneAsync addr 0x289c2bc size 0xdc virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle);

  /// @brief Method UnloadSceneAsync addr 0x289c5b8 size 0xf4 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle);

  /// @brief Method UnloadScene addr 0x289c800 size 0xe0 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadScene(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle,
              ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle);

  /// @brief Method UnloadSceneAsync addr 0x289bef4 size 0xd8 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, bool autoReleaseHandle);

  /// @brief Method UnloadSceneAsync addr 0x289c06c size 0xe8 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, bool autoReleaseHandle);

  /// @brief Method UnloadSceneAsync addr 0x289c1e4 size 0xd8 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle, bool autoReleaseHandle);

  /// @brief Method CheckForCatalogUpdates addr 0x289c9a8 size 0xbc virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> CheckForCatalogUpdates(bool autoReleaseHandle);

  /// @brief Method UpdateCatalogs addr 0x289cba4 size 0xc8 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>
  UpdateCatalogs(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogs, bool autoReleaseHandle);

  /// @brief Method UpdateCatalogs addr 0x289ce94 size 0xd4 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>
  UpdateCatalogs(bool autoCleanBundleCache, ::System::Collections::Generic::IEnumerable_1<::StringW>* catalogs, bool autoReleaseHandle);

  /// @brief Method AddResourceLocator addr 0x289cf68 size 0xb0 virtual false final false
  static inline void AddResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator, ::StringW localCatalogHash,
                                        ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteCatalogLocation);

  /// @brief Method RemoveResourceLocator addr 0x289d118 size 0x98 virtual false final false
  static inline void RemoveResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator);

  /// @brief Method ClearResourceLocators addr 0x289d28c size 0x90 virtual false final false
  static inline void ClearResourceLocators();

  /// @brief Method CleanBundleCache addr 0x289d38c size 0xc0 virtual false final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> CleanBundleCache(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogsIds);

  // Ctor Parameters [CppParam { name: "", ty: "Addressables", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Addressables(Addressables&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Addressables", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Addressables(Addressables const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Addressables();

public:
  /// @brief Field kAddressablesRuntimeDataPath offset 0xffffffff size 0x8
  static constexpr ::ConstString kAddressablesRuntimeDataPath{ u"AddressablesRuntimeDataPath" };

  /// @brief Field k_AddressablesLogConditional offset 0xffffffff size 0x8
  static constexpr ::ConstString k_AddressablesLogConditional{ u"ADDRESSABLES_LOG_ALL" };

  /// @brief Field kAddressablesRuntimeBuildLogPath offset 0xffffffff size 0x8
  static constexpr ::ConstString kAddressablesRuntimeBuildLogPath{ u"AddressablesRuntimeBuildLog" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Addressables, 0x10>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__Addressables__MergeMode, "UnityEngine.AddressableAssets", "Addressables/MergeMode");
NEED_NO_BOX(::UnityEngine::AddressableAssets::Addressables);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Addressables*, "UnityEngine.AddressableAssets", "Addressables");
