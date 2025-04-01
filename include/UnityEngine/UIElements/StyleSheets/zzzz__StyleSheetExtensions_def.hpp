#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StyleSheetExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StyleSheetExtensions)
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StyleSheetExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions);
// Dependencies System.Object
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSheets.StyleSheetExtensions
class CORDL_TYPE StyleSheetExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsVarFunction, addr 0x49d6c44, size 0x34, virtual false, abstract: false, final false
  static inline bool IsVarFunction(::UnityEngine::UIElements::StyleValueHandle handle);

  /// @brief Method ReadAsString, addr 0x49d6960, size 0x2e4, virtual false, abstract: false, final false
  static inline ::StringW ReadAsString(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleValueHandle handle);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSheetExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleSheetExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleSheetExtensions(StyleSheetExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleSheetExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleSheetExtensions(StyleSheetExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6464 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions*, "UnityEngine.UIElements.StyleSheets", "StyleSheetExtensions");
