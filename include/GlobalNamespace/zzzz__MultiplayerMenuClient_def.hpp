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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5675))
// CS Name: ::MultiplayerMenuClient*
class CORDL_TYPE MultiplayerMenuClient : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _menuPlayerController, offset 0x18, size 0x8
  __declspec(property(get = __get__menuPlayerController, put = __set__menuPlayerController))::GlobalNamespace::MenuPlayerController* _menuPlayerController;

  /// @brief Field _nodePoseSyncStateManager, offset 0x20, size 0x8
  __declspec(property(get = __get__nodePoseSyncStateManager, put = __set__nodePoseSyncStateManager))::GlobalNamespace::INodePoseSyncStateManager* _nodePoseSyncStateManager;

  constexpr ::GlobalNamespace::MenuPlayerController*& __get__menuPlayerController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuPlayerController*> const& __get__menuPlayerController() const;

  constexpr void __set__menuPlayerController(::GlobalNamespace::MenuPlayerController* value);

  constexpr ::GlobalNamespace::INodePoseSyncStateManager*& __get__nodePoseSyncStateManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INodePoseSyncStateManager*> const& __get__nodePoseSyncStateManager() const;

  constexpr void __set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager* value);

  /// @brief Method LateUpdate addr 0x2162094 size 0x378 virtual false final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::MultiplayerMenuClient* New_ctor();

  /// @brief Method .ctor addr 0x216240c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerMenuClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerMenuClient(MultiplayerMenuClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerMenuClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerMenuClient(MultiplayerMenuClient const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerMenuClient();

public:
  /// @brief Field _menuPlayerController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MenuPlayerController* ____menuPlayerController;

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
