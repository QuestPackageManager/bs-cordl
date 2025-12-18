#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRUnityHumanoidSkeletonRetargeter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__HumanBodyBones_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRUnityHumanoidSkeletonRetargeter)
namespace GlobalNamespace {
class OVRBone;
}
namespace GlobalNamespace {
class OVRHumanBodyBonesMappingsInterface;
}
namespace GlobalNamespace {
struct OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection;
}
namespace GlobalNamespace {
struct OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId;
}
namespace GlobalNamespace {
struct OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId;
}
namespace GlobalNamespace {
class OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData;
}
namespace GlobalNamespace {
struct OVRSkeleton_BoneId;
}
namespace GlobalNamespace {
class OVRSkeleton;
}
namespace GlobalNamespace {
class OVRUnityHumanoidSkeletonRetargeter_JointAdjustment;
}
namespace GlobalNamespace {
class OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings;
}
namespace GlobalNamespace {
class OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata;
}
namespace GlobalNamespace {
struct OVRUnityHumanoidSkeletonRetargeter_UpdateType;
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
struct OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection;
}
namespace GlobalNamespace {
struct OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId;
}
namespace GlobalNamespace {
struct OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId;
}
namespace GlobalNamespace {
struct OVRUnityHumanoidSkeletonRetargeter_UpdateType;
}
namespace GlobalNamespace {
class OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData;
}
namespace GlobalNamespace {
class OVRUnityHumanoidSkeletonRetargeter;
}
namespace GlobalNamespace {
class OVRUnityHumanoidSkeletonRetargeter_JointAdjustment;
}
namespace GlobalNamespace {
class OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings;
}
namespace GlobalNamespace {
class OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection);
MARK_VAL_T(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId);
MARK_VAL_T(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId);
MARK_VAL_T(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_UpdateType);
MARK_REF_PTR_T(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData);
MARK_REF_PTR_T(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter);
MARK_REF_PTR_T(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment);
MARK_REF_PTR_T(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings);
MARK_REF_PTR_T(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRUnityHumanoidSkeletonRetargeter/OVRHumanBodyBonesMappings/BodySection
struct CORDL_TYPE OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection_Unwrapped
  enum struct __OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection_Unwrapped : int32_t {
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
  constexpr operator __OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection_Unwrapped() const noexcept {
    return static_cast<__OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection(int32_t value__) noexcept;

  /// @brief Field Back value: I32(9)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const Back;

  /// @brief Field Head value: I32(11)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const Head;

  /// @brief Field Hips value: I32(8)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const Hips;

  /// @brief Field LeftArm value: I32(4)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const LeftArm;

  /// @brief Field LeftFoot value: I32(1)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const LeftFoot;

  /// @brief Field LeftHand value: I32(5)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const LeftHand;

  /// @brief Field LeftLeg value: I32(0)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const LeftLeg;

  /// @brief Field Neck value: I32(10)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const Neck;

  /// @brief Field RightArm value: I32(6)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const RightArm;

  /// @brief Field RightFoot value: I32(3)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const RightFoot;

  /// @brief Field RightHand value: I32(7)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const RightHand;

  /// @brief Field RightLeg value: I32(2)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const RightLeg;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7038 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRUnityHumanoidSkeletonRetargeter/OVRHumanBodyBonesMappings/FullBodyTrackingBoneId
struct CORDL_TYPE OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId_Unwrapped
  enum struct __OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId_Unwrapped : int32_t {
    __E_FullBody_Start = static_cast<int32_t>(0x0),
    __E_FullBody_Root = static_cast<int32_t>(0x0),
    __E_FullBody_Hips = static_cast<int32_t>(0x1),
    __E_FullBody_SpineLower = static_cast<int32_t>(0x2),
    __E_FullBody_SpineMiddle = static_cast<int32_t>(0x3),
    __E_FullBody_SpineUpper = static_cast<int32_t>(0x4),
    __E_FullBody_Chest = static_cast<int32_t>(0x5),
    __E_FullBody_Neck = static_cast<int32_t>(0x6),
    __E_FullBody_Head = static_cast<int32_t>(0x7),
    __E_FullBody_LeftShoulder = static_cast<int32_t>(0x8),
    __E_FullBody_LeftScapula = static_cast<int32_t>(0x9),
    __E_FullBody_LeftArmUpper = static_cast<int32_t>(0xa),
    __E_FullBody_LeftArmLower = static_cast<int32_t>(0xb),
    __E_FullBody_LeftHandWristTwist = static_cast<int32_t>(0xc),
    __E_FullBody_RightShoulder = static_cast<int32_t>(0xd),
    __E_FullBody_RightScapula = static_cast<int32_t>(0xe),
    __E_FullBody_RightArmUpper = static_cast<int32_t>(0xf),
    __E_FullBody_RightArmLower = static_cast<int32_t>(0x10),
    __E_FullBody_RightHandWristTwist = static_cast<int32_t>(0x11),
    __E_FullBody_LeftHandPalm = static_cast<int32_t>(0x12),
    __E_FullBody_LeftHandWrist = static_cast<int32_t>(0x13),
    __E_FullBody_LeftHandThumbMetacarpal = static_cast<int32_t>(0x14),
    __E_FullBody_LeftHandThumbProximal = static_cast<int32_t>(0x15),
    __E_FullBody_LeftHandThumbDistal = static_cast<int32_t>(0x16),
    __E_FullBody_LeftHandThumbTip = static_cast<int32_t>(0x17),
    __E_FullBody_LeftHandIndexMetacarpal = static_cast<int32_t>(0x18),
    __E_FullBody_LeftHandIndexProximal = static_cast<int32_t>(0x19),
    __E_FullBody_LeftHandIndexIntermediate = static_cast<int32_t>(0x1a),
    __E_FullBody_LeftHandIndexDistal = static_cast<int32_t>(0x1b),
    __E_FullBody_LeftHandIndexTip = static_cast<int32_t>(0x1c),
    __E_FullBody_LeftHandMiddleMetacarpal = static_cast<int32_t>(0x1d),
    __E_FullBody_LeftHandMiddleProximal = static_cast<int32_t>(0x1e),
    __E_FullBody_LeftHandMiddleIntermediate = static_cast<int32_t>(0x1f),
    __E_FullBody_LeftHandMiddleDistal = static_cast<int32_t>(0x20),
    __E_FullBody_LeftHandMiddleTip = static_cast<int32_t>(0x21),
    __E_FullBody_LeftHandRingMetacarpal = static_cast<int32_t>(0x22),
    __E_FullBody_LeftHandRingProximal = static_cast<int32_t>(0x23),
    __E_FullBody_LeftHandRingIntermediate = static_cast<int32_t>(0x24),
    __E_FullBody_LeftHandRingDistal = static_cast<int32_t>(0x25),
    __E_FullBody_LeftHandRingTip = static_cast<int32_t>(0x26),
    __E_FullBody_LeftHandLittleMetacarpal = static_cast<int32_t>(0x27),
    __E_FullBody_LeftHandLittleProximal = static_cast<int32_t>(0x28),
    __E_FullBody_LeftHandLittleIntermediate = static_cast<int32_t>(0x29),
    __E_FullBody_LeftHandLittleDistal = static_cast<int32_t>(0x2a),
    __E_FullBody_LeftHandLittleTip = static_cast<int32_t>(0x2b),
    __E_FullBody_RightHandPalm = static_cast<int32_t>(0x2c),
    __E_FullBody_RightHandWrist = static_cast<int32_t>(0x2d),
    __E_FullBody_RightHandThumbMetacarpal = static_cast<int32_t>(0x2e),
    __E_FullBody_RightHandThumbProximal = static_cast<int32_t>(0x2f),
    __E_FullBody_RightHandThumbDistal = static_cast<int32_t>(0x30),
    __E_FullBody_RightHandThumbTip = static_cast<int32_t>(0x31),
    __E_FullBody_RightHandIndexMetacarpal = static_cast<int32_t>(0x32),
    __E_FullBody_RightHandIndexProximal = static_cast<int32_t>(0x33),
    __E_FullBody_RightHandIndexIntermediate = static_cast<int32_t>(0x34),
    __E_FullBody_RightHandIndexDistal = static_cast<int32_t>(0x35),
    __E_FullBody_RightHandIndexTip = static_cast<int32_t>(0x36),
    __E_FullBody_RightHandMiddleMetacarpal = static_cast<int32_t>(0x37),
    __E_FullBody_RightHandMiddleProximal = static_cast<int32_t>(0x38),
    __E_FullBody_RightHandMiddleIntermediate = static_cast<int32_t>(0x39),
    __E_FullBody_RightHandMiddleDistal = static_cast<int32_t>(0x3a),
    __E_FullBody_RightHandMiddleTip = static_cast<int32_t>(0x3b),
    __E_FullBody_RightHandRingMetacarpal = static_cast<int32_t>(0x3c),
    __E_FullBody_RightHandRingProximal = static_cast<int32_t>(0x3d),
    __E_FullBody_RightHandRingIntermediate = static_cast<int32_t>(0x3e),
    __E_FullBody_RightHandRingDistal = static_cast<int32_t>(0x3f),
    __E_FullBody_RightHandRingTip = static_cast<int32_t>(0x40),
    __E_FullBody_RightHandLittleMetacarpal = static_cast<int32_t>(0x41),
    __E_FullBody_RightHandLittleProximal = static_cast<int32_t>(0x42),
    __E_FullBody_RightHandLittleIntermediate = static_cast<int32_t>(0x43),
    __E_FullBody_RightHandLittleDistal = static_cast<int32_t>(0x44),
    __E_FullBody_RightHandLittleTip = static_cast<int32_t>(0x45),
    __E_FullBody_LeftUpperLeg = static_cast<int32_t>(0x46),
    __E_FullBody_LeftLowerLeg = static_cast<int32_t>(0x47),
    __E_FullBody_LeftFootAnkleTwist = static_cast<int32_t>(0x48),
    __E_FullBody_LeftFootAnkle = static_cast<int32_t>(0x49),
    __E_FullBody_LeftFootSubtalar = static_cast<int32_t>(0x4a),
    __E_FullBody_LeftFootTransverse = static_cast<int32_t>(0x4b),
    __E_FullBody_LeftFootBall = static_cast<int32_t>(0x4c),
    __E_FullBody_RightUpperLeg = static_cast<int32_t>(0x4d),
    __E_FullBody_RightLowerLeg = static_cast<int32_t>(0x4e),
    __E_FullBody_RightFootAnkleTwist = static_cast<int32_t>(0x4f),
    __E_FullBody_RightFootAnkle = static_cast<int32_t>(0x50),
    __E_FullBody_RightFootSubtalar = static_cast<int32_t>(0x51),
    __E_FullBody_RightFootTransverse = static_cast<int32_t>(0x52),
    __E_FullBody_RightFootBall = static_cast<int32_t>(0x53),
    __E_FullBody_End = static_cast<int32_t>(0x54),
    __E_NoOverride = static_cast<int32_t>(0x55),
    __E_Remove = static_cast<int32_t>(0x56),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId_Unwrapped() const noexcept {
    return static_cast<__OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId(int32_t value__) noexcept;

  /// @brief Field FullBody_Chest value: I32(5)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_Chest;

  /// @brief Field FullBody_End value: I32(84)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_End;

  /// @brief Field FullBody_Head value: I32(7)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_Head;

  /// @brief Field FullBody_Hips value: I32(1)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_Hips;

  /// @brief Field FullBody_LeftArmLower value: I32(11)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftArmLower;

  /// @brief Field FullBody_LeftArmUpper value: I32(10)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftArmUpper;

  /// @brief Field FullBody_LeftFootAnkle value: I32(73)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftFootAnkle;

  /// @brief Field FullBody_LeftFootAnkleTwist value: I32(72)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftFootAnkleTwist;

  /// @brief Field FullBody_LeftFootBall value: I32(76)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftFootBall;

  /// @brief Field FullBody_LeftFootSubtalar value: I32(74)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftFootSubtalar;

  /// @brief Field FullBody_LeftFootTransverse value: I32(75)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftFootTransverse;

  /// @brief Field FullBody_LeftHandIndexDistal value: I32(27)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandIndexDistal;

  /// @brief Field FullBody_LeftHandIndexIntermediate value: I32(26)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandIndexIntermediate;

  /// @brief Field FullBody_LeftHandIndexMetacarpal value: I32(24)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandIndexMetacarpal;

  /// @brief Field FullBody_LeftHandIndexProximal value: I32(25)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandIndexProximal;

  /// @brief Field FullBody_LeftHandIndexTip value: I32(28)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandIndexTip;

  /// @brief Field FullBody_LeftHandLittleDistal value: I32(42)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandLittleDistal;

  /// @brief Field FullBody_LeftHandLittleIntermediate value: I32(41)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandLittleIntermediate;

  /// @brief Field FullBody_LeftHandLittleMetacarpal value: I32(39)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandLittleMetacarpal;

  /// @brief Field FullBody_LeftHandLittleProximal value: I32(40)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandLittleProximal;

  /// @brief Field FullBody_LeftHandLittleTip value: I32(43)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandLittleTip;

  /// @brief Field FullBody_LeftHandMiddleDistal value: I32(32)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandMiddleDistal;

  /// @brief Field FullBody_LeftHandMiddleIntermediate value: I32(31)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandMiddleIntermediate;

  /// @brief Field FullBody_LeftHandMiddleMetacarpal value: I32(29)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandMiddleMetacarpal;

  /// @brief Field FullBody_LeftHandMiddleProximal value: I32(30)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandMiddleProximal;

  /// @brief Field FullBody_LeftHandMiddleTip value: I32(33)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandMiddleTip;

  /// @brief Field FullBody_LeftHandPalm value: I32(18)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandPalm;

  /// @brief Field FullBody_LeftHandRingDistal value: I32(37)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandRingDistal;

  /// @brief Field FullBody_LeftHandRingIntermediate value: I32(36)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandRingIntermediate;

  /// @brief Field FullBody_LeftHandRingMetacarpal value: I32(34)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandRingMetacarpal;

  /// @brief Field FullBody_LeftHandRingProximal value: I32(35)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandRingProximal;

  /// @brief Field FullBody_LeftHandRingTip value: I32(38)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandRingTip;

  /// @brief Field FullBody_LeftHandThumbDistal value: I32(22)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandThumbDistal;

  /// @brief Field FullBody_LeftHandThumbMetacarpal value: I32(20)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandThumbMetacarpal;

  /// @brief Field FullBody_LeftHandThumbProximal value: I32(21)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandThumbProximal;

  /// @brief Field FullBody_LeftHandThumbTip value: I32(23)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandThumbTip;

  /// @brief Field FullBody_LeftHandWrist value: I32(19)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandWrist;

  /// @brief Field FullBody_LeftHandWristTwist value: I32(12)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandWristTwist;

  /// @brief Field FullBody_LeftLowerLeg value: I32(71)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftLowerLeg;

  /// @brief Field FullBody_LeftScapula value: I32(9)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftScapula;

  /// @brief Field FullBody_LeftShoulder value: I32(8)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftShoulder;

  /// @brief Field FullBody_LeftUpperLeg value: I32(70)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftUpperLeg;

  /// @brief Field FullBody_Neck value: I32(6)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_Neck;

  /// @brief Field FullBody_RightArmLower value: I32(16)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightArmLower;

  /// @brief Field FullBody_RightArmUpper value: I32(15)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightArmUpper;

  /// @brief Field FullBody_RightFootAnkle value: I32(80)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightFootAnkle;

  /// @brief Field FullBody_RightFootAnkleTwist value: I32(79)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightFootAnkleTwist;

  /// @brief Field FullBody_RightFootBall value: I32(83)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightFootBall;

  /// @brief Field FullBody_RightFootSubtalar value: I32(81)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightFootSubtalar;

  /// @brief Field FullBody_RightFootTransverse value: I32(82)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightFootTransverse;

  /// @brief Field FullBody_RightHandIndexDistal value: I32(53)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandIndexDistal;

  /// @brief Field FullBody_RightHandIndexIntermediate value: I32(52)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandIndexIntermediate;

  /// @brief Field FullBody_RightHandIndexMetacarpal value: I32(50)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandIndexMetacarpal;

  /// @brief Field FullBody_RightHandIndexProximal value: I32(51)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandIndexProximal;

  /// @brief Field FullBody_RightHandIndexTip value: I32(54)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandIndexTip;

  /// @brief Field FullBody_RightHandLittleDistal value: I32(68)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandLittleDistal;

  /// @brief Field FullBody_RightHandLittleIntermediate value: I32(67)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandLittleIntermediate;

  /// @brief Field FullBody_RightHandLittleMetacarpal value: I32(65)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandLittleMetacarpal;

  /// @brief Field FullBody_RightHandLittleProximal value: I32(66)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandLittleProximal;

  /// @brief Field FullBody_RightHandLittleTip value: I32(69)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandLittleTip;

  /// @brief Field FullBody_RightHandMiddleDistal value: I32(58)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandMiddleDistal;

  /// @brief Field FullBody_RightHandMiddleIntermediate value: I32(57)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandMiddleIntermediate;

  /// @brief Field FullBody_RightHandMiddleMetacarpal value: I32(55)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandMiddleMetacarpal;

  /// @brief Field FullBody_RightHandMiddleProximal value: I32(56)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandMiddleProximal;

  /// @brief Field FullBody_RightHandMiddleTip value: I32(59)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandMiddleTip;

  /// @brief Field FullBody_RightHandPalm value: I32(44)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandPalm;

  /// @brief Field FullBody_RightHandRingDistal value: I32(63)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandRingDistal;

  /// @brief Field FullBody_RightHandRingIntermediate value: I32(62)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandRingIntermediate;

  /// @brief Field FullBody_RightHandRingMetacarpal value: I32(60)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandRingMetacarpal;

  /// @brief Field FullBody_RightHandRingProximal value: I32(61)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandRingProximal;

  /// @brief Field FullBody_RightHandRingTip value: I32(64)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandRingTip;

  /// @brief Field FullBody_RightHandThumbDistal value: I32(48)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandThumbDistal;

  /// @brief Field FullBody_RightHandThumbMetacarpal value: I32(46)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandThumbMetacarpal;

  /// @brief Field FullBody_RightHandThumbProximal value: I32(47)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandThumbProximal;

  /// @brief Field FullBody_RightHandThumbTip value: I32(49)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandThumbTip;

  /// @brief Field FullBody_RightHandWrist value: I32(45)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandWrist;

  /// @brief Field FullBody_RightHandWristTwist value: I32(17)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandWristTwist;

  /// @brief Field FullBody_RightLowerLeg value: I32(78)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightLowerLeg;

  /// @brief Field FullBody_RightScapula value: I32(14)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightScapula;

  /// @brief Field FullBody_RightShoulder value: I32(13)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightShoulder;

  /// @brief Field FullBody_RightUpperLeg value: I32(77)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightUpperLeg;

  /// @brief Field FullBody_Root value: I32(0)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_Root;

  /// @brief Field FullBody_SpineLower value: I32(2)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_SpineLower;

  /// @brief Field FullBody_SpineMiddle value: I32(3)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_SpineMiddle;

  /// @brief Field FullBody_SpineUpper value: I32(4)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_SpineUpper;

  /// @brief Field FullBody_Start value: I32(0)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_Start;

  /// @brief Field NoOverride value: I32(85)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const NoOverride;

  /// @brief Field Remove value: I32(86)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const Remove;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7039 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRUnityHumanoidSkeletonRetargeter/OVRHumanBodyBonesMappings/BodyTrackingBoneId
struct CORDL_TYPE OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId_Unwrapped
  enum struct __OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId_Unwrapped : int32_t {
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
  constexpr operator __OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId_Unwrapped() const noexcept {
    return static_cast<__OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId(int32_t value__) noexcept;

  /// @brief Field Body_Chest value: I32(5)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_Chest;

  /// @brief Field Body_End value: I32(70)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_End;

  /// @brief Field Body_Head value: I32(7)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_Head;

  /// @brief Field Body_Hips value: I32(1)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_Hips;

  /// @brief Field Body_LeftArmLower value: I32(11)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftArmLower;

  /// @brief Field Body_LeftArmUpper value: I32(10)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftArmUpper;

  /// @brief Field Body_LeftHandIndexDistal value: I32(27)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandIndexDistal;

  /// @brief Field Body_LeftHandIndexIntermediate value: I32(26)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandIndexIntermediate;

  /// @brief Field Body_LeftHandIndexMetacarpal value: I32(24)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandIndexMetacarpal;

  /// @brief Field Body_LeftHandIndexProximal value: I32(25)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandIndexProximal;

  /// @brief Field Body_LeftHandIndexTip value: I32(28)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandIndexTip;

  /// @brief Field Body_LeftHandLittleDistal value: I32(42)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandLittleDistal;

  /// @brief Field Body_LeftHandLittleIntermediate value: I32(41)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandLittleIntermediate;

  /// @brief Field Body_LeftHandLittleMetacarpal value: I32(39)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandLittleMetacarpal;

  /// @brief Field Body_LeftHandLittleProximal value: I32(40)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandLittleProximal;

  /// @brief Field Body_LeftHandLittleTip value: I32(43)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandLittleTip;

  /// @brief Field Body_LeftHandMiddleDistal value: I32(32)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandMiddleDistal;

  /// @brief Field Body_LeftHandMiddleIntermediate value: I32(31)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandMiddleIntermediate;

  /// @brief Field Body_LeftHandMiddleMetacarpal value: I32(29)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandMiddleMetacarpal;

  /// @brief Field Body_LeftHandMiddleProximal value: I32(30)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandMiddleProximal;

  /// @brief Field Body_LeftHandMiddleTip value: I32(33)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandMiddleTip;

  /// @brief Field Body_LeftHandPalm value: I32(18)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandPalm;

  /// @brief Field Body_LeftHandRingDistal value: I32(37)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandRingDistal;

  /// @brief Field Body_LeftHandRingIntermediate value: I32(36)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandRingIntermediate;

  /// @brief Field Body_LeftHandRingMetacarpal value: I32(34)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandRingMetacarpal;

  /// @brief Field Body_LeftHandRingProximal value: I32(35)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandRingProximal;

  /// @brief Field Body_LeftHandRingTip value: I32(38)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandRingTip;

  /// @brief Field Body_LeftHandThumbDistal value: I32(22)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandThumbDistal;

  /// @brief Field Body_LeftHandThumbMetacarpal value: I32(20)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandThumbMetacarpal;

  /// @brief Field Body_LeftHandThumbProximal value: I32(21)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandThumbProximal;

  /// @brief Field Body_LeftHandThumbTip value: I32(23)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandThumbTip;

  /// @brief Field Body_LeftHandWrist value: I32(19)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandWrist;

  /// @brief Field Body_LeftHandWristTwist value: I32(12)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftHandWristTwist;

  /// @brief Field Body_LeftScapula value: I32(9)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftScapula;

  /// @brief Field Body_LeftShoulder value: I32(8)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_LeftShoulder;

  /// @brief Field Body_Neck value: I32(6)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_Neck;

  /// @brief Field Body_RightArmLower value: I32(16)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightArmLower;

  /// @brief Field Body_RightArmUpper value: I32(15)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightArmUpper;

  /// @brief Field Body_RightHandIndexDistal value: I32(53)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandIndexDistal;

  /// @brief Field Body_RightHandIndexIntermediate value: I32(52)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandIndexIntermediate;

  /// @brief Field Body_RightHandIndexMetacarpal value: I32(50)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandIndexMetacarpal;

  /// @brief Field Body_RightHandIndexProximal value: I32(51)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandIndexProximal;

  /// @brief Field Body_RightHandIndexTip value: I32(54)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandIndexTip;

  /// @brief Field Body_RightHandLittleDistal value: I32(68)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandLittleDistal;

  /// @brief Field Body_RightHandLittleIntermediate value: I32(67)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandLittleIntermediate;

  /// @brief Field Body_RightHandLittleMetacarpal value: I32(65)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandLittleMetacarpal;

  /// @brief Field Body_RightHandLittleProximal value: I32(66)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandLittleProximal;

  /// @brief Field Body_RightHandLittleTip value: I32(69)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandLittleTip;

  /// @brief Field Body_RightHandMiddleDistal value: I32(58)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandMiddleDistal;

  /// @brief Field Body_RightHandMiddleIntermediate value: I32(57)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandMiddleIntermediate;

  /// @brief Field Body_RightHandMiddleMetacarpal value: I32(55)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandMiddleMetacarpal;

  /// @brief Field Body_RightHandMiddleProximal value: I32(56)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandMiddleProximal;

  /// @brief Field Body_RightHandMiddleTip value: I32(59)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandMiddleTip;

  /// @brief Field Body_RightHandPalm value: I32(44)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandPalm;

  /// @brief Field Body_RightHandRingDistal value: I32(63)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandRingDistal;

  /// @brief Field Body_RightHandRingIntermediate value: I32(62)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandRingIntermediate;

  /// @brief Field Body_RightHandRingMetacarpal value: I32(60)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandRingMetacarpal;

  /// @brief Field Body_RightHandRingProximal value: I32(61)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandRingProximal;

  /// @brief Field Body_RightHandRingTip value: I32(64)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandRingTip;

  /// @brief Field Body_RightHandThumbDistal value: I32(48)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandThumbDistal;

  /// @brief Field Body_RightHandThumbMetacarpal value: I32(46)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandThumbMetacarpal;

  /// @brief Field Body_RightHandThumbProximal value: I32(47)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandThumbProximal;

  /// @brief Field Body_RightHandThumbTip value: I32(49)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandThumbTip;

  /// @brief Field Body_RightHandWrist value: I32(45)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandWrist;

  /// @brief Field Body_RightHandWristTwist value: I32(17)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightHandWristTwist;

  /// @brief Field Body_RightScapula value: I32(14)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightScapula;

  /// @brief Field Body_RightShoulder value: I32(13)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_RightShoulder;

  /// @brief Field Body_Root value: I32(0)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_Root;

  /// @brief Field Body_SpineLower value: I32(2)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_SpineLower;

  /// @brief Field Body_SpineMiddle value: I32(3)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_SpineMiddle;

  /// @brief Field Body_SpineUpper value: I32(4)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_SpineUpper;

  /// @brief Field Body_Start value: I32(0)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Body_Start;

  /// @brief Field NoOverride value: I32(71)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const NoOverride;

  /// @brief Field Remove value: I32(72)
  static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const Remove;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7040 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRUnityHumanoidSkeletonRetargeter/OVRHumanBodyBonesMappings
class CORDL_TYPE OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings : public ::System::Object {
public:
  // Declarations
  using BodySection = ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection;

  using BodyTrackingBoneId = ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId;

  using FullBodyTrackingBoneId = ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId;

  /// @brief Field BoneIdToHumanBodyBone, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_BoneIdToHumanBodyBone,
                      put =
                          setStaticF_BoneIdToHumanBodyBone)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* BoneIdToHumanBodyBone;

  /// @brief Field BoneIdToJointPair, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_BoneIdToJointPair, put = setStaticF_BoneIdToJointPair)) ::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::OVRSkeleton_BoneId, ::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId, ::GlobalNamespace::OVRSkeleton_BoneId>*>* BoneIdToJointPair;

  /// @brief Field BoneToBodySection, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_BoneToBodySection, put = setStaticF_BoneToBodySection)) ::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::HumanBodyBones, ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>* BoneToBodySection;

  /// @brief Field BoneToJointPair, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_BoneToJointPair, put = setStaticF_BoneToJointPair)) ::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::HumanBodyBones, ::System::Tuple_2<::UnityEngine::HumanBodyBones, ::UnityEngine::HumanBodyBones>*>* BoneToJointPair;

  /// @brief Field FullBodyBoneIdToHumanBodyBone, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_FullBodyBoneIdToHumanBodyBone,
      put =
          setStaticF_FullBodyBoneIdToHumanBodyBone)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* FullBodyBoneIdToHumanBodyBone;

  /// @brief Field FullBoneIdToJointPair, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_FullBoneIdToJointPair, put = setStaticF_FullBoneIdToJointPair)) ::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::OVRSkeleton_BoneId, ::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId, ::GlobalNamespace::OVRSkeleton_BoneId>*>* FullBoneIdToJointPair;

  __declspec(property(get = get_GetBoneIdToHumanBodyBone)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* GetBoneIdToHumanBodyBone;

  __declspec(property(get = get_GetBoneIdToJointPair)) ::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::OVRSkeleton_BoneId, ::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId, ::GlobalNamespace::OVRSkeleton_BoneId>*>* GetBoneIdToJointPair;

  __declspec(property(
      get = get_GetBoneToBodySection)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,
                                                                                    ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>* GetBoneToBodySection;

  __declspec(property(get = get_GetBoneToJointPair)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,
                                                                                                  ::System::Tuple_2<::UnityEngine::HumanBodyBones, ::UnityEngine::HumanBodyBones>*>* GetBoneToJointPair;

  __declspec(property(
      get = get_GetFullBodyBoneIdToHumanBodyBone)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* GetFullBodyBoneIdToHumanBodyBone;

  __declspec(property(get = get_GetFullBodyBoneIdToJointPair)) ::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::OVRSkeleton_BoneId, ::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId, ::GlobalNamespace::OVRSkeleton_BoneId>*>* GetFullBodyBoneIdToJointPair;

  /// @brief Convert operator to "::GlobalNamespace::OVRHumanBodyBonesMappingsInterface"
  constexpr operator ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface*() noexcept;

  static inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings* New_ctor();

  /// @brief Method .ctor, addr 0x5c4b15c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* getStaticF_BoneIdToHumanBodyBone();

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId, ::GlobalNamespace::OVRSkeleton_BoneId>*>*
  getStaticF_BoneIdToJointPair();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*
  getStaticF_BoneToBodySection();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::System::Tuple_2<::UnityEngine::HumanBodyBones, ::UnityEngine::HumanBodyBones>*>*
  getStaticF_BoneToJointPair();

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* getStaticF_FullBodyBoneIdToHumanBodyBone();

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId, ::GlobalNamespace::OVRSkeleton_BoneId>*>*
  getStaticF_FullBoneIdToJointPair();

  /// @brief Method get_GetBoneIdToHumanBodyBone, addr 0x5c4dfa8, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* get_GetBoneIdToHumanBodyBone();

  /// @brief Method get_GetBoneIdToJointPair, addr 0x5c4e060, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId, ::GlobalNamespace::OVRSkeleton_BoneId>*>*
  get_GetBoneIdToJointPair();

  /// @brief Method get_GetBoneToBodySection, addr 0x5c4def0, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*
  get_GetBoneToBodySection();

  /// @brief Method get_GetBoneToJointPair, addr 0x5c4de94, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::System::Tuple_2<::UnityEngine::HumanBodyBones, ::UnityEngine::HumanBodyBones>*>* get_GetBoneToJointPair();

  /// @brief Method get_GetFullBodyBoneIdToHumanBodyBone, addr 0x5c4df4c, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* get_GetFullBodyBoneIdToHumanBodyBone();

  /// @brief Method get_GetFullBodyBoneIdToJointPair, addr 0x5c4e004, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId, ::GlobalNamespace::OVRSkeleton_BoneId>*>*
  get_GetFullBodyBoneIdToJointPair();

  /// @brief Convert to "::GlobalNamespace::OVRHumanBodyBonesMappingsInterface"
  constexpr ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface* i___GlobalNamespace__OVRHumanBodyBonesMappingsInterface() noexcept;

  static inline void setStaticF_BoneIdToHumanBodyBone(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* value);

  static inline void setStaticF_BoneIdToJointPair(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId, ::GlobalNamespace::OVRSkeleton_BoneId>*>* value);

  static inline void setStaticF_BoneToBodySection(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>* value);

  static inline void
  setStaticF_BoneToJointPair(::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::System::Tuple_2<::UnityEngine::HumanBodyBones, ::UnityEngine::HumanBodyBones>*>* value);

  static inline void setStaticF_FullBodyBoneIdToHumanBodyBone(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* value);

  static inline void setStaticF_FullBoneIdToJointPair(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId, ::GlobalNamespace::OVRSkeleton_BoneId>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings(OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings(OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7041 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Nullable`1<T>, System.Object, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRUnityHumanoidSkeletonRetargeter/OVRSkeletonMetadata/BoneData
class CORDL_TYPE OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData : public ::System::Object {
public:
  // Declarations
  /// @brief Field CorrectionQuaternion, offset 0x50, size 0x14
  __declspec(property(get = __cordl_internal_get_CorrectionQuaternion, put = __cordl_internal_set_CorrectionQuaternion)) ::System::Nullable_1<::UnityEngine::Quaternion> CorrectionQuaternion;

  /// @brief Field DegenerateJoint, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_DegenerateJoint, put = __cordl_internal_set_DegenerateJoint)) bool DegenerateJoint;

  /// @brief Field FromPosition, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_FromPosition, put = __cordl_internal_set_FromPosition)) ::UnityEngine::Vector3 FromPosition;

  /// @brief Field JointPairEnd, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_JointPairEnd, put = __cordl_internal_set_JointPairEnd)) ::UnityW<::UnityEngine::Transform> JointPairEnd;

  /// @brief Field JointPairOrientation, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_JointPairOrientation, put = __cordl_internal_set_JointPairOrientation)) ::UnityEngine::Quaternion JointPairOrientation;

  /// @brief Field JointPairStart, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_JointPairStart, put = __cordl_internal_set_JointPairStart)) ::UnityW<::UnityEngine::Transform> JointPairStart;

  /// @brief Field OriginalJoint, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_OriginalJoint, put = __cordl_internal_set_OriginalJoint)) ::UnityW<::UnityEngine::Transform> OriginalJoint;

  /// @brief Field ParentTransform, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_ParentTransform, put = __cordl_internal_set_ParentTransform)) ::UnityW<::UnityEngine::Transform> ParentTransform;

  /// @brief Field ToPosition, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get_ToPosition, put = __cordl_internal_set_ToPosition)) ::UnityEngine::Vector3 ToPosition;

  static inline ::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData* New_ctor();

  static inline ::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData*
  New_ctor(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData* otherBoneData);

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

  /// @brief Method .ctor, addr 0x5c539a4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5c52818, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData* otherBoneData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData(OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData(OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7042 };

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
static_assert(offsetof(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData, ___OriginalJoint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData, ___FromPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData, ___ToPosition) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData, ___JointPairStart) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData, ___JointPairEnd) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData, ___JointPairOrientation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData, ___CorrectionQuaternion) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData, ___ParentTransform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData, ___DegenerateJoint) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRUnityHumanoidSkeletonRetargeter/OVRSkeletonMetadata
class CORDL_TYPE OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata : public ::System::Object {
public:
  // Declarations
  using BoneData = ::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData;

  __declspec(property(get = get_BodyToBoneData)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,
                                                                                              ::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData*>* BodyToBoneData;

  /// @brief Field <BodyToBoneData>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__BodyToBoneData_k__BackingField, put = __cordl_internal_set__BodyToBoneData_k__BackingField)) ::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::HumanBodyBones, ::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData*>* _BodyToBoneData_k__BackingField;

  /// @brief Field _boneEnumValues, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__boneEnumValues, put = __cordl_internal_set__boneEnumValues)) ::ArrayW<::UnityEngine::HumanBodyBones, ::Array<::UnityEngine::HumanBodyBones>*>
      _boneEnumValues;

  /// @brief Method AssembleSkeleton, addr 0x5c531d4, size 0x7d0, virtual false, abstract: false, final false
  inline void AssembleSkeleton(::GlobalNamespace::OVRSkeleton* skeleton, bool useBindPose,
                               ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* customBoneIdToHumanBodyBone,
                               ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface* bodyBonesMappingInterface, bool useFullBody);

  /// @brief Method BuildBoneData, addr 0x5c52880, size 0x7c0, virtual false, abstract: false, final false
  inline void BuildBoneData(::UnityEngine::Animator* animator, ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface* bodyBonesMappingInterface);

  /// @brief Method BuildBoneDataSkeleton, addr 0x5c4ddd0, size 0x8, virtual false, abstract: false, final false
  inline void BuildBoneDataSkeleton(::GlobalNamespace::OVRSkeleton* skeleton, bool useBindPose,
                                    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* customBoneIdToHumanBodyBone,
                                    ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface* bodyBonesMappingInterface);

  /// @brief Method BuildBoneDataSkeletonFullBody, addr 0x5c4ddc8, size 0x8, virtual false, abstract: false, final false
  inline void BuildBoneDataSkeletonFullBody(::GlobalNamespace::OVRSkeleton* skeleton, bool useBindPose,
                                            ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* customBoneIdToHumanBodyBone,
                                            ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface* bodyBonesMappingInterface);

  /// @brief Method BuildCoordinateAxesForAllBones, addr 0x5c4b6d8, size 0x628, virtual false, abstract: false, final false
  inline void BuildCoordinateAxesForAllBones();

  /// @brief Method CreateQuaternionForBoneData, addr 0x5c540bc, size 0x190, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion CreateQuaternionForBoneData(::UnityEngine::Vector3 fromPosition, ::UnityEngine::Vector3 toPosition);

  /// @brief Method CreateQuaternionForBoneDataWithRightVec, addr 0x5c5424c, size 0x1d4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion CreateQuaternionForBoneDataWithRightVec(::UnityEngine::Vector3 fromPosition, ::UnityEngine::Vector3 toPosition, ::UnityEngine::Vector3 rightVector);

  /// @brief Method FindBoneWithBoneId, addr 0x5c539a8, size 0x1b4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRBone* FindBoneWithBoneId(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* bones, ::GlobalNamespace::OVRSkeleton_BoneId boneId);

  /// @brief Method FindFirstChild, addr 0x5c53b5c, size 0x104, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> FindFirstChild(::UnityEngine::Transform* startTransform, ::UnityEngine::Transform* currTransform);

  /// @brief Method FixJointPairEndPositionHand, addr 0x5c53c60, size 0x45c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 FixJointPairEndPositionHand(::UnityEngine::Vector3 jointPairEndPosition, ::UnityEngine::HumanBodyBones humanBodyBone);

  static inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* New_ctor(::UnityEngine::Animator* animator,
                                                                                                    ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface* bodyBonesMappingInterface);

  static inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* New_ctor(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* otherSkeletonMetaData);

  static inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*
  New_ctor(::GlobalNamespace::OVRSkeleton* skeleton, bool useBindPose,
           ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* customBoneIdToHumanBodyBone,
           ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface* bodyBonesMappingInterface);

  static inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*
  New_ctor(::GlobalNamespace::OVRSkeleton* skeleton, bool useBindPose,
           ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* customBoneIdToHumanBodyBone, bool useFullBody,
           ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface* bodyBonesMappingInterface);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData*>* const&
  __cordl_internal_get__BodyToBoneData_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData*>*&
  __cordl_internal_get__BodyToBoneData_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::HumanBodyBones, ::Array<::UnityEngine::HumanBodyBones>*> const& __cordl_internal_get__boneEnumValues() const;

  constexpr ::ArrayW<::UnityEngine::HumanBodyBones, ::Array<::UnityEngine::HumanBodyBones>*>& __cordl_internal_get__boneEnumValues();

  constexpr void __cordl_internal_set__BodyToBoneData_k__BackingField(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData*>* value);

  constexpr void __cordl_internal_set__boneEnumValues(::ArrayW<::UnityEngine::HumanBodyBones, ::Array<::UnityEngine::HumanBodyBones>*> value);

  /// @brief Method .ctor, addr 0x5c4b560, size 0x178, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Animator* animator, ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface* bodyBonesMappingInterface);

  /// @brief Method .ctor, addr 0x5c524b0, size 0x368, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* otherSkeletonMetaData);

  /// @brief Method .ctor, addr 0x5c53040, size 0x194, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRSkeleton* skeleton, bool useBindPose,
                    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* customBoneIdToHumanBodyBone,
                    ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface* bodyBonesMappingInterface);

  /// @brief Method .ctor, addr 0x5c4dc30, size 0x198, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRSkeleton* skeleton, bool useBindPose,
                    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* customBoneIdToHumanBodyBone, bool useFullBody,
                    ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface* bodyBonesMappingInterface);

  /// @brief Method get_BodyToBoneData, addr 0x5c524a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData*>* get_BodyToBoneData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata(OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata(OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7043 };

  /// @brief Field <BodyToBoneData>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData*>* ____BodyToBoneData_k__BackingField;

  /// @brief Field _boneEnumValues, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::HumanBodyBones, ::Array<::UnityEngine::HumanBodyBones>*> ____boneEnumValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata, ____BodyToBoneData_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata, ____boneEnumValues) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRUnityHumanoidSkeletonRetargeter::OVRHumanBodyBonesMappings::BodyTrackingBoneId, OVRUnityHumanoidSkeletonRetargeter::OVRHumanBodyBonesMappings::FullBodyTrackingBoneId, System.Object,
// UnityEngine.HumanBodyBones, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRUnityHumanoidSkeletonRetargeter/JointAdjustment
class CORDL_TYPE OVRUnityHumanoidSkeletonRetargeter_JointAdjustment : public ::System::Object {
public:
  // Declarations
  /// @brief Field BoneIdOverrideValue, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_BoneIdOverrideValue,
                      put = __cordl_internal_set_BoneIdOverrideValue)) ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId BoneIdOverrideValue;

  /// @brief Field DisablePositionTransform, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_DisablePositionTransform, put = __cordl_internal_set_DisablePositionTransform)) bool DisablePositionTransform;

  /// @brief Field DisableRotationTransform, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_DisableRotationTransform, put = __cordl_internal_set_DisableRotationTransform)) bool DisableRotationTransform;

  /// @brief Field FullBodyBoneIdOverrideValue, offset 0x3c, size 0x4
  __declspec(property(
      get = __cordl_internal_get_FullBodyBoneIdOverrideValue,
      put = __cordl_internal_set_FullBodyBoneIdOverrideValue)) ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId FullBodyBoneIdOverrideValue;

  /// @brief Field Joint, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_Joint, put = __cordl_internal_set_Joint)) ::UnityEngine::HumanBodyBones Joint;

  /// @brief Field PositionChange, offset 0x14, size 0xc
  __declspec(property(get = __cordl_internal_get_PositionChange, put = __cordl_internal_set_PositionChange)) ::UnityEngine::Vector3 PositionChange;

  __declspec(property(get = get_PrecomputedRotationTweaks, put = set_PrecomputedRotationTweaks)) ::UnityEngine::Quaternion PrecomputedRotationTweaks;

  /// @brief Field RotationChange, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_RotationChange, put = __cordl_internal_set_RotationChange)) ::UnityEngine::Quaternion RotationChange;

  /// @brief Field RotationTweaks, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_RotationTweaks, put = __cordl_internal_set_RotationTweaks)) ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> RotationTweaks;

  /// @brief Field <PrecomputedRotationTweaks>k__BackingField, offset 0x44, size 0x10
  __declspec(property(get = __cordl_internal_get__PrecomputedRotationTweaks_k__BackingField,
                      put = __cordl_internal_set__PrecomputedRotationTweaks_k__BackingField)) ::UnityEngine::Quaternion _PrecomputedRotationTweaks_k__BackingField;

  static inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment* New_ctor();

  /// @brief Method PrecomputeRotationTweaks, addr 0x5c4bd60, size 0x16c, virtual false, abstract: false, final false
  inline void PrecomputeRotationTweaks();

  constexpr ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const& __cordl_internal_get_BoneIdOverrideValue() const;

  constexpr ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId& __cordl_internal_get_BoneIdOverrideValue();

  constexpr bool const& __cordl_internal_get_DisablePositionTransform() const;

  constexpr bool& __cordl_internal_get_DisablePositionTransform();

  constexpr bool const& __cordl_internal_get_DisableRotationTransform() const;

  constexpr bool& __cordl_internal_get_DisableRotationTransform();

  constexpr ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const& __cordl_internal_get_FullBodyBoneIdOverrideValue() const;

  constexpr ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId& __cordl_internal_get_FullBodyBoneIdOverrideValue();

  constexpr ::UnityEngine::HumanBodyBones const& __cordl_internal_get_Joint() const;

  constexpr ::UnityEngine::HumanBodyBones& __cordl_internal_get_Joint();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_PositionChange() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_PositionChange();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_RotationChange() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_RotationChange();

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> const& __cordl_internal_get_RotationTweaks() const;

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>& __cordl_internal_get_RotationTweaks();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__PrecomputedRotationTweaks_k__BackingField() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__PrecomputedRotationTweaks_k__BackingField();

  constexpr void __cordl_internal_set_BoneIdOverrideValue(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId value);

  constexpr void __cordl_internal_set_DisablePositionTransform(bool value);

  constexpr void __cordl_internal_set_DisableRotationTransform(bool value);

  constexpr void __cordl_internal_set_FullBodyBoneIdOverrideValue(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId value);

  constexpr void __cordl_internal_set_Joint(::UnityEngine::HumanBodyBones value);

  constexpr void __cordl_internal_set_PositionChange(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_RotationChange(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_RotationTweaks(::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> value);

  constexpr void __cordl_internal_set__PrecomputedRotationTweaks_k__BackingField(::UnityEngine::Quaternion value);

  /// @brief Method .ctor, addr 0x5c4b0b8, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_PrecomputedRotationTweaks, addr 0x5c54420, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_PrecomputedRotationTweaks();

  /// @brief Method set_PrecomputedRotationTweaks, addr 0x5c5442c, size 0xc, virtual false, abstract: false, final false
  inline void set_PrecomputedRotationTweaks(::UnityEngine::Quaternion value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRUnityHumanoidSkeletonRetargeter_JointAdjustment();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRUnityHumanoidSkeletonRetargeter_JointAdjustment", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRUnityHumanoidSkeletonRetargeter_JointAdjustment(OVRUnityHumanoidSkeletonRetargeter_JointAdjustment&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRUnityHumanoidSkeletonRetargeter_JointAdjustment", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRUnityHumanoidSkeletonRetargeter_JointAdjustment(OVRUnityHumanoidSkeletonRetargeter_JointAdjustment const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7044 };

  /// @brief Field Joint, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::HumanBodyBones ___Joint;

  /// @brief Field PositionChange, offset: 0x14, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___PositionChange;

  /// @brief Field RotationChange, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___RotationChange;

  /// @brief Field RotationTweaks, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> ___RotationTweaks;

  /// @brief Field DisableRotationTransform, offset: 0x38, size: 0x1, def value: None
  bool ___DisableRotationTransform;

  /// @brief Field DisablePositionTransform, offset: 0x39, size: 0x1, def value: None
  bool ___DisablePositionTransform;

  /// @brief Field FullBodyBoneIdOverrideValue, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId ___FullBodyBoneIdOverrideValue;

  /// @brief Field BoneIdOverrideValue, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId ___BoneIdOverrideValue;

  /// @brief Field <PrecomputedRotationTweaks>k__BackingField, offset: 0x44, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____PrecomputedRotationTweaks_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, ___Joint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, ___PositionChange) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, ___RotationChange) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, ___RotationTweaks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, ___DisableRotationTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, ___DisablePositionTransform) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, ___FullBodyBoneIdOverrideValue) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, ___BoneIdOverrideValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, ____PrecomputedRotationTweaks_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRUnityHumanoidSkeletonRetargeter/UpdateType
struct CORDL_TYPE OVRUnityHumanoidSkeletonRetargeter_UpdateType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRUnityHumanoidSkeletonRetargeter_UpdateType_Unwrapped
  enum struct __OVRUnityHumanoidSkeletonRetargeter_UpdateType_Unwrapped : int32_t {
    __E_FixedUpdateOnly = static_cast<int32_t>(0x0),
    __E_UpdateOnly = static_cast<int32_t>(0x1),
    __E_FixedUpdateAndUpdate = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRUnityHumanoidSkeletonRetargeter_UpdateType_Unwrapped() const noexcept {
    return static_cast<__OVRUnityHumanoidSkeletonRetargeter_UpdateType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRUnityHumanoidSkeletonRetargeter_UpdateType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRUnityHumanoidSkeletonRetargeter_UpdateType(int32_t value__) noexcept;

  /// @brief Field FixedUpdateAndUpdate value: I32(2)
  static ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_UpdateType const FixedUpdateAndUpdate;

  /// @brief Field FixedUpdateOnly value: I32(0)
  static ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_UpdateType const FixedUpdateOnly;

  /// @brief Field UpdateOnly value: I32(1)
  static ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_UpdateType const UpdateOnly;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7045 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_UpdateType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_UpdateType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRSkeleton, OVRUnityHumanoidSkeletonRetargeter::UpdateType, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRUnityHumanoidSkeletonRetargeter
class CORDL_TYPE OVRUnityHumanoidSkeletonRetargeter : public ::GlobalNamespace::OVRSkeleton {
public:
  // Declarations
  using JointAdjustment = ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment;

  using OVRHumanBodyBonesMappings = ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings;

  using OVRSkeletonMetadata = ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata;

  using UpdateType = ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_UpdateType;

  __declspec(property(
      get = get_Adjustments)) ::ArrayW<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*, ::Array<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*>*>
      Adjustments;

  __declspec(property(get = get_AnimatorTargetSkeleton)) ::UnityW<::UnityEngine::Animator> AnimatorTargetSkeleton;

  __declspec(property(get = get_BodyBoneMappingsInterface, put = set_BodyBoneMappingsInterface)) ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface* BodyBoneMappingsInterface;

  __declspec(property(get = get_BodySectionToPosition)) ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                                                                 ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
      BodySectionToPosition;

  __declspec(property(get = get_BodySectionsToAlign)) ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                                                               ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
      BodySectionsToAlign;

  __declspec(property(
      get = get_CustomBoneIdToHumanBodyBone)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* CustomBoneIdToHumanBodyBone;

  __declspec(property(get = get_FullBodySectionToPosition)) ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                                                                     ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
      FullBodySectionToPosition;

  __declspec(property(get = get_FullBodySectionsToAlign)) ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                                                                   ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
      FullBodySectionsToAlign;

  __declspec(property(get = get_SourceSkeletonData)) ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* SourceSkeletonData;

  __declspec(property(get = get_SourceSkeletonTPoseData)) ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* SourceSkeletonTPoseData;

  __declspec(property(get = get_TargetSkeletonData)) ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* TargetSkeletonData;

  __declspec(property(get = get_TargetTPoseRotations)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::UnityEngine::Quaternion>* TargetTPoseRotations;

  /// @brief Field _adjustments, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__adjustments, put = __cordl_internal_set__adjustments)) ::ArrayW<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*,
                                                                                                                  ::Array<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*>*>
      _adjustments;

  /// @brief Field _animatorTargetSkeleton, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__animatorTargetSkeleton, put = __cordl_internal_set__animatorTargetSkeleton)) ::UnityW<::UnityEngine::Animator> _animatorTargetSkeleton;

  /// @brief Field _bodyBonesMappingInterface, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__bodyBonesMappingInterface,
                      put = __cordl_internal_set__bodyBonesMappingInterface)) ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface* _bodyBonesMappingInterface;

  /// @brief Field _bodySectionToPosition, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__bodySectionToPosition,
                      put = __cordl_internal_set__bodySectionToPosition)) ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                                                                                   ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
      _bodySectionToPosition;

  /// @brief Field _bodySectionsToAlign, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__bodySectionsToAlign,
                      put = __cordl_internal_set__bodySectionsToAlign)) ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                                                                                 ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
      _bodySectionsToAlign;

  /// @brief Field _customBoneIdToHumanBodyBone, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__customBoneIdToHumanBodyBone,
                      put = __cordl_internal_set__customBoneIdToHumanBodyBone)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>*
      _customBoneIdToHumanBodyBone;

  /// @brief Field _fullBodySectionToPosition, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__fullBodySectionToPosition,
                      put = __cordl_internal_set__fullBodySectionToPosition)) ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                                                                                       ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
      _fullBodySectionToPosition;

  /// @brief Field _fullBodySectionsToAlign, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__fullBodySectionsToAlign,
                      put = __cordl_internal_set__fullBodySectionsToAlign)) ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                                                                                     ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
      _fullBodySectionsToAlign;

  /// @brief Field _lastSkelChangeCount, offset 0xf8, size 0x4
  __declspec(property(get = __cordl_internal_get__lastSkelChangeCount, put = __cordl_internal_set__lastSkelChangeCount)) int32_t _lastSkelChangeCount;

  /// @brief Field _lastTrackedScale, offset 0xfc, size 0xc
  __declspec(property(get = __cordl_internal_get__lastTrackedScale, put = __cordl_internal_set__lastTrackedScale)) ::UnityEngine::Vector3 _lastTrackedScale;

  /// @brief Field _sourceSkeletonData, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__sourceSkeletonData,
                      put = __cordl_internal_set__sourceSkeletonData)) ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* _sourceSkeletonData;

  /// @brief Field _sourceSkeletonTPoseData, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__sourceSkeletonTPoseData,
                      put = __cordl_internal_set__sourceSkeletonTPoseData)) ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* _sourceSkeletonTPoseData;

  /// @brief Field _targetSkeletonData, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__targetSkeletonData,
                      put = __cordl_internal_set__targetSkeletonData)) ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* _targetSkeletonData;

  /// @brief Field _targetTPoseRotations, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__targetTPoseRotations,
                      put = __cordl_internal_set__targetTPoseRotations)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::UnityEngine::Quaternion>* _targetTPoseRotations;

  /// @brief Field _targetTPoseTransformDup, offset 0xf0, size 0x8
  __declspec(property(
      get = __cordl_internal_get__targetTPoseTransformDup,
      put = __cordl_internal_set__targetTPoseTransformDup)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::UnityW<::UnityEngine::Transform>>* _targetTPoseTransformDup;

  /// @brief Field _updateType, offset 0x130, size 0x4
  __declspec(property(get = __cordl_internal_get__updateType, put = __cordl_internal_set__updateType)) ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_UpdateType _updateType;

  /// @brief Method AdjustCustomBoneIdToHumanBodyBoneMapping, addr 0x5c4c74c, size 0x114, virtual false, abstract: false, final false
  inline void AdjustCustomBoneIdToHumanBodyBoneMapping();

  /// @brief Method AlignHierarchies, addr 0x5c4c354, size 0xe0, virtual false, abstract: false, final false
  inline void AlignHierarchies(::UnityEngine::Transform* transformToAlign, ::UnityEngine::Transform* referenceTransform);

  /// @brief Method AlignTargetWithSource, addr 0x5c4cb04, size 0x814, virtual false, abstract: false, final false
  inline void AlignTargetWithSource();

  /// @brief Method ComputeOffsetsUsingSkeletonComponent, addr 0x5c4d44c, size 0x7e4, virtual false, abstract: false, final false
  inline void ComputeOffsetsUsingSkeletonComponent();

  /// @brief Method CopyBoneIdToHumanBodyBoneMapping, addr 0x5c4c434, size 0x318, virtual false, abstract: false, final false
  inline void CopyBoneIdToHumanBodyBoneMapping();

  /// @brief Method CreateCustomBoneIdToHumanBodyBoneMapping, addr 0x5c4b388, size 0x18, virtual false, abstract: false, final false
  inline void CreateCustomBoneIdToHumanBodyBoneMapping();

  /// @brief Method CreateDuplicateTransformHierarchy, addr 0x5c4bed0, size 0x3dc, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> CreateDuplicateTransformHierarchy(::UnityEngine::Transform* transformFromOriginalHierarchy);

  /// @brief Method FindAdjustment, addr 0x5c4de40, size 0x54, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment* FindAdjustment(::UnityEngine::HumanBodyBones boneId);

  /// @brief Method FindHumanBodyBoneFromTransform, addr 0x5c4c2ac, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::HumanBodyBones FindHumanBodyBoneFromTransform(::UnityEngine::Transform* candidateTransform);

  /// @brief Method IsBodySectionInArray, addr 0x5c4ddd8, size 0x68, virtual false, abstract: false, final false
  static inline bool IsBodySectionInArray(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection bodySectionToCheck,
                                          ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                                                   ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
                                              sectionArrayToCheck);

  static inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter* New_ctor();

  /// @brief Method OffsetComputationNeededThisFrame, addr 0x5c4d318, size 0x134, virtual false, abstract: false, final false
  inline bool OffsetComputationNeededThisFrame();

  /// @brief Method OnValidate, addr 0x5c4becc, size 0x4, virtual true, abstract: false, final false
  inline void OnValidate();

  /// @brief Method PrecomputeAllRotationTweaks, addr 0x5c4bd00, size 0x60, virtual false, abstract: false, final false
  inline void PrecomputeAllRotationTweaks();

  /// @brief Method RecomputeSkeletalOffsetsIfNecessary, addr 0x5c4cae0, size 0x24, virtual false, abstract: false, final false
  inline void RecomputeSkeletalOffsetsIfNecessary();

  /// @brief Method RemoveMappingCorrespondingToHumanBodyBone, addr 0x5c4c860, size 0x19c, virtual false, abstract: false, final false
  inline void RemoveMappingCorrespondingToHumanBodyBone(::UnityEngine::HumanBodyBones boneId);

  /// @brief Method ShouldRunUpdateThisFrame, addr 0x5c4ca84, size 0x5c, virtual false, abstract: false, final false
  inline bool ShouldRunUpdateThisFrame();

  /// @brief Method Start, addr 0x5c4b198, size 0x10c, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method StoreTTargetPoseRotations, addr 0x5c4b3a0, size 0x1c0, virtual false, abstract: false, final false
  inline void StoreTTargetPoseRotations();

  /// @brief Method Update, addr 0x5c4c9fc, size 0x88, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method ValidateGameObjectForUnityHumanoidRetargeting, addr 0x5c4b2a4, size 0xe4, virtual false, abstract: false, final false
  static inline void ValidateGameObjectForUnityHumanoidRetargeting(::UnityEngine::GameObject* go);

  constexpr ::ArrayW<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*, ::Array<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*>*> const&
  __cordl_internal_get__adjustments() const;

  constexpr ::ArrayW<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*, ::Array<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*>*>&
  __cordl_internal_get__adjustments();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__animatorTargetSkeleton() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__animatorTargetSkeleton();

  constexpr ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface* const& __cordl_internal_get__bodyBonesMappingInterface() const;

  constexpr ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface*& __cordl_internal_get__bodyBonesMappingInterface();

  constexpr ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                     ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*> const&
  __cordl_internal_get__bodySectionToPosition() const;

  constexpr ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                     ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>&
  __cordl_internal_get__bodySectionToPosition();

  constexpr ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                     ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*> const&
  __cordl_internal_get__bodySectionsToAlign() const;

  constexpr ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                     ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>&
  __cordl_internal_get__bodySectionsToAlign();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* const& __cordl_internal_get__customBoneIdToHumanBodyBone() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>*& __cordl_internal_get__customBoneIdToHumanBodyBone();

  constexpr ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                     ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*> const&
  __cordl_internal_get__fullBodySectionToPosition() const;

  constexpr ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                     ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>&
  __cordl_internal_get__fullBodySectionToPosition();

  constexpr ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                     ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*> const&
  __cordl_internal_get__fullBodySectionsToAlign() const;

  constexpr ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                     ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>&
  __cordl_internal_get__fullBodySectionsToAlign();

  constexpr int32_t const& __cordl_internal_get__lastSkelChangeCount() const;

  constexpr int32_t& __cordl_internal_get__lastSkelChangeCount();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastTrackedScale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastTrackedScale();

  constexpr ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* const& __cordl_internal_get__sourceSkeletonData() const;

  constexpr ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*& __cordl_internal_get__sourceSkeletonData();

  constexpr ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* const& __cordl_internal_get__sourceSkeletonTPoseData() const;

  constexpr ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*& __cordl_internal_get__sourceSkeletonTPoseData();

  constexpr ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* const& __cordl_internal_get__targetSkeletonData() const;

  constexpr ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*& __cordl_internal_get__targetSkeletonData();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::UnityEngine::Quaternion>* const& __cordl_internal_get__targetTPoseRotations() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::UnityEngine::Quaternion>*& __cordl_internal_get__targetTPoseRotations();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get__targetTPoseTransformDup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get__targetTPoseTransformDup();

  constexpr ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_UpdateType const& __cordl_internal_get__updateType() const;

  constexpr ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_UpdateType& __cordl_internal_get__updateType();

  constexpr void __cordl_internal_set__adjustments(
      ::ArrayW<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*, ::Array<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*>*> value);

  constexpr void __cordl_internal_set__animatorTargetSkeleton(::UnityW<::UnityEngine::Animator> value);

  constexpr void __cordl_internal_set__bodyBonesMappingInterface(::GlobalNamespace::OVRHumanBodyBonesMappingsInterface* value);

  constexpr void __cordl_internal_set__bodySectionToPosition(::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                                                                      ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
                                                                 value);

  constexpr void __cordl_internal_set__bodySectionsToAlign(::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                                                                    ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
                                                               value);

  constexpr void __cordl_internal_set__customBoneIdToHumanBodyBone(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* value);

  constexpr void __cordl_internal_set__fullBodySectionToPosition(::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                                                                          ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
                                                                     value);

  constexpr void __cordl_internal_set__fullBodySectionsToAlign(::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                                                                        ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
                                                                   value);

  constexpr void __cordl_internal_set__lastSkelChangeCount(int32_t value);

  constexpr void __cordl_internal_set__lastTrackedScale(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__sourceSkeletonData(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* value);

  constexpr void __cordl_internal_set__sourceSkeletonTPoseData(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* value);

  constexpr void __cordl_internal_set__targetSkeletonData(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* value);

  constexpr void __cordl_internal_set__targetTPoseRotations(::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::UnityEngine::Quaternion>* value);

  constexpr void __cordl_internal_set__targetTPoseTransformDup(::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::UnityW<::UnityEngine::Transform>>* value);

  constexpr void __cordl_internal_set__updateType(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_UpdateType value);

  /// @brief Method .ctor, addr 0x5c4ad3c, size 0x37c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Adjustments, addr 0x5c4b160, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*, ::Array<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*>*> get_Adjustments();

  /// @brief Method get_AnimatorTargetSkeleton, addr 0x5c4ad24, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Animator> get_AnimatorTargetSkeleton();

  /// @brief Method get_BodyBoneMappingsInterface, addr 0x5c4b188, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface* get_BodyBoneMappingsInterface();

  /// @brief Method get_BodySectionToPosition, addr 0x5c4b180, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                  ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
  get_BodySectionToPosition();

  /// @brief Method get_BodySectionsToAlign, addr 0x5c4b170, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                  ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
  get_BodySectionsToAlign();

  /// @brief Method get_CustomBoneIdToHumanBodyBone, addr 0x5c4ad2c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* get_CustomBoneIdToHumanBodyBone();

  /// @brief Method get_FullBodySectionToPosition, addr 0x5c4b178, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                  ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
  get_FullBodySectionToPosition();

  /// @brief Method get_FullBodySectionsToAlign, addr 0x5c4b168, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                  ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
  get_FullBodySectionsToAlign();

  /// @brief Method get_SourceSkeletonData, addr 0x5c4ad0c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* get_SourceSkeletonData();

  /// @brief Method get_SourceSkeletonTPoseData, addr 0x5c4ad14, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* get_SourceSkeletonTPoseData();

  /// @brief Method get_TargetSkeletonData, addr 0x5c4ad1c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* get_TargetSkeletonData();

  /// @brief Method get_TargetTPoseRotations, addr 0x5c4ad34, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::UnityEngine::Quaternion>* get_TargetTPoseRotations();

  /// @brief Method set_BodyBoneMappingsInterface, addr 0x5c4b190, size 0x8, virtual false, abstract: false, final false
  inline void set_BodyBoneMappingsInterface(::GlobalNamespace::OVRHumanBodyBonesMappingsInterface* value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7046 };

  /// @brief Field _sourceSkeletonData, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* ____sourceSkeletonData;

  /// @brief Field _sourceSkeletonTPoseData, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* ____sourceSkeletonTPoseData;

  /// @brief Field _targetSkeletonData, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* ____targetSkeletonData;

  /// @brief Field _animatorTargetSkeleton, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ____animatorTargetSkeleton;

  /// @brief Field _customBoneIdToHumanBodyBone, offset: 0xe0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* ____customBoneIdToHumanBodyBone;

  /// @brief Field _targetTPoseRotations, offset: 0xe8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::UnityEngine::Quaternion>* ____targetTPoseRotations;

  /// @brief Field _targetTPoseTransformDup, offset: 0xf0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::UnityW<::UnityEngine::Transform>>* ____targetTPoseTransformDup;

  /// @brief Field _lastSkelChangeCount, offset: 0xf8, size: 0x4, def value: None
  int32_t ____lastSkelChangeCount;

  /// @brief Field _lastTrackedScale, offset: 0xfc, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____lastTrackedScale;

  /// @brief Field _adjustments, offset: 0x108, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*, ::Array<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*>*> ____adjustments;

  /// @brief Field _fullBodySectionsToAlign, offset: 0x110, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
           ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
      ____fullBodySectionsToAlign;

  /// @brief Field _bodySectionsToAlign, offset: 0x118, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
           ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
      ____bodySectionsToAlign;

  /// @brief Field _fullBodySectionToPosition, offset: 0x120, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
           ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
      ____fullBodySectionToPosition;

  /// @brief Field _bodySectionToPosition, offset: 0x128, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
           ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
      ____bodySectionToPosition;

  /// @brief Field _updateType, offset: 0x130, size: 0x4, def value: None
  ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_UpdateType ____updateType;

  /// @brief Field _bodyBonesMappingInterface, offset: 0x138, size: 0x8, def value: None
  ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface* ____bodyBonesMappingInterface;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____sourceSkeletonData) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____sourceSkeletonTPoseData) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____targetSkeletonData) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____animatorTargetSkeleton) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____customBoneIdToHumanBodyBone) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____targetTPoseRotations) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____targetTPoseTransformDup) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____lastSkelChangeCount) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____lastTrackedScale) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____adjustments) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____fullBodySectionsToAlign) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____bodySectionsToAlign) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____fullBodySectionToPosition) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____bodySectionToPosition) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____updateType) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____bodyBonesMappingInterface) == 0x138, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, 0x140>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection, "", "OVRUnityHumanoidSkeletonRetargeter/OVRHumanBodyBonesMappings/BodySection");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId, "",
                       "OVRUnityHumanoidSkeletonRetargeter/OVRHumanBodyBonesMappings/BodyTrackingBoneId");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId, "",
                       "OVRUnityHumanoidSkeletonRetargeter/OVRHumanBodyBonesMappings/FullBodyTrackingBoneId");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_UpdateType, "", "OVRUnityHumanoidSkeletonRetargeter/UpdateType");
NEED_NO_BOX(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData*, "", "OVRUnityHumanoidSkeletonRetargeter/OVRSkeletonMetadata/BoneData");
NEED_NO_BOX(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter*, "", "OVRUnityHumanoidSkeletonRetargeter");
NEED_NO_BOX(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*, "", "OVRUnityHumanoidSkeletonRetargeter/JointAdjustment");
NEED_NO_BOX(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings*, "", "OVRUnityHumanoidSkeletonRetargeter/OVRHumanBodyBonesMappings");
NEED_NO_BOX(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*, "", "OVRUnityHumanoidSkeletonRetargeter/OVRSkeletonMetadata");
