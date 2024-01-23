#pragma once
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
// Type: BeatSaber.AvatarCore::AvatarSelectionView
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10251))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15177))
// CS Name: ::BeatSaber.AvatarCore::AvatarSelectionView*
class CORDL_TYPE AvatarSelectionView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _createButton, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__createButton, put = __cordl_internal_set__createButton))::UnityW<::UnityEngine::UI::Button> _createButton;

  /// @brief Field _editButton, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__editButton, put = __cordl_internal_set__editButton))::UnityW<::UnityEngine::UI::Button> _editButton;

  /// @brief Field _setAsPreferredButton, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__setAsPreferredButton, put = __cordl_internal_set__setAsPreferredButton))::UnityW<::UnityEngine::UI::Button> _setAsPreferredButton;

  /// @brief Field _currentlyPreferredText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__currentlyPreferredText, put = __cordl_internal_set__currentlyPreferredText))::UnityW<::TMPro::TextMeshProUGUI> _currentlyPreferredText;

  /// @brief Field _rectTransform, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__rectTransform, put = __cordl_internal_set__rectTransform))::UnityW<::UnityEngine::RectTransform> _rectTransform;

  /// @brief Field _backgroundImageView, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundImageView, put = __cordl_internal_set__backgroundImageView))::UnityW<::HMUI::ImageView> _backgroundImageView;

  /// @brief Field _preferredColor, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__preferredColor, put = __cordl_internal_set__preferredColor))::UnityEngine::Color _preferredColor;

  /// @brief Field _normalColor, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__normalColor, put = __cordl_internal_set__normalColor))::UnityEngine::Color _normalColor;

  /// @brief Field didPressEditButtonEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressEditButtonEvent, put = __cordl_internal_set_didPressEditButtonEvent))::System::Action* didPressEditButtonEvent;

  /// @brief Field didPressCreateButtonEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressCreateButtonEvent, put = __cordl_internal_set_didPressCreateButtonEvent))::System::Action* didPressCreateButtonEvent;

  /// @brief Field didPressPreferredButtonEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressPreferredButtonEvent, put = __cordl_internal_set_didPressPreferredButtonEvent))::System::Action* didPressPreferredButtonEvent;

  /// @brief Field _buttonBinder, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  __declspec(property(get = get_rectTransform))::UnityW<::UnityEngine::RectTransform> rectTransform;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__createButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__createButton() const;

  constexpr void __cordl_internal_set__createButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__editButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__editButton() const;

  constexpr void __cordl_internal_set__editButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__setAsPreferredButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__setAsPreferredButton() const;

  constexpr void __cordl_internal_set__setAsPreferredButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__currentlyPreferredText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__currentlyPreferredText() const;

  constexpr void __cordl_internal_set__currentlyPreferredText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

  constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__backgroundImageView();

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__backgroundImageView() const;

  constexpr void __cordl_internal_set__backgroundImageView(::UnityW<::HMUI::ImageView> value);

  constexpr ::UnityEngine::Color& __cordl_internal_get__preferredColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__preferredColor() const;

  constexpr void __cordl_internal_set__preferredColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __cordl_internal_get__normalColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__normalColor() const;

  constexpr void __cordl_internal_set__normalColor(::UnityEngine::Color value);

  constexpr ::System::Action*& __cordl_internal_get_didPressEditButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didPressEditButtonEvent() const;

  constexpr void __cordl_internal_set_didPressEditButtonEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_didPressCreateButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didPressCreateButtonEvent() const;

  constexpr void __cordl_internal_set_didPressCreateButtonEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_didPressPreferredButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didPressPreferredButtonEvent() const;

  constexpr void __cordl_internal_set_didPressPreferredButtonEvent(::System::Action* value);

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __cordl_internal_get__buttonBinder() const;

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  /// @brief Method add_didPressEditButtonEvent, addr 0xe0c2c0, size 0x9c, virtual false, abstract: false, final false
  inline void add_didPressEditButtonEvent(::System::Action* value);

  /// @brief Method remove_didPressEditButtonEvent, addr 0xe0c35c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didPressEditButtonEvent(::System::Action* value);

  /// @brief Method add_didPressCreateButtonEvent, addr 0xe0c3f8, size 0x9c, virtual false, abstract: false, final false
  inline void add_didPressCreateButtonEvent(::System::Action* value);

  /// @brief Method remove_didPressCreateButtonEvent, addr 0xe0c494, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didPressCreateButtonEvent(::System::Action* value);

  /// @brief Method add_didPressPreferredButtonEvent, addr 0xe0c530, size 0x9c, virtual false, abstract: false, final false
  inline void add_didPressPreferredButtonEvent(::System::Action* value);

  /// @brief Method remove_didPressPreferredButtonEvent, addr 0xe0c5cc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didPressPreferredButtonEvent(::System::Action* value);

  /// @brief Method get_rectTransform, addr 0xe0c668, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_rectTransform();

  /// @brief Method Start, addr 0xe0c670, size 0x144, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method SetPreferred, addr 0xe0c7b4, size 0xb4, virtual true, abstract: false, final false
  inline void SetPreferred(bool isPreferred);

  /// @brief Method SetCreated, addr 0xe0c868, size 0x78, virtual true, abstract: false, final false
  inline void SetCreated(bool isCreated);

  /// @brief Method Activate, addr 0xe0c8e0, size 0x4, virtual true, abstract: false, final false
  inline void Activate();

  /// @brief Method Deactivate, addr 0xe0c8e4, size 0x4, virtual true, abstract: false, final false
  inline void Deactivate();

  static inline ::BeatSaber::AvatarCore::AvatarSelectionView* New_ctor();

  /// @brief Method .ctor, addr 0xe0c8e8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Start>b__20_0, addr 0xe0c950, size 0x1c, virtual false, abstract: false, final false
  inline void _Start_b__20_0();

  /// @brief Method <Start>b__20_1, addr 0xe0c96c, size 0x1c, virtual false, abstract: false, final false
  inline void _Start_b__20_1();

  /// @brief Method <Start>b__20_2, addr 0xe0c988, size 0x1c, virtual false, abstract: false, final false
  inline void _Start_b__20_2();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarSelectionView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarSelectionView(AvatarSelectionView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarSelectionView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarSelectionView(AvatarSelectionView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarSelectionView();

public:
  /// @brief Field _createButton, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____createButton;

  /// @brief Field _editButton, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____editButton;

  /// @brief Field _setAsPreferredButton, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____setAsPreferredButton;

  /// @brief Field _currentlyPreferredText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____currentlyPreferredText;

  /// @brief Field _rectTransform, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____rectTransform;

  /// @brief Field _backgroundImageView, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageView> ____backgroundImageView;

  /// @brief Field _preferredColor, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ____preferredColor;

  /// @brief Field _normalColor, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Color ____normalColor;

  /// @brief Field didPressEditButtonEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action* ___didPressEditButtonEvent;

  /// @brief Field didPressCreateButtonEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action* ___didPressCreateButtonEvent;

  /// @brief Field didPressPreferredButtonEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action* ___didPressPreferredButtonEvent;

  /// @brief Field _buttonBinder, offset: 0x80, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarSelectionView, 0x88>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ____createButton) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ____editButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ____setAsPreferredButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ____currentlyPreferredText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ____rectTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ____backgroundImageView) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ____preferredColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ____normalColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ___didPressEditButtonEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ___didPressCreateButtonEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ___didPressPreferredButtonEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSelectionView, ____buttonBinder) == 0x80, "Offset mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarSelectionView);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarSelectionView*, "BeatSaber.AvatarCore", "AvatarSelectionView");