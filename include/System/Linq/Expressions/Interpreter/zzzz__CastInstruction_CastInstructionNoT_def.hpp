#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CastInstruction_CastInstructionNoT)
namespace GlobalNamespace {
class __CastInstruction__CastInstructionNoT__Ref;
}
namespace GlobalNamespace {
class __CastInstruction__CastInstructionNoT__Value;
}
namespace System::Linq::Expressions::Interpreter {
class CastInstruction;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __CastInstruction__CastInstructionNoT;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__CastInstruction__CastInstructionNoT);
// Type: ::CastInstructionNoT
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::CastInstruction::CastInstructionNoT*
class CORDL_TYPE __CastInstruction__CastInstructionNoT : public ::System::Linq::Expressions::Interpreter::CastInstruction {
public:
  // Declarations
  using Ref = ::GlobalNamespace::__CastInstruction__CastInstructionNoT__Ref;

  using Value = ::GlobalNamespace::__CastInstruction__CastInstructionNoT__Value;

  /// @brief Field _t, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__t, put = __cordl_internal_set__t))::System::Type* _t;

  /// @brief Method ConvertNull, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ConvertNull(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method Create, addr 0x2b4b978, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::CastInstruction* Create(::System::Type* t);

  static inline ::System::Linq::Expressions::Interpreter::__CastInstruction__CastInstructionNoT* New_ctor(::System::Type* t);

  /// @brief Method Run, addr 0x2b4bac0, size 0x158, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr ::System::Type*& __cordl_internal_get__t();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__t() const;

  constexpr void __cordl_internal_set__t(::System::Type* value);

  /// @brief Method .ctor, addr 0x2b4ba48, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* t);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CastInstruction__CastInstructionNoT();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CastInstruction__CastInstructionNoT", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CastInstruction__CastInstructionNoT(__CastInstruction__CastInstructionNoT&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CastInstruction__CastInstructionNoT", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CastInstruction__CastInstructionNoT(__CastInstruction__CastInstructionNoT const&) = delete;

  /// @brief Field _t, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____t;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__CastInstruction__CastInstructionNoT, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::__CastInstruction__CastInstructionNoT, ____t) == 0x10, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__CastInstruction__CastInstructionNoT);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__CastInstruction__CastInstructionNoT*, "System.Linq.Expressions.Interpreter", "CastInstruction/CastInstructionNoT");
