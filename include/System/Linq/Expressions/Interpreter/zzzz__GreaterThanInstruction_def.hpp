#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/GreaterThanInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GreaterThanInstruction)
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System::Linq::Expressions::Interpreter {
class __GreaterThanInstruction__GreaterThanByte;
}
namespace System::Linq::Expressions::Interpreter {
class __GreaterThanInstruction__GreaterThanChar;
}
namespace System::Linq::Expressions::Interpreter {
class __GreaterThanInstruction__GreaterThanDouble;
}
namespace System::Linq::Expressions::Interpreter {
class __GreaterThanInstruction__GreaterThanInt16;
}
namespace System::Linq::Expressions::Interpreter {
class __GreaterThanInstruction__GreaterThanInt32;
}
namespace System::Linq::Expressions::Interpreter {
class __GreaterThanInstruction__GreaterThanInt64;
}
namespace System::Linq::Expressions::Interpreter {
class __GreaterThanInstruction__GreaterThanSByte;
}
namespace System::Linq::Expressions::Interpreter {
class __GreaterThanInstruction__GreaterThanSingle;
}
namespace System::Linq::Expressions::Interpreter {
class __GreaterThanInstruction__GreaterThanUInt16;
}
namespace System::Linq::Expressions::Interpreter {
class __GreaterThanInstruction__GreaterThanUInt32;
}
namespace System::Linq::Expressions::Interpreter {
class __GreaterThanInstruction__GreaterThanUInt64;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class GreaterThanInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::GreaterThanInstruction);
// Type: System.Linq.Expressions.Interpreter::GreaterThanInstruction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::GreaterThanInstruction*
class CORDL_TYPE GreaterThanInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  using GreaterThanByte = ::System::Linq::Expressions::Interpreter::__GreaterThanInstruction__GreaterThanByte;

  using GreaterThanChar = ::System::Linq::Expressions::Interpreter::__GreaterThanInstruction__GreaterThanChar;

  using GreaterThanDouble = ::System::Linq::Expressions::Interpreter::__GreaterThanInstruction__GreaterThanDouble;

  using GreaterThanInt16 = ::System::Linq::Expressions::Interpreter::__GreaterThanInstruction__GreaterThanInt16;

  using GreaterThanInt32 = ::System::Linq::Expressions::Interpreter::__GreaterThanInstruction__GreaterThanInt32;

  using GreaterThanInt64 = ::System::Linq::Expressions::Interpreter::__GreaterThanInstruction__GreaterThanInt64;

  using GreaterThanSByte = ::System::Linq::Expressions::Interpreter::__GreaterThanInstruction__GreaterThanSByte;

  using GreaterThanSingle = ::System::Linq::Expressions::Interpreter::__GreaterThanInstruction__GreaterThanSingle;

  using GreaterThanUInt16 = ::System::Linq::Expressions::Interpreter::__GreaterThanInstruction__GreaterThanUInt16;

  using GreaterThanUInt32 = ::System::Linq::Expressions::Interpreter::__GreaterThanInstruction__GreaterThanUInt32;

  using GreaterThanUInt64 = ::System::Linq::Expressions::Interpreter::__GreaterThanInstruction__GreaterThanUInt64;

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

  /// @brief Method Create, addr 0x2c1b2dc, size 0x9ec, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type, bool liftedToNull);

  static inline ::System::Linq::Expressions::Interpreter::GreaterThanInstruction* New_ctor(::System::Object* nullValue);

  constexpr ::System::Object*& __cordl_internal_get__nullValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__nullValue() const;

  constexpr void __cordl_internal_set__nullValue(::System::Object* value);

  /// @brief Method .ctor, addr 0x2c1b2b4, size 0x28, virtual false, abstract: false, final false
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

  /// @brief Method get_ConsumedStack, addr 0x2c1b264, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x2c1b274, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x2c1b26c, size 0x8, virtual true, abstract: false, final false
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
  constexpr GreaterThanInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GreaterThanInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GreaterThanInstruction(GreaterThanInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GreaterThanInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GreaterThanInstruction(GreaterThanInstruction const&) = delete;

  /// @brief Field _nullValue, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____nullValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::GreaterThanInstruction, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::GreaterThanInstruction, ____nullValue) == 0x10, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::GreaterThanInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::GreaterThanInstruction*, "System.Linq.Expressions.Interpreter", "GreaterThanInstruction");
