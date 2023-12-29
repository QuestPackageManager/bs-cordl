#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MockPlayerLobbyPoseGenerator_def.hpp"
CORDL_MODULE_EXPORT(MockPlayerLobbyPoseGeneratorMirror)
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class NodePoseSyncStateManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerLobbyPoseGeneratorMirror;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror);
// Type: ::MockPlayerLobbyPoseGeneratorMirror
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15506))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5286))
// CS Name: ::MockPlayerLobbyPoseGeneratorMirror*
class CORDL_TYPE MockPlayerLobbyPoseGeneratorMirror : public ::GlobalNamespace::MockPlayerLobbyPoseGenerator {
public:
  // Declarations
  /// @brief Field _nodePoseSyncStateManager, offset 0x20, size 0x8
  __declspec(property(get = __get__nodePoseSyncStateManager, put = __set__nodePoseSyncStateManager))::GlobalNamespace::NodePoseSyncStateManager* _nodePoseSyncStateManager;

  constexpr ::GlobalNamespace::NodePoseSyncStateManager*& __get__nodePoseSyncStateManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NodePoseSyncStateManager*> const& __get__nodePoseSyncStateManager() const;

  constexpr void __set__nodePoseSyncStateManager(::GlobalNamespace::NodePoseSyncStateManager* value);

  static inline ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager,
                                                                                ::GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager);

  /// @brief Method .ctor addr 0x2101548 size 0x28 virtual false final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager);

  /// @brief Method Init addr 0x21032bc size 0x4 virtual true final false
  inline void Init();

  /// @brief Method Tick addr 0x21032c0 size 0x168 virtual true final false
  inline void Tick();

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerLobbyPoseGeneratorMirror", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlayerLobbyPoseGeneratorMirror(MockPlayerLobbyPoseGeneratorMirror&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerLobbyPoseGeneratorMirror", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlayerLobbyPoseGeneratorMirror(MockPlayerLobbyPoseGeneratorMirror const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerLobbyPoseGeneratorMirror();

public:
  /// @brief Field _nodePoseSyncStateManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::NodePoseSyncStateManager* ____nodePoseSyncStateManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror, ____nodePoseSyncStateManager) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*, "", "MockPlayerLobbyPoseGeneratorMirror");
