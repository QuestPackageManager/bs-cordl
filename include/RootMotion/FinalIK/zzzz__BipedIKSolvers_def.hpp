#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(BipedIKSolvers)
namespace RootMotion::FinalIK {
class IKSolverLimb;
}
namespace RootMotion {
class BipedReferences;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion::FinalIK {
class IKSolverAim;
}
namespace RootMotion::FinalIK {
class Constraints;
}
namespace RootMotion::FinalIK {
class IKSolverLookAt;
}
namespace RootMotion::FinalIK {
class IKSolverFABRIK;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class BipedIKSolvers;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::BipedIKSolvers);
// Type: RootMotion.FinalIK::BipedIKSolvers
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12507))
// CS Name: ::RootMotion.FinalIK::BipedIKSolvers*
class CORDL_TYPE BipedIKSolvers : public ::System::Object {
public:
  // Declarations
  /// @brief Field leftFoot, offset 0x10, size 0x8
  __declspec(property(get = __get_leftFoot, put = __set_leftFoot))::RootMotion::FinalIK::IKSolverLimb* leftFoot;

  /// @brief Field rightFoot, offset 0x18, size 0x8
  __declspec(property(get = __get_rightFoot, put = __set_rightFoot))::RootMotion::FinalIK::IKSolverLimb* rightFoot;

  /// @brief Field leftHand, offset 0x20, size 0x8
  __declspec(property(get = __get_leftHand, put = __set_leftHand))::RootMotion::FinalIK::IKSolverLimb* leftHand;

  /// @brief Field rightHand, offset 0x28, size 0x8
  __declspec(property(get = __get_rightHand, put = __set_rightHand))::RootMotion::FinalIK::IKSolverLimb* rightHand;

  /// @brief Field spine, offset 0x30, size 0x8
  __declspec(property(get = __get_spine, put = __set_spine))::RootMotion::FinalIK::IKSolverFABRIK* spine;

  /// @brief Field lookAt, offset 0x38, size 0x8
  __declspec(property(get = __get_lookAt, put = __set_lookAt))::RootMotion::FinalIK::IKSolverLookAt* lookAt;

  /// @brief Field aim, offset 0x40, size 0x8
  __declspec(property(get = __get_aim, put = __set_aim))::RootMotion::FinalIK::IKSolverAim* aim;

  /// @brief Field pelvis, offset 0x48, size 0x8
  __declspec(property(get = __get_pelvis, put = __set_pelvis))::RootMotion::FinalIK::Constraints* pelvis;

  /// @brief Field _limbs, offset 0x50, size 0x8
  __declspec(property(get = __get__limbs, put = __set__limbs))::ArrayW<::RootMotion::FinalIK::IKSolverLimb*, ::Array<::RootMotion::FinalIK::IKSolverLimb*>*> _limbs;

  /// @brief Field _ikSolvers, offset 0x58, size 0x8
  __declspec(property(get = __get__ikSolvers, put = __set__ikSolvers))::ArrayW<::RootMotion::FinalIK::IKSolver*, ::Array<::RootMotion::FinalIK::IKSolver*>*> _ikSolvers;

  __declspec(property(get = get_limbs))::ArrayW<::RootMotion::FinalIK::IKSolverLimb*, ::Array<::RootMotion::FinalIK::IKSolverLimb*>*> limbs;

  __declspec(property(get = get_ikSolvers))::ArrayW<::RootMotion::FinalIK::IKSolver*, ::Array<::RootMotion::FinalIK::IKSolver*>*> ikSolvers;

  constexpr ::RootMotion::FinalIK::IKSolverLimb*& __get_leftFoot();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverLimb*> const& __get_leftFoot() const;

  constexpr void __set_leftFoot(::RootMotion::FinalIK::IKSolverLimb* value);

  constexpr ::RootMotion::FinalIK::IKSolverLimb*& __get_rightFoot();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverLimb*> const& __get_rightFoot() const;

  constexpr void __set_rightFoot(::RootMotion::FinalIK::IKSolverLimb* value);

  constexpr ::RootMotion::FinalIK::IKSolverLimb*& __get_leftHand();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverLimb*> const& __get_leftHand() const;

  constexpr void __set_leftHand(::RootMotion::FinalIK::IKSolverLimb* value);

  constexpr ::RootMotion::FinalIK::IKSolverLimb*& __get_rightHand();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverLimb*> const& __get_rightHand() const;

  constexpr void __set_rightHand(::RootMotion::FinalIK::IKSolverLimb* value);

  constexpr ::RootMotion::FinalIK::IKSolverFABRIK*& __get_spine();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverFABRIK*> const& __get_spine() const;

  constexpr void __set_spine(::RootMotion::FinalIK::IKSolverFABRIK* value);

  constexpr ::RootMotion::FinalIK::IKSolverLookAt*& __get_lookAt();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverLookAt*> const& __get_lookAt() const;

  constexpr void __set_lookAt(::RootMotion::FinalIK::IKSolverLookAt* value);

  constexpr ::RootMotion::FinalIK::IKSolverAim*& __get_aim();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverAim*> const& __get_aim() const;

  constexpr void __set_aim(::RootMotion::FinalIK::IKSolverAim* value);

  constexpr ::RootMotion::FinalIK::Constraints*& __get_pelvis();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::Constraints*> const& __get_pelvis() const;

  constexpr void __set_pelvis(::RootMotion::FinalIK::Constraints* value);

  constexpr ::ArrayW<::RootMotion::FinalIK::IKSolverLimb*, ::Array<::RootMotion::FinalIK::IKSolverLimb*>*>& __get__limbs();

  constexpr ::ArrayW<::RootMotion::FinalIK::IKSolverLimb*, ::Array<::RootMotion::FinalIK::IKSolverLimb*>*> const& __get__limbs() const;

  constexpr void __set__limbs(::ArrayW<::RootMotion::FinalIK::IKSolverLimb*, ::Array<::RootMotion::FinalIK::IKSolverLimb*>*> value);

  constexpr ::ArrayW<::RootMotion::FinalIK::IKSolver*, ::Array<::RootMotion::FinalIK::IKSolver*>*>& __get__ikSolvers();

  constexpr ::ArrayW<::RootMotion::FinalIK::IKSolver*, ::Array<::RootMotion::FinalIK::IKSolver*>*> const& __get__ikSolvers() const;

  constexpr void __set__ikSolvers(::ArrayW<::RootMotion::FinalIK::IKSolver*, ::Array<::RootMotion::FinalIK::IKSolver*>*> value);

  /// @brief Method get_limbs, addr 0x1241930, size 0x130, virtual false, abstract: false, final false
  inline ::ArrayW<::RootMotion::FinalIK::IKSolverLimb*, ::Array<::RootMotion::FinalIK::IKSolverLimb*>*> get_limbs();

  /// @brief Method get_ikSolvers, addr 0x12424d0, size 0x1b4, virtual false, abstract: false, final false
  inline ::ArrayW<::RootMotion::FinalIK::IKSolver*, ::Array<::RootMotion::FinalIK::IKSolver*>*> get_ikSolvers();

  /// @brief Method AssignReferences, addr 0x1241cac, size 0x120, virtual false, abstract: false, final false
  inline void AssignReferences(::RootMotion::BipedReferences* references);

  static inline ::RootMotion::FinalIK::BipedIKSolvers* New_ctor();

  /// @brief Method .ctor, addr 0x1242344, size 0x18c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BipedIKSolvers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BipedIKSolvers(BipedIKSolvers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BipedIKSolvers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BipedIKSolvers(BipedIKSolvers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BipedIKSolvers();

public:
  /// @brief Field leftFoot, offset: 0x10, size: 0x8, def value: None
  ::RootMotion::FinalIK::IKSolverLimb* ___leftFoot;

  /// @brief Field rightFoot, offset: 0x18, size: 0x8, def value: None
  ::RootMotion::FinalIK::IKSolverLimb* ___rightFoot;

  /// @brief Field leftHand, offset: 0x20, size: 0x8, def value: None
  ::RootMotion::FinalIK::IKSolverLimb* ___leftHand;

  /// @brief Field rightHand, offset: 0x28, size: 0x8, def value: None
  ::RootMotion::FinalIK::IKSolverLimb* ___rightHand;

  /// @brief Field spine, offset: 0x30, size: 0x8, def value: None
  ::RootMotion::FinalIK::IKSolverFABRIK* ___spine;

  /// @brief Field lookAt, offset: 0x38, size: 0x8, def value: None
  ::RootMotion::FinalIK::IKSolverLookAt* ___lookAt;

  /// @brief Field aim, offset: 0x40, size: 0x8, def value: None
  ::RootMotion::FinalIK::IKSolverAim* ___aim;

  /// @brief Field pelvis, offset: 0x48, size: 0x8, def value: None
  ::RootMotion::FinalIK::Constraints* ___pelvis;

  /// @brief Field _limbs, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::IKSolverLimb*, ::Array<::RootMotion::FinalIK::IKSolverLimb*>*> ____limbs;

  /// @brief Field _ikSolvers, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::IKSolver*, ::Array<::RootMotion::FinalIK::IKSolver*>*> ____ikSolvers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::BipedIKSolvers, 0x60>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::BipedIKSolvers, ___leftFoot) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::BipedIKSolvers, ___rightFoot) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::BipedIKSolvers, ___leftHand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::BipedIKSolvers, ___rightHand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::BipedIKSolvers, ___spine) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::BipedIKSolvers, ___lookAt) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::BipedIKSolvers, ___aim) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::BipedIKSolvers, ___pelvis) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::BipedIKSolvers, ____limbs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::BipedIKSolvers, ____ikSolvers) == 0x58, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::BipedIKSolvers);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::BipedIKSolvers*, "RootMotion.FinalIK", "BipedIKSolvers");
