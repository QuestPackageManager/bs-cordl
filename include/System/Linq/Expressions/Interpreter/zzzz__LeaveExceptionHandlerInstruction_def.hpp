#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LeaveExceptionHandlerInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__IndexedBranchInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LeaveExceptionHandlerInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class LeaveExceptionHandlerInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction);
// Dependencies System.Linq.Expressions.Interpreter.IndexedBranchInstruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LeaveExceptionHandlerInstruction
class CORDL_TYPE LeaveExceptionHandlerInstruction : public ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field _hasValue, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get__hasValue, put = __cordl_internal_set__hasValue)) bool _hasValue;

  /// @brief Field s_cache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_cache, put = setStaticF_s_cache)) ::ArrayW<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*,
                                                                                    ::Array<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>*>
      s_cache;

  /// @brief Method Create, addr 0x40c3f80, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction* Create(int32_t labelIndex, bool hasValue);

  static inline ::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction* New_ctor(int32_t labelIndex, bool hasValue);

  /// @brief Method Run, addr 0x40c409c, size 0x24, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr bool const& __cordl_internal_get__hasValue() const;

  constexpr bool& __cordl_internal_get__hasValue();

  constexpr void __cordl_internal_set__hasValue(bool value);

  /// @brief Method .ctor, addr 0x40c3f00, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t labelIndex, bool hasValue);

  static inline ::ArrayW<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*, ::Array<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>*>
  getStaticF_s_cache();

  /// @brief Method get_ConsumedStack, addr 0x40c3f70, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x40c3f30, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x40c3f78, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

  static inline void setStaticF_s_cache(
      ::ArrayW<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*, ::Array<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaveExceptionHandlerInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaveExceptionHandlerInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaveExceptionHandlerInstruction(LeaveExceptionHandlerInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaveExceptionHandlerInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaveExceptionHandlerInstruction(LeaveExceptionHandlerInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13792 };

  /// @brief Field _hasValue, offset: 0x14, size: 0x1, def value: None
  bool ____hasValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction, ____hasValue) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*, "System.Linq.Expressions.Interpreter", "LeaveExceptionHandlerInstruction");
