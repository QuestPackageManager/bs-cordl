#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ScriptingRuntimeHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptingRuntimeHelpers)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class ScriptingRuntimeHelpers;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers);
// Type: System.Linq.Expressions.Interpreter::ScriptingRuntimeHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::ScriptingRuntimeHelpers*
class CORDL_TYPE ScriptingRuntimeHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetPrimitiveDefaultValue, addr 0x2c8032c, size 0x2d8, virtual false, abstract: false, final false
  static inline ::System::Object* GetPrimitiveDefaultValue(::System::Type* type);

  /// @brief Method Int32ToObject, addr 0x2c71b80, size 0x128, virtual false, abstract: false, final false
  static inline ::System::Object* Int32ToObject(int32_t i);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptingRuntimeHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptingRuntimeHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptingRuntimeHelpers(ScriptingRuntimeHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptingRuntimeHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptingRuntimeHelpers(ScriptingRuntimeHelpers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers*, "System.Linq.Expressions.Interpreter", "ScriptingRuntimeHelpers");
