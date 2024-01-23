#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
CORDL_MODULE_EXPORT(LimbIK)
namespace RootMotion::FinalIK {
class IKSolverLimb;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class LimbIK;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::LimbIK);
// Type: RootMotion.FinalIK::LimbIK
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12536))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12539))
// CS Name: ::RootMotion.FinalIK::LimbIK*
class CORDL_TYPE LimbIK : public ::RootMotion::FinalIK::IK {
public:
  // Declarations
  /// @brief Field solver, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_solver, put = __cordl_internal_set_solver))::RootMotion::FinalIK::IKSolverLimb* solver;

  constexpr ::RootMotion::FinalIK::IKSolverLimb*& __cordl_internal_get_solver();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverLimb*> const& __cordl_internal_get_solver() const;

  constexpr void __cordl_internal_set_solver(::RootMotion::FinalIK::IKSolverLimb* value);

  /// @brief Method OpenUserManual, addr 0x124f614, size 0x44, virtual true, abstract: false, final false
  inline void OpenUserManual();

  /// @brief Method OpenScriptReference, addr 0x124f658, size 0x44, virtual true, abstract: false, final false
  inline void OpenScriptReference();

  /// @brief Method SupportGroup, addr 0x124f69c, size 0x44, virtual false, abstract: false, final false
  inline void SupportGroup();

  /// @brief Method ASThread, addr 0x124f6e0, size 0x44, virtual false, abstract: false, final false
  inline void ASThread();

  /// @brief Method GetIKSolver, addr 0x124f724, size 0x8, virtual true, abstract: false, final false
  inline ::RootMotion::FinalIK::IKSolver* GetIKSolver();

  static inline ::RootMotion::FinalIK::LimbIK* New_ctor();

  /// @brief Method .ctor, addr 0x124f72c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LimbIK", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LimbIK(LimbIK&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LimbIK", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LimbIK(LimbIK const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LimbIK();

public:
  /// @brief Field solver, offset: 0x38, size: 0x8, def value: None
  ::RootMotion::FinalIK::IKSolverLimb* ___solver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::LimbIK, 0x40>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::LimbIK, ___solver) == 0x38, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::LimbIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::LimbIK*, "RootMotion.FinalIK", "LimbIK");
