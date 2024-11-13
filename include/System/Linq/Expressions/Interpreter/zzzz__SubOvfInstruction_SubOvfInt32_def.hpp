#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/SubOvfInstruction_SubOvfInt32.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__SubOvfInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubOvfInstruction_SubOvfInt32)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __SubOvfInstruction__SubOvfInt32;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__SubOvfInstruction__SubOvfInt32);
// Type: ::SubOvfInt32
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::SubOvfInstruction::SubOvfInt32*
class CORDL_TYPE __SubOvfInstruction__SubOvfInt32 : public ::System::Linq::Expressions::Interpreter::SubOvfInstruction {
public:
  // Declarations
  static inline ::System::Linq::Expressions::Interpreter::__SubOvfInstruction__SubOvfInt32* New_ctor();

  /// @brief Method Run, addr 0x4094bc0, size 0x214, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x409494c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubOvfInstruction__SubOvfInt32();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SubOvfInstruction__SubOvfInt32", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubOvfInstruction__SubOvfInt32(__SubOvfInstruction__SubOvfInt32&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubOvfInstruction__SubOvfInt32", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubOvfInstruction__SubOvfInt32(__SubOvfInstruction__SubOvfInt32 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14059 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__SubOvfInstruction__SubOvfInt32, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__SubOvfInstruction__SubOvfInt32);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__SubOvfInstruction__SubOvfInt32*, "System.Linq.Expressions.Interpreter", "SubOvfInstruction/SubOvfInt32");
