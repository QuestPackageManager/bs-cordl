#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/Syntax/ExpressionMultiplier.hpp"
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
// Dependencies UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplier
struct CORDL_TYPE ExpressionMultiplier {
public:
  // Declarations
  __declspec(property(get = get_type, put = set_type)) ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType type;

  /// @brief Method SetType, addr 0x49de05c, size 0x54, virtual false, abstract: false, final false
  inline void SetType(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType value);

  /// @brief Method .ctor, addr 0x49de048, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType type);

  /// @brief Method get_type, addr 0x49dcb98, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType get_type();

  /// @brief Method set_type, addr 0x49de058, size 0x4, virtual false, abstract: false, final false
  inline void set_type(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpressionMultiplier();

  // Ctor Parameters [CppParam { name: "m_Type", ty: "::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType", modifiers: "", def_value: None }, CppParam { name: "min", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "max", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ExpressionMultiplier(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType m_Type, int32_t min, int32_t max) noexcept;

  /// @brief Field Infinity offset 0xffffffff size 0x4
  static constexpr int32_t Infinity{ static_cast<int32_t>(0x64) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6477 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field m_Type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType m_Type;

  /// @brief Field min, offset: 0x4, size: 0x4, def value: None
  int32_t min;

  /// @brief Field max, offset: 0x8, size: 0x4, def value: None
  int32_t max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier, m_Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier, min) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier, max) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier, 0xc>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets::Syntax
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier, "UnityEngine.UIElements.StyleSheets.Syntax", "ExpressionMultiplier");
