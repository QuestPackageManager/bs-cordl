#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/AddOvfInstruction_AddOvfUInt64.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__AddOvfInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AddOvfInstruction_AddOvfUInt64)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class AddOvfInstruction_AddOvfUInt64;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AddOvfInstruction_AddOvfUInt64);
// Dependencies System.Linq.Expressions.Interpreter.AddOvfInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.AddOvfInstruction/AddOvfUInt64
class CORDL_TYPE AddOvfInstruction_AddOvfUInt64 : public ::System::Linq::Expressions::Interpreter::AddOvfInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::AddOvfInstruction_AddOvfUInt64* New_ctor();

  /// @brief Method Run, addr 0x40c08d4, size 0x1c8, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40bfe68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddOvfInstruction_AddOvfUInt64();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AddOvfInstruction_AddOvfUInt64", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddOvfInstruction_AddOvfUInt64(AddOvfInstruction_AddOvfUInt64&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddOvfInstruction_AddOvfUInt64", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddOvfInstruction_AddOvfUInt64(AddOvfInstruction_AddOvfUInt64 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13757 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AddOvfInstruction_AddOvfUInt64, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AddOvfInstruction_AddOvfUInt64);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AddOvfInstruction_AddOvfUInt64*, "System.Linq.Expressions.Interpreter", "AddOvfInstruction/AddOvfUInt64");
