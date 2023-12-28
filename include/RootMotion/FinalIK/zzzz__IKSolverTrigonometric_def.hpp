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
namespace UnityEngine {
struct Quaternion;
}
namespace RootMotion::FinalIK {
class __IKSolver__Point;
}
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class __IKSolverTrigonometric__TrigonometricBone;
}
namespace UnityEngine {
class Transform;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(12560)), TypeDefinitionIndex(TypeDefinitionIndex(10252))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12581))
// CS Name: ::IKSolverTrigonometric::TrigonometricBone*
class CORDL_TYPE __IKSolverTrigonometric__TrigonometricBone : public ::RootMotion::FinalIK::__IKSolver__Bone {
public:
  // Declarations
  /// @brief Field targetToLocalSpace, offset 0x74, size 0x10
  __declspec(property(get = __get_targetToLocalSpace, put = __set_targetToLocalSpace))::UnityEngine::Quaternion targetToLocalSpace;

  /// @brief Field defaultLocalBendNormal, offset 0x84, size 0xc
  __declspec(property(get = __get_defaultLocalBendNormal, put = __set_defaultLocalBendNormal))::UnityEngine::Vector3 defaultLocalBendNormal;

  constexpr ::UnityEngine::Quaternion& __get_targetToLocalSpace();

  constexpr ::UnityEngine::Quaternion const& __get_targetToLocalSpace() const;

  constexpr void __set_targetToLocalSpace(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Vector3& __get_defaultLocalBendNormal();

  constexpr ::UnityEngine::Vector3 const& __get_defaultLocalBendNormal() const;

  constexpr void __set_defaultLocalBendNormal(::UnityEngine::Vector3 value);

  /// @brief Method Initiate addr 0x12704c0 size 0xf0 virtual false final false
  inline void Initiate(::UnityEngine::Vector3 childPosition, ::UnityEngine::Vector3 bendNormal);

  /// @brief Method GetRotation addr 0x1270d68 size 0x90 virtual false final false
  inline ::UnityEngine::Quaternion GetRotation(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 bendNormal);

  /// @brief Method GetBendNormalFromCurrentRotation addr 0x126ba9c size 0x30 virtual false final false
  inline ::UnityEngine::Vector3 GetBendNormalFromCurrentRotation();

  static inline ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* New_ctor();

  /// @brief Method .ctor addr 0x1270e04 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__IKSolverTrigonometric__TrigonometricBone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IKSolverTrigonometric__TrigonometricBone(__IKSolverTrigonometric__TrigonometricBone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IKSolverTrigonometric__TrigonometricBone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IKSolverTrigonometric__TrigonometricBone(__IKSolverTrigonometric__TrigonometricBone const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKSolverTrigonometric__TrigonometricBone();

public:
  /// @brief Field targetToLocalSpace, offset: 0x74, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___targetToLocalSpace;

  /// @brief Field defaultLocalBendNormal, offset: 0x84, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___defaultLocalBendNormal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone, 0x90>, "Size mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::IKSolverTrigonometric
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 165, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(12564))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12582))
// CS Name: ::RootMotion.FinalIK::IKSolverTrigonometric*
class CORDL_TYPE IKSolverTrigonometric : public ::RootMotion::FinalIK::IKSolver {
public:
  // Declarations
  using TrigonometricBone = ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone;

  /// @brief Field target, offset 0x58, size 0x8
  __declspec(property(get = __get_target, put = __set_target))::UnityEngine::Transform* target;

  /// @brief Field IKRotationWeight, offset 0x60, size 0x4
  __declspec(property(get = __get_IKRotationWeight, put = __set_IKRotationWeight)) float_t IKRotationWeight;

  /// @brief Field IKRotation, offset 0x64, size 0x10
  __declspec(property(get = __get_IKRotation, put = __set_IKRotation))::UnityEngine::Quaternion IKRotation;

  /// @brief Field bendNormal, offset 0x74, size 0xc
  __declspec(property(get = __get_bendNormal, put = __set_bendNormal))::UnityEngine::Vector3 bendNormal;

  /// @brief Field bone1, offset 0x80, size 0x8
  __declspec(property(get = __get_bone1, put = __set_bone1))::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* bone1;

  /// @brief Field bone2, offset 0x88, size 0x8
  __declspec(property(get = __get_bone2, put = __set_bone2))::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* bone2;

  /// @brief Field bone3, offset 0x90, size 0x8
  __declspec(property(get = __get_bone3, put = __set_bone3))::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* bone3;

  /// @brief Field weightIKPosition, offset 0x98, size 0xc
  __declspec(property(get = __get_weightIKPosition, put = __set_weightIKPosition))::UnityEngine::Vector3 weightIKPosition;

  /// @brief Field directHierarchy, offset 0xa4, size 0x1
  __declspec(property(get = __get_directHierarchy, put = __set_directHierarchy)) bool directHierarchy;

  constexpr ::UnityEngine::Transform*& __get_target();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_target() const;

  constexpr void __set_target(::UnityEngine::Transform* value);

  constexpr float_t& __get_IKRotationWeight();

  constexpr float_t const& __get_IKRotationWeight() const;

  constexpr void __set_IKRotationWeight(float_t value);

  constexpr ::UnityEngine::Quaternion& __get_IKRotation();

  constexpr ::UnityEngine::Quaternion const& __get_IKRotation() const;

  constexpr void __set_IKRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Vector3& __get_bendNormal();

  constexpr ::UnityEngine::Vector3 const& __get_bendNormal() const;

  constexpr void __set_bendNormal(::UnityEngine::Vector3 value);

  constexpr ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*& __get_bone1();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*> const& __get_bone1() const;

  constexpr void __set_bone1(::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* value);

  constexpr ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*& __get_bone2();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*> const& __get_bone2() const;

  constexpr void __set_bone2(::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* value);

  constexpr ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*& __get_bone3();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*> const& __get_bone3() const;

  constexpr void __set_bone3(::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* value);

  constexpr ::UnityEngine::Vector3& __get_weightIKPosition();

  constexpr ::UnityEngine::Vector3 const& __get_weightIKPosition() const;

  constexpr void __set_weightIKPosition(::UnityEngine::Vector3 value);

  constexpr bool& __get_directHierarchy();

  constexpr bool const& __get_directHierarchy() const;

  constexpr void __set_directHierarchy(bool value);

  /// @brief Method SetBendGoalPosition addr 0x126f224 size 0x194 virtual false final false
  inline void SetBendGoalPosition(::UnityEngine::Vector3 goalPosition, float_t weight);

  /// @brief Method SetBendPlaneToCurrent addr 0x126f3b8 size 0x180 virtual false final false
  inline void SetBendPlaneToCurrent();

  /// @brief Method SetIKRotation addr 0x126f538 size 0xc virtual false final false
  inline void SetIKRotation(::UnityEngine::Quaternion rotation);

  /// @brief Method SetIKRotationWeight addr 0x126f544 size 0x1c virtual false final false
  inline void SetIKRotationWeight(float_t weight);

  /// @brief Method GetIKRotation addr 0x126f560 size 0xc virtual false final false
  inline ::UnityEngine::Quaternion GetIKRotation();

  /// @brief Method GetIKRotationWeight addr 0x126f56c size 0x8 virtual false final false
  inline float_t GetIKRotationWeight();

  /// @brief Method GetPoints addr 0x126f574 size 0xec virtual true final false
  inline ::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> GetPoints();

  /// @brief Method GetPoint addr 0x126f660 size 0xf8 virtual true final false
  inline ::RootMotion::FinalIK::__IKSolver__Point* GetPoint(::UnityEngine::Transform* transform);

  /// @brief Method StoreDefaultLocalState addr 0x126f758 size 0x40 virtual true final false
  inline void StoreDefaultLocalState();

  /// @brief Method FixTransforms addr 0x126f798 size 0x50 virtual true final false
  inline void FixTransforms();

  /// @brief Method IsValid addr 0x126f7e8 size 0x3a4 virtual true final false
  inline bool IsValid(ByRef<::StringW> message);

  /// @brief Method SetChain addr 0x126fb8c size 0x4c virtual false final false
  inline bool SetChain(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ::UnityEngine::Transform* root);

  /// @brief Method Solve addr 0x126fbd8 size 0x4f4 virtual false final false
  static inline void Solve(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ::UnityEngine::Vector3 targetPosition, ::UnityEngine::Vector3 bendNormal,
                           float_t weight);

  /// @brief Method GetDirectionToBendPoint addr 0x12700cc size 0x158 virtual false final false
  static inline ::UnityEngine::Vector3 GetDirectionToBendPoint(::UnityEngine::Vector3 direction, float_t directionMag, ::UnityEngine::Vector3 bendDirection, float_t sqrMag1, float_t sqrMag2);

  /// @brief Method OnInitiate addr 0x1270224 size 0x12c virtual true final false
  inline void OnInitiate();

  /// @brief Method IsDirectHierarchy addr 0x12703d0 size 0xf0 virtual false final false
  inline bool IsDirectHierarchy();

  /// @brief Method InitiateBones addr 0x1270350 size 0x80 virtual false final false
  inline void InitiateBones();

  /// @brief Method OnUpdate addr 0x12705b0 size 0x5f8 virtual true final false
  inline void OnUpdate();

  /// @brief Method OnInitiateVirtual addr 0x1270df8 size 0x4 virtual true final false
  inline void OnInitiateVirtual();

  /// @brief Method OnUpdateVirtual addr 0x1270dfc size 0x4 virtual true final false
  inline void OnUpdateVirtual();

  /// @brief Method OnPostSolveVirtual addr 0x1270e00 size 0x4 virtual true final false
  inline void OnPostSolveVirtual();

  /// @brief Method GetBendDirection addr 0x1270ba8 size 0x1c0 virtual false final false
  inline ::UnityEngine::Vector3 GetBendDirection(::UnityEngine::Vector3 IKPosition, ::UnityEngine::Vector3 bendNormal);

  static inline ::RootMotion::FinalIK::IKSolverTrigonometric* New_ctor();

  /// @brief Method .ctor addr 0x126cc44 size 0x128 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IKSolverTrigonometric", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKSolverTrigonometric(IKSolverTrigonometric&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKSolverTrigonometric", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKSolverTrigonometric(IKSolverTrigonometric const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKSolverTrigonometric();

public:
  /// @brief Field target, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Transform* ___target;

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

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverTrigonometric);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverTrigonometric*, "RootMotion.FinalIK", "IKSolverTrigonometric");
NEED_NO_BOX(::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*, "RootMotion.FinalIK", "IKSolverTrigonometric/TrigonometricBone");
