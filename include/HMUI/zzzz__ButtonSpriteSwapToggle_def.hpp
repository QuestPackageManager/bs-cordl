#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ButtonSpriteSwap_def.hpp"
CORDL_MODULE_EXPORT(ButtonSpriteSwapToggle)
namespace HMUI {
struct __NoTransitionsButton__SelectionState;
}
// Forward declare root types
namespace HMUI {
class ButtonSpriteSwapToggle;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ButtonSpriteSwapToggle);
// Type: HMUI::ButtonSpriteSwapToggle
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::ButtonSpriteSwapToggle*
class CORDL_TYPE ButtonSpriteSwapToggle : public ::HMUI::ButtonSpriteSwap {
public:
  // Declarations
  /// @brief Field _ignoreHighlight, offset 0x4a, size 0x1
  __declspec(property(get = __cordl_internal_get__ignoreHighlight, put = __cordl_internal_set__ignoreHighlight)) bool _ignoreHighlight;

  /// @brief Field _isToggled, offset 0x4b, size 0x1
  __declspec(property(get = __cordl_internal_get__isToggled, put = __cordl_internal_set__isToggled)) bool _isToggled;

  /// @brief Field _resetToggleOnEnable, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get__resetToggleOnEnable, put = __cordl_internal_set__resetToggleOnEnable)) bool _resetToggleOnEnable;

  __declspec(property(get = get_isToggled, put = set_isToggled)) bool isToggled;

  /// @brief Method HandleButtonSelectionStateDidChange, addr 0x22f2400, size 0x14c, virtual true, abstract: false, final false
  inline void HandleButtonSelectionStateDidChange(::HMUI::__NoTransitionsButton__SelectionState state);

  static inline ::HMUI::ButtonSpriteSwapToggle* New_ctor();

  /// @brief Method OnEnable, addr 0x22f23d0, size 0x30, virtual true, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x22f254c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isToggled, addr 0x22f2388, size 0x8, virtual false, abstract: false, final false
  inline bool get_isToggled();

  /// @brief Method set_isToggled, addr 0x22f2390, size 0x40, virtual false, abstract: false, final false
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

  /// @brief Field _resetToggleOnEnable, offset: 0x49, size: 0x1, def value: None
  bool ____resetToggleOnEnable;

  /// @brief Field _ignoreHighlight, offset: 0x4a, size: 0x1, def value: None
  bool ____ignoreHighlight;

  /// @brief Field _isToggled, offset: 0x4b, size: 0x1, def value: None
  bool ____isToggled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ButtonSpriteSwapToggle, 0x50>, "Size mismatch!");

static_assert(offsetof(::HMUI::ButtonSpriteSwapToggle, ____resetToggleOnEnable) == 0x49, "Offset mismatch!");

static_assert(offsetof(::HMUI::ButtonSpriteSwapToggle, ____ignoreHighlight) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::HMUI::ButtonSpriteSwapToggle, ____isToggled) == 0x4b, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ButtonSpriteSwapToggle);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ButtonSpriteSwapToggle*, "HMUI", "ButtonSpriteSwapToggle");
