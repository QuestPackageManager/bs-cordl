#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SelectorUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SelectorUtility)
namespace UnityEngine::UIElements {
class StyleSelector;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class SelectorUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::SelectorUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::SelectorUtility*, "UnityEngine.UIElements", "SelectorUtility");
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.SelectorUtility
class CORDL_TYPE SelectorUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method ExtractSelectorsAndSpecificityFromString, addr 0x71132a0, size 0x3b4, virtual false, abstract: false, final false
  static inline bool ExtractSelectorsAndSpecificityFromString(::StringW complexSelectorStr, ::by_ref<::ArrayW<::UnityEngine::UIElements::StyleSelector*>> selectors, ::by_ref<int32_t> specificity,
                                                              ::by_ref<::StringW> error);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectorUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectorUtility", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectorUtility(SelectorUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectorUtility", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectorUtility(SelectorUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5132 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::SelectorUtility) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
