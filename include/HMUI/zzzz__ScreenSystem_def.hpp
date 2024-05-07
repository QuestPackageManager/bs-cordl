#pragma once
// IWYU pragma private; include "HMUI/ScreenSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ScreenSystem)
namespace HMUI {
class ButtonBinder;
}
namespace HMUI {
class Screen;
}
namespace HMUI {
class TitleViewController;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace HMUI {
class ScreenSystem;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ScreenSystem);
// Type: HMUI::ScreenSystem
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::ScreenSystem*
class CORDL_TYPE ScreenSystem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _backButton, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__backButton, put = __cordl_internal_set__backButton))::UnityW<::UnityEngine::UI::Button> _backButton;

  /// @brief Field _backButtonIsVisible, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__backButtonIsVisible, put = __cordl_internal_set__backButtonIsVisible)) bool _backButtonIsVisible;

  /// @brief Field _bottomScreen, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__bottomScreen, put = __cordl_internal_set__bottomScreen))::UnityW<::HMUI::Screen> _bottomScreen;

  /// @brief Field _buttonBinder, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _leftScreen, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__leftScreen, put = __cordl_internal_set__leftScreen))::UnityW<::HMUI::Screen> _leftScreen;

  /// @brief Field _mainScreen, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mainScreen, put = __cordl_internal_set__mainScreen))::UnityW<::HMUI::Screen> _mainScreen;

  /// @brief Field _rightScreen, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rightScreen, put = __cordl_internal_set__rightScreen))::UnityW<::HMUI::Screen> _rightScreen;

  /// @brief Field _titleViewController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__titleViewController, put = __cordl_internal_set__titleViewController))::UnityW<::HMUI::TitleViewController> _titleViewController;

  /// @brief Field _topScreen, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__topScreen, put = __cordl_internal_set__topScreen))::UnityW<::HMUI::Screen> _topScreen;

  /// @brief Field backButtonWasPressedEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_backButtonWasPressedEvent, put = __cordl_internal_set_backButtonWasPressedEvent))::System::Action* backButtonWasPressedEvent;

  __declspec(property(get = get_bottomScreen))::UnityW<::HMUI::Screen> bottomScreen;

  __declspec(property(get = get_leftScreen))::UnityW<::HMUI::Screen> leftScreen;

  __declspec(property(get = get_mainScreen))::UnityW<::HMUI::Screen> mainScreen;

  __declspec(property(get = get_rightScreen))::UnityW<::HMUI::Screen> rightScreen;

  __declspec(property(get = get_titleViewController))::UnityW<::HMUI::TitleViewController> titleViewController;

  __declspec(property(get = get_topScreen))::UnityW<::HMUI::Screen> topScreen;

  /// @brief Method Awake, addr 0x250f698, size 0xc4, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::HMUI::ScreenSystem* New_ctor();

  /// @brief Method OnDestroy, addr 0x250f75c, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetBackButton, addr 0x250f778, size 0x30, virtual false, abstract: false, final false
  inline void SetBackButton(bool visible, bool animated);

  /// @brief Method <Awake>b__24_0, addr 0x250f7b0, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__24_0();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__backButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__backButton();

  constexpr bool const& __cordl_internal_get__backButtonIsVisible() const;

  constexpr bool& __cordl_internal_get__backButtonIsVisible();

  constexpr ::UnityW<::HMUI::Screen> const& __cordl_internal_get__bottomScreen() const;

  constexpr ::UnityW<::HMUI::Screen>& __cordl_internal_get__bottomScreen();

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __cordl_internal_get__buttonBinder() const;

  constexpr ::UnityW<::HMUI::Screen> const& __cordl_internal_get__leftScreen() const;

  constexpr ::UnityW<::HMUI::Screen>& __cordl_internal_get__leftScreen();

  constexpr ::UnityW<::HMUI::Screen> const& __cordl_internal_get__mainScreen() const;

  constexpr ::UnityW<::HMUI::Screen>& __cordl_internal_get__mainScreen();

  constexpr ::UnityW<::HMUI::Screen> const& __cordl_internal_get__rightScreen() const;

  constexpr ::UnityW<::HMUI::Screen>& __cordl_internal_get__rightScreen();

  constexpr ::UnityW<::HMUI::TitleViewController> const& __cordl_internal_get__titleViewController() const;

  constexpr ::UnityW<::HMUI::TitleViewController>& __cordl_internal_get__titleViewController();

  constexpr ::UnityW<::HMUI::Screen> const& __cordl_internal_get__topScreen() const;

  constexpr ::UnityW<::HMUI::Screen>& __cordl_internal_get__topScreen();

  constexpr ::System::Action*& __cordl_internal_get_backButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_backButtonWasPressedEvent() const;

  constexpr void __cordl_internal_set__backButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__backButtonIsVisible(bool value);

  constexpr void __cordl_internal_set__bottomScreen(::UnityW<::HMUI::Screen> value);

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__leftScreen(::UnityW<::HMUI::Screen> value);

  constexpr void __cordl_internal_set__mainScreen(::UnityW<::HMUI::Screen> value);

  constexpr void __cordl_internal_set__rightScreen(::UnityW<::HMUI::Screen> value);

  constexpr void __cordl_internal_set__titleViewController(::UnityW<::HMUI::TitleViewController> value);

  constexpr void __cordl_internal_set__topScreen(::UnityW<::HMUI::Screen> value);

  constexpr void __cordl_internal_set_backButtonWasPressedEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x250f7a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_backButtonWasPressedEvent, addr 0x250f560, size 0x9c, virtual false, abstract: false, final false
  inline void add_backButtonWasPressedEvent(::System::Action* value);

  /// @brief Method get_bottomScreen, addr 0x250f550, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::Screen> get_bottomScreen();

  /// @brief Method get_leftScreen, addr 0x250f540, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::Screen> get_leftScreen();

  /// @brief Method get_mainScreen, addr 0x250f538, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::Screen> get_mainScreen();

  /// @brief Method get_rightScreen, addr 0x250f548, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::Screen> get_rightScreen();

  /// @brief Method get_titleViewController, addr 0x250f530, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::TitleViewController> get_titleViewController();

  /// @brief Method get_topScreen, addr 0x250f558, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::Screen> get_topScreen();

  /// @brief Method remove_backButtonWasPressedEvent, addr 0x250f5fc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_backButtonWasPressedEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenSystem(ScreenSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenSystem(ScreenSystem const&) = delete;

  /// @brief Field _mainScreen, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::Screen> ____mainScreen;

  /// @brief Field _leftScreen, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::Screen> ____leftScreen;

  /// @brief Field _rightScreen, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::Screen> ____rightScreen;

  /// @brief Field _bottomScreen, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::HMUI::Screen> ____bottomScreen;

  /// @brief Field _topScreen, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::HMUI::Screen> ____topScreen;

  /// @brief Field _backButton, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____backButton;

  /// @brief Field _titleViewController, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::HMUI::TitleViewController> ____titleViewController;

  /// @brief Field backButtonWasPressedEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___backButtonWasPressedEvent;

  /// @brief Field _backButtonIsVisible, offset: 0x58, size: 0x1, def value: None
  bool ____backButtonIsVisible;

  /// @brief Field _buttonBinder, offset: 0x60, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ScreenSystem, 0x68>, "Size mismatch!");

static_assert(offsetof(::HMUI::ScreenSystem, ____mainScreen) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScreenSystem, ____leftScreen) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScreenSystem, ____rightScreen) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScreenSystem, ____bottomScreen) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScreenSystem, ____topScreen) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScreenSystem, ____backButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScreenSystem, ____titleViewController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScreenSystem, ___backButtonWasPressedEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScreenSystem, ____backButtonIsVisible) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScreenSystem, ____buttonBinder) == 0x60, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ScreenSystem);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ScreenSystem*, "HMUI", "ScreenSystem");
