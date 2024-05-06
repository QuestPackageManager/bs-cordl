#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AnniversaryManager)
namespace GlobalNamespace {
class FireworksController;
}
namespace GlobalNamespace {
class MainMenuViewController;
}
namespace GlobalNamespace {
class __DlcPromoPanelModel__PromoInfo;
}
namespace GlobalNamespace {
struct __MainMenuViewController__MenuButton;
}
// Forward declare root types
namespace GlobalNamespace {
class AnniversaryManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AnniversaryManager);
// Type: ::AnniversaryManager
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AnniversaryManager*
class CORDL_TYPE AnniversaryManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _fireworksController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__fireworksController, put = __cordl_internal_set__fireworksController))::UnityW<::GlobalNamespace::FireworksController> _fireworksController;

  /// @brief Field _mainMenuViewController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mainMenuViewController,
                      put = __cordl_internal_set__mainMenuViewController))::UnityW<::GlobalNamespace::MainMenuViewController> _mainMenuViewController;

  /// @brief Method HandleMainMenuViewControllerDidFinish, addr 0x25fc21c, size 0x4, virtual false, abstract: false, final false
  inline void HandleMainMenuViewControllerDidFinish(::GlobalNamespace::MainMenuViewController* mainMenuViewController, ::GlobalNamespace::__MainMenuViewController__MenuButton menuButton);

  /// @brief Method HandleMainMenuViewControllerPromoButtonWasPressed, addr 0x25fc240, size 0x4, virtual false, abstract: false, final false
  inline void HandleMainMenuViewControllerPromoButtonWasPressed(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* promoInfo);

  static inline ::GlobalNamespace::AnniversaryManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x25fc0dc, size 0x140, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x25fbfc0, size 0xfc, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartFireworks, addr 0x25fc0bc, size 0x20, virtual false, abstract: false, final false
  inline void StartFireworks();

  /// @brief Method StopFireworks, addr 0x25fc220, size 0x20, virtual false, abstract: false, final false
  inline void StopFireworks();

  constexpr ::UnityW<::GlobalNamespace::FireworksController> const& __cordl_internal_get__fireworksController() const;

  constexpr ::UnityW<::GlobalNamespace::FireworksController>& __cordl_internal_get__fireworksController();

  constexpr ::UnityW<::GlobalNamespace::MainMenuViewController> const& __cordl_internal_get__mainMenuViewController() const;

  constexpr ::UnityW<::GlobalNamespace::MainMenuViewController>& __cordl_internal_get__mainMenuViewController();

  constexpr void __cordl_internal_set__fireworksController(::UnityW<::GlobalNamespace::FireworksController> value);

  constexpr void __cordl_internal_set__mainMenuViewController(::UnityW<::GlobalNamespace::MainMenuViewController> value);

  /// @brief Method .ctor, addr 0x25fc244, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnniversaryManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnniversaryManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnniversaryManager(AnniversaryManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnniversaryManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnniversaryManager(AnniversaryManager const&) = delete;

  /// @brief Field _fireworksController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FireworksController> ____fireworksController;

  /// @brief Field _mainMenuViewController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainMenuViewController> ____mainMenuViewController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AnniversaryManager, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AnniversaryManager, ____fireworksController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnniversaryManager, ____mainMenuViewController) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AnniversaryManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnniversaryManager*, "", "AnniversaryManager");
