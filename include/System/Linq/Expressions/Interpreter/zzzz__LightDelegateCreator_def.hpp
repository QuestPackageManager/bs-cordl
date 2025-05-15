#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LightDelegateCreator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LightDelegateCreator)
namespace System::Linq::Expressions::Interpreter {
class Interpreter;
}
namespace System::Linq::Expressions {
class LambdaExpression;
}
namespace System::Runtime::CompilerServices {
class IStrongBox;
}
namespace System {
class Delegate;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class LightDelegateCreator;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::LightDelegateCreator);
// Dependencies System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LightDelegateCreator
class CORDL_TYPE LightDelegateCreator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Interpreter)) ::System::Linq::Expressions::Interpreter::Interpreter* Interpreter;

  /// @brief Field <Interpreter>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Interpreter_k__BackingField,
                      put = __cordl_internal_set__Interpreter_k__BackingField)) ::System::Linq::Expressions::Interpreter::Interpreter* _Interpreter_k__BackingField;

  /// @brief Field _lambda, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__lambda, put = __cordl_internal_set__lambda)) ::System::Linq::Expressions::LambdaExpression* _lambda;

  /// @brief Method CreateDelegate, addr 0x40e6824, size 0x8, virtual false, abstract: false, final false
  inline ::System::Delegate* CreateDelegate();

  /// @brief Method CreateDelegate, addr 0x40e682c, size 0x88, virtual false, abstract: false, final false
  inline ::System::Delegate* CreateDelegate(::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*> closure);

  static inline ::System::Linq::Expressions::Interpreter::LightDelegateCreator* New_ctor(::System::Linq::Expressions::Interpreter::Interpreter* interpreter,
                                                                                         ::System::Linq::Expressions::LambdaExpression* lambda);

  constexpr ::System::Linq::Expressions::Interpreter::Interpreter* const& __cordl_internal_get__Interpreter_k__BackingField() const;

  constexpr ::System::Linq::Expressions::Interpreter::Interpreter*& __cordl_internal_get__Interpreter_k__BackingField();

  constexpr ::System::Linq::Expressions::LambdaExpression* const& __cordl_internal_get__lambda() const;

  constexpr ::System::Linq::Expressions::LambdaExpression*& __cordl_internal_get__lambda();

  constexpr void __cordl_internal_set__Interpreter_k__BackingField(::System::Linq::Expressions::Interpreter::Interpreter* value);

  constexpr void __cordl_internal_set__lambda(::System::Linq::Expressions::LambdaExpression* value);

  /// @brief Method .ctor, addr 0x40e67f0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Interpreter::Interpreter* interpreter, ::System::Linq::Expressions::LambdaExpression* lambda);

  /// @brief Method get_Interpreter, addr 0x40e681c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Interpreter::Interpreter* get_Interpreter();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightDelegateCreator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightDelegateCreator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightDelegateCreator(LightDelegateCreator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightDelegateCreator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightDelegateCreator(LightDelegateCreator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13957 };

  /// @brief Field _lambda, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::LambdaExpression* ____lambda;

  /// @brief Field <Interpreter>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Interpreter::Interpreter* ____Interpreter_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::LightDelegateCreator, ____lambda) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LightDelegateCreator, ____Interpreter_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::LightDelegateCreator, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LightDelegateCreator);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LightDelegateCreator*, "System.Linq.Expressions.Interpreter", "LightDelegateCreator");
