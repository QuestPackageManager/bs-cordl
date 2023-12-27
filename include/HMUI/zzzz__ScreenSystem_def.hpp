#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ScreenSystem)
namespace HMUI {
class Screen;
}
namespace HMUI {
class ButtonBinder;
}
namespace System {
class Action;
}
namespace HMUI {
class TitleViewController;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13594))
// CS Name: ::HMUI::ScreenSystem*
class CORDL_TYPE ScreenSystem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _mainScreen, offset 0x18, size 0x8
  __declspec(property(get = __get__mainScreen, put = __set__mainScreen))::HMUI::Screen* _mainScreen;

  /// @brief Field _leftScreen, offset 0x20, size 0x8
  __declspec(property(get = __get__leftScreen, put = __set__leftScreen))::HMUI::Screen* _leftScreen;

  /// @brief Field _rightScreen, offset 0x28, size 0x8
  __declspec(property(get = __get__rightScreen, put = __set__rightScreen))::HMUI::Screen* _rightScreen;

  /// @brief Field _bottomScreen, offset 0x30, size 0x8
  __declspec(property(get = __get__bottomScreen, put = __set__bottomScreen))::HMUI::Screen* _bottomScreen;

  /// @brief Field _topScreen, offset 0x38, size 0x8
  __declspec(property(get = __get__topScreen, put = __set__topScreen))::HMUI::Screen* _topScreen;

  /// @brief Field _backButton, offset 0x40, size 0x8
  __declspec(property(get = __get__backButton, put = __set__backButton))::UnityEngine::UI::Button* _backButton;

  /// @brief Field _titleViewController, offset 0x48, size 0x8
  __declspec(property(get = __get__titleViewController, put = __set__titleViewController))::HMUI::TitleViewController* _titleViewController;

  /// @brief Field backButtonWasPressedEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_backButtonWasPressedEvent, put = __set_backButtonWasPressedEvent))::System::Action* backButtonWasPressedEvent;

  /// @brief Field _backButtonIsVisible, offset 0x58, size 0x1
  __declspec(property(get = __get__backButtonIsVisible, put = __set__backButtonIsVisible)) bool _backButtonIsVisible;

  /// @brief Field _buttonBinder, offset 0x60, size 0x8
  __declspec(property(get = __get__buttonBinder, put = __set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  __declspec(property(get = get_titleViewController))::HMUI::TitleViewController* titleViewController;

  __declspec(property(get = get_mainScreen))::HMUI::Screen* mainScreen;

  __declspec(property(get = get_leftScreen))::HMUI::Screen* leftScreen;

  __declspec(property(get = get_rightScreen))::HMUI::Screen* rightScreen;

  __declspec(property(get = get_bottomScreen))::HMUI::Screen* bottomScreen;

  __declspec(property(get = get_topScreen))::HMUI::Screen* topScreen;

  constexpr ::HMUI::Screen*& __get__mainScreen();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::Screen*> const& __get__mainScreen() const;

  constexpr void __set__mainScreen(::HMUI::Screen* value);

  constexpr ::HMUI::Screen*& __get__leftScreen();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::Screen*> const& __get__leftScreen() const;

  constexpr void __set__leftScreen(::HMUI::Screen* value);

  constexpr ::HMUI::Screen*& __get__rightScreen();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::Screen*> const& __get__rightScreen() const;

  constexpr void __set__rightScreen(::HMUI::Screen* value);

  constexpr ::HMUI::Screen*& __get__bottomScreen();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::Screen*> const& __get__bottomScreen() const;

  constexpr void __set__bottomScreen(::HMUI::Screen* value);

  constexpr ::HMUI::Screen*& __get__topScreen();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::Screen*> const& __get__topScreen() const;

  constexpr void __set__topScreen(::HMUI::Screen* value);

  constexpr ::UnityEngine::UI::Button*& __get__backButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__backButton() const;

  constexpr void __set__backButton(::UnityEngine::UI::Button* value);

  constexpr ::HMUI::TitleViewController*& __get__titleViewController();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::TitleViewController*> const& __get__titleViewController() const;

  constexpr void __set__titleViewController(::HMUI::TitleViewController* value);

  constexpr ::System::Action*& __get_backButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_backButtonWasPressedEvent() const;

  constexpr void __set_backButtonWasPressedEvent(::System::Action* value);

  constexpr bool& __get__backButtonIsVisible();

  constexpr bool const& __get__backButtonIsVisible() const;

  constexpr void __set__backButtonIsVisible(bool value);

  constexpr ::HMUI::ButtonBinder*& __get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __get__buttonBinder() const;

  constexpr void __set__buttonBinder(::HMUI::ButtonBinder* value);

  /// @brief Method get_titleViewController addr 0x212c684 size 0x8 virtual false final false
  inline ::HMUI::TitleViewController* get_titleViewController();

  /// @brief Method get_mainScreen addr 0x212c68c size 0x8 virtual false final false
  inline ::HMUI::Screen* get_mainScreen();

  /// @brief Method get_leftScreen addr 0x212c694 size 0x8 virtual false final false
  inline ::HMUI::Screen* get_leftScreen();

  /// @brief Method get_rightScreen addr 0x212c69c size 0x8 virtual false final false
  inline ::HMUI::Screen* get_rightScreen();

  /// @brief Method get_bottomScreen addr 0x212c6a4 size 0x8 virtual false final false
  inline ::HMUI::Screen* get_bottomScreen();

  /// @brief Method get_topScreen addr 0x212c6ac size 0x8 virtual false final false
  inline ::HMUI::Screen* get_topScreen();

  /// @brief Method add_backButtonWasPressedEvent addr 0x212c6b4 size 0x9c virtual false final false
  inline void add_backButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_backButtonWasPressedEvent addr 0x212c750 size 0x9c virtual false final false
  inline void remove_backButtonWasPressedEvent(::System::Action* value);

  /// @brief Method Awake addr 0x212c7ec size 0xc4 virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x212c8b0 size 0x1c virtual false final false
  inline void OnDestroy();

  /// @brief Method SetBackButton addr 0x212c8cc size 0x30 virtual false final false
  inline void SetBackButton(bool visible, bool animated);

  static inline ::HMUI::ScreenSystem* New_ctor();

  /// @brief Method .ctor addr 0x212c8fc size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Awake>b__24_0 addr 0x212c904 size 0x1c virtual false final false
  inline void _Awake_b__24_0();

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenSystem(ScreenSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenSystem(ScreenSystem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSystem();

public:
  /// @brief Field _mainScreen, offset: 0x18, size: 0x8, def value: None
  ::HMUI::Screen* ____mainScreen;

  /// @brief Field _leftScreen, offset: 0x20, size: 0x8, def value: None
  ::HMUI::Screen* ____leftScreen;

  /// @brief Field _rightScreen, offset: 0x28, size: 0x8, def value: None
  ::HMUI::Screen* ____rightScreen;

  /// @brief Field _bottomScreen, offset: 0x30, size: 0x8, def value: None
  ::HMUI::Screen* ____bottomScreen;

  /// @brief Field _topScreen, offset: 0x38, size: 0x8, def value: None
  ::HMUI::Screen* ____topScreen;

  /// @brief Field _backButton, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____backButton;

  /// @brief Field _titleViewController, offset: 0x48, size: 0x8, def value: None
  ::HMUI::TitleViewController* ____titleViewController;

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

} // namespace HMUI
NEED_NO_BOX(::HMUI::ScreenSystem);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ScreenSystem*, "HMUI", "ScreenSystem");
