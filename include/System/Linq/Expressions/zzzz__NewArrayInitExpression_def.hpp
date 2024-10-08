#pragma once
// IWYU pragma private; include "System/Linq/Expressions/NewArrayInitExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__NewArrayExpression_def.hpp"
CORDL_MODULE_EXPORT(NewArrayInitExpression)
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class NewArrayInitExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::NewArrayInitExpression);
// Type: System.Linq.Expressions::NewArrayInitExpression
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::NewArrayInitExpression*
class CORDL_TYPE NewArrayInitExpression : public ::System::Linq::Expressions::NewArrayExpression {
public:
  // Declarations
  __declspec(property(get = get_NodeType)) ::System::Linq::Expressions::ExpressionType NodeType;

  static inline ::System::Linq::Expressions::NewArrayInitExpression* New_ctor(::System::Type* type,
                                                                              ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* expressions);

  /// @brief Method .ctor, addr 0x4045348, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* expressions);

  /// @brief Method get_NodeType, addr 0x404538c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::ExpressionType get_NodeType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NewArrayInitExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NewArrayInitExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NewArrayInitExpression(NewArrayInitExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NewArrayInitExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NewArrayInitExpression(NewArrayInitExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13679 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::NewArrayInitExpression, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::NewArrayInitExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::NewArrayInitExpression*, "System.Linq.Expressions", "NewArrayInitExpression");
