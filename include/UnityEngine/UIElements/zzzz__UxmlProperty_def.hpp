#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UxmlProperty)
// Forward declare root types
namespace UnityEngine::UIElements {
struct UxmlProperty;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UxmlProperty);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UxmlProperty, "UnityEngine.UIElements", "UxmlProperty");
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.UxmlProperty
struct CORDL_TYPE UxmlProperty {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlProperty();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None, comment:
  // None }]
  constexpr UxmlProperty(::StringW name, ::StringW value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5287 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field value, offset: 0x8, size: 0x8, def value: None
  ::StringW value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UxmlProperty, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlProperty, value) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UxmlProperty) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
