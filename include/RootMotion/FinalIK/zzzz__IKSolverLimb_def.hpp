#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IKSolverLimb_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverTrigonometric_def.hpp"
#include "UnityEngine/zzzz__AvatarIKGoal_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IKSolverLimb)
namespace RootMotion::FinalIK {
struct __IKSolverLimb__AxisDirection;
}
namespace RootMotion::FinalIK {
struct __IKSolverLimb__BendModifier;
}
namespace UnityEngine {
struct AvatarIKGoal;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
struct __IKSolverLimb__BendModifier;
}
namespace RootMotion::FinalIK {
class IKSolverLimb;
}
namespace RootMotion::FinalIK {
struct __IKSolverLimb__AxisDirection;
}
// Write type traits
MARK_VAL_T(::RootMotion::FinalIK::__IKSolverLimb__BendModifier);
MARK_REF_PTR_T(::RootMotion::FinalIK::IKSolverLimb);
MARK_VAL_T(::RootMotion::FinalIK::__IKSolverLimb__AxisDirection);
// Type: ::BendModifier
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: true
// CS Name: ::IKSolverLimb::BendModifier
struct CORDL_TYPE __IKSolverLimb__BendModifier {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____IKSolverLimb__BendModifier_Unwrapped
  enum struct ____IKSolverLimb__BendModifier_Unwrapped : int32_t {
    __E_Animation = static_cast<int32_t>(0x0),
    __E_Target = static_cast<int32_t>(0x1),
    __E_Parent = static_cast<int32_t>(0x2),
    __E_Arm = static_cast<int32_t>(0x3),
    __E_Goal = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____IKSolverLimb__BendModifier_Unwrapped() const noexcept {
    return static_cast<____IKSolverLimb__BendModifier_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<____IKSolverLimb__BendModifier_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKSolverLimb__BendModifier();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __IKSolverLimb__BendModifier(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Animation value: static_cast<int32_t>(0x0)
  static ::RootMotion::FinalIK::__IKSolverLimb__BendModifier const Animation;

  /// @brief Field Arm value: static_cast<int32_t>(0x3)
  static ::RootMotion::FinalIK::__IKSolverLimb__BendModifier const Arm;

  /// @brief Field Goal value: static_cast<int32_t>(0x4)
  static ::RootMotion::FinalIK::__IKSolverLimb__BendModifier const Goal;

  /// @brief Field Parent value: static_cast<int32_t>(0x2)
  static ::RootMotion::FinalIK::__IKSolverLimb__BendModifier const Parent;

  /// @brief Field Target value: static_cast<int32_t>(0x1)
  static ::RootMotion::FinalIK::__IKSolverLimb__BendModifier const Target;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__IKSolverLimb__BendModifier, 0x4>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverLimb__BendModifier, value__) == 0x0, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::AxisDirection
// SizeInfo { instance_size: 28, native_size: 28, calculated_instance_size: 28, calculated_native_size: 44, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: true
// CS Name: ::IKSolverLimb::AxisDirection
struct CORDL_TYPE __IKSolverLimb__AxisDirection {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x1347ea4, size 0x19c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 axis);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKSolverLimb__AxisDirection();

  // Ctor Parameters [CppParam { name: "direction", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "axis", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
  // None }, CppParam { name: "dot", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __IKSolverLimb__AxisDirection(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 axis, float_t dot) noexcept;

  /// @brief Field direction, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 direction;

  /// @brief Field axis, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 axis;

  /// @brief Field dot, offset: 0x18, size: 0x4, def value: None
  float_t dot;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, 0x1c>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, direction) == 0x0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, axis) == 0xc, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, dot) == 0x18, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::IKSolverLimb
// SizeInfo { instance_size: 320, native_size: -1, calculated_instance_size: 320, calculated_native_size: 320, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::IKSolverLimb*
class CORDL_TYPE IKSolverLimb : public ::RootMotion::FinalIK::IKSolverTrigonometric {
public:
  // Declarations
  using AxisDirection = ::RootMotion::FinalIK::__IKSolverLimb__AxisDirection;

  using BendModifier = ::RootMotion::FinalIK::__IKSolverLimb__BendModifier;

  /// @brief Field _bendNormal, offset 0x114, size 0xc
  __declspec(property(get = __cordl_internal_get__bendNormal, put = __cordl_internal_set__bendNormal))::UnityEngine::Vector3 _bendNormal;

  /// @brief Field animationNormal, offset 0x120, size 0xc
  __declspec(property(get = __cordl_internal_get_animationNormal, put = __cordl_internal_set_animationNormal))::UnityEngine::Vector3 animationNormal;

  __declspec(property(get = get_axisDirections))::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> axisDirections;

  /// @brief Field axisDirectionsLeft, offset 0x130, size 0x8
  __declspec(property(
      get = __cordl_internal_get_axisDirectionsLeft,
      put = __cordl_internal_set_axisDirectionsLeft))::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> axisDirectionsLeft;

  /// @brief Field axisDirectionsRight, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_axisDirectionsRight,
                      put = __cordl_internal_set_axisDirectionsRight))::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection,
                                                                               ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> axisDirectionsRight;

  /// @brief Field bendGoal, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_bendGoal, put = __cordl_internal_set_bendGoal))::UnityW<::UnityEngine::Transform> bendGoal;

  /// @brief Field bendModifier, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get_bendModifier, put = __cordl_internal_set_bendModifier))::RootMotion::FinalIK::__IKSolverLimb__BendModifier bendModifier;

  /// @brief Field bendModifierWeight, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get_bendModifierWeight, put = __cordl_internal_set_bendModifierWeight)) float_t bendModifierWeight;

  /// @brief Field bone3DefaultRotation, offset 0x104, size 0x10
  __declspec(property(get = __cordl_internal_get_bone3DefaultRotation, put = __cordl_internal_set_bone3DefaultRotation))::UnityEngine::Quaternion bone3DefaultRotation;

  /// @brief Field bone3RotationBeforeSolve, offset 0xe4, size 0x10
  __declspec(property(get = __cordl_internal_get_bone3RotationBeforeSolve, put = __cordl_internal_set_bone3RotationBeforeSolve))::UnityEngine::Quaternion bone3RotationBeforeSolve;

  /// @brief Field defaultRootRotation, offset 0xc4, size 0x10
  __declspec(property(get = __cordl_internal_get_defaultRootRotation, put = __cordl_internal_set_defaultRootRotation))::UnityEngine::Quaternion defaultRootRotation;

  /// @brief Field goal, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_goal, put = __cordl_internal_set_goal))::UnityEngine::AvatarIKGoal goal;

  /// @brief Field maintainBendFor1Frame, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get_maintainBendFor1Frame, put = __cordl_internal_set_maintainBendFor1Frame)) bool maintainBendFor1Frame;

  /// @brief Field maintainRotation, offset 0xf4, size 0x10
  __declspec(property(get = __cordl_internal_get_maintainRotation, put = __cordl_internal_set_maintainRotation))::UnityEngine::Quaternion maintainRotation;

  /// @brief Field maintainRotationFor1Frame, offset 0xc1, size 0x1
  __declspec(property(get = __cordl_internal_get_maintainRotationFor1Frame, put = __cordl_internal_set_maintainRotationFor1Frame)) bool maintainRotationFor1Frame;

  /// @brief Field maintainRotationWeight, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get_maintainRotationWeight, put = __cordl_internal_set_maintainRotationWeight)) float_t maintainRotationWeight;

  /// @brief Field parentDefaultRotation, offset 0xd4, size 0x10
  __declspec(property(get = __cordl_internal_get_parentDefaultRotation, put = __cordl_internal_set_parentDefaultRotation))::UnityEngine::Quaternion parentDefaultRotation;

  /// @brief Method GetModifiedBendNormal, addr 0x134716c, size 0xa60, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetModifiedBendNormal();

  /// @brief Method MaintainBend, addr 0x1346afc, size 0x3c, virtual false, abstract: false, final false
  inline void MaintainBend();

  /// @brief Method MaintainRotation, addr 0x1346ab8, size 0x44, virtual false, abstract: false, final false
  inline void MaintainRotation();

  static inline ::RootMotion::FinalIK::IKSolverLimb* New_ctor();

  static inline ::RootMotion::FinalIK::IKSolverLimb* New_ctor(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method OnInitiateVirtual, addr 0x1346b68, size 0x35c, virtual true, abstract: false, final false
  inline void OnInitiateVirtual();

  /// @brief Method OnPostSolveVirtual, addr 0x1347bcc, size 0xa8, virtual true, abstract: false, final false
  inline void OnPostSolveVirtual();

  /// @brief Method OnUpdateVirtual, addr 0x13470b0, size 0xbc, virtual true, abstract: false, final false
  inline void OnUpdateVirtual();

  /// @brief Method StoreAxisDirections, addr 0x1346ec4, size 0x1ec, virtual false, abstract: false, final false
  inline void StoreAxisDirections(ByRef<::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>> axisDirections);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__bendNormal() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__bendNormal();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_animationNormal() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_animationNormal();

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> const& __cordl_internal_get_axisDirectionsLeft() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>& __cordl_internal_get_axisDirectionsLeft();

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> const& __cordl_internal_get_axisDirectionsRight() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>& __cordl_internal_get_axisDirectionsRight();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bendGoal() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bendGoal();

  constexpr ::RootMotion::FinalIK::__IKSolverLimb__BendModifier const& __cordl_internal_get_bendModifier() const;

  constexpr ::RootMotion::FinalIK::__IKSolverLimb__BendModifier& __cordl_internal_get_bendModifier();

  constexpr float_t const& __cordl_internal_get_bendModifierWeight() const;

  constexpr float_t& __cordl_internal_get_bendModifierWeight();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_bone3DefaultRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_bone3DefaultRotation();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_bone3RotationBeforeSolve() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_bone3RotationBeforeSolve();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_defaultRootRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_defaultRootRotation();

  constexpr ::UnityEngine::AvatarIKGoal const& __cordl_internal_get_goal() const;

  constexpr ::UnityEngine::AvatarIKGoal& __cordl_internal_get_goal();

  constexpr bool const& __cordl_internal_get_maintainBendFor1Frame() const;

  constexpr bool& __cordl_internal_get_maintainBendFor1Frame();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_maintainRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_maintainRotation();

  constexpr bool const& __cordl_internal_get_maintainRotationFor1Frame() const;

  constexpr bool& __cordl_internal_get_maintainRotationFor1Frame();

  constexpr float_t const& __cordl_internal_get_maintainRotationWeight() const;

  constexpr float_t& __cordl_internal_get_maintainRotationWeight();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_parentDefaultRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_parentDefaultRotation();

  constexpr void __cordl_internal_set__bendNormal(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_animationNormal(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_axisDirectionsLeft(::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> value);

  constexpr void __cordl_internal_set_axisDirectionsRight(::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> value);

  constexpr void __cordl_internal_set_bendGoal(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_bendModifier(::RootMotion::FinalIK::__IKSolverLimb__BendModifier value);

  constexpr void __cordl_internal_set_bendModifierWeight(float_t value);

  constexpr void __cordl_internal_set_bone3DefaultRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_bone3RotationBeforeSolve(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_defaultRootRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_goal(::UnityEngine::AvatarIKGoal value);

  constexpr void __cordl_internal_set_maintainBendFor1Frame(bool value);

  constexpr void __cordl_internal_set_maintainRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_maintainRotationFor1Frame(bool value);

  constexpr void __cordl_internal_set_maintainRotationWeight(float_t value);

  constexpr void __cordl_internal_set_parentDefaultRotation(::UnityEngine::Quaternion value);

  /// @brief Method .ctor, addr 0x1347c74, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1347e08, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method get_axisDirections, addr 0x1347e88, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> get_axisDirections();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKSolverLimb();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IKSolverLimb", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKSolverLimb(IKSolverLimb&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKSolverLimb", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKSolverLimb(IKSolverLimb const&) = delete;

  /// @brief Field goal, offset: 0xa8, size: 0x4, def value: None
  ::UnityEngine::AvatarIKGoal ___goal;

  /// @brief Field bendModifier, offset: 0xac, size: 0x4, def value: None
  ::RootMotion::FinalIK::__IKSolverLimb__BendModifier ___bendModifier;

  /// @brief Field maintainRotationWeight, offset: 0xb0, size: 0x4, def value: None
  float_t ___maintainRotationWeight;

  /// @brief Field bendModifierWeight, offset: 0xb4, size: 0x4, def value: None
  float_t ___bendModifierWeight;

  /// @brief Field bendGoal, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bendGoal;

  /// @brief Field maintainBendFor1Frame, offset: 0xc0, size: 0x1, def value: None
  bool ___maintainBendFor1Frame;

  /// @brief Field maintainRotationFor1Frame, offset: 0xc1, size: 0x1, def value: None
  bool ___maintainRotationFor1Frame;

  /// @brief Field defaultRootRotation, offset: 0xc4, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___defaultRootRotation;

  /// @brief Field parentDefaultRotation, offset: 0xd4, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___parentDefaultRotation;

  /// @brief Field bone3RotationBeforeSolve, offset: 0xe4, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___bone3RotationBeforeSolve;

  /// @brief Field maintainRotation, offset: 0xf4, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___maintainRotation;

  /// @brief Field bone3DefaultRotation, offset: 0x104, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___bone3DefaultRotation;

  /// @brief Field _bendNormal, offset: 0x114, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____bendNormal;

  /// @brief Field animationNormal, offset: 0x120, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___animationNormal;

  /// @brief Field axisDirectionsLeft, offset: 0x130, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> ___axisDirectionsLeft;

  /// @brief Field axisDirectionsRight, offset: 0x138, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> ___axisDirectionsRight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKSolverLimb, 0x140>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLimb, ___goal) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLimb, ___bendModifier) == 0xac, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLimb, ___maintainRotationWeight) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLimb, ___bendModifierWeight) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLimb, ___bendGoal) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLimb, ___maintainBendFor1Frame) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLimb, ___maintainRotationFor1Frame) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLimb, ___defaultRootRotation) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLimb, ___parentDefaultRotation) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLimb, ___bone3RotationBeforeSolve) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLimb, ___maintainRotation) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLimb, ___bone3DefaultRotation) == 0x104, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLimb, ____bendNormal) == 0x114, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLimb, ___animationNormal) == 0x120, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLimb, ___axisDirectionsLeft) == 0x130, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLimb, ___axisDirectionsRight) == 0x138, "Offset mismatch!");

} // namespace RootMotion::FinalIK
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__IKSolverLimb__BendModifier, "RootMotion.FinalIK", "IKSolverLimb/BendModifier");
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverLimb);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverLimb*, "RootMotion.FinalIK", "IKSolverLimb");
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, "RootMotion.FinalIK", "IKSolverLimb/AxisDirection");
