#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MissionConnectionsGenerator)
namespace GlobalNamespace {
class MissionNode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class MissionNodeConnection;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class MissionNodesManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionConnectionsGenerator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionConnectionsGenerator);
// Type: ::MissionConnectionsGenerator
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5536))
// CS Name: ::MissionConnectionsGenerator*
class CORDL_TYPE MissionConnectionsGenerator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _missionNodesManager, offset 0x18, size 0x8
  __declspec(property(get = __get__missionNodesManager, put = __set__missionNodesManager))::GlobalNamespace::MissionNodesManager* _missionNodesManager;

  /// @brief Field _nodeConnectionPref, offset 0x20, size 0x8
  __declspec(property(get = __get__nodeConnectionPref, put = __set__nodeConnectionPref))::GlobalNamespace::MissionNodeConnection* _nodeConnectionPref;

  /// @brief Field _connectionsCanvas, offset 0x28, size 0x8
  __declspec(property(get = __get__connectionsCanvas, put = __set__connectionsCanvas))::UnityEngine::GameObject* _connectionsCanvas;

  /// @brief Field _missionNodes, offset 0x30, size 0x8
  __declspec(property(get = __get__missionNodes, put = __set__missionNodes))::System::Collections::Generic::List_1<::GlobalNamespace::MissionNode*>* _missionNodes;

  __declspec(property(get = get__rootMissionNode))::GlobalNamespace::MissionNode* _rootMissionNode;

  constexpr ::GlobalNamespace::MissionNodesManager*& __get__missionNodesManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNodesManager*> const& __get__missionNodesManager() const;

  constexpr void __set__missionNodesManager(::GlobalNamespace::MissionNodesManager* value);

  constexpr ::GlobalNamespace::MissionNodeConnection*& __get__nodeConnectionPref();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNodeConnection*> const& __get__nodeConnectionPref() const;

  constexpr void __set__nodeConnectionPref(::GlobalNamespace::MissionNodeConnection* value);

  constexpr ::UnityEngine::GameObject*& __get__connectionsCanvas();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__connectionsCanvas() const;

  constexpr void __set__connectionsCanvas(::UnityEngine::GameObject* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MissionNode*>*& __get__missionNodes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::MissionNode*>*> const& __get__missionNodes() const;

  constexpr void __set__missionNodes(::System::Collections::Generic::List_1<::GlobalNamespace::MissionNode*>* value);

  /// @brief Method get__rootMissionNode, addr 0x229e8c4, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MissionNode* get__rootMissionNode();

  /// @brief Method CreateNodeConnections, addr 0x229e8e0, size 0x90, virtual false, abstract: false, final false
  inline void CreateNodeConnections();

  /// @brief Method RemoveOldConnections, addr 0x229e970, size 0x4bc, virtual false, abstract: false, final false
  inline void RemoveOldConnections();

  /// @brief Method CreateConnections, addr 0x229ee2c, size 0x1f8, virtual false, abstract: false, final false
  inline void CreateConnections(::GlobalNamespace::MissionNode* missionNode, ::System::Collections::Generic::List_1<::GlobalNamespace::MissionNode*>* visitedNodes);

  /// @brief Method CreateConnectionBetweenNodes, addr 0x229f024, size 0xd0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MissionNodeConnection* CreateConnectionBetweenNodes(::GlobalNamespace::MissionNode* parentMissionNode, ::GlobalNamespace::MissionNode* childMissionNode);

  static inline ::GlobalNamespace::MissionConnectionsGenerator* New_ctor();

  /// @brief Method .ctor, addr 0x229f120, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionConnectionsGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionConnectionsGenerator(MissionConnectionsGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionConnectionsGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionConnectionsGenerator(MissionConnectionsGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionConnectionsGenerator();

public:
  /// @brief Field _missionNodesManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MissionNodesManager* ____missionNodesManager;

  /// @brief Field _nodeConnectionPref, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MissionNodeConnection* ____nodeConnectionPref;

  /// @brief Field _connectionsCanvas, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____connectionsCanvas;

  /// @brief Field _missionNodes, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::MissionNode*>* ____missionNodes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionConnectionsGenerator, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionConnectionsGenerator, ____missionNodesManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionConnectionsGenerator, ____nodeConnectionPref) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionConnectionsGenerator, ____connectionsCanvas) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionConnectionsGenerator, ____missionNodes) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionConnectionsGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionConnectionsGenerator*, "", "MissionConnectionsGenerator");
