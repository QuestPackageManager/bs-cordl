#pragma once
// IWYU pragma private; include "GlobalNamespace/EnterTextViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnterTextViewController)
namespace GlobalNamespace {
class VRTextEntryController;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class EnterTextViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnterTextViewController);
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnterTextViewController
class CORDL_TYPE EnterTextViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _okButton, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__okButton, put = __cordl_internal_set__okButton)) ::UnityW<::UnityEngine::UI::Button> _okButton;

  /// @brief Field _textEntryController, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__textEntryController, put = __cordl_internal_set__textEntryController)) ::UnityW<::GlobalNamespace::VRTextEntryController> _textEntryController;

  /// @brief Field _titleText, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__titleText, put = __cordl_internal_set__titleText)) ::UnityW<::TMPro::TextMeshProUGUI> _titleText;

  /// @brief Field didFinishEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent,
                      put = __cordl_internal_set_didFinishEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::EnterTextViewController>, ::StringW>* didFinishEvent;

  /// @brief Method DidActivate, addr 0x3c12ce8, size 0xe0, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method Init, addr 0x3c12cc4, size 0x24, virtual false, abstract: false, final false
  inline void Init(::StringW titleText);

  static inline ::GlobalNamespace::EnterTextViewController* New_ctor();

  /// @brief Method OkButtonPressed, addr 0x3c12dc8, size 0x98, virtual false, abstract: false, final false
  inline void OkButtonPressed();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__okButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__okButton();

  constexpr ::UnityW<::GlobalNamespace::VRTextEntryController> const& __cordl_internal_get__textEntryController() const;

  constexpr ::UnityW<::GlobalNamespace::VRTextEntryController>& __cordl_internal_get__textEntryController();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__titleText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__titleText();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::EnterTextViewController>, ::StringW>* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::EnterTextViewController>, ::StringW>*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__okButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__textEntryController(::UnityW<::GlobalNamespace::VRTextEntryController> value);

  constexpr void __cordl_internal_set__titleText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::EnterTextViewController>, ::StringW>* value);

  /// @brief Method .ctor, addr 0x3c12e60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x3c12b64, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::EnterTextViewController>, ::StringW>* value);

  /// @brief Method remove_didFinishEvent, addr 0x3c12c14, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::EnterTextViewController>, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnterTextViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnterTextViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnterTextViewController(EnterTextViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnterTextViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnterTextViewController(EnterTextViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4883 };

  /// @brief Field _textEntryController, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VRTextEntryController> ____textEntryController;

  /// @brief Field _titleText, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____titleText;

  /// @brief Field _okButton, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____okButton;

  /// @brief Field didFinishEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::EnterTextViewController>, ::StringW>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnterTextViewController, ____textEntryController) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnterTextViewController, ____titleText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnterTextViewController, ____okButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnterTextViewController, ___didFinishEvent) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnterTextViewController, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnterTextViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnterTextViewController*, "", "EnterTextViewController");
