#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/DecrementInstruction_DecrementInt64.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__DecrementInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecrementInstruction_DecrementInt64)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __DecrementInstruction__DecrementInt64;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementInt64);
// Type: ::DecrementInt64
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::DecrementInstruction::DecrementInt64*
class CORDL_TYPE __DecrementInstruction__DecrementInt64 : public ::System::Linq::Expressions::Interpreter::DecrementInstruction {
public:
  // Declarations
  static inline ::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementInt64* New_ctor();

  /// @brief Method Run, addr 0x4063724, size 0xb0, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40635ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DecrementInstruction__DecrementInt64();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DecrementInstruction__DecrementInt64", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DecrementInstruction__DecrementInt64(__DecrementInstruction__DecrementInt64&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DecrementInstruction__DecrementInt64", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DecrementInstruction__DecrementInt64(__DecrementInstruction__DecrementInt64 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13764 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementInt64, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementInt64);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementInt64*, "System.Linq.Expressions.Interpreter", "DecrementInstruction/DecrementInt64");
