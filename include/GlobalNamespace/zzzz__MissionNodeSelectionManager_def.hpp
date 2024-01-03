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
class MissionNodesManager;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class MissionNode;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5547))
// CS Name: ::MissionNodeSelectionManager*
class CORDL_TYPE MissionNodeSelectionManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _missionNodesManager, offset 0x18, size 0x8
  __declspec(property(get = __get__missionNodesManager, put = __set__missionNodesManager))::GlobalNamespace::MissionNodesManager* _missionNodesManager;

  /// @brief Field didSelectMissionNodeEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_didSelectMissionNodeEvent, put = __set_didSelectMissionNodeEvent))::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>* didSelectMissionNodeEvent;

  /// @brief Field _missionNodes, offset 0x28, size 0x8
  __declspec(property(get = __get__missionNodes, put = __set__missionNodes))::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*> _missionNodes;

  /// @brief Field _selectedNode, offset 0x30, size 0x8
  __declspec(property(get = __get__selectedNode, put = __set__selectedNode))::GlobalNamespace::MissionNodeVisualController* _selectedNode;

  constexpr ::GlobalNamespace::MissionNodesManager*& __get__missionNodesManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNodesManager*> const& __get__missionNodesManager() const;

  constexpr void __set__missionNodesManager(::GlobalNamespace::MissionNodesManager* value);

  constexpr ::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>*& __get_didSelectMissionNodeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>*> const& __get_didSelectMissionNodeEvent() const;

  constexpr void __set_didSelectMissionNodeEvent(::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>* value);

  constexpr ::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*>& __get__missionNodes();

  constexpr ::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*> const& __get__missionNodes() const;

  constexpr void __set__missionNodes(::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*> value);

  constexpr ::GlobalNamespace::MissionNodeVisualController*& __get__selectedNode();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNodeVisualController*> const& __get__selectedNode() const;

  constexpr void __set__selectedNode(::GlobalNamespace::MissionNodeVisualController* value);

  /// @brief Method add_didSelectMissionNodeEvent, addr 0x22a0894, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectMissionNodeEvent(::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>* value);

  /// @brief Method remove_didSelectMissionNodeEvent, addr 0x22a0944, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectMissionNodeEvent(::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>* value);

  /// @brief Method DeselectSelectedNode, addr 0x22a09f4, size 0x80, virtual false, abstract: false, final false
  inline void DeselectSelectedNode();

  /// @brief Method Start, addr 0x22a0aa0, size 0x138, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x22a0d38, size 0x170, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleNodeWasSelect, addr 0x22a1008, size 0xb4, virtual false, abstract: false, final false
  inline void HandleNodeWasSelect(::GlobalNamespace::MissionNodeVisualController* missionNode);

  /// @brief Method HandleNodeWasDisplayed, addr 0x22a10bc, size 0x80, virtual false, abstract: false, final false
  inline void HandleNodeWasDisplayed(::GlobalNamespace::MissionNodeVisualController* missionNode);

  static inline ::GlobalNamespace::MissionNodeSelectionManager* New_ctor();

  /// @brief Method .ctor, addr 0x22a113c, size 0x8, virtual false, abstract: false, final false
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
  ::GlobalNamespace::MissionNodesManager* ____missionNodesManager;

  /// @brief Field didSelectMissionNodeEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>* ___didSelectMissionNodeEvent;

  /// @brief Field _missionNodes, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MissionNode*, ::Array<::GlobalNamespace::MissionNode*>*> ____missionNodes;

  /// @brief Field _selectedNode, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MissionNodeVisualController* ____selectedNode;

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
