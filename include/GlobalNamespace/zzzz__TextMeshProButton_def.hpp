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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5545))
// CS Name: ::TextMeshProButton*
class CORDL_TYPE TextMeshProButton : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _text, offset 0x18, size 0x8
  __declspec(property(get = __get__text, put = __set__text))::TMPro::TextMeshProUGUI* _text;

  /// @brief Field _button, offset 0x20, size 0x8
  __declspec(property(get = __get__button, put = __set__button))::UnityEngine::UI::Button* _button;

  __declspec(property(get = get_text))::TMPro::TextMeshProUGUI* text;

  __declspec(property(get = get_button))::UnityEngine::UI::Button* button;

  constexpr ::TMPro::TextMeshProUGUI*& __get__text();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__text() const;

  constexpr void __set__text(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::UI::Button*& __get__button();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__button() const;

  constexpr void __set__button(::UnityEngine::UI::Button* value);

  /// @brief Method get_text addr 0x213a29c size 0x8 virtual false final false
  inline ::TMPro::TextMeshProUGUI* get_text();

  /// @brief Method get_button addr 0x213a2a4 size 0x8 virtual false final false
  inline ::UnityEngine::UI::Button* get_button();

  static inline ::GlobalNamespace::TextMeshProButton* New_ctor();

  /// @brief Method .ctor addr 0x213a2ac size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TextMeshProButton", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextMeshProButton(TextMeshProButton&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextMeshProButton", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextMeshProButton(TextMeshProButton const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextMeshProButton();

public:
  /// @brief Field _text, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____text;

  /// @brief Field _button, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____button;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextMeshProButton, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TextMeshProButton, ____text) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextMeshProButton, ____button) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TextMeshProButton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextMeshProButton*, "", "TextMeshProButton");
