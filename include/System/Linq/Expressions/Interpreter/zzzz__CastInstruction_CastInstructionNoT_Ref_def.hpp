#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_CastInstructionNoT_def.hpp"
CORDL_MODULE_EXPORT(CastInstruction_CastInstructionNoT_Ref)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class __CastInstruction__CastInstructionNoT__Ref;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__CastInstruction__CastInstructionNoT__Ref);
// Type: ::Ref
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CastInstruction::CastInstructionNoT::Ref*
class CORDL_TYPE __CastInstruction__CastInstructionNoT__Ref : public ::System::Linq::Expressions::Interpreter::__CastInstruction__CastInstructionNoT {
public:
  // Declarations
  /// @brief Method ConvertNull, addr 0x2b4bc18, size 0x1c, virtual true, abstract: false, final false
  inline void ConvertNull(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  static inline ::GlobalNamespace::__CastInstruction__CastInstructionNoT__Ref* New_ctor(::System::Type* t);

  /// @brief Method .ctor, addr 0x2b4ba98, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* t);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CastInstruction__CastInstructionNoT__Ref();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CastInstruction__CastInstructionNoT__Ref", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CastInstruction__CastInstructionNoT__Ref(__CastInstruction__CastInstructionNoT__Ref&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CastInstruction__CastInstructionNoT__Ref", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CastInstruction__CastInstructionNoT__Ref(__CastInstruction__CastInstructionNoT__Ref const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CastInstruction__CastInstructionNoT__Ref, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::__CastInstruction__CastInstructionNoT__Ref);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CastInstruction__CastInstructionNoT__Ref*, "System.Linq.Expressions.Interpreter", "CastInstruction/CastInstructionNoT/Ref");
