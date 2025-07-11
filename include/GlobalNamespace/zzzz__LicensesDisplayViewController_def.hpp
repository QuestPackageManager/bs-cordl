#pragma once
// IWYU pragma private; include "GlobalNamespace/LicensesDisplayViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(LicensesDisplayViewController)
namespace HMUI {
class TextPageScrollView;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class LicensesDisplayViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LicensesDisplayViewController);
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: LicensesDisplayViewController
class CORDL_TYPE LicensesDisplayViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _textAsset, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__textAsset, put = __cordl_internal_set__textAsset)) ::UnityW<::UnityEngine::TextAsset> _textAsset;

  /// @brief Field _textPageScrollView, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__textPageScrollView, put = __cordl_internal_set__textPageScrollView)) ::UnityW<::HMUI::TextPageScrollView> _textPageScrollView;

  /// @brief Method DidActivate, addr 0x3c1c5bc, size 0x44, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::LicensesDisplayViewController* New_ctor();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get__textAsset() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get__textAsset();

  constexpr ::UnityW<::HMUI::TextPageScrollView> const& __cordl_internal_get__textPageScrollView() const;

  constexpr ::UnityW<::HMUI::TextPageScrollView>& __cordl_internal_get__textPageScrollView();

  constexpr void __cordl_internal_set__textAsset(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void __cordl_internal_set__textPageScrollView(::UnityW<::HMUI::TextPageScrollView> value);

  /// @brief Method .ctor, addr 0x3c1c600, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LicensesDisplayViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LicensesDisplayViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LicensesDisplayViewController(LicensesDisplayViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LicensesDisplayViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LicensesDisplayViewController(LicensesDisplayViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4911 };

  /// @brief Field _textPageScrollView, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::TextPageScrollView> ____textPageScrollView;

  /// @brief Field _textAsset, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ____textAsset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LicensesDisplayViewController, ____textPageScrollView) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LicensesDisplayViewController, ____textAsset) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LicensesDisplayViewController, 0x88>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LicensesDisplayViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LicensesDisplayViewController*, "", "LicensesDisplayViewController");
