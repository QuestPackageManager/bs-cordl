#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/RethrowException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
CORDL_MODULE_EXPORT(RethrowException)
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class RethrowException;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::RethrowException);
// Dependencies System.Exception
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.RethrowException
class CORDL_TYPE RethrowException : public ::System::Exception {
public:
  // Declarations
  static inline ::System::Linq::Expressions::Interpreter::RethrowException* New_ctor();

  /// @brief Method .ctor, addr 0x40d6820, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RethrowException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RethrowException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RethrowException(RethrowException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RethrowException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RethrowException(RethrowException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13939 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::RethrowException, 0x90>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::RethrowException);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::RethrowException*, "System.Linq.Expressions.Interpreter", "RethrowException");
