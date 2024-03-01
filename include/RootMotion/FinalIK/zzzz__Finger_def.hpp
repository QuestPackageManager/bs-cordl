#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__Finger_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Finger)
namespace RootMotion::FinalIK {
class IKSolverLimb;
}
namespace RootMotion::FinalIK {
struct __Finger__DOF;
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
struct __Finger__DOF;
}
namespace RootMotion::FinalIK {
class Finger;
}
// Write type traits
MARK_VAL_T(::RootMotion::FinalIK::__Finger__DOF);
MARK_REF_PTR_T(::RootMotion::FinalIK::Finger);
// Type: ::DOF
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: true
// CS Name: ::Finger::DOF
struct CORDL_TYPE __Finger__DOF {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Finger__DOF_Unwrapped
  enum struct ____Finger__DOF_Unwrapped : int32_t {
    __E_One = static_cast<int32_t>(0x0),
    __E_Three = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Finger__DOF_Unwrapped() const noexcept {
    return static_cast<____Finger__DOF_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<____Finger__DOF_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Finger__DOF();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Finger__DOF(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field One value: static_cast<int32_t>(0x0)
  static ::RootMotion::FinalIK::__Finger__DOF const One;

  /// @brief Field Three value: static_cast<int32_t>(0x1)
  static ::RootMotion::FinalIK::__Finger__DOF const Three;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__Finger__DOF, 0x4>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__Finger__DOF, value__) == 0x0, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::Finger
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::Finger*
class CORDL_TYPE Finger : public ::System::Object {
public:
  // Declarations
  using DOF = ::RootMotion::FinalIK::__Finger__DOF;

  __declspec(property(get = get_IKPosition, put = set_IKPosition))::UnityEngine::Vector3 IKPosition;

  __declspec(property(get = get_IKRotation, put = set_IKRotation))::UnityEngine::Quaternion IKRotation;

  /// @brief Field <initiated>k__BackingField, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__initiated_k__BackingField, put = __cordl_internal_set__initiated_k__BackingField)) bool _initiated_k__BackingField;

  /// @brief Field bone1, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_bone1, put = __cordl_internal_set_bone1))::UnityW<::UnityEngine::Transform> bone1;

  /// @brief Field bone1Axis, offset 0x84, size 0xc
  __declspec(property(get = __cordl_internal_get_bone1Axis, put = __cordl_internal_set_bone1Axis))::UnityEngine::Vector3 bone1Axis;

  /// @brief Field bone1TwistAxis, offset 0x9c, size 0xc
  __declspec(property(get = __cordl_internal_get_bone1TwistAxis, put = __cordl_internal_set_bone1TwistAxis))::UnityEngine::Vector3 bone1TwistAxis;

  /// @brief Field bone2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_bone2, put = __cordl_internal_set_bone2))::UnityW<::UnityEngine::Transform> bone2;

  /// @brief Field bone3, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_bone3, put = __cordl_internal_set_bone3))::UnityW<::UnityEngine::Transform> bone3;

  /// @brief Field bone3DefaultLocalPosition, offset 0x68, size 0xc
  __declspec(property(get = __cordl_internal_get_bone3DefaultLocalPosition, put = __cordl_internal_set_bone3DefaultLocalPosition))::UnityEngine::Vector3 bone3DefaultLocalPosition;

  /// @brief Field bone3DefaultLocalRotation, offset 0x74, size 0x10
  __declspec(property(get = __cordl_internal_get_bone3DefaultLocalRotation, put = __cordl_internal_set_bone3DefaultLocalRotation))::UnityEngine::Quaternion bone3DefaultLocalRotation;

  /// @brief Field bone3RelativeToTarget, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get_bone3RelativeToTarget, put = __cordl_internal_set_bone3RelativeToTarget))::UnityEngine::Quaternion bone3RelativeToTarget;

  /// @brief Field fixBone1Twist, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_fixBone1Twist, put = __cordl_internal_set_fixBone1Twist)) bool fixBone1Twist;

  __declspec(property(get = get_initiated, put = set_initiated)) bool initiated;

  /// @brief Field rotationDOF, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_rotationDOF, put = __cordl_internal_set_rotationDOF))::RootMotion::FinalIK::__Finger__DOF rotationDOF;

  /// @brief Field rotationWeight, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_rotationWeight, put = __cordl_internal_set_rotationWeight)) float_t rotationWeight;

  /// @brief Field solver, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_solver, put = __cordl_internal_set_solver))::RootMotion::FinalIK::IKSolverLimb* solver;

  /// @brief Field target, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target))::UnityW<::UnityEngine::Transform> target;

  /// @brief Field tip, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_tip, put = __cordl_internal_set_tip))::UnityW<::UnityEngine::Transform> tip;

  /// @brief Field tipAxis, offset 0x90, size 0xc
  __declspec(property(get = __cordl_internal_get_tipAxis, put = __cordl_internal_set_tipAxis))::UnityEngine::Vector3 tipAxis;

  /// @brief Field weight, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_weight, put = __cordl_internal_set_weight)) float_t weight;

  /// @brief Method FixTransforms, addr 0x131f2e0, size 0xcc, virtual false, abstract: false, final false
  inline void FixTransforms();

  /// @brief Method Initiate, addr 0x131ee00, size 0x4e0, virtual false, abstract: false, final false
  inline void Initiate(::UnityEngine::Transform* hand, int32_t index);

  /// @brief Method IsValid, addr 0x131ed14, size 0xec, virtual false, abstract: false, final false
  inline bool IsValid(ByRef<::StringW> errorMessage);

  static inline ::RootMotion::FinalIK::Finger* New_ctor();

  /// @brief Method StoreDefaultLocalState, addr 0x131f3ac, size 0xb8, virtual false, abstract: false, final false
  inline void StoreDefaultLocalState();

  /// @brief Method Update, addr 0x131f464, size 0x660, virtual false, abstract: false, final false
  inline void Update(float_t masterWeight);

  constexpr bool const& __cordl_internal_get__initiated_k__BackingField() const;

  constexpr bool& __cordl_internal_get__initiated_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bone1() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bone1();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bone1Axis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_bone1Axis();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bone1TwistAxis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_bone1TwistAxis();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bone2() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bone2();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bone3() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bone3();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bone3DefaultLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_bone3DefaultLocalPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_bone3DefaultLocalRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_bone3DefaultLocalRotation();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_bone3RelativeToTarget() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_bone3RelativeToTarget();

  constexpr bool const& __cordl_internal_get_fixBone1Twist() const;

  constexpr bool& __cordl_internal_get_fixBone1Twist();

  constexpr ::RootMotion::FinalIK::__Finger__DOF const& __cordl_internal_get_rotationDOF() const;

  constexpr ::RootMotion::FinalIK::__Finger__DOF& __cordl_internal_get_rotationDOF();

  constexpr float_t const& __cordl_internal_get_rotationWeight() const;

  constexpr float_t& __cordl_internal_get_rotationWeight();

  constexpr ::RootMotion::FinalIK::IKSolverLimb*& __cordl_internal_get_solver();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverLimb*> const& __cordl_internal_get_solver() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tip() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tip();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_tipAxis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_tipAxis();

  constexpr float_t const& __cordl_internal_get_weight() const;

  constexpr float_t& __cordl_internal_get_weight();

  constexpr void __cordl_internal_set__initiated_k__BackingField(bool value);

  constexpr void __cordl_internal_set_bone1(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_bone1Axis(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_bone1TwistAxis(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_bone2(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_bone3(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_bone3DefaultLocalPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_bone3DefaultLocalRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_bone3RelativeToTarget(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_fixBone1Twist(bool value);

  constexpr void __cordl_internal_set_rotationDOF(::RootMotion::FinalIK::__Finger__DOF value);

  constexpr void __cordl_internal_set_rotationWeight(float_t value);

  constexpr void __cordl_internal_set_solver(::RootMotion::FinalIK::IKSolverLimb* value);

  constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_tip(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_tipAxis(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_weight(float_t value);

  /// @brief Method .ctor, addr 0x131fac4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IKPosition, addr 0x131ec94, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_IKPosition();

  /// @brief Method get_IKRotation, addr 0x131ecd4, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_IKRotation();

  /// @brief Method get_initiated, addr 0x131ec80, size 0x8, virtual false, abstract: false, final false
  inline bool get_initiated();

  /// @brief Method set_IKPosition, addr 0x131ecb4, size 0x20, virtual false, abstract: false, final false
  inline void set_IKPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_IKRotation, addr 0x131ecf4, size 0x20, virtual false, abstract: false, final false
  inline void set_IKRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_initiated, addr 0x131ec88, size 0xc, virtual false, abstract: false, final false
  inline void set_initiated(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Finger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Finger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Finger(Finger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Finger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Finger(Finger const&) = delete;

  /// @brief Field weight, offset: 0x10, size: 0x4, def value: None
  float_t ___weight;

  /// @brief Field rotationWeight, offset: 0x14, size: 0x4, def value: None
  float_t ___rotationWeight;

  /// @brief Field rotationDOF, offset: 0x18, size: 0x4, def value: None
  ::RootMotion::FinalIK::__Finger__DOF ___rotationDOF;

  /// @brief Field fixBone1Twist, offset: 0x1c, size: 0x1, def value: None
  bool ___fixBone1Twist;

  /// @brief Field bone1, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bone1;

  /// @brief Field bone2, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bone2;

  /// @brief Field bone3, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bone3;

  /// @brief Field tip, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___tip;

  /// @brief Field target, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___target;

  /// @brief Field <initiated>k__BackingField, offset: 0x48, size: 0x1, def value: None
  bool ____initiated_k__BackingField;

  /// @brief Field solver, offset: 0x50, size: 0x8, def value: None
  ::RootMotion::FinalIK::IKSolverLimb* ___solver;

  /// @brief Field bone3RelativeToTarget, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___bone3RelativeToTarget;

  /// @brief Field bone3DefaultLocalPosition, offset: 0x68, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___bone3DefaultLocalPosition;

  /// @brief Field bone3DefaultLocalRotation, offset: 0x74, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___bone3DefaultLocalRotation;

  /// @brief Field bone1Axis, offset: 0x84, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___bone1Axis;

  /// @brief Field tipAxis, offset: 0x90, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___tipAxis;

  /// @brief Field bone1TwistAxis, offset: 0x9c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___bone1TwistAxis;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::Finger, 0xa8>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Finger, ___weight) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Finger, ___rotationWeight) == 0x14, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Finger, ___rotationDOF) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Finger, ___fixBone1Twist) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Finger, ___bone1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Finger, ___bone2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Finger, ___bone3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Finger, ___tip) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Finger, ___target) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Finger, ____initiated_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Finger, ___solver) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Finger, ___bone3RelativeToTarget) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Finger, ___bone3DefaultLocalPosition) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Finger, ___bone3DefaultLocalRotation) == 0x74, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Finger, ___bone1Axis) == 0x84, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Finger, ___tipAxis) == 0x90, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Finger, ___bone1TwistAxis) == 0x9c, "Offset mismatch!");

} // namespace RootMotion::FinalIK
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__Finger__DOF, "RootMotion.FinalIK", "Finger/DOF");
NEED_NO_BOX(::RootMotion::FinalIK::Finger);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::Finger*, "RootMotion.FinalIK", "Finger");
