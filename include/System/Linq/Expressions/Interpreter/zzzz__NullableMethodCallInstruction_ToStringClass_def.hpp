#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NullableMethodCallInstruction_ToStringClass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NullableMethodCallInstruction_ToStringClass)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class NullableMethodCallInstruction_ToStringClass;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NullableMethodCallInstruction_ToStringClass);
// Dependencies System.Linq.Expressions.Interpreter.NullableMethodCallInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/ToStringClass
class CORDL_TYPE NullableMethodCallInstruction_ToStringClass : public ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::NullableMethodCallInstruction_ToStringClass* New_ctor();

  /// @brief Method Run, addr 0x40f8f08, size 0x80, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40f8c44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullableMethodCallInstruction_ToStringClass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NullableMethodCallInstruction_ToStringClass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullableMethodCallInstruction_ToStringClass(NullableMethodCallInstruction_ToStringClass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullableMethodCallInstruction_ToStringClass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullableMethodCallInstruction_ToStringClass(NullableMethodCallInstruction_ToStringClass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14113 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NullableMethodCallInstruction_ToStringClass, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NullableMethodCallInstruction_ToStringClass);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NullableMethodCallInstruction_ToStringClass*, "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction/ToStringClass");
