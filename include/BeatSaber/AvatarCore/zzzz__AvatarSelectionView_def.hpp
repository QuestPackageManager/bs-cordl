#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/AvatarSelectionView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AvatarSelectionView)
namespace HMUI {
class ButtonBinder;
}
namespace HMUI {
class ImageView;
}
namespace System {
class Action;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class AvatarSelectionView;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AvatarSelectionView);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: BeatSaber.AvatarCore.AvatarSelectionView
class CORDL_TYPE AvatarSelectionView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _backgroundImageView, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundImageView, put = __cordl_internal_set__backgroundImageView)) ::UnityW<::HMUI::ImageView> _backgroundImageView;

  /// @brief Field _buttonBinder, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder)) ::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _createButton, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__createButton, put = __cordl_internal_set__createButton)) ::UnityW<::UnityEngine::UI::Button> _createButton;

  /// @brief Field _currentlyPreferredText, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__currentlyPreferredText, put = __cordl_internal_set__currentlyPreferredText)) ::UnityW<::TMPro::TextMeshProUGUI> _currentlyPreferredText;

  /// @brief Field _editButton, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__editButton, put = __cordl_internal_set__editButton)) ::UnityW<::UnityEngine::UI::Button> _editButton;

  /// @brief Field _normalColor, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get__normalColor, put = __cordl_internal_set__normalColor)) ::UnityEngine::Color _normalColor;

  /// @brief Field _preferredColor, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__preferredColor, put = __cordl_internal_set__preferredColor)) ::UnityEngine::Color _preferredColor;

  /// @brief Field _rectTransform, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__rectTransform, put = __cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform> _rectTransform;

  /// @brief Field _setAsPreferredButton, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__setAsPreferredButton, put = __cordl_internal_set__setAsPreferredButton)) ::UnityW<::UnityEngine::UI::Button> _setAsPreferredButton;

  /// @brief Field didPressCreateButtonEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressCreateButtonEvent, put = __cordl_internal_set_didPressCreateButtonEvent)) ::System::Action* didPressCreateButtonEvent;

  /// @brief Field didPressEditButtonEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressEditButtonEvent, put = __cordl_internal_set_didPressEditButtonEvent)) ::System::Action* didPressEditButtonEvent;

  /// @brief Field didPressPreferredButtonEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressPreferredButtonEvent, put = __cordl_internal_set_didPressPreferredButtonEvent)) ::System::Action* didPressPreferredButtonEvent;

  __declspec(property(get = get_rectTransform)) ::UnityW<::UnityEngine::RectTransform> rectTransform;

  /// @brief Method Activate, addr 0x224c87c, size 0x4, virtual true, abstract: false, final false
  inline void Activate();

  /// @brief Method Deactivate, addr 0x224c880, size 0x4, virtual true, abstract: false, final false
  inline void Deactivate();

  static inline ::BeatSaber::AvatarCore::AvatarSelectionView* New_ctor();

  /// @brief Method SetCreated, addr 0x224c804, size 0x78, virtual true, abstract: false, final false
  inline void SetCreated(bool isCreated);

  /// @brief Method SetPreferred, addr 0x224c754, size 0xb0, virtual true, abstract: false, final false
  inline void SetPreferred(bool isPreferred);

  /// @brief Method Start, addr 0x224c614, size 0x140, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method <Start>b__20_0, addr 0x224c8e4, size 0x1c, virtual false, abstract: false, final false
  inline void _Start_b__20_0();

  /// @brief Method <Start>b__20_1, addr 0x224c900, size 0x1c, virtual false, abstract: false, final false
  inline void _Start_b__20_1();

  /// @brief Method <Start>b__20_2, addr 0x224c91c, size 0x1c, virtual false, abstract: false, final false
  inline void _Start_b__20_2();

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__backgroundImageView() const;

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__backgroundImageView();

  constexpr ::HMUI::ButtonBinder* const& __cordl_internal_get__buttonBinder() const;

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__createButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__createButton();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__currentlyPreferredText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__currentlyPreferredText();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__editButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__editButton();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__normalColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__normalColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__preferredColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__preferredColor();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__setAsPreferredButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__setAsPreferredButton();

  constexpr ::System::Action* const& __cordl_internal_get_didPressCreateButtonEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didPressCreateButtonEvent();

  constexpr ::System::Action* const& __cordl_internal_get_didPressEditButtonEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didPressEditButtonEvent();

  constexpr ::System::Action* const& __cordl_internal_get_didPressPreferredButtonEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didPressPreferredButtonEvent();

  constexpr void __cordl_internal_set__backgroundImageView(::UnityW<::HMUI::ImageView> value);

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__createButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__currentlyPreferredText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__editButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__normalColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__preferredColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__setAsPreferredButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_didPressCreateButtonEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didPressEditButtonEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didPressPreferredButtonEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x224c884, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didPressCreateButtonEvent, addr 0x224c39c, size 0x9c, virtual false, abstract: false, final false
  inline void add_didPressCreateButtonEvent(::System::Action* value);

  /// @brief Method add_didPressEditButtonEvent, addr 0x224c264, size 0x9c, virtual false, abstract: false, final false
  inline void add_didPressEditButtonEvent(::System::Action* value);

  /// @brief Method add_didPressPreferredButtonEvent, addr 0x224c4d4, size 0x9c, virtual false, abstract: false, final false
  inline void add_didPressPreferredButtonEvent(::System::Action* value);

  /// @brief Method get_rectTransform, addr 0x224c60c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_rectTransform();

  /// @brief Method remove_didPressCreateButtonEvent, addr 0x224c438, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didPressCreateButtonEvent(::System::Action* value);

  /// @brief Method remove_didPressEditButtonEvent, addr 0x224c300, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didPressEditButtonEvent(::System::Action* value);

  /// @brief Method remove_didPressPreferredButtonEvent, addr 0x224c570, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didPressPreferredButtonEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarSelectionView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarSelectionView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarSelectionView(AvatarSelectionView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarSelectionView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarSelectionView(AvatarSelectionView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17569 };

  /// @brief Field _createButton, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____createButton;

  /// @brief Field _editButton, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____editButton;

  /// @brief Field _setAsPreferredButton, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____setAsPreferredButton;

  /// @brief Field _currentlyPreferredText, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____currentlyPreferredText;

  /// @brief Field _rectTransform, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____rectTransform;

  /// @brief Field _backgroundImageView, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageView> ____backgroundImageView;

  /// @brief Field _preferredColor, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ____preferredColor;

  /// @brief Field _normalColor, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color ____normalColor;

  /// @brief Field didPressEditButtonEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action* ___didPressEditButtonEvent;

  /// @brief Field didPressCreateButtonEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action* ___didPressCreateButtonEvent;

  /// @brief Field didPressPreferredButtonEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action* ___didPressPreferredButtonEvent;

  /// @brief Field _buttonBinder, offset: 0x88, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ____createButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ____editButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ____setAsPreferredButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ____currentlyPreferredText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ____rectTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ____backgroundImageView) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ____preferredColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ____normalColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ___didPressEditButtonEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ___didPressCreateButtonEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ___didPressPreferredButtonEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ____buttonBinder) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarSelectionView, 0x90>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarSelectionView);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarSelectionView*, "BeatSaber.AvatarCore", "AvatarSelectionView");
