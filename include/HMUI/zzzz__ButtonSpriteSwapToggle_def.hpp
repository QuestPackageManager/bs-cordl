#pragma once
// IWYU pragma private; include "HMUI/ButtonSpriteSwapToggle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ButtonSpriteSwap_def.hpp"
CORDL_MODULE_EXPORT(ButtonSpriteSwapToggle)
namespace HMUI {
struct NoTransitionsButton_SelectionState;
}
// Forward declare root types
namespace HMUI {
class ButtonSpriteSwapToggle;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ButtonSpriteSwapToggle);
// Dependencies HMUI.ButtonSpriteSwap
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ButtonSpriteSwapToggle
class CORDL_TYPE ButtonSpriteSwapToggle : public ::HMUI::ButtonSpriteSwap {
public:
  // Declarations
  /// @brief Field _ignoreHighlight, offset 0x52, size 0x1
  __declspec(property(get = __cordl_internal_get__ignoreHighlight, put = __cordl_internal_set__ignoreHighlight)) bool _ignoreHighlight;

  /// @brief Field _isToggled, offset 0x53, size 0x1
  __declspec(property(get = __cordl_internal_get__isToggled, put = __cordl_internal_set__isToggled)) bool _isToggled;

  /// @brief Field _resetToggleOnEnable, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get__resetToggleOnEnable, put = __cordl_internal_set__resetToggleOnEnable)) bool _resetToggleOnEnable;

  __declspec(property(get = get_isToggled, put = set_isToggled)) bool isToggled;

  /// @brief Method HandleButtonSelectionStateDidChange, addr 0x39f9dfc, size 0x14c, virtual true, abstract: false, final false
  inline void HandleButtonSelectionStateDidChange(::HMUI::NoTransitionsButton_SelectionState state);

  static inline ::HMUI::ButtonSpriteSwapToggle* New_ctor();

  /// @brief Method OnEnable, addr 0x39f9dcc, size 0x30, virtual true, abstract: false, final false
  inline void OnEnable();

  constexpr bool const& __cordl_internal_get__ignoreHighlight() const;

  constexpr bool& __cordl_internal_get__ignoreHighlight();

  constexpr bool const& __cordl_internal_get__isToggled() const;

  constexpr bool& __cordl_internal_get__isToggled();

  constexpr bool const& __cordl_internal_get__resetToggleOnEnable() const;

  constexpr bool& __cordl_internal_get__resetToggleOnEnable();

  constexpr void __cordl_internal_set__ignoreHighlight(bool value);

  constexpr void __cordl_internal_set__isToggled(bool value);

  constexpr void __cordl_internal_set__resetToggleOnEnable(bool value);

  /// @brief Method .ctor, addr 0x39f9f48, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isToggled, addr 0x39f9d84, size 0x8, virtual false, abstract: false, final false
  inline bool get_isToggled();

  /// @brief Method set_isToggled, addr 0x39f9d8c, size 0x40, virtual false, abstract: false, final false
  inline void set_isToggled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonSpriteSwapToggle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ButtonSpriteSwapToggle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ButtonSpriteSwapToggle(ButtonSpriteSwapToggle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ButtonSpriteSwapToggle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ButtonSpriteSwapToggle(ButtonSpriteSwapToggle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16069 };

  /// @brief Field _resetToggleOnEnable, offset: 0x51, size: 0x1, def value: None
  bool ____resetToggleOnEnable;

  /// @brief Field _ignoreHighlight, offset: 0x52, size: 0x1, def value: None
  bool ____ignoreHighlight;

  /// @brief Field _isToggled, offset: 0x53, size: 0x1, def value: None
  bool ____isToggled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ButtonSpriteSwapToggle, ____resetToggleOnEnable) == 0x51, "Offset mismatch!");

static_assert(offsetof(::HMUI::ButtonSpriteSwapToggle, ____ignoreHighlight) == 0x52, "Offset mismatch!");

static_assert(offsetof(::HMUI::ButtonSpriteSwapToggle, ____isToggled) == 0x53, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ButtonSpriteSwapToggle, 0x58>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ButtonSpriteSwapToggle);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ButtonSpriteSwapToggle*, "HMUI", "ButtonSpriteSwapToggle");
