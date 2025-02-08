#pragma once
// IWYU pragma private; include "System/Linq/Expressions/TryExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
CORDL_MODULE_EXPORT(TryExpression)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Linq::Expressions {
class CatchBlock;
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
class TryExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::TryExpression);
// Dependencies System.Linq.Expressions.Expression
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.TryExpression
class CORDL_TYPE TryExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_Body)) ::System::Linq::Expressions::Expression* Body;

  __declspec(property(get = get_Fault)) ::System::Linq::Expressions::Expression* Fault;

  __declspec(property(get = get_Finally)) ::System::Linq::Expressions::Expression* Finally;

  __declspec(property(get = get_Handlers)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>* Handlers;

  __declspec(property(get = get_NodeType)) ::System::Linq::Expressions::ExpressionType NodeType;

  __declspec(property(get = get_Type)) ::System::Type* Type;

  /// @brief Field <Body>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Body_k__BackingField, put = __cordl_internal_set__Body_k__BackingField)) ::System::Linq::Expressions::Expression* _Body_k__BackingField;

  /// @brief Field <Fault>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Fault_k__BackingField, put = __cordl_internal_set__Fault_k__BackingField)) ::System::Linq::Expressions::Expression* _Fault_k__BackingField;

  /// @brief Field <Finally>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Finally_k__BackingField, put = __cordl_internal_set__Finally_k__BackingField)) ::System::Linq::Expressions::Expression* _Finally_k__BackingField;

  /// @brief Field <Handlers>k__BackingField, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__Handlers_k__BackingField,
      put = __cordl_internal_set__Handlers_k__BackingField)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>* _Handlers_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField)) ::System::Type* _Type_k__BackingField;

  /// @brief Method Accept, addr 0x40c173c, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);

  static inline ::System::Linq::Expressions::TryExpression* New_ctor(::System::Type* type, ::System::Linq::Expressions::Expression* body, ::System::Linq::Expressions::Expression* finally,
                                                                     ::System::Linq::Expressions::Expression* fault,
                                                                     ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>* handlers);

  /// @brief Method Update, addr 0x40bd398, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::TryExpression* Update(::System::Linq::Expressions::Expression* body,
                                                            ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::CatchBlock*>* handlers,
                                                            ::System::Linq::Expressions::Expression* finally, ::System::Linq::Expressions::Expression* fault);

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__Body_k__BackingField() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__Body_k__BackingField();

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__Fault_k__BackingField() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__Fault_k__BackingField();

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__Finally_k__BackingField() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__Finally_k__BackingField();

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>* const& __cordl_internal_get__Handlers_k__BackingField() const;

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>*& __cordl_internal_get__Handlers_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__Type_k__BackingField();

  constexpr void __cordl_internal_set__Body_k__BackingField(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__Fault_k__BackingField(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__Finally_k__BackingField(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__Handlers_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>* value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x40c1678, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Linq::Expressions::Expression* body, ::System::Linq::Expressions::Expression* finally, ::System::Linq::Expressions::Expression* fault,
                    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>* handlers);

  /// @brief Method get_Body, addr 0x40c171c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_Body();

  /// @brief Method get_Fault, addr 0x40c1734, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_Fault();

  /// @brief Method get_Finally, addr 0x40c172c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_Finally();

  /// @brief Method get_Handlers, addr 0x40c1724, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>* get_Handlers();

  /// @brief Method get_NodeType, addr 0x40c1714, size 0x8, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::ExpressionType get_NodeType();

  /// @brief Method get_Type, addr 0x40c170c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TryExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TryExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TryExpression(TryExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TryExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TryExpression(TryExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13738 };

  /// @brief Field <Type>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____Type_k__BackingField;

  /// @brief Field <Body>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____Body_k__BackingField;

  /// @brief Field <Handlers>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>* ____Handlers_k__BackingField;

  /// @brief Field <Finally>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____Finally_k__BackingField;

  /// @brief Field <Fault>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____Fault_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::TryExpression, ____Type_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::TryExpression, ____Body_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::TryExpression, ____Handlers_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::TryExpression, ____Finally_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::TryExpression, ____Fault_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::TryExpression, 0x38>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::TryExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::TryExpression*, "System.Linq.Expressions", "TryExpression");
