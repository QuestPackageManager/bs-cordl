#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EqualInstruction)
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualBooleanLiftedToNull;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualBoolean;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualByteLiftedToNull;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualByte;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualCharLiftedToNull;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualChar;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualDoubleLiftedToNull;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualDouble;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualInt16LiftedToNull;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualInt16;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualInt32LiftedToNull;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualInt32;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualInt64LiftedToNull;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualInt64;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualReference;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualSByteLiftedToNull;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualSByte;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualSingleLiftedToNull;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualSingle;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualUInt16LiftedToNull;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualUInt16;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualUInt32LiftedToNull;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualUInt32;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualUInt64LiftedToNull;
}
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualUInt64;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class EqualInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::EqualInstruction);
// Type: System.Linq.Expressions.Interpreter::EqualInstruction
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::EqualInstruction*
class CORDL_TYPE EqualInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  using EqualBoolean = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualBoolean;

  using EqualBooleanLiftedToNull = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualBooleanLiftedToNull;

  using EqualByte = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualByte;

  using EqualByteLiftedToNull = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualByteLiftedToNull;

  using EqualChar = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualChar;

  using EqualCharLiftedToNull = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualCharLiftedToNull;

  using EqualDouble = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualDouble;

  using EqualDoubleLiftedToNull = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualDoubleLiftedToNull;

  using EqualInt16 = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualInt16;

  using EqualInt16LiftedToNull = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualInt16LiftedToNull;

  using EqualInt32 = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualInt32;

  using EqualInt32LiftedToNull = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualInt32LiftedToNull;

  using EqualInt64 = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualInt64;

  using EqualInt64LiftedToNull = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualInt64LiftedToNull;

  using EqualReference = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualReference;

  using EqualSByte = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualSByte;

  using EqualSByteLiftedToNull = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualSByteLiftedToNull;

  using EqualSingle = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualSingle;

  using EqualSingleLiftedToNull = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualSingleLiftedToNull;

  using EqualUInt16 = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualUInt16;

  using EqualUInt16LiftedToNull = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualUInt16LiftedToNull;

  using EqualUInt32 = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualUInt32;

  using EqualUInt32LiftedToNull = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualUInt32LiftedToNull;

  using EqualUInt64 = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualUInt64;

  using EqualUInt64LiftedToNull = ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualUInt64LiftedToNull;

  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field s_Boolean, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Boolean, put = setStaticF_s_Boolean))::System::Linq::Expressions::Interpreter::Instruction* s_Boolean;

  /// @brief Field s_BooleanLiftedToNull, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_BooleanLiftedToNull, put = setStaticF_s_BooleanLiftedToNull))::System::Linq::Expressions::Interpreter::Instruction* s_BooleanLiftedToNull;

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

  /// @brief Method Create, addr 0x2b186e4, size 0x86c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type, bool liftedToNull);

  static inline ::System::Linq::Expressions::Interpreter::EqualInstruction* New_ctor();

  /// @brief Method .ctor, addr 0x2b186dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Boolean();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_BooleanLiftedToNull();

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

  /// @brief Method get_ConsumedStack, addr 0x2b1868c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x2b1869c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x2b18694, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

  static inline void setStaticF_s_Boolean(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_BooleanLiftedToNull(::System::Linq::Expressions::Interpreter::Instruction* value);

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
  constexpr EqualInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EqualInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EqualInstruction(EqualInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EqualInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EqualInstruction(EqualInstruction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::EqualInstruction, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::EqualInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::EqualInstruction*, "System.Linq.Expressions.Interpreter", "EqualInstruction");
