#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10058))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13540))
// CS Name: ::HMUI::UIKeyboardKey*
class CORDL_TYPE UIKeyboardKey : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _keyCode, offset 0x18, size 0x4
  __declspec(property(get = __get__keyCode, put = __set__keyCode))::UnityEngine::KeyCode _keyCode;

  /// @brief Field _text, offset 0x20, size 0x8
  __declspec(property(get = __get__text, put = __set__text))::TMPro::TextMeshProUGUI* _text;

  /// @brief Field _overrideText, offset 0x28, size 0x8
  __declspec(property(get = __get__overrideText, put = __set__overrideText))::StringW _overrideText;

  /// @brief Field _canBeUppercase, offset 0x30, size 0x1
  __declspec(property(get = __get__canBeUppercase, put = __set__canBeUppercase)) bool _canBeUppercase;

  __declspec(property(get = get_keyCode))::UnityEngine::KeyCode keyCode;

  __declspec(property(get = get_canBeUppercase)) bool canBeUppercase;

  constexpr ::UnityEngine::KeyCode& __get__keyCode();

  constexpr ::UnityEngine::KeyCode const& __get__keyCode() const;

  constexpr void __set__keyCode(::UnityEngine::KeyCode value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__text();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__text() const;

  constexpr void __set__text(::TMPro::TextMeshProUGUI* value);

  constexpr ::StringW& __get__overrideText();

  constexpr ::StringW const& __get__overrideText() const;

  constexpr void __set__overrideText(::StringW value);

  constexpr bool& __get__canBeUppercase();

  constexpr bool const& __get__canBeUppercase() const;

  constexpr void __set__canBeUppercase(bool value);

  /// @brief Method get_keyCode addr 0x211e540 size 0x8 virtual false final false
  inline ::UnityEngine::KeyCode get_keyCode();

  /// @brief Method get_canBeUppercase addr 0x211e548 size 0x8 virtual false final false
  inline bool get_canBeUppercase();

  /// @brief Method Awake addr 0x211e550 size 0xa4 virtual false final false
  inline void Awake();

  /// @brief Method OnValidate addr 0x211e5f4 size 0xe0 virtual false final false
  inline void OnValidate();

  static inline ::HMUI::UIKeyboardKey* New_ctor();

  /// @brief Method .ctor addr 0x211e6d4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UIKeyboardKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIKeyboardKey(UIKeyboardKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIKeyboardKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIKeyboardKey(UIKeyboardKey const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIKeyboardKey();

public:
  /// @brief Field _keyCode, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::KeyCode ____keyCode;

  /// @brief Field _text, offset: 0x20, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____text;

  /// @brief Field _overrideText, offset: 0x28, size: 0x8, def value: None
  ::StringW ____overrideText;

  /// @brief Field _canBeUppercase, offset: 0x30, size: 0x1, def value: None
  bool ____canBeUppercase;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::UIKeyboardKey, 0x38>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::UIKeyboardKey);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::UIKeyboardKey*, "HMUI", "UIKeyboardKey");
