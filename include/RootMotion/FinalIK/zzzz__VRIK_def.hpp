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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12440))
// CS Name: ::VRIK::References*
class CORDL_TYPE __VRIK__References : public ::System::Object {
public:
  // Declarations
  /// @brief Field root, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_root, put = __cordl_internal_set_root))::UnityW<::UnityEngine::Transform> root;

  /// @brief Field pelvis, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_pelvis, put = __cordl_internal_set_pelvis))::UnityW<::UnityEngine::Transform> pelvis;

  /// @brief Field spine, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_spine, put = __cordl_internal_set_spine))::UnityW<::UnityEngine::Transform> spine;

  /// @brief Field chest, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_chest, put = __cordl_internal_set_chest))::UnityW<::UnityEngine::Transform> chest;

  /// @brief Field neck, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_neck, put = __cordl_internal_set_neck))::UnityW<::UnityEngine::Transform> neck;

  /// @brief Field head, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_head, put = __cordl_internal_set_head))::UnityW<::UnityEngine::Transform> head;

  /// @brief Field leftShoulder, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_leftShoulder, put = __cordl_internal_set_leftShoulder))::UnityW<::UnityEngine::Transform> leftShoulder;

  /// @brief Field leftUpperArm, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_leftUpperArm, put = __cordl_internal_set_leftUpperArm))::UnityW<::UnityEngine::Transform> leftUpperArm;

  /// @brief Field leftForearm, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_leftForearm, put = __cordl_internal_set_leftForearm))::UnityW<::UnityEngine::Transform> leftForearm;

  /// @brief Field leftHand, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHand, put = __cordl_internal_set_leftHand))::UnityW<::UnityEngine::Transform> leftHand;

  /// @brief Field rightShoulder, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_rightShoulder, put = __cordl_internal_set_rightShoulder))::UnityW<::UnityEngine::Transform> rightShoulder;

  /// @brief Field rightUpperArm, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_rightUpperArm, put = __cordl_internal_set_rightUpperArm))::UnityW<::UnityEngine::Transform> rightUpperArm;

  /// @brief Field rightForearm, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_rightForearm, put = __cordl_internal_set_rightForearm))::UnityW<::UnityEngine::Transform> rightForearm;

  /// @brief Field rightHand, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHand, put = __cordl_internal_set_rightHand))::UnityW<::UnityEngine::Transform> rightHand;

  /// @brief Field leftThigh, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_leftThigh, put = __cordl_internal_set_leftThigh))::UnityW<::UnityEngine::Transform> leftThigh;

  /// @brief Field leftCalf, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_leftCalf, put = __cordl_internal_set_leftCalf))::UnityW<::UnityEngine::Transform> leftCalf;

  /// @brief Field leftFoot, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_leftFoot, put = __cordl_internal_set_leftFoot))::UnityW<::UnityEngine::Transform> leftFoot;

  /// @brief Field leftToes, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_leftToes, put = __cordl_internal_set_leftToes))::UnityW<::UnityEngine::Transform> leftToes;

  /// @brief Field rightThigh, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_rightThigh, put = __cordl_internal_set_rightThigh))::UnityW<::UnityEngine::Transform> rightThigh;

  /// @brief Field rightCalf, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_rightCalf, put = __cordl_internal_set_rightCalf))::UnityW<::UnityEngine::Transform> rightCalf;

  /// @brief Field rightFoot, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_rightFoot, put = __cordl_internal_set_rightFoot))::UnityW<::UnityEngine::Transform> rightFoot;

  /// @brief Field rightToes, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_rightToes, put = __cordl_internal_set_rightToes))::UnityW<::UnityEngine::Transform> rightToes;

  __declspec(property(get = get_isFilled)) bool isFilled;

  __declspec(property(get = get_isEmpty)) bool isEmpty;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_root();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_root() const;

  constexpr void __cordl_internal_set_root(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pelvis();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pelvis() const;

  constexpr void __cordl_internal_set_pelvis(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_spine();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_spine() const;

  constexpr void __cordl_internal_set_spine(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_chest();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_chest() const;

  constexpr void __cordl_internal_set_chest(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_neck();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_neck() const;

  constexpr void __cordl_internal_set_neck(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_head();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_head() const;

  constexpr void __cordl_internal_set_head(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftShoulder();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftShoulder() const;

  constexpr void __cordl_internal_set_leftShoulder(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftUpperArm();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftUpperArm() const;

  constexpr void __cordl_internal_set_leftUpperArm(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftForearm();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftForearm() const;

  constexpr void __cordl_internal_set_leftForearm(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftHand();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftHand() const;

  constexpr void __cordl_internal_set_leftHand(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightShoulder();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightShoulder() const;

  constexpr void __cordl_internal_set_rightShoulder(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightUpperArm();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightUpperArm() const;

  constexpr void __cordl_internal_set_rightUpperArm(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightForearm();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightForearm() const;

  constexpr void __cordl_internal_set_rightForearm(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightHand();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightHand() const;

  constexpr void __cordl_internal_set_rightHand(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftThigh();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftThigh() const;

  constexpr void __cordl_internal_set_leftThigh(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftCalf();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftCalf() const;

  constexpr void __cordl_internal_set_leftCalf(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftFoot();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftFoot() const;

  constexpr void __cordl_internal_set_leftFoot(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftToes();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftToes() const;

  constexpr void __cordl_internal_set_leftToes(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightThigh();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightThigh() const;

  constexpr void __cordl_internal_set_rightThigh(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightCalf();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightCalf() const;

  constexpr void __cordl_internal_set_rightCalf(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightFoot();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightFoot() const;

  constexpr void __cordl_internal_set_rightFoot(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightToes();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightToes() const;

  constexpr void __cordl_internal_set_rightToes(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method GetTransforms, addr 0x12ea9fc, size 0x43c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> GetTransforms();

  /// @brief Method get_isFilled, addr 0x12ea410, size 0x3bc, virtual false, abstract: false, final false
  inline bool get_isFilled();

  /// @brief Method get_isEmpty, addr 0x12ea054, size 0x3bc, virtual false, abstract: false, final false
  inline bool get_isEmpty();

  /// @brief Method AutoDetectReferences, addr 0x12e9c2c, size 0x38c, virtual false, abstract: false, final false
  static inline bool AutoDetectReferences(::UnityEngine::Transform* root, ByRef<::RootMotion::FinalIK::__VRIK__References*> references);

  static inline ::RootMotion::FinalIK::__VRIK__References* New_ctor();

  /// @brief Method .ctor, addr 0x12ea9f4, size 0x8, virtual false, abstract: false, final false
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
  ::UnityW<::UnityEngine::Transform> ___root;

  /// @brief Field pelvis, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___pelvis;

  /// @brief Field spine, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___spine;

  /// @brief Field chest, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___chest;

  /// @brief Field neck, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___neck;

  /// @brief Field head, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___head;

  /// @brief Field leftShoulder, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftShoulder;

  /// @brief Field leftUpperArm, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftUpperArm;

  /// @brief Field leftForearm, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftForearm;

  /// @brief Field leftHand, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftHand;

  /// @brief Field rightShoulder, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightShoulder;

  /// @brief Field rightUpperArm, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightUpperArm;

  /// @brief Field rightForearm, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightForearm;

  /// @brief Field rightHand, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightHand;

  /// @brief Field leftThigh, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftThigh;

  /// @brief Field leftCalf, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftCalf;

  /// @brief Field leftFoot, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftFoot;

  /// @brief Field leftToes, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftToes;

  /// @brief Field rightThigh, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightThigh;

  /// @brief Field rightCalf, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightCalf;

  /// @brief Field rightFoot, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightFoot;

  /// @brief Field rightToes, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightToes;

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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12434))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12441))
// CS Name: ::RootMotion.FinalIK::VRIK*
class CORDL_TYPE VRIK : public ::RootMotion::FinalIK::IK {
public:
  // Declarations
  using References = ::RootMotion::FinalIK::__VRIK__References;

  /// @brief Field references, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_references, put = __cordl_internal_set_references))::RootMotion::FinalIK::__VRIK__References* references;

  /// @brief Field solver, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_solver, put = __cordl_internal_set_solver))::RootMotion::FinalIK::IKSolverVR* solver;

  constexpr ::RootMotion::FinalIK::__VRIK__References*& __cordl_internal_get_references();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__VRIK__References*> const& __cordl_internal_get_references() const;

  constexpr void __cordl_internal_set_references(::RootMotion::FinalIK::__VRIK__References* value);

  constexpr ::RootMotion::FinalIK::IKSolverVR*& __cordl_internal_get_solver();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverVR*> const& __cordl_internal_get_solver() const;

  constexpr void __cordl_internal_set_solver(::RootMotion::FinalIK::IKSolverVR* value);

  /// @brief Method OpenUserManual, addr 0x12e9b44, size 0x44, virtual true, abstract: false, final false
  inline void OpenUserManual();

  /// @brief Method OpenScriptReference, addr 0x12e9b88, size 0x44, virtual true, abstract: false, final false
  inline void OpenScriptReference();

  /// @brief Method OpenSetupTutorial, addr 0x12e9bcc, size 0x44, virtual false, abstract: false, final false
  inline void OpenSetupTutorial();

  /// @brief Method AutoDetectReferences, addr 0x12e9c10, size 0x1c, virtual false, abstract: false, final false
  inline void AutoDetectReferences();

  /// @brief Method GuessHandOrientations, addr 0x12e9fb8, size 0x28, virtual false, abstract: false, final false
  inline void GuessHandOrientations();

  /// @brief Method GetIKSolver, addr 0x12e9fe0, size 0x8, virtual true, abstract: false, final false
  inline ::RootMotion::FinalIK::IKSolver* GetIKSolver();

  /// @brief Method InitiateSolver, addr 0x12e9fe8, size 0x6c, virtual true, abstract: false, final false
  inline void InitiateSolver();

  /// @brief Method UpdateSolver, addr 0x12ea7cc, size 0x190, virtual true, abstract: false, final false
  inline void UpdateSolver();

  static inline ::RootMotion::FinalIK::VRIK* New_ctor();

  /// @brief Method .ctor, addr 0x12ea95c, size 0x98, virtual false, abstract: false, final false
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
