#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NotEqualInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NotEqualInstruction)
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualBoolean;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualByteLiftedToNull;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualByte;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualCharLiftedToNull;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualChar;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualDoubleLiftedToNull;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualDouble;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualInt16LiftedToNull;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualInt16;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualInt32LiftedToNull;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualInt32;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualInt64LiftedToNull;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualInt64;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualReference;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualSByteLiftedToNull;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualSByte;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualSingleLiftedToNull;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualSingle;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualUInt16LiftedToNull;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualUInt16;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualUInt32LiftedToNull;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualUInt32;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualUInt64LiftedToNull;
}
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualUInt64;
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
// Type: System.Linq.Expressions.Interpreter::NotEqualInstruction
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::NotEqualInstruction*
class CORDL_TYPE NotEqualInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  using NotEqualBoolean = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualBoolean;

  using NotEqualByte = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualByte;

  using NotEqualByteLiftedToNull = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualByteLiftedToNull;

  using NotEqualChar = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualChar;

  using NotEqualCharLiftedToNull = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualCharLiftedToNull;

  using NotEqualDouble = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualDouble;

  using NotEqualDoubleLiftedToNull = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualDoubleLiftedToNull;

  using NotEqualInt16 = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualInt16;

  using NotEqualInt16LiftedToNull = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualInt16LiftedToNull;

  using NotEqualInt32 = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualInt32;

  using NotEqualInt32LiftedToNull = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualInt32LiftedToNull;

  using NotEqualInt64 = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualInt64;

  using NotEqualInt64LiftedToNull = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualInt64LiftedToNull;

  using NotEqualReference = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualReference;

  using NotEqualSByte = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualSByte;

  using NotEqualSByteLiftedToNull = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualSByteLiftedToNull;

  using NotEqualSingle = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualSingle;

  using NotEqualSingleLiftedToNull = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualSingleLiftedToNull;

  using NotEqualUInt16 = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualUInt16;

  using NotEqualUInt16LiftedToNull = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualUInt16LiftedToNull;

  using NotEqualUInt32 = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualUInt32;

  using NotEqualUInt32LiftedToNull = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualUInt32LiftedToNull;

  using NotEqualUInt64 = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualUInt64;

  using NotEqualUInt64LiftedToNull = ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualUInt64LiftedToNull;

  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field s_Boolean, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Boolean, put = setStaticF_s_Boolean))::System::Linq::Expressions::Interpreter::Instruction* s_Boolean;

  /// @brief Field s_Byte, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Byte, put = setStaticF_s_Byte))::System::Linq::Expressions::Interpreter::Instruction* s_Byte;

  /// @brief Field s_ByteLiftedToNull, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ByteLiftedToNull, put = setStaticF_s_ByteLiftedToNull))::System::Linq::Expressions::Interpreter::Instruction* s_ByteLiftedToNull;

  /// @brief Field s_Char, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Char, put = setStaticF_s_Char))::System::Linq::Expressions::Interpreter::Instruction* s_Char;

  /// @brief Field s_CharLiftedToNull, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_CharLiftedToNull, put = setStaticF_s_CharLiftedToNull))::System::Linq::Expressions::Interpreter::Instruction* s_CharLiftedToNull;

  /// @brief Field s_Double, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Double, put = setStaticF_s_Double))::System::Linq::Expressions::Interpreter::Instruction* s_Double;

  /// @brief Field s_DoubleLiftedToNull, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DoubleLiftedToNull, put = setStaticF_s_DoubleLiftedToNull))::System::Linq::Expressions::Interpreter::Instruction* s_DoubleLiftedToNull;

  /// @brief Field s_Int16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Int16, put = setStaticF_s_Int16))::System::Linq::Expressions::Interpreter::Instruction* s_Int16;

  /// @brief Field s_Int16LiftedToNull, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Int16LiftedToNull, put = setStaticF_s_Int16LiftedToNull))::System::Linq::Expressions::Interpreter::Instruction* s_Int16LiftedToNull;

  /// @brief Field s_Int32, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Int32, put = setStaticF_s_Int32))::System::Linq::Expressions::Interpreter::Instruction* s_Int32;

  /// @brief Field s_Int32LiftedToNull, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Int32LiftedToNull, put = setStaticF_s_Int32LiftedToNull))::System::Linq::Expressions::Interpreter::Instruction* s_Int32LiftedToNull;

  /// @brief Field s_Int64, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Int64, put = setStaticF_s_Int64))::System::Linq::Expressions::Interpreter::Instruction* s_Int64;

  /// @brief Field s_Int64LiftedToNull, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Int64LiftedToNull, put = setStaticF_s_Int64LiftedToNull))::System::Linq::Expressions::Interpreter::Instruction* s_Int64LiftedToNull;

  /// @brief Field s_SByte, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SByte, put = setStaticF_s_SByte))::System::Linq::Expressions::Interpreter::Instruction* s_SByte;

  /// @brief Field s_SByteLiftedToNull, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SByteLiftedToNull, put = setStaticF_s_SByteLiftedToNull))::System::Linq::Expressions::Interpreter::Instruction* s_SByteLiftedToNull;

  /// @brief Field s_Single, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Single, put = setStaticF_s_Single))::System::Linq::Expressions::Interpreter::Instruction* s_Single;

  /// @brief Field s_SingleLiftedToNull, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SingleLiftedToNull, put = setStaticF_s_SingleLiftedToNull))::System::Linq::Expressions::Interpreter::Instruction* s_SingleLiftedToNull;

  /// @brief Field s_UInt16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UInt16, put = setStaticF_s_UInt16))::System::Linq::Expressions::Interpreter::Instruction* s_UInt16;

  /// @brief Field s_UInt16LiftedToNull, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UInt16LiftedToNull, put = setStaticF_s_UInt16LiftedToNull))::System::Linq::Expressions::Interpreter::Instruction* s_UInt16LiftedToNull;

  /// @brief Field s_UInt32, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UInt32, put = setStaticF_s_UInt32))::System::Linq::Expressions::Interpreter::Instruction* s_UInt32;

  /// @brief Field s_UInt32LiftedToNull, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UInt32LiftedToNull, put = setStaticF_s_UInt32LiftedToNull))::System::Linq::Expressions::Interpreter::Instruction* s_UInt32LiftedToNull;

  /// @brief Field s_UInt64, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UInt64, put = setStaticF_s_UInt64))::System::Linq::Expressions::Interpreter::Instruction* s_UInt64;

  /// @brief Field s_UInt64LiftedToNull, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UInt64LiftedToNull, put = setStaticF_s_UInt64LiftedToNull))::System::Linq::Expressions::Interpreter::Instruction* s_UInt64LiftedToNull;

  /// @brief Field s_reference, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_reference, put = setStaticF_s_reference))::System::Linq::Expressions::Interpreter::Instruction* s_reference;

  /// @brief Method Create, addr 0x2c61c00, size 0x838, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type, bool liftedToNull);

  static inline ::System::Linq::Expressions::Interpreter::NotEqualInstruction* New_ctor();

  /// @brief Method .ctor, addr 0x2c61bf8, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Method get_ConsumedStack, addr 0x2c61ba8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x2c61bb8, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x2c61bb0, size 0x8, virtual true, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::NotEqualInstruction, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::NotEqualInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::NotEqualInstruction*, "System.Linq.Expressions.Interpreter", "NotEqualInstruction");
