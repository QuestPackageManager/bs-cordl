#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NullableMethodCallInstruction_GetValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NullableMethodCallInstruction_GetValue)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __NullableMethodCallInstruction__GetValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValue);
// Type: ::GetValue
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::NullableMethodCallInstruction::GetValue*
class CORDL_TYPE __NullableMethodCallInstruction__GetValue : public ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction {
public:
  // Declarations
  static inline ::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValue* New_ctor();

  /// @brief Method Run, addr 0x4095fd8, size 0x70, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x4095eac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NullableMethodCallInstruction__GetValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NullableMethodCallInstruction__GetValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NullableMethodCallInstruction__GetValue(__NullableMethodCallInstruction__GetValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NullableMethodCallInstruction__GetValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NullableMethodCallInstruction__GetValue(__NullableMethodCallInstruction__GetValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14070 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValue, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValue*, "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction/GetValue");
