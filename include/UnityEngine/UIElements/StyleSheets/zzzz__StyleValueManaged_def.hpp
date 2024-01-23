#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(StyleValueManaged)
namespace System {
class Object;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct StyleValueManaged;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::StyleValueManaged);
// Type: UnityEngine.UIElements.StyleSheets::StyleValueManaged
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7300)), TypeDefinitionIndex(TypeDefinitionIndex(7487))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7467))
// CS Name: ::UnityEngine.UIElements.StyleSheets::StyleValueManaged
struct CORDL_TYPE StyleValueManaged {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "id", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: None }, CppParam { name: "keyword", ty:
  // "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::Object*", modifiers: "", def_value: None }]
  constexpr StyleValueManaged(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleKeyword keyword, ::System::Object* value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleValueManaged();

  /// @brief Field id, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleSheets::StylePropertyId id;

  /// @brief Field keyword, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword keyword;

  /// @brief Field value, offset: 0x8, size: 0x8, def value: None
  ::System::Object* value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StyleValueManaged, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StyleValueManaged, id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StyleValueManaged, keyword) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StyleValueManaged, value) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StyleValueManaged, "UnityEngine.UIElements.StyleSheets", "StyleValueManaged");
