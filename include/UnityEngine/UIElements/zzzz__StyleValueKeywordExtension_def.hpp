#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\StyleValueKeywordExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StyleValueKeywordExtension)
namespace UnityEngine::UIElements {
struct StyleValueKeyword;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleValueKeywordExtension;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::StyleValueKeywordExtension*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleValueKeywordExtension*, "UnityEngine.UIElements", "StyleValueKeywordExtension");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleValueKeywordExtension
class CORDL_TYPE StyleValueKeywordExtension : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToUssString, addr 0x6c9d428, size 0x17c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5076 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::StyleValueKeywordExtension) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
