#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ConvertHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConvertHelper)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class ConvertHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::ConvertHelper);
// Dependencies System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.ConvertHelper
class CORDL_TYPE ConvertHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToInt32NoNull, addr 0x40c16b4, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t ToInt32NoNull(::System::Object* val);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConvertHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConvertHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConvertHelper(ConvertHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConvertHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConvertHelper(ConvertHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13775 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::ConvertHelper, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::ConvertHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::ConvertHelper*, "System.Linq.Expressions.Interpreter", "ConvertHelper");
