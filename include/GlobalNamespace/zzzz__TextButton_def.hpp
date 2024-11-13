#pragma once
// IWYU pragma private; include "GlobalNamespace/TextButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TextButton)
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class TextButton;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TextButton);
// Type: ::TextButton
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TextButton*
class CORDL_TYPE TextButton : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _button, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__button, put = __cordl_internal_set__button)) ::UnityW<::UnityEngine::UI::Button> _button;

  /// @brief Field _text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::UnityW<::UnityEngine::UI::Text> _text;

  __declspec(property(get = get_button)) ::UnityW<::UnityEngine::UI::Button> button;

  __declspec(property(get = get_text)) ::UnityW<::UnityEngine::UI::Text> text;

  static inline ::GlobalNamespace::TextButton* New_ctor();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__button() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__button();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__text(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x3b99f64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_button, addr 0x3b99f5c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Button> get_button();

  /// @brief Method get_text, addr 0x3b99f54, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Text> get_text();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextButton();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextButton", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextButton(TextButton&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextButton", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextButton(TextButton const&) = delete;

  /// @brief Field _text, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ____text;

  /// @brief Field _button, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____button;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4749 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextButton, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TextButton, ____text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextButton, ____button) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TextButton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextButton*, "", "TextButton");
