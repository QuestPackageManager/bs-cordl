#pragma once
// IWYU pragma private; include "System/Linq/Expressions/BlockExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BlockExpression)
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
namespace System::Linq::Expressions {
class ParameterExpression;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class BlockExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::BlockExpression);
// Type: System.Linq.Expressions::BlockExpression
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::BlockExpression*
class CORDL_TYPE BlockExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_ExpressionCount)) int32_t ExpressionCount;

  __declspec(property(get = get_Expressions)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* Expressions;

  __declspec(property(get = get_NodeType)) ::System::Linq::Expressions::ExpressionType NodeType;

  __declspec(property(get = get_Type)) ::System::Type* Type;

  __declspec(property(get = get_Variables)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* Variables;

  /// @brief Method Accept, addr 0x4036000, size 0x28, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);

  /// @brief Method GetExpression, addr 0x4036070, size 0x28, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetExpression(int32_t index);

  /// @brief Method GetOrMakeExpressions, addr 0x40360c0, size 0x28, virtual true, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeExpressions();

  /// @brief Method GetOrMakeVariables, addr 0x40360e8, size 0x58, virtual true, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* GetOrMakeVariables();

  static inline ::System::Linq::Expressions::BlockExpression* New_ctor();

  /// @brief Method ReturnReadOnlyExpressions, addr 0x4036168, size 0x140, virtual false, abstract: false, final false
  static inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* ReturnReadOnlyExpressions(::System::Linq::Expressions::BlockExpression* provider,
                                                                                                                                              ByRef<::System::Object*> collection);

  /// @brief Method Rewrite, addr 0x4036140, size 0x28, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::BlockExpression* Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                                               ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> args);

  /// @brief Method .ctor, addr 0x4035fa8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ExpressionCount, addr 0x4036098, size 0x28, virtual true, abstract: false, final false
  inline int32_t get_ExpressionCount();

  /// @brief Method get_Expressions, addr 0x4035f8c, size 0xc, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* get_Expressions();

  /// @brief Method get_NodeType, addr 0x4036028, size 0x8, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::ExpressionType get_NodeType();

  /// @brief Method get_Type, addr 0x4036030, size 0x40, virtual true, abstract: false, final false
  inline ::System::Type* get_Type();

  /// @brief Method get_Variables, addr 0x4035f98, size 0x10, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* get_Variables();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlockExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BlockExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlockExpression(BlockExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlockExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlockExpression(BlockExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13601 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::BlockExpression, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::BlockExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::BlockExpression*, "System.Linq.Expressions", "BlockExpression");
