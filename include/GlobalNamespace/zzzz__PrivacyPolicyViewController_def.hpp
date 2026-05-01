#pragma once
// IWYU pragma private; include "GlobalNamespace/PrivacyPolicyViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CompletableViewController_def.hpp"
CORDL_MODULE_EXPORT(PrivacyPolicyViewController)
namespace GlobalNamespace {
class PrivacyPolicyView;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class PrivacyPolicyViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PrivacyPolicyViewController);
// Dependencies CompletableViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: PrivacyPolicyViewController
class CORDL_TYPE PrivacyPolicyViewController : public ::GlobalNamespace::CompletableViewController {
public:
  // Declarations
  /// @brief Field _iAcceptButton, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__iAcceptButton, put = __cordl_internal_set__iAcceptButton)) ::UnityW<::UnityEngine::UI::Button> _iAcceptButton;

  /// @brief Field _okButton, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__okButton, put = __cordl_internal_set__okButton)) ::UnityW<::UnityEngine::UI::Button> _okButton;

  /// @brief Field _privacyPolicyView, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__privacyPolicyView, put = __cordl_internal_set__privacyPolicyView)) ::UnityW<::GlobalNamespace::PrivacyPolicyView> _privacyPolicyView;

  /// @brief Field _showIAcceptPrompt, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get__showIAcceptPrompt, put = __cordl_internal_set__showIAcceptPrompt)) bool _showIAcceptPrompt;

  /// @brief Method DidActivate, addr 0x57a5d18, size 0x1ac, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method Init, addr 0x57a5ec4, size 0x8, virtual false, abstract: false, final false
  inline void Init(bool showIAcceptPrompt);

  static inline ::GlobalNamespace::PrivacyPolicyViewController* New_ctor();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__iAcceptButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__iAcceptButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__okButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__okButton();

  constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyView> const& __cordl_internal_get__privacyPolicyView() const;

  constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyView>& __cordl_internal_get__privacyPolicyView();

  constexpr bool const& __cordl_internal_get__showIAcceptPrompt() const;

  constexpr bool& __cordl_internal_get__showIAcceptPrompt();

  constexpr void __cordl_internal_set__iAcceptButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__okButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__privacyPolicyView(::UnityW<::GlobalNamespace::PrivacyPolicyView> value);

  constexpr void __cordl_internal_set__showIAcceptPrompt(bool value);

  /// @brief Method .ctor, addr 0x57a5ecc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrivacyPolicyViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrivacyPolicyViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrivacyPolicyViewController(PrivacyPolicyViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrivacyPolicyViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrivacyPolicyViewController(PrivacyPolicyViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6524 };

  /// @brief Field _okButton, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____okButton;

  /// @brief Field _iAcceptButton, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____iAcceptButton;

  /// @brief Field _privacyPolicyView, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrivacyPolicyView> ____privacyPolicyView;

  /// @brief Field _showIAcceptPrompt, offset: 0x98, size: 0x1, def value: None
  bool ____showIAcceptPrompt;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PrivacyPolicyViewController, ____okButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivacyPolicyViewController, ____iAcceptButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivacyPolicyViewController, ____privacyPolicyView) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivacyPolicyViewController, ____showIAcceptPrompt) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PrivacyPolicyViewController, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PrivacyPolicyViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PrivacyPolicyViewController*, "", "PrivacyPolicyViewController");
