#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Expression2_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Expression2_1)
namespace System::Linq::Expressions {
template <typename TDelegate> class Expression_1;
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
// Forward declare root types
namespace System::Linq::Expressions {
template <typename TDelegate> class Expression2_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::Expressions::Expression2_1);
// Dependencies System.Linq.Expressions.Expression`1<TDelegate>
namespace System::Linq::Expressions {
// cpp template
template <typename TDelegate>
// Is value type: false
// CS Name: System.Linq.Expressions.Expression2`1<TDelegate>
class CORDL_TYPE Expression2_1 : public ::System::Linq::Expressions::Expression_1<TDelegate> {
public:
  // Declarations
  __declspec(property(get = get_ParameterCount)) int32_t ParameterCount;

  /// @brief Field _par0, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__par0, put = __cordl_internal_set__par0)) ::System::Object* _par0;

  /// @brief Field _par1, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__par1, put = __cordl_internal_set__par1)) ::System::Linq::Expressions::ParameterExpression* _par1;

  /// @brief Method GetParameter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::ParameterExpression* GetParameter(int32_t index);

  static inline ::System::Linq::Expressions::Expression2_1<TDelegate>* New_ctor(::System::Linq::Expressions::Expression* body, ::System::Linq::Expressions::ParameterExpression* par0,
                                                                                ::System::Linq::Expressions::ParameterExpression* par1);

  /// @brief Method Rewrite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression_1<TDelegate>*
  Rewrite(::System::Linq::Expressions::Expression* body, ::ArrayW<::System::Linq::Expressions::ParameterExpression*, ::Array<::System::Linq::Expressions::ParameterExpression*>*> parameters);

  constexpr ::System::Object* const& __cordl_internal_get__par0() const;

  constexpr ::System::Object*& __cordl_internal_get__par0();

  constexpr ::System::Linq::Expressions::ParameterExpression* const& __cordl_internal_get__par1() const;

  constexpr ::System::Linq::Expressions::ParameterExpression*& __cordl_internal_get__par1();

  constexpr void __cordl_internal_set__par0(::System::Object* value);

  constexpr void __cordl_internal_set__par1(::System::Linq::Expressions::ParameterExpression* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* body, ::System::Linq::Expressions::ParameterExpression* par0, ::System::Linq::Expressions::ParameterExpression* par1);

  /// @brief Method get_ParameterCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_ParameterCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression2_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression2_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression2_1(Expression2_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression2_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression2_1(Expression2_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13694 };

  /// @brief Field _par0, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____par0;

  /// @brief Field _par1, offset: 0x20, size: 0x8, def value: None
  ::System::Linq::Expressions::ParameterExpression* ____par1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq::Expressions
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Expressions::Expression2_1, "System.Linq.Expressions", "Expression2`1");
