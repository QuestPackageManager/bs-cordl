#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_GenerateOptions_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_BaseSync)
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
class HEU_GeneratedOutput;
}
namespace HoudiniEngineUnity {
class HEU_LoadBufferBase;
}
namespace HoudiniEngineUnity {
class HEU_LoadBufferInstancer;
}
namespace HoudiniEngineUnity {
class HEU_LoadBufferMesh;
}
namespace HoudiniEngineUnity {
class HEU_LoadBufferVolume;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_ThreadedTaskLoadGeo;
}
namespace HoudiniEngineUnity {
class __HEU_ThreadedTaskLoadGeo__HEU_LoadData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_BaseSync;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_BaseSync);
// Type: HoudiniEngineUnity::HEU_BaseSync
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 125, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_BaseSync*
class CORDL_TYPE HEU_BaseSync : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _cookNodeID, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__cookNodeID, put = __cordl_internal_set__cookNodeID)) int32_t _cookNodeID;

  /// @brief Field _deleteParent, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get__deleteParent, put = __cordl_internal_set__deleteParent)) bool _deleteParent;

  /// @brief Field _error, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__error, put = __cordl_internal_set__error))::System::Text::StringBuilder* _error;

  /// @brief Field _firstSyncComplete, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get__firstSyncComplete, put = __cordl_internal_set__firstSyncComplete)) bool _firstSyncComplete;

  /// @brief Field _generateOptions, offset 0x50, size 0x5
  __declspec(property(get = __cordl_internal_get__generateOptions, put = __cordl_internal_set__generateOptions))::HoudiniEngineUnity::HEU_GenerateOptions _generateOptions;

  /// @brief Field _generatedOutputs, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__generatedOutputs,
                      put = __cordl_internal_set__generatedOutputs))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* _generatedOutputs;

  /// @brief Field _initialized, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _loadTask, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__loadTask, put = __cordl_internal_set__loadTask))::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo* _loadTask;

  /// @brief Field _log, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__log, put = __cordl_internal_set__log))::System::Text::StringBuilder* _log;

  /// @brief Field _nodeName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__nodeName, put = __cordl_internal_set__nodeName))::StringW _nodeName;

  /// @brief Field _outputCacheDirectory, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__outputCacheDirectory, put = __cordl_internal_set__outputCacheDirectory))::StringW _outputCacheDirectory;

  /// @brief Field _outputCacheFilePaths, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__outputCacheFilePaths, put = __cordl_internal_set__outputCacheFilePaths))::System::Collections::Generic::List_1<::StringW>* _outputCacheFilePaths;

  /// @brief Field _sessionID, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sessionID, put = __cordl_internal_set__sessionID)) int64_t _sessionID;

  /// @brief Field _sessionSyncAutoCook, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__sessionSyncAutoCook, put = __cordl_internal_set__sessionSyncAutoCook)) bool _sessionSyncAutoCook;

  /// @brief Field _syncing, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get__syncing, put = __cordl_internal_set__syncing)) bool _syncing;

  /// @brief Field _totalCookCount, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__totalCookCount, put = __cordl_internal_set__totalCookCount)) int32_t _totalCookCount;

  /// @brief Method AddGeneratedOutputFilePath, addr 0x248a924, size 0xe4, virtual false, abstract: false, final false
  inline void AddGeneratedOutputFilePath(::StringW path);

  /// @brief Method ApplyAttributeModifiersOnGameObjectOutput, addr 0x248aa08, size 0x70, virtual false, abstract: false, final false
  inline void ApplyAttributeModifiersOnGameObjectOutput(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partId, ByRef<::UnityEngine::GameObject*> go);

  /// @brief Method Awake, addr 0x2487c50, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Bake, addr 0x24884e4, size 0x3a4, virtual true, abstract: false, final false
  inline void Bake();

  /// @brief Method ClearLog, addr 0x24881c4, size 0x104, virtual false, abstract: false, final false
  inline void ClearLog();

  /// @brief Method CreateNewInstanceFromObject, addr 0x248c00c, size 0x1c0, virtual false, abstract: false, final false
  inline void CreateNewInstanceFromObject(::UnityEngine::GameObject* assetSourceGO, int32_t instanceIndex, ::UnityEngine::Transform* parentTransform,
                                          ByRef<::HoudiniEngineUnity::HAPI_Transform> hapiTransform, ::ArrayW<::StringW, ::Array<::StringW>*> instancePrefixes, ::StringW instanceName,
                                          ::UnityEngine::GameObject* collisionSourceGO);

  /// @brief Method DeleteSessionData, addr 0x2487c60, size 0x78, virtual true, abstract: false, final false
  inline void DeleteSessionData();

  /// @brief Method DestroyGeneratedData, addr 0x2487d34, size 0x4, virtual true, abstract: false, final false
  inline void DestroyGeneratedData();

  /// @brief Method DestroyOutputs, addr 0x2487d38, size 0x23c, virtual false, abstract: false, final false
  inline void DestroyOutputs();

  /// @brief Method Error, addr 0x24882c8, size 0x1c, virtual false, abstract: false, final false
  inline void Error(::StringW error);

  /// @brief Method GenerateAllInstancers, addr 0x248a7bc, size 0xb4, virtual false, abstract: false, final false
  inline void GenerateAllInstancers(int32_t cookNodeId, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>* instancerBuffers,
                                    ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData* loadData);

  /// @brief Method GenerateGeometry, addr 0x2488a68, size 0x108, virtual true, abstract: false, final false
  inline void GenerateGeometry(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData* loadData, int32_t objIndex);

  /// @brief Method GenerateInstancer, addr 0x248ac6c, size 0x310, virtual false, abstract: false, final false
  inline void GenerateInstancer(int32_t cookNodeId, ::HoudiniEngineUnity::HEU_LoadBufferInstancer* instancerBuffer,
                                ::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_LoadBufferBase*>* idBuffersMap);

  /// @brief Method GenerateInstancesFromAssetPaths, addr 0x248b6bc, size 0x950, virtual false, abstract: false, final false
  inline void GenerateInstancesFromAssetPaths(::HoudiniEngineUnity::HEU_LoadBufferInstancer* instancerBuffer, ::UnityEngine::Transform* instanceRootTransform);

  /// @brief Method GenerateInstancesFromNodeIDs, addr 0x248af7c, size 0x740, virtual false, abstract: false, final false
  inline void GenerateInstancesFromNodeIDs(int32_t cookNodeId, ::HoudiniEngineUnity::HEU_LoadBufferInstancer* instancerBuffer,
                                           ::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_LoadBufferBase*>* idBuffersMap,
                                           ::UnityEngine::Transform* instanceRootTransform);

  /// @brief Method GenerateMesh, addr 0x2488b70, size 0x614, virtual false, abstract: false, final false
  inline void GenerateMesh(int32_t cookNodeId, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>* meshBuffers);

  /// @brief Method GenerateObjects, addr 0x24889dc, size 0x8c, virtual true, abstract: false, final false
  inline void GenerateObjects(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData* loadData);

  /// @brief Method GenerateTerrain, addr 0x2489184, size 0x1638, virtual false, abstract: false, final false
  inline void GenerateTerrain(int32_t cookNodeId, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>* terrainBuffers);

  /// @brief Method GetHoudiniSession, addr 0x2487f90, size 0x15c, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_SessionBase* GetHoudiniSession(bool bCreateIfNotFound);

  /// @brief Method GetOutputCacheDirectory, addr 0x248a8c0, size 0x64, virtual false, abstract: false, final false
  inline ::StringW GetOutputCacheDirectory();

  /// @brief Method GetParentNodeID, addr 0x2487cd8, size 0x5c, virtual false, abstract: false, final false
  inline int32_t GetParentNodeID(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method Initialize, addr 0x2487f74, size 0x1c, virtual true, abstract: false, final false
  inline void Initialize();

  /// @brief Method IsLoaded, addr 0x24882e4, size 0x24, virtual false, abstract: false, final false
  inline bool IsLoaded();

  /// @brief Method Log, addr 0x24880ec, size 0xd8, virtual false, abstract: false, final false
  inline void Log(::StringW msg);

  static inline ::HoudiniEngineUnity::HEU_BaseSync* New_ctor();

  /// @brief Method OnDestroy, addr 0x2487c54, size 0xc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnLoadComplete, addr 0x24878b4, size 0x84, virtual true, abstract: false, final false
  inline void OnLoadComplete(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData* loadData);

  /// @brief Method OnStopped, addr 0x248a870, size 0x50, virtual false, abstract: false, final false
  inline void OnStopped(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData* loadData);

  /// @brief Method Reset, addr 0x248891c, size 0xc0, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Resync, addr 0x24884a8, size 0x3c, virtual true, abstract: false, final false
  inline void Resync();

  /// @brief Method SetOutputCacheDirectory, addr 0x248c1cc, size 0x8, virtual false, abstract: false, final false
  inline void SetOutputCacheDirectory(::StringW directory);

  /// @brief Method SetOutputVisiblity, addr 0x248aa78, size 0x1f4, virtual false, abstract: false, final false
  inline void SetOutputVisiblity(::HoudiniEngineUnity::HEU_LoadBufferBase* buffer);

  /// @brief Method SetupLoadTask, addr 0x2488430, size 0x4, virtual true, abstract: false, final false
  inline void SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method StartSync, addr 0x2488308, size 0x128, virtual true, abstract: false, final false
  inline void StartSync();

  /// @brief Method StopSync, addr 0x2488434, size 0x74, virtual true, abstract: false, final false
  inline void StopSync();

  /// @brief Method SyncUpdate, addr 0x248c1d4, size 0x4, virtual true, abstract: false, final false
  inline void SyncUpdate();

  /// @brief Method Unload, addr 0x2488888, size 0x94, virtual true, abstract: false, final false
  inline void Unload();

  constexpr int32_t const& __cordl_internal_get__cookNodeID() const;

  constexpr int32_t& __cordl_internal_get__cookNodeID();

  constexpr bool const& __cordl_internal_get__deleteParent() const;

  constexpr bool& __cordl_internal_get__deleteParent();

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__error();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get__error() const;

  constexpr bool const& __cordl_internal_get__firstSyncComplete() const;

  constexpr bool& __cordl_internal_get__firstSyncComplete();

  constexpr ::HoudiniEngineUnity::HEU_GenerateOptions const& __cordl_internal_get__generateOptions() const;

  constexpr ::HoudiniEngineUnity::HEU_GenerateOptions& __cordl_internal_get__generateOptions();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*& __cordl_internal_get__generatedOutputs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*> const& __cordl_internal_get__generatedOutputs() const;

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*& __cordl_internal_get__loadTask();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*> const& __cordl_internal_get__loadTask() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__log();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get__log() const;

  constexpr ::StringW const& __cordl_internal_get__nodeName() const;

  constexpr ::StringW& __cordl_internal_get__nodeName();

  constexpr ::StringW const& __cordl_internal_get__outputCacheDirectory() const;

  constexpr ::StringW& __cordl_internal_get__outputCacheDirectory();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__outputCacheFilePaths();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__outputCacheFilePaths() const;

  constexpr int64_t const& __cordl_internal_get__sessionID() const;

  constexpr int64_t& __cordl_internal_get__sessionID();

  constexpr bool const& __cordl_internal_get__sessionSyncAutoCook() const;

  constexpr bool& __cordl_internal_get__sessionSyncAutoCook();

  constexpr bool const& __cordl_internal_get__syncing() const;

  constexpr bool& __cordl_internal_get__syncing();

  constexpr int32_t const& __cordl_internal_get__totalCookCount() const;

  constexpr int32_t& __cordl_internal_get__totalCookCount();

  constexpr void __cordl_internal_set__cookNodeID(int32_t value);

  constexpr void __cordl_internal_set__deleteParent(bool value);

  constexpr void __cordl_internal_set__error(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set__firstSyncComplete(bool value);

  constexpr void __cordl_internal_set__generateOptions(::HoudiniEngineUnity::HEU_GenerateOptions value);

  constexpr void __cordl_internal_set__generatedOutputs(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__loadTask(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo* value);

  constexpr void __cordl_internal_set__log(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set__nodeName(::StringW value);

  constexpr void __cordl_internal_set__outputCacheDirectory(::StringW value);

  constexpr void __cordl_internal_set__outputCacheFilePaths(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__sessionID(int64_t value);

  constexpr void __cordl_internal_set__sessionSyncAutoCook(bool value);

  constexpr void __cordl_internal_set__syncing(bool value);

  constexpr void __cordl_internal_set__totalCookCount(int32_t value);

  /// @brief Method .ctor, addr 0x2487974, size 0x170, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_BaseSync();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_BaseSync", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_BaseSync(HEU_BaseSync&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_BaseSync", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_BaseSync(HEU_BaseSync const&) = delete;

  /// @brief Field _cookNodeID, offset: 0x18, size: 0x4, def value: None
  int32_t ____cookNodeID;

  /// @brief Field _sessionID, offset: 0x20, size: 0x8, def value: None
  int64_t ____sessionID;

  /// @brief Field _nodeName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____nodeName;

  /// @brief Field _initialized, offset: 0x30, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _syncing, offset: 0x31, size: 0x1, def value: None
  bool ____syncing;

  /// @brief Field _deleteParent, offset: 0x32, size: 0x1, def value: None
  bool ____deleteParent;

  /// @brief Field _generatedOutputs, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* ____generatedOutputs;

  /// @brief Field _outputCacheDirectory, offset: 0x40, size: 0x8, def value: None
  ::StringW ____outputCacheDirectory;

  /// @brief Field _outputCacheFilePaths, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____outputCacheFilePaths;

  /// @brief Field _generateOptions, offset: 0x50, size: 0x5, def value: None
  ::HoudiniEngineUnity::HEU_GenerateOptions ____generateOptions;

  /// @brief Field _log, offset: 0x58, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____log;

  /// @brief Field _error, offset: 0x60, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____error;

  /// @brief Field _sessionSyncAutoCook, offset: 0x68, size: 0x1, def value: None
  bool ____sessionSyncAutoCook;

  /// @brief Field _loadTask, offset: 0x70, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo* ____loadTask;

  /// @brief Field _totalCookCount, offset: 0x78, size: 0x4, def value: None
  int32_t ____totalCookCount;

  /// @brief Field _firstSyncComplete, offset: 0x7c, size: 0x1, def value: None
  bool ____firstSyncComplete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_BaseSync, 0x80>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_BaseSync, ____cookNodeID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_BaseSync, ____sessionID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_BaseSync, ____nodeName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_BaseSync, ____initialized) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_BaseSync, ____syncing) == 0x31, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_BaseSync, ____deleteParent) == 0x32, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_BaseSync, ____generatedOutputs) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_BaseSync, ____outputCacheDirectory) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_BaseSync, ____outputCacheFilePaths) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_BaseSync, ____generateOptions) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_BaseSync, ____log) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_BaseSync, ____error) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_BaseSync, ____sessionSyncAutoCook) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_BaseSync, ____loadTask) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_BaseSync, ____totalCookCount) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_BaseSync, ____firstSyncComplete) == 0x7c, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_BaseSync);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_BaseSync*, "HoudiniEngineUnity", "HEU_BaseSync");
