#pragma once
// IWYU pragma private; include "HMUI/ButtonSpriteSwap.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ButtonSpriteSwap)
namespace HMUI {
class NoTransitionsButton;
}
namespace HMUI {
struct __NoTransitionsButton__SelectionState;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace HMUI {
class ButtonSpriteSwap;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ButtonSpriteSwap);
// Type: HMUI::ButtonSpriteSwap
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::ButtonSpriteSwap*
class CORDL_TYPE ButtonSpriteSwap : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _button, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__button, put = __cordl_internal_set__button))::UnityW<::HMUI::NoTransitionsButton> _button;

  /// @brief Field _didStart, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__didStart, put = __cordl_internal_set__didStart)) bool _didStart;

  /// @brief Field _disabledStateSprite, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__disabledStateSprite, put = __cordl_internal_set__disabledStateSprite))::UnityW<::UnityEngine::Sprite> _disabledStateSprite;

  /// @brief Field _highlightStateSprite, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightStateSprite, put = __cordl_internal_set__highlightStateSprite))::UnityW<::UnityEngine::Sprite> _highlightStateSprite;

  /// @brief Field _images, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__images, put = __cordl_internal_set__images))::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> _images;

  /// @brief Field _normalStateSprite, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__normalStateSprite, put = __cordl_internal_set__normalStateSprite))::UnityW<::UnityEngine::Sprite> _normalStateSprite;

  /// @brief Field _pressedStateSprite, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__pressedStateSprite, put = __cordl_internal_set__pressedStateSprite))::UnityW<::UnityEngine::Sprite> _pressedStateSprite;

  /// @brief Method Awake, addr 0x2540330, size 0x78, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleButtonSelectionStateDidChange, addr 0x2540644, size 0xcc, virtual true, abstract: false, final false
  inline void HandleButtonSelectionStateDidChange(::HMUI::__NoTransitionsButton__SelectionState state);

  static inline ::HMUI::ButtonSpriteSwap* New_ctor();

  /// @brief Method OnDestroy, addr 0x25404d0, size 0xc0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnEnable, addr 0x25404ac, size 0x24, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RefreshVisualState, addr 0x2540488, size 0x24, virtual false, abstract: false, final false
  inline void RefreshVisualState();

  /// @brief Method Start, addr 0x254045c, size 0x2c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::HMUI::NoTransitionsButton> const& __cordl_internal_get__button() const;

  constexpr ::UnityW<::HMUI::NoTransitionsButton>& __cordl_internal_get__button();

  constexpr bool const& __cordl_internal_get__didStart() const;

  constexpr bool& __cordl_internal_get__didStart();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__disabledStateSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__disabledStateSprite();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__highlightStateSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__highlightStateSprite();

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> const& __cordl_internal_get__images() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*>& __cordl_internal_get__images();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__normalStateSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__normalStateSprite();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__pressedStateSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__pressedStateSprite();

  constexpr void __cordl_internal_set__button(::UnityW<::HMUI::NoTransitionsButton> value);

  constexpr void __cordl_internal_set__didStart(bool value);

  constexpr void __cordl_internal_set__disabledStateSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__highlightStateSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__images(::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> value);

  constexpr void __cordl_internal_set__normalStateSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__pressedStateSprite(::UnityW<::UnityEngine::Sprite> value);

  /// @brief Method .ctor, addr 0x2540710, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonSpriteSwap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ButtonSpriteSwap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ButtonSpriteSwap(ButtonSpriteSwap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ButtonSpriteSwap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ButtonSpriteSwap(ButtonSpriteSwap const&) = delete;

  /// @brief Field _normalStateSprite, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____normalStateSprite;

  /// @brief Field _highlightStateSprite, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____highlightStateSprite;

  /// @brief Field _pressedStateSprite, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____pressedStateSprite;

  /// @brief Field _disabledStateSprite, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____disabledStateSprite;

  /// @brief Field _button, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::HMUI::NoTransitionsButton> ____button;

  /// @brief Field _images, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> ____images;

  /// @brief Field _didStart, offset: 0x48, size: 0x1, def value: None
  bool ____didStart;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ButtonSpriteSwap, 0x50>, "Size mismatch!");

static_assert(offsetof(::HMUI::ButtonSpriteSwap, ____normalStateSprite) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::ButtonSpriteSwap, ____highlightStateSprite) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ButtonSpriteSwap, ____pressedStateSprite) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::ButtonSpriteSwap, ____disabledStateSprite) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::ButtonSpriteSwap, ____button) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::ButtonSpriteSwap, ____images) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::ButtonSpriteSwap, ____didStart) == 0x48, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ButtonSpriteSwap);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ButtonSpriteSwap*, "HMUI", "ButtonSpriteSwap");
