#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/EnterFaultInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__IndexedBranchInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnterFaultInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class EnterFaultInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::EnterFaultInstruction);
// Type: System.Linq.Expressions.Interpreter::EnterFaultInstruction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::EnterFaultInstruction*
class CORDL_TYPE EnterFaultInstruction : public ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction {
public:
  // Declarations
  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field s_cache, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_s_cache,
      put = setStaticF_s_cache)) ::ArrayW<::System::Linq::Expressions::Interpreter::EnterFaultInstruction*, ::Array<::System::Linq::Expressions::Interpreter::EnterFaultInstruction*>*>
      s_cache;

  /// @brief Method Create, addr 0x404dfe8, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::EnterFaultInstruction* Create(int32_t labelIndex);

  static inline ::System::Linq::Expressions::Interpreter::EnterFaultInstruction* New_ctor(int32_t labelIndex);

  /// @brief Method Run, addr 0x404e0dc, size 0x48, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x404df78, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t labelIndex);

  static inline ::ArrayW<::System::Linq::Expressions::Interpreter::EnterFaultInstruction*, ::Array<::System::Linq::Expressions::Interpreter::EnterFaultInstruction*>*> getStaticF_s_cache();

  /// @brief Method get_InstructionName, addr 0x404dfa0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x404dfe0, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

  static inline void setStaticF_s_cache(::ArrayW<::System::Linq::Expressions::Interpreter::EnterFaultInstruction*, ::Array<::System::Linq::Expressions::Interpreter::EnterFaultInstruction*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnterFaultInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnterFaultInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnterFaultInstruction(EnterFaultInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnterFaultInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnterFaultInstruction(EnterFaultInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13746 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::EnterFaultInstruction, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::EnterFaultInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::EnterFaultInstruction*, "System.Linq.Expressions.Interpreter", "EnterFaultInstruction");
