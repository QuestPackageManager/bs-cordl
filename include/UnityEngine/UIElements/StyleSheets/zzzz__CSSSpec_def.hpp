#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/CSSSpec.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CSSSpec)
namespace System::Text::RegularExpressions {
class Regex;
}
namespace UnityEngine::UIElements {
struct StyleSelectorPart;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class CSSSpec;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::StyleSheets::CSSSpec*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleSheets::CSSSpec*, "UnityEngine.UIElements.StyleSheets", "CSSSpec");
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies System.Object
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSheets.CSSSpec
class CORDL_TYPE CSSSpec : public ::System::Object {
public:
  // Declarations
  /// @brief Field rgx, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_rgx, put = setStaticF_rgx)) ::System::Text::RegularExpressions::Regex* rgx;

  /// @brief Method GetSelectorSpecificity, addr 0x71c2820, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t GetSelectorSpecificity(::ArrayW<::UnityEngine::UIElements::StyleSelectorPart> parts);

  /// @brief Method GetSelectorSpecificity, addr 0x71c22d0, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t GetSelectorSpecificity(::StringW selector);

  /// @brief Method ParseSelector, addr 0x71c236c, size 0x4b4, virtual false, abstract: false, final false
  static inline bool ParseSelector(::StringW selector, ::by_ref<::ArrayW<::UnityEngine::UIElements::StyleSelectorPart>> parts);

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_rgx();

  static inline void setStaticF_rgx(::System::Text::RegularExpressions::Regex* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CSSSpec();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CSSSpec", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CSSSpec(CSSSpec&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CSSSpec", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CSSSpec(CSSSpec const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5571 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::StyleSheets::CSSSpec) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
