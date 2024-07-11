#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NullableMethodCallInstruction_GetValueOrDefault1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NullableMethodCallInstruction_GetValueOrDefault1)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __NullableMethodCallInstruction__GetValueOrDefault1;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault1);
// Type: ::GetValueOrDefault1
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::NullableMethodCallInstruction::GetValueOrDefault1*
class CORDL_TYPE __NullableMethodCallInstruction__GetValueOrDefault1 : public ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  static inline ::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault1* New_ctor();

  /// @brief Method Run, addr 0x2c7eaec, size 0x54, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x2c7e938, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ConsumedStack, addr 0x2c7eae4, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NullableMethodCallInstruction__GetValueOrDefault1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NullableMethodCallInstruction__GetValueOrDefault1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NullableMethodCallInstruction__GetValueOrDefault1(__NullableMethodCallInstruction__GetValueOrDefault1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NullableMethodCallInstruction__GetValueOrDefault1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NullableMethodCallInstruction__GetValueOrDefault1(__NullableMethodCallInstruction__GetValueOrDefault1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault1, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault1);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault1*, "System.Linq.Expressions.Interpreter",
                       "NullableMethodCallInstruction/GetValueOrDefault1");
