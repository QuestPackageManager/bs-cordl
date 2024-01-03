#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MissionNodesManager)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace GlobalNamespace {
class CampaignProgressModel;
}
namespace GlobalNamespace {
class MissionNodeConnection;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class MissionStagesManager;
}
namespace GlobalNamespace {
class MissionNodeVisualController;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5549))
// CS Name: ::MissionNodesManager*
class CORDL_TYPE MissionNodesManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _rootMissionNode, offset 0x18, size 0x8
  __declspec(property(get = __get__rootMissionNode, put = __set__rootMissionNode))::GlobalNamespace::MissionNode* _rootMissionNode;

  /// @brief Field _finalMissionNode, offset 0x20, size 0x8
  __declspec(property(get = __get__finalMissionNode, put = __set__finalMissionNode))::GlobalNamespace::MissionNode* _finalMissionNode;

  /// @brief Field _missionStagesManager, offset 0x28, size 0x8
  __declspec(property(get = __get__missionStagesManager, put = __set__missionStagesManager))::GlobalNamespace::MissionStagesManager* _missionStagesManager;

  /// @brief Field _connectionsParentObject, offset 0x30, size 0x8
  __declspec(property(get = __get__connectionsParentObject, put = __set__connectionsParentObject))::UnityEngine::GameObject* _connectionsParentObject;

  /// @brief Field _missionNodesParentObject, offset 0x38, size 0x8
  __declspec(property(get = __get__missionNodesParentObject, put = __set__missionNodesParentObject))::UnityEngine::GameObject* _missionNodesParentObject;

  /// @brief Field _missionProgressModel, offset 0x40, size 0x8
  __declspec(property(get = __get__missionProgressModel, put = __set__missionProgressModel))::GlobalNamespace::CampaignProgressModel* _missionProgressModel;

  /// @brief Field _allMissionNodeConnections, offset 0x48, size 0x8
  __declspec(property(get = __get__allMissionNodeConnections,
                      put = __set__allMissionNodeConnections))::ArrayW<::GlobalNamespace::MissionNodeConnection*, ::Array<::GlobalNamespace::MissionNodeConnection*>*> _allMissionNodeConnections;

  /// @brief Field _allMissionNodes, offset 0x50, size 0x8
  __declspec(property(get = __get__allMissionNodes, put = __set__allMissionNodes))::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*> _allMissionNodes;

  /// @brief Field _isInitialized, offset 0x58, size 0x1
  __declspec(property(get = __get__isInitialized, put = __set__isInitialized)) bool _isInitialized;

  __declspec(property(get = get_rootMissionNode))::GlobalNamespace::MissionNode* rootMissionNode;

  __declspec(property(get = get_finalMissionNode))::GlobalNamespace::MissionNode* finalMissionNode;

  __declspec(property(get = get_missionStagesManager))::GlobalNamespace::MissionStagesManager* missionStagesManager;

  __declspec(property(get = get_missionProgressModel))::GlobalNamespace::CampaignProgressModel* missionProgressModel;

  __declspec(property(get = get_allMissionNodes))::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*> allMissionNodes;

  __declspec(property(get = get_IsInitialized)) bool IsInitialized;

  constexpr ::GlobalNamespace::MissionNode*& __get__rootMissionNode();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNode*> const& __get__rootMissionNode() const;

  constexpr void __set__rootMissionNode(::GlobalNamespace::MissionNode* value);

  constexpr ::GlobalNamespace::MissionNode*& __get__finalMissionNode();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNode*> const& __get__finalMissionNode() const;

  constexpr void __set__finalMissionNode(::GlobalNamespace::MissionNode* value);

  constexpr ::GlobalNamespace::MissionStagesManager*& __get__missionStagesManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionStagesManager*> const& __get__missionStagesManager() const;

  constexpr void __set__missionStagesManager(::GlobalNamespace::MissionStagesManager* value);

  constexpr ::UnityEngine::GameObject*& __get__connectionsParentObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__connectionsParentObject() const;

  constexpr void __set__connectionsParentObject(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__missionNodesParentObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__missionNodesParentObject() const;

  constexpr void __set__missionNodesParentObject(::UnityEngine::GameObject* value);

  constexpr ::GlobalNamespace::CampaignProgressModel*& __get__missionProgressModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CampaignProgressModel*> const& __get__missionProgressModel() const;

  constexpr void __set__missionProgressModel(::GlobalNamespace::CampaignProgressModel* value);

  constexpr ::ArrayW<::GlobalNamespace::MissionNodeConnection*, ::Array<::GlobalNamespace::MissionNodeConnection*>*>& __get__allMissionNodeConnections();

  constexpr ::ArrayW<::GlobalNamespace::MissionNodeConnection*, ::Array<::GlobalNamespace::MissionNodeConnection*>*> const& __get__allMissionNodeConnections() const;

  constexpr void __set__allMissionNodeConnections(::ArrayW<::GlobalNamespace::MissionNodeConnection*, ::Array<::GlobalNamespace::MissionNodeConnection*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*>& __get__allMissionNodes();

  constexpr ::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*> const& __get__allMissionNodes() const;

  constexpr void __set__allMissionNodes(::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*> value);

  constexpr bool& __get__isInitialized();

  constexpr bool const& __get__isInitialized() const;

  constexpr void __set__isInitialized(bool value);

  /// @brief Method get_rootMissionNode, addr 0x22a1618, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MissionNode* get_rootMissionNode();

  /// @brief Method get_finalMissionNode, addr 0x22a1620, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MissionNode* get_finalMissionNode();

  /// @brief Method get_missionStagesManager, addr 0x22a1628, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MissionStagesManager* get_missionStagesManager();

  /// @brief Method get_missionProgressModel, addr 0x22a1630, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::CampaignProgressModel* get_missionProgressModel();

  /// @brief Method get_allMissionNodes, addr 0x22a1638, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*> get_allMissionNodes();

  /// @brief Method get_IsInitialized, addr 0x22a1640, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsInitialized();

  /// @brief Method Awake, addr 0x22a1648, size 0x2c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method SetupNodeMap, addr 0x229f54c, size 0x3c, virtual false, abstract: false, final false
  inline void SetupNodeMap();

  /// @brief Method MissionWasCleared, addr 0x22a1a68, size 0x6c, virtual false, abstract: false, final false
  inline bool MissionWasCleared(::GlobalNamespace::MissionNode* missionNode);

  /// @brief Method GetMissionNodeWithModelClearedStateInconsistency, addr 0x229f19c, size 0xb0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MissionNode* GetMissionNodeWithModelClearedStateInconsistency();

  /// @brief Method DidFirstLockedMissionStageChange, addr 0x229fc6c, size 0x9c, virtual false, abstract: false, final false
  inline bool DidFirstLockedMissionStageChange();

  /// @brief Method UpdateStageLockText, addr 0x229fc38, size 0x34, virtual false, abstract: false, final false
  inline void UpdateStageLockText();

  /// @brief Method GetTopMostNotClearedMissionNode, addr 0x229f318, size 0x14c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MissionNode* GetTopMostNotClearedMissionNode();

  /// @brief Method GetAllMissionNodes, addr 0x22a1674, size 0xac, virtual false, abstract: false, final false
  inline void GetAllMissionNodes();

  /// @brief Method GetAllMissionNodes, addr 0x22a1c08, size 0xe4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MissionNode*>* GetAllMissionNodes(::GlobalNamespace::MissionNode* node,
                                                                                                        ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MissionNode*>* visited);

  /// @brief Method GetNewEnabledConnection, addr 0x22a022c, size 0x174, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::MissionNodeConnection*, ::Array<::GlobalNamespace::MissionNodeConnection*>*> GetNewEnabledConnection();

  /// @brief Method ResetAllNodes, addr 0x22a17e0, size 0x4c, virtual false, abstract: false, final false
  inline void ResetAllNodes();

  /// @brief Method SetupStages, addr 0x22a182c, size 0x64, virtual false, abstract: false, final false
  inline void SetupStages();

  /// @brief Method RegisterAllNodes, addr 0x22a1720, size 0xc0, virtual false, abstract: false, final false
  inline void RegisterAllNodes();

  /// @brief Method SetupNodeTree, addr 0x22a1890, size 0x118, virtual false, abstract: false, final false
  inline void SetupNodeTree(::GlobalNamespace::MissionNodeVisualController* node, bool parentCleared);

  /// @brief Method IsNodeInteractable, addr 0x22a1cec, size 0x5c, virtual false, abstract: false, final false
  inline bool IsNodeInteractable(::GlobalNamespace::MissionNodeVisualController* node, bool parentCleared);

  /// @brief Method SetupNodeConnections, addr 0x22a19a8, size 0xc0, virtual false, abstract: false, final false
  inline void SetupNodeConnections();

  static inline ::GlobalNamespace::MissionNodesManager* New_ctor();

  /// @brief Method .ctor, addr 0x22a1d78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionNodesManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionNodesManager(MissionNodesManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionNodesManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionNodesManager(MissionNodesManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionNodesManager();

public:
  /// @brief Field _rootMissionNode, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MissionNode* ____rootMissionNode;

  /// @brief Field _finalMissionNode, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MissionNode* ____finalMissionNode;

  /// @brief Field _missionStagesManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MissionStagesManager* ____missionStagesManager;

  /// @brief Field _connectionsParentObject, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____connectionsParentObject;

  /// @brief Field _missionNodesParentObject, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____missionNodesParentObject;

  /// @brief Field _missionProgressModel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::CampaignProgressModel* ____missionProgressModel;

  /// @brief Field _allMissionNodeConnections, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MissionNodeConnection*, ::Array<::GlobalNamespace::MissionNodeConnection*>*> ____allMissionNodeConnections;

  /// @brief Field _allMissionNodes, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*> ____allMissionNodes;

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
