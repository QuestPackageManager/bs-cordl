#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/CastToEnumInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CastToEnumInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class CastToEnumInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::CastToEnumInstruction);
// Dependencies System.Linq.Expressions.Interpreter.CastInstruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.CastToEnumInstruction
class CORDL_TYPE CastToEnumInstruction : public ::System::Linq::Expressions::Interpreter::CastInstruction {
public:
  // Declarations
  /// @brief Field _t, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__t, put = __cordl_internal_set__t)) ::System::Type* _t;

  static inline ::System::Linq::Expressions::Interpreter::CastToEnumInstruction* New_ctor(::System::Type* t);

  /// @brief Method Run, addr 0x40fde48, size 0xa0, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr ::System::Type* const& __cordl_internal_get__t() const;

  constexpr ::System::Type*& __cordl_internal_get__t();

  constexpr void __cordl_internal_set__t(::System::Type* value);

  /// @brief Method .ctor, addr 0x40fde20, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* t);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CastToEnumInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CastToEnumInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CastToEnumInstruction(CastToEnumInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CastToEnumInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CastToEnumInstruction(CastToEnumInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14120 };

  /// @brief Field _t, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____t;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::CastToEnumInstruction, ____t) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::CastToEnumInstruction, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::CastToEnumInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::CastToEnumInstruction*, "System.Linq.Expressions.Interpreter", "CastToEnumInstruction");
