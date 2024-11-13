#pragma once
// IWYU pragma private; include "System/Linq/Expressions/PrimitiveParameterExpression_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PrimitiveParameterExpression_1)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
template <typename T> class PrimitiveParameterExpression_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::Expressions::PrimitiveParameterExpression_1);
// Type: System.Linq.Expressions::PrimitiveParameterExpression`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::System.Linq.Expressions::PrimitiveParameterExpression`1<T>*
class CORDL_TYPE PrimitiveParameterExpression_1 : public ::System::Linq::Expressions::ParameterExpression {
public:
  // Declarations
  __declspec(property(get = get_Type)) ::System::Type* Type;

  static inline ::System::Linq::Expressions::PrimitiveParameterExpression_1<T>* New_ctor(::StringW name);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method get_Type, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimitiveParameterExpression_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrimitiveParameterExpression_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrimitiveParameterExpression_1(PrimitiveParameterExpression_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrimitiveParameterExpression_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrimitiveParameterExpression_1(PrimitiveParameterExpression_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13692 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq::Expressions
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Expressions::PrimitiveParameterExpression_1, "System.Linq.Expressions", "PrimitiveParameterExpression`1");
