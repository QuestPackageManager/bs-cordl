#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: ::MissionNodeSelectionManager
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4853))
// CS Name: ::MissionNodeSelectionManager*
class CORDL_TYPE MissionNodeSelectionManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _missionNodesManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__missionNodesManager, put = __cordl_internal_set__missionNodesManager))::UnityW<::GlobalNamespace::MissionNodesManager> _missionNodesManager;

  /// @brief Field didSelectMissionNodeEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectMissionNodeEvent,
                      put = __cordl_internal_set_didSelectMissionNodeEvent))::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>* didSelectMissionNodeEvent;

  /// @brief Field _missionNodes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__missionNodes,
                      put = __cordl_internal_set__missionNodes))::ArrayW<::UnityW<::GlobalNamespace::MissionNode>, ::Array<::UnityW<::GlobalNamespace::MissionNode>>*> _missionNodes;

  /// @brief Field _selectedNode, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedNode, put = __cordl_internal_set__selectedNode))::UnityW<::GlobalNamespace::MissionNodeVisualController> _selectedNode;

  constexpr ::UnityW<::GlobalNamespace::MissionNodesManager>& __cordl_internal_get__missionNodesManager();

  constexpr ::UnityW<::GlobalNamespace::MissionNodesManager> const& __cordl_internal_get__missionNodesManager() const;

  constexpr void __cordl_internal_set__missionNodesManager(::UnityW<::GlobalNamespace::MissionNodesManager> value);

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>*& __cordl_internal_get_didSelectMissionNodeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>*> const& __cordl_internal_get_didSelectMissionNodeEvent() const;

  constexpr void __cordl_internal_set_didSelectMissionNodeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>* value);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionNode>, ::Array<::UnityW<::GlobalNamespace::MissionNode>>*>& __cordl_internal_get__missionNodes();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionNode>, ::Array<::UnityW<::GlobalNamespace::MissionNode>>*> const& __cordl_internal_get__missionNodes() const;

  constexpr void __cordl_internal_set__missionNodes(::ArrayW<::UnityW<::GlobalNamespace::MissionNode>, ::Array<::UnityW<::GlobalNamespace::MissionNode>>*> value);

  constexpr ::UnityW<::GlobalNamespace::MissionNodeVisualController>& __cordl_internal_get__selectedNode();

  constexpr ::UnityW<::GlobalNamespace::MissionNodeVisualController> const& __cordl_internal_get__selectedNode() const;

  constexpr void __cordl_internal_set__selectedNode(::UnityW<::GlobalNamespace::MissionNodeVisualController> value);

  /// @brief Method add_didSelectMissionNodeEvent, addr 0x23fb118, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectMissionNodeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>* value);

  /// @brief Method remove_didSelectMissionNodeEvent, addr 0x23fb1c8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectMissionNodeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>* value);

  /// @brief Method DeselectSelectedNode, addr 0x23fb278, size 0x80, virtual false, abstract: false, final false
  inline void DeselectSelectedNode();

  /// @brief Method Start, addr 0x23fb324, size 0x138, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23fb5bc, size 0x170, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleNodeWasSelect, addr 0x23fb88c, size 0xb4, virtual false, abstract: false, final false
  inline void HandleNodeWasSelect(::GlobalNamespace::MissionNodeVisualController* missionNode);

  /// @brief Method HandleNodeWasDisplayed, addr 0x23fb940, size 0x80, virtual false, abstract: false, final false
  inline void HandleNodeWasDisplayed(::GlobalNamespace::MissionNodeVisualController* missionNode);

  static inline ::GlobalNamespace::MissionNodeSelectionManager* New_ctor();

  /// @brief Method .ctor, addr 0x23fb9c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionNodeSelectionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionNodeSelectionManager(MissionNodeSelectionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionNodeSelectionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionNodeSelectionManager(MissionNodeSelectionManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionNodeSelectionManager();

public:
  /// @brief Field _missionNodesManager, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNodesManager> ____missionNodesManager;

  /// @brief Field didSelectMissionNodeEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>* ___didSelectMissionNodeEvent;

  /// @brief Field _missionNodes, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::MissionNode>, ::Array<::UnityW<::GlobalNamespace::MissionNode>>*> ____missionNodes;

  /// @brief Field _selectedNode, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNodeVisualController> ____selectedNode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionNodeSelectionManager, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeSelectionManager, ____missionNodesManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeSelectionManager, ___didSelectMissionNodeEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeSelectionManager, ____missionNodes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeSelectionManager, ____selectedNode) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionNodeSelectionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionNodeSelectionManager*, "", "MissionNodeSelectionManager");
