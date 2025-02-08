#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NegateCheckedInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NegateCheckedInstruction)
namespace GlobalNamespace {
class NegateCheckedInstruction_NegateCheckedInt16;
}
namespace GlobalNamespace {
class NegateCheckedInstruction_NegateCheckedInt32;
}
namespace GlobalNamespace {
class NegateCheckedInstruction_NegateCheckedInt64;
}
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class NegateCheckedInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::NegateCheckedInstruction);
// Dependencies System.Linq.Expressions.Interpreter.Instruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NegateCheckedInstruction
class CORDL_TYPE NegateCheckedInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  using NegateCheckedInt16 = ::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt16;

  using NegateCheckedInt32 = ::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt32;

  using NegateCheckedInt64 = ::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt64;

  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field s_Int16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Int16, put = setStaticF_s_Int16)) ::System::Linq::Expressions::Interpreter::Instruction* s_Int16;

  /// @brief Field s_Int32, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Int32, put = setStaticF_s_Int32)) ::System::Linq::Expressions::Interpreter::Instruction* s_Int32;

  /// @brief Field s_Int64, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Int64, put = setStaticF_s_Int64)) ::System::Linq::Expressions::Interpreter::Instruction* s_Int64;

  /// @brief Method Create, addr 0x40f3200, size 0x1b8, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type);

  static inline ::System::Linq::Expressions::Interpreter::NegateCheckedInstruction* New_ctor();

  /// @brief Method .ctor, addr 0x40f31f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int16();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int32();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int64();

  /// @brief Method get_ConsumedStack, addr 0x40f31a8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x40f31b8, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x40f31b0, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

  static inline void setStaticF_s_Int16(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Int32(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Int64(::System::Linq::Expressions::Interpreter::Instruction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NegateCheckedInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NegateCheckedInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NegateCheckedInstruction(NegateCheckedInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NegateCheckedInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NegateCheckedInstruction(NegateCheckedInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14020 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::NegateCheckedInstruction, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::NegateCheckedInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::NegateCheckedInstruction*, "System.Linq.Expressions.Interpreter", "NegateCheckedInstruction");
