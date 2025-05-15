#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LessThanInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LessThanInstruction)
namespace GlobalNamespace {
class LessThanInstruction_LessThanByte;
}
namespace GlobalNamespace {
class LessThanInstruction_LessThanChar;
}
namespace GlobalNamespace {
class LessThanInstruction_LessThanDouble;
}
namespace GlobalNamespace {
class LessThanInstruction_LessThanInt16;
}
namespace GlobalNamespace {
class LessThanInstruction_LessThanInt32;
}
namespace GlobalNamespace {
class LessThanInstruction_LessThanInt64;
}
namespace GlobalNamespace {
class LessThanInstruction_LessThanSByte;
}
namespace GlobalNamespace {
class LessThanInstruction_LessThanSingle;
}
namespace GlobalNamespace {
class LessThanInstruction_LessThanUInt16;
}
namespace GlobalNamespace {
class LessThanInstruction_LessThanUInt32;
}
namespace GlobalNamespace {
class LessThanInstruction_LessThanUInt64;
}
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class LessThanInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::LessThanInstruction);
// Dependencies System.Linq.Expressions.Interpreter.Instruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LessThanInstruction
class CORDL_TYPE LessThanInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  using LessThanByte = ::GlobalNamespace::LessThanInstruction_LessThanByte;

  using LessThanChar = ::GlobalNamespace::LessThanInstruction_LessThanChar;

  using LessThanDouble = ::GlobalNamespace::LessThanInstruction_LessThanDouble;

  using LessThanInt16 = ::GlobalNamespace::LessThanInstruction_LessThanInt16;

  using LessThanInt32 = ::GlobalNamespace::LessThanInstruction_LessThanInt32;

  using LessThanInt64 = ::GlobalNamespace::LessThanInstruction_LessThanInt64;

  using LessThanSByte = ::GlobalNamespace::LessThanInstruction_LessThanSByte;

  using LessThanSingle = ::GlobalNamespace::LessThanInstruction_LessThanSingle;

  using LessThanUInt16 = ::GlobalNamespace::LessThanInstruction_LessThanUInt16;

  using LessThanUInt32 = ::GlobalNamespace::LessThanInstruction_LessThanUInt32;

  using LessThanUInt64 = ::GlobalNamespace::LessThanInstruction_LessThanUInt64;

  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field _nullValue, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__nullValue, put = __cordl_internal_set__nullValue)) ::System::Object* _nullValue;

  /// @brief Field s_Byte, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Byte, put = setStaticF_s_Byte)) ::System::Linq::Expressions::Interpreter::Instruction* s_Byte;

  /// @brief Field s_Char, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Char, put = setStaticF_s_Char)) ::System::Linq::Expressions::Interpreter::Instruction* s_Char;

  /// @brief Field s_Double, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Double, put = setStaticF_s_Double)) ::System::Linq::Expressions::Interpreter::Instruction* s_Double;

  /// @brief Field s_Int16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Int16, put = setStaticF_s_Int16)) ::System::Linq::Expressions::Interpreter::Instruction* s_Int16;

  /// @brief Field s_Int32, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Int32, put = setStaticF_s_Int32)) ::System::Linq::Expressions::Interpreter::Instruction* s_Int32;

  /// @brief Field s_Int64, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Int64, put = setStaticF_s_Int64)) ::System::Linq::Expressions::Interpreter::Instruction* s_Int64;

  /// @brief Field s_SByte, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SByte, put = setStaticF_s_SByte)) ::System::Linq::Expressions::Interpreter::Instruction* s_SByte;

  /// @brief Field s_Single, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Single, put = setStaticF_s_Single)) ::System::Linq::Expressions::Interpreter::Instruction* s_Single;

  /// @brief Field s_UInt16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UInt16, put = setStaticF_s_UInt16)) ::System::Linq::Expressions::Interpreter::Instruction* s_UInt16;

  /// @brief Field s_UInt32, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UInt32, put = setStaticF_s_UInt32)) ::System::Linq::Expressions::Interpreter::Instruction* s_UInt32;

  /// @brief Field s_UInt64, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UInt64, put = setStaticF_s_UInt64)) ::System::Linq::Expressions::Interpreter::Instruction* s_UInt64;

  /// @brief Field s_liftedToNullByte, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_liftedToNullByte, put = setStaticF_s_liftedToNullByte)) ::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullByte;

  /// @brief Field s_liftedToNullChar, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_liftedToNullChar, put = setStaticF_s_liftedToNullChar)) ::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullChar;

  /// @brief Field s_liftedToNullDouble, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_liftedToNullDouble, put = setStaticF_s_liftedToNullDouble)) ::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullDouble;

  /// @brief Field s_liftedToNullInt16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_liftedToNullInt16, put = setStaticF_s_liftedToNullInt16)) ::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullInt16;

  /// @brief Field s_liftedToNullInt32, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_liftedToNullInt32, put = setStaticF_s_liftedToNullInt32)) ::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullInt32;

  /// @brief Field s_liftedToNullInt64, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_liftedToNullInt64, put = setStaticF_s_liftedToNullInt64)) ::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullInt64;

  /// @brief Field s_liftedToNullSByte, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_liftedToNullSByte, put = setStaticF_s_liftedToNullSByte)) ::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullSByte;

  /// @brief Field s_liftedToNullSingle, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_liftedToNullSingle, put = setStaticF_s_liftedToNullSingle)) ::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullSingle;

  /// @brief Field s_liftedToNullUInt16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_liftedToNullUInt16, put = setStaticF_s_liftedToNullUInt16)) ::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullUInt16;

  /// @brief Field s_liftedToNullUInt32, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_liftedToNullUInt32, put = setStaticF_s_liftedToNullUInt32)) ::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullUInt32;

  /// @brief Field s_liftedToNullUInt64, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_liftedToNullUInt64, put = setStaticF_s_liftedToNullUInt64)) ::System::Linq::Expressions::Interpreter::Instruction* s_liftedToNullUInt64;

  /// @brief Method Create, addr 0x40d1340, size 0x960, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type, bool liftedToNull);

  static inline ::System::Linq::Expressions::Interpreter::LessThanInstruction* New_ctor(::System::Object* nullValue);

  constexpr ::System::Object* const& __cordl_internal_get__nullValue() const;

  constexpr ::System::Object*& __cordl_internal_get__nullValue();

  constexpr void __cordl_internal_set__nullValue(::System::Object* value);

  /// @brief Method .ctor, addr 0x40d651c, size 0x28, virtual false, abstract: false, final false
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

  /// @brief Method get_ConsumedStack, addr 0x40d64cc, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x40d64dc, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x40d64d4, size 0x8, virtual true, abstract: false, final false
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
  constexpr LessThanInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LessThanInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LessThanInstruction(LessThanInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LessThanInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LessThanInstruction(LessThanInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13927 };

  /// @brief Field _nullValue, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____nullValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::LessThanInstruction, ____nullValue) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::LessThanInstruction, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LessThanInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LessThanInstruction*, "System.Linq.Expressions.Interpreter", "LessThanInstruction");
