#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(VRIK)
namespace RootMotion::FinalIK {
class IKSolverVR;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion::FinalIK {
class __VRIK__References;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class VRIK;
}
namespace RootMotion::FinalIK {
class __VRIK__References;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::VRIK);
MARK_REF_PTR_T(::RootMotion::FinalIK::__VRIK__References);
// Type: ::References
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12470))
// CS Name: ::VRIK::References*
class CORDL_TYPE __VRIK__References : public ::System::Object {
public:
  // Declarations
  /// @brief Field root, offset 0x10, size 0x8
  __declspec(property(get = __get_root, put = __set_root))::UnityEngine::Transform* root;

  /// @brief Field pelvis, offset 0x18, size 0x8
  __declspec(property(get = __get_pelvis, put = __set_pelvis))::UnityEngine::Transform* pelvis;

  /// @brief Field spine, offset 0x20, size 0x8
  __declspec(property(get = __get_spine, put = __set_spine))::UnityEngine::Transform* spine;

  /// @brief Field chest, offset 0x28, size 0x8
  __declspec(property(get = __get_chest, put = __set_chest))::UnityEngine::Transform* chest;

  /// @brief Field neck, offset 0x30, size 0x8
  __declspec(property(get = __get_neck, put = __set_neck))::UnityEngine::Transform* neck;

  /// @brief Field head, offset 0x38, size 0x8
  __declspec(property(get = __get_head, put = __set_head))::UnityEngine::Transform* head;

  /// @brief Field leftShoulder, offset 0x40, size 0x8
  __declspec(property(get = __get_leftShoulder, put = __set_leftShoulder))::UnityEngine::Transform* leftShoulder;

  /// @brief Field leftUpperArm, offset 0x48, size 0x8
  __declspec(property(get = __get_leftUpperArm, put = __set_leftUpperArm))::UnityEngine::Transform* leftUpperArm;

  /// @brief Field leftForearm, offset 0x50, size 0x8
  __declspec(property(get = __get_leftForearm, put = __set_leftForearm))::UnityEngine::Transform* leftForearm;

  /// @brief Field leftHand, offset 0x58, size 0x8
  __declspec(property(get = __get_leftHand, put = __set_leftHand))::UnityEngine::Transform* leftHand;

  /// @brief Field rightShoulder, offset 0x60, size 0x8
  __declspec(property(get = __get_rightShoulder, put = __set_rightShoulder))::UnityEngine::Transform* rightShoulder;

  /// @brief Field rightUpperArm, offset 0x68, size 0x8
  __declspec(property(get = __get_rightUpperArm, put = __set_rightUpperArm))::UnityEngine::Transform* rightUpperArm;

  /// @brief Field rightForearm, offset 0x70, size 0x8
  __declspec(property(get = __get_rightForearm, put = __set_rightForearm))::UnityEngine::Transform* rightForearm;

  /// @brief Field rightHand, offset 0x78, size 0x8
  __declspec(property(get = __get_rightHand, put = __set_rightHand))::UnityEngine::Transform* rightHand;

  /// @brief Field leftThigh, offset 0x80, size 0x8
  __declspec(property(get = __get_leftThigh, put = __set_leftThigh))::UnityEngine::Transform* leftThigh;

  /// @brief Field leftCalf, offset 0x88, size 0x8
  __declspec(property(get = __get_leftCalf, put = __set_leftCalf))::UnityEngine::Transform* leftCalf;

  /// @brief Field leftFoot, offset 0x90, size 0x8
  __declspec(property(get = __get_leftFoot, put = __set_leftFoot))::UnityEngine::Transform* leftFoot;

  /// @brief Field leftToes, offset 0x98, size 0x8
  __declspec(property(get = __get_leftToes, put = __set_leftToes))::UnityEngine::Transform* leftToes;

  /// @brief Field rightThigh, offset 0xa0, size 0x8
  __declspec(property(get = __get_rightThigh, put = __set_rightThigh))::UnityEngine::Transform* rightThigh;

  /// @brief Field rightCalf, offset 0xa8, size 0x8
  __declspec(property(get = __get_rightCalf, put = __set_rightCalf))::UnityEngine::Transform* rightCalf;

  /// @brief Field rightFoot, offset 0xb0, size 0x8
  __declspec(property(get = __get_rightFoot, put = __set_rightFoot))::UnityEngine::Transform* rightFoot;

  /// @brief Field rightToes, offset 0xb8, size 0x8
  __declspec(property(get = __get_rightToes, put = __set_rightToes))::UnityEngine::Transform* rightToes;

  __declspec(property(get = get_isFilled)) bool isFilled;

  __declspec(property(get = get_isEmpty)) bool isEmpty;

  constexpr ::UnityEngine::Transform*& __get_root();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_root() const;

  constexpr void __set_root(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_pelvis();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_pelvis() const;

  constexpr void __set_pelvis(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_spine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_spine() const;

  constexpr void __set_spine(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_chest();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_chest() const;

  constexpr void __set_chest(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_neck();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_neck() const;

  constexpr void __set_neck(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_head();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_head() const;

  constexpr void __set_head(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_leftShoulder();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_leftShoulder() const;

  constexpr void __set_leftShoulder(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_leftUpperArm();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_leftUpperArm() const;

  constexpr void __set_leftUpperArm(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_leftForearm();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_leftForearm() const;

  constexpr void __set_leftForearm(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_leftHand();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_leftHand() const;

  constexpr void __set_leftHand(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_rightShoulder();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_rightShoulder() const;

  constexpr void __set_rightShoulder(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_rightUpperArm();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_rightUpperArm() const;

  constexpr void __set_rightUpperArm(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_rightForearm();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_rightForearm() const;

  constexpr void __set_rightForearm(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_rightHand();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_rightHand() const;

  constexpr void __set_rightHand(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_leftThigh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_leftThigh() const;

  constexpr void __set_leftThigh(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_leftCalf();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_leftCalf() const;

  constexpr void __set_leftCalf(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_leftFoot();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_leftFoot() const;

  constexpr void __set_leftFoot(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_leftToes();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_leftToes() const;

  constexpr void __set_leftToes(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_rightThigh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_rightThigh() const;

  constexpr void __set_rightThigh(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_rightCalf();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_rightCalf() const;

  constexpr void __set_rightCalf(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_rightFoot();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_rightFoot() const;

  constexpr void __set_rightFoot(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_rightToes();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_rightToes() const;

  constexpr void __set_rightToes(::UnityEngine::Transform* value);

  /// @brief Method GetTransforms addr 0x11e0620 size 0x43c virtual false final false
  inline ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> GetTransforms();

  /// @brief Method get_isFilled addr 0x11e0034 size 0x3bc virtual false final false
  inline bool get_isFilled();

  /// @brief Method get_isEmpty addr 0x11dfc78 size 0x3bc virtual false final false
  inline bool get_isEmpty();

  /// @brief Method AutoDetectReferences addr 0x11df850 size 0x38c virtual false final false
  static inline bool AutoDetectReferences(::UnityEngine::Transform* root, ByRef<::RootMotion::FinalIK::__VRIK__References*> references);

  static inline ::RootMotion::FinalIK::__VRIK__References* New_ctor();

  /// @brief Method .ctor addr 0x11e0618 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__VRIK__References", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VRIK__References(__VRIK__References&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VRIK__References", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VRIK__References(__VRIK__References const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VRIK__References();

public:
  /// @brief Field root, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Transform* ___root;

  /// @brief Field pelvis, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ___pelvis;

  /// @brief Field spine, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ___spine;

  /// @brief Field chest, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ___chest;

  /// @brief Field neck, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Transform* ___neck;

  /// @brief Field head, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Transform* ___head;

  /// @brief Field leftShoulder, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Transform* ___leftShoulder;

  /// @brief Field leftUpperArm, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Transform* ___leftUpperArm;

  /// @brief Field leftForearm, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Transform* ___leftForearm;

  /// @brief Field leftHand, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Transform* ___leftHand;

  /// @brief Field rightShoulder, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Transform* ___rightShoulder;

  /// @brief Field rightUpperArm, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Transform* ___rightUpperArm;

  /// @brief Field rightForearm, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Transform* ___rightForearm;

  /// @brief Field rightHand, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Transform* ___rightHand;

  /// @brief Field leftThigh, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Transform* ___leftThigh;

  /// @brief Field leftCalf, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Transform* ___leftCalf;

  /// @brief Field leftFoot, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::Transform* ___leftFoot;

  /// @brief Field leftToes, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::Transform* ___leftToes;

  /// @brief Field rightThigh, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::Transform* ___rightThigh;

  /// @brief Field rightCalf, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::Transform* ___rightCalf;

  /// @brief Field rightFoot, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::Transform* ___rightFoot;

  /// @brief Field rightToes, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Transform* ___rightToes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__VRIK__References, 0xc0>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIK__References, ___root) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIK__References, ___pelvis) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIK__References, ___spine) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIK__References, ___chest) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIK__References, ___neck) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIK__References, ___head) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIK__References, ___leftShoulder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIK__References, ___leftUpperArm) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIK__References, ___leftForearm) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIK__References, ___leftHand) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIK__References, ___rightShoulder) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIK__References, ___rightUpperArm) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIK__References, ___rightForearm) == 0x70, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIK__References, ___rightHand) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIK__References, ___leftThigh) == 0x80, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIK__References, ___leftCalf) == 0x88, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIK__References, ___leftFoot) == 0x90, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIK__References, ___leftToes) == 0x98, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIK__References, ___rightThigh) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIK__References, ___rightCalf) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIK__References, ___rightFoot) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIK__References, ___rightToes) == 0xb8, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::VRIK
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12464))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12471))
// CS Name: ::RootMotion.FinalIK::VRIK*
class CORDL_TYPE VRIK : public ::RootMotion::FinalIK::IK {
public:
  // Declarations
  using References = ::RootMotion::FinalIK::__VRIK__References;

  /// @brief Field references, offset 0x38, size 0x8
  __declspec(property(get = __get_references, put = __set_references))::RootMotion::FinalIK::__VRIK__References* references;

  /// @brief Field solver, offset 0x40, size 0x8
  __declspec(property(get = __get_solver, put = __set_solver))::RootMotion::FinalIK::IKSolverVR* solver;

  constexpr ::RootMotion::FinalIK::__VRIK__References*& __get_references();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__VRIK__References*> const& __get_references() const;

  constexpr void __set_references(::RootMotion::FinalIK::__VRIK__References* value);

  constexpr ::RootMotion::FinalIK::IKSolverVR*& __get_solver();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverVR*> const& __get_solver() const;

  constexpr void __set_solver(::RootMotion::FinalIK::IKSolverVR* value);

  /// @brief Method OpenUserManual addr 0x11df768 size 0x44 virtual true final false
  inline void OpenUserManual();

  /// @brief Method OpenScriptReference addr 0x11df7ac size 0x44 virtual true final false
  inline void OpenScriptReference();

  /// @brief Method OpenSetupTutorial addr 0x11df7f0 size 0x44 virtual false final false
  inline void OpenSetupTutorial();

  /// @brief Method AutoDetectReferences addr 0x11df834 size 0x1c virtual false final false
  inline void AutoDetectReferences();

  /// @brief Method GuessHandOrientations addr 0x11dfbdc size 0x28 virtual false final false
  inline void GuessHandOrientations();

  /// @brief Method GetIKSolver addr 0x11dfc04 size 0x8 virtual true final false
  inline ::RootMotion::FinalIK::IKSolver* GetIKSolver();

  /// @brief Method InitiateSolver addr 0x11dfc0c size 0x6c virtual true final false
  inline void InitiateSolver();

  /// @brief Method UpdateSolver addr 0x11e03f0 size 0x190 virtual true final false
  inline void UpdateSolver();

  static inline ::RootMotion::FinalIK::VRIK* New_ctor();

  /// @brief Method .ctor addr 0x11e0580 size 0x98 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VRIK", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRIK(VRIK&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRIK", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRIK(VRIK const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRIK();

public:
  /// @brief Field references, offset: 0x38, size: 0x8, def value: None
  ::RootMotion::FinalIK::__VRIK__References* ___references;

  /// @brief Field solver, offset: 0x40, size: 0x8, def value: None
  ::RootMotion::FinalIK::IKSolverVR* ___solver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::VRIK, 0x48>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::VRIK, ___references) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::VRIK, ___solver) == 0x40, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::VRIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::VRIK*, "RootMotion.FinalIK", "VRIK");
NEED_NO_BOX(::RootMotion::FinalIK::__VRIK__References);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__VRIK__References*, "RootMotion.FinalIK", "VRIK/References");
