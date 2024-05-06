#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MissionNodesManager)
namespace GlobalNamespace {
class CampaignProgressModel;
}
namespace GlobalNamespace {
class IMissionNode;
}
namespace GlobalNamespace {
class IMissionNodesManager;
}
namespace GlobalNamespace {
class MissionNodeConnection;
}
namespace GlobalNamespace {
class MissionNodeVisualController;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class MissionStagesManager;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionNodesManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionNodesManager);
// Type: ::MissionNodesManager
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 89, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionNodesManager*
class CORDL_TYPE MissionNodesManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = IMissionNodesManager_get_allMissionNodes))::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::IMissionNode*>* IMissionNodesManager_allMissionNodes;

  __declspec(property(get = IMissionNodesManager_get_finalMissionNode))::GlobalNamespace::IMissionNode* IMissionNodesManager_finalMissionNode;

  __declspec(property(get = get_IsInitialized)) bool IsInitialized;

  /// @brief Field _allMissionNodeConnections, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__allMissionNodeConnections,
                      put = __cordl_internal_set__allMissionNodeConnections))::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>,
                                                                                      ::Array<::UnityW<::GlobalNamespace::MissionNodeConnection>>*> _allMissionNodeConnections;

  /// @brief Field _allMissionNodes, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__allMissionNodes,
                      put = __cordl_internal_set__allMissionNodes))::ArrayW<::UnityW<::GlobalNamespace::MissionNode>, ::Array<::UnityW<::GlobalNamespace::MissionNode>>*> _allMissionNodes;

  /// @brief Field _connectionsParentObject, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__connectionsParentObject, put = __cordl_internal_set__connectionsParentObject))::UnityW<::UnityEngine::GameObject> _connectionsParentObject;

  /// @brief Field _finalMissionNode, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__finalMissionNode, put = __cordl_internal_set__finalMissionNode))::UnityW<::GlobalNamespace::MissionNode> _finalMissionNode;

  /// @brief Field _isInitialized, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _missionNodesParentObject, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__missionNodesParentObject, put = __cordl_internal_set__missionNodesParentObject))::UnityW<::UnityEngine::GameObject> _missionNodesParentObject;

  /// @brief Field _missionProgressModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__missionProgressModel, put = __cordl_internal_set__missionProgressModel))::UnityW<::GlobalNamespace::CampaignProgressModel> _missionProgressModel;

  /// @brief Field _missionStagesManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__missionStagesManager, put = __cordl_internal_set__missionStagesManager))::UnityW<::GlobalNamespace::MissionStagesManager> _missionStagesManager;

  /// @brief Field _rootMissionNode, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__rootMissionNode, put = __cordl_internal_set__rootMissionNode))::UnityW<::GlobalNamespace::MissionNode> _rootMissionNode;

  __declspec(property(get = get_allMissionNodes))::ArrayW<::UnityW<::GlobalNamespace::MissionNode>, ::Array<::UnityW<::GlobalNamespace::MissionNode>>*> allMissionNodes;

  __declspec(property(get = get_finalMissionNode))::UnityW<::GlobalNamespace::MissionNode> finalMissionNode;

  __declspec(property(get = get_missionProgressModel))::UnityW<::GlobalNamespace::CampaignProgressModel> missionProgressModel;

  __declspec(property(get = get_missionStagesManager))::UnityW<::GlobalNamespace::MissionStagesManager> missionStagesManager;

  __declspec(property(get = get_rootMissionNode))::UnityW<::GlobalNamespace::MissionNode> rootMissionNode;

  /// @brief Convert operator to "::GlobalNamespace::IMissionNodesManager"
  constexpr operator ::GlobalNamespace::IMissionNodesManager*() noexcept;

  /// @brief Method Awake, addr 0x26293b8, size 0x2c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method DidFirstLockedMissionStageChange, addr 0x26279cc, size 0x9c, virtual false, abstract: false, final false
  inline bool DidFirstLockedMissionStageChange();

  /// @brief Method GetAllMissionNodes, addr 0x2629978, size 0xe4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MissionNode>>*
  GetAllMissionNodes(::GlobalNamespace::MissionNode* node, ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MissionNode>>* visited);

  /// @brief Method GetAllMissionNodes, addr 0x26293e4, size 0xac, virtual false, abstract: false, final false
  inline void GetAllMissionNodes();

  /// @brief Method GetMissionNodeWithModelClearedStateInconsistency, addr 0x2626efc, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MissionNode> GetMissionNodeWithModelClearedStateInconsistency();

  /// @brief Method GetNewEnabledConnection, addr 0x2627f8c, size 0x174, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>, ::Array<::UnityW<::GlobalNamespace::MissionNodeConnection>>*> GetNewEnabledConnection();

  /// @brief Method GetTopMostNotClearedMissionNode, addr 0x2627078, size 0x14c, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MissionNode> GetTopMostNotClearedMissionNode();

  /// @brief Method IMissionNodesManager.get_allMissionNodes, addr 0x26293b0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::IMissionNode*>* IMissionNodesManager_get_allMissionNodes();

  /// @brief Method IMissionNodesManager.get_finalMissionNode, addr 0x26293a8, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IMissionNode* IMissionNodesManager_get_finalMissionNode();

  /// @brief Method IsNodeInteractable, addr 0x2629a5c, size 0x5c, virtual false, abstract: false, final false
  inline bool IsNodeInteractable(::GlobalNamespace::MissionNodeVisualController* node, bool parentCleared);

  /// @brief Method MissionWasCleared, addr 0x26297d8, size 0x6c, virtual false, abstract: false, final false
  inline bool MissionWasCleared(::GlobalNamespace::MissionNode* missionNode);

  static inline ::GlobalNamespace::MissionNodesManager* New_ctor();

  /// @brief Method RegisterAllNodes, addr 0x2629490, size 0xc0, virtual false, abstract: false, final false
  inline void RegisterAllNodes();

  /// @brief Method ResetAllNodes, addr 0x2629550, size 0x4c, virtual false, abstract: false, final false
  inline void ResetAllNodes();

  /// @brief Method SetupNodeConnections, addr 0x2629718, size 0xc0, virtual false, abstract: false, final false
  inline void SetupNodeConnections();

  /// @brief Method SetupNodeMap, addr 0x26272ac, size 0x3c, virtual false, abstract: false, final false
  inline void SetupNodeMap();

  /// @brief Method SetupNodeTree, addr 0x2629600, size 0x118, virtual false, abstract: false, final false
  inline void SetupNodeTree(::GlobalNamespace::MissionNodeVisualController* node, bool parentCleared);

  /// @brief Method SetupStages, addr 0x262959c, size 0x64, virtual false, abstract: false, final false
  inline void SetupStages();

  /// @brief Method UpdateStageLockText, addr 0x2627998, size 0x34, virtual false, abstract: false, final false
  inline void UpdateStageLockText();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>, ::Array<::UnityW<::GlobalNamespace::MissionNodeConnection>>*> const& __cordl_internal_get__allMissionNodeConnections() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>, ::Array<::UnityW<::GlobalNamespace::MissionNodeConnection>>*>& __cordl_internal_get__allMissionNodeConnections();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionNode>, ::Array<::UnityW<::GlobalNamespace::MissionNode>>*> const& __cordl_internal_get__allMissionNodes() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionNode>, ::Array<::UnityW<::GlobalNamespace::MissionNode>>*>& __cordl_internal_get__allMissionNodes();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__connectionsParentObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__connectionsParentObject();

  constexpr ::UnityW<::GlobalNamespace::MissionNode> const& __cordl_internal_get__finalMissionNode() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNode>& __cordl_internal_get__finalMissionNode();

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__missionNodesParentObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__missionNodesParentObject();

  constexpr ::UnityW<::GlobalNamespace::CampaignProgressModel> const& __cordl_internal_get__missionProgressModel() const;

  constexpr ::UnityW<::GlobalNamespace::CampaignProgressModel>& __cordl_internal_get__missionProgressModel();

  constexpr ::UnityW<::GlobalNamespace::MissionStagesManager> const& __cordl_internal_get__missionStagesManager() const;

  constexpr ::UnityW<::GlobalNamespace::MissionStagesManager>& __cordl_internal_get__missionStagesManager();

  constexpr ::UnityW<::GlobalNamespace::MissionNode> const& __cordl_internal_get__rootMissionNode() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNode>& __cordl_internal_get__rootMissionNode();

  constexpr void __cordl_internal_set__allMissionNodeConnections(::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>, ::Array<::UnityW<::GlobalNamespace::MissionNodeConnection>>*> value);

  constexpr void __cordl_internal_set__allMissionNodes(::ArrayW<::UnityW<::GlobalNamespace::MissionNode>, ::Array<::UnityW<::GlobalNamespace::MissionNode>>*> value);

  constexpr void __cordl_internal_set__connectionsParentObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__finalMissionNode(::UnityW<::GlobalNamespace::MissionNode> value);

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set__missionNodesParentObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__missionProgressModel(::UnityW<::GlobalNamespace::CampaignProgressModel> value);

  constexpr void __cordl_internal_set__missionStagesManager(::UnityW<::GlobalNamespace::MissionStagesManager> value);

  constexpr void __cordl_internal_set__rootMissionNode(::UnityW<::GlobalNamespace::MissionNode> value);

  /// @brief Method .ctor, addr 0x2629ae8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsInitialized, addr 0x26293a0, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsInitialized();

  /// @brief Method get_allMissionNodes, addr 0x2629398, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::MissionNode>, ::Array<::UnityW<::GlobalNamespace::MissionNode>>*> get_allMissionNodes();

  /// @brief Method get_finalMissionNode, addr 0x2629380, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MissionNode> get_finalMissionNode();

  /// @brief Method get_missionProgressModel, addr 0x2629390, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::CampaignProgressModel> get_missionProgressModel();

  /// @brief Method get_missionStagesManager, addr 0x2629388, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MissionStagesManager> get_missionStagesManager();

  /// @brief Method get_rootMissionNode, addr 0x2629378, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MissionNode> get_rootMissionNode();

  /// @brief Convert to "::GlobalNamespace::IMissionNodesManager"
  constexpr ::GlobalNamespace::IMissionNodesManager* i___GlobalNamespace__IMissionNodesManager() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionNodesManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionNodesManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionNodesManager(MissionNodesManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionNodesManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionNodesManager(MissionNodesManager const&) = delete;

  /// @brief Field _rootMissionNode, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNode> ____rootMissionNode;

  /// @brief Field _finalMissionNode, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNode> ____finalMissionNode;

  /// @brief Field _missionStagesManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionStagesManager> ____missionStagesManager;

  /// @brief Field _connectionsParentObject, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____connectionsParentObject;

  /// @brief Field _missionNodesParentObject, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____missionNodesParentObject;

  /// @brief Field _missionProgressModel, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CampaignProgressModel> ____missionProgressModel;

  /// @brief Field _allMissionNodeConnections, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>, ::Array<::UnityW<::GlobalNamespace::MissionNodeConnection>>*> ____allMissionNodeConnections;

  /// @brief Field _allMissionNodes, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::MissionNode>, ::Array<::UnityW<::GlobalNamespace::MissionNode>>*> ____allMissionNodes;

  /// @brief Field _isInitialized, offset: 0x58, size: 0x1, def value: None
  bool ____isInitialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionNodesManager, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodesManager, ____rootMissionNode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodesManager, ____finalMissionNode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodesManager, ____missionStagesManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodesManager, ____connectionsParentObject) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodesManager, ____missionNodesParentObject) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodesManager, ____missionProgressModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodesManager, ____allMissionNodeConnections) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodesManager, ____allMissionNodes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodesManager, ____isInitialized) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionNodesManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionNodesManager*, "", "MissionNodesManager");
