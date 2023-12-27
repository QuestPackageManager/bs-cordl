#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
CORDL_MODULE_EXPORT(MemberExpression)
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace System::Linq::Expressions {
class MemberExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::MemberExpression);
// Type: System.Linq.Expressions::MemberExpression
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14300))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14305))
// CS Name: ::System.Linq.Expressions::MemberExpression*
class CORDL_TYPE MemberExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_Member))::System::Reflection::MemberInfo* Member;

  /// @brief Method get_Member addr 0x2813d60 size 0xc virtual false final false
  inline ::System::Reflection::MemberInfo* get_Member();

  /// @brief Method GetMember addr 0x2813d6c size 0x24 virtual true final false
  inline ::System::Reflection::MemberInfo* GetMember();

  // Ctor Parameters [CppParam { name: "", ty: "MemberExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemberExpression(MemberExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemberExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemberExpression(MemberExpression const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemberExpression();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::MemberExpression, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::MemberExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::MemberExpression*, "System.Linq.Expressions", "MemberExpression");
