#pragma once
// IWYU pragma private; include "GlobalNamespace/StartupErrorViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StartupErrorViewController)
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class StartupErrorViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StartupErrorViewController);
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: StartupErrorViewController
class CORDL_TYPE StartupErrorViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _quitButton, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__quitButton, put = __cordl_internal_set__quitButton)) ::UnityW<::UnityEngine::UI::Button> _quitButton;

  /// @brief Field _text, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::UnityW<::TMPro::TMP_Text> _text;

  /// @brief Method DidActivate, addr 0x3afc0ec, size 0xb0, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method HandleQuitButtonPressed, addr 0x3afc1c0, size 0x50, virtual false, abstract: false, final false
  inline void HandleQuitButtonPressed();

  static inline ::GlobalNamespace::StartupErrorViewController* New_ctor();

  /// @brief Method SetMessage, addr 0x3afc19c, size 0x24, virtual false, abstract: false, final false
  inline void SetMessage(::StringW message);

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__quitButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__quitButton();

  constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__quitButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TMP_Text> value);

  /// @brief Method .ctor, addr 0x3afc210, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StartupErrorViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StartupErrorViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StartupErrorViewController(StartupErrorViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StartupErrorViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StartupErrorViewController(StartupErrorViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4964 };

  /// @brief Field _text, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_Text> ____text;

  /// @brief Field _quitButton, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____quitButton;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StartupErrorViewController, ____text) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StartupErrorViewController, ____quitButton) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StartupErrorViewController, 0x88>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StartupErrorViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StartupErrorViewController*, "", "StartupErrorViewController");
