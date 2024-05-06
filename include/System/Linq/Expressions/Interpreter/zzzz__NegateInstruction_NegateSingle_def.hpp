#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NegateInstruction_NegateSingle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NegateInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NegateInstruction_NegateSingle)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __NegateInstruction__NegateSingle;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__NegateInstruction__NegateSingle);
// Type: ::NegateSingle
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::NegateInstruction::NegateSingle*
class CORDL_TYPE __NegateInstruction__NegateSingle : public ::System::Linq::Expressions::Interpreter::NegateInstruction {
public:
  // Declarations
  static inline ::System::Linq::Expressions::Interpreter::__NegateInstruction__NegateSingle* New_ctor();

  /// @brief Method Run, addr 0x2c3f62c, size 0xb0, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x2c3f424, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NegateInstruction__NegateSingle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NegateInstruction__NegateSingle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NegateInstruction__NegateSingle(__NegateInstruction__NegateSingle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NegateInstruction__NegateSingle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NegateInstruction__NegateSingle(__NegateInstruction__NegateSingle const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__NegateInstruction__NegateSingle, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__NegateInstruction__NegateSingle);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__NegateInstruction__NegateSingle*, "System.Linq.Expressions.Interpreter", "NegateInstruction/NegateSingle");
