#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NotEqualInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NotEqualInstruction)
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualBoolean;
}
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualByteLiftedToNull;
}
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualByte;
}
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualCharLiftedToNull;
}
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualChar;
}
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualDoubleLiftedToNull;
}
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualDouble;
}
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualInt16LiftedToNull;
}
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualInt16;
}
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualInt32LiftedToNull;
}
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualInt32;
}
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualInt64LiftedToNull;
}
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualInt64;
}
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualReference;
}
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualSByteLiftedToNull;
}
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualSByte;
}
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualSingleLiftedToNull;
}
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualSingle;
}
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualUInt16LiftedToNull;
}
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualUInt16;
}
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualUInt32LiftedToNull;
}
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualUInt32;
}
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualUInt64LiftedToNull;
}
namespace GlobalNamespace {
class NotEqualInstruction_NotEqualUInt64;
}
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class NotEqualInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::NotEqualInstruction);
// Dependencies System.Linq.Expressions.Interpreter.Instruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NotEqualInstruction
class CORDL_TYPE NotEqualInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  using NotEqualBoolean = ::GlobalNamespace::NotEqualInstruction_NotEqualBoolean;

  using NotEqualByte = ::GlobalNamespace::NotEqualInstruction_NotEqualByte;

  using NotEqualByteLiftedToNull = ::GlobalNamespace::NotEqualInstruction_NotEqualByteLiftedToNull;

  using NotEqualChar = ::GlobalNamespace::NotEqualInstruction_NotEqualChar;

  using NotEqualCharLiftedToNull = ::GlobalNamespace::NotEqualInstruction_NotEqualCharLiftedToNull;

  using NotEqualDouble = ::GlobalNamespace::NotEqualInstruction_NotEqualDouble;

  using NotEqualDoubleLiftedToNull = ::GlobalNamespace::NotEqualInstruction_NotEqualDoubleLiftedToNull;

  using NotEqualInt16 = ::GlobalNamespace::NotEqualInstruction_NotEqualInt16;

  using NotEqualInt16LiftedToNull = ::GlobalNamespace::NotEqualInstruction_NotEqualInt16LiftedToNull;

  using NotEqualInt32 = ::GlobalNamespace::NotEqualInstruction_NotEqualInt32;

  using NotEqualInt32LiftedToNull = ::GlobalNamespace::NotEqualInstruction_NotEqualInt32LiftedToNull;

  using NotEqualInt64 = ::GlobalNamespace::NotEqualInstruction_NotEqualInt64;

  using NotEqualInt64LiftedToNull = ::GlobalNamespace::NotEqualInstruction_NotEqualInt64LiftedToNull;

  using NotEqualReference = ::GlobalNamespace::NotEqualInstruction_NotEqualReference;

  using NotEqualSByte = ::GlobalNamespace::NotEqualInstruction_NotEqualSByte;

  using NotEqualSByteLiftedToNull = ::GlobalNamespace::NotEqualInstruction_NotEqualSByteLiftedToNull;

  using NotEqualSingle = ::GlobalNamespace::NotEqualInstruction_NotEqualSingle;

  using NotEqualSingleLiftedToNull = ::GlobalNamespace::NotEqualInstruction_NotEqualSingleLiftedToNull;

  using NotEqualUInt16 = ::GlobalNamespace::NotEqualInstruction_NotEqualUInt16;

  using NotEqualUInt16LiftedToNull = ::GlobalNamespace::NotEqualInstruction_NotEqualUInt16LiftedToNull;

  using NotEqualUInt32 = ::GlobalNamespace::NotEqualInstruction_NotEqualUInt32;

  using NotEqualUInt32LiftedToNull = ::GlobalNamespace::NotEqualInstruction_NotEqualUInt32LiftedToNull;

  using NotEqualUInt64 = ::GlobalNamespace::NotEqualInstruction_NotEqualUInt64;

  using NotEqualUInt64LiftedToNull = ::GlobalNamespace::NotEqualInstruction_NotEqualUInt64LiftedToNull;

  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field s_Boolean, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Boolean, put = setStaticF_s_Boolean)) ::System::Linq::Expressions::Interpreter::Instruction* s_Boolean;

  /// @brief Field s_Byte, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Byte, put = setStaticF_s_Byte)) ::System::Linq::Expressions::Interpreter::Instruction* s_Byte;

  /// @brief Field s_ByteLiftedToNull, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ByteLiftedToNull, put = setStaticF_s_ByteLiftedToNull)) ::System::Linq::Expressions::Interpreter::Instruction* s_ByteLiftedToNull;

  /// @brief Field s_Char, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Char, put = setStaticF_s_Char)) ::System::Linq::Expressions::Interpreter::Instruction* s_Char;

  /// @brief Field s_CharLiftedToNull, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CharLiftedToNull, put = setStaticF_s_CharLiftedToNull)) ::System::Linq::Expressions::Interpreter::Instruction* s_CharLiftedToNull;

  /// @brief Field s_Double, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Double, put = setStaticF_s_Double)) ::System::Linq::Expressions::Interpreter::Instruction* s_Double;

  /// @brief Field s_DoubleLiftedToNull, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DoubleLiftedToNull, put = setStaticF_s_DoubleLiftedToNull)) ::System::Linq::Expressions::Interpreter::Instruction* s_DoubleLiftedToNull;

  /// @brief Field s_Int16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Int16, put = setStaticF_s_Int16)) ::System::Linq::Expressions::Interpreter::Instruction* s_Int16;

  /// @brief Field s_Int16LiftedToNull, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Int16LiftedToNull, put = setStaticF_s_Int16LiftedToNull)) ::System::Linq::Expressions::Interpreter::Instruction* s_Int16LiftedToNull;

  /// @brief Field s_Int32, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Int32, put = setStaticF_s_Int32)) ::System::Linq::Expressions::Interpreter::Instruction* s_Int32;

  /// @brief Field s_Int32LiftedToNull, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Int32LiftedToNull, put = setStaticF_s_Int32LiftedToNull)) ::System::Linq::Expressions::Interpreter::Instruction* s_Int32LiftedToNull;

  /// @brief Field s_Int64, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Int64, put = setStaticF_s_Int64)) ::System::Linq::Expressions::Interpreter::Instruction* s_Int64;

  /// @brief Field s_Int64LiftedToNull, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Int64LiftedToNull, put = setStaticF_s_Int64LiftedToNull)) ::System::Linq::Expressions::Interpreter::Instruction* s_Int64LiftedToNull;

  /// @brief Field s_SByte, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SByte, put = setStaticF_s_SByte)) ::System::Linq::Expressions::Interpreter::Instruction* s_SByte;

  /// @brief Field s_SByteLiftedToNull, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SByteLiftedToNull, put = setStaticF_s_SByteLiftedToNull)) ::System::Linq::Expressions::Interpreter::Instruction* s_SByteLiftedToNull;

  /// @brief Field s_Single, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Single, put = setStaticF_s_Single)) ::System::Linq::Expressions::Interpreter::Instruction* s_Single;

  /// @brief Field s_SingleLiftedToNull, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SingleLiftedToNull, put = setStaticF_s_SingleLiftedToNull)) ::System::Linq::Expressions::Interpreter::Instruction* s_SingleLiftedToNull;

  /// @brief Field s_UInt16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UInt16, put = setStaticF_s_UInt16)) ::System::Linq::Expressions::Interpreter::Instruction* s_UInt16;

  /// @brief Field s_UInt16LiftedToNull, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UInt16LiftedToNull, put = setStaticF_s_UInt16LiftedToNull)) ::System::Linq::Expressions::Interpreter::Instruction* s_UInt16LiftedToNull;

  /// @brief Field s_UInt32, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UInt32, put = setStaticF_s_UInt32)) ::System::Linq::Expressions::Interpreter::Instruction* s_UInt32;

  /// @brief Field s_UInt32LiftedToNull, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UInt32LiftedToNull, put = setStaticF_s_UInt32LiftedToNull)) ::System::Linq::Expressions::Interpreter::Instruction* s_UInt32LiftedToNull;

  /// @brief Field s_UInt64, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UInt64, put = setStaticF_s_UInt64)) ::System::Linq::Expressions::Interpreter::Instruction* s_UInt64;

  /// @brief Field s_UInt64LiftedToNull, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UInt64LiftedToNull, put = setStaticF_s_UInt64LiftedToNull)) ::System::Linq::Expressions::Interpreter::Instruction* s_UInt64LiftedToNull;

  /// @brief Field s_reference, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_reference, put = setStaticF_s_reference)) ::System::Linq::Expressions::Interpreter::Instruction* s_reference;

  /// @brief Method Create, addr 0x40edfe8, size 0x88c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type, bool liftedToNull);

  static inline ::System::Linq::Expressions::Interpreter::NotEqualInstruction* New_ctor();

  /// @brief Method .ctor, addr 0x40edfe0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Boolean();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Byte();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_ByteLiftedToNull();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Char();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_CharLiftedToNull();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Double();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_DoubleLiftedToNull();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int16();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int16LiftedToNull();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int32();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int32LiftedToNull();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int64();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int64LiftedToNull();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_SByte();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_SByteLiftedToNull();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Single();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_SingleLiftedToNull();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt16();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt16LiftedToNull();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt32();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt32LiftedToNull();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt64();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt64LiftedToNull();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_reference();

  /// @brief Method get_ConsumedStack, addr 0x40edf90, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x40edfa0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x40edf98, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

  static inline void setStaticF_s_Boolean(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Byte(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_ByteLiftedToNull(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Char(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_CharLiftedToNull(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Double(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_DoubleLiftedToNull(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Int16(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Int16LiftedToNull(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Int32(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Int32LiftedToNull(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Int64(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Int64LiftedToNull(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_SByte(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_SByteLiftedToNull(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Single(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_SingleLiftedToNull(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_UInt16(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_UInt16LiftedToNull(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_UInt32(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_UInt32LiftedToNull(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_UInt64(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_UInt64LiftedToNull(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_reference(::System::Linq::Expressions::Interpreter::Instruction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotEqualInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotEqualInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotEqualInstruction(NotEqualInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotEqualInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotEqualInstruction(NotEqualInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14043 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::NotEqualInstruction, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::NotEqualInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::NotEqualInstruction*, "System.Linq.Expressions.Interpreter", "NotEqualInstruction");
