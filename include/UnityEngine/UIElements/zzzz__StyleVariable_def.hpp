#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleVariable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleVariable)
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleVariable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleVariable);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleVariable
struct CORDL_TYPE StyleVariable {
public:
  // Declarations
  /// @brief Method GetHashCode, addr 0x4a8ee20, size 0x78, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x4a8ee14, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::UnityEngine::UIElements::StyleSheet* sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> handles);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleVariable();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sheet", ty: "::UnityW<::UnityEngine::UIElements::StyleSheet>", modifiers: "",
  // def_value: None }, CppParam { name: "handles", ty: "::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>", modifiers: "", def_value: None }]
  constexpr StyleVariable(::StringW name, ::UnityW<::UnityEngine::UIElements::StyleSheet> sheet,
                          ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> handles) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6188 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field sheet, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::StyleSheet> sheet;

  /// @brief Field handles, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> handles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleVariable, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariable, sheet) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariable, handles) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleVariable, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleVariable, "UnityEngine.UIElements", "StyleVariable");
