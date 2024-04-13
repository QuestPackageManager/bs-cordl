#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NegateCheckedInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NegateCheckedInstruction_NegateCheckedInt64)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __NegateCheckedInstruction__NegateCheckedInt64;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__NegateCheckedInstruction__NegateCheckedInt64);
// Type: ::NegateCheckedInt64
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::NegateCheckedInstruction::NegateCheckedInt64*
class CORDL_TYPE __NegateCheckedInstruction__NegateCheckedInt64 : public ::System::Linq::Expressions::Interpreter::NegateCheckedInstruction {
public:
  // Declarations
  static inline ::System::Linq::Expressions::Interpreter::__NegateCheckedInstruction__NegateCheckedInt64* New_ctor();

  /// @brief Method Run, addr 0x2b43310, size 0x114, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x2b430ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NegateCheckedInstruction__NegateCheckedInt64();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NegateCheckedInstruction__NegateCheckedInt64", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NegateCheckedInstruction__NegateCheckedInt64(__NegateCheckedInstruction__NegateCheckedInt64&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NegateCheckedInstruction__NegateCheckedInt64", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NegateCheckedInstruction__NegateCheckedInt64(__NegateCheckedInstruction__NegateCheckedInt64 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__NegateCheckedInstruction__NegateCheckedInt64, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__NegateCheckedInstruction__NegateCheckedInt64);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__NegateCheckedInstruction__NegateCheckedInt64*, "System.Linq.Expressions.Interpreter", "NegateCheckedInstruction/NegateCheckedInt64");
