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
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class GameObject;
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
// CS Name: ::LoadingControl*
class CORDL_TYPE LoadingControl : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _buttonBinder, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _donwloadingProgressImage, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__donwloadingProgressImage, put = __cordl_internal_set__donwloadingProgressImage))::UnityW<::UnityEngine::UI::Image> _donwloadingProgressImage;

  /// @brief Field _downloadingContainer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__downloadingContainer, put = __cordl_internal_set__downloadingContainer))::UnityW<::UnityEngine::GameObject> _downloadingContainer;

  /// @brief Field _downloadingText, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__downloadingText, put = __cordl_internal_set__downloadingText))::UnityW<::TMPro::TextMeshProUGUI> _downloadingText;

  /// @brief Field _loadingContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__loadingContainer, put = __cordl_internal_set__loadingContainer))::UnityW<::UnityEngine::GameObject> _loadingContainer;

  /// @brief Field _loadingText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__loadingText, put = __cordl_internal_set__loadingText))::UnityW<::TMPro::TextMeshProUGUI> _loadingText;

  /// @brief Field _refreshButton, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__refreshButton, put = __cordl_internal_set__refreshButton))::UnityW<::UnityEngine::UI::Button> _refreshButton;

  /// @brief Field _refreshContainer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__refreshContainer, put = __cordl_internal_set__refreshContainer))::UnityW<::UnityEngine::GameObject> _refreshContainer;

  /// @brief Field _refreshText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__refreshText, put = __cordl_internal_set__refreshText))::UnityW<::TMPro::TextMeshProUGUI> _refreshText;

  /// @brief Field didPressRefreshButtonEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressRefreshButtonEvent, put = __cordl_internal_set_didPressRefreshButtonEvent))::System::Action* didPressRefreshButtonEvent;

  __declspec(property(get = get_isLoading)) bool isLoading;

  /// @brief Method Awake, addr 0x2739a94, size 0xc4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Hide, addr 0x2739d5c, size 0x24, virtual false, abstract: false, final false
  inline void Hide();

  static inline ::GlobalNamespace::LoadingControl* New_ctor();

  /// @brief Method OnDestroy, addr 0x2739b58, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ShowDownloadingProgress, addr 0x2739cb0, size 0xac, virtual false, abstract: false, final false
  inline void ShowDownloadingProgress(::StringW text, float_t downloadingProgress);

  /// @brief Method ShowLoading, addr 0x2739b74, size 0x8c, virtual false, abstract: false, final false
  inline void ShowLoading(::StringW text);

  /// @brief Method ShowText, addr 0x2739c00, size 0xb0, virtual false, abstract: false, final false
  inline void ShowText(::StringW text, bool showRefreshButton);

  /// @brief Method <Awake>b__14_0, addr 0x2739d88, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__14_0();

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __cordl_internal_get__buttonBinder() const;

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__donwloadingProgressImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__donwloadingProgressImage();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__downloadingContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__downloadingContainer();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__downloadingText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__downloadingText();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__loadingContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__loadingContainer();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__loadingText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__loadingText();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__refreshButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__refreshButton();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__refreshContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__refreshContainer();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__refreshText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__refreshText();

  constexpr ::System::Action*& __cordl_internal_get_didPressRefreshButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didPressRefreshButtonEvent() const;

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__donwloadingProgressImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__downloadingContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__downloadingText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__loadingContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__loadingText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__refreshButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__refreshContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__refreshText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set_didPressRefreshButtonEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x2739d80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didPressRefreshButtonEvent, addr 0x2739940, size 0x9c, virtual false, abstract: false, final false
  inline void add_didPressRefreshButtonEvent(::System::Action* value);

  /// @brief Method get_isLoading, addr 0x2739a78, size 0x1c, virtual false, abstract: false, final false
  inline bool get_isLoading();

  /// @brief Method remove_didPressRefreshButtonEvent, addr 0x27399dc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didPressRefreshButtonEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadingControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LoadingControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LoadingControl(LoadingControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LoadingControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LoadingControl(LoadingControl const&) = delete;

  /// @brief Field _loadingContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____loadingContainer;

  /// @brief Field _loadingText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____loadingText;

  /// @brief Field _refreshText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____refreshText;

  /// @brief Field _refreshButton, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____refreshButton;

  /// @brief Field _refreshContainer, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____refreshContainer;

  /// @brief Field _downloadingContainer, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____downloadingContainer;

  /// @brief Field _downloadingText, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____downloadingText;

  /// @brief Field _donwloadingProgressImage, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____donwloadingProgressImage;

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
