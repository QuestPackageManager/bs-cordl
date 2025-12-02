#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NullableMethodCallInstruction_GetHashCodeClass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NullableMethodCallInstruction_GetHashCodeClass)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class NullableMethodCallInstruction_GetHashCodeClass;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NullableMethodCallInstruction_GetHashCodeClass);
// Dependencies System.Linq.Expressions.Interpreter.NullableMethodCallInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/GetHashCodeClass
class CORDL_TYPE NullableMethodCallInstruction_GetHashCodeClass : public ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::NullableMethodCallInstruction_GetHashCodeClass* New_ctor();

  /// @brief Method Run, addr 0x5da2ddc, size 0x50, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5da2a6c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullableMethodCallInstruction_GetHashCodeClass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NullableMethodCallInstruction_GetHashCodeClass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullableMethodCallInstruction_GetHashCodeClass(NullableMethodCallInstruction_GetHashCodeClass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullableMethodCallInstruction_GetHashCodeClass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullableMethodCallInstruction_GetHashCodeClass(NullableMethodCallInstruction_GetHashCodeClass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16561 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NullableMethodCallInstruction_GetHashCodeClass, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NullableMethodCallInstruction_GetHashCodeClass);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NullableMethodCallInstruction_GetHashCodeClass*, "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction/GetHashCodeClass");
