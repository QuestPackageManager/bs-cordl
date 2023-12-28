#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
CORDL_MODULE_EXPORT(CCDIK)
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion::FinalIK {
class IKSolverCCD;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class CCDIK;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::CCDIK);
// Type: RootMotion.FinalIK::CCDIK
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12536))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12532))
// CS Name: ::RootMotion.FinalIK::CCDIK*
class CORDL_TYPE CCDIK : public ::RootMotion::FinalIK::IK {
public:
  // Declarations
  /// @brief Field solver, offset 0x38, size 0x8
  __declspec(property(get = __get_solver, put = __set_solver))::RootMotion::FinalIK::IKSolverCCD* solver;

  constexpr ::RootMotion::FinalIK::IKSolverCCD*& __get_solver();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverCCD*> const& __get_solver() const;

  constexpr void __set_solver(::RootMotion::FinalIK::IKSolverCCD* value);

  /// @brief Method OpenUserManual addr 0x124e2d4 size 0x44 virtual true final false
  inline void OpenUserManual();

  /// @brief Method OpenScriptReference addr 0x124e318 size 0x44 virtual true final false
  inline void OpenScriptReference();

  /// @brief Method SupportGroup addr 0x124e35c size 0x44 virtual false final false
  inline void SupportGroup();

  /// @brief Method ASThread addr 0x124e3a0 size 0x44 virtual false final false
  inline void ASThread();

  /// @brief Method GetIKSolver addr 0x124e3e4 size 0x8 virtual true final false
  inline ::RootMotion::FinalIK::IKSolver* GetIKSolver();

  static inline ::RootMotion::FinalIK::CCDIK* New_ctor();

  /// @brief Method .ctor addr 0x124e3ec size 0x68 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CCDIK", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CCDIK(CCDIK&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CCDIK", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CCDIK(CCDIK const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CCDIK();

public:
  /// @brief Field solver, offset: 0x38, size: 0x8, def value: None
  ::RootMotion::FinalIK::IKSolverCCD* ___solver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::CCDIK, 0x40>, "Size mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::CCDIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::CCDIK*, "RootMotion.FinalIK", "CCDIK");
