#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
CORDL_MODULE_EXPORT(LookAtIK)
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion::FinalIK {
class IKSolverLookAt;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12536))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12540))
// CS Name: ::RootMotion.FinalIK::LookAtIK*
class CORDL_TYPE LookAtIK : public ::RootMotion::FinalIK::IK {
public:
  // Declarations
  /// @brief Field solver, offset 0x38, size 0x8
  __declspec(property(get = __get_solver, put = __set_solver))::RootMotion::FinalIK::IKSolverLookAt* solver;

  constexpr ::RootMotion::FinalIK::IKSolverLookAt*& __get_solver();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverLookAt*> const& __get_solver() const;

  constexpr void __set_solver(::RootMotion::FinalIK::IKSolverLookAt* value);

  /// @brief Method OpenUserManual addr 0x124f794 size 0x44 virtual true final false
  inline void OpenUserManual();

  /// @brief Method OpenScriptReference addr 0x124f7d8 size 0x44 virtual true final false
  inline void OpenScriptReference();

  /// @brief Method SupportGroup addr 0x124f81c size 0x44 virtual false final false
  inline void SupportGroup();

  /// @brief Method ASThread addr 0x124f860 size 0x44 virtual false final false
  inline void ASThread();

  /// @brief Method GetIKSolver addr 0x124f8a4 size 0x8 virtual true final false
  inline ::RootMotion::FinalIK::IKSolver* GetIKSolver();

  static inline ::RootMotion::FinalIK::LookAtIK* New_ctor();

  /// @brief Method .ctor addr 0x124f8ac size 0x68 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LookAtIK", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LookAtIK(LookAtIK&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LookAtIK", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LookAtIK(LookAtIK const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LookAtIK();

public:
  /// @brief Field solver, offset: 0x38, size: 0x8, def value: None
  ::RootMotion::FinalIK::IKSolverLookAt* ___solver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::LookAtIK, 0x40>, "Size mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::LookAtIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::LookAtIK*, "RootMotion.FinalIK", "LookAtIK");
