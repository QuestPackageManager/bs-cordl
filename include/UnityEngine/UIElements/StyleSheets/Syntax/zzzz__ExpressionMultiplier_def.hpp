#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__ExpressionMultiplierType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExpressionMultiplier)
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionMultiplierType;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionMultiplier;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier);
// Type: UnityEngine.UIElements.StyleSheets.Syntax::ExpressionMultiplier
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7496))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7497))
// CS Name: ::UnityEngine.UIElements.StyleSheets.Syntax::ExpressionMultiplier
struct CORDL_TYPE ExpressionMultiplier {
public:
  // Declarations
  __declspec(property(get = get_type, put = set_type))::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType type;

  /// @brief Method get_type, addr 0x2df16a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType get_type();

  /// @brief Method set_type, addr 0x2df861c, size 0x4, virtual false, abstract: false, final false
  inline void set_type(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType value);

  /// @brief Method .ctor, addr 0x2df888c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType type);

  /// @brief Method SetType, addr 0x2df889c, size 0x54, virtual false, abstract: false, final false
  inline void SetType(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType value);

  // Ctor Parameters [CppParam { name: "m_Type", ty: "::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType", modifiers: "", def_value: None }, CppParam { name: "min", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "max", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ExpressionMultiplier(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType m_Type, int32_t min, int32_t max) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpressionMultiplier();

  /// @brief Field m_Type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType m_Type;

  /// @brief Field min, offset: 0x4, size: 0x4, def value: None
  int32_t min;

  /// @brief Field max, offset: 0x8, size: 0x4, def value: None
  int32_t max;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field Infinity offset 0xffffffff size 0x4
  static constexpr int32_t Infinity{ static_cast<int32_t>(0x64) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier, m_Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier, min) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier, max) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets::Syntax
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier, "UnityEngine.UIElements.StyleSheets.Syntax", "ExpressionMultiplier");
