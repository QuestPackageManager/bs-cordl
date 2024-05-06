#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LessThanOrEqualInstruction)
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System::Linq::Expressions::Interpreter {
class __LessThanOrEqualInstruction__LessThanOrEqualByte;
}
namespace System::Linq::Expressions::Interpreter {
class __LessThanOrEqualInstruction__LessThanOrEqualChar;
}
namespace System::Linq::Expressions::Interpreter {
class __LessThanOrEqualInstruction__LessThanOrEqualDouble;
}
namespace System::Linq::Expressions::Interpreter {
class __LessThanOrEqualInstruction__LessThanOrEqualInt16;
}
namespace System::Linq::Expressions::Interpreter {
class __LessThanOrEqualInstruction__LessThanOrEqualInt32;
}
namespace System::Linq::Expressions::Interpreter {
class __LessThanOrEqualInstruction__LessThanOrEqualInt64;
}
namespace System::Linq::Expressions::Interpreter {
class __LessThanOrEqualInstruction__LessThanOrEqualSByte;
}
namespace System::Linq::Expressions::Interpreter {
class __LessThanOrEqualInstruction__LessThanOrEqualSingle;
}
namespace System::Linq::Expressions::Interpreter {
class __LessThanOrEqualInstruction__LessThanOrEqualUInt16;
}
namespace System::Linq::Expressions::Interpreter {
class __LessThanOrEqualInstruction__LessThanOrEqualUInt32;
}
namespace System::Linq::Expressions::Interpreter {
class __LessThanOrEqualInstruction__LessThanOrEqualUInt64;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class LessThanOrEqualInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::LessThanOrEqualInstruction);
// Type: System.Linq.Expressions.Interpreter::LessThanOrEqualInstruction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::LessThanOrEqualInstruction*
class CORDL_TYPE LessThanOrEqualInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  using LessThanOrEqualByte = ::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualByte;

  using LessThanOrEqualChar = ::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualChar;

  using LessThanOrEqualDouble = ::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualDouble;

  using LessThanOrEqualInt16 = ::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualInt16;

  using LessThanOrEqualInt32 = ::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualInt32;

  using LessThanOrEqualInt64 = ::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualInt64;

  using LessThanOrEqualSByte = ::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualSByte;

  using LessThanOrEqualSingle = ::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualSingle;

  using LessThanOrEqualUInt16 = ::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualUInt16;

  using LessThanOrEqualUInt32 = ::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualUInt32;

  using LessThanOrEqualUInt64 = ::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualUInt64;

  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field _nullValue, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__nullValue, put = __cordl_internal_set__nullValue))::System::Object* _nullValue;

  /// @brief Field s_Byte, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Byte, put = setStaticF_s_Byte))::System::Linq::Expressions::Interpreter::Instruction* s_Byte;

  /// @brief Field s_Char, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Char, put = setStaticF_s_Char))::System::Linq::Expressions::Interpreter::Instruction* s_Char;

  /// @brief Field s_Double, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Double, put = setStaticF_s_Double))::System::Linq::Expressions::Interpreter::Instruction* s_Double;

  /// @brief Field s_Int16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Int16, put = setStaticF_s_Int16))::System::Linq::Expressions::Interpreter::Instruction* s_Int16;

  /// @brief Field s_Int32, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Int32, put = setStaticF_s_Int32))::System::Linq::Expressions::Interpreter::Instruction* s_Int32;

  /// @brief Field s_Int64, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Int64, put = setStaticF_s_Int64))::System::Linq::Expressions::Interpreter::Instruction* s_Int64;

  /// @brief Field s_SByte, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SByte, put = setStaticF_s_SByte))::System::Linq::Expressions::Interpreter::Instruction* s_SByte;

  /// @brief Field s_Single, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Single, put = setStaticF_s_Single))::System::Linq::Expressions::Interpreter::Instruction* s_Single;

  /// @brief Field s_UInt16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UInt16, put = setStaticF_s_UInt16))::System::Linq::Expressions::Interpreter::Instruction* s_UInt16;

  /// @brief Field s_UInt32, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UInt32, put = setStaticF_s_UInt32))::System::Linq::Expressions::Interpreter::Instruction* s_UInt32;

  /// @brief Field s_UInt64, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UInt64, put = setStaticF_s_UInt64))::System::Linq::Expressions::Interpreter::Instruction* s_UInt64;

  /// @brief Field s_liftedToNullByte, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_liftedToNullByte, put = setStaticF_s_liftedToNullByte))::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullByte;

  /// @brief Field s_liftedToNullChar, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_liftedToNullChar, put = setStaticF_s_liftedToNullChar))::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullChar;

  /// @brief Field s_liftedToNullDouble, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_liftedToNullDouble, put = setStaticF_s_liftedToNullDouble))::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullDouble;

  /// @brief Field s_liftedToNullInt16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_liftedToNullInt16, put = setStaticF_s_liftedToNullInt16))::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullInt16;

  /// @brief Field s_liftedToNullInt32, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_liftedToNullInt32, put = setStaticF_s_liftedToNullInt32))::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullInt32;

  /// @brief Field s_liftedToNullInt64, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_liftedToNullInt64, put = setStaticF_s_liftedToNullInt64))::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullInt64;

  /// @brief Field s_liftedToNullSByte, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_liftedToNullSByte, put = setStaticF_s_liftedToNullSByte))::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullSByte;

  /// @brief Field s_liftedToNullSingle, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_liftedToNullSingle, put = setStaticF_s_liftedToNullSingle))::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullSingle;

  /// @brief Field s_liftedToNullUInt16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_liftedToNullUInt16, put = setStaticF_s_liftedToNullUInt16))::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullUInt16;

  /// @brief Field s_liftedToNullUInt32, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_liftedToNullUInt32, put = setStaticF_s_liftedToNullUInt32))::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullUInt32;

  /// @brief Field s_liftedToNullUInt64, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_liftedToNullUInt64, put = setStaticF_s_liftedToNullUInt64))::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullUInt64;

  /// @brief Method Create, addr 0x2c225bc, size 0x9ec, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type, bool liftedToNull);

  static inline ::System::Linq::Expressions::Interpreter::LessThanOrEqualInstruction* New_ctor(::System::Object* nullValue);

  constexpr ::System::Object*& __cordl_internal_get__nullValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__nullValue() const;

  constexpr void __cordl_internal_set__nullValue(::System::Object* value);

  /// @brief Method .ctor, addr 0x2c27b68, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* nullValue);

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Byte();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Char();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Double();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int16();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int32();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int64();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_SByte();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Single();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt16();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt32();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt64();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_liftedToNullByte();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_liftedToNullChar();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_liftedToNullDouble();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_liftedToNullInt16();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_liftedToNullInt32();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_liftedToNullInt64();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_liftedToNullSByte();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_liftedToNullSingle();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_liftedToNullUInt16();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_liftedToNullUInt32();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_liftedToNullUInt64();

  /// @brief Method get_ConsumedStack, addr 0x2c27b18, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x2c27b28, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x2c27b20, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

  static inline void setStaticF_s_Byte(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Char(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Double(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Int16(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Int32(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Int64(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_SByte(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Single(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_UInt16(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_UInt32(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_UInt64(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_liftedToNullByte(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_liftedToNullChar(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_liftedToNullDouble(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_liftedToNullInt16(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_liftedToNullInt32(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_liftedToNullInt64(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_liftedToNullSByte(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_liftedToNullSingle(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_liftedToNullUInt16(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_liftedToNullUInt32(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_liftedToNullUInt64(::System::Linq::Expressions::Interpreter::Instruction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LessThanOrEqualInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LessThanOrEqualInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LessThanOrEqualInstruction(LessThanOrEqualInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LessThanOrEqualInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LessThanOrEqualInstruction(LessThanOrEqualInstruction const&) = delete;

  /// @brief Field _nullValue, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____nullValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::LessThanOrEqualInstruction, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LessThanOrEqualInstruction, ____nullValue) == 0x10, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LessThanOrEqualInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LessThanOrEqualInstruction*, "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction");
