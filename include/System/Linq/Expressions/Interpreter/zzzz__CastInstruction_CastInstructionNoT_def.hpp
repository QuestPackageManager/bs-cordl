#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/CastInstruction_CastInstructionNoT.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CastInstruction_CastInstructionNoT)
namespace GlobalNamespace {
class CastInstructionNoT_CastInstruction_Ref;
}
namespace GlobalNamespace {
class CastInstructionNoT_CastInstruction_Value;
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
namespace GlobalNamespace {
class CastInstruction_CastInstructionNoT;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CastInstruction_CastInstructionNoT);
// Dependencies System.Linq.Expressions.Interpreter.CastInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.CastInstruction/CastInstructionNoT
class CORDL_TYPE CastInstruction_CastInstructionNoT : public ::System::Linq::Expressions::Interpreter::CastInstruction {
public:
  // Declarations
  using Ref = ::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref;

  using Value = ::GlobalNamespace::CastInstructionNoT_CastInstruction_Value;

  /// @brief Field _t, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__t, put = __cordl_internal_set__t)) ::System::Type* _t;

  /// @brief Method ConvertNull, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ConvertNull(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method Create, addr 0x40f9628, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::CastInstruction* Create(::System::Type* t);

  static inline ::GlobalNamespace::CastInstruction_CastInstructionNoT* New_ctor(::System::Type* t);

  /// @brief Method Run, addr 0x40f9768, size 0x150, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr ::System::Type* const& __cordl_internal_get__t() const;

  constexpr ::System::Type*& __cordl_internal_get__t();

  constexpr void __cordl_internal_set__t(::System::Type* value);

  /// @brief Method .ctor, addr 0x40f96f0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* t);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CastInstruction_CastInstructionNoT();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CastInstruction_CastInstructionNoT", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CastInstruction_CastInstructionNoT(CastInstruction_CastInstructionNoT&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CastInstruction_CastInstructionNoT", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CastInstruction_CastInstructionNoT(CastInstruction_CastInstructionNoT const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14119 };

  /// @brief Field _t, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____t;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CastInstruction_CastInstructionNoT, ____t) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CastInstruction_CastInstructionNoT, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CastInstruction_CastInstructionNoT);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CastInstruction_CastInstructionNoT*, "System.Linq.Expressions.Interpreter", "CastInstruction/CastInstructionNoT");
