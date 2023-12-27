#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SimpleDialogPromptViewController_def.hpp"
CORDL_MODULE_EXPORT(SafeAreaFocusedSimpleDialogPromptViewController)
// Forward declare root types
namespace GlobalNamespace {
class SafeAreaFocusedSimpleDialogPromptViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController);
// Type: ::SafeAreaFocusedSimpleDialogPromptViewController
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5763))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5745))
// CS Name: ::SafeAreaFocusedSimpleDialogPromptViewController*
class CORDL_TYPE SafeAreaFocusedSimpleDialogPromptViewController : public ::GlobalNamespace::SimpleDialogPromptViewController {
public:
  // Declarations
  static inline ::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController* New_ctor();

  /// @brief Method .ctor addr 0x22d7ef0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SafeAreaFocusedSimpleDialogPromptViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafeAreaFocusedSimpleDialogPromptViewController(SafeAreaFocusedSimpleDialogPromptViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafeAreaFocusedSimpleDialogPromptViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafeAreaFocusedSimpleDialogPromptViewController(SafeAreaFocusedSimpleDialogPromptViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeAreaFocusedSimpleDialogPromptViewController();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController*, "", "SafeAreaFocusedSimpleDialogPromptViewController");
