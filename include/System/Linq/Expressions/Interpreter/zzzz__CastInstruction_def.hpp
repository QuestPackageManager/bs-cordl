#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/CastInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CastInstruction)
namespace GlobalNamespace {
class CastInstruction_CastInstructionNoT;
}
namespace GlobalNamespace {
template <typename T> class CastInstruction_CastInstructionT_1;
}
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class CastInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::CastInstruction);
// Dependencies System.Linq.Expressions.Interpreter.Instruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.CastInstruction
class CORDL_TYPE CastInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  using CastInstructionNoT = ::GlobalNamespace::CastInstruction_CastInstructionNoT;

  template <typename T> using CastInstructionT_1 = ::GlobalNamespace::CastInstruction_CastInstructionT_1<T>;

  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field s_Boolean, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Boolean, put = setStaticF_s_Boolean)) ::System::Linq::Expressions::Interpreter::CastInstruction* s_Boolean;

  /// @brief Field s_Byte, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Byte, put = setStaticF_s_Byte)) ::System::Linq::Expressions::Interpreter::CastInstruction* s_Byte;

  /// @brief Field s_Char, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Char, put = setStaticF_s_Char)) ::System::Linq::Expressions::Interpreter::CastInstruction* s_Char;

  /// @brief Field s_DateTime, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DateTime, put = setStaticF_s_DateTime)) ::System::Linq::Expressions::Interpreter::CastInstruction* s_DateTime;

  /// @brief Field s_Decimal, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Decimal, put = setStaticF_s_Decimal)) ::System::Linq::Expressions::Interpreter::CastInstruction* s_Decimal;

  /// @brief Field s_Double, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Double, put = setStaticF_s_Double)) ::System::Linq::Expressions::Interpreter::CastInstruction* s_Double;

  /// @brief Field s_Int16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Int16, put = setStaticF_s_Int16)) ::System::Linq::Expressions::Interpreter::CastInstruction* s_Int16;

  /// @brief Field s_Int32, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Int32, put = setStaticF_s_Int32)) ::System::Linq::Expressions::Interpreter::CastInstruction* s_Int32;

  /// @brief Field s_Int64, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Int64, put = setStaticF_s_Int64)) ::System::Linq::Expressions::Interpreter::CastInstruction* s_Int64;

  /// @brief Field s_SByte, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SByte, put = setStaticF_s_SByte)) ::System::Linq::Expressions::Interpreter::CastInstruction* s_SByte;

  /// @brief Field s_Single, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Single, put = setStaticF_s_Single)) ::System::Linq::Expressions::Interpreter::CastInstruction* s_Single;

  /// @brief Field s_String, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_String, put = setStaticF_s_String)) ::System::Linq::Expressions::Interpreter::CastInstruction* s_String;

  /// @brief Field s_UInt16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UInt16, put = setStaticF_s_UInt16)) ::System::Linq::Expressions::Interpreter::CastInstruction* s_UInt16;

  /// @brief Field s_UInt32, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UInt32, put = setStaticF_s_UInt32)) ::System::Linq::Expressions::Interpreter::CastInstruction* s_UInt32;

  /// @brief Field s_UInt64, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UInt64, put = setStaticF_s_UInt64)) ::System::Linq::Expressions::Interpreter::CastInstruction* s_UInt64;

  /// @brief Method Create, addr 0x5da2e80, size 0x5cc, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* t);

  static inline ::System::Linq::Expressions::Interpreter::CastInstruction* New_ctor();

  /// @brief Method .ctor, addr 0x5da3518, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::Interpreter::CastInstruction* getStaticF_s_Boolean();

  static inline ::System::Linq::Expressions::Interpreter::CastInstruction* getStaticF_s_Byte();

  static inline ::System::Linq::Expressions::Interpreter::CastInstruction* getStaticF_s_Char();

  static inline ::System::Linq::Expressions::Interpreter::CastInstruction* getStaticF_s_DateTime();

  static inline ::System::Linq::Expressions::Interpreter::CastInstruction* getStaticF_s_Decimal();

  static inline ::System::Linq::Expressions::Interpreter::CastInstruction* getStaticF_s_Double();

  static inline ::System::Linq::Expressions::Interpreter::CastInstruction* getStaticF_s_Int16();

  static inline ::System::Linq::Expressions::Interpreter::CastInstruction* getStaticF_s_Int32();

  static inline ::System::Linq::Expressions::Interpreter::CastInstruction* getStaticF_s_Int64();

  static inline ::System::Linq::Expressions::Interpreter::CastInstruction* getStaticF_s_SByte();

  static inline ::System::Linq::Expressions::Interpreter::CastInstruction* getStaticF_s_Single();

  static inline ::System::Linq::Expressions::Interpreter::CastInstruction* getStaticF_s_String();

  static inline ::System::Linq::Expressions::Interpreter::CastInstruction* getStaticF_s_UInt16();

  static inline ::System::Linq::Expressions::Interpreter::CastInstruction* getStaticF_s_UInt32();

  static inline ::System::Linq::Expressions::Interpreter::CastInstruction* getStaticF_s_UInt64();

  /// @brief Method get_ConsumedStack, addr 0x5da2e2c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x5da2e3c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x5da2e34, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

  static inline void setStaticF_s_Boolean(::System::Linq::Expressions::Interpreter::CastInstruction* value);

  static inline void setStaticF_s_Byte(::System::Linq::Expressions::Interpreter::CastInstruction* value);

  static inline void setStaticF_s_Char(::System::Linq::Expressions::Interpreter::CastInstruction* value);

  static inline void setStaticF_s_DateTime(::System::Linq::Expressions::Interpreter::CastInstruction* value);

  static inline void setStaticF_s_Decimal(::System::Linq::Expressions::Interpreter::CastInstruction* value);

  static inline void setStaticF_s_Double(::System::Linq::Expressions::Interpreter::CastInstruction* value);

  static inline void setStaticF_s_Int16(::System::Linq::Expressions::Interpreter::CastInstruction* value);

  static inline void setStaticF_s_Int32(::System::Linq::Expressions::Interpreter::CastInstruction* value);

  static inline void setStaticF_s_Int64(::System::Linq::Expressions::Interpreter::CastInstruction* value);

  static inline void setStaticF_s_SByte(::System::Linq::Expressions::Interpreter::CastInstruction* value);

  static inline void setStaticF_s_Single(::System::Linq::Expressions::Interpreter::CastInstruction* value);

  static inline void setStaticF_s_String(::System::Linq::Expressions::Interpreter::CastInstruction* value);

  static inline void setStaticF_s_UInt16(::System::Linq::Expressions::Interpreter::CastInstruction* value);

  static inline void setStaticF_s_UInt32(::System::Linq::Expressions::Interpreter::CastInstruction* value);

  static inline void setStaticF_s_UInt64(::System::Linq::Expressions::Interpreter::CastInstruction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CastInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CastInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CastInstruction(CastInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CastInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CastInstruction(CastInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16567 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::CastInstruction, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::CastInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::CastInstruction*, "System.Linq.Expressions.Interpreter", "CastInstruction");
