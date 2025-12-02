#pragma once
// IWYU pragma private; include "GlobalNamespace/PrivacyPolicyViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CompletableViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PrivacyPolicyViewController)
namespace GlobalNamespace {
class LocalizedTextAsset;
}
namespace HMUI {
class TextPageScrollView;
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

  /// @brief Field _privacyPolicyLocalizedTextAsset, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__privacyPolicyLocalizedTextAsset, put = __cordl_internal_set__privacyPolicyLocalizedTextAsset)) ::UnityW<::GlobalNamespace::LocalizedTextAsset>
      _privacyPolicyLocalizedTextAsset;

  /// @brief Field _showIAcceptPrompt, offset 0xa9, size 0x1
  __declspec(property(get = __cordl_internal_get__showIAcceptPrompt, put = __cordl_internal_set__showIAcceptPrompt)) bool _showIAcceptPrompt;

  /// @brief Field _showUpdate, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get__showUpdate, put = __cordl_internal_set__showUpdate)) bool _showUpdate;

  /// @brief Field _textPageScrollView, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__textPageScrollView, put = __cordl_internal_set__textPageScrollView)) ::UnityW<::HMUI::TextPageScrollView> _textPageScrollView;

  /// @brief Field _updateNoticeLocalizationKey, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__updateNoticeLocalizationKey, put = __cordl_internal_set__updateNoticeLocalizationKey)) ::StringW _updateNoticeLocalizationKey;

  /// @brief Method DidActivate, addr 0x56d8e60, size 0x234, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method Init, addr 0x56d9094, size 0xc, virtual false, abstract: false, final false
  inline void Init(bool showUpdate, bool showIAcceptPrompt);

  static inline ::GlobalNamespace::PrivacyPolicyViewController* New_ctor();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__iAcceptButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__iAcceptButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__okButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__okButton();

  constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset> const& __cordl_internal_get__privacyPolicyLocalizedTextAsset() const;

  constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset>& __cordl_internal_get__privacyPolicyLocalizedTextAsset();

  constexpr bool const& __cordl_internal_get__showIAcceptPrompt() const;

  constexpr bool& __cordl_internal_get__showIAcceptPrompt();

  constexpr bool const& __cordl_internal_get__showUpdate() const;

  constexpr bool& __cordl_internal_get__showUpdate();

  constexpr ::UnityW<::HMUI::TextPageScrollView> const& __cordl_internal_get__textPageScrollView() const;

  constexpr ::UnityW<::HMUI::TextPageScrollView>& __cordl_internal_get__textPageScrollView();

  constexpr ::StringW const& __cordl_internal_get__updateNoticeLocalizationKey() const;

  constexpr ::StringW& __cordl_internal_get__updateNoticeLocalizationKey();

  constexpr void __cordl_internal_set__iAcceptButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__okButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__privacyPolicyLocalizedTextAsset(::UnityW<::GlobalNamespace::LocalizedTextAsset> value);

  constexpr void __cordl_internal_set__showIAcceptPrompt(bool value);

  constexpr void __cordl_internal_set__showUpdate(bool value);

  constexpr void __cordl_internal_set__textPageScrollView(::UnityW<::HMUI::TextPageScrollView> value);

  constexpr void __cordl_internal_set__updateNoticeLocalizationKey(::StringW value);

  /// @brief Method .ctor, addr 0x56d90a0, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6521 };

  /// @brief Field _okButton, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____okButton;

  /// @brief Field _iAcceptButton, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____iAcceptButton;

  /// @brief Field _textPageScrollView, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::HMUI::TextPageScrollView> ____textPageScrollView;

  /// @brief Field _privacyPolicyLocalizedTextAsset, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LocalizedTextAsset> ____privacyPolicyLocalizedTextAsset;

  /// @brief Field _updateNoticeLocalizationKey, offset: 0xa0, size: 0x8, def value: None
  ::StringW ____updateNoticeLocalizationKey;

  /// @brief Field _showUpdate, offset: 0xa8, size: 0x1, def value: None
  bool ____showUpdate;

  /// @brief Field _showIAcceptPrompt, offset: 0xa9, size: 0x1, def value: None
  bool ____showIAcceptPrompt;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PrivacyPolicyViewController, ____okButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivacyPolicyViewController, ____iAcceptButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivacyPolicyViewController, ____textPageScrollView) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivacyPolicyViewController, ____privacyPolicyLocalizedTextAsset) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivacyPolicyViewController, ____updateNoticeLocalizationKey) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivacyPolicyViewController, ____showUpdate) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivacyPolicyViewController, ____showIAcceptPrompt) == 0xa9, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PrivacyPolicyViewController, 0xb0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PrivacyPolicyViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PrivacyPolicyViewController*, "", "PrivacyPolicyViewController");
