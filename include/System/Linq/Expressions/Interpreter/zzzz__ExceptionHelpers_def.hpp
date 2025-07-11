#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ExceptionHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ExceptionHelpers)
namespace System::Reflection {
class TargetInvocationException;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class ExceptionHelpers;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::ExceptionHelpers);
// Dependencies System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.ExceptionHelpers
class CORDL_TYPE ExceptionHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method UnwrapAndRethrow, addr 0x40e5fbc, size 0x1c, virtual false, abstract: false, final false
  static inline void UnwrapAndRethrow(::System::Reflection::TargetInvocationException* exception);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExceptionHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExceptionHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExceptionHelpers(ExceptionHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExceptionHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExceptionHelpers(ExceptionHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14128 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::ExceptionHelpers, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::ExceptionHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::ExceptionHelpers*, "System.Linq.Expressions.Interpreter", "ExceptionHelpers");
