#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectModifiersViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(SelectModifiersViewController)
namespace GlobalNamespace {
class GameplayModifiersPanelController;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
// Forward declare root types
namespace GlobalNamespace {
class SelectModifiersViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SelectModifiersViewController);
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: SelectModifiersViewController
class CORDL_TYPE SelectModifiersViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _gameplayModifiersPanelController, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiersPanelController,
                      put = __cordl_internal_set__gameplayModifiersPanelController)) ::UnityW<::GlobalNamespace::GameplayModifiersPanelController>
      _gameplayModifiersPanelController;

  __declspec(property(get = get_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Method DidActivate, addr 0x3b6dd74, size 0xa0, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::SelectModifiersViewController* New_ctor();

  /// @brief Method Setup, addr 0x3b6dd58, size 0x1c, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersPanelController> const& __cordl_internal_get__gameplayModifiersPanelController() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersPanelController>& __cordl_internal_get__gameplayModifiersPanelController();

  constexpr void __cordl_internal_set__gameplayModifiersPanelController(::UnityW<::GlobalNamespace::GameplayModifiersPanelController> value);

  /// @brief Method .ctor, addr 0x3b6de14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_gameplayModifiers, addr 0x3b6dd3c, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectModifiersViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectModifiersViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectModifiersViewController(SelectModifiersViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectModifiersViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectModifiersViewController(SelectModifiersViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5383 };

  /// @brief Field _gameplayModifiersPanelController, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifiersPanelController> ____gameplayModifiersPanelController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SelectModifiersViewController, ____gameplayModifiersPanelController) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectModifiersViewController, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SelectModifiersViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectModifiersViewController*, "", "SelectModifiersViewController");
