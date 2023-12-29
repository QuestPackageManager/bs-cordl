#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_PDGAssetLink_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_PDGAssetLink)
namespace HoudiniEngineUnity {
class HEU_TOPNetworkData;
}
namespace HoudiniEngineUnity {
class __HEU_PDGAssetLink__UpdateUIDelegate;
}
namespace HoudiniEngineUnity {
class HEU_TOPWorkResult;
}
namespace HoudiniEngineUnity {
struct __HEU_PDGAssetLink__LinkState;
}
namespace HoudiniEngineUnity {
class HEU_CookedEventData;
}
namespace HoudiniEngineUnity {
struct HAPI_PDG_WorkitemResultInfo;
}
namespace HoudiniEngineUnity {
class HEU_ReloadEventData;
}
namespace HoudiniEngineUnity {
class TOPNodeTags;
}
namespace HoudiniEngineUnity {
struct HAPI_PDG_WorkitemInfo;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Transform;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
struct HAPI_NodeInfo;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
class HEU_WorkItemTally;
}
namespace HoudiniEngineUnity {
class HEU_TOPNodeData;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct __HEU_PDGAssetLink__LinkState;
}
namespace HoudiniEngineUnity {
class HEU_PDGAssetLink;
}
namespace HoudiniEngineUnity {
class __HEU_PDGAssetLink__UpdateUIDelegate;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_PDGAssetLink);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate);
// Type: ::LinkState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9693))
// CS Name: ::HEU_PDGAssetLink::LinkState
struct CORDL_TYPE __HEU_PDGAssetLink__LinkState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_PDGAssetLink__LinkState_Unwrapped
  enum struct ____HEU_PDGAssetLink__LinkState_Unwrapped : int32_t {
    __E_INACTIVE = static_cast<int32_t>(0x0),
    __E_LINKING = static_cast<int32_t>(0x1),
    __E_LINKED = static_cast<int32_t>(0x2),
    __E_ERROR_NOT_LINKED = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_PDGAssetLink__LinkState_Unwrapped() const noexcept {
    return static_cast<____HEU_PDGAssetLink__LinkState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_PDGAssetLink__LinkState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_PDGAssetLink__LinkState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field INACTIVE value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState const INACTIVE;

  /// @brief Field LINKING value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState const LINKING;

  /// @brief Field LINKED value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState const LINKED;

  /// @brief Field ERROR_NOT_LINKED value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState const ERROR_NOT_LINKED;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::UpdateUIDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9694))
// CS Name: ::HEU_PDGAssetLink::UpdateUIDelegate*
class CORDL_TYPE __HEU_PDGAssetLink__UpdateUIDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2045ea0 size 0xbc virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2045f5c size 0x14 virtual true final false
  inline void Invoke();

  /// @brief Method BeginInvoke addr 0x2045f70 size 0x20 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x2045f90 size 0xc virtual true final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_PDGAssetLink__UpdateUIDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_PDGAssetLink__UpdateUIDelegate(__HEU_PDGAssetLink__UpdateUIDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_PDGAssetLink__UpdateUIDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_PDGAssetLink__UpdateUIDelegate(__HEU_PDGAssetLink__UpdateUIDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_PDGAssetLink__UpdateUIDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate, 0x80>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_PDGAssetLink
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(9693))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9695))
// CS Name: ::HoudiniEngineUnity::HEU_PDGAssetLink*
class CORDL_TYPE HEU_PDGAssetLink : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using UpdateUIDelegate = ::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate;

  using LinkState = ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState;

  /// @brief Field _assetPath, offset 0x18, size 0x8
  __declspec(property(get = __get__assetPath, put = __set__assetPath))::StringW _assetPath;

  /// @brief Field _assetGO, offset 0x20, size 0x8
  __declspec(property(get = __get__assetGO, put = __set__assetGO))::UnityEngine::GameObject* _assetGO;

  /// @brief Field _assetName, offset 0x28, size 0x8
  __declspec(property(get = __get__assetName, put = __set__assetName))::StringW _assetName;

  /// @brief Field _assetID, offset 0x30, size 0x4
  __declspec(property(get = __get__assetID, put = __set__assetID)) int32_t _assetID;

  /// @brief Field _heu, offset 0x38, size 0x8
  __declspec(property(get = __get__heu, put = __set__heu))::HoudiniEngineUnity::HEU_HoudiniAsset* _heu;

  /// @brief Field _topNetworks, offset 0x40, size 0x8
  __declspec(property(get = __get__topNetworks, put = __set__topNetworks))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>* _topNetworks;

  /// @brief Field _topNetworkNames, offset 0x48, size 0x8
  __declspec(property(get = __get__topNetworkNames, put = __set__topNetworkNames))::ArrayW<::StringW, ::Array<::StringW>*> _topNetworkNames;

  /// @brief Field _selectedTOPNetwork, offset 0x50, size 0x4
  __declspec(property(get = __get__selectedTOPNetwork, put = __set__selectedTOPNetwork)) int32_t _selectedTOPNetwork;

  /// @brief Field _linkState, offset 0x54, size 0x4
  __declspec(property(get = __get__linkState, put = __set__linkState))::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState _linkState;

  /// @brief Field _autoCook, offset 0x58, size 0x1
  __declspec(property(get = __get__autoCook, put = __set__autoCook)) bool _autoCook;

  /// @brief Field _useHEngineData, offset 0x59, size 0x1
  __declspec(property(get = __get__useHEngineData, put = __set__useHEngineData)) bool _useHEngineData;

  /// @brief Field _repaintUIDelegate, offset 0x60, size 0x8
  __declspec(property(get = __get__repaintUIDelegate, put = __set__repaintUIDelegate))::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate* _repaintUIDelegate;

  /// @brief Field _numWorkItems, offset 0x68, size 0x4
  __declspec(property(get = __get__numWorkItems, put = __set__numWorkItems)) int32_t _numWorkItems;

  /// @brief Field _workItemTally, offset 0x70, size 0x8
  __declspec(property(get = __get__workItemTally, put = __set__workItemTally))::HoudiniEngineUnity::HEU_WorkItemTally* _workItemTally;

  /// @brief Field _loadRootGameObject, offset 0x78, size 0x8
  __declspec(property(get = __get__loadRootGameObject, put = __set__loadRootGameObject))::UnityEngine::GameObject* _loadRootGameObject;

  /// @brief Field _outputCachePathRoot, offset 0x80, size 0x8
  __declspec(property(get = __get__outputCachePathRoot, put = __set__outputCachePathRoot))::StringW _outputCachePathRoot;

  __declspec(property(get = get_AssetName))::StringW AssetName;

  __declspec(property(get = get_SelectedTOPNetwork)) int32_t SelectedTOPNetwork;

  __declspec(property(get = get_AssetLinkState))::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState AssetLinkState;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  constexpr ::StringW& __get__assetPath();

  constexpr ::StringW const& __get__assetPath() const;

  constexpr void __set__assetPath(::StringW value);

  constexpr ::UnityEngine::GameObject*& __get__assetGO();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__assetGO() const;

  constexpr void __set__assetGO(::UnityEngine::GameObject* value);

  constexpr ::StringW& __get__assetName();

  constexpr ::StringW const& __get__assetName() const;

  constexpr void __set__assetName(::StringW value);

  constexpr int32_t& __get__assetID();

  constexpr int32_t const& __get__assetID() const;

  constexpr void __set__assetID(int32_t value);

  constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset*& __get__heu();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HoudiniAsset*> const& __get__heu() const;

  constexpr void __set__heu(::HoudiniEngineUnity::HEU_HoudiniAsset* value);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>*& __get__topNetworks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>*> const& __get__topNetworks() const;

  constexpr void __set__topNetworks(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>* value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__topNetworkNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__topNetworkNames() const;

  constexpr void __set__topNetworkNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr int32_t& __get__selectedTOPNetwork();

  constexpr int32_t const& __get__selectedTOPNetwork() const;

  constexpr void __set__selectedTOPNetwork(int32_t value);

  constexpr ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState& __get__linkState();

  constexpr ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState const& __get__linkState() const;

  constexpr void __set__linkState(::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState value);

  constexpr bool& __get__autoCook();

  constexpr bool const& __get__autoCook() const;

  constexpr void __set__autoCook(bool value);

  constexpr bool& __get__useHEngineData();

  constexpr bool const& __get__useHEngineData() const;

  constexpr void __set__useHEngineData(bool value);

  constexpr ::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate*& __get__repaintUIDelegate();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate*> const& __get__repaintUIDelegate() const;

  constexpr void __set__repaintUIDelegate(::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate* value);

  constexpr int32_t& __get__numWorkItems();

  constexpr int32_t const& __get__numWorkItems() const;

  constexpr void __set__numWorkItems(int32_t value);

  constexpr ::HoudiniEngineUnity::HEU_WorkItemTally*& __get__workItemTally();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_WorkItemTally*> const& __get__workItemTally() const;

  constexpr void __set__workItemTally(::HoudiniEngineUnity::HEU_WorkItemTally* value);

  constexpr ::UnityEngine::GameObject*& __get__loadRootGameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__loadRootGameObject() const;

  constexpr void __set__loadRootGameObject(::UnityEngine::GameObject* value);

  constexpr ::StringW& __get__outputCachePathRoot();

  constexpr ::StringW const& __get__outputCachePathRoot() const;

  constexpr void __set__outputCachePathRoot(::StringW value);

  /// @brief Method Awake addr 0x2042b20 size 0x4 virtual false final false
  inline void Awake();

  /// @brief Method OnBeforeSerialize addr 0x2042b28 size 0x4 virtual true final true
  inline void OnBeforeSerialize();

  /// @brief Method OnAfterDeserialize addr 0x2042b2c size 0x4 virtual true final true
  inline void OnAfterDeserialize();

  /// @brief Method HandleInitialLoad addr 0x2042b24 size 0x4 virtual false final false
  inline void HandleInitialLoad();

  /// @brief Method OnDestroy addr 0x2042b30 size 0x4 virtual false final false
  inline void OnDestroy();

  /// @brief Method Setup addr 0x2042bb4 size 0x12c virtual false final false
  inline void Setup(::HoudiniEngineUnity::HEU_HoudiniAsset* hdaAsset);

  /// @brief Method NotifyAssetCooked addr 0x2043110 size 0x2c virtual false final false
  inline void NotifyAssetCooked(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool bSuccess, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* generatedOutputs);

  /// @brief Method NotifyAssetCooked addr 0x2043304 size 0x10 virtual false final false
  inline void NotifyAssetCooked(::HoudiniEngineUnity::HEU_CookedEventData* cookedEventData);

  /// @brief Method NotifyAssetCooked addr 0x2043314 size 0x10 virtual false final false
  inline void NotifyAssetCooked(::HoudiniEngineUnity::HEU_ReloadEventData* reloadEventData);

  /// @brief Method Reset addr 0x2042ce0 size 0x4 virtual false final false
  inline void Reset();

  /// @brief Method Refresh addr 0x2042ce4 size 0x42c virtual false final false
  inline void Refresh();

  /// @brief Method PopulateFromHDA addr 0x204319c size 0x168 virtual false final false
  inline void PopulateFromHDA();

  /// @brief Method PopulateTOPNetworks addr 0x2043604 size 0x4cc virtual false final false
  inline bool PopulateTOPNetworks();

  /// @brief Method PopulateTOPNodes addr 0x20440b8 size 0x3e8 virtual false final false
  static inline bool PopulateTOPNodes(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_TOPNetworkData* topNetwork, ::ArrayW<int32_t, ::Array<int32_t>*> topNodeIDs,
                                      bool useHEngineData);

  /// @brief Method SelectTOPNetwork addr 0x2044770 size 0x5c virtual false final false
  inline void SelectTOPNetwork(int32_t newIndex);

  /// @brief Method SelectTOPNode addr 0x20447cc size 0x60 virtual false final false
  inline void SelectTOPNode(::HoudiniEngineUnity::HEU_TOPNetworkData* network, int32_t newIndex);

  /// @brief Method GetSelectedTOPNetwork addr 0x204482c size 0x8 virtual false final false
  inline ::HoudiniEngineUnity::HEU_TOPNetworkData* GetSelectedTOPNetwork();

  /// @brief Method GetSelectedTOPNode addr 0x20448b8 size 0x90 virtual false final false
  inline ::HoudiniEngineUnity::HEU_TOPNodeData* GetSelectedTOPNode();

  /// @brief Method GetTOPNetwork addr 0x2044834 size 0x84 virtual false final false
  inline ::HoudiniEngineUnity::HEU_TOPNetworkData* GetTOPNetwork(int32_t index);

  /// @brief Method GetTOPNetworkByName addr 0x2043f14 size 0xcc virtual false final false
  static inline ::HoudiniEngineUnity::HEU_TOPNetworkData* GetTOPNetworkByName(::StringW name, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>* topNetworks);

  /// @brief Method GetTOPNodeByName addr 0x20444a0 size 0xcc virtual false final false
  static inline ::HoudiniEngineUnity::HEU_TOPNodeData* GetTOPNodeByName(::StringW name, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNodeData*>* topNodes);

  /// @brief Method ClearAllTOPData addr 0x2043324 size 0x2c4 virtual false final false
  inline void ClearAllTOPData();

  /// @brief Method ClearTOPNetworkWorkItemResults addr 0x2044948 size 0x140 virtual false final false
  static inline void ClearTOPNetworkWorkItemResults(::HoudiniEngineUnity::HEU_TOPNetworkData* topNetwork);

  /// @brief Method ClearTOPNodeWorkItemResults addr 0x2044650 size 0x120 virtual false final false
  static inline void ClearTOPNodeWorkItemResults(::HoudiniEngineUnity::HEU_TOPNodeData* topNode);

  /// @brief Method ClearWorkItemResultByID addr 0x2044c70 size 0x1c virtual false final false
  static inline void ClearWorkItemResultByID(::HoudiniEngineUnity::HEU_TOPNodeData* topNode, int32_t workItemID);

  /// @brief Method ClearWorkItemResult addr 0x2044de8 size 0x74 virtual false final false
  static inline void ClearWorkItemResult(::HoudiniEngineUnity::HEU_TOPNodeData* topNode, ::HoudiniEngineUnity::HEU_TOPWorkResult* result);

  /// @brief Method UpdateTOPNodeResultsVisibility addr 0x2044e5c size 0x8c virtual false final false
  inline void UpdateTOPNodeResultsVisibility(::HoudiniEngineUnity::HEU_TOPNodeData* topNode);

  /// @brief Method GetWorkResultByID addr 0x2044c8c size 0x15c virtual false final false
  static inline ::HoudiniEngineUnity::HEU_TOPWorkResult* GetWorkResultByID(::HoudiniEngineUnity::HEU_TOPNodeData* topNode, int32_t workItemID);

  /// @brief Method DestroyWorkItemResultData addr 0x2044a88 size 0x1e8 virtual false final false
  static inline void DestroyWorkItemResultData(::HoudiniEngineUnity::HEU_TOPNodeData* topNode, ::HoudiniEngineUnity::HEU_TOPWorkResult* result);

  /// @brief Method DirtyTOPNode addr 0x2044ee8 size 0x20 virtual false final false
  inline void DirtyTOPNode(::HoudiniEngineUnity::HEU_TOPNodeData* topNode);

  /// @brief Method CookTOPNode addr 0x2044f10 size 0x20 virtual false final false
  inline void CookTOPNode(::HoudiniEngineUnity::HEU_TOPNodeData* topNode);

  /// @brief Method DirtyAll addr 0x2044f38 size 0x20 virtual false final false
  inline void DirtyAll();

  /// @brief Method CookOutput addr 0x204313c size 0x60 virtual false final false
  inline void CookOutput();

  /// @brief Method PauseCook addr 0x2045018 size 0x60 virtual false final false
  inline void PauseCook();

  /// @brief Method CancelCook addr 0x204507c size 0x60 virtual false final false
  inline void CancelCook();

  /// @brief Method GetHAPISession addr 0x2043ad0 size 0x8c virtual false final false
  inline ::HoudiniEngineUnity::HEU_SessionBase* GetHAPISession();

  /// @brief Method LoadResults addr 0x20450e0 size 0x5ec virtual false final false
  inline void LoadResults(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode, ::HoudiniEngineUnity::HAPI_PDG_WorkitemInfo workItemInfo,
                          ::ArrayW<::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo, ::Array<::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo>*> resultInfos, int32_t workItemID);

  /// @brief Method GetLoadRootTransform addr 0x2045750 size 0xe4 virtual false final false
  inline ::UnityEngine::Transform* GetLoadRootTransform();

  /// @brief Method GetTOPNode addr 0x2045834 size 0x170 virtual false final false
  inline ::HoudiniEngineUnity::HEU_TOPNodeData* GetTOPNode(int32_t nodeID);

  /// @brief Method RepaintUI addr 0x20435e8 size 0x1c virtual false final false
  inline void RepaintUI();

  /// @brief Method UpdateWorkItemTally addr 0x20459a4 size 0x2d8 virtual false final false
  inline void UpdateWorkItemTally();

  /// @brief Method ResetTOPNetworkWorkItemTally addr 0x2044f6c size 0xa8 virtual false final false
  inline void ResetTOPNetworkWorkItemTally(::HoudiniEngineUnity::HEU_TOPNetworkData* topNetwork);

  /// @brief Method GetTOPNodeStatus addr 0x2045c7c size 0x100 virtual false final false
  inline ::StringW GetTOPNodeStatus(::HoudiniEngineUnity::HEU_TOPNodeData* topNode);

  /// @brief Method ParseHEngineData addr 0x2043d48 size 0x1cc virtual false final false
  static inline void ParseHEngineData(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t topNodeID, ByRef<::HoudiniEngineUnity::HAPI_NodeInfo> nodeInfo,
                                      ByRef<::HoudiniEngineUnity::TOPNodeTags*> nodeTags);

  /// @brief Method get_AssetName addr 0x2045da0 size 0x8 virtual false final false
  inline ::StringW get_AssetName();

  /// @brief Method get_SelectedTOPNetwork addr 0x2045da8 size 0x8 virtual false final false
  inline int32_t get_SelectedTOPNetwork();

  /// @brief Method get_AssetLinkState addr 0x2045db0 size 0x8 virtual false final false
  inline ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState get_AssetLinkState();

  static inline ::HoudiniEngineUnity::HEU_PDGAssetLink* New_ctor();

  /// @brief Method .ctor addr 0x2045db8 size 0xe0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_PDGAssetLink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_PDGAssetLink(HEU_PDGAssetLink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_PDGAssetLink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_PDGAssetLink(HEU_PDGAssetLink const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_PDGAssetLink();

public:
  /// @brief Field _assetPath, offset: 0x18, size: 0x8, def value: None
  ::StringW ____assetPath;

  /// @brief Field _assetGO, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____assetGO;

  /// @brief Field _assetName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____assetName;

  /// @brief Field _assetID, offset: 0x30, size: 0x4, def value: None
  int32_t ____assetID;

  /// @brief Field _heu, offset: 0x38, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_HoudiniAsset* ____heu;

  /// @brief Field _topNetworks, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>* ____topNetworks;

  /// @brief Field _topNetworkNames, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____topNetworkNames;

  /// @brief Field _selectedTOPNetwork, offset: 0x50, size: 0x4, def value: None
  int32_t ____selectedTOPNetwork;

  /// @brief Field _linkState, offset: 0x54, size: 0x4, def value: None
  ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState ____linkState;

  /// @brief Field _autoCook, offset: 0x58, size: 0x1, def value: None
  bool ____autoCook;

  /// @brief Field _useHEngineData, offset: 0x59, size: 0x1, def value: None
  bool ____useHEngineData;

  /// @brief Field _repaintUIDelegate, offset: 0x60, size: 0x8, def value: None
  ::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate* ____repaintUIDelegate;

  /// @brief Field _numWorkItems, offset: 0x68, size: 0x4, def value: None
  int32_t ____numWorkItems;

  /// @brief Field _workItemTally, offset: 0x70, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_WorkItemTally* ____workItemTally;

  /// @brief Field _loadRootGameObject, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____loadRootGameObject;

  /// @brief Field _outputCachePathRoot, offset: 0x80, size: 0x8, def value: None
  ::StringW ____outputCachePathRoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_PDGAssetLink, 0x88>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGAssetLink, ____assetPath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGAssetLink, ____assetGO) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGAssetLink, ____assetName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGAssetLink, ____assetID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGAssetLink, ____heu) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGAssetLink, ____topNetworks) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGAssetLink, ____topNetworkNames) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGAssetLink, ____selectedTOPNetwork) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGAssetLink, ____linkState) == 0x54, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGAssetLink, ____autoCook) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGAssetLink, ____useHEngineData) == 0x59, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGAssetLink, ____repaintUIDelegate) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGAssetLink, ____numWorkItems) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGAssetLink, ____workItemTally) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGAssetLink, ____loadRootGameObject) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGAssetLink, ____outputCachePathRoot) == 0x80, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState, "HoudiniEngineUnity", "HEU_PDGAssetLink/LinkState");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_PDGAssetLink);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PDGAssetLink*, "HoudiniEngineUnity", "HEU_PDGAssetLink");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate*, "HoudiniEngineUnity", "HEU_PDGAssetLink/UpdateUIDelegate");
