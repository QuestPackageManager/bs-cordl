#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLocalInactivePlayerResultsController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLocalInactivePlayerResultsController)
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerResultsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalInactivePlayerResultsController);
// Type: ::MultiplayerLocalInactivePlayerResultsController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLocalInactivePlayerResultsController*
class CORDL_TYPE MultiplayerLocalInactivePlayerResultsController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _multiplayerController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerController, put = __cordl_internal_set__multiplayerController)) ::UnityW<::GlobalNamespace::MultiplayerController> _multiplayerController;

  /// @brief Method HandleMultiplayerStateChange, addr 0x3b4ab38, size 0x4, virtual false, abstract: false, final false
  inline void HandleMultiplayerStateChange(::GlobalNamespace::__MultiplayerController__State state);

  static inline ::GlobalNamespace::MultiplayerLocalInactivePlayerResultsController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b4a9fc, size 0x8c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetMultiplayerState, addr 0x3b4a9c0, size 0x3c, virtual false, abstract: false, final false
  inline void SetMultiplayerState(::GlobalNamespace::__MultiplayerController__State state);

  /// @brief Method Start, addr 0x3b4a858, size 0xb8, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController> const& __cordl_internal_get__multiplayerController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController>& __cordl_internal_get__multiplayerController();

  constexpr void __cordl_internal_set__multiplayerController(::UnityW<::GlobalNamespace::MultiplayerController> value);

  /// @brief Method .ctor, addr 0x3b4ab3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalInactivePlayerResultsController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerResultsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalInactivePlayerResultsController(MultiplayerLocalInactivePlayerResultsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerResultsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalInactivePlayerResultsController(MultiplayerLocalInactivePlayerResultsController const&) = delete;

  /// @brief Field _multiplayerController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerController> ____multiplayerController;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4511 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalInactivePlayerResultsController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerResultsController, ____multiplayerController) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalInactivePlayerResultsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalInactivePlayerResultsController*, "", "MultiplayerLocalInactivePlayerResultsController");
