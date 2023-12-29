#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LoadingControl)
namespace HMUI {
class ButtonBinder;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Image;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class LoadingControl;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LoadingControl);
// Type: ::LoadingControl
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5533))
// CS Name: ::LoadingControl*
class CORDL_TYPE LoadingControl : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _loadingContainer, offset 0x18, size 0x8
  __declspec(property(get = __get__loadingContainer, put = __set__loadingContainer))::UnityEngine::GameObject* _loadingContainer;

  /// @brief Field _loadingText, offset 0x20, size 0x8
  __declspec(property(get = __get__loadingText, put = __set__loadingText))::TMPro::TextMeshProUGUI* _loadingText;

  /// @brief Field _refreshText, offset 0x28, size 0x8
  __declspec(property(get = __get__refreshText, put = __set__refreshText))::TMPro::TextMeshProUGUI* _refreshText;

  /// @brief Field _refreshButton, offset 0x30, size 0x8
  __declspec(property(get = __get__refreshButton, put = __set__refreshButton))::UnityEngine::UI::Button* _refreshButton;

  /// @brief Field _refreshContainer, offset 0x38, size 0x8
  __declspec(property(get = __get__refreshContainer, put = __set__refreshContainer))::UnityEngine::GameObject* _refreshContainer;

  /// @brief Field _downloadingContainer, offset 0x40, size 0x8
  __declspec(property(get = __get__downloadingContainer, put = __set__downloadingContainer))::UnityEngine::GameObject* _downloadingContainer;

  /// @brief Field _downloadingText, offset 0x48, size 0x8
  __declspec(property(get = __get__downloadingText, put = __set__downloadingText))::TMPro::TextMeshProUGUI* _downloadingText;

  /// @brief Field _donwloadingProgressImage, offset 0x50, size 0x8
  __declspec(property(get = __get__donwloadingProgressImage, put = __set__donwloadingProgressImage))::UnityEngine::UI::Image* _donwloadingProgressImage;

  /// @brief Field didPressRefreshButtonEvent, offset 0x58, size 0x8
  __declspec(property(get = __get_didPressRefreshButtonEvent, put = __set_didPressRefreshButtonEvent))::System::Action* didPressRefreshButtonEvent;

  /// @brief Field _buttonBinder, offset 0x60, size 0x8
  __declspec(property(get = __get__buttonBinder, put = __set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  __declspec(property(get = get_isLoading)) bool isLoading;

  constexpr ::UnityEngine::GameObject*& __get__loadingContainer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__loadingContainer() const;

  constexpr void __set__loadingContainer(::UnityEngine::GameObject* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__loadingText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__loadingText() const;

  constexpr void __set__loadingText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__refreshText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__refreshText() const;

  constexpr void __set__refreshText(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::UI::Button*& __get__refreshButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__refreshButton() const;

  constexpr void __set__refreshButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::GameObject*& __get__refreshContainer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__refreshContainer() const;

  constexpr void __set__refreshContainer(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__downloadingContainer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__downloadingContainer() const;

  constexpr void __set__downloadingContainer(::UnityEngine::GameObject* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__downloadingText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__downloadingText() const;

  constexpr void __set__downloadingText(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::UI::Image*& __get__donwloadingProgressImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__donwloadingProgressImage() const;

  constexpr void __set__donwloadingProgressImage(::UnityEngine::UI::Image* value);

  constexpr ::System::Action*& __get_didPressRefreshButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didPressRefreshButtonEvent() const;

  constexpr void __set_didPressRefreshButtonEvent(::System::Action* value);

  constexpr ::HMUI::ButtonBinder*& __get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __get__buttonBinder() const;

  constexpr void __set__buttonBinder(::HMUI::ButtonBinder* value);

  /// @brief Method add_didPressRefreshButtonEvent addr 0x2138eb8 size 0x9c virtual false final false
  inline void add_didPressRefreshButtonEvent(::System::Action* value);

  /// @brief Method remove_didPressRefreshButtonEvent addr 0x2138f54 size 0x9c virtual false final false
  inline void remove_didPressRefreshButtonEvent(::System::Action* value);

  /// @brief Method get_isLoading addr 0x2138ff0 size 0x1c virtual false final false
  inline bool get_isLoading();

  /// @brief Method Awake addr 0x213900c size 0xc4 virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x21390d0 size 0x1c virtual false final false
  inline void OnDestroy();

  /// @brief Method ShowLoading addr 0x21390ec size 0x8c virtual false final false
  inline void ShowLoading(::StringW text);

  /// @brief Method ShowText addr 0x2139178 size 0xb0 virtual false final false
  inline void ShowText(::StringW text, bool showRefreshButton);

  /// @brief Method ShowDownloadingProgress addr 0x2139228 size 0xac virtual false final false
  inline void ShowDownloadingProgress(::StringW text, float_t downloadingProgress);

  /// @brief Method Hide addr 0x21392d4 size 0x24 virtual false final false
  inline void Hide();

  static inline ::GlobalNamespace::LoadingControl* New_ctor();

  /// @brief Method .ctor addr 0x21392f8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Awake>b__14_0 addr 0x2139300 size 0x1c virtual false final false
  inline void _Awake_b__14_0();

  // Ctor Parameters [CppParam { name: "", ty: "LoadingControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LoadingControl(LoadingControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LoadingControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LoadingControl(LoadingControl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadingControl();

public:
  /// @brief Field _loadingContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____loadingContainer;

  /// @brief Field _loadingText, offset: 0x20, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____loadingText;

  /// @brief Field _refreshText, offset: 0x28, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____refreshText;

  /// @brief Field _refreshButton, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____refreshButton;

  /// @brief Field _refreshContainer, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____refreshContainer;

  /// @brief Field _downloadingContainer, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____downloadingContainer;

  /// @brief Field _downloadingText, offset: 0x48, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____downloadingText;

  /// @brief Field _donwloadingProgressImage, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____donwloadingProgressImage;

  /// @brief Field didPressRefreshButtonEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___didPressRefreshButtonEvent;

  /// @brief Field _buttonBinder, offset: 0x60, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LoadingControl, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadingControl, ____loadingContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadingControl, ____loadingText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadingControl, ____refreshText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadingControl, ____refreshButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadingControl, ____refreshContainer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadingControl, ____downloadingContainer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadingControl, ____downloadingText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadingControl, ____donwloadingProgressImage) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadingControl, ___didPressRefreshButtonEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadingControl, ____buttonBinder) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LoadingControl);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LoadingControl*, "", "LoadingControl");
