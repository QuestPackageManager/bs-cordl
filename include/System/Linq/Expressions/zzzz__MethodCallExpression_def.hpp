#pragma once
// IWYU pragma private; include "System/Linq/Expressions/MethodCallExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__IArgumentProvider_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MethodCallExpression)
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
class MethodInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class MethodCallExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::MethodCallExpression);
// Dependencies System.Linq.Expressions.Expression, System.Linq.Expressions.IArgumentProvider
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.MethodCallExpression
class CORDL_TYPE MethodCallExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_ArgumentCount)) int32_t ArgumentCount;

  __declspec(property(get = get_Method)) ::System::Reflection::MethodInfo* Method;

  __declspec(property(get = get_NodeType)) ::System::Linq::Expressions::ExpressionType NodeType;

  __declspec(property(get = get_Object)) ::System::Linq::Expressions::Expression* Object;

  __declspec(property(get = get_Type)) ::System::Type* Type;

  /// @brief Field <Method>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Method_k__BackingField, put = __cordl_internal_set__Method_k__BackingField)) ::System::Reflection::MethodInfo* _Method_k__BackingField;

  /// @brief Convert operator to "::System::Linq::Expressions::IArgumentProvider"
  constexpr operator ::System::Linq::Expressions::IArgumentProvider*() noexcept;

  /// @brief Method Accept, addr 0x40bef1c, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);

  /// @brief Method GetArgument, addr 0x40bef70, size 0x28, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetArgument(int32_t index);

  /// @brief Method GetInstance, addr 0x40beee0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetInstance();

  static inline ::System::Linq::Expressions::MethodCallExpression* New_ctor(::System::Reflection::MethodInfo* method);

  /// @brief Method Rewrite, addr 0x40bef48, size 0x28, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* instance,
                                                                    ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args);

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get__Method_k__BackingField() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get__Method_k__BackingField();

  constexpr void __cordl_internal_set__Method_k__BackingField(::System::Reflection::MethodInfo* value);

  /// @brief Method .ctor, addr 0x40bee74, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MethodInfo* method);

  /// @brief Method get_ArgumentCount, addr 0x40bef98, size 0x28, virtual true, abstract: false, final false
  inline int32_t get_ArgumentCount();

  /// @brief Method get_Method, addr 0x40bef14, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_Method();

  /// @brief Method get_NodeType, addr 0x40beee8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::ExpressionType get_NodeType();

  /// @brief Method get_Object, addr 0x40bb064, size 0xc, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_Object();

  /// @brief Method get_Type, addr 0x40beef0, size 0x24, virtual true, abstract: false, final true
  inline ::System::Type* get_Type();

  /// @brief Convert to "::System::Linq::Expressions::IArgumentProvider"
  constexpr ::System::Linq::Expressions::IArgumentProvider* i___System__Linq__Expressions__IArgumentProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodCallExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MethodCallExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MethodCallExpression(MethodCallExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MethodCallExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MethodCallExpression(MethodCallExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13709 };

  /// @brief Field <Method>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ____Method_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::MethodCallExpression, ____Method_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::MethodCallExpression, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::MethodCallExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::MethodCallExpression*, "System.Linq.Expressions", "MethodCallExpression");
