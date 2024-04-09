#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TextMeshProButton)
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class TextMeshProButton;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TextMeshProButton);
// Type: ::TextMeshProButton
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TextMeshProButton*
class CORDL_TYPE TextMeshProButton : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _button, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__button, put = __cordl_internal_set__button))::UnityW<::UnityEngine::UI::Button> _button;

  /// @brief Field _text, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text))::UnityW<::TMPro::TextMeshProUGUI> _text;

  __declspec(property(get = get_button))::UnityW<::UnityEngine::UI::Button> button;

  __declspec(property(get = get_text))::UnityW<::TMPro::TextMeshProUGUI> text;

  static inline ::GlobalNamespace::TextMeshProButton* New_ctor();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__button() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__button();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x2633514, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_button, addr 0x263350c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Button> get_button();

  /// @brief Method get_text, addr 0x2633504, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TextMeshProUGUI> get_text();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextMeshProButton();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextMeshProButton", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextMeshProButton(TextMeshProButton&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextMeshProButton", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextMeshProButton(TextMeshProButton const&) = delete;

  /// @brief Field _text, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  /// @brief Field _button, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____button;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextMeshProButton, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TextMeshProButton, ____text) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextMeshProButton, ____button) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TextMeshProButton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextMeshProButton*, "", "TextMeshProButton");
