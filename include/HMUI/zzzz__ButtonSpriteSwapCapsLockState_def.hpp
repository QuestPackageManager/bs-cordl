#pragma once
// IWYU pragma private; include "HMUI/ButtonSpriteSwapCapsLockState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ButtonSpriteSwapCapsLockState)
namespace HMUI {
struct CapsLockState;
}
namespace HMUI {
class UIKeyboard;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace HMUI {
class ButtonSpriteSwapCapsLockState;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ButtonSpriteSwapCapsLockState);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ButtonSpriteSwapCapsLockState
class CORDL_TYPE ButtonSpriteSwapCapsLockState : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _images, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__images, put = __cordl_internal_set__images)) ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> _images;

  /// @brief Field _keyboard, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__keyboard, put = __cordl_internal_set__keyboard)) ::UnityW<::HMUI::UIKeyboard> _keyboard;

  /// @brief Field _lowercaseColor, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get__lowercaseColor, put = __cordl_internal_set__lowercaseColor)) ::UnityEngine::Color _lowercaseColor;

  /// @brief Field _lowercaseSprite, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lowercaseSprite, put = __cordl_internal_set__lowercaseSprite)) ::UnityW<::UnityEngine::Sprite> _lowercaseSprite;

  /// @brief Field _uppercaseColor, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__uppercaseColor, put = __cordl_internal_set__uppercaseColor)) ::UnityEngine::Color _uppercaseColor;

  /// @brief Field _uppercaseOnceColor, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__uppercaseOnceColor, put = __cordl_internal_set__uppercaseOnceColor)) ::UnityEngine::Color _uppercaseOnceColor;

  /// @brief Field _uppercaseOnceSprite, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__uppercaseOnceSprite, put = __cordl_internal_set__uppercaseOnceSprite)) ::UnityW<::UnityEngine::Sprite> _uppercaseOnceSprite;

  /// @brief Field _uppercaseSprite, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__uppercaseSprite, put = __cordl_internal_set__uppercaseSprite)) ::UnityW<::UnityEngine::Sprite> _uppercaseSprite;

  static inline ::HMUI::ButtonSpriteSwapCapsLockState* New_ctor();

  /// @brief Method OnCapsLockStateChanged, addr 0x566cb30, size 0x4, virtual false, abstract: false, final false
  inline void OnCapsLockStateChanged(::HMUI::CapsLockState capsLockState);

  /// @brief Method OnDisable, addr 0x566caa4, size 0x8c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x566c874, size 0xd8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method UpdateSprites, addr 0x566c94c, size 0x158, virtual false, abstract: false, final false
  inline void UpdateSprites(::HMUI::CapsLockState capsLockState);

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> const& __cordl_internal_get__images() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*>& __cordl_internal_get__images();

  constexpr ::UnityW<::HMUI::UIKeyboard> const& __cordl_internal_get__keyboard() const;

  constexpr ::UnityW<::HMUI::UIKeyboard>& __cordl_internal_get__keyboard();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__lowercaseColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__lowercaseColor();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__lowercaseSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__lowercaseSprite();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__uppercaseColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__uppercaseColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__uppercaseOnceColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__uppercaseOnceColor();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__uppercaseOnceSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__uppercaseOnceSprite();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__uppercaseSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__uppercaseSprite();

  constexpr void __cordl_internal_set__images(::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> value);

  constexpr void __cordl_internal_set__keyboard(::UnityW<::HMUI::UIKeyboard> value);

  constexpr void __cordl_internal_set__lowercaseColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__lowercaseSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__uppercaseColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__uppercaseOnceColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__uppercaseOnceSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__uppercaseSprite(::UnityW<::UnityEngine::Sprite> value);

  /// @brief Method .ctor, addr 0x566cb34, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonSpriteSwapCapsLockState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ButtonSpriteSwapCapsLockState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ButtonSpriteSwapCapsLockState(ButtonSpriteSwapCapsLockState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ButtonSpriteSwapCapsLockState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ButtonSpriteSwapCapsLockState(ButtonSpriteSwapCapsLockState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19142 };

  /// @brief Field _lowercaseSprite, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____lowercaseSprite;

  /// @brief Field _uppercaseOnceSprite, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____uppercaseOnceSprite;

  /// @brief Field _uppercaseSprite, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____uppercaseSprite;

  /// @brief Field _lowercaseColor, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ____lowercaseColor;

  /// @brief Field _uppercaseOnceColor, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ____uppercaseOnceColor;

  /// @brief Field _uppercaseColor, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Color ____uppercaseColor;

  /// @brief Field _keyboard, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::HMUI::UIKeyboard> ____keyboard;

  /// @brief Field _images, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> ____images;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ButtonSpriteSwapCapsLockState, ____lowercaseSprite) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ButtonSpriteSwapCapsLockState, ____uppercaseOnceSprite) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::ButtonSpriteSwapCapsLockState, ____uppercaseSprite) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::ButtonSpriteSwapCapsLockState, ____lowercaseColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::ButtonSpriteSwapCapsLockState, ____uppercaseOnceColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::ButtonSpriteSwapCapsLockState, ____uppercaseColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::ButtonSpriteSwapCapsLockState, ____keyboard) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HMUI::ButtonSpriteSwapCapsLockState, ____images) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ButtonSpriteSwapCapsLockState, 0x78>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ButtonSpriteSwapCapsLockState);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ButtonSpriteSwapCapsLockState*, "HMUI", "ButtonSpriteSwapCapsLockState");
