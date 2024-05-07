#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/MulOvfInstruction_MulOvfUInt16.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__MulOvfInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MulOvfInstruction_MulOvfUInt16)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __MulOvfInstruction__MulOvfUInt16;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__MulOvfInstruction__MulOvfUInt16);
// Type: ::MulOvfUInt16
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::MulOvfInstruction::MulOvfUInt16*
class CORDL_TYPE __MulOvfInstruction__MulOvfUInt16 : public ::System::Linq::Expressions::Interpreter::MulOvfInstruction {
public:
  // Declarations
  static inline ::System::Linq::Expressions::Interpreter::__MulOvfInstruction__MulOvfUInt16* New_ctor();

  /// @brief Method Run, addr 0x2c3eb44, size 0x260, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x2c3e49c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MulOvfInstruction__MulOvfUInt16();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MulOvfInstruction__MulOvfUInt16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MulOvfInstruction__MulOvfUInt16(__MulOvfInstruction__MulOvfUInt16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MulOvfInstruction__MulOvfUInt16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MulOvfInstruction__MulOvfUInt16(__MulOvfInstruction__MulOvfUInt16 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__MulOvfInstruction__MulOvfUInt16, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__MulOvfInstruction__MulOvfUInt16);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__MulOvfInstruction__MulOvfUInt16*, "System.Linq.Expressions.Interpreter", "MulOvfInstruction/MulOvfUInt16");
