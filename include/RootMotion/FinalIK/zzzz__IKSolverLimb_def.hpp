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
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct AvatarIKGoal;
}
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
struct __IKSolverLimb__BendModifier;
}
namespace RootMotion::FinalIK {
struct __IKSolverLimb__AxisDirection;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12576))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __IKSolverLimb__BendModifier(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKSolverLimb__BendModifier();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Animation value: static_cast<int32_t>(0x0)
  static ::RootMotion::FinalIK::__IKSolverLimb__BendModifier const Animation;

  /// @brief Field Target value: static_cast<int32_t>(0x1)
  static ::RootMotion::FinalIK::__IKSolverLimb__BendModifier const Target;

  /// @brief Field Parent value: static_cast<int32_t>(0x2)
  static ::RootMotion::FinalIK::__IKSolverLimb__BendModifier const Parent;

  /// @brief Field Arm value: static_cast<int32_t>(0x3)
  static ::RootMotion::FinalIK::__IKSolverLimb__BendModifier const Arm;

  /// @brief Field Goal value: static_cast<int32_t>(0x4)
  static ::RootMotion::FinalIK::__IKSolverLimb__BendModifier const Goal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__IKSolverLimb__BendModifier, 0x4>, "Size mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::AxisDirection
// SizeInfo { instance_size: 28, native_size: 28, calculated_instance_size: 28, calculated_native_size: 44, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12577))
// CS Name: ::IKSolverLimb::AxisDirection
struct CORDL_TYPE __IKSolverLimb__AxisDirection {
public:
  // Declarations
  /// @brief Method .ctor addr 0x126ce08 size 0x19c virtual false final false
  inline void _ctor(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 axis);

  // Ctor Parameters [CppParam { name: "direction", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "axis", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
  // None }, CppParam { name: "dot", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __IKSolverLimb__AxisDirection(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 axis, float_t dot) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKSolverLimb__AxisDirection();

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

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::IKSolverLimb
// SizeInfo { instance_size: 320, native_size: -1, calculated_instance_size: 320, calculated_native_size: 320, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12576)), TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(12582)),
// TypeDefinitionIndex(TypeDefinitionIndex(14871)), TypeDefinitionIndex(TypeDefinitionIndex(10249))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12578)) CS Name: ::RootMotion.FinalIK::IKSolverLimb*
class CORDL_TYPE IKSolverLimb : public ::RootMotion::FinalIK::IKSolverTrigonometric {
public:
  // Declarations
  using AxisDirection = ::RootMotion::FinalIK::__IKSolverLimb__AxisDirection;

  using BendModifier = ::RootMotion::FinalIK::__IKSolverLimb__BendModifier;

  /// @brief Field goal, offset 0xa8, size 0x4
  __declspec(property(get = __get_goal, put = __set_goal))::UnityEngine::AvatarIKGoal goal;

  /// @brief Field bendModifier, offset 0xac, size 0x4
  __declspec(property(get = __get_bendModifier, put = __set_bendModifier))::RootMotion::FinalIK::__IKSolverLimb__BendModifier bendModifier;

  /// @brief Field maintainRotationWeight, offset 0xb0, size 0x4
  __declspec(property(get = __get_maintainRotationWeight, put = __set_maintainRotationWeight)) float_t maintainRotationWeight;

  /// @brief Field bendModifierWeight, offset 0xb4, size 0x4
  __declspec(property(get = __get_bendModifierWeight, put = __set_bendModifierWeight)) float_t bendModifierWeight;

  /// @brief Field bendGoal, offset 0xb8, size 0x8
  __declspec(property(get = __get_bendGoal, put = __set_bendGoal))::UnityEngine::Transform* bendGoal;

  /// @brief Field maintainBendFor1Frame, offset 0xc0, size 0x1
  __declspec(property(get = __get_maintainBendFor1Frame, put = __set_maintainBendFor1Frame)) bool maintainBendFor1Frame;

  /// @brief Field maintainRotationFor1Frame, offset 0xc1, size 0x1
  __declspec(property(get = __get_maintainRotationFor1Frame, put = __set_maintainRotationFor1Frame)) bool maintainRotationFor1Frame;

  /// @brief Field defaultRootRotation, offset 0xc4, size 0x10
  __declspec(property(get = __get_defaultRootRotation, put = __set_defaultRootRotation))::UnityEngine::Quaternion defaultRootRotation;

  /// @brief Field parentDefaultRotation, offset 0xd4, size 0x10
  __declspec(property(get = __get_parentDefaultRotation, put = __set_parentDefaultRotation))::UnityEngine::Quaternion parentDefaultRotation;

  /// @brief Field bone3RotationBeforeSolve, offset 0xe4, size 0x10
  __declspec(property(get = __get_bone3RotationBeforeSolve, put = __set_bone3RotationBeforeSolve))::UnityEngine::Quaternion bone3RotationBeforeSolve;

  /// @brief Field maintainRotation, offset 0xf4, size 0x10
  __declspec(property(get = __get_maintainRotation, put = __set_maintainRotation))::UnityEngine::Quaternion maintainRotation;

  /// @brief Field bone3DefaultRotation, offset 0x104, size 0x10
  __declspec(property(get = __get_bone3DefaultRotation, put = __set_bone3DefaultRotation))::UnityEngine::Quaternion bone3DefaultRotation;

  /// @brief Field _bendNormal, offset 0x114, size 0xc
  __declspec(property(get = __get__bendNormal, put = __set__bendNormal))::UnityEngine::Vector3 _bendNormal;

  /// @brief Field animationNormal, offset 0x120, size 0xc
  __declspec(property(get = __get_animationNormal, put = __set_animationNormal))::UnityEngine::Vector3 animationNormal;

  /// @brief Field axisDirectionsLeft, offset 0x130, size 0x8
  __declspec(property(get = __get_axisDirectionsLeft,
                      put = __set_axisDirectionsLeft))::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> axisDirectionsLeft;

  /// @brief Field axisDirectionsRight, offset 0x138, size 0x8
  __declspec(
      property(get = __get_axisDirectionsRight,
               put = __set_axisDirectionsRight))::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> axisDirectionsRight;

  __declspec(property(get = get_axisDirections))::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> axisDirections;

  constexpr ::UnityEngine::AvatarIKGoal& __get_goal();

  constexpr ::UnityEngine::AvatarIKGoal const& __get_goal() const;

  constexpr void __set_goal(::UnityEngine::AvatarIKGoal value);

  constexpr ::RootMotion::FinalIK::__IKSolverLimb__BendModifier& __get_bendModifier();

  constexpr ::RootMotion::FinalIK::__IKSolverLimb__BendModifier const& __get_bendModifier() const;

  constexpr void __set_bendModifier(::RootMotion::FinalIK::__IKSolverLimb__BendModifier value);

  constexpr float_t& __get_maintainRotationWeight();

  constexpr float_t const& __get_maintainRotationWeight() const;

  constexpr void __set_maintainRotationWeight(float_t value);

  constexpr float_t& __get_bendModifierWeight();

  constexpr float_t const& __get_bendModifierWeight() const;

  constexpr void __set_bendModifierWeight(float_t value);

  constexpr ::UnityEngine::Transform*& __get_bendGoal();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_bendGoal() const;

  constexpr void __set_bendGoal(::UnityEngine::Transform* value);

  constexpr bool& __get_maintainBendFor1Frame();

  constexpr bool const& __get_maintainBendFor1Frame() const;

  constexpr void __set_maintainBendFor1Frame(bool value);

  constexpr bool& __get_maintainRotationFor1Frame();

  constexpr bool const& __get_maintainRotationFor1Frame() const;

  constexpr void __set_maintainRotationFor1Frame(bool value);

  constexpr ::UnityEngine::Quaternion& __get_defaultRootRotation();

  constexpr ::UnityEngine::Quaternion const& __get_defaultRootRotation() const;

  constexpr void __set_defaultRootRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get_parentDefaultRotation();

  constexpr ::UnityEngine::Quaternion const& __get_parentDefaultRotation() const;

  constexpr void __set_parentDefaultRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get_bone3RotationBeforeSolve();

  constexpr ::UnityEngine::Quaternion const& __get_bone3RotationBeforeSolve() const;

  constexpr void __set_bone3RotationBeforeSolve(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get_maintainRotation();

  constexpr ::UnityEngine::Quaternion const& __get_maintainRotation() const;

  constexpr void __set_maintainRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get_bone3DefaultRotation();

  constexpr ::UnityEngine::Quaternion const& __get_bone3DefaultRotation() const;

  constexpr void __set_bone3DefaultRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Vector3& __get__bendNormal();

  constexpr ::UnityEngine::Vector3 const& __get__bendNormal() const;

  constexpr void __set__bendNormal(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_animationNormal();

  constexpr ::UnityEngine::Vector3 const& __get_animationNormal() const;

  constexpr void __set_animationNormal(::UnityEngine::Vector3 value);

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>& __get_axisDirectionsLeft();

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> const& __get_axisDirectionsLeft() const;

  constexpr void __set_axisDirectionsLeft(::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> value);

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>& __get_axisDirectionsRight();

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> const& __get_axisDirectionsRight() const;

  constexpr void __set_axisDirectionsRight(::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> value);

  /// @brief Method MaintainRotation addr 0x126ba1c size 0x44 virtual false final false
  inline void MaintainRotation();

  /// @brief Method MaintainBend addr 0x126ba60 size 0x3c virtual false final false
  inline void MaintainBend();

  /// @brief Method OnInitiateVirtual addr 0x126bacc size 0x35c virtual true final false
  inline void OnInitiateVirtual();

  /// @brief Method OnUpdateVirtual addr 0x126c014 size 0xbc virtual true final false
  inline void OnUpdateVirtual();

  /// @brief Method OnPostSolveVirtual addr 0x126cb30 size 0xa8 virtual true final false
  inline void OnPostSolveVirtual();

  static inline ::RootMotion::FinalIK::IKSolverLimb* New_ctor();

  /// @brief Method .ctor addr 0x126cbd8 size 0x6c virtual false final false
  inline void _ctor();

  static inline ::RootMotion::FinalIK::IKSolverLimb* New_ctor(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method .ctor addr 0x126cd6c size 0x80 virtual false final false
  inline void _ctor(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method get_axisDirections addr 0x126cdec size 0x1c virtual false final false
  inline ::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*> get_axisDirections();

  /// @brief Method StoreAxisDirections addr 0x126be28 size 0x1ec virtual false final false
  inline void StoreAxisDirections(ByRef<::ArrayW<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, ::Array<::RootMotion::FinalIK::__IKSolverLimb__AxisDirection>*>> axisDirections);

  /// @brief Method GetModifiedBendNormal addr 0x126c0d0 size 0xa60 virtual false final false
  inline ::UnityEngine::Vector3 GetModifiedBendNormal();

  // Ctor Parameters [CppParam { name: "", ty: "IKSolverLimb", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKSolverLimb(IKSolverLimb&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKSolverLimb", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKSolverLimb(IKSolverLimb const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKSolverLimb();

public:
  /// @brief Field goal, offset: 0xa8, size: 0x4, def value: None
  ::UnityEngine::AvatarIKGoal ___goal;

  /// @brief Field bendModifier, offset: 0xac, size: 0x4, def value: None
  ::RootMotion::FinalIK::__IKSolverLimb__BendModifier ___bendModifier;

  /// @brief Field maintainRotationWeight, offset: 0xb0, size: 0x4, def value: None
  float_t ___maintainRotationWeight;

  /// @brief Field bendModifierWeight, offset: 0xb4, size: 0x4, def value: None
  float_t ___bendModifierWeight;

  /// @brief Field bendGoal, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Transform* ___bendGoal;

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

} // namespace RootMotion::FinalIK
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__IKSolverLimb__BendModifier, "RootMotion.FinalIK", "IKSolverLimb/BendModifier");
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverLimb);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverLimb*, "RootMotion.FinalIK", "IKSolverLimb");
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__IKSolverLimb__AxisDirection, "RootMotion.FinalIK", "IKSolverLimb/AxisDirection");
