#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleValueFunctionExtension.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StyleValueFunctionExtension)
namespace UnityEngine::UIElements {
struct StyleValueFunction;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleValueFunctionExtension;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleValueFunctionExtension);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleValueFunctionExtension
class CORDL_TYPE StyleValueFunctionExtension : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToUssString, addr 0x4a8eea0, size 0xf0, virtual false, abstract: false, final false
  static inline ::StringW ToUssString(::UnityEngine::UIElements::StyleValueFunction svf);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleValueFunctionExtension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleValueFunctionExtension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleValueFunctionExtension(StyleValueFunctionExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleValueFunctionExtension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleValueFunctionExtension(StyleValueFunctionExtension const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6183 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleValueFunctionExtension, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleValueFunctionExtension);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleValueFunctionExtension*, "UnityEngine.UIElements", "StyleValueFunctionExtension");
