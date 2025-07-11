#pragma once
// IWYU pragma private; include "GlobalNamespace/PrivacyPolicyDisplayViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(PrivacyPolicyDisplayViewController)
namespace GlobalNamespace {
class LocalizedTextAsset;
}
namespace HMUI {
class TextPageScrollView;
}
// Forward declare root types
namespace GlobalNamespace {
class PrivacyPolicyDisplayViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PrivacyPolicyDisplayViewController);
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: PrivacyPolicyDisplayViewController
class CORDL_TYPE PrivacyPolicyDisplayViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _localizedTextAsset, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__localizedTextAsset, put = __cordl_internal_set__localizedTextAsset)) ::UnityW<::GlobalNamespace::LocalizedTextAsset> _localizedTextAsset;

  /// @brief Field _textPageScrollView, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__textPageScrollView, put = __cordl_internal_set__textPageScrollView)) ::UnityW<::HMUI::TextPageScrollView> _textPageScrollView;

  /// @brief Method DidActivate, addr 0x3af5c04, size 0x44, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::PrivacyPolicyDisplayViewController* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset> const& __cordl_internal_get__localizedTextAsset() const;

  constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset>& __cordl_internal_get__localizedTextAsset();

  constexpr ::UnityW<::HMUI::TextPageScrollView> const& __cordl_internal_get__textPageScrollView() const;

  constexpr ::UnityW<::HMUI::TextPageScrollView>& __cordl_internal_get__textPageScrollView();

  constexpr void __cordl_internal_set__localizedTextAsset(::UnityW<::GlobalNamespace::LocalizedTextAsset> value);

  constexpr void __cordl_internal_set__textPageScrollView(::UnityW<::HMUI::TextPageScrollView> value);

  /// @brief Method .ctor, addr 0x3af5c48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrivacyPolicyDisplayViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrivacyPolicyDisplayViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrivacyPolicyDisplayViewController(PrivacyPolicyDisplayViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrivacyPolicyDisplayViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrivacyPolicyDisplayViewController(PrivacyPolicyDisplayViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4937 };

  /// @brief Field _textPageScrollView, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::TextPageScrollView> ____textPageScrollView;

  /// @brief Field _localizedTextAsset, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LocalizedTextAsset> ____localizedTextAsset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PrivacyPolicyDisplayViewController, ____textPageScrollView) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivacyPolicyDisplayViewController, ____localizedTextAsset) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PrivacyPolicyDisplayViewController, 0x88>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PrivacyPolicyDisplayViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PrivacyPolicyDisplayViewController*, "", "PrivacyPolicyDisplayViewController");
