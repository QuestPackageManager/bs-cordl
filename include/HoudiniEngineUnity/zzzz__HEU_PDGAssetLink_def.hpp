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
struct HAPI_NodeInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_PDG_WorkitemInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_PDG_WorkitemResultInfo;
}
namespace HoudiniEngineUnity {
class HEU_CookedEventData;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
class HEU_ReloadEventData;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_TOPNetworkData;
}
namespace HoudiniEngineUnity {
class HEU_TOPNodeData;
}
namespace HoudiniEngineUnity {
class HEU_TOPWorkResult;
}
namespace HoudiniEngineUnity {
class HEU_WorkItemTally;
}
namespace HoudiniEngineUnity {
class TOPNodeTags;
}
namespace HoudiniEngineUnity {
struct __HEU_PDGAssetLink__LinkState;
}
namespace HoudiniEngineUnity {
class __HEU_PDGAssetLink__UpdateUIDelegate;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class Transform;
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

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<____HEU_PDGAssetLink__LinkState_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_PDGAssetLink__LinkState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_PDGAssetLink__LinkState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ERROR_NOT_LINKED value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState const ERROR_NOT_LINKED;

  /// @brief Field INACTIVE value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState const INACTIVE;

  /// @brief Field LINKED value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState const LINKED;

  /// @brief Field LINKING value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState const LINKING;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

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
// CS Name: ::HEU_PDGAssetLink::UpdateUIDelegate*
class CORDL_TYPE __HEU_PDGAssetLink__UpdateUIDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x22fe858, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x22fe878, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x22fe844, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x22fe788, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_PDGAssetLink__UpdateUIDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HEU_PDGAssetLink__UpdateUIDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_PDGAssetLink__UpdateUIDelegate(__HEU_PDGAssetLink__UpdateUIDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_PDGAssetLink__UpdateUIDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_PDGAssetLink__UpdateUIDelegate(__HEU_PDGAssetLink__UpdateUIDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate, 0x80>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_PDGAssetLink
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_PDGAssetLink*
class CORDL_TYPE HEU_PDGAssetLink : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using LinkState = ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState;

  using UpdateUIDelegate = ::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate;

  __declspec(property(get = get_AssetLinkState))::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState AssetLinkState;

  __declspec(property(get = get_AssetName))::StringW AssetName;

  __declspec(property(get = get_SelectedTOPNetwork)) int32_t SelectedTOPNetwork;

  /// @brief Field _assetGO, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__assetGO, put = __cordl_internal_set__assetGO))::UnityW<::UnityEngine::GameObject> _assetGO;

  /// @brief Field _assetID, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__assetID, put = __cordl_internal_set__assetID)) int32_t _assetID;

  /// @brief Field _assetName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__assetName, put = __cordl_internal_set__assetName))::StringW _assetName;

  /// @brief Field _assetPath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__assetPath, put = __cordl_internal_set__assetPath))::StringW _assetPath;

  /// @brief Field _autoCook, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__autoCook, put = __cordl_internal_set__autoCook)) bool _autoCook;

  /// @brief Field _heu, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__heu, put = __cordl_internal_set__heu))::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> _heu;

  /// @brief Field _linkState, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__linkState, put = __cordl_internal_set__linkState))::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState _linkState;

  /// @brief Field _loadRootGameObject, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__loadRootGameObject, put = __cordl_internal_set__loadRootGameObject))::UnityW<::UnityEngine::GameObject> _loadRootGameObject;

  /// @brief Field _numWorkItems, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__numWorkItems, put = __cordl_internal_set__numWorkItems)) int32_t _numWorkItems;

  /// @brief Field _outputCachePathRoot, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__outputCachePathRoot, put = __cordl_internal_set__outputCachePathRoot))::StringW _outputCachePathRoot;

  /// @brief Field _repaintUIDelegate, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__repaintUIDelegate, put = __cordl_internal_set__repaintUIDelegate))::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate* _repaintUIDelegate;

  /// @brief Field _selectedTOPNetwork, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedTOPNetwork, put = __cordl_internal_set__selectedTOPNetwork)) int32_t _selectedTOPNetwork;

  /// @brief Field _topNetworkNames, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__topNetworkNames, put = __cordl_internal_set__topNetworkNames))::ArrayW<::StringW, ::Array<::StringW>*> _topNetworkNames;

  /// @brief Field _topNetworks, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__topNetworks, put = __cordl_internal_set__topNetworks))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>* _topNetworks;

  /// @brief Field _useHEngineData, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get__useHEngineData, put = __cordl_internal_set__useHEngineData)) bool _useHEngineData;

  /// @brief Field _workItemTally, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__workItemTally, put = __cordl_internal_set__workItemTally))::HoudiniEngineUnity::HEU_WorkItemTally* _workItemTally;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method Awake, addr 0x22fb408, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CancelCook, addr 0x22fd964, size 0x60, virtual false, abstract: false, final false
  inline void CancelCook();

  /// @brief Method ClearAllTOPData, addr 0x22fbc0c, size 0x2c4, virtual false, abstract: false, final false
  inline void ClearAllTOPData();

  /// @brief Method ClearTOPNetworkWorkItemResults, addr 0x22fd230, size 0x140, virtual false, abstract: false, final false
  static inline void ClearTOPNetworkWorkItemResults(::HoudiniEngineUnity::HEU_TOPNetworkData* topNetwork);

  /// @brief Method ClearTOPNodeWorkItemResults, addr 0x22fcf38, size 0x120, virtual false, abstract: false, final false
  static inline void ClearTOPNodeWorkItemResults(::HoudiniEngineUnity::HEU_TOPNodeData* topNode);

  /// @brief Method ClearWorkItemResult, addr 0x22fd6d0, size 0x74, virtual false, abstract: false, final false
  static inline void ClearWorkItemResult(::HoudiniEngineUnity::HEU_TOPNodeData* topNode, ::HoudiniEngineUnity::HEU_TOPWorkResult* result);

  /// @brief Method ClearWorkItemResultByID, addr 0x22fd558, size 0x1c, virtual false, abstract: false, final false
  static inline void ClearWorkItemResultByID(::HoudiniEngineUnity::HEU_TOPNodeData* topNode, int32_t workItemID);

  /// @brief Method CookOutput, addr 0x22fba24, size 0x60, virtual false, abstract: false, final false
  inline void CookOutput();

  /// @brief Method CookTOPNode, addr 0x22fd7f8, size 0x20, virtual false, abstract: false, final false
  inline void CookTOPNode(::HoudiniEngineUnity::HEU_TOPNodeData* topNode);

  /// @brief Method DestroyWorkItemResultData, addr 0x22fd370, size 0x1e8, virtual false, abstract: false, final false
  static inline void DestroyWorkItemResultData(::HoudiniEngineUnity::HEU_TOPNodeData* topNode, ::HoudiniEngineUnity::HEU_TOPWorkResult* result);

  /// @brief Method DirtyAll, addr 0x22fd820, size 0x20, virtual false, abstract: false, final false
  inline void DirtyAll();

  /// @brief Method DirtyTOPNode, addr 0x22fd7d0, size 0x20, virtual false, abstract: false, final false
  inline void DirtyTOPNode(::HoudiniEngineUnity::HEU_TOPNodeData* topNode);

  /// @brief Method GetHAPISession, addr 0x22fc3b8, size 0x8c, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_SessionBase* GetHAPISession();

  /// @brief Method GetLoadRootTransform, addr 0x22fe038, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetLoadRootTransform();

  /// @brief Method GetSelectedTOPNetwork, addr 0x22fd114, size 0x8, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_TOPNetworkData* GetSelectedTOPNetwork();

  /// @brief Method GetSelectedTOPNode, addr 0x22fd1a0, size 0x90, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_TOPNodeData* GetSelectedTOPNode();

  /// @brief Method GetTOPNetwork, addr 0x22fd11c, size 0x84, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_TOPNetworkData* GetTOPNetwork(int32_t index);

  /// @brief Method GetTOPNetworkByName, addr 0x22fc7fc, size 0xcc, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_TOPNetworkData* GetTOPNetworkByName(::StringW name, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>* topNetworks);

  /// @brief Method GetTOPNode, addr 0x22fe11c, size 0x170, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_TOPNodeData* GetTOPNode(int32_t nodeID);

  /// @brief Method GetTOPNodeByName, addr 0x22fcd88, size 0xcc, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_TOPNodeData* GetTOPNodeByName(::StringW name, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNodeData*>* topNodes);

  /// @brief Method GetTOPNodeStatus, addr 0x22fe564, size 0x100, virtual false, abstract: false, final false
  inline ::StringW GetTOPNodeStatus(::HoudiniEngineUnity::HEU_TOPNodeData* topNode);

  /// @brief Method GetWorkResultByID, addr 0x22fd574, size 0x15c, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_TOPWorkResult* GetWorkResultByID(::HoudiniEngineUnity::HEU_TOPNodeData* topNode, int32_t workItemID);

  /// @brief Method HandleInitialLoad, addr 0x22fb40c, size 0x4, virtual false, abstract: false, final false
  inline void HandleInitialLoad();

  /// @brief Method LoadResults, addr 0x22fd9c8, size 0x5ec, virtual false, abstract: false, final false
  inline void LoadResults(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode, ::HoudiniEngineUnity::HAPI_PDG_WorkitemInfo workItemInfo,
                          ::ArrayW<::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo, ::Array<::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo>*> resultInfos, int32_t workItemID);

  static inline ::HoudiniEngineUnity::HEU_PDGAssetLink* New_ctor();

  /// @brief Method NotifyAssetCooked, addr 0x22fb9f8, size 0x2c, virtual false, abstract: false, final false
  inline void NotifyAssetCooked(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool bSuccess, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* generatedOutputs);

  /// @brief Method NotifyAssetCooked, addr 0x22fbbec, size 0x10, virtual false, abstract: false, final false
  inline void NotifyAssetCooked(::HoudiniEngineUnity::HEU_CookedEventData* cookedEventData);

  /// @brief Method NotifyAssetCooked, addr 0x22fbbfc, size 0x10, virtual false, abstract: false, final false
  inline void NotifyAssetCooked(::HoudiniEngineUnity::HEU_ReloadEventData* reloadEventData);

  /// @brief Method OnAfterDeserialize, addr 0x22fb414, size 0x4, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x22fb410, size 0x4, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method OnDestroy, addr 0x22fb418, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ParseHEngineData, addr 0x22fc630, size 0x1cc, virtual false, abstract: false, final false
  static inline void ParseHEngineData(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t topNodeID, ByRef<::HoudiniEngineUnity::HAPI_NodeInfo> nodeInfo,
                                      ByRef<::HoudiniEngineUnity::TOPNodeTags*> nodeTags);

  /// @brief Method PauseCook, addr 0x22fd900, size 0x60, virtual false, abstract: false, final false
  inline void PauseCook();

  /// @brief Method PopulateFromHDA, addr 0x22fba84, size 0x168, virtual false, abstract: false, final false
  inline void PopulateFromHDA();

  /// @brief Method PopulateTOPNetworks, addr 0x22fbeec, size 0x4cc, virtual false, abstract: false, final false
  inline bool PopulateTOPNetworks();

  /// @brief Method PopulateTOPNodes, addr 0x22fc9a0, size 0x3e8, virtual false, abstract: false, final false
  static inline bool PopulateTOPNodes(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_TOPNetworkData* topNetwork, ::ArrayW<int32_t, ::Array<int32_t>*> topNodeIDs,
                                      bool useHEngineData);

  /// @brief Method Refresh, addr 0x22fb5cc, size 0x42c, virtual false, abstract: false, final false
  inline void Refresh();

  /// @brief Method RepaintUI, addr 0x22fbed0, size 0x1c, virtual false, abstract: false, final false
  inline void RepaintUI();

  /// @brief Method Reset, addr 0x22fb5c8, size 0x4, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ResetTOPNetworkWorkItemTally, addr 0x22fd854, size 0xa8, virtual false, abstract: false, final false
  inline void ResetTOPNetworkWorkItemTally(::HoudiniEngineUnity::HEU_TOPNetworkData* topNetwork);

  /// @brief Method SelectTOPNetwork, addr 0x22fd058, size 0x5c, virtual false, abstract: false, final false
  inline void SelectTOPNetwork(int32_t newIndex);

  /// @brief Method SelectTOPNode, addr 0x22fd0b4, size 0x60, virtual false, abstract: false, final false
  inline void SelectTOPNode(::HoudiniEngineUnity::HEU_TOPNetworkData* network, int32_t newIndex);

  /// @brief Method Setup, addr 0x22fb49c, size 0x12c, virtual false, abstract: false, final false
  inline void Setup(::HoudiniEngineUnity::HEU_HoudiniAsset* hdaAsset);

  /// @brief Method UpdateTOPNodeResultsVisibility, addr 0x22fd744, size 0x8c, virtual false, abstract: false, final false
  inline void UpdateTOPNodeResultsVisibility(::HoudiniEngineUnity::HEU_TOPNodeData* topNode);

  /// @brief Method UpdateWorkItemTally, addr 0x22fe28c, size 0x2d8, virtual false, abstract: false, final false
  inline void UpdateWorkItemTally();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__assetGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__assetGO();

  constexpr int32_t const& __cordl_internal_get__assetID() const;

  constexpr int32_t& __cordl_internal_get__assetID();

  constexpr ::StringW const& __cordl_internal_get__assetName() const;

  constexpr ::StringW& __cordl_internal_get__assetName();

  constexpr ::StringW const& __cordl_internal_get__assetPath() const;

  constexpr ::StringW& __cordl_internal_get__assetPath();

  constexpr bool const& __cordl_internal_get__autoCook() const;

  constexpr bool& __cordl_internal_get__autoCook();

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> const& __cordl_internal_get__heu() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>& __cordl_internal_get__heu();

  constexpr ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState const& __cordl_internal_get__linkState() const;

  constexpr ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState& __cordl_internal_get__linkState();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__loadRootGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__loadRootGameObject();

  constexpr int32_t const& __cordl_internal_get__numWorkItems() const;

  constexpr int32_t& __cordl_internal_get__numWorkItems();

  constexpr ::StringW const& __cordl_internal_get__outputCachePathRoot() const;

  constexpr ::StringW& __cordl_internal_get__outputCachePathRoot();

  constexpr ::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate*& __cordl_internal_get__repaintUIDelegate();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate*> const& __cordl_internal_get__repaintUIDelegate() const;

  constexpr int32_t const& __cordl_internal_get__selectedTOPNetwork() const;

  constexpr int32_t& __cordl_internal_get__selectedTOPNetwork();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__topNetworkNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__topNetworkNames();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>*& __cordl_internal_get__topNetworks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>*> const& __cordl_internal_get__topNetworks() const;

  constexpr bool const& __cordl_internal_get__useHEngineData() const;

  constexpr bool& __cordl_internal_get__useHEngineData();

  constexpr ::HoudiniEngineUnity::HEU_WorkItemTally*& __cordl_internal_get__workItemTally();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_WorkItemTally*> const& __cordl_internal_get__workItemTally() const;

  constexpr void __cordl_internal_set__assetGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__assetID(int32_t value);

  constexpr void __cordl_internal_set__assetName(::StringW value);

  constexpr void __cordl_internal_set__assetPath(::StringW value);

  constexpr void __cordl_internal_set__autoCook(bool value);

  constexpr void __cordl_internal_set__heu(::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> value);

  constexpr void __cordl_internal_set__linkState(::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState value);

  constexpr void __cordl_internal_set__loadRootGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__numWorkItems(int32_t value);

  constexpr void __cordl_internal_set__outputCachePathRoot(::StringW value);

  constexpr void __cordl_internal_set__repaintUIDelegate(::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate* value);

  constexpr void __cordl_internal_set__selectedTOPNetwork(int32_t value);

  constexpr void __cordl_internal_set__topNetworkNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__topNetworks(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>* value);

  constexpr void __cordl_internal_set__useHEngineData(bool value);

  constexpr void __cordl_internal_set__workItemTally(::HoudiniEngineUnity::HEU_WorkItemTally* value);

  /// @brief Method .ctor, addr 0x22fe6a0, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AssetLinkState, addr 0x22fe698, size 0x8, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState get_AssetLinkState();

  /// @brief Method get_AssetName, addr 0x22fe688, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AssetName();

  /// @brief Method get_SelectedTOPNetwork, addr 0x22fe690, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_SelectedTOPNetwork();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_PDGAssetLink();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_PDGAssetLink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_PDGAssetLink(HEU_PDGAssetLink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_PDGAssetLink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_PDGAssetLink(HEU_PDGAssetLink const&) = delete;

  /// @brief Field _assetPath, offset: 0x18, size: 0x8, def value: None
  ::StringW ____assetPath;

  /// @brief Field _assetGO, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____assetGO;

  /// @brief Field _assetName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____assetName;

  /// @brief Field _assetID, offset: 0x30, size: 0x4, def value: None
  int32_t ____assetID;

  /// @brief Field _heu, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> ____heu;

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
  ::UnityW<::UnityEngine::GameObject> ____loadRootGameObject;

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
