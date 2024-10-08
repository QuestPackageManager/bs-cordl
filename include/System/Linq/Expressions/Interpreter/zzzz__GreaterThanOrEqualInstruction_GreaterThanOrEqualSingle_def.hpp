#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanOrEqualInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __GreaterThanOrEqualInstruction__GreaterThanOrEqualSingle;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__GreaterThanOrEqualInstruction__GreaterThanOrEqualSingle);
// Type: ::GreaterThanOrEqualSingle
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::GreaterThanOrEqualInstruction::GreaterThanOrEqualSingle*
class CORDL_TYPE __GreaterThanOrEqualInstruction__GreaterThanOrEqualSingle : public ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction {
public:
  // Declarations
  static inline ::System::Linq::Expressions::Interpreter::__GreaterThanOrEqualInstruction__GreaterThanOrEqualSingle* New_ctor(::System::Object* nullValue);

  /// @brief Method Run, addr 0x4055f18, size 0xe4, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x405570c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* nullValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GreaterThanOrEqualInstruction__GreaterThanOrEqualSingle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GreaterThanOrEqualInstruction__GreaterThanOrEqualSingle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GreaterThanOrEqualInstruction__GreaterThanOrEqualSingle(__GreaterThanOrEqualInstruction__GreaterThanOrEqualSingle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GreaterThanOrEqualInstruction__GreaterThanOrEqualSingle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GreaterThanOrEqualInstruction__GreaterThanOrEqualSingle(__GreaterThanOrEqualInstruction__GreaterThanOrEqualSingle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13836 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__GreaterThanOrEqualInstruction__GreaterThanOrEqualSingle, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__GreaterThanOrEqualInstruction__GreaterThanOrEqualSingle);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__GreaterThanOrEqualInstruction__GreaterThanOrEqualSingle*, "System.Linq.Expressions.Interpreter",
                       "GreaterThanOrEqualInstruction/GreaterThanOrEqualSingle");
