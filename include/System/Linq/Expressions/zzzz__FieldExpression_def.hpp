#pragma once
// IWYU pragma private; include "System/Linq/Expressions/FieldExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__MemberExpression_def.hpp"
CORDL_MODULE_EXPORT(FieldExpression)
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class FieldExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::FieldExpression);
// Dependencies System.Linq.Expressions.MemberExpression
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.FieldExpression
class CORDL_TYPE FieldExpression : public ::System::Linq::Expressions::MemberExpression {
public:
  // Declarations
  __declspec(property(get = get_Type)) ::System::Type* Type;

  /// @brief Field _field, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__field, put = __cordl_internal_set__field)) ::System::Reflection::FieldInfo* _field;

  /// @brief Method GetMember, addr 0x40bedfc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::MemberInfo* GetMember();

  static inline ::System::Linq::Expressions::FieldExpression* New_ctor(::System::Linq::Expressions::Expression* expression, ::System::Reflection::FieldInfo* member);

  constexpr ::System::Reflection::FieldInfo* const& __cordl_internal_get__field() const;

  constexpr ::System::Reflection::FieldInfo*& __cordl_internal_get__field();

  constexpr void __cordl_internal_set__field(::System::Reflection::FieldInfo* value);

  /// @brief Method .ctor, addr 0x40bed7c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* expression, ::System::Reflection::FieldInfo* member);

  /// @brief Method get_Type, addr 0x40bee04, size 0x24, virtual true, abstract: false, final true
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FieldExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FieldExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FieldExpression(FieldExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FieldExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FieldExpression(FieldExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13704 };

  /// @brief Field _field, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::FieldInfo* ____field;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::FieldExpression, ____field) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::FieldExpression, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::FieldExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::FieldExpression*, "System.Linq.Expressions", "FieldExpression");
