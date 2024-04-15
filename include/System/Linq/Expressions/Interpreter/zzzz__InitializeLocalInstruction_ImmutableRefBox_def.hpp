#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InitializeLocalInstruction_ImmutableRefBox)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __InitializeLocalInstruction__ImmutableRefBox;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableRefBox);
// Type: ::ImmutableRefBox
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::InitializeLocalInstruction::ImmutableRefBox*
class CORDL_TYPE __InitializeLocalInstruction__ImmutableRefBox : public ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction {
public:
  // Declarations
  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  static inline ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableRefBox* New_ctor(int32_t index);

  /// @brief Method Run, addr 0x2b3e924, size 0xc0, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x2b3e8fc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t index);

  /// @brief Method get_InstructionName, addr 0x2b3e9e4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InitializeLocalInstruction__ImmutableRefBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InitializeLocalInstruction__ImmutableRefBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InitializeLocalInstruction__ImmutableRefBox(__InitializeLocalInstruction__ImmutableRefBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InitializeLocalInstruction__ImmutableRefBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InitializeLocalInstruction__ImmutableRefBox(__InitializeLocalInstruction__ImmutableRefBox const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableRefBox, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableRefBox);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableRefBox*, "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction/ImmutableRefBox");
