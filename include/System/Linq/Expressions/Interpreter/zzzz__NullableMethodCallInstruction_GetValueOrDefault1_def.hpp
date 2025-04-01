#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NullableMethodCallInstruction_GetValueOrDefault1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NullableMethodCallInstruction_GetValueOrDefault1)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class NullableMethodCallInstruction_GetValueOrDefault1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1);
// Dependencies System.Linq.Expressions.Interpreter.NullableMethodCallInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/GetValueOrDefault1
class CORDL_TYPE NullableMethodCallInstruction_GetValueOrDefault1 : public ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  static inline ::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1* New_ctor();

  /// @brief Method Run, addr 0x40f3e70, size 0x54, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40f3cc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ConsumedStack, addr 0x40f3e68, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullableMethodCallInstruction_GetValueOrDefault1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NullableMethodCallInstruction_GetValueOrDefault1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullableMethodCallInstruction_GetValueOrDefault1(NullableMethodCallInstruction_GetValueOrDefault1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullableMethodCallInstruction_GetValueOrDefault1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullableMethodCallInstruction_GetValueOrDefault1(NullableMethodCallInstruction_GetValueOrDefault1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14109 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1*, "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction/GetValueOrDefault1");
