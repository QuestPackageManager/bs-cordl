#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/BranchInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__OffsetInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BranchInstruction)
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class BranchInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::BranchInstruction);
// Dependencies System.Linq.Expressions.Interpreter.OffsetInstruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.BranchInstruction
class CORDL_TYPE BranchInstruction : public ::System::Linq::Expressions::Interpreter::OffsetInstruction {
public:
  // Declarations
  __declspec(property(get = get_Cache)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> Cache;

  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field _hasResult, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get__hasResult, put = __cordl_internal_set__hasResult)) bool _hasResult;

  /// @brief Field _hasValue, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get__hasValue, put = __cordl_internal_set__hasValue)) bool _hasValue;

  /// @brief Field s_caches, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_caches, put = setStaticF_s_caches)) ::ArrayW<
      ::ArrayW<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>,
               ::Array<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>>*>,
      ::Array<::ArrayW<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>,
                       ::Array<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>>*>>*>
      s_caches;

  static inline ::System::Linq::Expressions::Interpreter::BranchInstruction* New_ctor();

  static inline ::System::Linq::Expressions::Interpreter::BranchInstruction* New_ctor(bool hasResult, bool hasValue);

  /// @brief Method Run, addr 0x40c2814, size 0x8, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr bool const& __cordl_internal_get__hasResult() const;

  constexpr bool& __cordl_internal_get__hasResult();

  constexpr bool const& __cordl_internal_get__hasValue() const;

  constexpr bool& __cordl_internal_get__hasValue();

  constexpr void __cordl_internal_set__hasResult(bool value);

  constexpr void __cordl_internal_set__hasValue(bool value);

  /// @brief Method .ctor, addr 0x40c2768, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x40c278c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(bool hasResult, bool hasValue);

  static inline ::ArrayW<::ArrayW<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>,
                                  ::Array<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>>*>,
                         ::Array<::ArrayW<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>,
                                          ::Array<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>>*>>*>
  getStaticF_s_caches();

  /// @brief Method get_Cache, addr 0x40c2540, size 0x228, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> get_Cache();

  /// @brief Method get_ConsumedStack, addr 0x40c2804, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x40c27c4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x40c280c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

  static inline void
  setStaticF_s_caches(::ArrayW<::ArrayW<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>,
                                        ::Array<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>>*>,
                               ::Array<::ArrayW<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>,
                                                ::Array<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>>*>>*>
                          value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BranchInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BranchInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BranchInstruction(BranchInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BranchInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BranchInstruction(BranchInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13780 };

  /// @brief Field _hasResult, offset: 0x14, size: 0x1, def value: None
  bool ____hasResult;

  /// @brief Field _hasValue, offset: 0x15, size: 0x1, def value: None
  bool ____hasValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::BranchInstruction, ____hasResult) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::BranchInstruction, ____hasValue) == 0x15, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::BranchInstruction, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::BranchInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::BranchInstruction*, "System.Linq.Expressions.Interpreter", "BranchInstruction");
