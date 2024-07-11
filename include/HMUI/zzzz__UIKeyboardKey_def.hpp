#pragma once
// IWYU pragma private; include "HMUI/UIKeyboardKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UIKeyboardKey)
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
struct KeyCode;
}
// Forward declare root types
namespace HMUI {
class UIKeyboardKey;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::UIKeyboardKey);
// Type: HMUI::UIKeyboardKey
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::UIKeyboardKey*
class CORDL_TYPE UIKeyboardKey : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _canBeUppercase, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__canBeUppercase, put = __cordl_internal_set__canBeUppercase)) bool _canBeUppercase;

  /// @brief Field _keyCode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__keyCode, put = __cordl_internal_set__keyCode))::UnityEngine::KeyCode _keyCode;

  /// @brief Field _overrideText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__overrideText, put = __cordl_internal_set__overrideText))::StringW _overrideText;

  /// @brief Field _text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text))::UnityW<::TMPro::TextMeshProUGUI> _text;

  __declspec(property(get = get_canBeUppercase)) bool canBeUppercase;

  __declspec(property(get = get_keyCode))::UnityEngine::KeyCode keyCode;

  /// @brief Method Awake, addr 0x252e694, size 0xa4, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::HMUI::UIKeyboardKey* New_ctor();

  /// @brief Method OnValidate, addr 0x252e738, size 0xe0, virtual false, abstract: false, final false
  inline void OnValidate();

  constexpr bool const& __cordl_internal_get__canBeUppercase() const;

  constexpr bool& __cordl_internal_get__canBeUppercase();

  constexpr ::UnityEngine::KeyCode const& __cordl_internal_get__keyCode() const;

  constexpr ::UnityEngine::KeyCode& __cordl_internal_get__keyCode();

  constexpr ::StringW const& __cordl_internal_get__overrideText() const;

  constexpr ::StringW& __cordl_internal_get__overrideText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__canBeUppercase(bool value);

  constexpr void __cordl_internal_set__keyCode(::UnityEngine::KeyCode value);

  constexpr void __cordl_internal_set__overrideText(::StringW value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x252e818, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_canBeUppercase, addr 0x252e68c, size 0x8, virtual false, abstract: false, final false
  inline bool get_canBeUppercase();

  /// @brief Method get_keyCode, addr 0x252e684, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::KeyCode get_keyCode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIKeyboardKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIKeyboardKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIKeyboardKey(UIKeyboardKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIKeyboardKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIKeyboardKey(UIKeyboardKey const&) = delete;

  /// @brief Field _keyCode, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::KeyCode ____keyCode;

  /// @brief Field _text, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  /// @brief Field _overrideText, offset: 0x28, size: 0x8, def value: None
  ::StringW ____overrideText;

  /// @brief Field _canBeUppercase, offset: 0x30, size: 0x1, def value: None
  bool ____canBeUppercase;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::UIKeyboardKey, 0x38>, "Size mismatch!");

static_assert(offsetof(::HMUI::UIKeyboardKey, ____keyCode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::UIKeyboardKey, ____text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::UIKeyboardKey, ____overrideText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::UIKeyboardKey, ____canBeUppercase) == 0x30, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::UIKeyboardKey);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::UIKeyboardKey*, "HMUI", "UIKeyboardKey");
