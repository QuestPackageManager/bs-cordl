#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Addressables)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct InstantiationParameters;
}
namespace UnityEngine::SceneManagement {
struct UnloadSceneOptions;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IInstanceProvider;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace System {
class Object;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace UnityEngine::AddressableAssets {
struct __Addressables__MergeMode;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace System {
class Exception;
}
namespace UnityEngine {
class Transform;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14049))
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10375)), TypeDefinitionIndex(TypeDefinitionIndex(10036)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14050))
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

  /// @brief Method get_m_Addressables, addr 0x2a13000, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::AddressableAssets::AddressablesImpl* get_m_Addressables();

  /// @brief Method get_ResourceManager, addr 0x2a13058, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::ResourceManager* get_ResourceManager();

  /// @brief Method get_Instance, addr 0x2a130e8, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::AddressableAssets::AddressablesImpl* get_Instance();

  /// @brief Method get_InstanceProvider, addr 0x2a13170, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* get_InstanceProvider();

  /// @brief Method ResolveInternalId, addr 0x2a13204, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW ResolveInternalId(::StringW id);

  /// @brief Method get_InternalIdTransformFunc, addr 0x2a1329c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* get_InternalIdTransformFunc();

  /// @brief Method set_InternalIdTransformFunc, addr 0x2a13354, size 0xa0, virtual false, abstract: false, final false
  static inline void set_InternalIdTransformFunc(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* value);

  /// @brief Method get_WebRequestOverride, addr 0x2a13414, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* get_WebRequestOverride();

  /// @brief Method set_WebRequestOverride, addr 0x2a134cc, size 0xa0, virtual false, abstract: false, final false
  static inline void set_WebRequestOverride(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* value);

  /// @brief Method get_StreamingAssetsSubFolder, addr 0x2a1358c, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW get_StreamingAssetsSubFolder();

  /// @brief Method get_BuildPath, addr 0x2a13688, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW get_BuildPath();

  /// @brief Method get_PlayerBuildDataPath, addr 0x2a137f4, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW get_PlayerBuildDataPath();

  /// @brief Method get_RuntimePath, addr 0x2a1390c, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW get_RuntimePath();

  /// @brief Method get_ResourceLocators, addr 0x2a139a0, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* get_ResourceLocators();

  /// @brief Method InternalSafeSerializationLog, addr 0x2a13a30, size 0x114, virtual false, abstract: false, final false
  /// @param logType: ::UnityEngine::LogType (default: static_cast<int32_t>(0x3))
  static inline void InternalSafeSerializationLog(::StringW msg, ::UnityEngine::LogType logType = static_cast<int32_t>(0x3));

  /// @brief Method InternalSafeSerializationLogFormat, addr 0x2a13c4c, size 0x124, virtual false, abstract: false, final false
  /// @param logType: ::UnityEngine::LogType (default: static_cast<int32_t>(0x3))
  static inline void InternalSafeSerializationLogFormat(::StringW format, ::UnityEngine::LogType logType = static_cast<int32_t>(0x3), ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Log, addr 0x2a13ea8, size 0x98, virtual false, abstract: false, final false
  static inline void Log(::StringW msg);

  /// @brief Method LogFormat, addr 0x2a13f40, size 0xa8, virtual false, abstract: false, final false
  static inline void LogFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogWarning, addr 0x2a0f454, size 0x98, virtual false, abstract: false, final false
  static inline void LogWarning(::StringW msg);

  /// @brief Method LogWarningFormat, addr 0x2a13fe8, size 0xa8, virtual false, abstract: false, final false
  static inline void LogWarningFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogError, addr 0x2a0f4ec, size 0x98, virtual false, abstract: false, final false
  static inline void LogError(::StringW msg);

  /// @brief Method LogException, addr 0x2a14090, size 0xd4, virtual false, abstract: false, final false
  static inline void LogException(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op, ::System::Exception* ex);

  /// @brief Method LogException, addr 0x2a14200, size 0x90, virtual false, abstract: false, final false
  static inline void LogException(::System::Exception* ex);

  /// @brief Method LogErrorFormat, addr 0x2a0fe18, size 0xa8, virtual false, abstract: false, final false
  static inline void LogErrorFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Initialize, addr 0x2a14294, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> Initialize();

  /// @brief Method InitializeAsync, addr 0x2a142fc, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> InitializeAsync();

  /// @brief Method InitializeAsync, addr 0x2a14434, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  InitializeAsync(bool autoReleaseHandle);

  /// @brief Method LoadContentCatalog, addr 0x2a14580, size 0x80, virtual false, abstract: false, final false
  /// @param providerSuffix: ::StringW (default: nullptr)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  LoadContentCatalog(::StringW catalogPath, ::StringW providerSuffix = nullptr);

  /// @brief Method LoadContentCatalogAsync, addr 0x2a14600, size 0xc8, virtual false, abstract: false, final false
  /// @param providerSuffix: ::StringW (default: nullptr)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  LoadContentCatalogAsync(::StringW catalogPath, ::StringW providerSuffix = nullptr);

  /// @brief Method LoadContentCatalogAsync, addr 0x2a148c0, size 0xd4, virtual false, abstract: false, final false
  /// @param providerSuffix: ::StringW (default: nullptr)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  LoadContentCatalogAsync(::StringW catalogPath, bool autoReleaseHandle, ::StringW providerSuffix = nullptr);

  /// @brief Method get_InitializationOperation, addr 0x2a14994, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> get_InitializationOperation();

  /// @brief Method LoadAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAsset(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method LoadAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAsset(::System::Object* key);

  /// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync(::System::Object* key);

  /// @brief Method LoadResourceLocations, addr 0x2a149a0, size 0x90, virtual false, abstract: false, final false
  /// @param type: ::System::Type* (default: nullptr)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocations(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, ::System::Type* type = nullptr);

  /// @brief Method LoadResourceLocationsAsync, addr 0x2a14a30, size 0xd4, virtual false, abstract: false, final false
  /// @param type: ::System::Type* (default: nullptr)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocationsAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, ::System::Type* type = nullptr);

  /// @brief Method LoadResourceLocationsAsync, addr 0x2a14c58, size 0xd4, virtual false, abstract: false, final false
  /// @param type: ::System::Type* (default: nullptr)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocationsAsync(::System::Collections::IEnumerable* keys, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, ::System::Type* type = nullptr);

  /// @brief Method LoadResourceLocations, addr 0x2a14d2c, size 0x80, virtual false, abstract: false, final false
  /// @param type: ::System::Type* (default: nullptr)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocations(::System::Object* key, ::System::Type* type = nullptr);

  /// @brief Method LoadResourceLocationsAsync, addr 0x2a14dac, size 0xc4, virtual false, abstract: false, final false
  /// @param type: ::System::Type* (default: nullptr)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
  LoadResourceLocationsAsync(::System::Object* key, ::System::Type* type = nullptr);

  /// @brief Method LoadAssets, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssets(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, ::System::Action_1<TObject>* callback);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, ::System::Action_1<TObject>* callback);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, ::System::Action_1<TObject>* callback,
                  bool releaseDependenciesOnFailure);

  /// @brief Method LoadAssets, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssets(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::System::Action_1<TObject>* callback, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::System::Action_1<TObject>* callback, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::IEnumerable* keys, ::System::Action_1<TObject>* callback, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::System::Action_1<TObject>* callback, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode,
                  bool releaseDependenciesOnFailure);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Collections::IEnumerable* keys, ::System::Action_1<TObject>* callback, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, bool releaseDependenciesOnFailure);

  /// @brief Method LoadAssets, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> LoadAssets(::System::Object* key,
                                                                                                                                                         ::System::Action_1<TObject>* callback);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> LoadAssetsAsync(::System::Object* key,
                                                                                                                                                              ::System::Action_1<TObject>* callback);

  /// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  LoadAssetsAsync(::System::Object* key, ::System::Action_1<TObject>* callback, bool releaseDependenciesOnFailure);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> static inline void Release(TObject obj);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> static inline void Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> handle);

  /// @brief Method Release, addr 0x2a14fb8, size 0xc4, virtual false, abstract: false, final false
  static inline void Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method ReleaseInstance, addr 0x2a150c8, size 0x98, virtual false, abstract: false, final false
  static inline bool ReleaseInstance(::UnityEngine::GameObject* instance);

  /// @brief Method ReleaseInstance, addr 0x2a1525c, size 0xc8, virtual false, abstract: false, final false
  static inline bool ReleaseInstance(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method ReleaseInstance, addr 0x2a15324, size 0xd0, virtual false, abstract: false, final false
  static inline bool ReleaseInstance(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> handle);

  /// @brief Method GetDownloadSize, addr 0x2a153f4, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSize(::System::Object* key);

  /// @brief Method GetDownloadSizeAsync, addr 0x2a1546c, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::System::Object* key);

  /// @brief Method GetDownloadSizeAsync, addr 0x2a155e4, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::StringW key);

  /// @brief Method GetDownloadSizeAsync, addr 0x2a156a0, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys);

  /// @brief Method GetDownloadSizeAsync, addr 0x2a16590, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::System::Collections::IEnumerable* keys);

  /// @brief Method DownloadDependencies, addr 0x2a1664c, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependencies(::System::Object* key);

  /// @brief Method DownloadDependenciesAsync, addr 0x2a166cc, size 0xcc, virtual false, abstract: false, final false
  /// @param autoReleaseHandle: bool (default: false)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependenciesAsync(::System::Object* key, bool autoReleaseHandle = false);

  /// @brief Method DownloadDependenciesAsync, addr 0x2a16a14, size 0xcc, virtual false, abstract: false, final false
  /// @param autoReleaseHandle: bool (default: false)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
  DownloadDependenciesAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, bool autoReleaseHandle = false);

  /// @brief Method DownloadDependenciesAsync, addr 0x2a16c20, size 0xd8, virtual false, abstract: false, final false
  /// @param autoReleaseHandle: bool (default: false)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
  DownloadDependenciesAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, bool autoReleaseHandle = false);

  /// @brief Method DownloadDependenciesAsync, addr 0x2a16f84, size 0xd8, virtual false, abstract: false, final false
  /// @param autoReleaseHandle: bool (default: false)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
  DownloadDependenciesAsync(::System::Collections::IEnumerable* keys, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, bool autoReleaseHandle = false);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2a1705c, size 0xac, virtual false, abstract: false, final false
  static inline void ClearDependencyCacheAsync(::System::Object* key);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2a17358, size 0xac, virtual false, abstract: false, final false
  static inline void ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2a17914, size 0xac, virtual false, abstract: false, final false
  static inline void ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2a17edc, size 0xac, virtual false, abstract: false, final false
  static inline void ClearDependencyCacheAsync(::System::Collections::IEnumerable* keys);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2a17f88, size 0xac, virtual false, abstract: false, final false
  static inline void ClearDependencyCacheAsync(::StringW key);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2a18034, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::System::Object* key, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2a180f8, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
  ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2a181bc, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys,
                                                                                                                           bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2a18280, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::System::Collections::IEnumerable* keys, bool autoReleaseHandle);

  /// @brief Method ClearDependencyCacheAsync, addr 0x2a18344, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::StringW key, bool autoReleaseHandle);

  /// @brief Method Instantiate, addr 0x2a18408, size 0xc4, virtual false, abstract: false, final false
  /// @param parent: ::UnityEngine::Transform* (default: nullptr)
  /// @param instantiateInWorldSpace: bool (default: false)
  /// @param trackHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>
  Instantiate(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Transform* parent = nullptr, bool instantiateInWorldSpace = false,
              bool trackHandle = true);

  /// @brief Method Instantiate, addr 0x2a185c0, size 0xe8, virtual false, abstract: false, final false
  /// @param parent: ::UnityEngine::Transform* (default: nullptr)
  /// @param trackHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>
  Instantiate(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
              ::UnityEngine::Transform* parent = nullptr, bool trackHandle = true);

  /// @brief Method Instantiate, addr 0x2a187d4, size 0x98, virtual false, abstract: false, final false
  /// @param parent: ::UnityEngine::Transform* (default: nullptr)
  /// @param instantiateInWorldSpace: bool (default: false)
  /// @param trackHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> Instantiate(::System::Object* key, ::UnityEngine::Transform* parent = nullptr,
                                                                                                                                   bool instantiateInWorldSpace = false, bool trackHandle = true);

  /// @brief Method Instantiate, addr 0x2a18948, size 0xe8, virtual false, abstract: false, final false
  /// @param parent: ::UnityEngine::Transform* (default: nullptr)
  /// @param trackHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>
  Instantiate(::System::Object* key, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent = nullptr, bool trackHandle = true);

  /// @brief Method Instantiate, addr 0x2a18b5c, size 0xb0, virtual false, abstract: false, final false
  /// @param trackHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>
  Instantiate(::System::Object* key, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle = true);

  /// @brief Method Instantiate, addr 0x2a18d00, size 0xb0, virtual false, abstract: false, final false
  /// @param trackHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>
  Instantiate(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters,
              bool trackHandle = true);

  /// @brief Method InstantiateAsync, addr 0x2a18db0, size 0x10c, virtual false, abstract: false, final false
  /// @param parent: ::UnityEngine::Transform* (default: nullptr)
  /// @param instantiateInWorldSpace: bool (default: false)
  /// @param trackHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>
  InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Transform* parent = nullptr, bool instantiateInWorldSpace = false,
                   bool trackHandle = true);

  /// @brief Method InstantiateAsync, addr 0x2a186a8, size 0x12c, virtual false, abstract: false, final false
  /// @param parent: ::UnityEngine::Transform* (default: nullptr)
  /// @param trackHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>
  InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                   ::UnityEngine::Transform* parent = nullptr, bool trackHandle = true);

  /// @brief Method InstantiateAsync, addr 0x2a1886c, size 0xdc, virtual false, abstract: false, final false
  /// @param parent: ::UnityEngine::Transform* (default: nullptr)
  /// @param instantiateInWorldSpace: bool (default: false)
  /// @param trackHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>
  InstantiateAsync(::System::Object* key, ::UnityEngine::Transform* parent = nullptr, bool instantiateInWorldSpace = false, bool trackHandle = true);

  /// @brief Method InstantiateAsync, addr 0x2a18a30, size 0x12c, virtual false, abstract: false, final false
  /// @param parent: ::UnityEngine::Transform* (default: nullptr)
  /// @param trackHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>
  InstantiateAsync(::System::Object* key, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent = nullptr, bool trackHandle = true);

  /// @brief Method InstantiateAsync, addr 0x2a18c0c, size 0xf4, virtual false, abstract: false, final false
  /// @param trackHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>
  InstantiateAsync(::System::Object* key, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle = true);

  /// @brief Method InstantiateAsync, addr 0x2a184cc, size 0xf4, virtual false, abstract: false, final false
  /// @param trackHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>
  InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                   ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle = true);

  /// @brief Method LoadScene, addr 0x2a195ac, size 0x98, virtual false, abstract: false, final false
  /// @param loadMode: ::UnityEngine::SceneManagement::LoadSceneMode (default: static_cast<int32_t>(0x0))
  /// @param activateOnLoad: bool (default: true)
  /// @param priority: int32_t (default: static_cast<int32_t>(0x64))
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadScene(::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneMode loadMode = static_cast<int32_t>(0x0), bool activateOnLoad = true, int32_t priority = static_cast<int32_t>(0x64));

  /// @brief Method LoadScene, addr 0x2a19724, size 0x98, virtual false, abstract: false, final false
  /// @param loadMode: ::UnityEngine::SceneManagement::LoadSceneMode (default: static_cast<int32_t>(0x0))
  /// @param activateOnLoad: bool (default: true)
  /// @param priority: int32_t (default: static_cast<int32_t>(0x64))
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadScene(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneMode loadMode = static_cast<int32_t>(0x0),
            bool activateOnLoad = true, int32_t priority = static_cast<int32_t>(0x64));

  /// @brief Method LoadSceneAsync, addr 0x2a19644, size 0xe0, virtual false, abstract: false, final false
  /// @param loadMode: ::UnityEngine::SceneManagement::LoadSceneMode (default: static_cast<int32_t>(0x0))
  /// @param activateOnLoad: bool (default: true)
  /// @param priority: int32_t (default: static_cast<int32_t>(0x64))
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneMode loadMode = static_cast<int32_t>(0x0), bool activateOnLoad = true, int32_t priority = static_cast<int32_t>(0x64));

  /// @brief Method LoadSceneAsync, addr 0x2a197bc, size 0xe0, virtual false, abstract: false, final false
  /// @param loadMode: ::UnityEngine::SceneManagement::LoadSceneMode (default: static_cast<int32_t>(0x0))
  /// @param activateOnLoad: bool (default: true)
  /// @param priority: int32_t (default: static_cast<int32_t>(0x64))
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneMode loadMode = static_cast<int32_t>(0x0),
                 bool activateOnLoad = true, int32_t priority = static_cast<int32_t>(0x64));

  /// @brief Method UnloadScene, addr 0x2a19bac, size 0x90, virtual false, abstract: false, final false
  /// @param autoReleaseHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadScene(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, bool autoReleaseHandle = true);

  /// @brief Method UnloadScene, addr 0x2a19d14, size 0xa0, virtual false, abstract: false, final false
  /// @param autoReleaseHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadScene(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, bool autoReleaseHandle = true);

  /// @brief Method UnloadScene, addr 0x2a19e9c, size 0x90, virtual false, abstract: false, final false
  /// @param autoReleaseHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadScene(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle, bool autoReleaseHandle = true);

  /// @brief Method UnloadSceneAsync, addr 0x2a1a004, size 0xdc, virtual false, abstract: false, final false
  /// @param autoReleaseHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle = true);

  /// @brief Method UnloadSceneAsync, addr 0x2a1a300, size 0xf4, virtual false, abstract: false, final false
  /// @param autoReleaseHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle = true);

  /// @brief Method UnloadScene, addr 0x2a1a548, size 0xe0, virtual false, abstract: false, final false
  /// @param autoReleaseHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadScene(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle,
              ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle = true);

  /// @brief Method UnloadSceneAsync, addr 0x2a19c3c, size 0xd8, virtual false, abstract: false, final false
  /// @param autoReleaseHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, bool autoReleaseHandle = true);

  /// @brief Method UnloadSceneAsync, addr 0x2a19db4, size 0xe8, virtual false, abstract: false, final false
  /// @param autoReleaseHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, bool autoReleaseHandle = true);

  /// @brief Method UnloadSceneAsync, addr 0x2a19f2c, size 0xd8, virtual false, abstract: false, final false
  /// @param autoReleaseHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle,
                   bool autoReleaseHandle = true);

  /// @brief Method CheckForCatalogUpdates, addr 0x2a1a6f0, size 0xbc, virtual false, abstract: false, final false
  /// @param autoReleaseHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> CheckForCatalogUpdates(bool autoReleaseHandle = true);

  /// @brief Method UpdateCatalogs, addr 0x2a1a8ec, size 0xc8, virtual false, abstract: false, final false
  /// @param catalogs: ::System::Collections::Generic::IEnumerable_1<::StringW>* (default: nullptr)
  /// @param autoReleaseHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>
  UpdateCatalogs(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogs = nullptr, bool autoReleaseHandle = true);

  /// @brief Method UpdateCatalogs, addr 0x2a1abdc, size 0xd4, virtual false, abstract: false, final false
  /// @param catalogs: ::System::Collections::Generic::IEnumerable_1<::StringW>* (default: nullptr)
  /// @param autoReleaseHandle: bool (default: true)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>
  UpdateCatalogs(bool autoCleanBundleCache, ::System::Collections::Generic::IEnumerable_1<::StringW>* catalogs = nullptr, bool autoReleaseHandle = true);

  /// @brief Method AddResourceLocator, addr 0x2a1acb0, size 0xb0, virtual false, abstract: false, final false
  /// @param localCatalogHash: ::StringW (default: nullptr)
  /// @param remoteCatalogLocation: ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* (default: nullptr)
  static inline void AddResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator, ::StringW localCatalogHash = nullptr,
                                        ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteCatalogLocation = nullptr);

  /// @brief Method RemoveResourceLocator, addr 0x2a1ae60, size 0x98, virtual false, abstract: false, final false
  static inline void RemoveResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator);

  /// @brief Method ClearResourceLocators, addr 0x2a1afd4, size 0x90, virtual false, abstract: false, final false
  static inline void ClearResourceLocators();

  /// @brief Method CleanBundleCache, addr 0x2a1b0d4, size 0xc0, virtual false, abstract: false, final false
  /// @param catalogsIds: ::System::Collections::Generic::IEnumerable_1<::StringW>* (default: nullptr)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> CleanBundleCache(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogsIds = nullptr);

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
