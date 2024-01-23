#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/zzzz__SolverManager_def.hpp"
CORDL_MODULE_EXPORT(IK)
namespace RootMotion::FinalIK {
class IKSolver;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IK;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IK);
// Type: RootMotion.FinalIK::IK
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 51, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12499))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12536))
// CS Name: ::RootMotion.FinalIK::IK*
class CORDL_TYPE IK : public ::RootMotion::SolverManager {
public:
  // Declarations
  /// @brief Method GetIKSolver, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::RootMotion::FinalIK::IKSolver* GetIKSolver();

  /// @brief Method UpdateSolver, addr 0x124f114, size 0x78, virtual true, abstract: false, final false
  inline void UpdateSolver();

  /// @brief Method InitiateSolver, addr 0x124f18c, size 0x70, virtual true, abstract: false, final false
  inline void InitiateSolver();

  /// @brief Method FixTransforms, addr 0x124f1fc, size 0x50, virtual true, abstract: false, final false
  inline void FixTransforms();

  /// @brief Method OpenUserManual, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OpenUserManual();

  /// @brief Method OpenScriptReference, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OpenScriptReference();

  static inline ::RootMotion::FinalIK::IK* New_ctor();

  /// @brief Method .ctor, addr 0x124e14c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IK", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IK(IK&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IK", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IK(IK const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IK();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IK, 0x38>, "Size mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IK*, "RootMotion.FinalIK", "IK");
