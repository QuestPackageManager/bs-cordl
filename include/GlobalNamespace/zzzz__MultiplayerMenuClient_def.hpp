#pragma once
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
// Type: ::MultiplayerMenuClient
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerMenuClient*
class CORDL_TYPE MultiplayerMenuClient : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _menuPlayerController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__menuPlayerController, put = __cordl_internal_set__menuPlayerController))::UnityW<::GlobalNamespace::MenuPlayerController> _menuPlayerController;

  /// @brief Field _nodePoseSyncStateManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__nodePoseSyncStateManager,
                      put = __cordl_internal_set__nodePoseSyncStateManager))::GlobalNamespace::INodePoseSyncStateManager* _nodePoseSyncStateManager;

  /// @brief Method LateUpdate, addr 0x252f740, size 0x368, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::MultiplayerMenuClient* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::MenuPlayerController> const& __cordl_internal_get__menuPlayerController() const;

  constexpr ::UnityW<::GlobalNamespace::MenuPlayerController>& __cordl_internal_get__menuPlayerController();

  constexpr ::GlobalNamespace::INodePoseSyncStateManager*& __cordl_internal_get__nodePoseSyncStateManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INodePoseSyncStateManager*> const& __cordl_internal_get__nodePoseSyncStateManager() const;

  constexpr void __cordl_internal_set__menuPlayerController(::UnityW<::GlobalNamespace::MenuPlayerController> value);

  constexpr void __cordl_internal_set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager* value);

  /// @brief Method .ctor, addr 0x252faa8, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _menuPlayerController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuPlayerController> ____menuPlayerController;

  /// @brief Field _nodePoseSyncStateManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::INodePoseSyncStateManager* ____nodePoseSyncStateManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerMenuClient, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerMenuClient, ____menuPlayerController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerMenuClient, ____nodePoseSyncStateManager) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerMenuClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerMenuClient*, "", "MultiplayerMenuClient");
