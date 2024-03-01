#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IKSolverTrigonometric)
namespace RootMotion::FinalIK {
class __IKSolverTrigonometric__TrigonometricBone;
}
namespace RootMotion::FinalIK {
class __IKSolver__Point;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolverTrigonometric;
}
namespace RootMotion::FinalIK {
class __IKSolverTrigonometric__TrigonometricBone;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IKSolverTrigonometric);
MARK_REF_PTR_T(::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone);
// Type: ::TrigonometricBone
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::IKSolverTrigonometric::TrigonometricBone*
class CORDL_TYPE __IKSolverTrigonometric__TrigonometricBone : public ::RootMotion::FinalIK::__IKSolver__Bone {
public:
  // Declarations
  /// @brief Field defaultLocalBendNormal, offset 0x84, size 0xc
  __declspec(property(get = __cordl_internal_get_defaultLocalBendNormal, put = __cordl_internal_set_defaultLocalBendNormal))::UnityEngine::Vector3 defaultLocalBendNormal;

  /// @brief Field targetToLocalSpace, offset 0x74, size 0x10
  __declspec(property(get = __cordl_internal_get_targetToLocalSpace, put = __cordl_internal_set_targetToLocalSpace))::UnityEngine::Quaternion targetToLocalSpace;

  /// @brief Method GetBendNormalFromCurrentRotation, addr 0x1346b38, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetBendNormalFromCurrentRotation();

  /// @brief Method GetRotation, addr 0x134be04, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetRotation(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 bendNormal);

  /// @brief Method Initiate, addr 0x134b55c, size 0xf0, virtual false, abstract: false, final false
  inline void Initiate(::UnityEngine::Vector3 childPosition, ::UnityEngine::Vector3 bendNormal);

  static inline ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_defaultLocalBendNormal() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_defaultLocalBendNormal();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_targetToLocalSpace() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_targetToLocalSpace();

  constexpr void __cordl_internal_set_defaultLocalBendNormal(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_targetToLocalSpace(::UnityEngine::Quaternion value);

  /// @brief Method .ctor, addr 0x134bea0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKSolverTrigonometric__TrigonometricBone();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IKSolverTrigonometric__TrigonometricBone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IKSolverTrigonometric__TrigonometricBone(__IKSolverTrigonometric__TrigonometricBone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IKSolverTrigonometric__TrigonometricBone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IKSolverTrigonometric__TrigonometricBone(__IKSolverTrigonometric__TrigonometricBone const&) = delete;

  /// @brief Field targetToLocalSpace, offset: 0x74, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___targetToLocalSpace;

  /// @brief Field defaultLocalBendNormal, offset: 0x84, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___defaultLocalBendNormal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone, 0x90>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone, ___targetToLocalSpace) == 0x74, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone, ___defaultLocalBendNormal) == 0x84, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::IKSolverTrigonometric
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 165, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::IKSolverTrigonometric*
class CORDL_TYPE IKSolverTrigonometric : public ::RootMotion::FinalIK::IKSolver {
public:
  // Declarations
  using TrigonometricBone = ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone;

  /// @brief Field IKRotation, offset 0x64, size 0x10
  __declspec(property(get = __cordl_internal_get_IKRotation, put = __cordl_internal_set_IKRotation))::UnityEngine::Quaternion IKRotation;

  /// @brief Field IKRotationWeight, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_IKRotationWeight, put = __cordl_internal_set_IKRotationWeight)) float_t IKRotationWeight;

  /// @brief Field bendNormal, offset 0x74, size 0xc
  __declspec(property(get = __cordl_internal_get_bendNormal, put = __cordl_internal_set_bendNormal))::UnityEngine::Vector3 bendNormal;

  /// @brief Field bone1, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_bone1, put = __cordl_internal_set_bone1))::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* bone1;

  /// @brief Field bone2, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_bone2, put = __cordl_internal_set_bone2))::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* bone2;

  /// @brief Field bone3, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_bone3, put = __cordl_internal_set_bone3))::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* bone3;

  /// @brief Field directHierarchy, offset 0xa4, size 0x1
  __declspec(property(get = __cordl_internal_get_directHierarchy, put = __cordl_internal_set_directHierarchy)) bool directHierarchy;

  /// @brief Field target, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target))::UnityW<::UnityEngine::Transform> target;

  /// @brief Field weightIKPosition, offset 0x98, size 0xc
  __declspec(property(get = __cordl_internal_get_weightIKPosition, put = __cordl_internal_set_weightIKPosition))::UnityEngine::Vector3 weightIKPosition;

  /// @brief Method FixTransforms, addr 0x134a834, size 0x50, virtual true, abstract: false, final false
  inline void FixTransforms();

  /// @brief Method GetBendDirection, addr 0x134bc44, size 0x1c0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetBendDirection(::UnityEngine::Vector3 IKPosition, ::UnityEngine::Vector3 bendNormal);

  /// @brief Method GetDirectionToBendPoint, addr 0x134b168, size 0x158, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetDirectionToBendPoint(::UnityEngine::Vector3 direction, float_t directionMag, ::UnityEngine::Vector3 bendDirection, float_t sqrMag1, float_t sqrMag2);

  /// @brief Method GetIKRotation, addr 0x134a5fc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetIKRotation();

  /// @brief Method GetIKRotationWeight, addr 0x134a608, size 0x8, virtual false, abstract: false, final false
  inline float_t GetIKRotationWeight();

  /// @brief Method GetPoint, addr 0x134a6fc, size 0xf8, virtual true, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolver__Point* GetPoint(::UnityEngine::Transform* transform);

  /// @brief Method GetPoints, addr 0x134a610, size 0xec, virtual true, abstract: false, final false
  inline ::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> GetPoints();

  /// @brief Method InitiateBones, addr 0x134b3ec, size 0x80, virtual false, abstract: false, final false
  inline void InitiateBones();

  /// @brief Method IsDirectHierarchy, addr 0x134b46c, size 0xf0, virtual false, abstract: false, final false
  inline bool IsDirectHierarchy();

  /// @brief Method IsValid, addr 0x134a884, size 0x3a4, virtual true, abstract: false, final false
  inline bool IsValid(ByRef<::StringW> message);

  static inline ::RootMotion::FinalIK::IKSolverTrigonometric* New_ctor();

  /// @brief Method OnInitiate, addr 0x134b2c0, size 0x12c, virtual true, abstract: false, final false
  inline void OnInitiate();

  /// @brief Method OnInitiateVirtual, addr 0x134be94, size 0x4, virtual true, abstract: false, final false
  inline void OnInitiateVirtual();

  /// @brief Method OnPostSolveVirtual, addr 0x134be9c, size 0x4, virtual true, abstract: false, final false
  inline void OnPostSolveVirtual();

  /// @brief Method OnUpdate, addr 0x134b64c, size 0x5f8, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method OnUpdateVirtual, addr 0x134be98, size 0x4, virtual true, abstract: false, final false
  inline void OnUpdateVirtual();

  /// @brief Method SetBendGoalPosition, addr 0x134a2c0, size 0x194, virtual false, abstract: false, final false
  inline void SetBendGoalPosition(::UnityEngine::Vector3 goalPosition, float_t weight);

  /// @brief Method SetBendPlaneToCurrent, addr 0x134a454, size 0x180, virtual false, abstract: false, final false
  inline void SetBendPlaneToCurrent();

  /// @brief Method SetChain, addr 0x134ac28, size 0x4c, virtual false, abstract: false, final false
  inline bool SetChain(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ::UnityEngine::Transform* root);

  /// @brief Method SetIKRotation, addr 0x134a5d4, size 0xc, virtual false, abstract: false, final false
  inline void SetIKRotation(::UnityEngine::Quaternion rotation);

  /// @brief Method SetIKRotationWeight, addr 0x134a5e0, size 0x1c, virtual false, abstract: false, final false
  inline void SetIKRotationWeight(float_t weight);

  /// @brief Method Solve, addr 0x134ac74, size 0x4f4, virtual false, abstract: false, final false
  static inline void Solve(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ::UnityEngine::Vector3 targetPosition, ::UnityEngine::Vector3 bendNormal,
                           float_t weight);

  /// @brief Method StoreDefaultLocalState, addr 0x134a7f4, size 0x40, virtual true, abstract: false, final false
  inline void StoreDefaultLocalState();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_IKRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_IKRotation();

  constexpr float_t const& __cordl_internal_get_IKRotationWeight() const;

  constexpr float_t& __cordl_internal_get_IKRotationWeight();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bendNormal() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_bendNormal();

  constexpr ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*& __cordl_internal_get_bone1();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*> const& __cordl_internal_get_bone1() const;

  constexpr ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*& __cordl_internal_get_bone2();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*> const& __cordl_internal_get_bone2() const;

  constexpr ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*& __cordl_internal_get_bone3();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*> const& __cordl_internal_get_bone3() const;

  constexpr bool const& __cordl_internal_get_directHierarchy() const;

  constexpr bool& __cordl_internal_get_directHierarchy();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_weightIKPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_weightIKPosition();

  constexpr void __cordl_internal_set_IKRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_IKRotationWeight(float_t value);

  constexpr void __cordl_internal_set_bendNormal(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_bone1(::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* value);

  constexpr void __cordl_internal_set_bone2(::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* value);

  constexpr void __cordl_internal_set_bone3(::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* value);

  constexpr void __cordl_internal_set_directHierarchy(bool value);

  constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_weightIKPosition(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x1347ce0, size 0x128, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKSolverTrigonometric();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IKSolverTrigonometric", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKSolverTrigonometric(IKSolverTrigonometric&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKSolverTrigonometric", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKSolverTrigonometric(IKSolverTrigonometric const&) = delete;

  /// @brief Field target, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___target;

  /// @brief Field IKRotationWeight, offset: 0x60, size: 0x4, def value: None
  float_t ___IKRotationWeight;

  /// @brief Field IKRotation, offset: 0x64, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___IKRotation;

  /// @brief Field bendNormal, offset: 0x74, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___bendNormal;

  /// @brief Field bone1, offset: 0x80, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* ___bone1;

  /// @brief Field bone2, offset: 0x88, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* ___bone2;

  /// @brief Field bone3, offset: 0x90, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* ___bone3;

  /// @brief Field weightIKPosition, offset: 0x98, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___weightIKPosition;

  /// @brief Field directHierarchy, offset: 0xa4, size: 0x1, def value: None
  bool ___directHierarchy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKSolverTrigonometric, 0xa8>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverTrigonometric, ___target) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverTrigonometric, ___IKRotationWeight) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverTrigonometric, ___IKRotation) == 0x64, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverTrigonometric, ___bendNormal) == 0x74, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverTrigonometric, ___bone1) == 0x80, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverTrigonometric, ___bone2) == 0x88, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverTrigonometric, ___bone3) == 0x90, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverTrigonometric, ___weightIKPosition) == 0x98, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverTrigonometric, ___directHierarchy) == 0xa4, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverTrigonometric);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverTrigonometric*, "RootMotion.FinalIK", "IKSolverTrigonometric");
NEED_NO_BOX(::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*, "RootMotion.FinalIK", "IKSolverTrigonometric/TrigonometricBone");
