#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ModuloInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModuloInstruction)
namespace GlobalNamespace {
class ModuloInstruction_ModuloDouble;
}
namespace GlobalNamespace {
class ModuloInstruction_ModuloInt16;
}
namespace GlobalNamespace {
class ModuloInstruction_ModuloInt32;
}
namespace GlobalNamespace {
class ModuloInstruction_ModuloInt64;
}
namespace GlobalNamespace {
class ModuloInstruction_ModuloSingle;
}
namespace GlobalNamespace {
class ModuloInstruction_ModuloUInt16;
}
namespace GlobalNamespace {
class ModuloInstruction_ModuloUInt32;
}
namespace GlobalNamespace {
class ModuloInstruction_ModuloUInt64;
}
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class ModuloInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::ModuloInstruction);
// Dependencies System.Linq.Expressions.Interpreter.Instruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.ModuloInstruction
class CORDL_TYPE ModuloInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  using ModuloDouble = ::GlobalNamespace::ModuloInstruction_ModuloDouble;

  using ModuloInt16 = ::GlobalNamespace::ModuloInstruction_ModuloInt16;

  using ModuloInt32 = ::GlobalNamespace::ModuloInstruction_ModuloInt32;

  using ModuloInt64 = ::GlobalNamespace::ModuloInstruction_ModuloInt64;

  using ModuloSingle = ::GlobalNamespace::ModuloInstruction_ModuloSingle;

  using ModuloUInt16 = ::GlobalNamespace::ModuloInstruction_ModuloUInt16;

  using ModuloUInt32 = ::GlobalNamespace::ModuloInstruction_ModuloUInt32;

  using ModuloUInt64 = ::GlobalNamespace::ModuloInstruction_ModuloUInt64;

  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field s_Double, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Double, put = setStaticF_s_Double)) ::System::Linq::Expressions::Interpreter::Instruction* s_Double;

  /// @brief Field s_Int16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Int16, put = setStaticF_s_Int16)) ::System::Linq::Expressions::Interpreter::Instruction* s_Int16;

  /// @brief Field s_Int32, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Int32, put = setStaticF_s_Int32)) ::System::Linq::Expressions::Interpreter::Instruction* s_Int32;

  /// @brief Field s_Int64, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Int64, put = setStaticF_s_Int64)) ::System::Linq::Expressions::Interpreter::Instruction* s_Int64;

  /// @brief Field s_Single, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Single, put = setStaticF_s_Single)) ::System::Linq::Expressions::Interpreter::Instruction* s_Single;

  /// @brief Field s_UInt16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UInt16, put = setStaticF_s_UInt16)) ::System::Linq::Expressions::Interpreter::Instruction* s_UInt16;

  /// @brief Field s_UInt32, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UInt32, put = setStaticF_s_UInt32)) ::System::Linq::Expressions::Interpreter::Instruction* s_UInt32;

  /// @brief Field s_UInt64, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UInt64, put = setStaticF_s_UInt64)) ::System::Linq::Expressions::Interpreter::Instruction* s_UInt64;

  /// @brief Method Create, addr 0x5dff7b0, size 0x348, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type);

  static inline ::System::Linq::Expressions::Interpreter::ModuloInstruction* New_ctor();

  /// @brief Method .ctor, addr 0x5dff7ac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Double();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int16();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int32();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int64();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Single();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt16();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt32();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt64();

  /// @brief Method get_ConsumedStack, addr 0x5dff758, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x5dff768, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x5dff760, size 0x8, virtual true, abstract: false, final false
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
  constexpr ModuloInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ModuloInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ModuloInstruction(ModuloInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ModuloInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ModuloInstruction(ModuloInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16456 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::ModuloInstruction, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::ModuloInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::ModuloInstruction*, "System.Linq.Expressions.Interpreter", "ModuloInstruction");
