#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ButtonSpriteSwap)
namespace HMUI {
class NoTransitionsButton;
}
namespace UnityEngine {
class Sprite;
}
namespace HMUI {
struct __NoTransitionsButton__SelectionState;
}
namespace UnityEngine::UI {
class Image;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13619))
// CS Name: ::HMUI::ButtonSpriteSwap*
class CORDL_TYPE ButtonSpriteSwap : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _normalStateSprite, offset 0x18, size 0x8
  __declspec(property(get = __get__normalStateSprite, put = __set__normalStateSprite))::UnityEngine::Sprite* _normalStateSprite;

  /// @brief Field _highlightStateSprite, offset 0x20, size 0x8
  __declspec(property(get = __get__highlightStateSprite, put = __set__highlightStateSprite))::UnityEngine::Sprite* _highlightStateSprite;

  /// @brief Field _pressedStateSprite, offset 0x28, size 0x8
  __declspec(property(get = __get__pressedStateSprite, put = __set__pressedStateSprite))::UnityEngine::Sprite* _pressedStateSprite;

  /// @brief Field _disabledStateSprite, offset 0x30, size 0x8
  __declspec(property(get = __get__disabledStateSprite, put = __set__disabledStateSprite))::UnityEngine::Sprite* _disabledStateSprite;

  /// @brief Field _button, offset 0x38, size 0x8
  __declspec(property(get = __get__button, put = __set__button))::HMUI::NoTransitionsButton* _button;

  /// @brief Field _images, offset 0x40, size 0x8
  __declspec(property(get = __get__images, put = __set__images))::ArrayW<::UnityEngine::UI::Image*, ::Array<::UnityEngine::UI::Image*>*> _images;

  /// @brief Field _didStart, offset 0x48, size 0x1
  __declspec(property(get = __get__didStart, put = __set__didStart)) bool _didStart;

  constexpr ::UnityEngine::Sprite*& __get__normalStateSprite();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__normalStateSprite() const;

  constexpr void __set__normalStateSprite(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Sprite*& __get__highlightStateSprite();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__highlightStateSprite() const;

  constexpr void __set__highlightStateSprite(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Sprite*& __get__pressedStateSprite();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__pressedStateSprite() const;

  constexpr void __set__pressedStateSprite(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Sprite*& __get__disabledStateSprite();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__disabledStateSprite() const;

  constexpr void __set__disabledStateSprite(::UnityEngine::Sprite* value);

  constexpr ::HMUI::NoTransitionsButton*& __get__button();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::NoTransitionsButton*> const& __get__button() const;

  constexpr void __set__button(::HMUI::NoTransitionsButton* value);

  constexpr ::ArrayW<::UnityEngine::UI::Image*, ::Array<::UnityEngine::UI::Image*>*>& __get__images();

  constexpr ::ArrayW<::UnityEngine::UI::Image*, ::Array<::UnityEngine::UI::Image*>*> const& __get__images() const;

  constexpr void __set__images(::ArrayW<::UnityEngine::UI::Image*, ::Array<::UnityEngine::UI::Image*>*> value);

  constexpr bool& __get__didStart();

  constexpr bool const& __get__didStart() const;

  constexpr void __set__didStart(bool value);

  /// @brief Method Awake addr 0x213028c size 0x78 virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x21303b8 size 0x2c virtual false final false
  inline void Start();

  /// @brief Method OnEnable addr 0x2130408 size 0x24 virtual true final false
  inline void OnEnable();

  /// @brief Method OnDestroy addr 0x213042c size 0xc0 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleButtonSelectionStateDidChange addr 0x21305a0 size 0xcc virtual true final false
  inline void HandleButtonSelectionStateDidChange(::HMUI::__NoTransitionsButton__SelectionState state);

  /// @brief Method RefreshVisualState addr 0x21303e4 size 0x24 virtual false final false
  inline void RefreshVisualState();

  static inline ::HMUI::ButtonSpriteSwap* New_ctor();

  /// @brief Method .ctor addr 0x213066c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ButtonSpriteSwap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ButtonSpriteSwap(ButtonSpriteSwap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ButtonSpriteSwap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ButtonSpriteSwap(ButtonSpriteSwap const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonSpriteSwap();

public:
  /// @brief Field _normalStateSprite, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____normalStateSprite;

  /// @brief Field _highlightStateSprite, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____highlightStateSprite;

  /// @brief Field _pressedStateSprite, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____pressedStateSprite;

  /// @brief Field _disabledStateSprite, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____disabledStateSprite;

  /// @brief Field _button, offset: 0x38, size: 0x8, def value: None
  ::HMUI::NoTransitionsButton* ____button;

  /// @brief Field _images, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UI::Image*, ::Array<::UnityEngine::UI::Image*>*> ____images;

  /// @brief Field _didStart, offset: 0x48, size: 0x1, def value: None
  bool ____didStart;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ButtonSpriteSwap, 0x50>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ButtonSpriteSwap);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ButtonSpriteSwap*, "HMUI", "ButtonSpriteSwap");
