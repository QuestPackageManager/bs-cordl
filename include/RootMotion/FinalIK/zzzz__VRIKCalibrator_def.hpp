#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VRIKCalibrator)
namespace GlobalNamespace {
class __VRIKCalibrator__CalibrationData__Target;
}
namespace RootMotion::FinalIK {
class VRIK;
}
namespace RootMotion::FinalIK {
class __IKSolverVR__Leg;
}
namespace RootMotion::FinalIK {
class __VRIKCalibrator__CalibrationData;
}
namespace RootMotion::FinalIK {
class __VRIKCalibrator__Settings;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class __VRIKCalibrator__CalibrationData__Target;
}
namespace RootMotion::FinalIK {
class VRIKCalibrator;
}
namespace RootMotion::FinalIK {
class __VRIKCalibrator__CalibrationData;
}
namespace RootMotion::FinalIK {
class __VRIKCalibrator__Settings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target);
MARK_REF_PTR_T(::RootMotion::FinalIK::VRIKCalibrator);
MARK_REF_PTR_T(::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData);
MARK_REF_PTR_T(::RootMotion::FinalIK::__VRIKCalibrator__Settings);
// Type: ::Settings
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10249))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12669))
// CS Name: ::VRIKCalibrator::Settings*
class CORDL_TYPE __VRIKCalibrator__Settings : public ::System::Object {
public:
  // Declarations
  /// @brief Field scaleMlp, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_scaleMlp, put = __cordl_internal_set_scaleMlp)) float_t scaleMlp;

  /// @brief Field headTrackerForward, offset 0x14, size 0xc
  __declspec(property(get = __cordl_internal_get_headTrackerForward, put = __cordl_internal_set_headTrackerForward))::UnityEngine::Vector3 headTrackerForward;

  /// @brief Field headTrackerUp, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get_headTrackerUp, put = __cordl_internal_set_headTrackerUp))::UnityEngine::Vector3 headTrackerUp;

  /// @brief Field bodyTrackerForward, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get_bodyTrackerForward, put = __cordl_internal_set_bodyTrackerForward))::UnityEngine::Vector3 bodyTrackerForward;

  /// @brief Field bodyTrackerUp, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get_bodyTrackerUp, put = __cordl_internal_set_bodyTrackerUp))::UnityEngine::Vector3 bodyTrackerUp;

  /// @brief Field handTrackerForward, offset 0x44, size 0xc
  __declspec(property(get = __cordl_internal_get_handTrackerForward, put = __cordl_internal_set_handTrackerForward))::UnityEngine::Vector3 handTrackerForward;

  /// @brief Field handTrackerUp, offset 0x50, size 0xc
  __declspec(property(get = __cordl_internal_get_handTrackerUp, put = __cordl_internal_set_handTrackerUp))::UnityEngine::Vector3 handTrackerUp;

  /// @brief Field footTrackerForward, offset 0x5c, size 0xc
  __declspec(property(get = __cordl_internal_get_footTrackerForward, put = __cordl_internal_set_footTrackerForward))::UnityEngine::Vector3 footTrackerForward;

  /// @brief Field footTrackerUp, offset 0x68, size 0xc
  __declspec(property(get = __cordl_internal_get_footTrackerUp, put = __cordl_internal_set_footTrackerUp))::UnityEngine::Vector3 footTrackerUp;

  /// @brief Field headOffset, offset 0x74, size 0xc
  __declspec(property(get = __cordl_internal_get_headOffset, put = __cordl_internal_set_headOffset))::UnityEngine::Vector3 headOffset;

  /// @brief Field handOffset, offset 0x80, size 0xc
  __declspec(property(get = __cordl_internal_get_handOffset, put = __cordl_internal_set_handOffset))::UnityEngine::Vector3 handOffset;

  /// @brief Field footForwardOffset, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_footForwardOffset, put = __cordl_internal_set_footForwardOffset)) float_t footForwardOffset;

  /// @brief Field footInwardOffset, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_footInwardOffset, put = __cordl_internal_set_footInwardOffset)) float_t footInwardOffset;

  /// @brief Field footHeadingOffset, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_footHeadingOffset, put = __cordl_internal_set_footHeadingOffset)) float_t footHeadingOffset;

  /// @brief Field pelvisPositionWeight, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_pelvisPositionWeight, put = __cordl_internal_set_pelvisPositionWeight)) float_t pelvisPositionWeight;

  /// @brief Field pelvisRotationWeight, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_pelvisRotationWeight, put = __cordl_internal_set_pelvisRotationWeight)) float_t pelvisRotationWeight;

  constexpr float_t& __cordl_internal_get_scaleMlp();

  constexpr float_t const& __cordl_internal_get_scaleMlp() const;

  constexpr void __cordl_internal_set_scaleMlp(float_t value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_headTrackerForward();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headTrackerForward() const;

  constexpr void __cordl_internal_set_headTrackerForward(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_headTrackerUp();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headTrackerUp() const;

  constexpr void __cordl_internal_set_headTrackerUp(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_bodyTrackerForward();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bodyTrackerForward() const;

  constexpr void __cordl_internal_set_bodyTrackerForward(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_bodyTrackerUp();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bodyTrackerUp() const;

  constexpr void __cordl_internal_set_bodyTrackerUp(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_handTrackerForward();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_handTrackerForward() const;

  constexpr void __cordl_internal_set_handTrackerForward(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_handTrackerUp();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_handTrackerUp() const;

  constexpr void __cordl_internal_set_handTrackerUp(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_footTrackerForward();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_footTrackerForward() const;

  constexpr void __cordl_internal_set_footTrackerForward(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_footTrackerUp();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_footTrackerUp() const;

  constexpr void __cordl_internal_set_footTrackerUp(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_headOffset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headOffset() const;

  constexpr void __cordl_internal_set_headOffset(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_handOffset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_handOffset() const;

  constexpr void __cordl_internal_set_handOffset(::UnityEngine::Vector3 value);

  constexpr float_t& __cordl_internal_get_footForwardOffset();

  constexpr float_t const& __cordl_internal_get_footForwardOffset() const;

  constexpr void __cordl_internal_set_footForwardOffset(float_t value);

  constexpr float_t& __cordl_internal_get_footInwardOffset();

  constexpr float_t const& __cordl_internal_get_footInwardOffset() const;

  constexpr void __cordl_internal_set_footInwardOffset(float_t value);

  constexpr float_t& __cordl_internal_get_footHeadingOffset();

  constexpr float_t const& __cordl_internal_get_footHeadingOffset() const;

  constexpr void __cordl_internal_set_footHeadingOffset(float_t value);

  constexpr float_t& __cordl_internal_get_pelvisPositionWeight();

  constexpr float_t const& __cordl_internal_get_pelvisPositionWeight() const;

  constexpr void __cordl_internal_set_pelvisPositionWeight(float_t value);

  constexpr float_t& __cordl_internal_get_pelvisRotationWeight();

  constexpr float_t const& __cordl_internal_get_pelvisRotationWeight() const;

  constexpr void __cordl_internal_set_pelvisRotationWeight(float_t value);

  static inline ::RootMotion::FinalIK::__VRIKCalibrator__Settings* New_ctor();

  /// @brief Method .ctor, addr 0x129d3f8, size 0x204, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__VRIKCalibrator__Settings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VRIKCalibrator__Settings(__VRIKCalibrator__Settings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VRIKCalibrator__Settings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VRIKCalibrator__Settings(__VRIKCalibrator__Settings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VRIKCalibrator__Settings();

public:
  /// @brief Field scaleMlp, offset: 0x10, size: 0x4, def value: None
  float_t ___scaleMlp;

  /// @brief Field headTrackerForward, offset: 0x14, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___headTrackerForward;

  /// @brief Field headTrackerUp, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___headTrackerUp;

  /// @brief Field bodyTrackerForward, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___bodyTrackerForward;

  /// @brief Field bodyTrackerUp, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___bodyTrackerUp;

  /// @brief Field handTrackerForward, offset: 0x44, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___handTrackerForward;

  /// @brief Field handTrackerUp, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___handTrackerUp;

  /// @brief Field footTrackerForward, offset: 0x5c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___footTrackerForward;

  /// @brief Field footTrackerUp, offset: 0x68, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___footTrackerUp;

  /// @brief Field headOffset, offset: 0x74, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___headOffset;

  /// @brief Field handOffset, offset: 0x80, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___handOffset;

  /// @brief Field footForwardOffset, offset: 0x8c, size: 0x4, def value: None
  float_t ___footForwardOffset;

  /// @brief Field footInwardOffset, offset: 0x90, size: 0x4, def value: None
  float_t ___footInwardOffset;

  /// @brief Field footHeadingOffset, offset: 0x94, size: 0x4, def value: None
  float_t ___footHeadingOffset;

  /// @brief Field pelvisPositionWeight, offset: 0x98, size: 0x4, def value: None
  float_t ___pelvisPositionWeight;

  /// @brief Field pelvisRotationWeight, offset: 0x9c, size: 0x4, def value: None
  float_t ___pelvisRotationWeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__VRIKCalibrator__Settings, 0xa0>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__Settings, ___scaleMlp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__Settings, ___headTrackerForward) == 0x14, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__Settings, ___headTrackerUp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__Settings, ___bodyTrackerForward) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__Settings, ___bodyTrackerUp) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__Settings, ___handTrackerForward) == 0x44, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__Settings, ___handTrackerUp) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__Settings, ___footTrackerForward) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__Settings, ___footTrackerUp) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__Settings, ___headOffset) == 0x74, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__Settings, ___handOffset) == 0x80, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__Settings, ___footForwardOffset) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__Settings, ___footInwardOffset) == 0x90, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__Settings, ___footHeadingOffset) == 0x94, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__Settings, ___pelvisPositionWeight) == 0x98, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__Settings, ___pelvisRotationWeight) == 0x9c, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::Target
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10252))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12670))
// CS Name: ::VRIKCalibrator::CalibrationData::Target*
class CORDL_TYPE __VRIKCalibrator__CalibrationData__Target : public ::System::Object {
public:
  // Declarations
  /// @brief Field used, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_used, put = __cordl_internal_set_used)) bool used;

  /// @brief Field localPosition, offset 0x14, size 0xc
  __declspec(property(get = __cordl_internal_get_localPosition, put = __cordl_internal_set_localPosition))::UnityEngine::Vector3 localPosition;

  /// @brief Field localRotation, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_localRotation, put = __cordl_internal_set_localRotation))::UnityEngine::Quaternion localRotation;

  constexpr bool& __cordl_internal_get_used();

  constexpr bool const& __cordl_internal_get_used() const;

  constexpr void __cordl_internal_set_used(bool value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_localPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localPosition() const;

  constexpr void __cordl_internal_set_localPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_localRotation();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_localRotation() const;

  constexpr void __cordl_internal_set_localRotation(::UnityEngine::Quaternion value);

  static inline ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* New_ctor(::UnityEngine::Transform* t);

  /// @brief Method .ctor, addr 0x129c650, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* t);

  /// @brief Method SetTo, addr 0x129cff8, size 0x5c, virtual false, abstract: false, final false
  inline void SetTo(::UnityEngine::Transform* t);

  // Ctor Parameters [CppParam { name: "", ty: "__VRIKCalibrator__CalibrationData__Target", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VRIKCalibrator__CalibrationData__Target(__VRIKCalibrator__CalibrationData__Target&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VRIKCalibrator__CalibrationData__Target", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VRIKCalibrator__CalibrationData__Target(__VRIKCalibrator__CalibrationData__Target const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VRIKCalibrator__CalibrationData__Target();

public:
  /// @brief Field used, offset: 0x10, size: 0x1, def value: None
  bool ___used;

  /// @brief Field localPosition, offset: 0x14, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___localPosition;

  /// @brief Field localRotation, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___localRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target, ___used) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target, ___localPosition) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target, ___localRotation) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CalibrationData
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10249))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12671))
// CS Name: ::VRIKCalibrator::CalibrationData*
class CORDL_TYPE __VRIKCalibrator__CalibrationData : public ::System::Object {
public:
  // Declarations
  using Target = ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target;

  /// @brief Field scale, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_scale, put = __cordl_internal_set_scale)) float_t scale;

  /// @brief Field head, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_head, put = __cordl_internal_set_head))::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* head;

  /// @brief Field leftHand, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHand, put = __cordl_internal_set_leftHand))::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* leftHand;

  /// @brief Field rightHand, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHand, put = __cordl_internal_set_rightHand))::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* rightHand;

  /// @brief Field pelvis, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_pelvis, put = __cordl_internal_set_pelvis))::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* pelvis;

  /// @brief Field leftFoot, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_leftFoot, put = __cordl_internal_set_leftFoot))::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* leftFoot;

  /// @brief Field rightFoot, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_rightFoot, put = __cordl_internal_set_rightFoot))::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* rightFoot;

  /// @brief Field leftLegGoal, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_leftLegGoal, put = __cordl_internal_set_leftLegGoal))::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* leftLegGoal;

  /// @brief Field rightLegGoal, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_rightLegGoal, put = __cordl_internal_set_rightLegGoal))::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* rightLegGoal;

  /// @brief Field pelvisTargetRight, offset 0x58, size 0xc
  __declspec(property(get = __cordl_internal_get_pelvisTargetRight, put = __cordl_internal_set_pelvisTargetRight))::UnityEngine::Vector3 pelvisTargetRight;

  /// @brief Field pelvisPositionWeight, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_pelvisPositionWeight, put = __cordl_internal_set_pelvisPositionWeight)) float_t pelvisPositionWeight;

  /// @brief Field pelvisRotationWeight, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_pelvisRotationWeight, put = __cordl_internal_set_pelvisRotationWeight)) float_t pelvisRotationWeight;

  constexpr float_t& __cordl_internal_get_scale();

  constexpr float_t const& __cordl_internal_get_scale() const;

  constexpr void __cordl_internal_set_scale(float_t value);

  constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*& __cordl_internal_get_head();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> const& __cordl_internal_get_head() const;

  constexpr void __cordl_internal_set_head(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* value);

  constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*& __cordl_internal_get_leftHand();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> const& __cordl_internal_get_leftHand() const;

  constexpr void __cordl_internal_set_leftHand(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* value);

  constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*& __cordl_internal_get_rightHand();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> const& __cordl_internal_get_rightHand() const;

  constexpr void __cordl_internal_set_rightHand(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* value);

  constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*& __cordl_internal_get_pelvis();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> const& __cordl_internal_get_pelvis() const;

  constexpr void __cordl_internal_set_pelvis(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* value);

  constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*& __cordl_internal_get_leftFoot();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> const& __cordl_internal_get_leftFoot() const;

  constexpr void __cordl_internal_set_leftFoot(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* value);

  constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*& __cordl_internal_get_rightFoot();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> const& __cordl_internal_get_rightFoot() const;

  constexpr void __cordl_internal_set_rightFoot(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* value);

  constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*& __cordl_internal_get_leftLegGoal();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> const& __cordl_internal_get_leftLegGoal() const;

  constexpr void __cordl_internal_set_leftLegGoal(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* value);

  constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*& __cordl_internal_get_rightLegGoal();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> const& __cordl_internal_get_rightLegGoal() const;

  constexpr void __cordl_internal_set_rightLegGoal(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_pelvisTargetRight();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pelvisTargetRight() const;

  constexpr void __cordl_internal_set_pelvisTargetRight(::UnityEngine::Vector3 value);

  constexpr float_t& __cordl_internal_get_pelvisPositionWeight();

  constexpr float_t const& __cordl_internal_get_pelvisPositionWeight() const;

  constexpr void __cordl_internal_set_pelvisPositionWeight(float_t value);

  constexpr float_t& __cordl_internal_get_pelvisRotationWeight();

  constexpr float_t const& __cordl_internal_get_pelvisRotationWeight() const;

  constexpr void __cordl_internal_set_pelvisRotationWeight(float_t value);

  static inline ::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData* New_ctor();

  /// @brief Method .ctor, addr 0x129bdd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__VRIKCalibrator__CalibrationData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VRIKCalibrator__CalibrationData(__VRIKCalibrator__CalibrationData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VRIKCalibrator__CalibrationData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VRIKCalibrator__CalibrationData(__VRIKCalibrator__CalibrationData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VRIKCalibrator__CalibrationData();

public:
  /// @brief Field scale, offset: 0x10, size: 0x4, def value: None
  float_t ___scale;

  /// @brief Field head, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* ___head;

  /// @brief Field leftHand, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* ___leftHand;

  /// @brief Field rightHand, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* ___rightHand;

  /// @brief Field pelvis, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* ___pelvis;

  /// @brief Field leftFoot, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* ___leftFoot;

  /// @brief Field rightFoot, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* ___rightFoot;

  /// @brief Field leftLegGoal, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* ___leftLegGoal;

  /// @brief Field rightLegGoal, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* ___rightLegGoal;

  /// @brief Field pelvisTargetRight, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___pelvisTargetRight;

  /// @brief Field pelvisPositionWeight, offset: 0x64, size: 0x4, def value: None
  float_t ___pelvisPositionWeight;

  /// @brief Field pelvisRotationWeight, offset: 0x68, size: 0x4, def value: None
  float_t ___pelvisRotationWeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData, 0x70>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData, ___scale) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData, ___head) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData, ___leftHand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData, ___rightHand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData, ___pelvis) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData, ___leftFoot) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData, ___rightFoot) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData, ___leftLegGoal) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData, ___rightLegGoal) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData, ___pelvisTargetRight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData, ___pelvisPositionWeight) == 0x64, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData, ___pelvisRotationWeight) == 0x68, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::VRIKCalibrator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12672))
// CS Name: ::RootMotion.FinalIK::VRIKCalibrator*
class CORDL_TYPE VRIKCalibrator : public ::System::Object {
public:
  // Declarations
  using CalibrationData = ::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData;

  using Settings = ::RootMotion::FinalIK::__VRIKCalibrator__Settings;

  /// @brief Method RecalibrateScale, addr 0x129aaa0, size 0xf4, virtual false, abstract: false, final false
  static inline void RecalibrateScale(::RootMotion::FinalIK::VRIK* ik, ::RootMotion::FinalIK::__VRIKCalibrator__Settings* settings);

  /// @brief Method Calibrate, addr 0x129ab94, size 0x123c, virtual false, abstract: false, final false
  static inline ::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData* Calibrate(::RootMotion::FinalIK::VRIK* ik, ::RootMotion::FinalIK::__VRIKCalibrator__Settings* settings,
                                                                                    ::UnityEngine::Transform* headTracker, ::UnityEngine::Transform* bodyTracker,
                                                                                    ::UnityEngine::Transform* leftHandTracker, ::UnityEngine::Transform* rightHandTracker,
                                                                                    ::UnityEngine::Transform* leftFootTracker, ::UnityEngine::Transform* rightFootTracker);

  /// @brief Method CalibrateLeg, addr 0x129bdd8, size 0x6b8, virtual false, abstract: false, final false
  static inline void CalibrateLeg(::RootMotion::FinalIK::__VRIKCalibrator__Settings* settings, ::UnityEngine::Transform* tracker, ::RootMotion::FinalIK::__IKSolverVR__Leg* leg,
                                  ::UnityEngine::Transform* lastBone, ::UnityEngine::Vector3 rootForward, bool isLeft);

  /// @brief Method Calibrate, addr 0x129c704, size 0x8f4, virtual false, abstract: false, final false
  static inline void Calibrate(::RootMotion::FinalIK::VRIK* ik, ::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData* data, ::UnityEngine::Transform* headTracker,
                               ::UnityEngine::Transform* bodyTracker, ::UnityEngine::Transform* leftHandTracker, ::UnityEngine::Transform* rightHandTracker, ::UnityEngine::Transform* leftFootTracker,
                               ::UnityEngine::Transform* rightFootTracker);

  /// @brief Method CalibrateLeg, addr 0x129d054, size 0x24c, virtual false, abstract: false, final false
  static inline void CalibrateLeg(::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData* data, ::UnityEngine::Transform* tracker, ::RootMotion::FinalIK::__IKSolverVR__Leg* leg,
                                  ::UnityEngine::Transform* lastBone, ::UnityEngine::Vector3 rootForward, bool isLeft);

  // Ctor Parameters [CppParam { name: "", ty: "VRIKCalibrator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRIKCalibrator(VRIKCalibrator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRIKCalibrator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRIKCalibrator(VRIKCalibrator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRIKCalibrator();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::VRIKCalibrator, 0x10>, "Size mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*, "RootMotion.FinalIK", "VRIKCalibrator/CalibrationData/Target");
NEED_NO_BOX(::RootMotion::FinalIK::VRIKCalibrator);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::VRIKCalibrator*, "RootMotion.FinalIK", "VRIKCalibrator");
NEED_NO_BOX(::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*, "RootMotion.FinalIK", "VRIKCalibrator/CalibrationData");
NEED_NO_BOX(::RootMotion::FinalIK::__VRIKCalibrator__Settings);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__VRIKCalibrator__Settings*, "RootMotion.FinalIK", "VRIKCalibrator/Settings");
