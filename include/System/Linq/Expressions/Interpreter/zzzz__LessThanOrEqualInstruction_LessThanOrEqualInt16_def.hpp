#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__LessThanOrEqualInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LessThanOrEqualInstruction_LessThanOrEqualInt16)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __LessThanOrEqualInstruction__LessThanOrEqualInt16;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualInt16);
// Type: ::LessThanOrEqualInt16
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::LessThanOrEqualInstruction::LessThanOrEqualInt16*
class CORDL_TYPE __LessThanOrEqualInstruction__LessThanOrEqualInt16 : public ::System::Linq::Expressions::Interpreter::LessThanOrEqualInstruction {
public:
  // Declarations
  static inline ::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualInt16* New_ctor(::System::Object* nullValue);

  /// @brief Method Run, addr 0x2c27e24, size 0xdc, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x2c27bb8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* nullValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LessThanOrEqualInstruction__LessThanOrEqualInt16();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LessThanOrEqualInstruction__LessThanOrEqualInt16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LessThanOrEqualInstruction__LessThanOrEqualInt16(__LessThanOrEqualInstruction__LessThanOrEqualInt16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LessThanOrEqualInstruction__LessThanOrEqualInt16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LessThanOrEqualInstruction__LessThanOrEqualInt16(__LessThanOrEqualInstruction__LessThanOrEqualInt16 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualInt16, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualInt16);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualInt16*, "System.Linq.Expressions.Interpreter",
                       "LessThanOrEqualInstruction/LessThanOrEqualInt16");
