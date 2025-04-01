#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleValueKeywordExtension.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StyleValueKeywordExtension)
namespace UnityEngine::UIElements {
struct StyleValueKeyword;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleValueKeywordExtension;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleValueKeywordExtension);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleValueKeywordExtension
class CORDL_TYPE StyleValueKeywordExtension : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToUssString, addr 0x4a89078, size 0x11c, virtual false, abstract: false, final false
  static inline ::StringW ToUssString(::UnityEngine::UIElements::StyleValueKeyword svk);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleValueKeywordExtension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleValueKeywordExtension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleValueKeywordExtension(StyleValueKeywordExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleValueKeywordExtension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleValueKeywordExtension(StyleValueKeywordExtension const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6186 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleValueKeywordExtension, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleValueKeywordExtension);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleValueKeywordExtension*, "UnityEngine.UIElements", "StyleValueKeywordExtension");
