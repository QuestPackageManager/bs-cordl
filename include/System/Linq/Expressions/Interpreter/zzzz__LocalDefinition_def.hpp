#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalDefinition)
namespace System::Linq::Expressions {
class ParameterExpression;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
struct LocalDefinition;
}
// Write type traits
MARK_VAL_T(::System::Linq::Expressions::Interpreter::LocalDefinition);
// Type: System.Linq.Expressions.Interpreter::LocalDefinition
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: true
// CS Name: ::System.Linq.Expressions.Interpreter::LocalDefinition
struct CORDL_TYPE LocalDefinition {
public:
  // Declarations
  __declspec(property(get = get_Index)) int32_t Index;

  __declspec(property(get = get_Parameter))::System::Linq::Expressions::ParameterExpression* Parameter;

  /// @brief Method Equals, addr 0x2b3d3d8, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2b3d460, size 0x4c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x2b3d3bc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t localIndex, ::System::Linq::Expressions::ParameterExpression* parameter);

  /// @brief Method get_Index, addr 0x2b3d3c8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Index();

  /// @brief Method get_Parameter, addr 0x2b3d3d0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::ParameterExpression* get_Parameter();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalDefinition();

  // Ctor Parameters [CppParam { name: "_Index_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Parameter_k__BackingField", ty:
  // "::System::Linq::Expressions::ParameterExpression*", modifiers: "", def_value: None }]
  constexpr LocalDefinition(int32_t _Index_k__BackingField, ::System::Linq::Expressions::ParameterExpression* _Parameter_k__BackingField) noexcept;

  /// @brief Field <Index>k__BackingField, offset: 0x0, size: 0x4, def value: None
  int32_t _Index_k__BackingField;

  /// @brief Field <Parameter>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::System::Linq::Expressions::ParameterExpression* _Parameter_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::LocalDefinition, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LocalDefinition, _Index_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LocalDefinition, _Parameter_k__BackingField) == 0x8, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LocalDefinition, "System.Linq.Expressions.Interpreter", "LocalDefinition");
