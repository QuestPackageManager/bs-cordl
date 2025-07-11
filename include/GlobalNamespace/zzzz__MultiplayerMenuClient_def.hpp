#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerMenuClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerMenuClient)
namespace GlobalNamespace {
class INodePoseSyncStateManager;
}
namespace GlobalNamespace {
class MenuPlayerController;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerMenuClient;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerMenuClient);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerMenuClient
class CORDL_TYPE MultiplayerMenuClient : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _menuPlayerController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__menuPlayerController, put = __cordl_internal_set__menuPlayerController)) ::UnityW<::GlobalNamespace::MenuPlayerController> _menuPlayerController;

  /// @brief Field _nodePoseSyncStateManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__nodePoseSyncStateManager,
                      put = __cordl_internal_set__nodePoseSyncStateManager)) ::GlobalNamespace::INodePoseSyncStateManager* _nodePoseSyncStateManager;

  /// @brief Method LateUpdate, addr 0x3c0f6dc, size 0x368, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::MultiplayerMenuClient* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::MenuPlayerController> const& __cordl_internal_get__menuPlayerController() const;

  constexpr ::UnityW<::GlobalNamespace::MenuPlayerController>& __cordl_internal_get__menuPlayerController();

  constexpr ::GlobalNamespace::INodePoseSyncStateManager* const& __cordl_internal_get__nodePoseSyncStateManager() const;

  constexpr ::GlobalNamespace::INodePoseSyncStateManager*& __cordl_internal_get__nodePoseSyncStateManager();

  constexpr void __cordl_internal_set__menuPlayerController(::UnityW<::GlobalNamespace::MenuPlayerController> value);

  constexpr void __cordl_internal_set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager* value);

  /// @brief Method .ctor, addr 0x3c0fa44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerMenuClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerMenuClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerMenuClient(MultiplayerMenuClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerMenuClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerMenuClient(MultiplayerMenuClient const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4846 };

  /// @brief Field _menuPlayerController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuPlayerController> ____menuPlayerController;

  /// @brief Field _nodePoseSyncStateManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::INodePoseSyncStateManager* ____nodePoseSyncStateManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerMenuClient, ____menuPlayerController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerMenuClient, ____nodePoseSyncStateManager) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerMenuClient, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerMenuClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerMenuClient*, "", "MultiplayerMenuClient");
