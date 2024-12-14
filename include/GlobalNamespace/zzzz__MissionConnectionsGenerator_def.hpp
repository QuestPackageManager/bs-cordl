#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionConnectionsGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MissionConnectionsGenerator)
namespace GlobalNamespace {
class MissionNodeConnection;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class MissionNodesManager;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionConnectionsGenerator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionConnectionsGenerator);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionConnectionsGenerator
class CORDL_TYPE MissionConnectionsGenerator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _connectionsCanvas, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__connectionsCanvas, put = __cordl_internal_set__connectionsCanvas)) ::UnityW<::UnityEngine::GameObject> _connectionsCanvas;

  /// @brief Field _missionNodes, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__missionNodes,
                      put = __cordl_internal_set__missionNodes)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MissionNode>>* _missionNodes;

  /// @brief Field _missionNodesManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__missionNodesManager, put = __cordl_internal_set__missionNodesManager)) ::UnityW<::GlobalNamespace::MissionNodesManager> _missionNodesManager;

  /// @brief Field _nodeConnectionPref, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__nodeConnectionPref, put = __cordl_internal_set__nodeConnectionPref)) ::UnityW<::GlobalNamespace::MissionNodeConnection> _nodeConnectionPref;

  __declspec(property(get = get__rootMissionNode)) ::UnityW<::GlobalNamespace::MissionNode> _rootMissionNode;

  /// @brief Method CreateConnectionBetweenNodes, addr 0x3c06780, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MissionNodeConnection> CreateConnectionBetweenNodes(::GlobalNamespace::MissionNode* parentMissionNode, ::GlobalNamespace::MissionNode* childMissionNode);

  /// @brief Method CreateConnections, addr 0x3c06590, size 0x1f0, virtual false, abstract: false, final false
  inline void CreateConnections(::GlobalNamespace::MissionNode* missionNode, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MissionNode>>* visitedNodes);

  /// @brief Method CreateNodeConnections, addr 0x3c06044, size 0x94, virtual false, abstract: false, final false
  inline void CreateNodeConnections();

  static inline ::GlobalNamespace::MissionConnectionsGenerator* New_ctor();

  /// @brief Method RemoveOldConnections, addr 0x3c060d8, size 0x4b8, virtual false, abstract: false, final false
  inline void RemoveOldConnections();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__connectionsCanvas() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__connectionsCanvas();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MissionNode>>* const& __cordl_internal_get__missionNodes() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MissionNode>>*& __cordl_internal_get__missionNodes();

  constexpr ::UnityW<::GlobalNamespace::MissionNodesManager> const& __cordl_internal_get__missionNodesManager() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNodesManager>& __cordl_internal_get__missionNodesManager();

  constexpr ::UnityW<::GlobalNamespace::MissionNodeConnection> const& __cordl_internal_get__nodeConnectionPref() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNodeConnection>& __cordl_internal_get__nodeConnectionPref();

  constexpr void __cordl_internal_set__connectionsCanvas(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__missionNodes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MissionNode>>* value);

  constexpr void __cordl_internal_set__missionNodesManager(::UnityW<::GlobalNamespace::MissionNodesManager> value);

  constexpr void __cordl_internal_set__nodeConnectionPref(::UnityW<::GlobalNamespace::MissionNodeConnection> value);

  /// @brief Method .ctor, addr 0x3c06874, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get__rootMissionNode, addr 0x3c06028, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MissionNode> get__rootMissionNode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionConnectionsGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionConnectionsGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionConnectionsGenerator(MissionConnectionsGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionConnectionsGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionConnectionsGenerator(MissionConnectionsGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4810 };

  /// @brief Field _missionNodesManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNodesManager> ____missionNodesManager;

  /// @brief Field _nodeConnectionPref, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNodeConnection> ____nodeConnectionPref;

  /// @brief Field _connectionsCanvas, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____connectionsCanvas;

  /// @brief Field _missionNodes, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MissionNode>>* ____missionNodes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionConnectionsGenerator, ____missionNodesManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionConnectionsGenerator, ____nodeConnectionPref) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionConnectionsGenerator, ____connectionsCanvas) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionConnectionsGenerator, ____missionNodes) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionConnectionsGenerator, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionConnectionsGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionConnectionsGenerator*, "", "MissionConnectionsGenerator");
