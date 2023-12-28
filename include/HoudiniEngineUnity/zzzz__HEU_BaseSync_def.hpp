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
class __HEU_ThreadedTaskLoadGeo__HEU_LoadData;
}
namespace HoudiniEngineUnity {
class HEU_LoadBufferVolume;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace HoudiniEngineUnity {
class HEU_LoadBufferMesh;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Text {
class StringBuilder;
}
namespace HoudiniEngineUnity {
class HEU_ThreadedTaskLoadGeo;
}
namespace HoudiniEngineUnity {
class HEU_LoadBufferBase;
}
namespace UnityEngine {
class Transform;
}
namespace HoudiniEngineUnity {
class HEU_GeneratedOutput;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
class HEU_LoadBufferInstancer;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(9794))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9793))
// CS Name: ::HoudiniEngineUnity::HEU_BaseSync*
class CORDL_TYPE HEU_BaseSync : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _cookNodeID, offset 0x18, size 0x4
  __declspec(property(get = __get__cookNodeID, put = __set__cookNodeID)) int32_t _cookNodeID;

  /// @brief Field _sessionID, offset 0x20, size 0x8
  __declspec(property(get = __get__sessionID, put = __set__sessionID)) int64_t _sessionID;

  /// @brief Field _nodeName, offset 0x28, size 0x8
  __declspec(property(get = __get__nodeName, put = __set__nodeName))::StringW _nodeName;

  /// @brief Field _initialized, offset 0x30, size 0x1
  __declspec(property(get = __get__initialized, put = __set__initialized)) bool _initialized;

  /// @brief Field _syncing, offset 0x31, size 0x1
  __declspec(property(get = __get__syncing, put = __set__syncing)) bool _syncing;

  /// @brief Field _deleteParent, offset 0x32, size 0x1
  __declspec(property(get = __get__deleteParent, put = __set__deleteParent)) bool _deleteParent;

  /// @brief Field _generatedOutputs, offset 0x38, size 0x8
  __declspec(property(get = __get__generatedOutputs, put = __set__generatedOutputs))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* _generatedOutputs;

  /// @brief Field _outputCacheDirectory, offset 0x40, size 0x8
  __declspec(property(get = __get__outputCacheDirectory, put = __set__outputCacheDirectory))::StringW _outputCacheDirectory;

  /// @brief Field _outputCacheFilePaths, offset 0x48, size 0x8
  __declspec(property(get = __get__outputCacheFilePaths, put = __set__outputCacheFilePaths))::System::Collections::Generic::List_1<::StringW>* _outputCacheFilePaths;

  /// @brief Field _generateOptions, offset 0x50, size 0x5
  __declspec(property(get = __get__generateOptions, put = __set__generateOptions))::HoudiniEngineUnity::HEU_GenerateOptions _generateOptions;

  /// @brief Field _log, offset 0x58, size 0x8
  __declspec(property(get = __get__log, put = __set__log))::System::Text::StringBuilder* _log;

  /// @brief Field _error, offset 0x60, size 0x8
  __declspec(property(get = __get__error, put = __set__error))::System::Text::StringBuilder* _error;

  /// @brief Field _sessionSyncAutoCook, offset 0x68, size 0x1
  __declspec(property(get = __get__sessionSyncAutoCook, put = __set__sessionSyncAutoCook)) bool _sessionSyncAutoCook;

  /// @brief Field _loadTask, offset 0x70, size 0x8
  __declspec(property(get = __get__loadTask, put = __set__loadTask))::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo* _loadTask;

  /// @brief Field _totalCookCount, offset 0x78, size 0x4
  __declspec(property(get = __get__totalCookCount, put = __set__totalCookCount)) int32_t _totalCookCount;

  /// @brief Field _firstSyncComplete, offset 0x7c, size 0x1
  __declspec(property(get = __get__firstSyncComplete, put = __set__firstSyncComplete)) bool _firstSyncComplete;

  constexpr int32_t& __get__cookNodeID();

  constexpr int32_t const& __get__cookNodeID() const;

  constexpr void __set__cookNodeID(int32_t value);

  constexpr int64_t& __get__sessionID();

  constexpr int64_t const& __get__sessionID() const;

  constexpr void __set__sessionID(int64_t value);

  constexpr ::StringW& __get__nodeName();

  constexpr ::StringW const& __get__nodeName() const;

  constexpr void __set__nodeName(::StringW value);

  constexpr bool& __get__initialized();

  constexpr bool const& __get__initialized() const;

  constexpr void __set__initialized(bool value);

  constexpr bool& __get__syncing();

  constexpr bool const& __get__syncing() const;

  constexpr void __set__syncing(bool value);

  constexpr bool& __get__deleteParent();

  constexpr bool const& __get__deleteParent() const;

  constexpr void __set__deleteParent(bool value);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*& __get__generatedOutputs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*> const& __get__generatedOutputs() const;

  constexpr void __set__generatedOutputs(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* value);

  constexpr ::StringW& __get__outputCacheDirectory();

  constexpr ::StringW const& __get__outputCacheDirectory() const;

  constexpr void __set__outputCacheDirectory(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get__outputCacheFilePaths();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get__outputCacheFilePaths() const;

  constexpr void __set__outputCacheFilePaths(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::HoudiniEngineUnity::HEU_GenerateOptions& __get__generateOptions();

  constexpr ::HoudiniEngineUnity::HEU_GenerateOptions const& __get__generateOptions() const;

  constexpr void __set__generateOptions(::HoudiniEngineUnity::HEU_GenerateOptions value);

  constexpr ::System::Text::StringBuilder*& __get__log();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __get__log() const;

  constexpr void __set__log(::System::Text::StringBuilder* value);

  constexpr ::System::Text::StringBuilder*& __get__error();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __get__error() const;

  constexpr void __set__error(::System::Text::StringBuilder* value);

  constexpr bool& __get__sessionSyncAutoCook();

  constexpr bool const& __get__sessionSyncAutoCook() const;

  constexpr void __set__sessionSyncAutoCook(bool value);

  constexpr ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*& __get__loadTask();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*> const& __get__loadTask() const;

  constexpr void __set__loadTask(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo* value);

  constexpr int32_t& __get__totalCookCount();

  constexpr int32_t const& __get__totalCookCount() const;

  constexpr void __set__totalCookCount(int32_t value);

  constexpr bool& __get__firstSyncComplete();

  constexpr bool const& __get__firstSyncComplete() const;

  constexpr void __set__firstSyncComplete(bool value);

  /// @brief Method Awake addr 0x21a59e0 size 0x4 virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x21a59e4 size 0xc virtual false final false
  inline void OnDestroy();

  /// @brief Method DeleteSessionData addr 0x21a59f0 size 0x78 virtual true final false
  inline void DeleteSessionData();

  /// @brief Method DestroyGeneratedData addr 0x21a5ac4 size 0x4 virtual true final false
  inline void DestroyGeneratedData();

  /// @brief Method Initialize addr 0x21a5d04 size 0x1c virtual true final false
  inline void Initialize();

  /// @brief Method GetHoudiniSession addr 0x21a5d20 size 0x15c virtual true final false
  inline ::HoudiniEngineUnity::HEU_SessionBase* GetHoudiniSession(bool bCreateIfNotFound);

  /// @brief Method GetParentNodeID addr 0x21a5a68 size 0x5c virtual false final false
  inline int32_t GetParentNodeID(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method Log addr 0x21a5e7c size 0xd8 virtual false final false
  inline void Log(::StringW msg);

  /// @brief Method ClearLog addr 0x21a5f54 size 0x104 virtual false final false
  inline void ClearLog();

  /// @brief Method Error addr 0x21a6058 size 0x1c virtual false final false
  inline void Error(::StringW error);

  /// @brief Method IsLoaded addr 0x21a6074 size 0x24 virtual false final false
  inline bool IsLoaded();

  /// @brief Method StartSync addr 0x21a6098 size 0x128 virtual true final false
  inline void StartSync();

  /// @brief Method SetupLoadTask addr 0x21a61c0 size 0x4 virtual true final false
  inline void SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method StopSync addr 0x21a61c4 size 0x74 virtual true final false
  inline void StopSync();

  /// @brief Method Resync addr 0x21a6238 size 0x3c virtual true final false
  inline void Resync();

  /// @brief Method Bake addr 0x21a6274 size 0x3a4 virtual true final false
  inline void Bake();

  /// @brief Method Unload addr 0x21a6618 size 0x94 virtual true final false
  inline void Unload();

  /// @brief Method Reset addr 0x21a66ac size 0xc0 virtual true final false
  inline void Reset();

  /// @brief Method OnLoadComplete addr 0x21a5644 size 0x84 virtual true final false
  inline void OnLoadComplete(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData* loadData);

  /// @brief Method GenerateObjects addr 0x21a676c size 0x8c virtual true final false
  inline void GenerateObjects(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData* loadData);

  /// @brief Method GenerateGeometry addr 0x21a67f8 size 0x108 virtual true final false
  inline void GenerateGeometry(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData* loadData, int32_t objIndex);

  /// @brief Method OnStopped addr 0x21a8600 size 0x50 virtual false final false
  inline void OnStopped(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData* loadData);

  /// @brief Method GenerateTerrain addr 0x21a6f14 size 0x1638 virtual false final false
  inline void GenerateTerrain(int32_t cookNodeId, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>* terrainBuffers);

  /// @brief Method GenerateMesh addr 0x21a6900 size 0x614 virtual false final false
  inline void GenerateMesh(int32_t cookNodeId, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>* meshBuffers);

  /// @brief Method GenerateAllInstancers addr 0x21a854c size 0xb4 virtual false final false
  inline void GenerateAllInstancers(int32_t cookNodeId, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>* instancerBuffers,
                                    ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData* loadData);

  /// @brief Method GenerateInstancer addr 0x21a89fc size 0x310 virtual false final false
  inline void GenerateInstancer(int32_t cookNodeId, ::HoudiniEngineUnity::HEU_LoadBufferInstancer* instancerBuffer,
                                ::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_LoadBufferBase*>* idBuffersMap);

  /// @brief Method GenerateInstancesFromNodeIDs addr 0x21a8d0c size 0x740 virtual false final false
  inline void GenerateInstancesFromNodeIDs(int32_t cookNodeId, ::HoudiniEngineUnity::HEU_LoadBufferInstancer* instancerBuffer,
                                           ::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_LoadBufferBase*>* idBuffersMap,
                                           ::UnityEngine::Transform* instanceRootTransform);

  /// @brief Method GenerateInstancesFromAssetPaths addr 0x21a944c size 0x950 virtual false final false
  inline void GenerateInstancesFromAssetPaths(::HoudiniEngineUnity::HEU_LoadBufferInstancer* instancerBuffer, ::UnityEngine::Transform* instanceRootTransform);

  /// @brief Method CreateNewInstanceFromObject addr 0x21a9d9c size 0x1c0 virtual false final false
  inline void CreateNewInstanceFromObject(::UnityEngine::GameObject* assetSourceGO, int32_t instanceIndex, ::UnityEngine::Transform* parentTransform,
                                          ByRef<::HoudiniEngineUnity::HAPI_Transform> hapiTransform, ::ArrayW<::StringW, ::Array<::StringW>*> instancePrefixes, ::StringW instanceName,
                                          ::UnityEngine::GameObject* collisionSourceGO);

  /// @brief Method ApplyAttributeModifiersOnGameObjectOutput addr 0x21a8798 size 0x70 virtual false final false
  inline void ApplyAttributeModifiersOnGameObjectOutput(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partId, ByRef<::UnityEngine::GameObject*> go);

  /// @brief Method DestroyOutputs addr 0x21a5ac8 size 0x23c virtual false final false
  inline void DestroyOutputs();

  /// @brief Method SetOutputVisiblity addr 0x21a8808 size 0x1f4 virtual false final false
  inline void SetOutputVisiblity(::HoudiniEngineUnity::HEU_LoadBufferBase* buffer);

  /// @brief Method GetOutputCacheDirectory addr 0x21a8650 size 0x64 virtual false final false
  inline ::StringW GetOutputCacheDirectory();

  /// @brief Method SetOutputCacheDirectory addr 0x21a9f5c size 0x8 virtual false final false
  inline void SetOutputCacheDirectory(::StringW directory);

  /// @brief Method AddGeneratedOutputFilePath addr 0x21a86b4 size 0xe4 virtual false final false
  inline void AddGeneratedOutputFilePath(::StringW path);

  /// @brief Method SyncUpdate addr 0x21a9f64 size 0x4 virtual true final false
  inline void SyncUpdate();

  static inline ::HoudiniEngineUnity::HEU_BaseSync* New_ctor();

  /// @brief Method .ctor addr 0x21a5704 size 0x170 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_BaseSync", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_BaseSync(HEU_BaseSync&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_BaseSync", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_BaseSync(HEU_BaseSync const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_BaseSync();

public:
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

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_BaseSync);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_BaseSync*, "HoudiniEngineUnity", "HEU_BaseSync");
