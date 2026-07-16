#pragma once
// IWYU pragma private; include "GlobalNamespace/SafeAreaFocusedSimpleDialogPromptViewController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SimpleDialogPromptViewController_def.hpp"
CORDL_MODULE_EXPORT(SafeAreaFocusedSimpleDialogPromptViewController)
// Forward declare root types
namespace GlobalNamespace {
class SafeAreaFocusedSimpleDialogPromptViewController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController*, "", "SafeAreaFocusedSimpleDialogPromptViewController");
// Dependencies SimpleDialogPromptViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: SafeAreaFocusedSimpleDialogPromptViewController
class CORDL_TYPE SafeAreaFocusedSimpleDialogPromptViewController : public ::GlobalNamespace::SimpleDialogPromptViewController {
public:
  // Declarations
  static inline ::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController* New_ctor();

  /// @brief Method .ctor, addr 0x5a17450, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeAreaFocusedSimpleDialogPromptViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SafeAreaFocusedSimpleDialogPromptViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafeAreaFocusedSimpleDialogPromptViewController(SafeAreaFocusedSimpleDialogPromptViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafeAreaFocusedSimpleDialogPromptViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafeAreaFocusedSimpleDialogPromptViewController(SafeAreaFocusedSimpleDialogPromptViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6433 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController) == 0xa0, "Size mismatch!");

} // namespace GlobalNamespace
