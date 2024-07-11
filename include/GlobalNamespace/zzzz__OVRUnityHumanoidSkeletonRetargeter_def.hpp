#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRUnityHumanoidSkeletonRetargeter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "GlobalNamespace/zzzz__OVRUnityHumanoidSkeletonRetargeter_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__HumanBodyBones_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRUnityHumanoidSkeletonRetargeter)
namespace GlobalNamespace {
class OVRBone;
}
namespace GlobalNamespace {
class OVRSkeleton;
}
namespace GlobalNamespace {
struct __OVRSkeleton__BoneId;
}
namespace GlobalNamespace {
class __OVRUnityHumanoidSkeletonRetargeter__JointAdjustment;
}
namespace GlobalNamespace {
class __OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings;
}
namespace GlobalNamespace {
struct __OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection;
}
namespace GlobalNamespace {
struct __OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId;
}
namespace GlobalNamespace {
class __OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata;
}
namespace GlobalNamespace {
class __OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct HumanBodyBones;
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
struct __OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection;
}
namespace GlobalNamespace {
struct __OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId;
}
namespace GlobalNamespace {
class OVRUnityHumanoidSkeletonRetargeter;
}
namespace GlobalNamespace {
class __OVRUnityHumanoidSkeletonRetargeter__JointAdjustment;
}
namespace GlobalNamespace {
class __OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings;
}
namespace GlobalNamespace {
class __OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata;
}
namespace GlobalNamespace {
class __OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection);
MARK_VAL_T(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId);
MARK_REF_PTR_T(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter);
MARK_REF_PTR_T(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment);
MARK_REF_PTR_T(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings);
MARK_REF_PTR_T(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata);
MARK_REF_PTR_T(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData);
// Type: ::BodySection
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRUnityHumanoidSkeletonRetargeter::OVRHumanBodyBonesMappings::BodySection
struct CORDL_TYPE __OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection_Unwrapped
  enum struct ____OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection_Unwrapped : int32_t {
    __E_LeftLeg = static_cast<int32_t>(0x0),
    __E_LeftFoot = static_cast<int32_t>(0x1),
    __E_RightLeg = static_cast<int32_t>(0x2),
    __E_RightFoot = static_cast<int32_t>(0x3),
    __E_LeftArm = static_cast<int32_t>(0x4),
    __E_LeftHand = static_cast<int32_t>(0x5),
    __E_RightArm = static_cast<int32_t>(0x6),
    __E_RightHand = static_cast<int32_t>(0x7),
    __E_Hips = static_cast<int32_t>(0x8),
    __E_Back = static_cast<int32_t>(0x9),
    __E_Neck = static_cast<int32_t>(0xa),
    __E_Head = static_cast<int32_t>(0xb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection_Unwrapped() const noexcept {
    return static_cast<____OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Back value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection const Back;

  /// @brief Field Head value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection const Head;

  /// @brief Field Hips value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection const Hips;

  /// @brief Field LeftArm value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection const LeftArm;

  /// @brief Field LeftFoot value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection const LeftFoot;

  /// @brief Field LeftHand value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection const LeftHand;

  /// @brief Field LeftLeg value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection const LeftLeg;

  /// @brief Field Neck value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection const Neck;

  /// @brief Field RightArm value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection const RightArm;

  /// @brief Field RightFoot value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection const RightFoot;

  /// @brief Field RightHand value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection const RightHand;

  /// @brief Field RightLeg value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection const RightLeg;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BodyTrackingBoneId
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRUnityHumanoidSkeletonRetargeter::OVRHumanBodyBonesMappings::BodyTrackingBoneId
struct CORDL_TYPE __OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId_Unwrapped
  enum struct ____OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId_Unwrapped : int32_t {
    __E_Body_Start = static_cast<int32_t>(0x0),
    __E_Body_Root = static_cast<int32_t>(0x0),
    __E_Body_Hips = static_cast<int32_t>(0x1),
    __E_Body_SpineLower = static_cast<int32_t>(0x2),
    __E_Body_SpineMiddle = static_cast<int32_t>(0x3),
    __E_Body_SpineUpper = static_cast<int32_t>(0x4),
    __E_Body_Chest = static_cast<int32_t>(0x5),
    __E_Body_Neck = static_cast<int32_t>(0x6),
    __E_Body_Head = static_cast<int32_t>(0x7),
    __E_Body_LeftShoulder = static_cast<int32_t>(0x8),
    __E_Body_LeftScapula = static_cast<int32_t>(0x9),
    __E_Body_LeftArmUpper = static_cast<int32_t>(0xa),
    __E_Body_LeftArmLower = static_cast<int32_t>(0xb),
    __E_Body_LeftHandWristTwist = static_cast<int32_t>(0xc),
    __E_Body_RightShoulder = static_cast<int32_t>(0xd),
    __E_Body_RightScapula = static_cast<int32_t>(0xe),
    __E_Body_RightArmUpper = static_cast<int32_t>(0xf),
    __E_Body_RightArmLower = static_cast<int32_t>(0x10),
    __E_Body_RightHandWristTwist = static_cast<int32_t>(0x11),
    __E_Body_LeftHandPalm = static_cast<int32_t>(0x12),
    __E_Body_LeftHandWrist = static_cast<int32_t>(0x13),
    __E_Body_LeftHandThumbMetacarpal = static_cast<int32_t>(0x14),
    __E_Body_LeftHandThumbProximal = static_cast<int32_t>(0x15),
    __E_Body_LeftHandThumbDistal = static_cast<int32_t>(0x16),
    __E_Body_LeftHandThumbTip = static_cast<int32_t>(0x17),
    __E_Body_LeftHandIndexMetacarpal = static_cast<int32_t>(0x18),
    __E_Body_LeftHandIndexProximal = static_cast<int32_t>(0x19),
    __E_Body_LeftHandIndexIntermediate = static_cast<int32_t>(0x1a),
    __E_Body_LeftHandIndexDistal = static_cast<int32_t>(0x1b),
    __E_Body_LeftHandIndexTip = static_cast<int32_t>(0x1c),
    __E_Body_LeftHandMiddleMetacarpal = static_cast<int32_t>(0x1d),
    __E_Body_LeftHandMiddleProximal = static_cast<int32_t>(0x1e),
    __E_Body_LeftHandMiddleIntermediate = static_cast<int32_t>(0x1f),
    __E_Body_LeftHandMiddleDistal = static_cast<int32_t>(0x20),
    __E_Body_LeftHandMiddleTip = static_cast<int32_t>(0x21),
    __E_Body_LeftHandRingMetacarpal = static_cast<int32_t>(0x22),
    __E_Body_LeftHandRingProximal = static_cast<int32_t>(0x23),
    __E_Body_LeftHandRingIntermediate = static_cast<int32_t>(0x24),
    __E_Body_LeftHandRingDistal = static_cast<int32_t>(0x25),
    __E_Body_LeftHandRingTip = static_cast<int32_t>(0x26),
    __E_Body_LeftHandLittleMetacarpal = static_cast<int32_t>(0x27),
    __E_Body_LeftHandLittleProximal = static_cast<int32_t>(0x28),
    __E_Body_LeftHandLittleIntermediate = static_cast<int32_t>(0x29),
    __E_Body_LeftHandLittleDistal = static_cast<int32_t>(0x2a),
    __E_Body_LeftHandLittleTip = static_cast<int32_t>(0x2b),
    __E_Body_RightHandPalm = static_cast<int32_t>(0x2c),
    __E_Body_RightHandWrist = static_cast<int32_t>(0x2d),
    __E_Body_RightHandThumbMetacarpal = static_cast<int32_t>(0x2e),
    __E_Body_RightHandThumbProximal = static_cast<int32_t>(0x2f),
    __E_Body_RightHandThumbDistal = static_cast<int32_t>(0x30),
    __E_Body_RightHandThumbTip = static_cast<int32_t>(0x31),
    __E_Body_RightHandIndexMetacarpal = static_cast<int32_t>(0x32),
    __E_Body_RightHandIndexProximal = static_cast<int32_t>(0x33),
    __E_Body_RightHandIndexIntermediate = static_cast<int32_t>(0x34),
    __E_Body_RightHandIndexDistal = static_cast<int32_t>(0x35),
    __E_Body_RightHandIndexTip = static_cast<int32_t>(0x36),
    __E_Body_RightHandMiddleMetacarpal = static_cast<int32_t>(0x37),
    __E_Body_RightHandMiddleProximal = static_cast<int32_t>(0x38),
    __E_Body_RightHandMiddleIntermediate = static_cast<int32_t>(0x39),
    __E_Body_RightHandMiddleDistal = static_cast<int32_t>(0x3a),
    __E_Body_RightHandMiddleTip = static_cast<int32_t>(0x3b),
    __E_Body_RightHandRingMetacarpal = static_cast<int32_t>(0x3c),
    __E_Body_RightHandRingProximal = static_cast<int32_t>(0x3d),
    __E_Body_RightHandRingIntermediate = static_cast<int32_t>(0x3e),
    __E_Body_RightHandRingDistal = static_cast<int32_t>(0x3f),
    __E_Body_RightHandRingTip = static_cast<int32_t>(0x40),
    __E_Body_RightHandLittleMetacarpal = static_cast<int32_t>(0x41),
    __E_Body_RightHandLittleProximal = static_cast<int32_t>(0x42),
    __E_Body_RightHandLittleIntermediate = static_cast<int32_t>(0x43),
    __E_Body_RightHandLittleDistal = static_cast<int32_t>(0x44),
    __E_Body_RightHandLittleTip = static_cast<int32_t>(0x45),
    __E_Body_End = static_cast<int32_t>(0x46),
    __E_NoOverride = static_cast<int32_t>(0x47),
    __E_Remove = static_cast<int32_t>(0x48),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId_Unwrapped() const noexcept {
    return static_cast<____OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Body_Chest value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_Chest;

  /// @brief Field Body_End value: static_cast<int32_t>(0x46)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_End;

  /// @brief Field Body_Head value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_Head;

  /// @brief Field Body_Hips value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_Hips;

  /// @brief Field Body_LeftArmLower value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftArmLower;

  /// @brief Field Body_LeftArmUpper value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftArmUpper;

  /// @brief Field Body_LeftHandIndexDistal value: static_cast<int32_t>(0x1b)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandIndexDistal;

  /// @brief Field Body_LeftHandIndexIntermediate value: static_cast<int32_t>(0x1a)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandIndexIntermediate;

  /// @brief Field Body_LeftHandIndexMetacarpal value: static_cast<int32_t>(0x18)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandIndexMetacarpal;

  /// @brief Field Body_LeftHandIndexProximal value: static_cast<int32_t>(0x19)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandIndexProximal;

  /// @brief Field Body_LeftHandIndexTip value: static_cast<int32_t>(0x1c)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandIndexTip;

  /// @brief Field Body_LeftHandLittleDistal value: static_cast<int32_t>(0x2a)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandLittleDistal;

  /// @brief Field Body_LeftHandLittleIntermediate value: static_cast<int32_t>(0x29)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandLittleIntermediate;

  /// @brief Field Body_LeftHandLittleMetacarpal value: static_cast<int32_t>(0x27)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandLittleMetacarpal;

  /// @brief Field Body_LeftHandLittleProximal value: static_cast<int32_t>(0x28)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandLittleProximal;

  /// @brief Field Body_LeftHandLittleTip value: static_cast<int32_t>(0x2b)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandLittleTip;

  /// @brief Field Body_LeftHandMiddleDistal value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandMiddleDistal;

  /// @brief Field Body_LeftHandMiddleIntermediate value: static_cast<int32_t>(0x1f)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandMiddleIntermediate;

  /// @brief Field Body_LeftHandMiddleMetacarpal value: static_cast<int32_t>(0x1d)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandMiddleMetacarpal;

  /// @brief Field Body_LeftHandMiddleProximal value: static_cast<int32_t>(0x1e)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandMiddleProximal;

  /// @brief Field Body_LeftHandMiddleTip value: static_cast<int32_t>(0x21)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandMiddleTip;

  /// @brief Field Body_LeftHandPalm value: static_cast<int32_t>(0x12)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandPalm;

  /// @brief Field Body_LeftHandRingDistal value: static_cast<int32_t>(0x25)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandRingDistal;

  /// @brief Field Body_LeftHandRingIntermediate value: static_cast<int32_t>(0x24)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandRingIntermediate;

  /// @brief Field Body_LeftHandRingMetacarpal value: static_cast<int32_t>(0x22)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandRingMetacarpal;

  /// @brief Field Body_LeftHandRingProximal value: static_cast<int32_t>(0x23)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandRingProximal;

  /// @brief Field Body_LeftHandRingTip value: static_cast<int32_t>(0x26)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandRingTip;

  /// @brief Field Body_LeftHandThumbDistal value: static_cast<int32_t>(0x16)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandThumbDistal;

  /// @brief Field Body_LeftHandThumbMetacarpal value: static_cast<int32_t>(0x14)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandThumbMetacarpal;

  /// @brief Field Body_LeftHandThumbProximal value: static_cast<int32_t>(0x15)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandThumbProximal;

  /// @brief Field Body_LeftHandThumbTip value: static_cast<int32_t>(0x17)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandThumbTip;

  /// @brief Field Body_LeftHandWrist value: static_cast<int32_t>(0x13)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandWrist;

  /// @brief Field Body_LeftHandWristTwist value: static_cast<int32_t>(0xc)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftHandWristTwist;

  /// @brief Field Body_LeftScapula value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftScapula;

  /// @brief Field Body_LeftShoulder value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_LeftShoulder;

  /// @brief Field Body_Neck value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_Neck;

  /// @brief Field Body_RightArmLower value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightArmLower;

  /// @brief Field Body_RightArmUpper value: static_cast<int32_t>(0xf)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightArmUpper;

  /// @brief Field Body_RightHandIndexDistal value: static_cast<int32_t>(0x35)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandIndexDistal;

  /// @brief Field Body_RightHandIndexIntermediate value: static_cast<int32_t>(0x34)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandIndexIntermediate;

  /// @brief Field Body_RightHandIndexMetacarpal value: static_cast<int32_t>(0x32)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandIndexMetacarpal;

  /// @brief Field Body_RightHandIndexProximal value: static_cast<int32_t>(0x33)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandIndexProximal;

  /// @brief Field Body_RightHandIndexTip value: static_cast<int32_t>(0x36)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandIndexTip;

  /// @brief Field Body_RightHandLittleDistal value: static_cast<int32_t>(0x44)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandLittleDistal;

  /// @brief Field Body_RightHandLittleIntermediate value: static_cast<int32_t>(0x43)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandLittleIntermediate;

  /// @brief Field Body_RightHandLittleMetacarpal value: static_cast<int32_t>(0x41)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandLittleMetacarpal;

  /// @brief Field Body_RightHandLittleProximal value: static_cast<int32_t>(0x42)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandLittleProximal;

  /// @brief Field Body_RightHandLittleTip value: static_cast<int32_t>(0x45)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandLittleTip;

  /// @brief Field Body_RightHandMiddleDistal value: static_cast<int32_t>(0x3a)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandMiddleDistal;

  /// @brief Field Body_RightHandMiddleIntermediate value: static_cast<int32_t>(0x39)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandMiddleIntermediate;

  /// @brief Field Body_RightHandMiddleMetacarpal value: static_cast<int32_t>(0x37)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandMiddleMetacarpal;

  /// @brief Field Body_RightHandMiddleProximal value: static_cast<int32_t>(0x38)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandMiddleProximal;

  /// @brief Field Body_RightHandMiddleTip value: static_cast<int32_t>(0x3b)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandMiddleTip;

  /// @brief Field Body_RightHandPalm value: static_cast<int32_t>(0x2c)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandPalm;

  /// @brief Field Body_RightHandRingDistal value: static_cast<int32_t>(0x3f)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandRingDistal;

  /// @brief Field Body_RightHandRingIntermediate value: static_cast<int32_t>(0x3e)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandRingIntermediate;

  /// @brief Field Body_RightHandRingMetacarpal value: static_cast<int32_t>(0x3c)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandRingMetacarpal;

  /// @brief Field Body_RightHandRingProximal value: static_cast<int32_t>(0x3d)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandRingProximal;

  /// @brief Field Body_RightHandRingTip value: static_cast<int32_t>(0x40)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandRingTip;

  /// @brief Field Body_RightHandThumbDistal value: static_cast<int32_t>(0x30)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandThumbDistal;

  /// @brief Field Body_RightHandThumbMetacarpal value: static_cast<int32_t>(0x2e)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandThumbMetacarpal;

  /// @brief Field Body_RightHandThumbProximal value: static_cast<int32_t>(0x2f)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandThumbProximal;

  /// @brief Field Body_RightHandThumbTip value: static_cast<int32_t>(0x31)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandThumbTip;

  /// @brief Field Body_RightHandWrist value: static_cast<int32_t>(0x2d)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandWrist;

  /// @brief Field Body_RightHandWristTwist value: static_cast<int32_t>(0x11)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightHandWristTwist;

  /// @brief Field Body_RightScapula value: static_cast<int32_t>(0xe)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightScapula;

  /// @brief Field Body_RightShoulder value: static_cast<int32_t>(0xd)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_RightShoulder;

  /// @brief Field Body_Root value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_Root;

  /// @brief Field Body_SpineLower value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_SpineLower;

  /// @brief Field Body_SpineMiddle value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_SpineMiddle;

  /// @brief Field Body_SpineUpper value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_SpineUpper;

  /// @brief Field Body_Start value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Body_Start;

  /// @brief Field NoOverride value: static_cast<int32_t>(0x47)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const NoOverride;

  /// @brief Field Remove value: static_cast<int32_t>(0x48)
  static ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const Remove;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRHumanBodyBonesMappings
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRUnityHumanoidSkeletonRetargeter::OVRHumanBodyBonesMappings*
class CORDL_TYPE __OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings : public ::System::Object {
public:
  // Declarations
  using BodySection = ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection;

  using BodyTrackingBoneId = ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId;

  /// @brief Field BoneIdToHumanBodyBone, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_BoneIdToHumanBodyBone,
               put = setStaticF_BoneIdToHumanBodyBone))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSkeleton__BoneId, ::UnityEngine::HumanBodyBones>* BoneIdToHumanBodyBone;

  /// @brief Field BoneIdToJointPair, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BoneIdToJointPair, put = setStaticF_BoneIdToJointPair))::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::__OVRSkeleton__BoneId, ::System::Tuple_2<::GlobalNamespace::__OVRSkeleton__BoneId, ::GlobalNamespace::__OVRSkeleton__BoneId>*>* BoneIdToJointPair;

  /// @brief Field BoneToBodySection, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BoneToBodySection, put = setStaticF_BoneToBodySection))::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::HumanBodyBones, ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection>* BoneToBodySection;

  /// @brief Field BoneToJointPair, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BoneToJointPair, put = setStaticF_BoneToJointPair))::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::HumanBodyBones, ::System::Tuple_2<::UnityEngine::HumanBodyBones, ::UnityEngine::HumanBodyBones>*>* BoneToJointPair;

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSkeleton__BoneId, ::UnityEngine::HumanBodyBones>* getStaticF_BoneIdToHumanBodyBone();

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSkeleton__BoneId,
                                                             ::System::Tuple_2<::GlobalNamespace::__OVRSkeleton__BoneId, ::GlobalNamespace::__OVRSkeleton__BoneId>*>*
  getStaticF_BoneIdToJointPair();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection>*
  getStaticF_BoneToBodySection();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::System::Tuple_2<::UnityEngine::HumanBodyBones, ::UnityEngine::HumanBodyBones>*>*
  getStaticF_BoneToJointPair();

  static inline void setStaticF_BoneIdToHumanBodyBone(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSkeleton__BoneId, ::UnityEngine::HumanBodyBones>* value);

  static inline void
  setStaticF_BoneIdToJointPair(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSkeleton__BoneId,
                                                                            ::System::Tuple_2<::GlobalNamespace::__OVRSkeleton__BoneId, ::GlobalNamespace::__OVRSkeleton__BoneId>*>* value);

  static inline void setStaticF_BoneToBodySection(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection>* value);

  static inline void
  setStaticF_BoneToJointPair(::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::System::Tuple_2<::UnityEngine::HumanBodyBones, ::UnityEngine::HumanBodyBones>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings(__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings(__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BoneData
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 113, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRUnityHumanoidSkeletonRetargeter::OVRSkeletonMetadata::BoneData*
class CORDL_TYPE __OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData : public ::System::Object {
public:
  // Declarations
  /// @brief Field CorrectionQuaternion, offset 0x50, size 0x14
  __declspec(property(get = __cordl_internal_get_CorrectionQuaternion, put = __cordl_internal_set_CorrectionQuaternion))::System::Nullable_1<::UnityEngine::Quaternion> CorrectionQuaternion;

  /// @brief Field DegenerateJoint, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_DegenerateJoint, put = __cordl_internal_set_DegenerateJoint)) bool DegenerateJoint;

  /// @brief Field FromPosition, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_FromPosition, put = __cordl_internal_set_FromPosition))::UnityEngine::Vector3 FromPosition;

  /// @brief Field JointPairEnd, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_JointPairEnd, put = __cordl_internal_set_JointPairEnd))::UnityW<::UnityEngine::Transform> JointPairEnd;

  /// @brief Field JointPairOrientation, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_JointPairOrientation, put = __cordl_internal_set_JointPairOrientation))::UnityEngine::Quaternion JointPairOrientation;

  /// @brief Field JointPairStart, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_JointPairStart, put = __cordl_internal_set_JointPairStart))::UnityW<::UnityEngine::Transform> JointPairStart;

  /// @brief Field OriginalJoint, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_OriginalJoint, put = __cordl_internal_set_OriginalJoint))::UnityW<::UnityEngine::Transform> OriginalJoint;

  /// @brief Field ParentTransform, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_ParentTransform, put = __cordl_internal_set_ParentTransform))::UnityW<::UnityEngine::Transform> ParentTransform;

  /// @brief Field ToPosition, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get_ToPosition, put = __cordl_internal_set_ToPosition))::UnityEngine::Vector3 ToPosition;

  static inline ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData* New_ctor();

  static inline ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData*
  New_ctor(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData* otherBoneData);

  constexpr ::System::Nullable_1<::UnityEngine::Quaternion> const& __cordl_internal_get_CorrectionQuaternion() const;

  constexpr ::System::Nullable_1<::UnityEngine::Quaternion>& __cordl_internal_get_CorrectionQuaternion();

  constexpr bool const& __cordl_internal_get_DegenerateJoint() const;

  constexpr bool& __cordl_internal_get_DegenerateJoint();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_FromPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_FromPosition();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_JointPairEnd() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_JointPairEnd();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_JointPairOrientation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_JointPairOrientation();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_JointPairStart() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_JointPairStart();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_OriginalJoint() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_OriginalJoint();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_ParentTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_ParentTransform();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_ToPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_ToPosition();

  constexpr void __cordl_internal_set_CorrectionQuaternion(::System::Nullable_1<::UnityEngine::Quaternion> value);

  constexpr void __cordl_internal_set_DegenerateJoint(bool value);

  constexpr void __cordl_internal_set_FromPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_JointPairEnd(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_JointPairOrientation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_JointPairStart(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_OriginalJoint(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_ParentTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_ToPosition(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x2b39938, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2b38d38, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData* otherBoneData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData(__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData(__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData const&) = delete;

  /// @brief Field OriginalJoint, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___OriginalJoint;

  /// @brief Field FromPosition, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___FromPosition;

  /// @brief Field ToPosition, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___ToPosition;

  /// @brief Field JointPairStart, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___JointPairStart;

  /// @brief Field JointPairEnd, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___JointPairEnd;

  /// @brief Field JointPairOrientation, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___JointPairOrientation;

  /// @brief Field CorrectionQuaternion, offset: 0x50, size: 0x14, def value: None
  ::System::Nullable_1<::UnityEngine::Quaternion> ___CorrectionQuaternion;

  /// @brief Field ParentTransform, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___ParentTransform;

  /// @brief Field DegenerateJoint, offset: 0x70, size: 0x1, def value: None
  bool ___DegenerateJoint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData, ___OriginalJoint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData, ___FromPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData, ___ToPosition) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData, ___JointPairStart) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData, ___JointPairEnd) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData, ___JointPairOrientation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData, ___CorrectionQuaternion) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData, ___ParentTransform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData, ___DegenerateJoint) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRSkeletonMetadata
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRUnityHumanoidSkeletonRetargeter::OVRSkeletonMetadata*
class CORDL_TYPE __OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata : public ::System::Object {
public:
  // Declarations
  using BoneData = ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData;

  __declspec(property(get = get_BodyToBoneData))::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,
                                                                                             ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData*>* BodyToBoneData;

  /// @brief Field <BodyToBoneData>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__BodyToBoneData_k__BackingField, put = __cordl_internal_set__BodyToBoneData_k__BackingField))::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::HumanBodyBones, ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData*>* _BodyToBoneData_k__BackingField;

  /// @brief Field _boneEnumValues, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__boneEnumValues,
                      put = __cordl_internal_set__boneEnumValues))::ArrayW<::UnityEngine::HumanBodyBones, ::Array<::UnityEngine::HumanBodyBones>*> _boneEnumValues;

  /// @brief Method AssembleSkeleton, addr 0x2b3933c, size 0x5fc, virtual false, abstract: false, final false
  inline void AssembleSkeleton(::GlobalNamespace::OVRSkeleton* skeleton, bool useBindPose,
                               ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSkeleton__BoneId, ::UnityEngine::HumanBodyBones>* customBoneIdToHumanBodyBone);

  /// @brief Method BuildBoneData, addr 0x2b38dbc, size 0x580, virtual false, abstract: false, final false
  inline void BuildBoneData(::UnityEngine::Animator* animator);

  /// @brief Method BuildBoneDataSkeleton, addr 0x2b365e8, size 0x8, virtual false, abstract: false, final false
  inline void BuildBoneDataSkeleton(::GlobalNamespace::OVRSkeleton* skeleton, bool useBindPose,
                                    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSkeleton__BoneId, ::UnityEngine::HumanBodyBones>* customBoneIdToHumanBodyBone);

  /// @brief Method BuildCoordinateAxesForAllBones, addr 0x2b34d0c, size 0x4ec, virtual false, abstract: false, final false
  inline void BuildCoordinateAxesForAllBones();

  /// @brief Method CreateQuaternionForBoneData, addr 0x2b39dbc, size 0x17c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion CreateQuaternionForBoneData(::UnityEngine::Vector3 fromPosition, ::UnityEngine::Vector3 toPosition);

  /// @brief Method CreateQuaternionForBoneDataWithRightVec, addr 0x2b39bfc, size 0x1c0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion CreateQuaternionForBoneDataWithRightVec(::UnityEngine::Vector3 fromPosition, ::UnityEngine::Vector3 toPosition, ::UnityEngine::Vector3 rightVector);

  /// @brief Method FindBoneWithBoneId, addr 0x2b39940, size 0x1ac, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRBone* FindBoneWithBoneId(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* bones, ::GlobalNamespace::__OVRSkeleton__BoneId boneId);

  /// @brief Method FindFirstChild, addr 0x2b39aec, size 0x110, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> FindFirstChild(::UnityEngine::Transform* startTransform, ::UnityEngine::Transform* currTransform);

  static inline ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata* New_ctor(::UnityEngine::Animator* animator);

  static inline ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata*
  New_ctor(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata* otherSkeletonMetaData);

  static inline ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata*
  New_ctor(::GlobalNamespace::OVRSkeleton* skeleton, bool useBindPose,
           ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSkeleton__BoneId, ::UnityEngine::HumanBodyBones>* customBoneIdToHumanBodyBone);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData*>*&
  __cordl_internal_get__BodyToBoneData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData*>*> const&
  __cordl_internal_get__BodyToBoneData_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::HumanBodyBones, ::Array<::UnityEngine::HumanBodyBones>*> const& __cordl_internal_get__boneEnumValues() const;

  constexpr ::ArrayW<::UnityEngine::HumanBodyBones, ::Array<::UnityEngine::HumanBodyBones>*>& __cordl_internal_get__boneEnumValues();

  constexpr void __cordl_internal_set__BodyToBoneData_k__BackingField(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData*>* value);

  constexpr void __cordl_internal_set__boneEnumValues(::ArrayW<::UnityEngine::HumanBodyBones, ::Array<::UnityEngine::HumanBodyBones>*> value);

  /// @brief Method .ctor, addr 0x2b34b9c, size 0x170, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Animator* animator);

  /// @brief Method .ctor, addr 0x2b389d4, size 0x364, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata* otherSkeletonMetaData);

  /// @brief Method .ctor, addr 0x2b36460, size 0x188, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRSkeleton* skeleton, bool useBindPose,
                    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSkeleton__BoneId, ::UnityEngine::HumanBodyBones>* customBoneIdToHumanBodyBone);

  /// @brief Method get_BodyToBoneData, addr 0x2b389cc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData*>* get_BodyToBoneData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata(__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata(__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata const&) = delete;

  /// @brief Field <BodyToBoneData>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData*>*
      ____BodyToBoneData_k__BackingField;

  /// @brief Field _boneEnumValues, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::HumanBodyBones, ::Array<::UnityEngine::HumanBodyBones>*> ____boneEnumValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata, ____BodyToBoneData_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata, ____boneEnumValues) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::JointAdjustment
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRUnityHumanoidSkeletonRetargeter::JointAdjustment*
class CORDL_TYPE __OVRUnityHumanoidSkeletonRetargeter__JointAdjustment : public ::System::Object {
public:
  // Declarations
  /// @brief Field BoneIdOverrideValue, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_BoneIdOverrideValue,
                      put = __cordl_internal_set_BoneIdOverrideValue))::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId BoneIdOverrideValue;

  /// @brief Field DisablePositionTransform, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_DisablePositionTransform, put = __cordl_internal_set_DisablePositionTransform)) bool DisablePositionTransform;

  /// @brief Field DisableRotationTransform, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_DisableRotationTransform, put = __cordl_internal_set_DisableRotationTransform)) bool DisableRotationTransform;

  /// @brief Field Joint, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_Joint, put = __cordl_internal_set_Joint))::UnityEngine::HumanBodyBones Joint;

  /// @brief Field RotationChange, offset 0x14, size 0x10
  __declspec(property(get = __cordl_internal_get_RotationChange, put = __cordl_internal_set_RotationChange))::UnityEngine::Quaternion RotationChange;

  static inline ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment* New_ctor();

  constexpr ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId const& __cordl_internal_get_BoneIdOverrideValue() const;

  constexpr ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId& __cordl_internal_get_BoneIdOverrideValue();

  constexpr bool const& __cordl_internal_get_DisablePositionTransform() const;

  constexpr bool& __cordl_internal_get_DisablePositionTransform();

  constexpr bool const& __cordl_internal_get_DisableRotationTransform() const;

  constexpr bool& __cordl_internal_get_DisableRotationTransform();

  constexpr ::UnityEngine::HumanBodyBones const& __cordl_internal_get_Joint() const;

  constexpr ::UnityEngine::HumanBodyBones& __cordl_internal_get_Joint();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_RotationChange() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_RotationChange();

  constexpr void __cordl_internal_set_BoneIdOverrideValue(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId value);

  constexpr void __cordl_internal_set_DisablePositionTransform(bool value);

  constexpr void __cordl_internal_set_DisableRotationTransform(bool value);

  constexpr void __cordl_internal_set_Joint(::UnityEngine::HumanBodyBones value);

  constexpr void __cordl_internal_set_RotationChange(::UnityEngine::Quaternion value);

  /// @brief Method .ctor, addr 0x2b34840, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRUnityHumanoidSkeletonRetargeter__JointAdjustment();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRUnityHumanoidSkeletonRetargeter__JointAdjustment(__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRUnityHumanoidSkeletonRetargeter__JointAdjustment(__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment const&) = delete;

  /// @brief Field Joint, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::HumanBodyBones ___Joint;

  /// @brief Field RotationChange, offset: 0x14, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___RotationChange;

  /// @brief Field DisableRotationTransform, offset: 0x24, size: 0x1, def value: None
  bool ___DisableRotationTransform;

  /// @brief Field DisablePositionTransform, offset: 0x25, size: 0x1, def value: None
  bool ___DisablePositionTransform;

  /// @brief Field BoneIdOverrideValue, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId ___BoneIdOverrideValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment, ___Joint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment, ___RotationChange) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment, ___DisableRotationTransform) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment, ___DisablePositionTransform) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment, ___BoneIdOverrideValue) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRUnityHumanoidSkeletonRetargeter
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 264, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRUnityHumanoidSkeletonRetargeter*
class CORDL_TYPE OVRUnityHumanoidSkeletonRetargeter : public ::GlobalNamespace::OVRSkeleton {
public:
  // Declarations
  using JointAdjustment = ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment;

  using OVRHumanBodyBonesMappings = ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings;

  using OVRSkeletonMetadata = ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata;

  __declspec(property(get = get_Adjustments))::ArrayW<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment*,
                                                      ::Array<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment*>*> Adjustments;

  __declspec(property(get = get_AnimatorTargetSkeleton))::UnityW<::UnityEngine::Animator> AnimatorTargetSkeleton;

  __declspec(property(get = get_BodySectionToPosition))::ArrayW<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection,
                                                                ::Array<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection>*> BodySectionToPosition;

  __declspec(property(get = get_BodySectionsToAlign))::ArrayW<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection,
                                                              ::Array<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection>*> BodySectionsToAlign;

  __declspec(property(
      get = get_CustomBoneIdToHumanBodyBone))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSkeleton__BoneId, ::UnityEngine::HumanBodyBones>* CustomBoneIdToHumanBodyBone;

  __declspec(property(get = get_SourceSkeletonData))::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata* SourceSkeletonData;

  __declspec(property(get = get_SourceSkeletonTPoseData))::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata* SourceSkeletonTPoseData;

  __declspec(property(get = get_TargetSkeletonData))::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata* TargetSkeletonData;

  __declspec(property(get = get_TargetTPoseRotations))::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::UnityEngine::Quaternion>* TargetTPoseRotations;

  /// @brief Field _adjustments, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__adjustments,
                      put = __cordl_internal_set__adjustments))::ArrayW<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment*,
                                                                        ::Array<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment*>*> _adjustments;

  /// @brief Field _animatorTargetSkeleton, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__animatorTargetSkeleton, put = __cordl_internal_set__animatorTargetSkeleton))::UnityW<::UnityEngine::Animator> _animatorTargetSkeleton;

  /// @brief Field _bodySectionToPosition, offset 0x100, size 0x8
  __declspec(property(
      get = __cordl_internal_get__bodySectionToPosition,
      put = __cordl_internal_set__bodySectionToPosition))::ArrayW<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection,
                                                                  ::Array<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection>*> _bodySectionToPosition;

  /// @brief Field _bodySectionsToAlign, offset 0xf8, size 0x8
  __declspec(property(
      get = __cordl_internal_get__bodySectionsToAlign,
      put = __cordl_internal_set__bodySectionsToAlign))::ArrayW<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection,
                                                                ::Array<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection>*> _bodySectionsToAlign;

  /// @brief Field _customBoneIdToHumanBodyBone, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__customBoneIdToHumanBodyBone,
                      put = __cordl_internal_set__customBoneIdToHumanBodyBone))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSkeleton__BoneId,
                                                                                                                            ::UnityEngine::HumanBodyBones>* _customBoneIdToHumanBodyBone;

  /// @brief Field _lastSkelChangeCount, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get__lastSkelChangeCount, put = __cordl_internal_set__lastSkelChangeCount)) int32_t _lastSkelChangeCount;

  /// @brief Field _sourceSkeletonData, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__sourceSkeletonData,
                      put = __cordl_internal_set__sourceSkeletonData))::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata* _sourceSkeletonData;

  /// @brief Field _sourceSkeletonTPoseData, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__sourceSkeletonTPoseData,
                      put = __cordl_internal_set__sourceSkeletonTPoseData))::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata* _sourceSkeletonTPoseData;

  /// @brief Field _targetSkeletonData, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__targetSkeletonData,
                      put = __cordl_internal_set__targetSkeletonData))::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata* _targetSkeletonData;

  /// @brief Field _targetTPoseRotations, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__targetTPoseRotations,
                      put = __cordl_internal_set__targetTPoseRotations))::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::UnityEngine::Quaternion>* _targetTPoseRotations;

  /// @brief Method AdjustCustomBoneIdToHumanBodyBoneMapping, addr 0x2b353d0, size 0xc4, virtual false, abstract: false, final false
  inline void AdjustCustomBoneIdToHumanBodyBoneMapping();

  /// @brief Method AlignTargetWithSource, addr 0x2b356a4, size 0x6d8, virtual false, abstract: false, final false
  inline void AlignTargetWithSource();

  /// @brief Method ComputeOffsetsUsingSkeletonComponent, addr 0x2b35d7c, size 0x6e4, virtual false, abstract: false, final false
  inline void ComputeOffsetsUsingSkeletonComponent();

  /// @brief Method CopyBoneIdToHumanBodyBoneMapping, addr 0x2b351f8, size 0x1d8, virtual false, abstract: false, final false
  inline void CopyBoneIdToHumanBodyBoneMapping();

  /// @brief Method CreateCustomBoneIdToHumanBodyBoneMapping, addr 0x2b34a64, size 0x18, virtual false, abstract: false, final false
  inline void CreateCustomBoneIdToHumanBodyBoneMapping();

  /// @brief Method FindAdjustment, addr 0x2b3663c, size 0x50, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment* FindAdjustment(::UnityEngine::HumanBodyBones boneId);

  /// @brief Method IsBodySectionInArray, addr 0x2b365f0, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsBodySectionInArray(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection bodySectionToCheck,
                                          ::ArrayW<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection,
                                                   ::Array<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection>*>
                                              sectionArrayToCheck);

  static inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter* New_ctor();

  /// @brief Method RecomputeSkeletalOffsetsIfNecessary, addr 0x2b3568c, size 0x18, virtual false, abstract: false, final false
  inline void RecomputeSkeletalOffsetsIfNecessary();

  /// @brief Method RemoveMappingCorrespondingToHumanBodyBone, addr 0x2b35494, size 0x1c4, virtual false, abstract: false, final false
  inline void RemoveMappingCorrespondingToHumanBodyBone(::UnityEngine::HumanBodyBones boneId);

  /// @brief Method Start, addr 0x2b348b8, size 0xcc, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method StoreTTargetPoseRotations, addr 0x2b34a7c, size 0x120, virtual false, abstract: false, final false
  inline void StoreTTargetPoseRotations();

  /// @brief Method Update, addr 0x2b35658, size 0x34, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method ValidateGameObjectForUnityHumanoidRetargeting, addr 0x2b34984, size 0xe0, virtual false, abstract: false, final false
  static inline void ValidateGameObjectForUnityHumanoidRetargeting(::UnityEngine::GameObject* go);

  constexpr ::ArrayW<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment*, ::Array<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment*>*> const&
  __cordl_internal_get__adjustments() const;

  constexpr ::ArrayW<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment*, ::Array<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment*>*>&
  __cordl_internal_get__adjustments();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__animatorTargetSkeleton() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__animatorTargetSkeleton();

  constexpr ::ArrayW<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection,
                     ::Array<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection>*> const&
  __cordl_internal_get__bodySectionToPosition() const;

  constexpr ::ArrayW<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection,
                     ::Array<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection>*>&
  __cordl_internal_get__bodySectionToPosition();

  constexpr ::ArrayW<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection,
                     ::Array<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection>*> const&
  __cordl_internal_get__bodySectionsToAlign() const;

  constexpr ::ArrayW<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection,
                     ::Array<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection>*>&
  __cordl_internal_get__bodySectionsToAlign();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSkeleton__BoneId, ::UnityEngine::HumanBodyBones>*& __cordl_internal_get__customBoneIdToHumanBodyBone();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSkeleton__BoneId, ::UnityEngine::HumanBodyBones>*> const&
  __cordl_internal_get__customBoneIdToHumanBodyBone() const;

  constexpr int32_t const& __cordl_internal_get__lastSkelChangeCount() const;

  constexpr int32_t& __cordl_internal_get__lastSkelChangeCount();

  constexpr ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata*& __cordl_internal_get__sourceSkeletonData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata*> const& __cordl_internal_get__sourceSkeletonData() const;

  constexpr ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata*& __cordl_internal_get__sourceSkeletonTPoseData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata*> const& __cordl_internal_get__sourceSkeletonTPoseData() const;

  constexpr ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata*& __cordl_internal_get__targetSkeletonData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata*> const& __cordl_internal_get__targetSkeletonData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::UnityEngine::Quaternion>*& __cordl_internal_get__targetTPoseRotations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::UnityEngine::Quaternion>*> const&
  __cordl_internal_get__targetTPoseRotations() const;

  constexpr void __cordl_internal_set__adjustments(
      ::ArrayW<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment*, ::Array<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment*>*> value);

  constexpr void __cordl_internal_set__animatorTargetSkeleton(::UnityW<::UnityEngine::Animator> value);

  constexpr void __cordl_internal_set__bodySectionToPosition(::ArrayW<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection,
                                                                      ::Array<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection>*>
                                                                 value);

  constexpr void __cordl_internal_set__bodySectionsToAlign(::ArrayW<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection,
                                                                    ::Array<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection>*>
                                                               value);

  constexpr void __cordl_internal_set__customBoneIdToHumanBodyBone(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSkeleton__BoneId, ::UnityEngine::HumanBodyBones>* value);

  constexpr void __cordl_internal_set__lastSkelChangeCount(int32_t value);

  constexpr void __cordl_internal_set__sourceSkeletonData(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata* value);

  constexpr void __cordl_internal_set__sourceSkeletonTPoseData(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata* value);

  constexpr void __cordl_internal_set__targetSkeletonData(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata* value);

  constexpr void __cordl_internal_set__targetTPoseRotations(::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::UnityEngine::Quaternion>* value);

  /// @brief Method .ctor, addr 0x2b3463c, size 0x204, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Adjustments, addr 0x2b348a0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment*, ::Array<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment*>*> get_Adjustments();

  /// @brief Method get_AnimatorTargetSkeleton, addr 0x2b34624, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Animator> get_AnimatorTargetSkeleton();

  /// @brief Method get_BodySectionToPosition, addr 0x2b348b0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection,
                  ::Array<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection>*>
  get_BodySectionToPosition();

  /// @brief Method get_BodySectionsToAlign, addr 0x2b348a8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection,
                  ::Array<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection>*>
  get_BodySectionsToAlign();

  /// @brief Method get_CustomBoneIdToHumanBodyBone, addr 0x2b3462c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSkeleton__BoneId, ::UnityEngine::HumanBodyBones>* get_CustomBoneIdToHumanBodyBone();

  /// @brief Method get_SourceSkeletonData, addr 0x2b3460c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata* get_SourceSkeletonData();

  /// @brief Method get_SourceSkeletonTPoseData, addr 0x2b34614, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata* get_SourceSkeletonTPoseData();

  /// @brief Method get_TargetSkeletonData, addr 0x2b3461c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata* get_TargetSkeletonData();

  /// @brief Method get_TargetTPoseRotations, addr 0x2b34634, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::UnityEngine::Quaternion>* get_TargetTPoseRotations();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRUnityHumanoidSkeletonRetargeter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRUnityHumanoidSkeletonRetargeter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRUnityHumanoidSkeletonRetargeter(OVRUnityHumanoidSkeletonRetargeter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRUnityHumanoidSkeletonRetargeter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRUnityHumanoidSkeletonRetargeter(OVRUnityHumanoidSkeletonRetargeter const&) = delete;

  /// @brief Field _sourceSkeletonData, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata* ____sourceSkeletonData;

  /// @brief Field _sourceSkeletonTPoseData, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata* ____sourceSkeletonTPoseData;

  /// @brief Field _targetSkeletonData, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata* ____targetSkeletonData;

  /// @brief Field _animatorTargetSkeleton, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ____animatorTargetSkeleton;

  /// @brief Field _customBoneIdToHumanBodyBone, offset: 0xd8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSkeleton__BoneId, ::UnityEngine::HumanBodyBones>* ____customBoneIdToHumanBodyBone;

  /// @brief Field _targetTPoseRotations, offset: 0xe0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::UnityEngine::Quaternion>* ____targetTPoseRotations;

  /// @brief Field _lastSkelChangeCount, offset: 0xe8, size: 0x4, def value: None
  int32_t ____lastSkelChangeCount;

  /// @brief Field _adjustments, offset: 0xf0, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment*, ::Array<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment*>*> ____adjustments;

  /// @brief Field _bodySectionsToAlign, offset: 0xf8, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection,
           ::Array<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection>*>
      ____bodySectionsToAlign;

  /// @brief Field _bodySectionToPosition, offset: 0x100, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection,
           ::Array<::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection>*>
      ____bodySectionToPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, 0x108>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____sourceSkeletonData) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____sourceSkeletonTPoseData) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____targetSkeletonData) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____animatorTargetSkeleton) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____customBoneIdToHumanBodyBone) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____targetTPoseRotations) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____lastSkelChangeCount) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____adjustments) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____bodySectionsToAlign) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____bodySectionToPosition) == 0x100, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodySection, "", "OVRUnityHumanoidSkeletonRetargeter/OVRHumanBodyBonesMappings/BodySection");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings__BodyTrackingBoneId, "",
                       "OVRUnityHumanoidSkeletonRetargeter/OVRHumanBodyBonesMappings/BodyTrackingBoneId");
NEED_NO_BOX(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter*, "", "OVRUnityHumanoidSkeletonRetargeter");
NEED_NO_BOX(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__JointAdjustment*, "", "OVRUnityHumanoidSkeletonRetargeter/JointAdjustment");
NEED_NO_BOX(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRHumanBodyBonesMappings*, "", "OVRUnityHumanoidSkeletonRetargeter/OVRHumanBodyBonesMappings");
NEED_NO_BOX(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata*, "", "OVRUnityHumanoidSkeletonRetargeter/OVRSkeletonMetadata");
NEED_NO_BOX(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRUnityHumanoidSkeletonRetargeter__OVRSkeletonMetadata__BoneData*, "", "OVRUnityHumanoidSkeletonRetargeter/OVRSkeletonMetadata/BoneData");
