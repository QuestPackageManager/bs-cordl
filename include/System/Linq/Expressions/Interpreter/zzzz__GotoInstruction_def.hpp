#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/GotoInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__IndexedBranchInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GotoInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class GotoInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::GotoInstruction);
// Dependencies System.Linq.Expressions.Interpreter.IndexedBranchInstruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.GotoInstruction
class CORDL_TYPE GotoInstruction : public ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field _hasResult, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get__hasResult, put = __cordl_internal_set__hasResult)) bool _hasResult;

  /// @brief Field _hasValue, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get__hasValue, put = __cordl_internal_set__hasValue)) bool _hasValue;

  /// @brief Field _labelTargetGetsValue, offset 0x16, size 0x1
  __declspec(property(get = __cordl_internal_get__labelTargetGetsValue, put = __cordl_internal_set__labelTargetGetsValue)) bool _labelTargetGetsValue;

  /// @brief Field s_cache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_cache,
                      put = setStaticF_s_cache)) ::ArrayW<::System::Linq::Expressions::Interpreter::GotoInstruction*, ::Array<::System::Linq::Expressions::Interpreter::GotoInstruction*>*>
      s_cache;

  /// @brief Method Create, addr 0x40c40d4, size 0x168, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::GotoInstruction* Create(int32_t labelIndex, bool hasResult, bool hasValue, bool labelTargetGetsValue);

  static inline ::System::Linq::Expressions::Interpreter::GotoInstruction* New_ctor(int32_t targetIndex, bool hasResult, bool hasValue, bool labelTargetGetsValue);

  /// @brief Method Run, addr 0x40c423c, size 0xc8, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr bool const& __cordl_internal_get__hasResult() const;

  constexpr bool& __cordl_internal_get__hasResult();

  constexpr bool const& __cordl_internal_get__hasValue() const;

  constexpr bool& __cordl_internal_get__hasValue();

  constexpr bool const& __cordl_internal_get__labelTargetGetsValue() const;

  constexpr bool& __cordl_internal_get__labelTargetGetsValue();

  constexpr void __cordl_internal_set__hasResult(bool value);

  constexpr void __cordl_internal_set__hasValue(bool value);

  constexpr void __cordl_internal_set__labelTargetGetsValue(bool value);

  /// @brief Method .ctor, addr 0x40c408c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(int32_t targetIndex, bool hasResult, bool hasValue, bool labelTargetGetsValue);

  static inline ::ArrayW<::System::Linq::Expressions::Interpreter::GotoInstruction*, ::Array<::System::Linq::Expressions::Interpreter::GotoInstruction*>*> getStaticF_s_cache();

  /// @brief Method get_ConsumedStack, addr 0x40c407c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x40c403c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x40c4084, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

  static inline void setStaticF_s_cache(::ArrayW<::System::Linq::Expressions::Interpreter::GotoInstruction*, ::Array<::System::Linq::Expressions::Interpreter::GotoInstruction*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GotoInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GotoInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GotoInstruction(GotoInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GotoInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GotoInstruction(GotoInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13787 };

  /// @brief Field _hasResult, offset: 0x14, size: 0x1, def value: None
  bool ____hasResult;

  /// @brief Field _hasValue, offset: 0x15, size: 0x1, def value: None
  bool ____hasValue;

  /// @brief Field _labelTargetGetsValue, offset: 0x16, size: 0x1, def value: None
  bool ____labelTargetGetsValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::GotoInstruction, ____hasResult) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::GotoInstruction, ____hasValue) == 0x15, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::GotoInstruction, ____labelTargetGetsValue) == 0x16, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::GotoInstruction, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::GotoInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::GotoInstruction*, "System.Linq.Expressions.Interpreter", "GotoInstruction");
