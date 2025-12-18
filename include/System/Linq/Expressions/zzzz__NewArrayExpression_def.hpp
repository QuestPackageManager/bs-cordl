#pragma once
// IWYU pragma private; include "System/Linq/Expressions/NewArrayExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
CORDL_MODULE_EXPORT(NewArrayExpression)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System::Linq::Expressions {
class ExpressionVisitor;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class NewArrayExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::NewArrayExpression);
// Dependencies System.Linq.Expressions.Expression
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.NewArrayExpression
class CORDL_TYPE NewArrayExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_Expressions)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* Expressions;

  __declspec(property(get = get_Type)) ::System::Type* Type;

  /// @brief Field <Expressions>k__BackingField, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__Expressions_k__BackingField,
      put = __cordl_internal_set__Expressions_k__BackingField)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* _Expressions_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField)) ::System::Type* _Type_k__BackingField;

  /// @brief Method Accept, addr 0x5dd4244, size 0x28, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);

  /// @brief Method Make, addr 0x5dd418c, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::NewArrayExpression* Make(::System::Linq::Expressions::ExpressionType nodeType, ::System::Type* type,
                                                                      ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* expressions);

  static inline ::System::Linq::Expressions::NewArrayExpression* New_ctor(::System::Type* type,
                                                                          ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* expressions);

  /// @brief Method Update, addr 0x5dd04d0, size 0x178, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::NewArrayExpression* Update(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* expressions);

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* const& __cordl_internal_get__Expressions_k__BackingField() const;

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*& __cordl_internal_get__Expressions_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__Type_k__BackingField();

  constexpr void __cordl_internal_set__Expressions_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x5dd4124, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* expressions);

  /// @brief Method get_Expressions, addr 0x5dd423c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* get_Expressions();

  /// @brief Method get_Type, addr 0x5dd4234, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NewArrayExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NewArrayExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NewArrayExpression(NewArrayExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NewArrayExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NewArrayExpression(NewArrayExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16185 };

  /// @brief Field <Type>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____Type_k__BackingField;

  /// @brief Field <Expressions>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* ____Expressions_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::NewArrayExpression, ____Type_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::NewArrayExpression, ____Expressions_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::NewArrayExpression, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::NewArrayExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::NewArrayExpression*, "System.Linq.Expressions", "NewArrayExpression");
