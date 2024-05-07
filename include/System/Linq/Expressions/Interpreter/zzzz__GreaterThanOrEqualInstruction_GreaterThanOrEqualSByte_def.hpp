#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanOrEqualInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __GreaterThanOrEqualInstruction__GreaterThanOrEqualSByte;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__GreaterThanOrEqualInstruction__GreaterThanOrEqualSByte);
// Type: ::GreaterThanOrEqualSByte
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::GreaterThanOrEqualInstruction::GreaterThanOrEqualSByte*
class CORDL_TYPE __GreaterThanOrEqualInstruction__GreaterThanOrEqualSByte : public ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction {
public:
  // Declarations
  static inline ::System::Linq::Expressions::Interpreter::__GreaterThanOrEqualInstruction__GreaterThanOrEqualSByte* New_ctor(::System::Object* nullValue);

  /// @brief Method Run, addr 0x2c1d420, size 0xdc, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x2c1d268, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* nullValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GreaterThanOrEqualInstruction__GreaterThanOrEqualSByte();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GreaterThanOrEqualInstruction__GreaterThanOrEqualSByte", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GreaterThanOrEqualInstruction__GreaterThanOrEqualSByte(__GreaterThanOrEqualInstruction__GreaterThanOrEqualSByte&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GreaterThanOrEqualInstruction__GreaterThanOrEqualSByte", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GreaterThanOrEqualInstruction__GreaterThanOrEqualSByte(__GreaterThanOrEqualInstruction__GreaterThanOrEqualSByte const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__GreaterThanOrEqualInstruction__GreaterThanOrEqualSByte, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__GreaterThanOrEqualInstruction__GreaterThanOrEqualSByte);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__GreaterThanOrEqualInstruction__GreaterThanOrEqualSByte*, "System.Linq.Expressions.Interpreter",
                       "GreaterThanOrEqualInstruction/GreaterThanOrEqualSByte");
