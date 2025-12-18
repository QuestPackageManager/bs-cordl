#pragma once
// IWYU pragma private; include "System/Linq/Expressions/ExpressionN_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExpressionN_1)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Linq::Expressions {
template <typename TDelegate> class Expression_1;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class ParameterExpression;
}
// Forward declare root types
namespace System::Linq::Expressions {
template <typename TDelegate> class ExpressionN_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::Expressions::ExpressionN_1);
// Dependencies System.Linq.Expressions.Expression`1<TDelegate>
namespace System::Linq::Expressions {
// cpp template
template <typename TDelegate>
// Is value type: false
// CS Name: System.Linq.Expressions.ExpressionN`1<TDelegate>
class CORDL_TYPE ExpressionN_1 : public ::System::Linq::Expressions::Expression_1<TDelegate> {
public:
  // Declarations
  __declspec(property(get = get_ParameterCount)) int32_t ParameterCount;

  /// @brief Field _parameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__parameters,
                      put = __cordl_internal_set__parameters)) ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* _parameters;

  /// @brief Method GetParameter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::ParameterExpression* GetParameter(int32_t index);

  static inline ::System::Linq::Expressions::ExpressionN_1<TDelegate>* New_ctor(::System::Linq::Expressions::Expression* body,
                                                                                ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* parameters);

  /// @brief Method Rewrite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression_1<TDelegate>*
  Rewrite(::System::Linq::Expressions::Expression* body, ::ArrayW<::System::Linq::Expressions::ParameterExpression*, ::Array<::System::Linq::Expressions::ParameterExpression*>*> parameters);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* const& __cordl_internal_get__parameters() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*& __cordl_internal_get__parameters();

  constexpr void __cordl_internal_set__parameters(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* body, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* parameters);

  /// @brief Method get_ParameterCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_ParameterCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpressionN_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExpressionN_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpressionN_1(ExpressionN_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpressionN_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpressionN_1(ExpressionN_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16158 };

  /// @brief Field _parameters, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* ____parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq::Expressions
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Expressions::ExpressionN_1, "System.Linq.Expressions", "ExpressionN`1");
