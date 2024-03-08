#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
CORDL_MODULE_EXPORT(AimIK)
namespace RootMotion::FinalIK {
class IKSolverAim;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class AimIK;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::AimIK);
// Type: RootMotion.FinalIK::AimIK
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::AimIK*
class CORDL_TYPE AimIK : public ::RootMotion::FinalIK::IK {
public:
  // Declarations
  /// @brief Field solver, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_solver, put = __cordl_internal_set_solver))::RootMotion::FinalIK::IKSolverAim* solver;

  /// @brief Method ASThread, addr 0x135268c, size 0x44, virtual false, abstract: false, final false
  inline void ASThread();

  /// @brief Method GetIKSolver, addr 0x13526d0, size 0x8, virtual true, abstract: false, final false
  inline ::RootMotion::FinalIK::IKSolver* GetIKSolver();

  static inline ::RootMotion::FinalIK::AimIK* New_ctor();

  /// @brief Method OpenScriptReference, addr 0x13525c0, size 0x44, virtual true, abstract: false, final false
  inline void OpenScriptReference();

  /// @brief Method OpenSetupTutorial, addr 0x1352604, size 0x44, virtual false, abstract: false, final false
  inline void OpenSetupTutorial();

  /// @brief Method OpenUserManual, addr 0x135257c, size 0x44, virtual true, abstract: false, final false
  inline void OpenUserManual();

  /// @brief Method SupportGroup, addr 0x1352648, size 0x44, virtual false, abstract: false, final false
  inline void SupportGroup();

  constexpr ::RootMotion::FinalIK::IKSolverAim*& __cordl_internal_get_solver();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverAim*> const& __cordl_internal_get_solver() const;

  constexpr void __cordl_internal_set_solver(::RootMotion::FinalIK::IKSolverAim* value);

  /// @brief Method .ctor, addr 0x13526d8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AimIK();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AimIK", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AimIK(AimIK&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AimIK", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AimIK(AimIK const&) = delete;

  /// @brief Field solver, offset: 0x38, size: 0x8, def value: None
  ::RootMotion::FinalIK::IKSolverAim* ___solver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::AimIK, 0x40>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::AimIK, ___solver) == 0x38, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::AimIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::AimIK*, "RootMotion.FinalIK", "AimIK");
