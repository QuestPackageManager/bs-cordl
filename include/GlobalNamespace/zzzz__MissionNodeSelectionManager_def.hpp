#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionNodeSelectionManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MissionNodeSelectionManager)
namespace GlobalNamespace {
class MissionNodeVisualController;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class MissionNodesManager;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionNodeSelectionManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionNodeSelectionManager);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionNodeSelectionManager
class CORDL_TYPE MissionNodeSelectionManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _missionNodes, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__missionNodes,
                      put = __cordl_internal_set__missionNodes)) ::ArrayW<::UnityW<::GlobalNamespace::MissionNode>, ::Array<::UnityW<::GlobalNamespace::MissionNode>>*>
      _missionNodes;

  /// @brief Field _missionNodesManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__missionNodesManager, put = __cordl_internal_set__missionNodesManager)) ::UnityW<::GlobalNamespace::MissionNodesManager> _missionNodesManager;

  /// @brief Field _selectedNode, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedNode, put = __cordl_internal_set__selectedNode)) ::UnityW<::GlobalNamespace::MissionNodeVisualController> _selectedNode;

  /// @brief Field didSelectMissionNodeEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectMissionNodeEvent,
                      put = __cordl_internal_set_didSelectMissionNodeEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>* didSelectMissionNodeEvent;

  /// @brief Method DeselectSelectedNode, addr 0x3c078ec, size 0x80, virtual false, abstract: false, final false
  inline void DeselectSelectedNode();

  /// @brief Method HandleNodeWasDisplayed, addr 0x3c07fa0, size 0x80, virtual false, abstract: false, final false
  inline void HandleNodeWasDisplayed(::GlobalNamespace::MissionNodeVisualController* missionNode);

  /// @brief Method HandleNodeWasSelect, addr 0x3c07eec, size 0xb4, virtual false, abstract: false, final false
  inline void HandleNodeWasSelect(::GlobalNamespace::MissionNodeVisualController* missionNode);

  static inline ::GlobalNamespace::MissionNodeSelectionManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x3c07c24, size 0x168, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3c07994, size 0x130, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionNode>, ::Array<::UnityW<::GlobalNamespace::MissionNode>>*> const& __cordl_internal_get__missionNodes() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionNode>, ::Array<::UnityW<::GlobalNamespace::MissionNode>>*>& __cordl_internal_get__missionNodes();

  constexpr ::UnityW<::GlobalNamespace::MissionNodesManager> const& __cordl_internal_get__missionNodesManager() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNodesManager>& __cordl_internal_get__missionNodesManager();

  constexpr ::UnityW<::GlobalNamespace::MissionNodeVisualController> const& __cordl_internal_get__selectedNode() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNodeVisualController>& __cordl_internal_get__selectedNode();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>* const& __cordl_internal_get_didSelectMissionNodeEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>*& __cordl_internal_get_didSelectMissionNodeEvent();

  constexpr void __cordl_internal_set__missionNodes(::ArrayW<::UnityW<::GlobalNamespace::MissionNode>, ::Array<::UnityW<::GlobalNamespace::MissionNode>>*> value);

  constexpr void __cordl_internal_set__missionNodesManager(::UnityW<::GlobalNamespace::MissionNodesManager> value);

  constexpr void __cordl_internal_set__selectedNode(::UnityW<::GlobalNamespace::MissionNodeVisualController> value);

  constexpr void __cordl_internal_set_didSelectMissionNodeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>* value);

  /// @brief Method .ctor, addr 0x3c08020, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectMissionNodeEvent, addr 0x3c0778c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectMissionNodeEvent(::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>* value);

  /// @brief Method remove_didSelectMissionNodeEvent, addr 0x3c0783c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectMissionNodeEvent(::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionNodeSelectionManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionNodeSelectionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionNodeSelectionManager(MissionNodeSelectionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionNodeSelectionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionNodeSelectionManager(MissionNodeSelectionManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4819 };

  /// @brief Field _missionNodesManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNodesManager> ____missionNodesManager;

  /// @brief Field didSelectMissionNodeEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>* ___didSelectMissionNodeEvent;

  /// @brief Field _missionNodes, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::MissionNode>, ::Array<::UnityW<::GlobalNamespace::MissionNode>>*> ____missionNodes;

  /// @brief Field _selectedNode, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNodeVisualController> ____selectedNode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionNodeSelectionManager, ____missionNodesManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeSelectionManager, ___didSelectMissionNodeEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeSelectionManager, ____missionNodes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeSelectionManager, ____selectedNode) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionNodeSelectionManager, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionNodeSelectionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionNodeSelectionManager*, "", "MissionNodeSelectionManager");
