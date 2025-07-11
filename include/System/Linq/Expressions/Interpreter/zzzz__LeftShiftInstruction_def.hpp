#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LeftShiftInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LeftShiftInstruction)
namespace GlobalNamespace {
class LeftShiftInstruction_LeftShiftByte;
}
namespace GlobalNamespace {
class LeftShiftInstruction_LeftShiftInt16;
}
namespace GlobalNamespace {
class LeftShiftInstruction_LeftShiftInt32;
}
namespace GlobalNamespace {
class LeftShiftInstruction_LeftShiftInt64;
}
namespace GlobalNamespace {
class LeftShiftInstruction_LeftShiftSByte;
}
namespace GlobalNamespace {
class LeftShiftInstruction_LeftShiftUInt16;
}
namespace GlobalNamespace {
class LeftShiftInstruction_LeftShiftUInt32;
}
namespace GlobalNamespace {
class LeftShiftInstruction_LeftShiftUInt64;
}
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class LeftShiftInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::LeftShiftInstruction);
// Dependencies System.Linq.Expressions.Interpreter.Instruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LeftShiftInstruction
class CORDL_TYPE LeftShiftInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  using LeftShiftByte = ::GlobalNamespace::LeftShiftInstruction_LeftShiftByte;

  using LeftShiftInt16 = ::GlobalNamespace::LeftShiftInstruction_LeftShiftInt16;

  using LeftShiftInt32 = ::GlobalNamespace::LeftShiftInstruction_LeftShiftInt32;

  using LeftShiftInt64 = ::GlobalNamespace::LeftShiftInstruction_LeftShiftInt64;

  using LeftShiftSByte = ::GlobalNamespace::LeftShiftInstruction_LeftShiftSByte;

  using LeftShiftUInt16 = ::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt16;

  using LeftShiftUInt32 = ::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt32;

  using LeftShiftUInt64 = ::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt64;

  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field s_Byte, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Byte, put = setStaticF_s_Byte)) ::System::Linq::Expressions::Interpreter::Instruction* s_Byte;

  /// @brief Field s_Int16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Int16, put = setStaticF_s_Int16)) ::System::Linq::Expressions::Interpreter::Instruction* s_Int16;

  /// @brief Field s_Int32, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Int32, put = setStaticF_s_Int32)) ::System::Linq::Expressions::Interpreter::Instruction* s_Int32;

  /// @brief Field s_Int64, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Int64, put = setStaticF_s_Int64)) ::System::Linq::Expressions::Interpreter::Instruction* s_Int64;

  /// @brief Field s_SByte, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SByte, put = setStaticF_s_SByte)) ::System::Linq::Expressions::Interpreter::Instruction* s_SByte;

  /// @brief Field s_UInt16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UInt16, put = setStaticF_s_UInt16)) ::System::Linq::Expressions::Interpreter::Instruction* s_UInt16;

  /// @brief Field s_UInt32, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UInt32, put = setStaticF_s_UInt32)) ::System::Linq::Expressions::Interpreter::Instruction* s_UInt32;

  /// @brief Field s_UInt64, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UInt64, put = setStaticF_s_UInt64)) ::System::Linq::Expressions::Interpreter::Instruction* s_UInt64;

  /// @brief Method Create, addr 0x40d0b54, size 0x368, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type);

  static inline ::System::Linq::Expressions::Interpreter::LeftShiftInstruction* New_ctor();

  /// @brief Method .ctor, addr 0x40d5930, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Byte();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int16();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int32();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int64();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_SByte();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt16();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt32();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt64();

  /// @brief Method get_ConsumedStack, addr 0x40d58e0, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x40d58f0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x40d58e8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

  static inline void setStaticF_s_Byte(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Int16(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Int32(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Int64(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_SByte(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_UInt16(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_UInt32(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_UInt64(::System::Linq::Expressions::Interpreter::Instruction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeftShiftInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeftShiftInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeftShiftInstruction(LeftShiftInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeftShiftInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeftShiftInstruction(LeftShiftInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13915 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::LeftShiftInstruction, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LeftShiftInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LeftShiftInstruction*, "System.Linq.Expressions.Interpreter", "LeftShiftInstruction");
