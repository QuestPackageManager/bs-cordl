#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ExclusiveOrInstruction_ExclusiveOrSByte.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__ExclusiveOrInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExclusiveOrInstruction_ExclusiveOrSByte)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __ExclusiveOrInstruction__ExclusiveOrSByte;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__ExclusiveOrInstruction__ExclusiveOrSByte);
// Type: ::ExclusiveOrSByte
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::ExclusiveOrInstruction::ExclusiveOrSByte*
class CORDL_TYPE __ExclusiveOrInstruction__ExclusiveOrSByte : public ::System::Linq::Expressions::Interpreter::ExclusiveOrInstruction {
public:
  // Declarations
  static inline ::System::Linq::Expressions::Interpreter::__ExclusiveOrInstruction__ExclusiveOrSByte* New_ctor();

  /// @brief Method Run, addr 0x4052754, size 0xf4, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x4052734, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExclusiveOrInstruction__ExclusiveOrSByte();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ExclusiveOrInstruction__ExclusiveOrSByte", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ExclusiveOrInstruction__ExclusiveOrSByte(__ExclusiveOrInstruction__ExclusiveOrSByte&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ExclusiveOrInstruction__ExclusiveOrSByte", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ExclusiveOrInstruction__ExclusiveOrSByte(__ExclusiveOrInstruction__ExclusiveOrSByte const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13800 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__ExclusiveOrInstruction__ExclusiveOrSByte, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__ExclusiveOrInstruction__ExclusiveOrSByte);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__ExclusiveOrInstruction__ExclusiveOrSByte*, "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction/ExclusiveOrSByte");
