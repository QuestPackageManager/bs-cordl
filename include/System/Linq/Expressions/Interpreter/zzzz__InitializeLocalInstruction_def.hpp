#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/InitializeLocalInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__LocalAccessInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InitializeLocalInstruction)
namespace GlobalNamespace {
class InitializeLocalInstruction_ImmutableBox;
}
namespace GlobalNamespace {
class InitializeLocalInstruction_ImmutableRefBox;
}
namespace GlobalNamespace {
class InitializeLocalInstruction_ImmutableValue;
}
namespace GlobalNamespace {
class InitializeLocalInstruction_MutableBox;
}
namespace GlobalNamespace {
class InitializeLocalInstruction_MutableValue;
}
namespace GlobalNamespace {
class InitializeLocalInstruction_ParameterBox;
}
namespace GlobalNamespace {
class InitializeLocalInstruction_Parameter;
}
namespace GlobalNamespace {
class InitializeLocalInstruction_Reference;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class InitializeLocalInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::InitializeLocalInstruction);
// Dependencies System.Linq.Expressions.Interpreter.LocalAccessInstruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.InitializeLocalInstruction
class CORDL_TYPE InitializeLocalInstruction : public ::System::Linq::Expressions::Interpreter::LocalAccessInstruction {
public:
  // Declarations
  using ImmutableBox = ::GlobalNamespace::InitializeLocalInstruction_ImmutableBox;

  using ImmutableRefBox = ::GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox;

  using ImmutableValue = ::GlobalNamespace::InitializeLocalInstruction_ImmutableValue;

  using MutableBox = ::GlobalNamespace::InitializeLocalInstruction_MutableBox;

  using MutableValue = ::GlobalNamespace::InitializeLocalInstruction_MutableValue;

  using Parameter = ::GlobalNamespace::InitializeLocalInstruction_Parameter;

  using ParameterBox = ::GlobalNamespace::InitializeLocalInstruction_ParameterBox;

  using Reference = ::GlobalNamespace::InitializeLocalInstruction_Reference;

  static inline ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction* New_ctor(int32_t index);

  /// @brief Method .ctor, addr 0x5dfe320, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16442 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::InitializeLocalInstruction, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::InitializeLocalInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::InitializeLocalInstruction*, "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction");
