#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
CORDL_MODULE_EXPORT(LegIK)
namespace RootMotion::FinalIK {
class IKSolverLeg;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class LegIK;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::LegIK);
// Type: RootMotion.FinalIK::LegIK
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::LegIK*
class CORDL_TYPE LegIK : public ::RootMotion::FinalIK::IK {
public:
  // Declarations
  /// @brief Field solver, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_solver, put = __cordl_internal_set_solver))::RootMotion::FinalIK::IKSolverLeg* solver;

  /// @brief Method ASThread, addr 0x1353b54, size 0x44, virtual false, abstract: false, final false
  inline void ASThread();

  /// @brief Method GetIKSolver, addr 0x1353b98, size 0x8, virtual true, abstract: false, final false
  inline ::RootMotion::FinalIK::IKSolver* GetIKSolver();

  static inline ::RootMotion::FinalIK::LegIK* New_ctor();

  /// @brief Method OpenScriptReference, addr 0x1353acc, size 0x44, virtual true, abstract: false, final false
  inline void OpenScriptReference();

  /// @brief Method OpenUserManual, addr 0x1353a88, size 0x44, virtual true, abstract: false, final false
  inline void OpenUserManual();

  /// @brief Method SupportGroup, addr 0x1353b10, size 0x44, virtual false, abstract: false, final false
  inline void SupportGroup();

  constexpr ::RootMotion::FinalIK::IKSolverLeg*& __cordl_internal_get_solver();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverLeg*> const& __cordl_internal_get_solver() const;

  constexpr void __cordl_internal_set_solver(::RootMotion::FinalIK::IKSolverLeg* value);

  /// @brief Method .ctor, addr 0x1353ba0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LegIK();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LegIK", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LegIK(LegIK&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LegIK", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LegIK(LegIK const&) = delete;

  /// @brief Field solver, offset: 0x38, size: 0x8, def value: None
  ::RootMotion::FinalIK::IKSolverLeg* ___solver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::LegIK, 0x40>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::LegIK, ___solver) == 0x38, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::LegIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::LegIK*, "RootMotion.FinalIK", "LegIK");
