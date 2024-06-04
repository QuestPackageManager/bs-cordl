#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/InitializeLocalInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__LocalAccessInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InitializeLocalInstruction)
namespace System::Linq::Expressions::Interpreter {
class __InitializeLocalInstruction__ImmutableBox;
}
namespace System::Linq::Expressions::Interpreter {
class __InitializeLocalInstruction__ImmutableRefBox;
}
namespace System::Linq::Expressions::Interpreter {
class __InitializeLocalInstruction__ImmutableValue;
}
namespace System::Linq::Expressions::Interpreter {
class __InitializeLocalInstruction__MutableBox;
}
namespace System::Linq::Expressions::Interpreter {
class __InitializeLocalInstruction__MutableValue;
}
namespace System::Linq::Expressions::Interpreter {
class __InitializeLocalInstruction__ParameterBox;
}
namespace System::Linq::Expressions::Interpreter {
class __InitializeLocalInstruction__Parameter;
}
namespace System::Linq::Expressions::Interpreter {
class __InitializeLocalInstruction__Reference;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class InitializeLocalInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::InitializeLocalInstruction);
// Type: System.Linq.Expressions.Interpreter::InitializeLocalInstruction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::InitializeLocalInstruction*
class CORDL_TYPE InitializeLocalInstruction : public ::System::Linq::Expressions::Interpreter::LocalAccessInstruction {
public:
  // Declarations
  using ImmutableBox = ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox;

  using ImmutableRefBox = ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableRefBox;

  using ImmutableValue = ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableValue;

  using MutableBox = ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__MutableBox;

  using MutableValue = ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__MutableValue;

  using Parameter = ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Parameter;

  using ParameterBox = ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox;

  using Reference = ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference;

  static inline ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction* New_ctor(int32_t index);

  /// @brief Method .ctor, addr 0x2c5c508, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t index);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitializeLocalInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InitializeLocalInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitializeLocalInstruction(InitializeLocalInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitializeLocalInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitializeLocalInstruction(InitializeLocalInstruction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::InitializeLocalInstruction, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::InitializeLocalInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::InitializeLocalInstruction*, "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction");
