#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LabelScopeKind)
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
struct LabelScopeKind;
}
// Write type traits
MARK_VAL_T(::System::Linq::Expressions::Interpreter::LabelScopeKind);
// Type: System.Linq.Expressions.Interpreter::LabelScopeKind
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: true
// CS Name: ::System.Linq.Expressions.Interpreter::LabelScopeKind
struct CORDL_TYPE LabelScopeKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LabelScopeKind_Unwrapped
  enum struct __LabelScopeKind_Unwrapped : int32_t {
    __E_Statement = static_cast<int32_t>(0x0),
    __E_Block = static_cast<int32_t>(0x1),
    __E_Switch = static_cast<int32_t>(0x2),
    __E_Lambda = static_cast<int32_t>(0x3),
    __E_Try = static_cast<int32_t>(0x4),
    __E_Catch = static_cast<int32_t>(0x5),
    __E_Finally = static_cast<int32_t>(0x6),
    __E_Filter = static_cast<int32_t>(0x7),
    __E_Expression = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LabelScopeKind_Unwrapped() const noexcept {
    return static_cast<__LabelScopeKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LabelScopeKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LabelScopeKind(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Block value: static_cast<int32_t>(0x1)
  static ::System::Linq::Expressions::Interpreter::LabelScopeKind const Block;

  /// @brief Field Catch value: static_cast<int32_t>(0x5)
  static ::System::Linq::Expressions::Interpreter::LabelScopeKind const Catch;

  /// @brief Field Expression value: static_cast<int32_t>(0x8)
  static ::System::Linq::Expressions::Interpreter::LabelScopeKind const Expression;

  /// @brief Field Filter value: static_cast<int32_t>(0x7)
  static ::System::Linq::Expressions::Interpreter::LabelScopeKind const Filter;

  /// @brief Field Finally value: static_cast<int32_t>(0x6)
  static ::System::Linq::Expressions::Interpreter::LabelScopeKind const Finally;

  /// @brief Field Lambda value: static_cast<int32_t>(0x3)
  static ::System::Linq::Expressions::Interpreter::LabelScopeKind const Lambda;

  /// @brief Field Statement value: static_cast<int32_t>(0x0)
  static ::System::Linq::Expressions::Interpreter::LabelScopeKind const Statement;

  /// @brief Field Switch value: static_cast<int32_t>(0x2)
  static ::System::Linq::Expressions::Interpreter::LabelScopeKind const Switch;

  /// @brief Field Try value: static_cast<int32_t>(0x4)
  static ::System::Linq::Expressions::Interpreter::LabelScopeKind const Try;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::LabelScopeKind, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LabelScopeKind, value__) == 0x0, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LabelScopeKind, "System.Linq.Expressions.Interpreter", "LabelScopeKind");
