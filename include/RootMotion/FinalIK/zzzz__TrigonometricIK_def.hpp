#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
CORDL_MODULE_EXPORT(TrigonometricIK)
namespace RootMotion::FinalIK {
class IKSolverTrigonometric;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class TrigonometricIK;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::TrigonometricIK);
// Type: RootMotion.FinalIK::TrigonometricIK
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12536))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12541))
// CS Name: ::RootMotion.FinalIK::TrigonometricIK*
class CORDL_TYPE TrigonometricIK : public ::RootMotion::FinalIK::IK {
public:
  // Declarations
  /// @brief Field solver, offset 0x38, size 0x8
  __declspec(property(get = __get_solver, put = __set_solver))::RootMotion::FinalIK::IKSolverTrigonometric* solver;

  constexpr ::RootMotion::FinalIK::IKSolverTrigonometric*& __get_solver();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverTrigonometric*> const& __get_solver() const;

  constexpr void __set_solver(::RootMotion::FinalIK::IKSolverTrigonometric* value);

  /// @brief Method OpenUserManual, addr 0x124f914, size 0x44, virtual true, abstract: false, final false
  inline void OpenUserManual();

  /// @brief Method OpenScriptReference, addr 0x124f958, size 0x44, virtual true, abstract: false, final false
  inline void OpenScriptReference();

  /// @brief Method SupportGroup, addr 0x124f99c, size 0x44, virtual false, abstract: false, final false
  inline void SupportGroup();

  /// @brief Method ASThread, addr 0x124f9e0, size 0x44, virtual false, abstract: false, final false
  inline void ASThread();

  /// @brief Method GetIKSolver, addr 0x124fa24, size 0x8, virtual true, abstract: false, final false
  inline ::RootMotion::FinalIK::IKSolver* GetIKSolver();

  static inline ::RootMotion::FinalIK::TrigonometricIK* New_ctor();

  /// @brief Method .ctor, addr 0x124fa2c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TrigonometricIK", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrigonometricIK(TrigonometricIK&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrigonometricIK", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrigonometricIK(TrigonometricIK const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrigonometricIK();

public:
  /// @brief Field solver, offset: 0x38, size: 0x8, def value: None
  ::RootMotion::FinalIK::IKSolverTrigonometric* ___solver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::TrigonometricIK, 0x40>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::TrigonometricIK, ___solver) == 0x38, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::TrigonometricIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::TrigonometricIK*, "RootMotion.FinalIK", "TrigonometricIK");
