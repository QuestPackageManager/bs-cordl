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
struct OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection;
}
namespace GlobalNamespace {
struct OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId;
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7896 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7897 };

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

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* getStaticF_BoneIdToHumanBodyBone();

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId, ::GlobalNamespace::OVRSkeleton_BoneId>*>*
  getStaticF_BoneIdToJointPair();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*
  getStaticF_BoneToBodySection();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::System::Tuple_2<::UnityEngine::HumanBodyBones, ::UnityEngine::HumanBodyBones>*>*
  getStaticF_BoneToJointPair();

  static inline void setStaticF_BoneIdToHumanBodyBone(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* value);

  static inline void setStaticF_BoneIdToJointPair(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId, ::GlobalNamespace::OVRSkeleton_BoneId>*>* value);

  static inline void setStaticF_BoneToBodySection(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>* value);

  static inline void
  setStaticF_BoneToJointPair(::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::System::Tuple_2<::UnityEngine::HumanBodyBones, ::UnityEngine::HumanBodyBones>*>* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7898 };

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

  /// @brief Method .ctor, addr 0x3fbaf9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3fba38c, size 0x84, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7899 };

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

  /// @brief Method AssembleSkeleton, addr 0x3fba9a8, size 0x5f4, virtual false, abstract: false, final false
  inline void AssembleSkeleton(::GlobalNamespace::OVRSkeleton* skeleton, bool useBindPose,
                               ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* customBoneIdToHumanBodyBone);

  /// @brief Method BuildBoneData, addr 0x3fba410, size 0x598, virtual false, abstract: false, final false
  inline void BuildBoneData(::UnityEngine::Animator* animator);

  /// @brief Method BuildBoneDataSkeleton, addr 0x3fb7e30, size 0x8, virtual false, abstract: false, final false
  inline void BuildBoneDataSkeleton(::GlobalNamespace::OVRSkeleton* skeleton, bool useBindPose,
                                    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* customBoneIdToHumanBodyBone);

  /// @brief Method BuildCoordinateAxesForAllBones, addr 0x3fb65b8, size 0x4ec, virtual false, abstract: false, final false
  inline void BuildCoordinateAxesForAllBones();

  /// @brief Method CreateQuaternionForBoneData, addr 0x3fbb420, size 0x17c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion CreateQuaternionForBoneData(::UnityEngine::Vector3 fromPosition, ::UnityEngine::Vector3 toPosition);

  /// @brief Method CreateQuaternionForBoneDataWithRightVec, addr 0x3fbb260, size 0x1c0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion CreateQuaternionForBoneDataWithRightVec(::UnityEngine::Vector3 fromPosition, ::UnityEngine::Vector3 toPosition, ::UnityEngine::Vector3 rightVector);

  /// @brief Method FindBoneWithBoneId, addr 0x3fbafa4, size 0x1ac, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRBone* FindBoneWithBoneId(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* bones, ::GlobalNamespace::OVRSkeleton_BoneId boneId);

  /// @brief Method FindFirstChild, addr 0x3fbb150, size 0x110, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> FindFirstChild(::UnityEngine::Transform* startTransform, ::UnityEngine::Transform* currTransform);

  static inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* New_ctor(::UnityEngine::Animator* animator);

  static inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* New_ctor(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* otherSkeletonMetaData);

  static inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*
  New_ctor(::GlobalNamespace::OVRSkeleton* skeleton, bool useBindPose,
           ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* customBoneIdToHumanBodyBone);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData*>* const&
  __cordl_internal_get__BodyToBoneData_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData*>*&
  __cordl_internal_get__BodyToBoneData_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::HumanBodyBones, ::Array<::UnityEngine::HumanBodyBones>*> const& __cordl_internal_get__boneEnumValues() const;

  constexpr ::ArrayW<::UnityEngine::HumanBodyBones, ::Array<::UnityEngine::HumanBodyBones>*>& __cordl_internal_get__boneEnumValues();

  constexpr void __cordl_internal_set__BodyToBoneData_k__BackingField(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData*>* value);

  constexpr void __cordl_internal_set__boneEnumValues(::ArrayW<::UnityEngine::HumanBodyBones, ::Array<::UnityEngine::HumanBodyBones>*> value);

  /// @brief Method .ctor, addr 0x3fb6450, size 0x168, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Animator* animator);

  /// @brief Method .ctor, addr 0x3fba04c, size 0x340, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* otherSkeletonMetaData);

  /// @brief Method .ctor, addr 0x3fb7cb0, size 0x180, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRSkeleton* skeleton, bool useBindPose,
                    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* customBoneIdToHumanBodyBone);

  /// @brief Method get_BodyToBoneData, addr 0x3fba044, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7900 };

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
// Dependencies OVRUnityHumanoidSkeletonRetargeter::OVRHumanBodyBonesMappings::BodyTrackingBoneId, System.Object, UnityEngine.HumanBodyBones, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRUnityHumanoidSkeletonRetargeter/JointAdjustment
class CORDL_TYPE OVRUnityHumanoidSkeletonRetargeter_JointAdjustment : public ::System::Object {
public:
  // Declarations
  /// @brief Field BoneIdOverrideValue, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_BoneIdOverrideValue,
                      put = __cordl_internal_set_BoneIdOverrideValue)) ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId BoneIdOverrideValue;

  /// @brief Field DisablePositionTransform, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_DisablePositionTransform, put = __cordl_internal_set_DisablePositionTransform)) bool DisablePositionTransform;

  /// @brief Field DisableRotationTransform, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_DisableRotationTransform, put = __cordl_internal_set_DisableRotationTransform)) bool DisableRotationTransform;

  /// @brief Field Joint, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_Joint, put = __cordl_internal_set_Joint)) ::UnityEngine::HumanBodyBones Joint;

  /// @brief Field RotationChange, offset 0x14, size 0x10
  __declspec(property(get = __cordl_internal_get_RotationChange, put = __cordl_internal_set_RotationChange)) ::UnityEngine::Quaternion RotationChange;

  static inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment* New_ctor();

  constexpr ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const& __cordl_internal_get_BoneIdOverrideValue() const;

  constexpr ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId& __cordl_internal_get_BoneIdOverrideValue();

  constexpr bool const& __cordl_internal_get_DisablePositionTransform() const;

  constexpr bool& __cordl_internal_get_DisablePositionTransform();

  constexpr bool const& __cordl_internal_get_DisableRotationTransform() const;

  constexpr bool& __cordl_internal_get_DisableRotationTransform();

  constexpr ::UnityEngine::HumanBodyBones const& __cordl_internal_get_Joint() const;

  constexpr ::UnityEngine::HumanBodyBones& __cordl_internal_get_Joint();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_RotationChange() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_RotationChange();

  constexpr void __cordl_internal_set_BoneIdOverrideValue(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId value);

  constexpr void __cordl_internal_set_DisablePositionTransform(bool value);

  constexpr void __cordl_internal_set_DisableRotationTransform(bool value);

  constexpr void __cordl_internal_set_Joint(::UnityEngine::HumanBodyBones value);

  constexpr void __cordl_internal_set_RotationChange(::UnityEngine::Quaternion value);

  /// @brief Method .ctor, addr 0x3fb60fc, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7901 };

  /// @brief Field Joint, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::HumanBodyBones ___Joint;

  /// @brief Field RotationChange, offset: 0x14, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___RotationChange;

  /// @brief Field DisableRotationTransform, offset: 0x24, size: 0x1, def value: None
  bool ___DisableRotationTransform;

  /// @brief Field DisablePositionTransform, offset: 0x25, size: 0x1, def value: None
  bool ___DisablePositionTransform;

  /// @brief Field BoneIdOverrideValue, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId ___BoneIdOverrideValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, ___Joint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, ___RotationChange) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, ___DisableRotationTransform) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, ___DisablePositionTransform) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, ___BoneIdOverrideValue) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRSkeleton
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRUnityHumanoidSkeletonRetargeter
class CORDL_TYPE OVRUnityHumanoidSkeletonRetargeter : public ::GlobalNamespace::OVRSkeleton {
public:
  // Declarations
  using JointAdjustment = ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment;

  using OVRHumanBodyBonesMappings = ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings;

  using OVRSkeletonMetadata = ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata;

  __declspec(property(
      get = get_Adjustments)) ::ArrayW<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*, ::Array<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*>*>
      Adjustments;

  __declspec(property(get = get_AnimatorTargetSkeleton)) ::UnityW<::UnityEngine::Animator> AnimatorTargetSkeleton;

  __declspec(property(get = get_BodySectionToPosition)) ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                                                                 ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
      BodySectionToPosition;

  __declspec(property(get = get_BodySectionsToAlign)) ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                                                               ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
      BodySectionsToAlign;

  __declspec(property(
      get = get_CustomBoneIdToHumanBodyBone)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* CustomBoneIdToHumanBodyBone;

  __declspec(property(get = get_SourceSkeletonData)) ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* SourceSkeletonData;

  __declspec(property(get = get_SourceSkeletonTPoseData)) ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* SourceSkeletonTPoseData;

  __declspec(property(get = get_TargetSkeletonData)) ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* TargetSkeletonData;

  __declspec(property(get = get_TargetTPoseRotations)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::UnityEngine::Quaternion>* TargetTPoseRotations;

  /// @brief Field _adjustments, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__adjustments, put = __cordl_internal_set__adjustments)) ::ArrayW<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*,
                                                                                                                  ::Array<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*>*>
      _adjustments;

  /// @brief Field _animatorTargetSkeleton, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__animatorTargetSkeleton, put = __cordl_internal_set__animatorTargetSkeleton)) ::UnityW<::UnityEngine::Animator> _animatorTargetSkeleton;

  /// @brief Field _bodySectionToPosition, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__bodySectionToPosition,
                      put = __cordl_internal_set__bodySectionToPosition)) ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                                                                                   ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
      _bodySectionToPosition;

  /// @brief Field _bodySectionsToAlign, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__bodySectionsToAlign,
                      put = __cordl_internal_set__bodySectionsToAlign)) ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                                                                                 ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
      _bodySectionsToAlign;

  /// @brief Field _customBoneIdToHumanBodyBone, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__customBoneIdToHumanBodyBone,
                      put = __cordl_internal_set__customBoneIdToHumanBodyBone)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>*
      _customBoneIdToHumanBodyBone;

  /// @brief Field _lastSkelChangeCount, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get__lastSkelChangeCount, put = __cordl_internal_set__lastSkelChangeCount)) int32_t _lastSkelChangeCount;

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

  /// @brief Method AdjustCustomBoneIdToHumanBodyBoneMapping, addr 0x3fb6c7c, size 0xc4, virtual false, abstract: false, final false
  inline void AdjustCustomBoneIdToHumanBodyBoneMapping();

  /// @brief Method AlignTargetWithSource, addr 0x3fb6f50, size 0x6a8, virtual false, abstract: false, final false
  inline void AlignTargetWithSource();

  /// @brief Method ComputeOffsetsUsingSkeletonComponent, addr 0x3fb75f8, size 0x6b8, virtual false, abstract: false, final false
  inline void ComputeOffsetsUsingSkeletonComponent();

  /// @brief Method CopyBoneIdToHumanBodyBoneMapping, addr 0x3fb6aa4, size 0x1d8, virtual false, abstract: false, final false
  inline void CopyBoneIdToHumanBodyBoneMapping();

  /// @brief Method CreateCustomBoneIdToHumanBodyBoneMapping, addr 0x3fb631c, size 0x18, virtual false, abstract: false, final false
  inline void CreateCustomBoneIdToHumanBodyBoneMapping();

  /// @brief Method FindAdjustment, addr 0x3fb7e94, size 0x5c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment* FindAdjustment(::UnityEngine::HumanBodyBones boneId);

  /// @brief Method IsBodySectionInArray, addr 0x3fb7e38, size 0x5c, virtual false, abstract: false, final false
  static inline bool IsBodySectionInArray(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection bodySectionToCheck,
                                          ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                                                   ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
                                              sectionArrayToCheck);

  static inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter* New_ctor();

  /// @brief Method RecomputeSkeletalOffsetsIfNecessary, addr 0x3fb6f38, size 0x18, virtual false, abstract: false, final false
  inline void RecomputeSkeletalOffsetsIfNecessary();

  /// @brief Method RemoveMappingCorrespondingToHumanBodyBone, addr 0x3fb6d40, size 0x1c4, virtual false, abstract: false, final false
  inline void RemoveMappingCorrespondingToHumanBodyBone(::UnityEngine::HumanBodyBones boneId);

  /// @brief Method Start, addr 0x3fb6174, size 0xcc, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method StoreTTargetPoseRotations, addr 0x3fb6334, size 0x11c, virtual false, abstract: false, final false
  inline void StoreTTargetPoseRotations();

  /// @brief Method Update, addr 0x3fb6f04, size 0x34, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method ValidateGameObjectForUnityHumanoidRetargeting, addr 0x3fb6240, size 0xdc, virtual false, abstract: false, final false
  static inline void ValidateGameObjectForUnityHumanoidRetargeting(::UnityEngine::GameObject* go);

  constexpr ::ArrayW<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*, ::Array<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*>*> const&
  __cordl_internal_get__adjustments() const;

  constexpr ::ArrayW<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*, ::Array<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*>*>&
  __cordl_internal_get__adjustments();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__animatorTargetSkeleton() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__animatorTargetSkeleton();

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

  constexpr int32_t const& __cordl_internal_get__lastSkelChangeCount() const;

  constexpr int32_t& __cordl_internal_get__lastSkelChangeCount();

  constexpr ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* const& __cordl_internal_get__sourceSkeletonData() const;

  constexpr ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*& __cordl_internal_get__sourceSkeletonData();

  constexpr ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* const& __cordl_internal_get__sourceSkeletonTPoseData() const;

  constexpr ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*& __cordl_internal_get__sourceSkeletonTPoseData();

  constexpr ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* const& __cordl_internal_get__targetSkeletonData() const;

  constexpr ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*& __cordl_internal_get__targetSkeletonData();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::UnityEngine::Quaternion>* const& __cordl_internal_get__targetTPoseRotations() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::UnityEngine::Quaternion>*& __cordl_internal_get__targetTPoseRotations();

  constexpr void __cordl_internal_set__adjustments(
      ::ArrayW<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*, ::Array<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*>*> value);

  constexpr void __cordl_internal_set__animatorTargetSkeleton(::UnityW<::UnityEngine::Animator> value);

  constexpr void __cordl_internal_set__bodySectionToPosition(::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                                                                      ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
                                                                 value);

  constexpr void __cordl_internal_set__bodySectionsToAlign(::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                                                                    ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
                                                               value);

  constexpr void __cordl_internal_set__customBoneIdToHumanBodyBone(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* value);

  constexpr void __cordl_internal_set__lastSkelChangeCount(int32_t value);

  constexpr void __cordl_internal_set__sourceSkeletonData(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* value);

  constexpr void __cordl_internal_set__sourceSkeletonTPoseData(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* value);

  constexpr void __cordl_internal_set__targetSkeletonData(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* value);

  constexpr void __cordl_internal_set__targetTPoseRotations(::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones, ::UnityEngine::Quaternion>* value);

  /// @brief Method .ctor, addr 0x3fb5ef0, size 0x20c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Adjustments, addr 0x3fb615c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*, ::Array<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*>*> get_Adjustments();

  /// @brief Method get_AnimatorTargetSkeleton, addr 0x3fb5ed8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Animator> get_AnimatorTargetSkeleton();

  /// @brief Method get_BodySectionToPosition, addr 0x3fb616c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                  ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
  get_BodySectionToPosition();

  /// @brief Method get_BodySectionsToAlign, addr 0x3fb6164, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
                  ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
  get_BodySectionsToAlign();

  /// @brief Method get_CustomBoneIdToHumanBodyBone, addr 0x3fb5ee0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId, ::UnityEngine::HumanBodyBones>* get_CustomBoneIdToHumanBodyBone();

  /// @brief Method get_SourceSkeletonData, addr 0x3fb5ec0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* get_SourceSkeletonData();

  /// @brief Method get_SourceSkeletonTPoseData, addr 0x3fb5ec8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* get_SourceSkeletonTPoseData();

  /// @brief Method get_TargetSkeletonData, addr 0x3fb5ed0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* get_TargetSkeletonData();

  /// @brief Method get_TargetTPoseRotations, addr 0x3fb5ee8, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7902 };

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

  /// @brief Field _lastSkelChangeCount, offset: 0xf0, size: 0x4, def value: None
  int32_t ____lastSkelChangeCount;

  /// @brief Field _adjustments, offset: 0xf8, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*, ::Array<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*>*> ____adjustments;

  /// @brief Field _bodySectionsToAlign, offset: 0x100, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
           ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
      ____bodySectionsToAlign;

  /// @brief Field _bodySectionToPosition, offset: 0x108, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection,
           ::Array<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*>
      ____bodySectionToPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____sourceSkeletonData) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____sourceSkeletonTPoseData) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____targetSkeletonData) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____animatorTargetSkeleton) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____customBoneIdToHumanBodyBone) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____targetTPoseRotations) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____lastSkelChangeCount) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____adjustments) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____bodySectionsToAlign) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____bodySectionToPosition) == 0x108, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, 0x110>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection, "", "OVRUnityHumanoidSkeletonRetargeter/OVRHumanBodyBonesMappings/BodySection");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId, "",
                       "OVRUnityHumanoidSkeletonRetargeter/OVRHumanBodyBonesMappings/BodyTrackingBoneId");
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
