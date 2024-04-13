#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NullableMethodCallInstruction_GetHashCodeClass)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __NullableMethodCallInstruction__GetHashCodeClass;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetHashCodeClass);
// Type: ::GetHashCodeClass
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::NullableMethodCallInstruction::GetHashCodeClass*
class CORDL_TYPE __NullableMethodCallInstruction__GetHashCodeClass : public ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction {
public:
  // Declarations
  static inline ::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetHashCodeClass* New_ctor();

  /// @brief Method Run, addr 0x2b4d28c, size 0x50, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x2b4cee8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NullableMethodCallInstruction__GetHashCodeClass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NullableMethodCallInstruction__GetHashCodeClass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NullableMethodCallInstruction__GetHashCodeClass(__NullableMethodCallInstruction__GetHashCodeClass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NullableMethodCallInstruction__GetHashCodeClass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NullableMethodCallInstruction__GetHashCodeClass(__NullableMethodCallInstruction__GetHashCodeClass const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetHashCodeClass, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetHashCodeClass);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetHashCodeClass*, "System.Linq.Expressions.Interpreter",
                       "NullableMethodCallInstruction/GetHashCodeClass");
