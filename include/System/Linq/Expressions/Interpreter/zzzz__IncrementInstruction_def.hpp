#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IncrementInstruction)
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System::Linq::Expressions::Interpreter {
class __IncrementInstruction__IncrementDouble;
}
namespace System::Linq::Expressions::Interpreter {
class __IncrementInstruction__IncrementInt16;
}
namespace System::Linq::Expressions::Interpreter {
class __IncrementInstruction__IncrementInt32;
}
namespace System::Linq::Expressions::Interpreter {
class __IncrementInstruction__IncrementInt64;
}
namespace System::Linq::Expressions::Interpreter {
class __IncrementInstruction__IncrementSingle;
}
namespace System::Linq::Expressions::Interpreter {
class __IncrementInstruction__IncrementUInt16;
}
namespace System::Linq::Expressions::Interpreter {
class __IncrementInstruction__IncrementUInt32;
}
namespace System::Linq::Expressions::Interpreter {
class __IncrementInstruction__IncrementUInt64;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class IncrementInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::IncrementInstruction);
// Type: System.Linq.Expressions.Interpreter::IncrementInstruction
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::IncrementInstruction*
class CORDL_TYPE IncrementInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  using IncrementDouble = ::System::Linq::Expressions::Interpreter::__IncrementInstruction__IncrementDouble;

  using IncrementInt16 = ::System::Linq::Expressions::Interpreter::__IncrementInstruction__IncrementInt16;

  using IncrementInt32 = ::System::Linq::Expressions::Interpreter::__IncrementInstruction__IncrementInt32;

  using IncrementInt64 = ::System::Linq::Expressions::Interpreter::__IncrementInstruction__IncrementInt64;

  using IncrementSingle = ::System::Linq::Expressions::Interpreter::__IncrementInstruction__IncrementSingle;

  using IncrementUInt16 = ::System::Linq::Expressions::Interpreter::__IncrementInstruction__IncrementUInt16;

  using IncrementUInt32 = ::System::Linq::Expressions::Interpreter::__IncrementInstruction__IncrementUInt32;

  using IncrementUInt64 = ::System::Linq::Expressions::Interpreter::__IncrementInstruction__IncrementUInt64;

  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field s_Double, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Double, put = setStaticF_s_Double))::System::Linq::Expressions::Interpreter::Instruction* s_Double;

  /// @brief Field s_Int16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Int16, put = setStaticF_s_Int16))::System::Linq::Expressions::Interpreter::Instruction* s_Int16;

  /// @brief Field s_Int32, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Int32, put = setStaticF_s_Int32))::System::Linq::Expressions::Interpreter::Instruction* s_Int32;

  /// @brief Field s_Int64, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Int64, put = setStaticF_s_Int64))::System::Linq::Expressions::Interpreter::Instruction* s_Int64;

  /// @brief Field s_Single, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Single, put = setStaticF_s_Single))::System::Linq::Expressions::Interpreter::Instruction* s_Single;

  /// @brief Field s_UInt16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UInt16, put = setStaticF_s_UInt16))::System::Linq::Expressions::Interpreter::Instruction* s_UInt16;

  /// @brief Field s_UInt32, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UInt32, put = setStaticF_s_UInt32))::System::Linq::Expressions::Interpreter::Instruction* s_UInt32;

  /// @brief Field s_UInt64, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UInt64, put = setStaticF_s_UInt64))::System::Linq::Expressions::Interpreter::Instruction* s_UInt64;

  /// @brief Method Create, addr 0x2c1ddfc, size 0x354, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type);

  static inline ::System::Linq::Expressions::Interpreter::IncrementInstruction* New_ctor();

  /// @brief Method .ctor, addr 0x2c1ddf4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Double();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int16();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int32();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int64();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Single();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt16();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt32();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt64();

  /// @brief Method get_ConsumedStack, addr 0x2c1dda4, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x2c1ddb4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x2c1ddac, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

  static inline void setStaticF_s_Double(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Int16(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Int32(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Int64(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Single(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_UInt16(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_UInt32(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_UInt64(::System::Linq::Expressions::Interpreter::Instruction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IncrementInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IncrementInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IncrementInstruction(IncrementInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IncrementInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IncrementInstruction(IncrementInstruction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::IncrementInstruction, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::IncrementInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::IncrementInstruction*, "System.Linq.Expressions.Interpreter", "IncrementInstruction");
