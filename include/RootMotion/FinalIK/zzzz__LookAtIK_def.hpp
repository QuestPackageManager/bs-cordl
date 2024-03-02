#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
CORDL_MODULE_EXPORT(LookAtIK)
namespace RootMotion::FinalIK {
class IKSolverLookAt;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class LookAtIK;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::LookAtIK);
// Type: RootMotion.FinalIK::LookAtIK
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::LookAtIK*
class CORDL_TYPE LookAtIK : public ::RootMotion::FinalIK::IK {
public:
  // Declarations
  /// @brief Field solver, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_solver, put = __cordl_internal_set_solver))::RootMotion::FinalIK::IKSolverLookAt* solver;

  /// @brief Method ASThread, addr 0x132b8fc, size 0x44, virtual false, abstract: false, final false
  inline void ASThread();

  /// @brief Method GetIKSolver, addr 0x132b940, size 0x8, virtual true, abstract: false, final false
  inline ::RootMotion::FinalIK::IKSolver* GetIKSolver();

  static inline ::RootMotion::FinalIK::LookAtIK* New_ctor();

  /// @brief Method OpenScriptReference, addr 0x132b874, size 0x44, virtual true, abstract: false, final false
  inline void OpenScriptReference();

  /// @brief Method OpenUserManual, addr 0x132b830, size 0x44, virtual true, abstract: false, final false
  inline void OpenUserManual();

  /// @brief Method SupportGroup, addr 0x132b8b8, size 0x44, virtual false, abstract: false, final false
  inline void SupportGroup();

  constexpr ::RootMotion::FinalIK::IKSolverLookAt*& __cordl_internal_get_solver();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverLookAt*> const& __cordl_internal_get_solver() const;

  constexpr void __cordl_internal_set_solver(::RootMotion::FinalIK::IKSolverLookAt* value);

  /// @brief Method .ctor, addr 0x132b948, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LookAtIK();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LookAtIK", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LookAtIK(LookAtIK&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LookAtIK", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LookAtIK(LookAtIK const&) = delete;

  /// @brief Field solver, offset: 0x38, size: 0x8, def value: None
  ::RootMotion::FinalIK::IKSolverLookAt* ___solver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::LookAtIK, 0x40>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::LookAtIK, ___solver) == 0x38, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::LookAtIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::LookAtIK*, "RootMotion.FinalIK", "LookAtIK");
