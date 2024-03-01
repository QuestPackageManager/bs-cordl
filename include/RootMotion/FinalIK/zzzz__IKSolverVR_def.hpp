#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IKSolverVR_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "RootMotion/zzzz__InterpolationMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IKSolverVR)
namespace GlobalNamespace {
struct __IKSolverVR__Arm__ShoulderRotationMode;
}
namespace RootMotion::FinalIK {
class __IKSolverVR__Arm;
}
namespace RootMotion::FinalIK {
class __IKSolverVR__BodyPart;
}
namespace RootMotion::FinalIK {
class __IKSolverVR__Footstep;
}
namespace RootMotion::FinalIK {
class __IKSolverVR__Leg;
}
namespace RootMotion::FinalIK {
class __IKSolverVR__Locomotion;
}
namespace RootMotion::FinalIK {
struct __IKSolverVR__PositionOffset;
}
namespace RootMotion::FinalIK {
struct __IKSolverVR__RotationOffset;
}
namespace RootMotion::FinalIK {
class __IKSolverVR__Spine;
}
namespace RootMotion::FinalIK {
class __IKSolverVR__VirtualBone;
}
namespace RootMotion::FinalIK {
class __IKSolver__Point;
}
namespace RootMotion::FinalIK {
class __VRIK__References;
}
namespace RootMotion {
struct InterpolationMode;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Keyframe;
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
namespace GlobalNamespace {
struct __IKSolverVR__Arm__ShoulderRotationMode;
}
namespace RootMotion::FinalIK {
struct __IKSolverVR__PositionOffset;
}
namespace RootMotion::FinalIK {
struct __IKSolverVR__RotationOffset;
}
namespace RootMotion::FinalIK {
class IKSolverVR;
}
namespace RootMotion::FinalIK {
class __IKSolverVR__Arm;
}
namespace RootMotion::FinalIK {
class __IKSolverVR__BodyPart;
}
namespace RootMotion::FinalIK {
class __IKSolverVR__Footstep;
}
namespace RootMotion::FinalIK {
class __IKSolverVR__Leg;
}
namespace RootMotion::FinalIK {
class __IKSolverVR__Locomotion;
}
namespace RootMotion::FinalIK {
class __IKSolverVR__Spine;
}
namespace RootMotion::FinalIK {
class __IKSolverVR__VirtualBone;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__IKSolverVR__Arm__ShoulderRotationMode);
MARK_VAL_T(::RootMotion::FinalIK::__IKSolverVR__PositionOffset);
MARK_VAL_T(::RootMotion::FinalIK::__IKSolverVR__RotationOffset);
MARK_REF_PTR_T(::RootMotion::FinalIK::IKSolverVR);
MARK_REF_PTR_T(::RootMotion::FinalIK::__IKSolverVR__Arm);
MARK_REF_PTR_T(::RootMotion::FinalIK::__IKSolverVR__BodyPart);
MARK_REF_PTR_T(::RootMotion::FinalIK::__IKSolverVR__Footstep);
MARK_REF_PTR_T(::RootMotion::FinalIK::__IKSolverVR__Leg);
MARK_REF_PTR_T(::RootMotion::FinalIK::__IKSolverVR__Locomotion);
MARK_REF_PTR_T(::RootMotion::FinalIK::__IKSolverVR__Spine);
MARK_REF_PTR_T(::RootMotion::FinalIK::__IKSolverVR__VirtualBone);
// Type: ::ShoulderRotationMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::IKSolverVR::Arm::ShoulderRotationMode
struct CORDL_TYPE __IKSolverVR__Arm__ShoulderRotationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____IKSolverVR__Arm__ShoulderRotationMode_Unwrapped
  enum struct ____IKSolverVR__Arm__ShoulderRotationMode_Unwrapped : int32_t {
    __E_YawPitch = static_cast<int32_t>(0x0),
    __E_FromTo = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____IKSolverVR__Arm__ShoulderRotationMode_Unwrapped() const noexcept {
    return static_cast<____IKSolverVR__Arm__ShoulderRotationMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKSolverVR__Arm__ShoulderRotationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __IKSolverVR__Arm__ShoulderRotationMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FromTo value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__IKSolverVR__Arm__ShoulderRotationMode const FromTo;

  /// @brief Field YawPitch value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__IKSolverVR__Arm__ShoulderRotationMode const YawPitch;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IKSolverVR__Arm__ShoulderRotationMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__IKSolverVR__Arm__ShoulderRotationMode, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BodyPart
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::IKSolverVR::BodyPart*
class CORDL_TYPE __IKSolverVR__BodyPart : public ::System::Object {
public:
  // Declarations
  /// @brief Field LOD, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_LOD, put = __cordl_internal_set_LOD)) int32_t LOD;

  /// @brief Field <mag>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__mag_k__BackingField, put = __cordl_internal_set__mag_k__BackingField)) float_t _mag_k__BackingField;

  /// @brief Field <sqrMag>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__sqrMag_k__BackingField, put = __cordl_internal_set__sqrMag_k__BackingField)) float_t _sqrMag_k__BackingField;

  /// @brief Field bones, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_bones,
                      put = __cordl_internal_set_bones))::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> bones;

  /// @brief Field index, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  /// @brief Field initiated, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_initiated, put = __cordl_internal_set_initiated)) bool initiated;

  __declspec(property(get = get_mag, put = set_mag)) float_t mag;

  /// @brief Field rootPosition, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get_rootPosition, put = __cordl_internal_set_rootPosition))::UnityEngine::Vector3 rootPosition;

  /// @brief Field rootRotation, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_rootRotation, put = __cordl_internal_set_rootRotation))::UnityEngine::Quaternion rootRotation;

  __declspec(property(get = get_sqrMag, put = set_sqrMag)) float_t sqrMag;

  /// @brief Method ApplyOffsets, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ApplyOffsets();

  /// @brief Method MovePosition, addr 0x1355390, size 0x88, virtual false, abstract: false, final false
  inline void MovePosition(::UnityEngine::Vector3 position);

  /// @brief Method MoveRotation, addr 0x1355418, size 0x98, virtual false, abstract: false, final false
  inline void MoveRotation(::UnityEngine::Quaternion rotation);

  static inline ::RootMotion::FinalIK::__IKSolverVR__BodyPart* New_ctor();

  /// @brief Method OnRead, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnRead(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions, ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> rotations, bool hasChest,
                     bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index);

  /// @brief Method PreSolve, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void PreSolve();

  /// @brief Method Read, addr 0x1346788, size 0xc0, virtual false, abstract: false, final false
  inline void Read(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions, ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> rotations, bool hasChest,
                   bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index);

  /// @brief Method ResetOffsets, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ResetOffsets();

  /// @brief Method RotateTo, addr 0x1354dec, size 0x168, virtual false, abstract: false, final false
  inline void RotateTo(::RootMotion::FinalIK::__IKSolverVR__VirtualBone* bone, ::UnityEngine::Quaternion rotation, float_t weight);

  /// @brief Method SetLOD, addr 0x1355388, size 0x8, virtual false, abstract: false, final false
  inline void SetLOD(int32_t LOD);

  /// @brief Method Translate, addr 0x13554b0, size 0x48, virtual false, abstract: false, final false
  inline void Translate(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method TranslateRoot, addr 0x1351658, size 0x128, virtual false, abstract: false, final false
  inline void TranslateRoot(::UnityEngine::Vector3 newRootPos, ::UnityEngine::Quaternion newRootRot);

  /// @brief Method Visualize, addr 0x135561c, size 0x14, virtual false, abstract: false, final false
  inline void Visualize();

  /// @brief Method Visualize, addr 0x13554f8, size 0x124, virtual false, abstract: false, final false
  inline void Visualize(::UnityEngine::Color color);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Write(ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> solvedPositions,
                    ByRef<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>> solvedRotations);

  constexpr int32_t const& __cordl_internal_get_LOD() const;

  constexpr int32_t& __cordl_internal_get_LOD();

  constexpr float_t const& __cordl_internal_get__mag_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__mag_k__BackingField();

  constexpr float_t const& __cordl_internal_get__sqrMag_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__sqrMag_k__BackingField();

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> const& __cordl_internal_get_bones() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>& __cordl_internal_get_bones();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr bool const& __cordl_internal_get_initiated() const;

  constexpr bool& __cordl_internal_get_initiated();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rootPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_rootPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rootRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rootRotation();

  constexpr void __cordl_internal_set_LOD(int32_t value);

  constexpr void __cordl_internal_set__mag_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__sqrMag_k__BackingField(float_t value);

  constexpr void __cordl_internal_set_bones(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> value);

  constexpr void __cordl_internal_set_index(int32_t value);

  constexpr void __cordl_internal_set_initiated(bool value);

  constexpr void __cordl_internal_set_rootPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_rootRotation(::UnityEngine::Quaternion value);

  /// @brief Method .ctor, addr 0x13552d0, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_mag, addr 0x1355378, size 0x8, virtual false, abstract: false, final false
  inline float_t get_mag();

  /// @brief Method get_sqrMag, addr 0x1355368, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sqrMag();

  /// @brief Method set_mag, addr 0x1355380, size 0x8, virtual false, abstract: false, final false
  inline void set_mag(float_t value);

  /// @brief Method set_sqrMag, addr 0x1355370, size 0x8, virtual false, abstract: false, final false
  inline void set_sqrMag(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKSolverVR__BodyPart();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IKSolverVR__BodyPart", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IKSolverVR__BodyPart(__IKSolverVR__BodyPart&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IKSolverVR__BodyPart", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IKSolverVR__BodyPart(__IKSolverVR__BodyPart const&) = delete;

  /// @brief Field <sqrMag>k__BackingField, offset: 0x10, size: 0x4, def value: None
  float_t ____sqrMag_k__BackingField;

  /// @brief Field <mag>k__BackingField, offset: 0x14, size: 0x4, def value: None
  float_t ____mag_k__BackingField;

  /// @brief Field bones, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> ___bones;

  /// @brief Field initiated, offset: 0x20, size: 0x1, def value: None
  bool ___initiated;

  /// @brief Field rootPosition, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___rootPosition;

  /// @brief Field rootRotation, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___rootRotation;

  /// @brief Field index, offset: 0x40, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field LOD, offset: 0x44, size: 0x4, def value: None
  int32_t ___LOD;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__IKSolverVR__BodyPart, 0x48>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__BodyPart, ____sqrMag_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__BodyPart, ____mag_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__BodyPart, ___bones) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__BodyPart, ___initiated) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__BodyPart, ___rootPosition) == 0x24, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__BodyPart, ___rootRotation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__BodyPart, ___index) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__BodyPart, ___LOD) == 0x44, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::Arm
// SizeInfo { instance_size: 328, native_size: -1, calculated_instance_size: 328, calculated_native_size: 328, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::IKSolverVR::Arm*
class CORDL_TYPE __IKSolverVR__Arm : public ::RootMotion::FinalIK::__IKSolverVR__BodyPart {
public:
  // Declarations
  using ShoulderRotationMode = ::GlobalNamespace::__IKSolverVR__Arm__ShoulderRotationMode;

  /// @brief Field IKPosition, offset 0x98, size 0xc
  __declspec(property(get = __cordl_internal_get_IKPosition, put = __cordl_internal_set_IKPosition))::UnityEngine::Vector3 IKPosition;

  /// @brief Field IKRotation, offset 0xa4, size 0x10
  __declspec(property(get = __cordl_internal_get_IKRotation, put = __cordl_internal_set_IKRotation))::UnityEngine::Quaternion IKRotation;

  /// @brief Field <position>k__BackingField, offset 0xcc, size 0xc
  __declspec(property(get = __cordl_internal_get__position_k__BackingField, put = __cordl_internal_set__position_k__BackingField))::UnityEngine::Vector3 _position_k__BackingField;

  /// @brief Field <rotation>k__BackingField, offset 0xd8, size 0x10
  __declspec(property(get = __cordl_internal_get__rotation_k__BackingField, put = __cordl_internal_set__rotation_k__BackingField))::UnityEngine::Quaternion _rotation_k__BackingField;

  /// @brief Field armLengthMlp, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_armLengthMlp, put = __cordl_internal_set_armLengthMlp)) float_t armLengthMlp;

  /// @brief Field bendDirection, offset 0xb4, size 0xc
  __declspec(property(get = __cordl_internal_get_bendDirection, put = __cordl_internal_set_bendDirection))::UnityEngine::Vector3 bendDirection;

  /// @brief Field bendGoal, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_bendGoal, put = __cordl_internal_set_bendGoal))::UnityW<::UnityEngine::Transform> bendGoal;

  /// @brief Field bendGoalWeight, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_bendGoalWeight, put = __cordl_internal_set_bendGoalWeight)) float_t bendGoalWeight;

  /// @brief Field chestForward, offset 0x114, size 0xc
  __declspec(property(get = __cordl_internal_get_chestForward, put = __cordl_internal_set_chestForward))::UnityEngine::Vector3 chestForward;

  /// @brief Field chestForwardAxis, offset 0xec, size 0xc
  __declspec(property(get = __cordl_internal_get_chestForwardAxis, put = __cordl_internal_set_chestForwardAxis))::UnityEngine::Vector3 chestForwardAxis;

  /// @brief Field chestRotation, offset 0x104, size 0x10
  __declspec(property(get = __cordl_internal_get_chestRotation, put = __cordl_internal_set_chestRotation))::UnityEngine::Quaternion chestRotation;

  /// @brief Field chestUp, offset 0x120, size 0xc
  __declspec(property(get = __cordl_internal_get_chestUp, put = __cordl_internal_set_chestUp))::UnityEngine::Vector3 chestUp;

  /// @brief Field chestUpAxis, offset 0xf8, size 0xc
  __declspec(property(get = __cordl_internal_get_chestUpAxis, put = __cordl_internal_set_chestUpAxis))::UnityEngine::Vector3 chestUpAxis;

  __declspec(property(get = get_forearm))::RootMotion::FinalIK::__IKSolverVR__VirtualBone* forearm;

  /// @brief Field forearmRelToUpperArm, offset 0x12c, size 0x10
  __declspec(property(get = __cordl_internal_get_forearmRelToUpperArm, put = __cordl_internal_set_forearmRelToUpperArm))::UnityEngine::Quaternion forearmRelToUpperArm;

  __declspec(property(get = get_hand))::RootMotion::FinalIK::__IKSolverVR__VirtualBone* hand;

  /// @brief Field handPositionOffset, offset 0xc0, size 0xc
  __declspec(property(get = __cordl_internal_get_handPositionOffset, put = __cordl_internal_set_handPositionOffset))::UnityEngine::Vector3 handPositionOffset;

  /// @brief Field hasShoulder, offset 0xe8, size 0x1
  __declspec(property(get = __cordl_internal_get_hasShoulder, put = __cordl_internal_set_hasShoulder)) bool hasShoulder;

  /// @brief Field palmToThumbAxis, offset 0x80, size 0xc
  __declspec(property(get = __cordl_internal_get_palmToThumbAxis, put = __cordl_internal_set_palmToThumbAxis))::UnityEngine::Vector3 palmToThumbAxis;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::Vector3 position;

  /// @brief Field positionWeight, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_positionWeight, put = __cordl_internal_set_positionWeight)) float_t positionWeight;

  __declspec(property(get = get_rotation, put = set_rotation))::UnityEngine::Quaternion rotation;

  /// @brief Field rotationWeight, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_rotationWeight, put = __cordl_internal_set_rotationWeight)) float_t rotationWeight;

  __declspec(property(get = get_shoulder))::RootMotion::FinalIK::__IKSolverVR__VirtualBone* shoulder;

  /// @brief Field shoulderRotationMode, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_shoulderRotationMode, put = __cordl_internal_set_shoulderRotationMode))::GlobalNamespace::__IKSolverVR__Arm__ShoulderRotationMode shoulderRotationMode;

  /// @brief Field shoulderRotationWeight, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_shoulderRotationWeight, put = __cordl_internal_set_shoulderRotationWeight)) float_t shoulderRotationWeight;

  /// @brief Field shoulderTwistWeight, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_shoulderTwistWeight, put = __cordl_internal_set_shoulderTwistWeight)) float_t shoulderTwistWeight;

  /// @brief Field stretchCurve, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_stretchCurve, put = __cordl_internal_set_stretchCurve))::UnityEngine::AnimationCurve* stretchCurve;

  /// @brief Field swivelOffset, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_swivelOffset, put = __cordl_internal_set_swivelOffset)) float_t swivelOffset;

  /// @brief Field target, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target))::UnityW<::UnityEngine::Transform> target;

  __declspec(property(get = get_upperArm))::RootMotion::FinalIK::__IKSolverVR__VirtualBone* upperArm;

  /// @brief Field upperArmBendAxis, offset 0x13c, size 0xc
  __declspec(property(get = __cordl_internal_get_upperArmBendAxis, put = __cordl_internal_set_upperArmBendAxis))::UnityEngine::Vector3 upperArmBendAxis;

  /// @brief Field wristToPalmAxis, offset 0x74, size 0xc
  __declspec(property(get = __cordl_internal_get_wristToPalmAxis, put = __cordl_internal_set_wristToPalmAxis))::UnityEngine::Vector3 wristToPalmAxis;

  /// @brief Method ApplyOffsets, addr 0x13544fc, size 0x24, virtual true, abstract: false, final false
  inline void ApplyOffsets();

  /// @brief Method DamperValue, addr 0x1354870, size 0x80, virtual false, abstract: false, final false
  inline float_t DamperValue(float_t value, float_t min, float_t max, float_t weight);

  /// @brief Method GetBendNormal, addr 0x13548f0, size 0x4fc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetBendNormal(::UnityEngine::Vector3 dir);

  static inline ::RootMotion::FinalIK::__IKSolverVR__Arm* New_ctor();

  /// @brief Method OnRead, addr 0x1353a0c, size 0x844, virtual true, abstract: false, final false
  inline void OnRead(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions, ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> rotations, bool hasChest,
                     bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index);

  /// @brief Method PreSolve, addr 0x1354250, size 0x2ac, virtual true, abstract: false, final false
  inline void PreSolve();

  /// @brief Method ResetOffsets, addr 0x1354f54, size 0x58, virtual true, abstract: false, final false
  inline void ResetOffsets();

  /// @brief Method Solve, addr 0x1351780, size 0x15e4, virtual false, abstract: false, final false
  inline void Solve(bool isLeft);

  /// @brief Method Stretching, addr 0x1354520, size 0x350, virtual false, abstract: false, final false
  inline void Stretching();

  /// @brief Method Visualize, addr 0x13551b8, size 0x118, virtual false, abstract: false, final false
  inline void Visualize(::RootMotion::FinalIK::__IKSolverVR__VirtualBone* bone1, ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* bone2, ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* bone3,
                        ::UnityEngine::Color color);

  /// @brief Method Write, addr 0x1354fac, size 0x20c, virtual true, abstract: false, final false
  inline void Write(ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> solvedPositions,
                    ByRef<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>> solvedRotations);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_IKPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_IKPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_IKRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_IKRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__position_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__position_k__BackingField();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__rotation_k__BackingField() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__rotation_k__BackingField();

  constexpr float_t const& __cordl_internal_get_armLengthMlp() const;

  constexpr float_t& __cordl_internal_get_armLengthMlp();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bendDirection() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_bendDirection();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bendGoal() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bendGoal();

  constexpr float_t const& __cordl_internal_get_bendGoalWeight() const;

  constexpr float_t& __cordl_internal_get_bendGoalWeight();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_chestForward() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_chestForward();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_chestForwardAxis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_chestForwardAxis();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_chestRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_chestRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_chestUp() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_chestUp();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_chestUpAxis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_chestUpAxis();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_forearmRelToUpperArm() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_forearmRelToUpperArm();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_handPositionOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_handPositionOffset();

  constexpr bool const& __cordl_internal_get_hasShoulder() const;

  constexpr bool& __cordl_internal_get_hasShoulder();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_palmToThumbAxis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_palmToThumbAxis();

  constexpr float_t const& __cordl_internal_get_positionWeight() const;

  constexpr float_t& __cordl_internal_get_positionWeight();

  constexpr float_t const& __cordl_internal_get_rotationWeight() const;

  constexpr float_t& __cordl_internal_get_rotationWeight();

  constexpr ::GlobalNamespace::__IKSolverVR__Arm__ShoulderRotationMode const& __cordl_internal_get_shoulderRotationMode() const;

  constexpr ::GlobalNamespace::__IKSolverVR__Arm__ShoulderRotationMode& __cordl_internal_get_shoulderRotationMode();

  constexpr float_t const& __cordl_internal_get_shoulderRotationWeight() const;

  constexpr float_t& __cordl_internal_get_shoulderRotationWeight();

  constexpr float_t const& __cordl_internal_get_shoulderTwistWeight() const;

  constexpr float_t& __cordl_internal_get_shoulderTwistWeight();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_stretchCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_stretchCurve() const;

  constexpr float_t const& __cordl_internal_get_swivelOffset() const;

  constexpr float_t& __cordl_internal_get_swivelOffset();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_upperArmBendAxis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_upperArmBendAxis();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_wristToPalmAxis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_wristToPalmAxis();

  constexpr void __cordl_internal_set_IKPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_IKRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__position_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__rotation_k__BackingField(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_armLengthMlp(float_t value);

  constexpr void __cordl_internal_set_bendDirection(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_bendGoal(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_bendGoalWeight(float_t value);

  constexpr void __cordl_internal_set_chestForward(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_chestForwardAxis(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_chestRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_chestUp(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_chestUpAxis(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_forearmRelToUpperArm(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_handPositionOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_hasShoulder(bool value);

  constexpr void __cordl_internal_set_palmToThumbAxis(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_positionWeight(float_t value);

  constexpr void __cordl_internal_set_rotationWeight(float_t value);

  constexpr void __cordl_internal_set_shoulderRotationMode(::GlobalNamespace::__IKSolverVR__Arm__ShoulderRotationMode value);

  constexpr void __cordl_internal_set_shoulderRotationWeight(float_t value);

  constexpr void __cordl_internal_set_shoulderTwistWeight(float_t value);

  constexpr void __cordl_internal_set_stretchCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_swivelOffset(float_t value);

  constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_upperArmBendAxis(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_wristToPalmAxis(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x1353688, size 0x18c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_forearm, addr 0x135398c, size 0x40, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* get_forearm();

  /// @brief Method get_hand, addr 0x13539cc, size 0x40, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* get_hand();

  /// @brief Method get_position, addr 0x1353900, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_rotation, addr 0x1353918, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_shoulder, addr 0x1353930, size 0x28, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* get_shoulder();

  /// @brief Method get_upperArm, addr 0x1353958, size 0x34, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* get_upperArm();

  /// @brief Method set_position, addr 0x135390c, size 0xc, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_rotation, addr 0x1353924, size 0xc, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Quaternion value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKSolverVR__Arm();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IKSolverVR__Arm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IKSolverVR__Arm(__IKSolverVR__Arm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IKSolverVR__Arm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IKSolverVR__Arm(__IKSolverVR__Arm const&) = delete;

  /// @brief Field target, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___target;

  /// @brief Field bendGoal, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bendGoal;

  /// @brief Field positionWeight, offset: 0x58, size: 0x4, def value: None
  float_t ___positionWeight;

  /// @brief Field rotationWeight, offset: 0x5c, size: 0x4, def value: None
  float_t ___rotationWeight;

  /// @brief Field shoulderRotationMode, offset: 0x60, size: 0x4, def value: None
  ::GlobalNamespace::__IKSolverVR__Arm__ShoulderRotationMode ___shoulderRotationMode;

  /// @brief Field shoulderRotationWeight, offset: 0x64, size: 0x4, def value: None
  float_t ___shoulderRotationWeight;

  /// @brief Field shoulderTwistWeight, offset: 0x68, size: 0x4, def value: None
  float_t ___shoulderTwistWeight;

  /// @brief Field bendGoalWeight, offset: 0x6c, size: 0x4, def value: None
  float_t ___bendGoalWeight;

  /// @brief Field swivelOffset, offset: 0x70, size: 0x4, def value: None
  float_t ___swivelOffset;

  /// @brief Field wristToPalmAxis, offset: 0x74, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___wristToPalmAxis;

  /// @brief Field palmToThumbAxis, offset: 0x80, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___palmToThumbAxis;

  /// @brief Field armLengthMlp, offset: 0x8c, size: 0x4, def value: None
  float_t ___armLengthMlp;

  /// @brief Field stretchCurve, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___stretchCurve;

  /// @brief Field IKPosition, offset: 0x98, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___IKPosition;

  /// @brief Field IKRotation, offset: 0xa4, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___IKRotation;

  /// @brief Field bendDirection, offset: 0xb4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___bendDirection;

  /// @brief Field handPositionOffset, offset: 0xc0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___handPositionOffset;

  /// @brief Field <position>k__BackingField, offset: 0xcc, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____position_k__BackingField;

  /// @brief Field <rotation>k__BackingField, offset: 0xd8, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____rotation_k__BackingField;

  /// @brief Field hasShoulder, offset: 0xe8, size: 0x1, def value: None
  bool ___hasShoulder;

  /// @brief Field chestForwardAxis, offset: 0xec, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___chestForwardAxis;

  /// @brief Field chestUpAxis, offset: 0xf8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___chestUpAxis;

  /// @brief Field chestRotation, offset: 0x104, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___chestRotation;

  /// @brief Field chestForward, offset: 0x114, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___chestForward;

  /// @brief Field chestUp, offset: 0x120, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___chestUp;

  /// @brief Field forearmRelToUpperArm, offset: 0x12c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___forearmRelToUpperArm;

  /// @brief Field upperArmBendAxis, offset: 0x13c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___upperArmBendAxis;

  /// @brief Field pitchOffsetAngle offset 0xffffffff size 0x4
  static constexpr float_t pitchOffsetAngle{ -30.0 };

  /// @brief Field yawOffsetAngle offset 0xffffffff size 0x4
  static constexpr float_t yawOffsetAngle{ 45.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__IKSolverVR__Arm, 0x148>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___target) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___bendGoal) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___positionWeight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___rotationWeight) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___shoulderRotationMode) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___shoulderRotationWeight) == 0x64, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___shoulderTwistWeight) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___bendGoalWeight) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___swivelOffset) == 0x70, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___wristToPalmAxis) == 0x74, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___palmToThumbAxis) == 0x80, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___armLengthMlp) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___stretchCurve) == 0x90, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___IKPosition) == 0x98, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___IKRotation) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___bendDirection) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___handPositionOffset) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ____position_k__BackingField) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ____rotation_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___hasShoulder) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___chestForwardAxis) == 0xec, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___chestUpAxis) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___chestRotation) == 0x104, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___chestForward) == 0x114, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___chestUp) == 0x120, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___forearmRelToUpperArm) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Arm, ___upperArmBendAxis) == 0x13c, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::Footstep
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 164, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::IKSolverVR::Footstep*
class CORDL_TYPE __IKSolverVR__Footstep : public ::System::Object {
public:
  // Declarations
  /// @brief Field <stepProgress>k__BackingField, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__stepProgress_k__BackingField, put = __cordl_internal_set__stepProgress_k__BackingField)) float_t _stepProgress_k__BackingField;

  /// @brief Field characterSpaceOffset, offset 0x14, size 0xc
  __declspec(property(get = __cordl_internal_get_characterSpaceOffset, put = __cordl_internal_set_characterSpaceOffset))::UnityEngine::Vector3 characterSpaceOffset;

  /// @brief Field footRelativeToRoot, offset 0x8c, size 0x10
  __declspec(property(get = __cordl_internal_get_footRelativeToRoot, put = __cordl_internal_set_footRelativeToRoot))::UnityEngine::Quaternion footRelativeToRoot;

  __declspec(property(get = get_isStepping)) bool isStepping;

  /// @brief Field isSupportLeg, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_isSupportLeg, put = __cordl_internal_set_isSupportLeg)) bool isSupportLeg;

  /// @brief Field position, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position))::UnityEngine::Vector3 position;

  /// @brief Field rotation, offset 0x2c, size 0x10
  __declspec(property(get = __cordl_internal_get_rotation, put = __cordl_internal_set_rotation))::UnityEngine::Quaternion rotation;

  /// @brief Field stepFrom, offset 0x54, size 0xc
  __declspec(property(get = __cordl_internal_get_stepFrom, put = __cordl_internal_set_stepFrom))::UnityEngine::Vector3 stepFrom;

  /// @brief Field stepFromRot, offset 0x6c, size 0x10
  __declspec(property(get = __cordl_internal_get_stepFromRot, put = __cordl_internal_set_stepFromRot))::UnityEngine::Quaternion stepFromRot;

  __declspec(property(get = get_stepProgress, put = set_stepProgress)) float_t stepProgress;

  /// @brief Field stepSpeed, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_stepSpeed, put = __cordl_internal_set_stepSpeed)) float_t stepSpeed;

  /// @brief Field stepTo, offset 0x60, size 0xc
  __declspec(property(get = __cordl_internal_get_stepTo, put = __cordl_internal_set_stepTo))::UnityEngine::Vector3 stepTo;

  /// @brief Field stepToRootRot, offset 0x3c, size 0x10
  __declspec(property(get = __cordl_internal_get_stepToRootRot, put = __cordl_internal_set_stepToRootRot))::UnityEngine::Quaternion stepToRootRot;

  /// @brief Field stepToRot, offset 0x7c, size 0x10
  __declspec(property(get = __cordl_internal_get_stepToRot, put = __cordl_internal_set_stepToRot))::UnityEngine::Quaternion stepToRot;

  /// @brief Field supportLegW, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_supportLegW, put = __cordl_internal_set_supportLegW)) float_t supportLegW;

  /// @brief Field supportLegWV, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_supportLegWV, put = __cordl_internal_set_supportLegWV)) float_t supportLegWV;

  static inline ::RootMotion::FinalIK::__IKSolverVR__Footstep* New_ctor(::UnityEngine::Quaternion rootRotation, ::UnityEngine::Vector3 footPosition, ::UnityEngine::Quaternion footRotation,
                                                                        ::UnityEngine::Vector3 characterSpaceOffset);

  /// @brief Method Reset, addr 0x1355818, size 0x48, virtual false, abstract: false, final false
  inline void Reset(::UnityEngine::Quaternion rootRotation, ::UnityEngine::Vector3 footPosition, ::UnityEngine::Quaternion footRotation);

  /// @brief Method StepTo, addr 0x1355860, size 0x224, virtual false, abstract: false, final false
  inline void StepTo(::UnityEngine::Vector3 p, ::UnityEngine::Quaternion rootRotation, float_t stepThreshold);

  /// @brief Method Update, addr 0x1355e70, size 0x174, virtual false, abstract: false, final false
  inline void Update(::RootMotion::InterpolationMode interpolation, ::UnityEngine::Events::UnityEvent* onStep);

  /// @brief Method UpdateStanding, addr 0x1355c8c, size 0x1e4, virtual false, abstract: false, final false
  inline void UpdateStanding(::UnityEngine::Quaternion rootRotation, float_t minAngle, float_t speed);

  /// @brief Method UpdateStepping, addr 0x1355a84, size 0x208, virtual false, abstract: false, final false
  inline void UpdateStepping(::UnityEngine::Vector3 p, ::UnityEngine::Quaternion rootRotation, float_t speed);

  constexpr float_t const& __cordl_internal_get__stepProgress_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__stepProgress_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_characterSpaceOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_characterSpaceOffset();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_footRelativeToRoot() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_footRelativeToRoot();

  constexpr bool const& __cordl_internal_get_isSupportLeg() const;

  constexpr bool& __cordl_internal_get_isSupportLeg();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_position() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_position();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_stepFrom() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_stepFrom();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_stepFromRot() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_stepFromRot();

  constexpr float_t const& __cordl_internal_get_stepSpeed() const;

  constexpr float_t& __cordl_internal_get_stepSpeed();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_stepTo() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_stepTo();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_stepToRootRot() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_stepToRootRot();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_stepToRot() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_stepToRot();

  constexpr float_t const& __cordl_internal_get_supportLegW() const;

  constexpr float_t& __cordl_internal_get_supportLegW();

  constexpr float_t const& __cordl_internal_get_supportLegWV() const;

  constexpr float_t& __cordl_internal_get_supportLegWV();

  constexpr void __cordl_internal_set__stepProgress_k__BackingField(float_t value);

  constexpr void __cordl_internal_set_characterSpaceOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_footRelativeToRoot(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_isSupportLeg(bool value);

  constexpr void __cordl_internal_set_position(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_rotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_stepFrom(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_stepFromRot(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_stepSpeed(float_t value);

  constexpr void __cordl_internal_set_stepTo(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_stepToRootRot(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_stepToRot(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_supportLegW(float_t value);

  constexpr void __cordl_internal_set_supportLegWV(float_t value);

  /// @brief Method .ctor, addr 0x1355654, size 0x1c4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Quaternion rootRotation, ::UnityEngine::Vector3 footPosition, ::UnityEngine::Quaternion footRotation, ::UnityEngine::Vector3 characterSpaceOffset);

  /// @brief Method get_isStepping, addr 0x1355630, size 0x14, virtual false, abstract: false, final false
  inline bool get_isStepping();

  /// @brief Method get_stepProgress, addr 0x1355644, size 0x8, virtual false, abstract: false, final false
  inline float_t get_stepProgress();

  /// @brief Method set_stepProgress, addr 0x135564c, size 0x8, virtual false, abstract: false, final false
  inline void set_stepProgress(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKSolverVR__Footstep();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IKSolverVR__Footstep", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IKSolverVR__Footstep(__IKSolverVR__Footstep&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IKSolverVR__Footstep", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IKSolverVR__Footstep(__IKSolverVR__Footstep const&) = delete;

  /// @brief Field stepSpeed, offset: 0x10, size: 0x4, def value: None
  float_t ___stepSpeed;

  /// @brief Field characterSpaceOffset, offset: 0x14, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___characterSpaceOffset;

  /// @brief Field position, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___position;

  /// @brief Field rotation, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___rotation;

  /// @brief Field stepToRootRot, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___stepToRootRot;

  /// @brief Field isSupportLeg, offset: 0x4c, size: 0x1, def value: None
  bool ___isSupportLeg;

  /// @brief Field <stepProgress>k__BackingField, offset: 0x50, size: 0x4, def value: None
  float_t ____stepProgress_k__BackingField;

  /// @brief Field stepFrom, offset: 0x54, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___stepFrom;

  /// @brief Field stepTo, offset: 0x60, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___stepTo;

  /// @brief Field stepFromRot, offset: 0x6c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___stepFromRot;

  /// @brief Field stepToRot, offset: 0x7c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___stepToRot;

  /// @brief Field footRelativeToRoot, offset: 0x8c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___footRelativeToRoot;

  /// @brief Field supportLegW, offset: 0x9c, size: 0x4, def value: None
  float_t ___supportLegW;

  /// @brief Field supportLegWV, offset: 0xa0, size: 0x4, def value: None
  float_t ___supportLegWV;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__IKSolverVR__Footstep, 0xa8>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Footstep, ___stepSpeed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Footstep, ___characterSpaceOffset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Footstep, ___position) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Footstep, ___rotation) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Footstep, ___stepToRootRot) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Footstep, ___isSupportLeg) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Footstep, ____stepProgress_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Footstep, ___stepFrom) == 0x54, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Footstep, ___stepTo) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Footstep, ___stepFromRot) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Footstep, ___stepToRot) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Footstep, ___footRelativeToRoot) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Footstep, ___supportLegW) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Footstep, ___supportLegWV) == 0xa0, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::Leg
// SizeInfo { instance_size: 336, native_size: -1, calculated_instance_size: 336, calculated_native_size: 336, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::IKSolverVR::Leg*
class CORDL_TYPE __IKSolverVR__Leg : public ::RootMotion::FinalIK::__IKSolverVR__BodyPart {
public:
  // Declarations
  /// @brief Field IKPosition, offset 0x78, size 0xc
  __declspec(property(get = __cordl_internal_get_IKPosition, put = __cordl_internal_set_IKPosition))::UnityEngine::Vector3 IKPosition;

  /// @brief Field IKRotation, offset 0x84, size 0x10
  __declspec(property(get = __cordl_internal_get_IKRotation, put = __cordl_internal_set_IKRotation))::UnityEngine::Quaternion IKRotation;

  /// @brief Field <hasToes>k__BackingField, offset 0xe0, size 0x1
  __declspec(property(get = __cordl_internal_get__hasToes_k__BackingField, put = __cordl_internal_set__hasToes_k__BackingField)) bool _hasToes_k__BackingField;

  /// @brief Field <position>k__BackingField, offset 0xc4, size 0xc
  __declspec(property(get = __cordl_internal_get__position_k__BackingField, put = __cordl_internal_set__position_k__BackingField))::UnityEngine::Vector3 _position_k__BackingField;

  /// @brief Field <rotation>k__BackingField, offset 0xd0, size 0x10
  __declspec(property(get = __cordl_internal_get__rotation_k__BackingField, put = __cordl_internal_set__rotation_k__BackingField))::UnityEngine::Quaternion _rotation_k__BackingField;

  /// @brief Field <thighRelativeToPelvis>k__BackingField, offset 0xe4, size 0xc
  __declspec(property(get = __cordl_internal_get__thighRelativeToPelvis_k__BackingField,
                      put = __cordl_internal_set__thighRelativeToPelvis_k__BackingField))::UnityEngine::Vector3 _thighRelativeToPelvis_k__BackingField;

  /// @brief Field bendGoal, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_bendGoal, put = __cordl_internal_set_bendGoal))::UnityW<::UnityEngine::Transform> bendGoal;

  /// @brief Field bendGoalWeight, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_bendGoalWeight, put = __cordl_internal_set_bendGoalWeight)) float_t bendGoalWeight;

  /// @brief Field bendNormal, offset 0x10c, size 0xc
  __declspec(property(get = __cordl_internal_get_bendNormal, put = __cordl_internal_set_bendNormal))::UnityEngine::Vector3 bendNormal;

  /// @brief Field bendNormalRelToPelvis, offset 0x138, size 0xc
  __declspec(property(get = __cordl_internal_get_bendNormalRelToPelvis, put = __cordl_internal_set_bendNormalRelToPelvis))::UnityEngine::Vector3 bendNormalRelToPelvis;

  /// @brief Field bendNormalRelToTarget, offset 0x144, size 0xc
  __declspec(property(get = __cordl_internal_get_bendNormalRelToTarget, put = __cordl_internal_set_bendNormalRelToTarget))::UnityEngine::Vector3 bendNormalRelToTarget;

  /// @brief Field bendToTargetWeight, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_bendToTargetWeight, put = __cordl_internal_set_bendToTargetWeight)) float_t bendToTargetWeight;

  __declspec(property(get = get_calf))::RootMotion::FinalIK::__IKSolverVR__VirtualBone* calf;

  /// @brief Field calfRelToThigh, offset 0x118, size 0x10
  __declspec(property(get = __cordl_internal_get_calfRelToThigh, put = __cordl_internal_set_calfRelToThigh))::UnityEngine::Quaternion calfRelToThigh;

  /// @brief Field currentMag, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_currentMag, put = __cordl_internal_set_currentMag)) float_t currentMag;

  __declspec(property(get = get_foot))::RootMotion::FinalIK::__IKSolverVR__VirtualBone* foot;

  /// @brief Field footPosition, offset 0xf0, size 0xc
  __declspec(property(get = __cordl_internal_get_footPosition, put = __cordl_internal_set_footPosition))::UnityEngine::Vector3 footPosition;

  /// @brief Field footPositionOffset, offset 0x94, size 0xc
  __declspec(property(get = __cordl_internal_get_footPositionOffset, put = __cordl_internal_set_footPositionOffset))::UnityEngine::Vector3 footPositionOffset;

  /// @brief Field footRotation, offset 0xfc, size 0x10
  __declspec(property(get = __cordl_internal_get_footRotation, put = __cordl_internal_set_footRotation))::UnityEngine::Quaternion footRotation;

  /// @brief Field footRotationOffset, offset 0xac, size 0x10
  __declspec(property(get = __cordl_internal_get_footRotationOffset, put = __cordl_internal_set_footRotationOffset))::UnityEngine::Quaternion footRotationOffset;

  __declspec(property(get = get_hasToes, put = set_hasToes)) bool hasToes;

  /// @brief Field heelPositionOffset, offset 0xa0, size 0xc
  __declspec(property(get = __cordl_internal_get_heelPositionOffset, put = __cordl_internal_set_heelPositionOffset))::UnityEngine::Vector3 heelPositionOffset;

  __declspec(property(get = get_lastBone))::RootMotion::FinalIK::__IKSolverVR__VirtualBone* lastBone;

  /// @brief Field legLengthMlp, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_legLengthMlp, put = __cordl_internal_set_legLengthMlp)) float_t legLengthMlp;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::Vector3 position;

  /// @brief Field positionWeight, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_positionWeight, put = __cordl_internal_set_positionWeight)) float_t positionWeight;

  __declspec(property(get = get_rotation, put = set_rotation))::UnityEngine::Quaternion rotation;

  /// @brief Field rotationWeight, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_rotationWeight, put = __cordl_internal_set_rotationWeight)) float_t rotationWeight;

  /// @brief Field stretchCurve, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_stretchCurve, put = __cordl_internal_set_stretchCurve))::UnityEngine::AnimationCurve* stretchCurve;

  /// @brief Field swivelOffset, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_swivelOffset, put = __cordl_internal_set_swivelOffset)) float_t swivelOffset;

  /// @brief Field target, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target))::UnityW<::UnityEngine::Transform> target;

  __declspec(property(get = get_thigh))::RootMotion::FinalIK::__IKSolverVR__VirtualBone* thigh;

  /// @brief Field thighRelToFoot, offset 0x128, size 0x10
  __declspec(property(get = __cordl_internal_get_thighRelToFoot, put = __cordl_internal_set_thighRelToFoot))::UnityEngine::Quaternion thighRelToFoot;

  __declspec(property(get = get_thighRelativeToPelvis, put = set_thighRelativeToPelvis))::UnityEngine::Vector3 thighRelativeToPelvis;

  __declspec(property(get = get_toes))::RootMotion::FinalIK::__IKSolverVR__VirtualBone* toes;

  /// @brief Field useAnimatedBendNormal, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get_useAnimatedBendNormal, put = __cordl_internal_set_useAnimatedBendNormal)) bool useAnimatedBendNormal;

  /// @brief Method ApplyOffsets, addr 0x1356dc4, size 0x4dc, virtual true, abstract: false, final false
  inline void ApplyOffsets();

  /// @brief Method ApplyPositionOffset, addr 0x1356d74, size 0x50, virtual false, abstract: false, final false
  inline void ApplyPositionOffset(::UnityEngine::Vector3 offset, float_t weight);

  /// @brief Method ApplyRotationOffset, addr 0x1356b28, size 0x24c, virtual false, abstract: false, final false
  inline void ApplyRotationOffset(::UnityEngine::Quaternion offset, float_t weight);

  /// @brief Method FixTwistRotations, addr 0x135767c, size 0x458, virtual false, abstract: false, final false
  inline void FixTwistRotations();

  static inline ::RootMotion::FinalIK::__IKSolverVR__Leg* New_ctor();

  /// @brief Method OnRead, addr 0x13560ec, size 0x568, virtual true, abstract: false, final false
  inline void OnRead(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions, ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> rotations, bool hasChest,
                     bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index);

  /// @brief Method PreSolve, addr 0x1356654, size 0x4d4, virtual true, abstract: false, final false
  inline void PreSolve();

  /// @brief Method ResetOffsets, addr 0x1357cdc, size 0xe0, virtual true, abstract: false, final false
  inline void ResetOffsets();

  /// @brief Method Solve, addr 0x13465e0, size 0x1a8, virtual false, abstract: false, final false
  inline void Solve(bool stretch);

  /// @brief Method Stretching, addr 0x13572a0, size 0x3dc, virtual false, abstract: false, final false
  inline void Stretching();

  /// @brief Method Write, addr 0x1357ad4, size 0x208, virtual true, abstract: false, final false
  inline void Write(ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> solvedPositions,
                    ByRef<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>> solvedRotations);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_IKPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_IKPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_IKRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_IKRotation();

  constexpr bool const& __cordl_internal_get__hasToes_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasToes_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__position_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__position_k__BackingField();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__rotation_k__BackingField() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__rotation_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__thighRelativeToPelvis_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__thighRelativeToPelvis_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bendGoal() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bendGoal();

  constexpr float_t const& __cordl_internal_get_bendGoalWeight() const;

  constexpr float_t& __cordl_internal_get_bendGoalWeight();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bendNormal() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_bendNormal();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bendNormalRelToPelvis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_bendNormalRelToPelvis();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bendNormalRelToTarget() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_bendNormalRelToTarget();

  constexpr float_t const& __cordl_internal_get_bendToTargetWeight() const;

  constexpr float_t& __cordl_internal_get_bendToTargetWeight();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_calfRelToThigh() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_calfRelToThigh();

  constexpr float_t const& __cordl_internal_get_currentMag() const;

  constexpr float_t& __cordl_internal_get_currentMag();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_footPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_footPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_footPositionOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_footPositionOffset();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_footRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_footRotation();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_footRotationOffset() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_footRotationOffset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_heelPositionOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_heelPositionOffset();

  constexpr float_t const& __cordl_internal_get_legLengthMlp() const;

  constexpr float_t& __cordl_internal_get_legLengthMlp();

  constexpr float_t const& __cordl_internal_get_positionWeight() const;

  constexpr float_t& __cordl_internal_get_positionWeight();

  constexpr float_t const& __cordl_internal_get_rotationWeight() const;

  constexpr float_t& __cordl_internal_get_rotationWeight();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_stretchCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_stretchCurve() const;

  constexpr float_t const& __cordl_internal_get_swivelOffset() const;

  constexpr float_t& __cordl_internal_get_swivelOffset();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_thighRelToFoot() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_thighRelToFoot();

  constexpr bool const& __cordl_internal_get_useAnimatedBendNormal() const;

  constexpr bool& __cordl_internal_get_useAnimatedBendNormal();

  constexpr void __cordl_internal_set_IKPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_IKRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__hasToes_k__BackingField(bool value);

  constexpr void __cordl_internal_set__position_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__rotation_k__BackingField(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__thighRelativeToPelvis_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_bendGoal(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_bendGoalWeight(float_t value);

  constexpr void __cordl_internal_set_bendNormal(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_bendNormalRelToPelvis(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_bendNormalRelToTarget(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_bendToTargetWeight(float_t value);

  constexpr void __cordl_internal_set_calfRelToThigh(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_currentMag(float_t value);

  constexpr void __cordl_internal_set_footPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_footPositionOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_footRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_footRotationOffset(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_heelPositionOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_legLengthMlp(float_t value);

  constexpr void __cordl_internal_set_positionWeight(float_t value);

  constexpr void __cordl_internal_set_rotationWeight(float_t value);

  constexpr void __cordl_internal_set_stretchCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_swivelOffset(float_t value);

  constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_thighRelToFoot(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_useAnimatedBendNormal(bool value);

  /// @brief Method .ctor, addr 0x13469dc, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_calf, addr 0x1356050, size 0x2c, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* get_calf();

  /// @brief Method get_foot, addr 0x135607c, size 0x2c, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* get_foot();

  /// @brief Method get_hasToes, addr 0x1356014, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasToes();

  /// @brief Method get_lastBone, addr 0x1351624, size 0x34, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* get_lastBone();

  /// @brief Method get_position, addr 0x1355fe4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_rotation, addr 0x1355ffc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_thigh, addr 0x1356028, size 0x28, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* get_thigh();

  /// @brief Method get_thighRelativeToPelvis, addr 0x13560d4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_thighRelativeToPelvis();

  /// @brief Method get_toes, addr 0x13560a8, size 0x2c, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* get_toes();

  /// @brief Method set_hasToes, addr 0x135601c, size 0xc, virtual false, abstract: false, final false
  inline void set_hasToes(bool value);

  /// @brief Method set_position, addr 0x1355ff0, size 0xc, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_rotation, addr 0x1356008, size 0xc, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method set_thighRelativeToPelvis, addr 0x13560e0, size 0xc, virtual false, abstract: false, final false
  inline void set_thighRelativeToPelvis(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKSolverVR__Leg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IKSolverVR__Leg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IKSolverVR__Leg(__IKSolverVR__Leg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IKSolverVR__Leg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IKSolverVR__Leg(__IKSolverVR__Leg const&) = delete;

  /// @brief Field target, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___target;

  /// @brief Field bendGoal, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bendGoal;

  /// @brief Field positionWeight, offset: 0x58, size: 0x4, def value: None
  float_t ___positionWeight;

  /// @brief Field rotationWeight, offset: 0x5c, size: 0x4, def value: None
  float_t ___rotationWeight;

  /// @brief Field bendGoalWeight, offset: 0x60, size: 0x4, def value: None
  float_t ___bendGoalWeight;

  /// @brief Field swivelOffset, offset: 0x64, size: 0x4, def value: None
  float_t ___swivelOffset;

  /// @brief Field bendToTargetWeight, offset: 0x68, size: 0x4, def value: None
  float_t ___bendToTargetWeight;

  /// @brief Field legLengthMlp, offset: 0x6c, size: 0x4, def value: None
  float_t ___legLengthMlp;

  /// @brief Field stretchCurve, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___stretchCurve;

  /// @brief Field IKPosition, offset: 0x78, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___IKPosition;

  /// @brief Field IKRotation, offset: 0x84, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___IKRotation;

  /// @brief Field footPositionOffset, offset: 0x94, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___footPositionOffset;

  /// @brief Field heelPositionOffset, offset: 0xa0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___heelPositionOffset;

  /// @brief Field footRotationOffset, offset: 0xac, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___footRotationOffset;

  /// @brief Field currentMag, offset: 0xbc, size: 0x4, def value: None
  float_t ___currentMag;

  /// @brief Field useAnimatedBendNormal, offset: 0xc0, size: 0x1, def value: None
  bool ___useAnimatedBendNormal;

  /// @brief Field <position>k__BackingField, offset: 0xc4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____position_k__BackingField;

  /// @brief Field <rotation>k__BackingField, offset: 0xd0, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____rotation_k__BackingField;

  /// @brief Field <hasToes>k__BackingField, offset: 0xe0, size: 0x1, def value: None
  bool ____hasToes_k__BackingField;

  /// @brief Field <thighRelativeToPelvis>k__BackingField, offset: 0xe4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____thighRelativeToPelvis_k__BackingField;

  /// @brief Field footPosition, offset: 0xf0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___footPosition;

  /// @brief Field footRotation, offset: 0xfc, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___footRotation;

  /// @brief Field bendNormal, offset: 0x10c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___bendNormal;

  /// @brief Field calfRelToThigh, offset: 0x118, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___calfRelToThigh;

  /// @brief Field thighRelToFoot, offset: 0x128, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___thighRelToFoot;

  /// @brief Field bendNormalRelToPelvis, offset: 0x138, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___bendNormalRelToPelvis;

  /// @brief Field bendNormalRelToTarget, offset: 0x144, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___bendNormalRelToTarget;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__IKSolverVR__Leg, 0x150>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ___target) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ___bendGoal) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ___positionWeight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ___rotationWeight) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ___bendGoalWeight) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ___swivelOffset) == 0x64, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ___bendToTargetWeight) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ___legLengthMlp) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ___stretchCurve) == 0x70, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ___IKPosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ___IKRotation) == 0x84, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ___footPositionOffset) == 0x94, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ___heelPositionOffset) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ___footRotationOffset) == 0xac, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ___currentMag) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ___useAnimatedBendNormal) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ____position_k__BackingField) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ____rotation_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ____hasToes_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ____thighRelativeToPelvis_k__BackingField) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ___footPosition) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ___footRotation) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ___bendNormal) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ___calfRelToThigh) == 0x118, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ___thighRelToFoot) == 0x128, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ___bendNormalRelToPelvis) == 0x138, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Leg, ___bendNormalRelToTarget) == 0x144, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::Locomotion
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::IKSolverVR::Locomotion*
class CORDL_TYPE __IKSolverVR__Locomotion : public ::System::Object {
public:
  // Declarations
  /// @brief Field <centerOfMass>k__BackingField, offset 0x80, size 0xc
  __declspec(property(get = __cordl_internal_get__centerOfMass_k__BackingField, put = __cordl_internal_set__centerOfMass_k__BackingField))::UnityEngine::Vector3 _centerOfMass_k__BackingField;

  /// @brief Field angleThreshold, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_angleThreshold, put = __cordl_internal_set_angleThreshold)) float_t angleThreshold;

  /// @brief Field blockingEnabled, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_blockingEnabled, put = __cordl_internal_set_blockingEnabled)) bool blockingEnabled;

  /// @brief Field blockingLayers, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_blockingLayers, put = __cordl_internal_set_blockingLayers))::UnityEngine::LayerMask blockingLayers;

  __declspec(property(get = get_centerOfMass, put = set_centerOfMass))::UnityEngine::Vector3 centerOfMass;

  /// @brief Field comAngleMlp, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_comAngleMlp, put = __cordl_internal_set_comAngleMlp)) float_t comAngleMlp;

  /// @brief Field comVelocity, offset 0xa4, size 0xc
  __declspec(property(get = __cordl_internal_get_comVelocity, put = __cordl_internal_set_comVelocity))::UnityEngine::Vector3 comVelocity;

  /// @brief Field footDistance, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_footDistance, put = __cordl_internal_set_footDistance)) float_t footDistance;

  /// @brief Field footsteps, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_footsteps,
                      put = __cordl_internal_set_footsteps))::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Footstep*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Footstep*>*> footsteps;

  /// @brief Field heelHeight, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_heelHeight, put = __cordl_internal_set_heelHeight))::UnityEngine::AnimationCurve* heelHeight;

  /// @brief Field lastComPosition, offset 0x98, size 0xc
  __declspec(property(get = __cordl_internal_get_lastComPosition, put = __cordl_internal_set_lastComPosition))::UnityEngine::Vector3 lastComPosition;

  /// @brief Field leftFootIndex, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get_leftFootIndex, put = __cordl_internal_set_leftFootIndex)) int32_t leftFootIndex;

  __declspec(property(get = get_leftFootstepPosition))::UnityEngine::Vector3 leftFootstepPosition;

  __declspec(property(get = get_leftFootstepRotation))::UnityEngine::Quaternion leftFootstepRotation;

  /// @brief Field maxLegStretch, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxLegStretch, put = __cordl_internal_set_maxLegStretch)) float_t maxLegStretch;

  /// @brief Field maxVelocity, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_maxVelocity, put = __cordl_internal_set_maxVelocity)) float_t maxVelocity;

  /// @brief Field offset, offset 0x54, size 0xc
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset))::UnityEngine::Vector3 offset;

  /// @brief Field onLeftFootstep, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_onLeftFootstep, put = __cordl_internal_set_onLeftFootstep))::UnityEngine::Events::UnityEvent* onLeftFootstep;

  /// @brief Field onRightFootstep, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_onRightFootstep, put = __cordl_internal_set_onRightFootstep))::UnityEngine::Events::UnityEvent* onRightFootstep;

  /// @brief Field raycastHeight, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_raycastHeight, put = __cordl_internal_set_raycastHeight)) float_t raycastHeight;

  /// @brief Field raycastRadius, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_raycastRadius, put = __cordl_internal_set_raycastRadius)) float_t raycastRadius;

  /// @brief Field relaxLegTwistMinAngle, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_relaxLegTwistMinAngle, put = __cordl_internal_set_relaxLegTwistMinAngle)) float_t relaxLegTwistMinAngle;

  /// @brief Field relaxLegTwistSpeed, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_relaxLegTwistSpeed, put = __cordl_internal_set_relaxLegTwistSpeed)) float_t relaxLegTwistSpeed;

  /// @brief Field rightFootIndex, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get_rightFootIndex, put = __cordl_internal_set_rightFootIndex)) int32_t rightFootIndex;

  __declspec(property(get = get_rightFootstepPosition))::UnityEngine::Vector3 rightFootstepPosition;

  __declspec(property(get = get_rightFootstepRotation))::UnityEngine::Quaternion rightFootstepRotation;

  /// @brief Field rootSpeed, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_rootSpeed, put = __cordl_internal_set_rootSpeed)) float_t rootSpeed;

  /// @brief Field stepHeight, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_stepHeight, put = __cordl_internal_set_stepHeight))::UnityEngine::AnimationCurve* stepHeight;

  /// @brief Field stepInterpolation, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_stepInterpolation, put = __cordl_internal_set_stepInterpolation))::RootMotion::InterpolationMode stepInterpolation;

  /// @brief Field stepSpeed, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_stepSpeed, put = __cordl_internal_set_stepSpeed)) float_t stepSpeed;

  /// @brief Field stepThreshold, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_stepThreshold, put = __cordl_internal_set_stepThreshold)) float_t stepThreshold;

  /// @brief Field velocityFactor, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_velocityFactor, put = __cordl_internal_set_velocityFactor)) float_t velocityFactor;

  /// @brief Field weight, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_weight, put = __cordl_internal_set_weight)) float_t weight;

  /// @brief Method AddDeltaPosition, addr 0x134ce74, size 0xb8, virtual false, abstract: false, final false
  inline void AddDeltaPosition(::UnityEngine::Vector3 delta);

  /// @brief Method AddDeltaRotation, addr 0x134cf2c, size 0x3c8, virtual false, abstract: false, final false
  inline void AddDeltaRotation(::UnityEngine::Quaternion delta, ::UnityEngine::Vector3 pivot);

  /// @brief Method CanStep, addr 0x1357f88, size 0x6c, virtual false, abstract: false, final false
  inline bool CanStep();

  /// @brief Method GetLineSphereCollision, addr 0x1357ff4, size 0x1b0, virtual false, abstract: false, final false
  static inline bool GetLineSphereCollision(::UnityEngine::Vector3 lineStart, ::UnityEngine::Vector3 lineEnd, ::UnityEngine::Vector3 sphereCenter, float_t sphereRadius);

  /// @brief Method Initiate, addr 0x134ff60, size 0x2f4, virtual false, abstract: false, final false
  inline void Initiate(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions, ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> rotations, bool hasToes);

  static inline ::RootMotion::FinalIK::__IKSolverVR__Locomotion* New_ctor();

  /// @brief Method Reset, addr 0x134da60, size 0x1e4, virtual false, abstract: false, final false
  inline void Reset(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions, ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> rotations);

  /// @brief Method Solve, addr 0x1350254, size 0x13d0, virtual false, abstract: false, final false
  inline void Solve(::RootMotion::FinalIK::__IKSolverVR__VirtualBone* rootBone, ::RootMotion::FinalIK::__IKSolverVR__Spine* spine, ::RootMotion::FinalIK::__IKSolverVR__Leg* leftLeg,
                    ::RootMotion::FinalIK::__IKSolverVR__Leg* rightLeg, ::RootMotion::FinalIK::__IKSolverVR__Arm* leftArm, ::RootMotion::FinalIK::__IKSolverVR__Arm* rightArm, int32_t supportLegIndex,
                    ByRef<::UnityEngine::Vector3> leftFootPosition, ByRef<::UnityEngine::Vector3> rightFootPosition, ByRef<::UnityEngine::Quaternion> leftFootRotation,
                    ByRef<::UnityEngine::Quaternion> rightFootRotation, ByRef<float_t> leftFootOffset, ByRef<float_t> rightFootOffset, ByRef<float_t> leftHeelOffset, ByRef<float_t> rightHeelOffset);

  /// @brief Method StepBlocked, addr 0x1357dd4, size 0x1b4, virtual false, abstract: false, final false
  inline bool StepBlocked(::UnityEngine::Vector3 fromPosition, ::UnityEngine::Vector3 toPosition, ::UnityEngine::Vector3 rootPosition);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__centerOfMass_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__centerOfMass_k__BackingField();

  constexpr float_t const& __cordl_internal_get_angleThreshold() const;

  constexpr float_t& __cordl_internal_get_angleThreshold();

  constexpr bool const& __cordl_internal_get_blockingEnabled() const;

  constexpr bool& __cordl_internal_get_blockingEnabled();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_blockingLayers() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_blockingLayers();

  constexpr float_t const& __cordl_internal_get_comAngleMlp() const;

  constexpr float_t& __cordl_internal_get_comAngleMlp();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_comVelocity() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_comVelocity();

  constexpr float_t const& __cordl_internal_get_footDistance() const;

  constexpr float_t& __cordl_internal_get_footDistance();

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Footstep*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Footstep*>*> const& __cordl_internal_get_footsteps() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Footstep*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Footstep*>*>& __cordl_internal_get_footsteps();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_heelHeight();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_heelHeight() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastComPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastComPosition();

  constexpr int32_t const& __cordl_internal_get_leftFootIndex() const;

  constexpr int32_t& __cordl_internal_get_leftFootIndex();

  constexpr float_t const& __cordl_internal_get_maxLegStretch() const;

  constexpr float_t& __cordl_internal_get_maxLegStretch();

  constexpr float_t const& __cordl_internal_get_maxVelocity() const;

  constexpr float_t& __cordl_internal_get_maxVelocity();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_offset();

  constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onLeftFootstep();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> const& __cordl_internal_get_onLeftFootstep() const;

  constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onRightFootstep();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> const& __cordl_internal_get_onRightFootstep() const;

  constexpr float_t const& __cordl_internal_get_raycastHeight() const;

  constexpr float_t& __cordl_internal_get_raycastHeight();

  constexpr float_t const& __cordl_internal_get_raycastRadius() const;

  constexpr float_t& __cordl_internal_get_raycastRadius();

  constexpr float_t const& __cordl_internal_get_relaxLegTwistMinAngle() const;

  constexpr float_t& __cordl_internal_get_relaxLegTwistMinAngle();

  constexpr float_t const& __cordl_internal_get_relaxLegTwistSpeed() const;

  constexpr float_t& __cordl_internal_get_relaxLegTwistSpeed();

  constexpr int32_t const& __cordl_internal_get_rightFootIndex() const;

  constexpr int32_t& __cordl_internal_get_rightFootIndex();

  constexpr float_t const& __cordl_internal_get_rootSpeed() const;

  constexpr float_t& __cordl_internal_get_rootSpeed();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_stepHeight();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_stepHeight() const;

  constexpr ::RootMotion::InterpolationMode const& __cordl_internal_get_stepInterpolation() const;

  constexpr ::RootMotion::InterpolationMode& __cordl_internal_get_stepInterpolation();

  constexpr float_t const& __cordl_internal_get_stepSpeed() const;

  constexpr float_t& __cordl_internal_get_stepSpeed();

  constexpr float_t const& __cordl_internal_get_stepThreshold() const;

  constexpr float_t& __cordl_internal_get_stepThreshold();

  constexpr float_t const& __cordl_internal_get_velocityFactor() const;

  constexpr float_t& __cordl_internal_get_velocityFactor();

  constexpr float_t const& __cordl_internal_get_weight() const;

  constexpr float_t& __cordl_internal_get_weight();

  constexpr void __cordl_internal_set__centerOfMass_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_angleThreshold(float_t value);

  constexpr void __cordl_internal_set_blockingEnabled(bool value);

  constexpr void __cordl_internal_set_blockingLayers(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_comAngleMlp(float_t value);

  constexpr void __cordl_internal_set_comVelocity(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_footDistance(float_t value);

  constexpr void __cordl_internal_set_footsteps(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Footstep*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Footstep*>*> value);

  constexpr void __cordl_internal_set_heelHeight(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_lastComPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_leftFootIndex(int32_t value);

  constexpr void __cordl_internal_set_maxLegStretch(float_t value);

  constexpr void __cordl_internal_set_maxVelocity(float_t value);

  constexpr void __cordl_internal_set_offset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_onLeftFootstep(::UnityEngine::Events::UnityEvent* value);

  constexpr void __cordl_internal_set_onRightFootstep(::UnityEngine::Events::UnityEvent* value);

  constexpr void __cordl_internal_set_raycastHeight(float_t value);

  constexpr void __cordl_internal_set_raycastRadius(float_t value);

  constexpr void __cordl_internal_set_relaxLegTwistMinAngle(float_t value);

  constexpr void __cordl_internal_set_relaxLegTwistSpeed(float_t value);

  constexpr void __cordl_internal_set_rightFootIndex(int32_t value);

  constexpr void __cordl_internal_set_rootSpeed(float_t value);

  constexpr void __cordl_internal_set_stepHeight(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_stepInterpolation(::RootMotion::InterpolationMode value);

  constexpr void __cordl_internal_set_stepSpeed(float_t value);

  constexpr void __cordl_internal_set_stepThreshold(float_t value);

  constexpr void __cordl_internal_set_velocityFactor(float_t value);

  constexpr void __cordl_internal_set_weight(float_t value);

  /// @brief Method .ctor, addr 0x1353814, size 0xec, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_centerOfMass, addr 0x1357dbc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_centerOfMass();

  /// @brief Method get_leftFootstepPosition, addr 0x13581a4, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_leftFootstepPosition();

  /// @brief Method get_leftFootstepRotation, addr 0x1358210, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_leftFootstepRotation();

  /// @brief Method get_rightFootstepPosition, addr 0x13581d8, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_rightFootstepPosition();

  /// @brief Method get_rightFootstepRotation, addr 0x1358244, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rightFootstepRotation();

  /// @brief Method set_centerOfMass, addr 0x1357dc8, size 0xc, virtual false, abstract: false, final false
  inline void set_centerOfMass(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKSolverVR__Locomotion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IKSolverVR__Locomotion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IKSolverVR__Locomotion(__IKSolverVR__Locomotion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IKSolverVR__Locomotion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IKSolverVR__Locomotion(__IKSolverVR__Locomotion const&) = delete;

  /// @brief Field weight, offset: 0x10, size: 0x4, def value: None
  float_t ___weight;

  /// @brief Field footDistance, offset: 0x14, size: 0x4, def value: None
  float_t ___footDistance;

  /// @brief Field stepThreshold, offset: 0x18, size: 0x4, def value: None
  float_t ___stepThreshold;

  /// @brief Field angleThreshold, offset: 0x1c, size: 0x4, def value: None
  float_t ___angleThreshold;

  /// @brief Field comAngleMlp, offset: 0x20, size: 0x4, def value: None
  float_t ___comAngleMlp;

  /// @brief Field maxVelocity, offset: 0x24, size: 0x4, def value: None
  float_t ___maxVelocity;

  /// @brief Field velocityFactor, offset: 0x28, size: 0x4, def value: None
  float_t ___velocityFactor;

  /// @brief Field maxLegStretch, offset: 0x2c, size: 0x4, def value: None
  float_t ___maxLegStretch;

  /// @brief Field rootSpeed, offset: 0x30, size: 0x4, def value: None
  float_t ___rootSpeed;

  /// @brief Field stepSpeed, offset: 0x34, size: 0x4, def value: None
  float_t ___stepSpeed;

  /// @brief Field stepHeight, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___stepHeight;

  /// @brief Field heelHeight, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___heelHeight;

  /// @brief Field relaxLegTwistMinAngle, offset: 0x48, size: 0x4, def value: None
  float_t ___relaxLegTwistMinAngle;

  /// @brief Field relaxLegTwistSpeed, offset: 0x4c, size: 0x4, def value: None
  float_t ___relaxLegTwistSpeed;

  /// @brief Field stepInterpolation, offset: 0x50, size: 0x4, def value: None
  ::RootMotion::InterpolationMode ___stepInterpolation;

  /// @brief Field offset, offset: 0x54, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___offset;

  /// @brief Field blockingEnabled, offset: 0x60, size: 0x1, def value: None
  bool ___blockingEnabled;

  /// @brief Field blockingLayers, offset: 0x64, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___blockingLayers;

  /// @brief Field raycastRadius, offset: 0x68, size: 0x4, def value: None
  float_t ___raycastRadius;

  /// @brief Field raycastHeight, offset: 0x6c, size: 0x4, def value: None
  float_t ___raycastHeight;

  /// @brief Field onLeftFootstep, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* ___onLeftFootstep;

  /// @brief Field onRightFootstep, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* ___onRightFootstep;

  /// @brief Field <centerOfMass>k__BackingField, offset: 0x80, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____centerOfMass_k__BackingField;

  /// @brief Field footsteps, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Footstep*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Footstep*>*> ___footsteps;

  /// @brief Field lastComPosition, offset: 0x98, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastComPosition;

  /// @brief Field comVelocity, offset: 0xa4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___comVelocity;

  /// @brief Field leftFootIndex, offset: 0xb0, size: 0x4, def value: None
  int32_t ___leftFootIndex;

  /// @brief Field rightFootIndex, offset: 0xb4, size: 0x4, def value: None
  int32_t ___rightFootIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__IKSolverVR__Locomotion, 0xb8>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___weight) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___footDistance) == 0x14, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___stepThreshold) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___angleThreshold) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___comAngleMlp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___maxVelocity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___velocityFactor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___maxLegStretch) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___rootSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___stepSpeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___stepHeight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___heelHeight) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___relaxLegTwistMinAngle) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___relaxLegTwistSpeed) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___stepInterpolation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___offset) == 0x54, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___blockingEnabled) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___blockingLayers) == 0x64, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___raycastRadius) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___raycastHeight) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___onLeftFootstep) == 0x70, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___onRightFootstep) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ____centerOfMass_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___footsteps) == 0x90, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___lastComPosition) == 0x98, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___comVelocity) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___leftFootIndex) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Locomotion, ___rightFootIndex) == 0xb4, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::Spine
// SizeInfo { instance_size: 552, native_size: -1, calculated_instance_size: 552, calculated_native_size: 552, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::IKSolverVR::Spine*
class CORDL_TYPE __IKSolverVR__Spine : public ::RootMotion::FinalIK::__IKSolverVR__BodyPart {
public:
  // Declarations
  /// @brief Field IKPositionHead, offset 0xa0, size 0xc
  __declspec(property(get = __cordl_internal_get_IKPositionHead, put = __cordl_internal_set_IKPositionHead))::UnityEngine::Vector3 IKPositionHead;

  /// @brief Field IKPositionPelvis, offset 0xbc, size 0xc
  __declspec(property(get = __cordl_internal_get_IKPositionPelvis, put = __cordl_internal_set_IKPositionPelvis))::UnityEngine::Vector3 IKPositionPelvis;

  /// @brief Field IKRotationHead, offset 0xac, size 0x10
  __declspec(property(get = __cordl_internal_get_IKRotationHead, put = __cordl_internal_set_IKRotationHead))::UnityEngine::Quaternion IKRotationHead;

  /// @brief Field IKRotationPelvis, offset 0xc8, size 0x10
  __declspec(property(get = __cordl_internal_get_IKRotationPelvis, put = __cordl_internal_set_IKRotationPelvis))::UnityEngine::Quaternion IKRotationPelvis;

  /// @brief Field <anchorRelativeToHead>k__BackingField, offset 0x16c, size 0x10
  __declspec(property(get = __cordl_internal_get__anchorRelativeToHead_k__BackingField,
                      put = __cordl_internal_set__anchorRelativeToHead_k__BackingField))::UnityEngine::Quaternion _anchorRelativeToHead_k__BackingField;

  /// @brief Field <anchorRotation>k__BackingField, offset 0x15c, size 0x10
  __declspec(property(get = __cordl_internal_get__anchorRotation_k__BackingField, put = __cordl_internal_set__anchorRotation_k__BackingField))::UnityEngine::Quaternion _anchorRotation_k__BackingField;

  __declspec(property(get = get_anchorRelativeToHead, put = set_anchorRelativeToHead))::UnityEngine::Quaternion anchorRelativeToHead;

  /// @brief Field anchorRelativeToPelvis, offset 0x19c, size 0x10
  __declspec(property(get = __cordl_internal_get_anchorRelativeToPelvis, put = __cordl_internal_set_anchorRelativeToPelvis))::UnityEngine::Quaternion anchorRelativeToPelvis;

  __declspec(property(get = get_anchorRotation, put = set_anchorRotation))::UnityEngine::Quaternion anchorRotation;

  /// @brief Field bodyPosStiffness, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_bodyPosStiffness, put = __cordl_internal_set_bodyPosStiffness)) float_t bodyPosStiffness;

  /// @brief Field bodyRotStiffness, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_bodyRotStiffness, put = __cordl_internal_set_bodyRotStiffness)) float_t bodyRotStiffness;

  __declspec(property(get = get_chest))::RootMotion::FinalIK::__IKSolverVR__VirtualBone* chest;

  /// @brief Field chestClampWeight, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_chestClampWeight, put = __cordl_internal_set_chestClampWeight)) float_t chestClampWeight;

  /// @brief Field chestForward, offset 0x21c, size 0xc
  __declspec(property(get = __cordl_internal_get_chestForward, put = __cordl_internal_set_chestForward))::UnityEngine::Vector3 chestForward;

  /// @brief Field chestGoal, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_chestGoal, put = __cordl_internal_set_chestGoal))::UnityW<::UnityEngine::Transform> chestGoal;

  /// @brief Field chestGoalWeight, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_chestGoalWeight, put = __cordl_internal_set_chestGoalWeight)) float_t chestGoalWeight;

  /// @brief Field chestIndex, offset 0x200, size 0x4
  __declspec(property(get = __cordl_internal_get_chestIndex, put = __cordl_internal_set_chestIndex)) int32_t chestIndex;

  /// @brief Field chestPositionOffset, offset 0xf0, size 0xc
  __declspec(property(get = __cordl_internal_get_chestPositionOffset, put = __cordl_internal_set_chestPositionOffset))::UnityEngine::Vector3 chestPositionOffset;

  /// @brief Field chestRelativeRotation, offset 0x1bc, size 0x10
  __declspec(property(get = __cordl_internal_get_chestRelativeRotation, put = __cordl_internal_set_chestRelativeRotation))::UnityEngine::Quaternion chestRelativeRotation;

  /// @brief Field chestRotationOffset, offset 0x118, size 0x10
  __declspec(property(get = __cordl_internal_get_chestRotationOffset, put = __cordl_internal_set_chestRotationOffset))::UnityEngine::Quaternion chestRotationOffset;

  /// @brief Field chestTargetRotation, offset 0x1e8, size 0x10
  __declspec(property(get = __cordl_internal_get_chestTargetRotation, put = __cordl_internal_set_chestTargetRotation))::UnityEngine::Quaternion chestTargetRotation;

  /// @brief Field faceDirection, offset 0x138, size 0xc
  __declspec(property(get = __cordl_internal_get_faceDirection, put = __cordl_internal_set_faceDirection))::UnityEngine::Vector3 faceDirection;

  __declspec(property(get = get_firstSpineBone))::RootMotion::FinalIK::__IKSolverVR__VirtualBone* firstSpineBone;

  /// @brief Field goalPositionChest, offset 0xd8, size 0xc
  __declspec(property(get = __cordl_internal_get_goalPositionChest, put = __cordl_internal_set_goalPositionChest))::UnityEngine::Vector3 goalPositionChest;

  /// @brief Field hasChest, offset 0x210, size 0x1
  __declspec(property(get = __cordl_internal_get_hasChest, put = __cordl_internal_set_hasChest)) bool hasChest;

  /// @brief Field hasLegs, offset 0x212, size 0x1
  __declspec(property(get = __cordl_internal_get_hasLegs, put = __cordl_internal_set_hasLegs)) bool hasLegs;

  /// @brief Field hasNeck, offset 0x211, size 0x1
  __declspec(property(get = __cordl_internal_get_hasNeck, put = __cordl_internal_set_hasNeck)) bool hasNeck;

  __declspec(property(get = get_head))::RootMotion::FinalIK::__IKSolverVR__VirtualBone* head;

  /// @brief Field headClampWeight, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_headClampWeight, put = __cordl_internal_set_headClampWeight)) float_t headClampWeight;

  /// @brief Field headDeltaPosition, offset 0x1cc, size 0xc
  __declspec(property(get = __cordl_internal_get_headDeltaPosition, put = __cordl_internal_set_headDeltaPosition))::UnityEngine::Vector3 headDeltaPosition;

  /// @brief Field headHeight, offset 0x214, size 0x4
  __declspec(property(get = __cordl_internal_get_headHeight, put = __cordl_internal_set_headHeight)) float_t headHeight;

  /// @brief Field headIndex, offset 0x208, size 0x4
  __declspec(property(get = __cordl_internal_get_headIndex, put = __cordl_internal_set_headIndex)) int32_t headIndex;

  /// @brief Field headPosition, offset 0x150, size 0xc
  __declspec(property(get = __cordl_internal_get_headPosition, put = __cordl_internal_set_headPosition))::UnityEngine::Vector3 headPosition;

  /// @brief Field headPositionOffset, offset 0xfc, size 0xc
  __declspec(property(get = __cordl_internal_get_headPositionOffset, put = __cordl_internal_set_headPositionOffset))::UnityEngine::Vector3 headPositionOffset;

  /// @brief Field headRotation, offset 0x17c, size 0x10
  __declspec(property(get = __cordl_internal_get_headRotation, put = __cordl_internal_set_headRotation))::UnityEngine::Quaternion headRotation;

  /// @brief Field headRotationOffset, offset 0x128, size 0x10
  __declspec(property(get = __cordl_internal_get_headRotationOffset, put = __cordl_internal_set_headRotationOffset))::UnityEngine::Quaternion headRotationOffset;

  /// @brief Field headTarget, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_headTarget, put = __cordl_internal_set_headTarget))::UnityW<::UnityEngine::Transform> headTarget;

  /// @brief Field length, offset 0x20c, size 0x4
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length)) float_t length;

  /// @brief Field locomotionHeadPositionOffset, offset 0x144, size 0xc
  __declspec(property(get = __cordl_internal_get_locomotionHeadPositionOffset, put = __cordl_internal_set_locomotionHeadPositionOffset))::UnityEngine::Vector3 locomotionHeadPositionOffset;

  /// @brief Field maintainPelvisPosition, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_maintainPelvisPosition, put = __cordl_internal_set_maintainPelvisPosition)) float_t maintainPelvisPosition;

  /// @brief Field maxRootAngle, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_maxRootAngle, put = __cordl_internal_set_maxRootAngle)) float_t maxRootAngle;

  /// @brief Field minHeadHeight, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_minHeadHeight, put = __cordl_internal_set_minHeadHeight)) float_t minHeadHeight;

  /// @brief Field moveBodyBackWhenCrouching, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_moveBodyBackWhenCrouching, put = __cordl_internal_set_moveBodyBackWhenCrouching)) float_t moveBodyBackWhenCrouching;

  __declspec(property(get = get_neck))::RootMotion::FinalIK::__IKSolverVR__VirtualBone* neck;

  /// @brief Field neckIndex, offset 0x204, size 0x4
  __declspec(property(get = __cordl_internal_get_neckIndex, put = __cordl_internal_set_neckIndex)) int32_t neckIndex;

  /// @brief Field neckStiffness, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_neckStiffness, put = __cordl_internal_set_neckStiffness)) float_t neckStiffness;

  __declspec(property(get = get_pelvis))::RootMotion::FinalIK::__IKSolverVR__VirtualBone* pelvis;

  /// @brief Field pelvisDeltaRotation, offset 0x1d8, size 0x10
  __declspec(property(get = __cordl_internal_get_pelvisDeltaRotation, put = __cordl_internal_set_pelvisDeltaRotation))::UnityEngine::Quaternion pelvisDeltaRotation;

  /// @brief Field pelvisIndex, offset 0x1f8, size 0x4
  __declspec(property(get = __cordl_internal_get_pelvisIndex, put = __cordl_internal_set_pelvisIndex)) int32_t pelvisIndex;

  /// @brief Field pelvisPositionOffset, offset 0xe4, size 0xc
  __declspec(property(get = __cordl_internal_get_pelvisPositionOffset, put = __cordl_internal_set_pelvisPositionOffset))::UnityEngine::Vector3 pelvisPositionOffset;

  /// @brief Field pelvisPositionWeight, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_pelvisPositionWeight, put = __cordl_internal_set_pelvisPositionWeight)) float_t pelvisPositionWeight;

  /// @brief Field pelvisRelativeRotation, offset 0x1ac, size 0x10
  __declspec(property(get = __cordl_internal_get_pelvisRelativeRotation, put = __cordl_internal_set_pelvisRelativeRotation))::UnityEngine::Quaternion pelvisRelativeRotation;

  /// @brief Field pelvisRotation, offset 0x18c, size 0x10
  __declspec(property(get = __cordl_internal_get_pelvisRotation, put = __cordl_internal_set_pelvisRotation))::UnityEngine::Quaternion pelvisRotation;

  /// @brief Field pelvisRotationOffset, offset 0x108, size 0x10
  __declspec(property(get = __cordl_internal_get_pelvisRotationOffset, put = __cordl_internal_set_pelvisRotationOffset))::UnityEngine::Quaternion pelvisRotationOffset;

  /// @brief Field pelvisRotationWeight, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_pelvisRotationWeight, put = __cordl_internal_set_pelvisRotationWeight)) float_t pelvisRotationWeight;

  /// @brief Field pelvisTarget, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_pelvisTarget, put = __cordl_internal_set_pelvisTarget))::UnityW<::UnityEngine::Transform> pelvisTarget;

  /// @brief Field positionWeight, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_positionWeight, put = __cordl_internal_set_positionWeight)) float_t positionWeight;

  /// @brief Field rootHeadingOffset, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_rootHeadingOffset, put = __cordl_internal_set_rootHeadingOffset)) float_t rootHeadingOffset;

  /// @brief Field rotateChestByHands, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_rotateChestByHands, put = __cordl_internal_set_rotateChestByHands)) float_t rotateChestByHands;

  /// @brief Field rotationWeight, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_rotationWeight, put = __cordl_internal_set_rotationWeight)) float_t rotationWeight;

  /// @brief Field sizeMlp, offset 0x218, size 0x4
  __declspec(property(get = __cordl_internal_get_sizeMlp, put = __cordl_internal_set_sizeMlp)) float_t sizeMlp;

  /// @brief Field spineIndex, offset 0x1fc, size 0x4
  __declspec(property(get = __cordl_internal_get_spineIndex, put = __cordl_internal_set_spineIndex)) int32_t spineIndex;

  /// @brief Method AdjustChestByHands, addr 0x1359c94, size 0x3f8, virtual false, abstract: false, final false
  inline void AdjustChestByHands(ByRef<::UnityEngine::Quaternion> chestTargetRotation, ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Arm*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Arm*>*> arms);

  /// @brief Method ApplyOffsets, addr 0x13592bc, size 0x794, virtual true, abstract: false, final false
  inline void ApplyOffsets();

  /// @brief Method Bend, addr 0x135af84, size 0x1fc, virtual false, abstract: false, final false
  inline void Bend(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> bones, int32_t firstIndex, int32_t lastIndex,
                   ::UnityEngine::Quaternion targetRotation, float_t clampWeight, bool uniformWeight, float_t w);

  /// @brief Method Bend, addr 0x135ac38, size 0x270, virtual false, abstract: false, final false
  inline void Bend(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> bones, int32_t firstIndex, int32_t lastIndex,
                   ::UnityEngine::Quaternion targetRotation, ::UnityEngine::Quaternion rotationOffset, float_t clampWeight, bool uniformWeight, float_t w);

  /// @brief Method CalculateChestTargetRotation, addr 0x1359a50, size 0x244, virtual false, abstract: false, final false
  inline void CalculateChestTargetRotation(::RootMotion::FinalIK::__IKSolverVR__VirtualBone* rootBone,
                                           ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Arm*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Arm*>*> arms);

  /// @brief Method FABRIKPass, addr 0x135a9d8, size 0x260, virtual false, abstract: false, final false
  inline void FABRIKPass(::UnityEngine::Vector3 animatedPelvisPos, ::UnityEngine::Vector3 rootUp, float_t weight);

  /// @brief Method InverseTranslateToHead, addr 0x135aea8, size 0xdc, virtual false, abstract: false, final false
  inline void InverseTranslateToHead(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*> legs, bool limited, bool useCurrentLegMag,
                                     ::UnityEngine::Vector3 offset, float_t w);

  /// @brief Method LimitPelvisPosition, addr 0x135be64, size 0x2a8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 LimitPelvisPosition(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*> legs,
                                                    ::UnityEngine::Vector3 pelvisPosition, bool useCurrentLegMag, int32_t it);

  static inline ::RootMotion::FinalIK::__IKSolverVR__Spine* New_ctor();

  /// @brief Method OnRead, addr 0x13583e4, size 0xc60, virtual true, abstract: false, final false
  inline void OnRead(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions, ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> rotations, bool hasChest,
                     bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index);

  /// @brief Method PreSolve, addr 0x13590d4, size 0x1e8, virtual true, abstract: false, final false
  inline void PreSolve();

  /// @brief Method ResetOffsets, addr 0x135bd90, size 0xd4, virtual true, abstract: false, final false
  inline void ResetOffsets();

  /// @brief Method Solve, addr 0x135a08c, size 0x53c, virtual false, abstract: false, final false
  inline void Solve(::RootMotion::FinalIK::__IKSolverVR__VirtualBone* rootBone, ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*> legs,
                    ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Arm*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Arm*>*> arms);

  /// @brief Method SolvePelvis, addr 0x135b180, size 0x290, virtual false, abstract: false, final false
  inline void SolvePelvis();

  /// @brief Method TranslatePelvis, addr 0x135a5c8, size 0x410, virtual false, abstract: false, final false
  inline void TranslatePelvis(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*> legs, ::UnityEngine::Vector3 deltaPosition,
                              ::UnityEngine::Quaternion deltaRotation);

  /// @brief Method Write, addr 0x135bbc0, size 0x1d0, virtual true, abstract: false, final false
  inline void Write(ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> solvedPositions,
                    ByRef<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>> solvedRotations);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_IKPositionHead() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_IKPositionHead();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_IKPositionPelvis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_IKPositionPelvis();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_IKRotationHead() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_IKRotationHead();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_IKRotationPelvis() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_IKRotationPelvis();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__anchorRelativeToHead_k__BackingField() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__anchorRelativeToHead_k__BackingField();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__anchorRotation_k__BackingField() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__anchorRotation_k__BackingField();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_anchorRelativeToPelvis() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_anchorRelativeToPelvis();

  constexpr float_t const& __cordl_internal_get_bodyPosStiffness() const;

  constexpr float_t& __cordl_internal_get_bodyPosStiffness();

  constexpr float_t const& __cordl_internal_get_bodyRotStiffness() const;

  constexpr float_t& __cordl_internal_get_bodyRotStiffness();

  constexpr float_t const& __cordl_internal_get_chestClampWeight() const;

  constexpr float_t& __cordl_internal_get_chestClampWeight();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_chestForward() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_chestForward();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_chestGoal() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_chestGoal();

  constexpr float_t const& __cordl_internal_get_chestGoalWeight() const;

  constexpr float_t& __cordl_internal_get_chestGoalWeight();

  constexpr int32_t const& __cordl_internal_get_chestIndex() const;

  constexpr int32_t& __cordl_internal_get_chestIndex();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_chestPositionOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_chestPositionOffset();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_chestRelativeRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_chestRelativeRotation();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_chestRotationOffset() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_chestRotationOffset();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_chestTargetRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_chestTargetRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_faceDirection() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_faceDirection();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_goalPositionChest() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_goalPositionChest();

  constexpr bool const& __cordl_internal_get_hasChest() const;

  constexpr bool& __cordl_internal_get_hasChest();

  constexpr bool const& __cordl_internal_get_hasLegs() const;

  constexpr bool& __cordl_internal_get_hasLegs();

  constexpr bool const& __cordl_internal_get_hasNeck() const;

  constexpr bool& __cordl_internal_get_hasNeck();

  constexpr float_t const& __cordl_internal_get_headClampWeight() const;

  constexpr float_t& __cordl_internal_get_headClampWeight();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headDeltaPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_headDeltaPosition();

  constexpr float_t const& __cordl_internal_get_headHeight() const;

  constexpr float_t& __cordl_internal_get_headHeight();

  constexpr int32_t const& __cordl_internal_get_headIndex() const;

  constexpr int32_t& __cordl_internal_get_headIndex();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_headPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headPositionOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_headPositionOffset();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_headRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_headRotation();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_headRotationOffset() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_headRotationOffset();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_headTarget() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_headTarget();

  constexpr float_t const& __cordl_internal_get_length() const;

  constexpr float_t& __cordl_internal_get_length();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_locomotionHeadPositionOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_locomotionHeadPositionOffset();

  constexpr float_t const& __cordl_internal_get_maintainPelvisPosition() const;

  constexpr float_t& __cordl_internal_get_maintainPelvisPosition();

  constexpr float_t const& __cordl_internal_get_maxRootAngle() const;

  constexpr float_t& __cordl_internal_get_maxRootAngle();

  constexpr float_t const& __cordl_internal_get_minHeadHeight() const;

  constexpr float_t& __cordl_internal_get_minHeadHeight();

  constexpr float_t const& __cordl_internal_get_moveBodyBackWhenCrouching() const;

  constexpr float_t& __cordl_internal_get_moveBodyBackWhenCrouching();

  constexpr int32_t const& __cordl_internal_get_neckIndex() const;

  constexpr int32_t& __cordl_internal_get_neckIndex();

  constexpr float_t const& __cordl_internal_get_neckStiffness() const;

  constexpr float_t& __cordl_internal_get_neckStiffness();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_pelvisDeltaRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_pelvisDeltaRotation();

  constexpr int32_t const& __cordl_internal_get_pelvisIndex() const;

  constexpr int32_t& __cordl_internal_get_pelvisIndex();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pelvisPositionOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_pelvisPositionOffset();

  constexpr float_t const& __cordl_internal_get_pelvisPositionWeight() const;

  constexpr float_t& __cordl_internal_get_pelvisPositionWeight();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_pelvisRelativeRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_pelvisRelativeRotation();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_pelvisRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_pelvisRotation();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_pelvisRotationOffset() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_pelvisRotationOffset();

  constexpr float_t const& __cordl_internal_get_pelvisRotationWeight() const;

  constexpr float_t& __cordl_internal_get_pelvisRotationWeight();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pelvisTarget() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pelvisTarget();

  constexpr float_t const& __cordl_internal_get_positionWeight() const;

  constexpr float_t& __cordl_internal_get_positionWeight();

  constexpr float_t const& __cordl_internal_get_rootHeadingOffset() const;

  constexpr float_t& __cordl_internal_get_rootHeadingOffset();

  constexpr float_t const& __cordl_internal_get_rotateChestByHands() const;

  constexpr float_t& __cordl_internal_get_rotateChestByHands();

  constexpr float_t const& __cordl_internal_get_rotationWeight() const;

  constexpr float_t& __cordl_internal_get_rotationWeight();

  constexpr float_t const& __cordl_internal_get_sizeMlp() const;

  constexpr float_t& __cordl_internal_get_sizeMlp();

  constexpr int32_t const& __cordl_internal_get_spineIndex() const;

  constexpr int32_t& __cordl_internal_get_spineIndex();

  constexpr void __cordl_internal_set_IKPositionHead(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_IKPositionPelvis(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_IKRotationHead(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_IKRotationPelvis(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__anchorRelativeToHead_k__BackingField(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__anchorRotation_k__BackingField(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_anchorRelativeToPelvis(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_bodyPosStiffness(float_t value);

  constexpr void __cordl_internal_set_bodyRotStiffness(float_t value);

  constexpr void __cordl_internal_set_chestClampWeight(float_t value);

  constexpr void __cordl_internal_set_chestForward(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_chestGoal(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_chestGoalWeight(float_t value);

  constexpr void __cordl_internal_set_chestIndex(int32_t value);

  constexpr void __cordl_internal_set_chestPositionOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_chestRelativeRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_chestRotationOffset(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_chestTargetRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_faceDirection(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_goalPositionChest(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_hasChest(bool value);

  constexpr void __cordl_internal_set_hasLegs(bool value);

  constexpr void __cordl_internal_set_hasNeck(bool value);

  constexpr void __cordl_internal_set_headClampWeight(float_t value);

  constexpr void __cordl_internal_set_headDeltaPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_headHeight(float_t value);

  constexpr void __cordl_internal_set_headIndex(int32_t value);

  constexpr void __cordl_internal_set_headPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_headPositionOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_headRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_headRotationOffset(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_headTarget(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_length(float_t value);

  constexpr void __cordl_internal_set_locomotionHeadPositionOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_maintainPelvisPosition(float_t value);

  constexpr void __cordl_internal_set_maxRootAngle(float_t value);

  constexpr void __cordl_internal_set_minHeadHeight(float_t value);

  constexpr void __cordl_internal_set_moveBodyBackWhenCrouching(float_t value);

  constexpr void __cordl_internal_set_neckIndex(int32_t value);

  constexpr void __cordl_internal_set_neckStiffness(float_t value);

  constexpr void __cordl_internal_set_pelvisDeltaRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_pelvisIndex(int32_t value);

  constexpr void __cordl_internal_set_pelvisPositionOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_pelvisPositionWeight(float_t value);

  constexpr void __cordl_internal_set_pelvisRelativeRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_pelvisRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_pelvisRotationOffset(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_pelvisRotationWeight(float_t value);

  constexpr void __cordl_internal_set_pelvisTarget(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_positionWeight(float_t value);

  constexpr void __cordl_internal_set_rootHeadingOffset(float_t value);

  constexpr void __cordl_internal_set_rotateChestByHands(float_t value);

  constexpr void __cordl_internal_set_rotationWeight(float_t value);

  constexpr void __cordl_internal_set_sizeMlp(float_t value);

  constexpr void __cordl_internal_set_spineIndex(int32_t value);

  /// @brief Method .ctor, addr 0x135c27c, size 0x11c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_anchorRelativeToHead, addr 0x13583bc, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_anchorRelativeToHead();

  /// @brief Method get_anchorRotation, addr 0x1358394, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_anchorRotation();

  /// @brief Method get_chest, addr 0x13582e4, size 0x48, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* get_chest();

  /// @brief Method get_firstSpineBone, addr 0x13582b0, size 0x34, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* get_firstSpineBone();

  /// @brief Method get_head, addr 0x1358360, size 0x34, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* get_head();

  /// @brief Method get_neck, addr 0x135832c, size 0x34, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* get_neck();

  /// @brief Method get_pelvis, addr 0x135827c, size 0x34, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* get_pelvis();

  /// @brief Method set_anchorRelativeToHead, addr 0x13583d0, size 0x14, virtual false, abstract: false, final false
  inline void set_anchorRelativeToHead(::UnityEngine::Quaternion value);

  /// @brief Method set_anchorRotation, addr 0x13583a8, size 0x14, virtual false, abstract: false, final false
  inline void set_anchorRotation(::UnityEngine::Quaternion value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKSolverVR__Spine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IKSolverVR__Spine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IKSolverVR__Spine(__IKSolverVR__Spine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IKSolverVR__Spine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IKSolverVR__Spine(__IKSolverVR__Spine const&) = delete;

  /// @brief Field headTarget, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___headTarget;

  /// @brief Field pelvisTarget, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___pelvisTarget;

  /// @brief Field positionWeight, offset: 0x58, size: 0x4, def value: None
  float_t ___positionWeight;

  /// @brief Field rotationWeight, offset: 0x5c, size: 0x4, def value: None
  float_t ___rotationWeight;

  /// @brief Field pelvisPositionWeight, offset: 0x60, size: 0x4, def value: None
  float_t ___pelvisPositionWeight;

  /// @brief Field pelvisRotationWeight, offset: 0x64, size: 0x4, def value: None
  float_t ___pelvisRotationWeight;

  /// @brief Field chestGoal, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___chestGoal;

  /// @brief Field chestGoalWeight, offset: 0x70, size: 0x4, def value: None
  float_t ___chestGoalWeight;

  /// @brief Field minHeadHeight, offset: 0x74, size: 0x4, def value: None
  float_t ___minHeadHeight;

  /// @brief Field bodyPosStiffness, offset: 0x78, size: 0x4, def value: None
  float_t ___bodyPosStiffness;

  /// @brief Field bodyRotStiffness, offset: 0x7c, size: 0x4, def value: None
  float_t ___bodyRotStiffness;

  /// @brief Field neckStiffness, offset: 0x80, size: 0x4, def value: None
  float_t ___neckStiffness;

  /// @brief Field rotateChestByHands, offset: 0x84, size: 0x4, def value: None
  float_t ___rotateChestByHands;

  /// @brief Field chestClampWeight, offset: 0x88, size: 0x4, def value: None
  float_t ___chestClampWeight;

  /// @brief Field headClampWeight, offset: 0x8c, size: 0x4, def value: None
  float_t ___headClampWeight;

  /// @brief Field moveBodyBackWhenCrouching, offset: 0x90, size: 0x4, def value: None
  float_t ___moveBodyBackWhenCrouching;

  /// @brief Field maintainPelvisPosition, offset: 0x94, size: 0x4, def value: None
  float_t ___maintainPelvisPosition;

  /// @brief Field maxRootAngle, offset: 0x98, size: 0x4, def value: None
  float_t ___maxRootAngle;

  /// @brief Field rootHeadingOffset, offset: 0x9c, size: 0x4, def value: None
  float_t ___rootHeadingOffset;

  /// @brief Field IKPositionHead, offset: 0xa0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___IKPositionHead;

  /// @brief Field IKRotationHead, offset: 0xac, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___IKRotationHead;

  /// @brief Field IKPositionPelvis, offset: 0xbc, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___IKPositionPelvis;

  /// @brief Field IKRotationPelvis, offset: 0xc8, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___IKRotationPelvis;

  /// @brief Field goalPositionChest, offset: 0xd8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___goalPositionChest;

  /// @brief Field pelvisPositionOffset, offset: 0xe4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___pelvisPositionOffset;

  /// @brief Field chestPositionOffset, offset: 0xf0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___chestPositionOffset;

  /// @brief Field headPositionOffset, offset: 0xfc, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___headPositionOffset;

  /// @brief Field pelvisRotationOffset, offset: 0x108, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___pelvisRotationOffset;

  /// @brief Field chestRotationOffset, offset: 0x118, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___chestRotationOffset;

  /// @brief Field headRotationOffset, offset: 0x128, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___headRotationOffset;

  /// @brief Field faceDirection, offset: 0x138, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___faceDirection;

  /// @brief Field locomotionHeadPositionOffset, offset: 0x144, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___locomotionHeadPositionOffset;

  /// @brief Field headPosition, offset: 0x150, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___headPosition;

  /// @brief Field <anchorRotation>k__BackingField, offset: 0x15c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____anchorRotation_k__BackingField;

  /// @brief Field <anchorRelativeToHead>k__BackingField, offset: 0x16c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____anchorRelativeToHead_k__BackingField;

  /// @brief Field headRotation, offset: 0x17c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___headRotation;

  /// @brief Field pelvisRotation, offset: 0x18c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___pelvisRotation;

  /// @brief Field anchorRelativeToPelvis, offset: 0x19c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___anchorRelativeToPelvis;

  /// @brief Field pelvisRelativeRotation, offset: 0x1ac, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___pelvisRelativeRotation;

  /// @brief Field chestRelativeRotation, offset: 0x1bc, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___chestRelativeRotation;

  /// @brief Field headDeltaPosition, offset: 0x1cc, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___headDeltaPosition;

  /// @brief Field pelvisDeltaRotation, offset: 0x1d8, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___pelvisDeltaRotation;

  /// @brief Field chestTargetRotation, offset: 0x1e8, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___chestTargetRotation;

  /// @brief Field pelvisIndex, offset: 0x1f8, size: 0x4, def value: None
  int32_t ___pelvisIndex;

  /// @brief Field spineIndex, offset: 0x1fc, size: 0x4, def value: None
  int32_t ___spineIndex;

  /// @brief Field chestIndex, offset: 0x200, size: 0x4, def value: None
  int32_t ___chestIndex;

  /// @brief Field neckIndex, offset: 0x204, size: 0x4, def value: None
  int32_t ___neckIndex;

  /// @brief Field headIndex, offset: 0x208, size: 0x4, def value: None
  int32_t ___headIndex;

  /// @brief Field length, offset: 0x20c, size: 0x4, def value: None
  float_t ___length;

  /// @brief Field hasChest, offset: 0x210, size: 0x1, def value: None
  bool ___hasChest;

  /// @brief Field hasNeck, offset: 0x211, size: 0x1, def value: None
  bool ___hasNeck;

  /// @brief Field hasLegs, offset: 0x212, size: 0x1, def value: None
  bool ___hasLegs;

  /// @brief Field headHeight, offset: 0x214, size: 0x4, def value: None
  float_t ___headHeight;

  /// @brief Field sizeMlp, offset: 0x218, size: 0x4, def value: None
  float_t ___sizeMlp;

  /// @brief Field chestForward, offset: 0x21c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___chestForward;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__IKSolverVR__Spine, 0x228>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___headTarget) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___pelvisTarget) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___positionWeight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___rotationWeight) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___pelvisPositionWeight) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___pelvisRotationWeight) == 0x64, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___chestGoal) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___chestGoalWeight) == 0x70, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___minHeadHeight) == 0x74, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___bodyPosStiffness) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___bodyRotStiffness) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___neckStiffness) == 0x80, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___rotateChestByHands) == 0x84, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___chestClampWeight) == 0x88, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___headClampWeight) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___moveBodyBackWhenCrouching) == 0x90, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___maintainPelvisPosition) == 0x94, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___maxRootAngle) == 0x98, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___rootHeadingOffset) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___IKPositionHead) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___IKRotationHead) == 0xac, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___IKPositionPelvis) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___IKRotationPelvis) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___goalPositionChest) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___pelvisPositionOffset) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___chestPositionOffset) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___headPositionOffset) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___pelvisRotationOffset) == 0x108, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___chestRotationOffset) == 0x118, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___headRotationOffset) == 0x128, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___faceDirection) == 0x138, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___locomotionHeadPositionOffset) == 0x144, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___headPosition) == 0x150, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ____anchorRotation_k__BackingField) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ____anchorRelativeToHead_k__BackingField) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___headRotation) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___pelvisRotation) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___anchorRelativeToPelvis) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___pelvisRelativeRotation) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___chestRelativeRotation) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___headDeltaPosition) == 0x1cc, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___pelvisDeltaRotation) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___chestTargetRotation) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___pelvisIndex) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___spineIndex) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___chestIndex) == 0x200, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___neckIndex) == 0x204, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___headIndex) == 0x208, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___length) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___hasChest) == 0x210, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___hasNeck) == 0x211, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___hasLegs) == 0x212, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___headHeight) == 0x214, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___sizeMlp) == 0x218, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__Spine, ___chestForward) == 0x21c, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::PositionOffset
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: true
// CS Name: ::IKSolverVR::PositionOffset
struct CORDL_TYPE __IKSolverVR__PositionOffset {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____IKSolverVR__PositionOffset_Unwrapped
  enum struct ____IKSolverVR__PositionOffset_Unwrapped : int32_t {
    __E_Pelvis = static_cast<int32_t>(0x0),
    __E_Chest = static_cast<int32_t>(0x1),
    __E_Head = static_cast<int32_t>(0x2),
    __E_LeftHand = static_cast<int32_t>(0x3),
    __E_RightHand = static_cast<int32_t>(0x4),
    __E_LeftFoot = static_cast<int32_t>(0x5),
    __E_RightFoot = static_cast<int32_t>(0x6),
    __E_LeftHeel = static_cast<int32_t>(0x7),
    __E_RightHeel = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____IKSolverVR__PositionOffset_Unwrapped() const noexcept {
    return static_cast<____IKSolverVR__PositionOffset_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKSolverVR__PositionOffset();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __IKSolverVR__PositionOffset(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Chest value: static_cast<int32_t>(0x1)
  static ::RootMotion::FinalIK::__IKSolverVR__PositionOffset const Chest;

  /// @brief Field Head value: static_cast<int32_t>(0x2)
  static ::RootMotion::FinalIK::__IKSolverVR__PositionOffset const Head;

  /// @brief Field LeftFoot value: static_cast<int32_t>(0x5)
  static ::RootMotion::FinalIK::__IKSolverVR__PositionOffset const LeftFoot;

  /// @brief Field LeftHand value: static_cast<int32_t>(0x3)
  static ::RootMotion::FinalIK::__IKSolverVR__PositionOffset const LeftHand;

  /// @brief Field LeftHeel value: static_cast<int32_t>(0x7)
  static ::RootMotion::FinalIK::__IKSolverVR__PositionOffset const LeftHeel;

  /// @brief Field Pelvis value: static_cast<int32_t>(0x0)
  static ::RootMotion::FinalIK::__IKSolverVR__PositionOffset const Pelvis;

  /// @brief Field RightFoot value: static_cast<int32_t>(0x6)
  static ::RootMotion::FinalIK::__IKSolverVR__PositionOffset const RightFoot;

  /// @brief Field RightHand value: static_cast<int32_t>(0x4)
  static ::RootMotion::FinalIK::__IKSolverVR__PositionOffset const RightHand;

  /// @brief Field RightHeel value: static_cast<int32_t>(0x8)
  static ::RootMotion::FinalIK::__IKSolverVR__PositionOffset const RightHeel;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__IKSolverVR__PositionOffset, 0x4>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__PositionOffset, value__) == 0x0, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::RotationOffset
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: true
// CS Name: ::IKSolverVR::RotationOffset
struct CORDL_TYPE __IKSolverVR__RotationOffset {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____IKSolverVR__RotationOffset_Unwrapped
  enum struct ____IKSolverVR__RotationOffset_Unwrapped : int32_t {
    __E_Pelvis = static_cast<int32_t>(0x0),
    __E_Chest = static_cast<int32_t>(0x1),
    __E_Head = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____IKSolverVR__RotationOffset_Unwrapped() const noexcept {
    return static_cast<____IKSolverVR__RotationOffset_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKSolverVR__RotationOffset();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __IKSolverVR__RotationOffset(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Chest value: static_cast<int32_t>(0x1)
  static ::RootMotion::FinalIK::__IKSolverVR__RotationOffset const Chest;

  /// @brief Field Head value: static_cast<int32_t>(0x2)
  static ::RootMotion::FinalIK::__IKSolverVR__RotationOffset const Head;

  /// @brief Field Pelvis value: static_cast<int32_t>(0x0)
  static ::RootMotion::FinalIK::__IKSolverVR__RotationOffset const Pelvis;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__IKSolverVR__RotationOffset, 0x4>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__RotationOffset, value__) == 0x0, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::VirtualBone
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::IKSolverVR::VirtualBone*
class CORDL_TYPE __IKSolverVR__VirtualBone : public ::System::Object {
public:
  // Declarations
  /// @brief Field axis, offset 0x50, size 0xc
  __declspec(property(get = __cordl_internal_get_axis, put = __cordl_internal_set_axis))::UnityEngine::Vector3 axis;

  /// @brief Field length, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length)) float_t length;

  /// @brief Field readPosition, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_readPosition, put = __cordl_internal_set_readPosition))::UnityEngine::Vector3 readPosition;

  /// @brief Field readRotation, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get_readRotation, put = __cordl_internal_set_readRotation))::UnityEngine::Quaternion readRotation;

  /// @brief Field solverPosition, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get_solverPosition, put = __cordl_internal_set_solverPosition))::UnityEngine::Vector3 solverPosition;

  /// @brief Field solverRotation, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_solverRotation, put = __cordl_internal_set_solverRotation))::UnityEngine::Quaternion solverRotation;

  /// @brief Field sqrMag, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_sqrMag, put = __cordl_internal_set_sqrMag)) float_t sqrMag;

  /// @brief Method GetDirectionToBendPoint, addr 0x135cacc, size 0x158, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetDirectionToBendPoint(::UnityEngine::Vector3 direction, float_t directionMag, ::UnityEngine::Vector3 bendDirection, float_t sqrMag1, float_t sqrMag2);

  static inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* New_ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method PreSolve, addr 0x135c598, size 0x160, virtual false, abstract: false, final false
  static inline float_t PreSolve(ByRef<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>> bones);

  /// @brief Method Read, addr 0x13590b4, size 0x20, virtual false, abstract: false, final false
  inline void Read(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method RotateAroundPoint, addr 0x135c10c, size 0x170, virtual false, abstract: false, final false
  static inline void RotateAroundPoint(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> bones, int32_t index,
                                       ::UnityEngine::Vector3 point, ::UnityEngine::Quaternion rotation);

  /// @brief Method RotateBy, addr 0x135c6f8, size 0x1a8, virtual false, abstract: false, final false
  static inline void RotateBy(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> bones, int32_t index,
                              ::UnityEngine::Quaternion rotation);

  /// @brief Method RotateBy, addr 0x135c8a0, size 0x188, virtual false, abstract: false, final false
  static inline void RotateBy(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> bones, ::UnityEngine::Quaternion rotation);

  /// @brief Method RotateTo, addr 0x135ca28, size 0xa4, virtual false, abstract: false, final false
  static inline void RotateTo(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> bones, int32_t index,
                              ::UnityEngine::Quaternion rotation);

  /// @brief Method SolveCCD, addr 0x135cd38, size 0x1b4, virtual false, abstract: false, final false
  static inline void SolveCCD(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> bones, ::UnityEngine::Vector3 targetPosition,
                              float_t weight, int32_t iterations);

  /// @brief Method SolveFABRIK, addr 0x135b410, size 0x3cc, virtual false, abstract: false, final false
  static inline void SolveFABRIK(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> bones, ::UnityEngine::Vector3 startPosition,
                                 ::UnityEngine::Vector3 targetPosition, float_t weight, float_t minNormalizedTargetDistance, int32_t iterations, float_t length, ::UnityEngine::Vector3 startOffset);

  /// @brief Method SolveFABRIKJoint, addr 0x135cc24, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 SolveFABRIKJoint(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2, float_t length);

  /// @brief Method SolveTrigonometric, addr 0x135b7dc, size 0x3e4, virtual false, abstract: false, final false
  static inline void SolveTrigonometric(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> bones, int32_t first, int32_t second,
                                        int32_t third, ::UnityEngine::Vector3 targetPosition, ::UnityEngine::Vector3 bendNormal, float_t weight);

  /// @brief Method SwingRotation, addr 0x135c398, size 0x200, virtual false, abstract: false, final false
  static inline void SwingRotation(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> bones, int32_t index,
                                   ::UnityEngine::Vector3 swingTarget, float_t weight);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_axis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_axis();

  constexpr float_t const& __cordl_internal_get_length() const;

  constexpr float_t& __cordl_internal_get_length();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_readPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_readPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_readRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_readRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_solverPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_solverPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_solverRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_solverRotation();

  constexpr float_t const& __cordl_internal_get_sqrMag() const;

  constexpr float_t& __cordl_internal_get_sqrMag();

  constexpr void __cordl_internal_set_axis(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_length(float_t value);

  constexpr void __cordl_internal_set_readPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_readRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_solverPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_solverRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_sqrMag(float_t value);

  /// @brief Method .ctor, addr 0x1359044, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKSolverVR__VirtualBone();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IKSolverVR__VirtualBone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IKSolverVR__VirtualBone(__IKSolverVR__VirtualBone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IKSolverVR__VirtualBone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IKSolverVR__VirtualBone(__IKSolverVR__VirtualBone const&) = delete;

  /// @brief Field readPosition, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___readPosition;

  /// @brief Field readRotation, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___readRotation;

  /// @brief Field solverPosition, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___solverPosition;

  /// @brief Field solverRotation, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___solverRotation;

  /// @brief Field length, offset: 0x48, size: 0x4, def value: None
  float_t ___length;

  /// @brief Field sqrMag, offset: 0x4c, size: 0x4, def value: None
  float_t ___sqrMag;

  /// @brief Field axis, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___axis;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__IKSolverVR__VirtualBone, 0x60>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__VirtualBone, ___readPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__VirtualBone, ___readRotation) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__VirtualBone, ___solverPosition) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__VirtualBone, ___solverRotation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__VirtualBone, ___length) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__VirtualBone, ___sqrMag) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverVR__VirtualBone, ___axis) == 0x50, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::IKSolverVR
// SizeInfo { instance_size: 376, native_size: -1, calculated_instance_size: 376, calculated_native_size: 376, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::IKSolverVR*
class CORDL_TYPE IKSolverVR : public ::RootMotion::FinalIK::IKSolver {
public:
  // Declarations
  using Arm = ::RootMotion::FinalIK::__IKSolverVR__Arm;

  using BodyPart = ::RootMotion::FinalIK::__IKSolverVR__BodyPart;

  using Footstep = ::RootMotion::FinalIK::__IKSolverVR__Footstep;

  using Leg = ::RootMotion::FinalIK::__IKSolverVR__Leg;

  using Locomotion = ::RootMotion::FinalIK::__IKSolverVR__Locomotion;

  using PositionOffset = ::RootMotion::FinalIK::__IKSolverVR__PositionOffset;

  using RotationOffset = ::RootMotion::FinalIK::__IKSolverVR__RotationOffset;

  using Spine = ::RootMotion::FinalIK::__IKSolverVR__Spine;

  using VirtualBone = ::RootMotion::FinalIK::__IKSolverVR__VirtualBone;

  /// @brief Field LOD, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_LOD, put = __cordl_internal_set_LOD)) int32_t LOD;

  /// @brief Field <rootBone>k__BackingField, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__rootBone_k__BackingField,
                      put = __cordl_internal_set__rootBone_k__BackingField))::RootMotion::FinalIK::__IKSolverVR__VirtualBone* _rootBone_k__BackingField;

  /// @brief Field arms, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_arms, put = __cordl_internal_set_arms))::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Arm*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Arm*>*> arms;

  /// @brief Field bodyOffset, offset 0xb0, size 0xc
  __declspec(property(get = __cordl_internal_get_bodyOffset, put = __cordl_internal_set_bodyOffset))::UnityEngine::Vector3 bodyOffset;

  /// @brief Field debugPos1, offset 0x148, size 0xc
  __declspec(property(get = __cordl_internal_get_debugPos1, put = __cordl_internal_set_debugPos1))::UnityEngine::Vector3 debugPos1;

  /// @brief Field debugPos2, offset 0x154, size 0xc
  __declspec(property(get = __cordl_internal_get_debugPos2, put = __cordl_internal_set_debugPos2))::UnityEngine::Vector3 debugPos2;

  /// @brief Field debugPos3, offset 0x160, size 0xc
  __declspec(property(get = __cordl_internal_get_debugPos3, put = __cordl_internal_set_debugPos3))::UnityEngine::Vector3 debugPos3;

  /// @brief Field debugPos4, offset 0x16c, size 0xc
  __declspec(property(get = __cordl_internal_get_debugPos4, put = __cordl_internal_set_debugPos4))::UnityEngine::Vector3 debugPos4;

  /// @brief Field defaultLocalPositions, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultLocalPositions,
                      put = __cordl_internal_set_defaultLocalPositions))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> defaultLocalPositions;

  /// @brief Field defaultLocalRotations, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultLocalRotations,
                      put = __cordl_internal_set_defaultLocalRotations))::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> defaultLocalRotations;

  /// @brief Field hasChest, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_hasChest, put = __cordl_internal_set_hasChest)) bool hasChest;

  /// @brief Field hasLegs, offset 0x64, size 0x1
  __declspec(property(get = __cordl_internal_get_hasLegs, put = __cordl_internal_set_hasLegs)) bool hasLegs;

  /// @brief Field hasNeck, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_hasNeck, put = __cordl_internal_set_hasNeck)) bool hasNeck;

  /// @brief Field hasShoulders, offset 0x62, size 0x1
  __declspec(property(get = __cordl_internal_get_hasShoulders, put = __cordl_internal_set_hasShoulders)) bool hasShoulders;

  /// @brief Field hasToes, offset 0x63, size 0x1
  __declspec(property(get = __cordl_internal_get_hasToes, put = __cordl_internal_set_hasToes)) bool hasToes;

  /// @brief Field headDeltaPosition, offset 0x124, size 0xc
  __declspec(property(get = __cordl_internal_get_headDeltaPosition, put = __cordl_internal_set_headDeltaPosition))::UnityEngine::Vector3 headDeltaPosition;

  /// @brief Field headPosition, offset 0x118, size 0xc
  __declspec(property(get = __cordl_internal_get_headPosition, put = __cordl_internal_set_headPosition))::UnityEngine::Vector3 headPosition;

  /// @brief Field lastLOD, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_lastLOD, put = __cordl_internal_set_lastLOD)) int32_t lastLOD;

  /// @brief Field lastOffset, offset 0x13c, size 0xc
  __declspec(property(get = __cordl_internal_get_lastOffset, put = __cordl_internal_set_lastOffset))::UnityEngine::Vector3 lastOffset;

  /// @brief Field leftArm, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_leftArm, put = __cordl_internal_set_leftArm))::RootMotion::FinalIK::__IKSolverVR__Arm* leftArm;

  /// @brief Field leftLeg, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_leftLeg, put = __cordl_internal_set_leftLeg))::RootMotion::FinalIK::__IKSolverVR__Leg* leftLeg;

  /// @brief Field legs, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_legs, put = __cordl_internal_set_legs))::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*> legs;

  /// @brief Field locomotion, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_locomotion, put = __cordl_internal_set_locomotion))::RootMotion::FinalIK::__IKSolverVR__Locomotion* locomotion;

  /// @brief Field plantFeet, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get_plantFeet, put = __cordl_internal_set_plantFeet)) bool plantFeet;

  /// @brief Field raycastOriginPelvis, offset 0x130, size 0xc
  __declspec(property(get = __cordl_internal_get_raycastOriginPelvis, put = __cordl_internal_set_raycastOriginPelvis))::UnityEngine::Vector3 raycastOriginPelvis;

  /// @brief Field readPositions, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_readPositions, put = __cordl_internal_set_readPositions))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> readPositions;

  /// @brief Field readRotations, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_readRotations, put = __cordl_internal_set_readRotations))::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> readRotations;

  /// @brief Field rightArm, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_rightArm, put = __cordl_internal_set_rightArm))::RootMotion::FinalIK::__IKSolverVR__Arm* rightArm;

  /// @brief Field rightLeg, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_rightLeg, put = __cordl_internal_set_rightLeg))::RootMotion::FinalIK::__IKSolverVR__Leg* rightLeg;

  __declspec(property(get = get_rootBone, put = set_rootBone))::RootMotion::FinalIK::__IKSolverVR__VirtualBone* rootBone;

  /// @brief Field rootV, offset 0x98, size 0xc
  __declspec(property(get = __cordl_internal_get_rootV, put = __cordl_internal_set_rootV))::UnityEngine::Vector3 rootV;

  /// @brief Field rootVelocity, offset 0xa4, size 0xc
  __declspec(property(get = __cordl_internal_get_rootVelocity, put = __cordl_internal_set_rootVelocity))::UnityEngine::Vector3 rootVelocity;

  /// @brief Field solvedPositions, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_solvedPositions, put = __cordl_internal_set_solvedPositions))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> solvedPositions;

  /// @brief Field solvedRotations, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_solvedRotations, put = __cordl_internal_set_solvedRotations))::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> solvedRotations;

  /// @brief Field solverTransforms, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_solverTransforms,
                      put = __cordl_internal_set_solverTransforms))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> solverTransforms;

  /// @brief Field spine, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_spine, put = __cordl_internal_set_spine))::RootMotion::FinalIK::__IKSolverVR__Spine* spine;

  /// @brief Field supportLegIndex, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_supportLegIndex, put = __cordl_internal_set_supportLegIndex)) int32_t supportLegIndex;

  /// @brief Method AddPlatformMotion, addr 0x134cda0, size 0xd4, virtual false, abstract: false, final false
  inline void AddPlatformMotion(::UnityEngine::Vector3 deltaPosition, ::UnityEngine::Quaternion deltaRotation, ::UnityEngine::Vector3 platformPivot);

  /// @brief Method AddPositionOffset, addr 0x134caf8, size 0x144, virtual false, abstract: false, final false
  inline void AddPositionOffset(::RootMotion::FinalIK::__IKSolverVR__PositionOffset positionOffset, ::UnityEngine::Vector3 value);

  /// @brief Method AddRotationOffset, addr 0x134cc7c, size 0x124, virtual false, abstract: false, final false
  inline void AddRotationOffset(::RootMotion::FinalIK::__IKSolverVR__RotationOffset rotationOffset, ::UnityEngine::Quaternion value);

  /// @brief Method AddRotationOffset, addr 0x134cc3c, size 0x40, virtual false, abstract: false, final false
  inline void AddRotationOffset(::RootMotion::FinalIK::__IKSolverVR__RotationOffset rotationOffset, ::UnityEngine::Vector3 value);

  /// @brief Method DefaultAnimationCurves, addr 0x134c17c, size 0x14c, virtual false, abstract: false, final false
  inline void DefaultAnimationCurves();

  /// @brief Method FixTransforms, addr 0x134dd98, size 0x1ec, virtual true, abstract: false, final false
  inline void FixTransforms();

  /// @brief Method GetNormal, addr 0x134e260, size 0x270, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetNormal(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> transforms);

  /// @brief Method GetPelvisOffset, addr 0x1352d64, size 0x6ec, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPelvisOffset();

  /// @brief Method GetPoint, addr 0x134dff4, size 0x70, virtual true, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolver__Point* GetPoint(::UnityEngine::Transform* transform);

  /// @brief Method GetPoints, addr 0x134df84, size 0x70, virtual true, abstract: false, final false
  inline ::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> GetPoints();

  /// @brief Method GetPosition, addr 0x134feec, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPosition(int32_t index);

  /// @brief Method GetRotation, addr 0x134ff28, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetRotation(int32_t index);

  /// @brief Method GetSineKeyframes, addr 0x134c9e4, size 0x114, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*> GetSineKeyframes(float_t mag);

  /// @brief Method GuessHandOrientations, addr 0x134c2c8, size 0x2f0, virtual false, abstract: false, final false
  inline void GuessHandOrientations(::RootMotion::FinalIK::__VRIK__References* references, bool onlyIfZero);

  /// @brief Method GuessPalmToThumbAxis, addr 0x134c69c, size 0x348, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GuessPalmToThumbAxis(::UnityEngine::Transform* hand, ::UnityEngine::Transform* forearm);

  /// @brief Method GuessWristToPalmAxis, addr 0x134c5b8, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GuessWristToPalmAxis(::UnityEngine::Transform* hand, ::UnityEngine::Transform* forearm);

  /// @brief Method IsValid, addr 0x134e064, size 0x1fc, virtual true, abstract: false, final false
  inline bool IsValid(ByRef<::StringW> message);

  static inline ::RootMotion::FinalIK::IKSolverVR* New_ctor();

  /// @brief Method OnInitiate, addr 0x134e4d0, size 0x3c, virtual true, abstract: false, final false
  inline void OnInitiate();

  /// @brief Method OnUpdate, addr 0x134e50c, size 0x408, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method Read, addr 0x134d554, size 0x50c, virtual false, abstract: false, final false
  inline void Read(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions, ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> rotations, bool hasChest,
                   bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs);

  /// @brief Method Reset, addr 0x134d2f4, size 0x110, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetToReferences, addr 0x134bea8, size 0x2d4, virtual false, abstract: false, final false
  inline void SetToReferences(::RootMotion::FinalIK::__VRIK__References* references);

  /// @brief Method Solve, addr 0x134e914, size 0x1048, virtual false, abstract: false, final false
  inline void Solve();

  /// @brief Method StoreDefaultLocalState, addr 0x134dc44, size 0x154, virtual true, abstract: false, final false
  inline void StoreDefaultLocalState();

  /// @brief Method UpdateSolverTransforms, addr 0x134d404, size 0x150, virtual false, abstract: false, final false
  inline void UpdateSolverTransforms();

  /// @brief Method Write, addr 0x134f95c, size 0x13c, virtual false, abstract: false, final false
  inline void Write();

  /// @brief Method WriteTransforms, addr 0x134fa98, size 0x454, virtual false, abstract: false, final false
  inline void WriteTransforms();

  constexpr int32_t const& __cordl_internal_get_LOD() const;

  constexpr int32_t& __cordl_internal_get_LOD();

  constexpr ::RootMotion::FinalIK::__IKSolverVR__VirtualBone*& __cordl_internal_get__rootBone_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*> const& __cordl_internal_get__rootBone_k__BackingField() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Arm*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Arm*>*> const& __cordl_internal_get_arms() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Arm*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Arm*>*>& __cordl_internal_get_arms();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bodyOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_bodyOffset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_debugPos1() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_debugPos1();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_debugPos2() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_debugPos2();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_debugPos3() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_debugPos3();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_debugPos4() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_debugPos4();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_defaultLocalPositions() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_defaultLocalPositions();

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> const& __cordl_internal_get_defaultLocalRotations() const;

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>& __cordl_internal_get_defaultLocalRotations();

  constexpr bool const& __cordl_internal_get_hasChest() const;

  constexpr bool& __cordl_internal_get_hasChest();

  constexpr bool const& __cordl_internal_get_hasLegs() const;

  constexpr bool& __cordl_internal_get_hasLegs();

  constexpr bool const& __cordl_internal_get_hasNeck() const;

  constexpr bool& __cordl_internal_get_hasNeck();

  constexpr bool const& __cordl_internal_get_hasShoulders() const;

  constexpr bool& __cordl_internal_get_hasShoulders();

  constexpr bool const& __cordl_internal_get_hasToes() const;

  constexpr bool& __cordl_internal_get_hasToes();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headDeltaPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_headDeltaPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_headPosition();

  constexpr int32_t const& __cordl_internal_get_lastLOD() const;

  constexpr int32_t& __cordl_internal_get_lastLOD();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastOffset();

  constexpr ::RootMotion::FinalIK::__IKSolverVR__Arm*& __cordl_internal_get_leftArm();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverVR__Arm*> const& __cordl_internal_get_leftArm() const;

  constexpr ::RootMotion::FinalIK::__IKSolverVR__Leg*& __cordl_internal_get_leftLeg();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverVR__Leg*> const& __cordl_internal_get_leftLeg() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*> const& __cordl_internal_get_legs() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*>& __cordl_internal_get_legs();

  constexpr ::RootMotion::FinalIK::__IKSolverVR__Locomotion*& __cordl_internal_get_locomotion();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverVR__Locomotion*> const& __cordl_internal_get_locomotion() const;

  constexpr bool const& __cordl_internal_get_plantFeet() const;

  constexpr bool& __cordl_internal_get_plantFeet();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_raycastOriginPelvis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_raycastOriginPelvis();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_readPositions() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_readPositions();

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> const& __cordl_internal_get_readRotations() const;

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>& __cordl_internal_get_readRotations();

  constexpr ::RootMotion::FinalIK::__IKSolverVR__Arm*& __cordl_internal_get_rightArm();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverVR__Arm*> const& __cordl_internal_get_rightArm() const;

  constexpr ::RootMotion::FinalIK::__IKSolverVR__Leg*& __cordl_internal_get_rightLeg();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverVR__Leg*> const& __cordl_internal_get_rightLeg() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rootV() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_rootV();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rootVelocity() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_rootVelocity();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_solvedPositions() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_solvedPositions();

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> const& __cordl_internal_get_solvedRotations() const;

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>& __cordl_internal_get_solvedRotations();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_solverTransforms() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get_solverTransforms();

  constexpr ::RootMotion::FinalIK::__IKSolverVR__Spine*& __cordl_internal_get_spine();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverVR__Spine*> const& __cordl_internal_get_spine() const;

  constexpr int32_t const& __cordl_internal_get_supportLegIndex() const;

  constexpr int32_t& __cordl_internal_get_supportLegIndex();

  constexpr void __cordl_internal_set_LOD(int32_t value);

  constexpr void __cordl_internal_set__rootBone_k__BackingField(::RootMotion::FinalIK::__IKSolverVR__VirtualBone* value);

  constexpr void __cordl_internal_set_arms(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Arm*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Arm*>*> value);

  constexpr void __cordl_internal_set_bodyOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_debugPos1(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_debugPos2(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_debugPos3(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_debugPos4(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_defaultLocalPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_defaultLocalRotations(::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> value);

  constexpr void __cordl_internal_set_hasChest(bool value);

  constexpr void __cordl_internal_set_hasLegs(bool value);

  constexpr void __cordl_internal_set_hasNeck(bool value);

  constexpr void __cordl_internal_set_hasShoulders(bool value);

  constexpr void __cordl_internal_set_hasToes(bool value);

  constexpr void __cordl_internal_set_headDeltaPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_headPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_lastLOD(int32_t value);

  constexpr void __cordl_internal_set_lastOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_leftArm(::RootMotion::FinalIK::__IKSolverVR__Arm* value);

  constexpr void __cordl_internal_set_leftLeg(::RootMotion::FinalIK::__IKSolverVR__Leg* value);

  constexpr void __cordl_internal_set_legs(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*> value);

  constexpr void __cordl_internal_set_locomotion(::RootMotion::FinalIK::__IKSolverVR__Locomotion* value);

  constexpr void __cordl_internal_set_plantFeet(bool value);

  constexpr void __cordl_internal_set_raycastOriginPelvis(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_readPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_readRotations(::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> value);

  constexpr void __cordl_internal_set_rightArm(::RootMotion::FinalIK::__IKSolverVR__Arm* value);

  constexpr void __cordl_internal_set_rightLeg(::RootMotion::FinalIK::__IKSolverVR__Leg* value);

  constexpr void __cordl_internal_set_rootV(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_rootVelocity(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_solvedPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_solvedRotations(::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> value);

  constexpr void __cordl_internal_set_solverTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set_spine(::RootMotion::FinalIK::__IKSolverVR__Spine* value);

  constexpr void __cordl_internal_set_supportLegIndex(int32_t value);

  /// @brief Method .ctor, addr 0x1353460, size 0x228, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_rootBone, addr 0x1353450, size 0x8, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* get_rootBone();

  /// @brief Method set_rootBone, addr 0x1353458, size 0x8, virtual false, abstract: false, final false
  inline void set_rootBone(::RootMotion::FinalIK::__IKSolverVR__VirtualBone* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKSolverVR();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IKSolverVR", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKSolverVR(IKSolverVR&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKSolverVR", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKSolverVR(IKSolverVR const&) = delete;

  /// @brief Field solverTransforms, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ___solverTransforms;

  /// @brief Field hasChest, offset: 0x60, size: 0x1, def value: None
  bool ___hasChest;

  /// @brief Field hasNeck, offset: 0x61, size: 0x1, def value: None
  bool ___hasNeck;

  /// @brief Field hasShoulders, offset: 0x62, size: 0x1, def value: None
  bool ___hasShoulders;

  /// @brief Field hasToes, offset: 0x63, size: 0x1, def value: None
  bool ___hasToes;

  /// @brief Field hasLegs, offset: 0x64, size: 0x1, def value: None
  bool ___hasLegs;

  /// @brief Field readPositions, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___readPositions;

  /// @brief Field readRotations, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> ___readRotations;

  /// @brief Field solvedPositions, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___solvedPositions;

  /// @brief Field solvedRotations, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> ___solvedRotations;

  /// @brief Field defaultLocalRotations, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> ___defaultLocalRotations;

  /// @brief Field defaultLocalPositions, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___defaultLocalPositions;

  /// @brief Field rootV, offset: 0x98, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___rootV;

  /// @brief Field rootVelocity, offset: 0xa4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___rootVelocity;

  /// @brief Field bodyOffset, offset: 0xb0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___bodyOffset;

  /// @brief Field supportLegIndex, offset: 0xbc, size: 0x4, def value: None
  int32_t ___supportLegIndex;

  /// @brief Field lastLOD, offset: 0xc0, size: 0x4, def value: None
  int32_t ___lastLOD;

  /// @brief Field LOD, offset: 0xc4, size: 0x4, def value: None
  int32_t ___LOD;

  /// @brief Field plantFeet, offset: 0xc8, size: 0x1, def value: None
  bool ___plantFeet;

  /// @brief Field <rootBone>k__BackingField, offset: 0xd0, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* ____rootBone_k__BackingField;

  /// @brief Field spine, offset: 0xd8, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolverVR__Spine* ___spine;

  /// @brief Field leftArm, offset: 0xe0, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolverVR__Arm* ___leftArm;

  /// @brief Field rightArm, offset: 0xe8, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolverVR__Arm* ___rightArm;

  /// @brief Field leftLeg, offset: 0xf0, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolverVR__Leg* ___leftLeg;

  /// @brief Field rightLeg, offset: 0xf8, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolverVR__Leg* ___rightLeg;

  /// @brief Field locomotion, offset: 0x100, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolverVR__Locomotion* ___locomotion;

  /// @brief Field legs, offset: 0x108, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*> ___legs;

  /// @brief Field arms, offset: 0x110, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Arm*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Arm*>*> ___arms;

  /// @brief Field headPosition, offset: 0x118, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___headPosition;

  /// @brief Field headDeltaPosition, offset: 0x124, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___headDeltaPosition;

  /// @brief Field raycastOriginPelvis, offset: 0x130, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___raycastOriginPelvis;

  /// @brief Field lastOffset, offset: 0x13c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastOffset;

  /// @brief Field debugPos1, offset: 0x148, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___debugPos1;

  /// @brief Field debugPos2, offset: 0x154, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___debugPos2;

  /// @brief Field debugPos3, offset: 0x160, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___debugPos3;

  /// @brief Field debugPos4, offset: 0x16c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___debugPos4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKSolverVR, 0x178>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___solverTransforms) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___hasChest) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___hasNeck) == 0x61, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___hasShoulders) == 0x62, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___hasToes) == 0x63, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___hasLegs) == 0x64, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___readPositions) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___readRotations) == 0x70, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___solvedPositions) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___solvedRotations) == 0x80, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___defaultLocalRotations) == 0x88, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___defaultLocalPositions) == 0x90, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___rootV) == 0x98, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___rootVelocity) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___bodyOffset) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___supportLegIndex) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___lastLOD) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___LOD) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___plantFeet) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ____rootBone_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___spine) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___leftArm) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___rightArm) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___leftLeg) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___rightLeg) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___locomotion) == 0x100, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___legs) == 0x108, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___arms) == 0x110, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___headPosition) == 0x118, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___headDeltaPosition) == 0x124, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___raycastOriginPelvis) == 0x130, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___lastOffset) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___debugPos1) == 0x148, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___debugPos2) == 0x154, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___debugPos3) == 0x160, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverVR, ___debugPos4) == 0x16c, "Offset mismatch!");

} // namespace RootMotion::FinalIK
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IKSolverVR__Arm__ShoulderRotationMode, "RootMotion.FinalIK", "IKSolverVR/Arm/ShoulderRotationMode");
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__IKSolverVR__PositionOffset, "RootMotion.FinalIK", "IKSolverVR/PositionOffset");
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__IKSolverVR__RotationOffset, "RootMotion.FinalIK", "IKSolverVR/RotationOffset");
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverVR);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverVR*, "RootMotion.FinalIK", "IKSolverVR");
NEED_NO_BOX(::RootMotion::FinalIK::__IKSolverVR__Arm);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__IKSolverVR__Arm*, "RootMotion.FinalIK", "IKSolverVR/Arm");
NEED_NO_BOX(::RootMotion::FinalIK::__IKSolverVR__BodyPart);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__IKSolverVR__BodyPart*, "RootMotion.FinalIK", "IKSolverVR/BodyPart");
NEED_NO_BOX(::RootMotion::FinalIK::__IKSolverVR__Footstep);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__IKSolverVR__Footstep*, "RootMotion.FinalIK", "IKSolverVR/Footstep");
NEED_NO_BOX(::RootMotion::FinalIK::__IKSolverVR__Leg);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__IKSolverVR__Leg*, "RootMotion.FinalIK", "IKSolverVR/Leg");
NEED_NO_BOX(::RootMotion::FinalIK::__IKSolverVR__Locomotion);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__IKSolverVR__Locomotion*, "RootMotion.FinalIK", "IKSolverVR/Locomotion");
NEED_NO_BOX(::RootMotion::FinalIK::__IKSolverVR__Spine);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__IKSolverVR__Spine*, "RootMotion.FinalIK", "IKSolverVR/Spine");
NEED_NO_BOX(::RootMotion::FinalIK::__IKSolverVR__VirtualBone);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, "RootMotion.FinalIK", "IKSolverVR/VirtualBone");
