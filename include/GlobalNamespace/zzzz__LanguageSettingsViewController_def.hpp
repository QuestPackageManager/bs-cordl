#pragma once
// IWYU pragma private; include "GlobalNamespace/LanguageSettingsViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(LanguageSettingsViewController)
// Forward declare root types
namespace GlobalNamespace {
class LanguageSettingsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LanguageSettingsViewController);
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: LanguageSettingsViewController
class CORDL_TYPE LanguageSettingsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  static inline ::GlobalNamespace::LanguageSettingsViewController* New_ctor();

  /// @brief Method .ctor, addr 0x3afce64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LanguageSettingsViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LanguageSettingsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LanguageSettingsViewController(LanguageSettingsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LanguageSettingsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LanguageSettingsViewController(LanguageSettingsViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4950 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LanguageSettingsViewController, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LanguageSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LanguageSettingsViewController*, "", "LanguageSettingsViewController");
