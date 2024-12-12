#pragma once
// IWYU pragma private; include "System/Linq/Expressions/CatchBlock.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CatchBlock)
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class ParameterExpression;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class CatchBlock;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::CatchBlock);
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.CatchBlock
class CORDL_TYPE CatchBlock : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Body)) ::System::Linq::Expressions::Expression* Body;

  __declspec(property(get = get_Filter)) ::System::Linq::Expressions::Expression* Filter;

  __declspec(property(get = get_Test)) ::System::Type* Test;

  __declspec(property(get = get_Variable)) ::System::Linq::Expressions::ParameterExpression* Variable;

  /// @brief Field <Body>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Body_k__BackingField, put = __cordl_internal_set__Body_k__BackingField)) ::System::Linq::Expressions::Expression* _Body_k__BackingField;

  /// @brief Field <Filter>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Filter_k__BackingField, put = __cordl_internal_set__Filter_k__BackingField)) ::System::Linq::Expressions::Expression* _Filter_k__BackingField;

  /// @brief Field <Test>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Test_k__BackingField, put = __cordl_internal_set__Test_k__BackingField)) ::System::Type* _Test_k__BackingField;

  /// @brief Field <Variable>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Variable_k__BackingField,
                      put = __cordl_internal_set__Variable_k__BackingField)) ::System::Linq::Expressions::ParameterExpression* _Variable_k__BackingField;

  static inline ::System::Linq::Expressions::CatchBlock* New_ctor(::System::Type* test, ::System::Linq::Expressions::ParameterExpression* variable, ::System::Linq::Expressions::Expression* body,
                                                                  ::System::Linq::Expressions::Expression* filter);

  /// @brief Method ToString, addr 0x40ad1c0, size 0x4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Update, addr 0x40ad240, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::CatchBlock* Update(::System::Linq::Expressions::ParameterExpression* variable, ::System::Linq::Expressions::Expression* filter,
                                                         ::System::Linq::Expressions::Expression* body);

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__Body_k__BackingField() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__Body_k__BackingField();

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__Filter_k__BackingField() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__Filter_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__Test_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__Test_k__BackingField();

  constexpr ::System::Linq::Expressions::ParameterExpression* const& __cordl_internal_get__Variable_k__BackingField() const;

  constexpr ::System::Linq::Expressions::ParameterExpression*& __cordl_internal_get__Variable_k__BackingField();

  constexpr void __cordl_internal_set__Body_k__BackingField(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__Filter_k__BackingField(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__Test_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__Variable_k__BackingField(::System::Linq::Expressions::ParameterExpression* value);

  /// @brief Method .ctor, addr 0x40ad160, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* test, ::System::Linq::Expressions::ParameterExpression* variable, ::System::Linq::Expressions::Expression* body, ::System::Linq::Expressions::Expression* filter);

  /// @brief Method get_Body, addr 0x40ad1b0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_Body();

  /// @brief Method get_Filter, addr 0x40ad1b8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_Filter();

  /// @brief Method get_Test, addr 0x40ad1a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_Test();

  /// @brief Method get_Variable, addr 0x40ad1a0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::ParameterExpression* get_Variable();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CatchBlock();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CatchBlock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CatchBlock(CatchBlock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CatchBlock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CatchBlock(CatchBlock const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13654 };

  /// @brief Field <Variable>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::ParameterExpression* ____Variable_k__BackingField;

  /// @brief Field <Test>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____Test_k__BackingField;

  /// @brief Field <Body>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____Body_k__BackingField;

  /// @brief Field <Filter>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____Filter_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::CatchBlock, ____Variable_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::CatchBlock, ____Test_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::CatchBlock, ____Body_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::CatchBlock, ____Filter_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::CatchBlock, 0x30>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::CatchBlock);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::CatchBlock*, "System.Linq.Expressions", "CatchBlock");
