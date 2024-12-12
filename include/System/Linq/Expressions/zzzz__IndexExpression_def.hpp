#pragma once
// IWYU pragma private; include "System/Linq/Expressions/IndexExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__IArgumentProvider_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IndexExpression)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
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
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class IndexExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::IndexExpression);
// Dependencies System.Linq.Expressions.Expression, System.Linq.Expressions.IArgumentProvider
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.IndexExpression
class CORDL_TYPE IndexExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_ArgumentCount)) int32_t ArgumentCount;

  __declspec(property(get = get_Indexer)) ::System::Reflection::PropertyInfo* Indexer;

  __declspec(property(get = get_NodeType)) ::System::Linq::Expressions::ExpressionType NodeType;

  __declspec(property(get = get_Object)) ::System::Linq::Expressions::Expression* Object;

  __declspec(property(get = get_Type)) ::System::Type* Type;

  /// @brief Field <Indexer>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Indexer_k__BackingField, put = __cordl_internal_set__Indexer_k__BackingField)) ::System::Reflection::PropertyInfo* _Indexer_k__BackingField;

  /// @brief Field <Object>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Object_k__BackingField, put = __cordl_internal_set__Object_k__BackingField)) ::System::Linq::Expressions::Expression* _Object_k__BackingField;

  /// @brief Field _arguments, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__arguments,
                      put = __cordl_internal_set__arguments)) ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* _arguments;

  /// @brief Convert operator to "::System::Linq::Expressions::IArgumentProvider"
  constexpr operator ::System::Linq::Expressions::IArgumentProvider*() noexcept;

  /// @brief Method Accept, addr 0x40b7b70, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);

  /// @brief Method GetArgument, addr 0x40b62ac, size 0xa8, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::Expression* GetArgument(int32_t index);

  static inline ::System::Linq::Expressions::IndexExpression* New_ctor(::System::Linq::Expressions::Expression* instance, ::System::Reflection::PropertyInfo* indexer,
                                                                       ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* arguments);

  /// @brief Method Rewrite, addr 0x40b70a4, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Rewrite(::System::Linq::Expressions::Expression* instance,
                                                          ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> arguments);

  constexpr ::System::Reflection::PropertyInfo* const& __cordl_internal_get__Indexer_k__BackingField() const;

  constexpr ::System::Reflection::PropertyInfo*& __cordl_internal_get__Indexer_k__BackingField();

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__Object_k__BackingField() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__Object_k__BackingField();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* const& __cordl_internal_get__arguments() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*& __cordl_internal_get__arguments();

  constexpr void __cordl_internal_set__Indexer_k__BackingField(::System::Reflection::PropertyInfo* value);

  constexpr void __cordl_internal_set__Object_k__BackingField(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__arguments(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* value);

  /// @brief Method .ctor, addr 0x40b7a64, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* instance, ::System::Reflection::PropertyInfo* indexer,
                    ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* arguments);

  /// @brief Method get_ArgumentCount, addr 0x40b620c, size 0xa0, virtual true, abstract: false, final true
  inline int32_t get_ArgumentCount();

  /// @brief Method get_Indexer, addr 0x40b7b68, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::PropertyInfo* get_Indexer();

  /// @brief Method get_NodeType, addr 0x40b7af4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::ExpressionType get_NodeType();

  /// @brief Method get_Object, addr 0x40b7b60, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_Object();

  /// @brief Method get_Type, addr 0x40b7afc, size 0x64, virtual true, abstract: false, final true
  inline ::System::Type* get_Type();

  /// @brief Convert to "::System::Linq::Expressions::IArgumentProvider"
  constexpr ::System::Linq::Expressions::IArgumentProvider* i___System__Linq__Expressions__IArgumentProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IndexExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IndexExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IndexExpression(IndexExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IndexExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IndexExpression(IndexExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13674 };

  /// @brief Field _arguments, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* ____arguments;

  /// @brief Field <Object>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____Object_k__BackingField;

  /// @brief Field <Indexer>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Reflection::PropertyInfo* ____Indexer_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::IndexExpression, ____arguments) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::IndexExpression, ____Object_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::IndexExpression, ____Indexer_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::IndexExpression, 0x28>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::IndexExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::IndexExpression*, "System.Linq.Expressions", "IndexExpression");
