#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSkeleton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSkeleton)
namespace GlobalNamespace {
class OVRBoneCapsule;
}
namespace GlobalNamespace {
class OVRBone;
}
namespace GlobalNamespace {
struct OVRPlugin_Posef;
}
namespace GlobalNamespace {
struct OVRPlugin_Quatf;
}
namespace GlobalNamespace {
struct OVRPlugin_Vector3f;
}
namespace GlobalNamespace {
struct OVRSkeleton_BoneId;
}
namespace GlobalNamespace {
class OVRSkeleton_IOVRSkeletonDataProvider;
}
namespace GlobalNamespace {
struct OVRSkeleton_SkeletonPoseData;
}
namespace GlobalNamespace {
struct OVRSkeleton_SkeletonType;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSkeleton_BoneId;
}
namespace GlobalNamespace {
struct OVRSkeleton_SkeletonType;
}
namespace GlobalNamespace {
class OVRSkeleton;
}
namespace GlobalNamespace {
class OVRSkeleton_IOVRSkeletonDataProvider;
}
namespace GlobalNamespace {
struct OVRSkeleton_SkeletonPoseData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSkeleton_BoneId);
MARK_VAL_T(::GlobalNamespace::OVRSkeleton_SkeletonType);
MARK_REF_PTR_T(::GlobalNamespace::OVRSkeleton);
MARK_REF_PTR_T(::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider);
MARK_VAL_T(::GlobalNamespace::OVRSkeleton_SkeletonPoseData);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSkeleton/IOVRSkeletonDataProvider
class CORDL_TYPE OVRSkeleton_IOVRSkeletonDataProvider {
public:
  // Declarations
  __declspec(property(get = get_enabled)) bool enabled;

  /// @brief Method GetSkeletonPoseData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::OVRSkeleton_SkeletonPoseData GetSkeletonPoseData();

  /// @brief Method GetSkeletonType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::OVRSkeleton_SkeletonType GetSkeletonType();

  /// @brief Method get_enabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_enabled();

  // Ctor Parameters [CppParam { name: "", ty: "OVRSkeleton_IOVRSkeletonDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSkeleton_IOVRSkeletonDataProvider(OVRSkeleton_IOVRSkeletonDataProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8482 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies OVRPlugin::Posef
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSkeleton/SkeletonPoseData
struct CORDL_TYPE OVRSkeleton_SkeletonPoseData {
public:
  // Declarations
  __declspec(property(get = get_BoneRotations, put = set_BoneRotations)) ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf, ::Array<::GlobalNamespace::OVRPlugin_Quatf>*> BoneRotations;

  __declspec(property(get = get_BoneTranslations, put = set_BoneTranslations)) ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f, ::Array<::GlobalNamespace::OVRPlugin_Vector3f>*> BoneTranslations;

  __declspec(property(get = get_IsDataHighConfidence, put = set_IsDataHighConfidence)) bool IsDataHighConfidence;

  __declspec(property(get = get_IsDataValid, put = set_IsDataValid)) bool IsDataValid;

  __declspec(property(get = get_RootPose, put = set_RootPose)) ::GlobalNamespace::OVRPlugin_Posef RootPose;

  __declspec(property(get = get_RootScale, put = set_RootScale)) float_t RootScale;

  __declspec(property(get = get_SkeletonChangedCount, put = set_SkeletonChangedCount)) int32_t SkeletonChangedCount;

  /// @brief Method get_BoneRotations, addr 0x4045ac4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf, ::Array<::GlobalNamespace::OVRPlugin_Quatf>*> get_BoneRotations();

  /// @brief Method get_BoneTranslations, addr 0x4045afc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f, ::Array<::GlobalNamespace::OVRPlugin_Vector3f>*> get_BoneTranslations();

  /// @brief Method get_IsDataHighConfidence, addr 0x4045ae8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDataHighConfidence();

  /// @brief Method get_IsDataValid, addr 0x4045ad4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDataValid();

  /// @brief Method get_RootPose, addr 0x4045a84, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_Posef get_RootPose();

  /// @brief Method get_RootScale, addr 0x4045ab4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_RootScale();

  /// @brief Method get_SkeletonChangedCount, addr 0x4045b0c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_SkeletonChangedCount();

  /// @brief Method set_BoneRotations, addr 0x4045acc, size 0x8, virtual false, abstract: false, final false
  inline void set_BoneRotations(::ArrayW<::GlobalNamespace::OVRPlugin_Quatf, ::Array<::GlobalNamespace::OVRPlugin_Quatf>*> value);

  /// @brief Method set_BoneTranslations, addr 0x4045b04, size 0x8, virtual false, abstract: false, final false
  inline void set_BoneTranslations(::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f, ::Array<::GlobalNamespace::OVRPlugin_Vector3f>*> value);

  /// @brief Method set_IsDataHighConfidence, addr 0x4045af0, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDataHighConfidence(bool value);

  /// @brief Method set_IsDataValid, addr 0x4045adc, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDataValid(bool value);

  /// @brief Method set_RootPose, addr 0x4045a98, size 0x1c, virtual false, abstract: false, final false
  inline void set_RootPose(::GlobalNamespace::OVRPlugin_Posef value);

  /// @brief Method set_RootScale, addr 0x4045abc, size 0x8, virtual false, abstract: false, final false
  inline void set_RootScale(float_t value);

  /// @brief Method set_SkeletonChangedCount, addr 0x4045b14, size 0x8, virtual false, abstract: false, final false
  inline void set_SkeletonChangedCount(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSkeleton_SkeletonPoseData();

  // Ctor Parameters [CppParam { name: "_RootPose_k__BackingField", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None }, CppParam { name: "_RootScale_k__BackingField", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "_BoneRotations_k__BackingField", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_Quatf,::Array<::GlobalNamespace::OVRPlugin_Quatf>*>",
  // modifiers: "", def_value: None }, CppParam { name: "_IsDataValid_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_IsDataHighConfidence_k__BackingField", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "_BoneTranslations_k__BackingField", ty:
  // "::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f,::Array<::GlobalNamespace::OVRPlugin_Vector3f>*>", modifiers: "", def_value: None }, CppParam { name: "_SkeletonChangedCount_k__BackingField", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr OVRSkeleton_SkeletonPoseData(::GlobalNamespace::OVRPlugin_Posef _RootPose_k__BackingField, float_t _RootScale_k__BackingField,
                                         ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf, ::Array<::GlobalNamespace::OVRPlugin_Quatf>*> _BoneRotations_k__BackingField, bool _IsDataValid_k__BackingField,
                                         bool _IsDataHighConfidence_k__BackingField,
                                         ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f, ::Array<::GlobalNamespace::OVRPlugin_Vector3f>*> _BoneTranslations_k__BackingField,
                                         int32_t _SkeletonChangedCount_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8483 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <RootPose>k__BackingField, offset: 0x0, size: 0x1c, def value: None
  ::GlobalNamespace::OVRPlugin_Posef _RootPose_k__BackingField;

  /// @brief Field <RootScale>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  float_t _RootScale_k__BackingField;

  /// @brief Field <BoneRotations>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf, ::Array<::GlobalNamespace::OVRPlugin_Quatf>*> _BoneRotations_k__BackingField;

  /// @brief Field <IsDataValid>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool _IsDataValid_k__BackingField;

  /// @brief Field <IsDataHighConfidence>k__BackingField, offset: 0x29, size: 0x1, def value: None
  bool _IsDataHighConfidence_k__BackingField;

  /// @brief Field <BoneTranslations>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f, ::Array<::GlobalNamespace::OVRPlugin_Vector3f>*> _BoneTranslations_k__BackingField;

  /// @brief Field <SkeletonChangedCount>k__BackingField, offset: 0x38, size: 0x4, def value: None
  int32_t _SkeletonChangedCount_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSkeleton_SkeletonPoseData, _RootPose_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton_SkeletonPoseData, _RootScale_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton_SkeletonPoseData, _BoneRotations_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton_SkeletonPoseData, _IsDataValid_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton_SkeletonPoseData, _IsDataHighConfidence_k__BackingField) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton_SkeletonPoseData, _BoneTranslations_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton_SkeletonPoseData, _SkeletonChangedCount_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSkeleton_SkeletonPoseData, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSkeleton/SkeletonType
struct CORDL_TYPE OVRSkeleton_SkeletonType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRSkeleton_SkeletonType_Unwrapped
  enum struct __OVRSkeleton_SkeletonType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_HandLeft = static_cast<int32_t>(0x0),
    __E_HandRight = static_cast<int32_t>(0x1),
    __E_Body = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRSkeleton_SkeletonType_Unwrapped() const noexcept {
    return static_cast<__OVRSkeleton_SkeletonType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSkeleton_SkeletonType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRSkeleton_SkeletonType(int32_t value__) noexcept;

  /// @brief Field Body value: I32(2)
  static ::GlobalNamespace::OVRSkeleton_SkeletonType const Body;

  /// @brief Field HandLeft value: I32(0)
  static ::GlobalNamespace::OVRSkeleton_SkeletonType const HandLeft;

  /// @brief Field HandRight value: I32(1)
  static ::GlobalNamespace::OVRSkeleton_SkeletonType const HandRight;

  /// @brief Field None value: I32(-1)
  static ::GlobalNamespace::OVRSkeleton_SkeletonType const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8484 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSkeleton_SkeletonType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSkeleton_SkeletonType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSkeleton/BoneId
struct CORDL_TYPE OVRSkeleton_BoneId {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRSkeleton_BoneId_Unwrapped
  enum struct __OVRSkeleton_BoneId_Unwrapped : int32_t {
    __E_Invalid = static_cast<int32_t>(0xffffffff),
    __E_Hand_Start = static_cast<int32_t>(0x0),
    __E_Hand_WristRoot = static_cast<int32_t>(0x0),
    __E_Hand_ForearmStub = static_cast<int32_t>(0x1),
    __E_Hand_Thumb0 = static_cast<int32_t>(0x2),
    __E_Hand_Thumb1 = static_cast<int32_t>(0x3),
    __E_Hand_Thumb2 = static_cast<int32_t>(0x4),
    __E_Hand_Thumb3 = static_cast<int32_t>(0x5),
    __E_Hand_Index1 = static_cast<int32_t>(0x6),
    __E_Hand_Index2 = static_cast<int32_t>(0x7),
    __E_Hand_Index3 = static_cast<int32_t>(0x8),
    __E_Hand_Middle1 = static_cast<int32_t>(0x9),
    __E_Hand_Middle2 = static_cast<int32_t>(0xa),
    __E_Hand_Middle3 = static_cast<int32_t>(0xb),
    __E_Hand_Ring1 = static_cast<int32_t>(0xc),
    __E_Hand_Ring2 = static_cast<int32_t>(0xd),
    __E_Hand_Ring3 = static_cast<int32_t>(0xe),
    __E_Hand_Pinky0 = static_cast<int32_t>(0xf),
    __E_Hand_Pinky1 = static_cast<int32_t>(0x10),
    __E_Hand_Pinky2 = static_cast<int32_t>(0x11),
    __E_Hand_Pinky3 = static_cast<int32_t>(0x12),
    __E_Hand_MaxSkinnable = static_cast<int32_t>(0x13),
    __E_Hand_ThumbTip = static_cast<int32_t>(0x13),
    __E_Hand_IndexTip = static_cast<int32_t>(0x14),
    __E_Hand_MiddleTip = static_cast<int32_t>(0x15),
    __E_Hand_RingTip = static_cast<int32_t>(0x16),
    __E_Hand_PinkyTip = static_cast<int32_t>(0x17),
    __E_Hand_End = static_cast<int32_t>(0x18),
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
    __E_Max = static_cast<int32_t>(0x46),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRSkeleton_BoneId_Unwrapped() const noexcept {
    return static_cast<__OVRSkeleton_BoneId_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSkeleton_BoneId();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRSkeleton_BoneId(int32_t value__) noexcept;

  /// @brief Field Body_Chest value: I32(5)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_Chest;

  /// @brief Field Body_End value: I32(70)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_End;

  /// @brief Field Body_Head value: I32(7)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_Head;

  /// @brief Field Body_Hips value: I32(1)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_Hips;

  /// @brief Field Body_LeftArmLower value: I32(11)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftArmLower;

  /// @brief Field Body_LeftArmUpper value: I32(10)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftArmUpper;

  /// @brief Field Body_LeftHandIndexDistal value: I32(27)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandIndexDistal;

  /// @brief Field Body_LeftHandIndexIntermediate value: I32(26)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandIndexIntermediate;

  /// @brief Field Body_LeftHandIndexMetacarpal value: I32(24)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandIndexMetacarpal;

  /// @brief Field Body_LeftHandIndexProximal value: I32(25)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandIndexProximal;

  /// @brief Field Body_LeftHandIndexTip value: I32(28)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandIndexTip;

  /// @brief Field Body_LeftHandLittleDistal value: I32(42)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandLittleDistal;

  /// @brief Field Body_LeftHandLittleIntermediate value: I32(41)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandLittleIntermediate;

  /// @brief Field Body_LeftHandLittleMetacarpal value: I32(39)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandLittleMetacarpal;

  /// @brief Field Body_LeftHandLittleProximal value: I32(40)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandLittleProximal;

  /// @brief Field Body_LeftHandLittleTip value: I32(43)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandLittleTip;

  /// @brief Field Body_LeftHandMiddleDistal value: I32(32)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandMiddleDistal;

  /// @brief Field Body_LeftHandMiddleIntermediate value: I32(31)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandMiddleIntermediate;

  /// @brief Field Body_LeftHandMiddleMetacarpal value: I32(29)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandMiddleMetacarpal;

  /// @brief Field Body_LeftHandMiddleProximal value: I32(30)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandMiddleProximal;

  /// @brief Field Body_LeftHandMiddleTip value: I32(33)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandMiddleTip;

  /// @brief Field Body_LeftHandPalm value: I32(18)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandPalm;

  /// @brief Field Body_LeftHandRingDistal value: I32(37)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandRingDistal;

  /// @brief Field Body_LeftHandRingIntermediate value: I32(36)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandRingIntermediate;

  /// @brief Field Body_LeftHandRingMetacarpal value: I32(34)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandRingMetacarpal;

  /// @brief Field Body_LeftHandRingProximal value: I32(35)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandRingProximal;

  /// @brief Field Body_LeftHandRingTip value: I32(38)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandRingTip;

  /// @brief Field Body_LeftHandThumbDistal value: I32(22)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandThumbDistal;

  /// @brief Field Body_LeftHandThumbMetacarpal value: I32(20)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandThumbMetacarpal;

  /// @brief Field Body_LeftHandThumbProximal value: I32(21)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandThumbProximal;

  /// @brief Field Body_LeftHandThumbTip value: I32(23)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandThumbTip;

  /// @brief Field Body_LeftHandWrist value: I32(19)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandWrist;

  /// @brief Field Body_LeftHandWristTwist value: I32(12)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandWristTwist;

  /// @brief Field Body_LeftScapula value: I32(9)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftScapula;

  /// @brief Field Body_LeftShoulder value: I32(8)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftShoulder;

  /// @brief Field Body_Neck value: I32(6)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_Neck;

  /// @brief Field Body_RightArmLower value: I32(16)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightArmLower;

  /// @brief Field Body_RightArmUpper value: I32(15)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightArmUpper;

  /// @brief Field Body_RightHandIndexDistal value: I32(53)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandIndexDistal;

  /// @brief Field Body_RightHandIndexIntermediate value: I32(52)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandIndexIntermediate;

  /// @brief Field Body_RightHandIndexMetacarpal value: I32(50)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandIndexMetacarpal;

  /// @brief Field Body_RightHandIndexProximal value: I32(51)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandIndexProximal;

  /// @brief Field Body_RightHandIndexTip value: I32(54)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandIndexTip;

  /// @brief Field Body_RightHandLittleDistal value: I32(68)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandLittleDistal;

  /// @brief Field Body_RightHandLittleIntermediate value: I32(67)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandLittleIntermediate;

  /// @brief Field Body_RightHandLittleMetacarpal value: I32(65)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandLittleMetacarpal;

  /// @brief Field Body_RightHandLittleProximal value: I32(66)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandLittleProximal;

  /// @brief Field Body_RightHandLittleTip value: I32(69)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandLittleTip;

  /// @brief Field Body_RightHandMiddleDistal value: I32(58)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandMiddleDistal;

  /// @brief Field Body_RightHandMiddleIntermediate value: I32(57)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandMiddleIntermediate;

  /// @brief Field Body_RightHandMiddleMetacarpal value: I32(55)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandMiddleMetacarpal;

  /// @brief Field Body_RightHandMiddleProximal value: I32(56)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandMiddleProximal;

  /// @brief Field Body_RightHandMiddleTip value: I32(59)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandMiddleTip;

  /// @brief Field Body_RightHandPalm value: I32(44)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandPalm;

  /// @brief Field Body_RightHandRingDistal value: I32(63)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandRingDistal;

  /// @brief Field Body_RightHandRingIntermediate value: I32(62)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandRingIntermediate;

  /// @brief Field Body_RightHandRingMetacarpal value: I32(60)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandRingMetacarpal;

  /// @brief Field Body_RightHandRingProximal value: I32(61)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandRingProximal;

  /// @brief Field Body_RightHandRingTip value: I32(64)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandRingTip;

  /// @brief Field Body_RightHandThumbDistal value: I32(48)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandThumbDistal;

  /// @brief Field Body_RightHandThumbMetacarpal value: I32(46)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandThumbMetacarpal;

  /// @brief Field Body_RightHandThumbProximal value: I32(47)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandThumbProximal;

  /// @brief Field Body_RightHandThumbTip value: I32(49)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandThumbTip;

  /// @brief Field Body_RightHandWrist value: I32(45)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandWrist;

  /// @brief Field Body_RightHandWristTwist value: I32(17)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandWristTwist;

  /// @brief Field Body_RightScapula value: I32(14)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightScapula;

  /// @brief Field Body_RightShoulder value: I32(13)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightShoulder;

  /// @brief Field Body_Root value: I32(0)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_Root;

  /// @brief Field Body_SpineLower value: I32(2)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_SpineLower;

  /// @brief Field Body_SpineMiddle value: I32(3)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_SpineMiddle;

  /// @brief Field Body_SpineUpper value: I32(4)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_SpineUpper;

  /// @brief Field Body_Start value: I32(0)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Body_Start;

  /// @brief Field Hand_End value: I32(24)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_End;

  /// @brief Field Hand_ForearmStub value: I32(1)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_ForearmStub;

  /// @brief Field Hand_Index1 value: I32(6)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Index1;

  /// @brief Field Hand_Index2 value: I32(7)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Index2;

  /// @brief Field Hand_Index3 value: I32(8)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Index3;

  /// @brief Field Hand_IndexTip value: I32(20)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_IndexTip;

  /// @brief Field Hand_MaxSkinnable value: I32(19)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_MaxSkinnable;

  /// @brief Field Hand_Middle1 value: I32(9)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Middle1;

  /// @brief Field Hand_Middle2 value: I32(10)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Middle2;

  /// @brief Field Hand_Middle3 value: I32(11)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Middle3;

  /// @brief Field Hand_MiddleTip value: I32(21)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_MiddleTip;

  /// @brief Field Hand_Pinky0 value: I32(15)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Pinky0;

  /// @brief Field Hand_Pinky1 value: I32(16)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Pinky1;

  /// @brief Field Hand_Pinky2 value: I32(17)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Pinky2;

  /// @brief Field Hand_Pinky3 value: I32(18)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Pinky3;

  /// @brief Field Hand_PinkyTip value: I32(23)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_PinkyTip;

  /// @brief Field Hand_Ring1 value: I32(12)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Ring1;

  /// @brief Field Hand_Ring2 value: I32(13)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Ring2;

  /// @brief Field Hand_Ring3 value: I32(14)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Ring3;

  /// @brief Field Hand_RingTip value: I32(22)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_RingTip;

  /// @brief Field Hand_Start value: I32(0)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Start;

  /// @brief Field Hand_Thumb0 value: I32(2)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Thumb0;

  /// @brief Field Hand_Thumb1 value: I32(3)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Thumb1;

  /// @brief Field Hand_Thumb2 value: I32(4)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Thumb2;

  /// @brief Field Hand_Thumb3 value: I32(5)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Thumb3;

  /// @brief Field Hand_ThumbTip value: I32(19)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_ThumbTip;

  /// @brief Field Hand_WristRoot value: I32(0)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_WristRoot;

  /// @brief Field Invalid value: I32(-1)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Invalid;

  /// @brief Field Max value: I32(70)
  static ::GlobalNamespace::OVRSkeleton_BoneId const Max;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8485 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSkeleton_BoneId, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSkeleton_BoneId, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPlugin::Skeleton2, OVRSkeleton::SkeletonType, UnityEngine.MonoBehaviour, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSkeleton
class CORDL_TYPE OVRSkeleton : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using BoneId = ::GlobalNamespace::OVRSkeleton_BoneId;

  using IOVRSkeletonDataProvider = ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider;

  using SkeletonPoseData = ::GlobalNamespace::OVRSkeleton_SkeletonPoseData;

  using SkeletonType = ::GlobalNamespace::OVRSkeleton_SkeletonType;

  __declspec(property(get = get_BindPoses, put = set_BindPoses)) ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* BindPoses;

  __declspec(property(get = get_Bones, put = set_Bones)) ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* Bones;

  __declspec(property(get = get_Capsules, put = set_Capsules)) ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* Capsules;

  __declspec(property(get = get_IsDataHighConfidence, put = set_IsDataHighConfidence)) bool IsDataHighConfidence;

  __declspec(property(get = get_IsDataValid, put = set_IsDataValid)) bool IsDataValid;

  __declspec(property(get = get_IsInitialized, put = set_IsInitialized)) bool IsInitialized;

  __declspec(property(get = get_SkeletonChangedCount, put = set_SkeletonChangedCount)) int32_t SkeletonChangedCount;

  /// @brief Field <BindPoses>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__BindPoses_k__BackingField,
                      put = __cordl_internal_set__BindPoses_k__BackingField)) ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* _BindPoses_k__BackingField;

  /// @brief Field <Bones>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__Bones_k__BackingField,
                      put = __cordl_internal_set__Bones_k__BackingField)) ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* _Bones_k__BackingField;

  /// @brief Field <Capsules>k__BackingField, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__Capsules_k__BackingField,
                      put = __cordl_internal_set__Capsules_k__BackingField)) ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* _Capsules_k__BackingField;

  /// @brief Field <IsDataHighConfidence>k__BackingField, offset 0x9a, size 0x1
  __declspec(property(get = __cordl_internal_get__IsDataHighConfidence_k__BackingField, put = __cordl_internal_set__IsDataHighConfidence_k__BackingField)) bool _IsDataHighConfidence_k__BackingField;

  /// @brief Field <IsDataValid>k__BackingField, offset 0x99, size 0x1
  __declspec(property(get = __cordl_internal_get__IsDataValid_k__BackingField, put = __cordl_internal_set__IsDataValid_k__BackingField)) bool _IsDataValid_k__BackingField;

  /// @brief Field <IsInitialized>k__BackingField, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get__IsInitialized_k__BackingField, put = __cordl_internal_set__IsInitialized_k__BackingField)) bool _IsInitialized_k__BackingField;

  /// @brief Field <SkeletonChangedCount>k__BackingField, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get__SkeletonChangedCount_k__BackingField,
                      put = __cordl_internal_set__SkeletonChangedCount_k__BackingField)) int32_t _SkeletonChangedCount_k__BackingField;

  /// @brief Field _applyBoneTranslations, offset 0x33, size 0x1
  __declspec(property(get = __cordl_internal_get__applyBoneTranslations, put = __cordl_internal_set__applyBoneTranslations)) bool _applyBoneTranslations;

  /// @brief Field _bindPoses, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__bindPoses, put = __cordl_internal_set__bindPoses)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* _bindPoses;

  /// @brief Field _bindPosesGO, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__bindPosesGO, put = __cordl_internal_set__bindPosesGO)) ::UnityW<::UnityEngine::GameObject> _bindPosesGO;

  /// @brief Field _bones, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__bones, put = __cordl_internal_set__bones)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* _bones;

  /// @brief Field _bonesGO, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__bonesGO, put = __cordl_internal_set__bonesGO)) ::UnityW<::UnityEngine::GameObject> _bonesGO;

  /// @brief Field _capsules, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__capsules, put = __cordl_internal_set__capsules)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>* _capsules;

  /// @brief Field _capsulesGO, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__capsulesGO, put = __cordl_internal_set__capsulesGO)) ::UnityW<::UnityEngine::GameObject> _capsulesGO;

  /// @brief Field _dataProvider, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__dataProvider, put = __cordl_internal_set__dataProvider)) ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* _dataProvider;

  /// @brief Field _enablePhysicsCapsules, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get__enablePhysicsCapsules, put = __cordl_internal_set__enablePhysicsCapsules)) bool _enablePhysicsCapsules;

  /// @brief Field _skeleton, offset 0x68, size 0x20
  __declspec(property(get = __cordl_internal_get__skeleton, put = __cordl_internal_set__skeleton)) ::GlobalNamespace::OVRPlugin_Skeleton2 _skeleton;

  /// @brief Field _skeletonType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__skeletonType, put = __cordl_internal_set__skeletonType)) ::GlobalNamespace::OVRSkeleton_SkeletonType _skeletonType;

  /// @brief Field _updateRootPose, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__updateRootPose, put = __cordl_internal_set__updateRootPose)) bool _updateRootPose;

  /// @brief Field _updateRootScale, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get__updateRootScale, put = __cordl_internal_set__updateRootScale)) bool _updateRootScale;

  /// @brief Field wristFixupRotation, offset 0x88, size 0x10
  __declspec(property(get = __cordl_internal_get_wristFixupRotation, put = __cordl_internal_set_wristFixupRotation)) ::UnityEngine::Quaternion wristFixupRotation;

  /// @brief Method Awake, addr 0x40434fc, size 0x210, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method BoneLabelFromBoneId, addr 0x4044de0, size 0x51c, virtual false, abstract: false, final false
  static inline ::StringW BoneLabelFromBoneId(::GlobalNamespace::OVRSkeleton_SkeletonType skeletonType, ::GlobalNamespace::OVRSkeleton_BoneId boneId);

  /// @brief Method FixedUpdate, addr 0x404571c, size 0x2a4, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method GetBoneTransform, addr 0x4044810, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetBoneTransform(::GlobalNamespace::OVRSkeleton_BoneId boneId);

  /// @brief Method GetCurrentEndBoneId, addr 0x40459d0, size 0x24, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRSkeleton_BoneId GetCurrentEndBoneId();

  /// @brief Method GetCurrentMaxSkinnableBoneId, addr 0x40459f4, size 0x24, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRSkeleton_BoneId GetCurrentMaxSkinnableBoneId();

  /// @brief Method GetCurrentNumBones, addr 0x4045a18, size 0x24, virtual false, abstract: false, final false
  inline int32_t GetCurrentNumBones();

  /// @brief Method GetCurrentNumSkinnableBones, addr 0x4045a3c, size 0x24, virtual false, abstract: false, final false
  inline int32_t GetCurrentNumSkinnableBones();

  /// @brief Method GetCurrentStartBoneId, addr 0x40459c0, size 0x10, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRSkeleton_BoneId GetCurrentStartBoneId();

  /// @brief Method GetSkeletonType, addr 0x4043470, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRSkeleton_SkeletonType GetSkeletonType();

  /// @brief Method Initialize, addr 0x4043994, size 0x94, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method InitializeBindPose, addr 0x4043a34, size 0x500, virtual false, abstract: false, final false
  inline void InitializeBindPose();

  /// @brief Method InitializeBones, addr 0x4044818, size 0x5c0, virtual true, abstract: false, final false
  inline void InitializeBones();

  /// @brief Method InitializeCapsules, addr 0x4043f34, size 0x8dc, virtual false, abstract: false, final false
  inline void InitializeCapsules();

  /// @brief Method IsBodySkeleton, addr 0x40452fc, size 0xc, virtual false, abstract: false, final false
  static inline bool IsBodySkeleton(::GlobalNamespace::OVRSkeleton_SkeletonType type);

  /// @brief Method IsHandSkeleton, addr 0x4043a28, size 0xc, virtual false, abstract: false, final false
  static inline bool IsHandSkeleton(::GlobalNamespace::OVRSkeleton_SkeletonType type);

  /// @brief Method IsValidBone, addr 0x4043480, size 0x6c, virtual false, abstract: false, final false
  inline bool IsValidBone(::GlobalNamespace::OVRSkeleton_BoneId bone);

  static inline ::GlobalNamespace::OVRSkeleton* New_ctor();

  /// @brief Method SearchSkeletonDataProvider, addr 0x404370c, size 0x124, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* SearchSkeletonDataProvider();

  /// @brief Method SetSkeletonType, addr 0x4043478, size 0x8, virtual true, abstract: false, final false
  inline void SetSkeletonType(::GlobalNamespace::OVRSkeleton_SkeletonType type);

  /// @brief Method ShouldInitialize, addr 0x40438d0, size 0xc4, virtual false, abstract: false, final false
  inline bool ShouldInitialize();

  /// @brief Method Start, addr 0x4043830, size 0xa0, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x4045310, size 0x4, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateSkeleton, addr 0x4045314, size 0x408, virtual false, abstract: false, final false
  inline void UpdateSkeleton();

  constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* const& __cordl_internal_get__BindPoses_k__BackingField() const;

  constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*& __cordl_internal_get__BindPoses_k__BackingField();

  constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* const& __cordl_internal_get__Bones_k__BackingField() const;

  constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*& __cordl_internal_get__Bones_k__BackingField();

  constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* const& __cordl_internal_get__Capsules_k__BackingField() const;

  constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*& __cordl_internal_get__Capsules_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsDataHighConfidence_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsDataHighConfidence_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsDataValid_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsDataValid_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsInitialized_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsInitialized_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__SkeletonChangedCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__SkeletonChangedCount_k__BackingField();

  constexpr bool const& __cordl_internal_get__applyBoneTranslations() const;

  constexpr bool& __cordl_internal_get__applyBoneTranslations();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* const& __cordl_internal_get__bindPoses() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*& __cordl_internal_get__bindPoses();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__bindPosesGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__bindPosesGO();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* const& __cordl_internal_get__bones() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*& __cordl_internal_get__bones();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__bonesGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__bonesGO();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>* const& __cordl_internal_get__capsules() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>*& __cordl_internal_get__capsules();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__capsulesGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__capsulesGO();

  constexpr ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* const& __cordl_internal_get__dataProvider() const;

  constexpr ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*& __cordl_internal_get__dataProvider();

  constexpr bool const& __cordl_internal_get__enablePhysicsCapsules() const;

  constexpr bool& __cordl_internal_get__enablePhysicsCapsules();

  constexpr ::GlobalNamespace::OVRPlugin_Skeleton2 const& __cordl_internal_get__skeleton() const;

  constexpr ::GlobalNamespace::OVRPlugin_Skeleton2& __cordl_internal_get__skeleton();

  constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType const& __cordl_internal_get__skeletonType() const;

  constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType& __cordl_internal_get__skeletonType();

  constexpr bool const& __cordl_internal_get__updateRootPose() const;

  constexpr bool& __cordl_internal_get__updateRootPose();

  constexpr bool const& __cordl_internal_get__updateRootScale() const;

  constexpr bool& __cordl_internal_get__updateRootScale();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_wristFixupRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_wristFixupRotation();

  constexpr void __cordl_internal_set__BindPoses_k__BackingField(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* value);

  constexpr void __cordl_internal_set__Bones_k__BackingField(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* value);

  constexpr void __cordl_internal_set__Capsules_k__BackingField(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* value);

  constexpr void __cordl_internal_set__IsDataHighConfidence_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsDataValid_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsInitialized_k__BackingField(bool value);

  constexpr void __cordl_internal_set__SkeletonChangedCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__applyBoneTranslations(bool value);

  constexpr void __cordl_internal_set__bindPoses(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* value);

  constexpr void __cordl_internal_set__bindPosesGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__bones(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* value);

  constexpr void __cordl_internal_set__bonesGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__capsules(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>* value);

  constexpr void __cordl_internal_set__capsulesGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__dataProvider(::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* value);

  constexpr void __cordl_internal_set__enablePhysicsCapsules(bool value);

  constexpr void __cordl_internal_set__skeleton(::GlobalNamespace::OVRPlugin_Skeleton2 value);

  constexpr void __cordl_internal_set__skeletonType(::GlobalNamespace::OVRSkeleton_SkeletonType value);

  constexpr void __cordl_internal_set__updateRootPose(bool value);

  constexpr void __cordl_internal_set__updateRootScale(bool value);

  constexpr void __cordl_internal_set_wristFixupRotation(::UnityEngine::Quaternion value);

  /// @brief Method .ctor, addr 0x4045a60, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BindPoses, addr 0x4043450, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* get_BindPoses();

  /// @brief Method get_Bones, addr 0x4043440, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* get_Bones();

  /// @brief Method get_Capsules, addr 0x4043460, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* get_Capsules();

  /// @brief Method get_IsDataHighConfidence, addr 0x404342c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDataHighConfidence();

  /// @brief Method get_IsDataValid, addr 0x4043418, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDataValid();

  /// @brief Method get_IsInitialized, addr 0x4043404, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsInitialized();

  /// @brief Method get_SkeletonChangedCount, addr 0x40434ec, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_SkeletonChangedCount();

  /// @brief Method set_BindPoses, addr 0x4043458, size 0x8, virtual false, abstract: false, final false
  inline void set_BindPoses(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* value);

  /// @brief Method set_Bones, addr 0x4043448, size 0x8, virtual false, abstract: false, final false
  inline void set_Bones(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* value);

  /// @brief Method set_Capsules, addr 0x4043468, size 0x8, virtual false, abstract: false, final false
  inline void set_Capsules(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* value);

  /// @brief Method set_IsDataHighConfidence, addr 0x4043434, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDataHighConfidence(bool value);

  /// @brief Method set_IsDataValid, addr 0x4043420, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDataValid(bool value);

  /// @brief Method set_IsInitialized, addr 0x404340c, size 0xc, virtual false, abstract: false, final false
  inline void set_IsInitialized(bool value);

  /// @brief Method set_SkeletonChangedCount, addr 0x40434f4, size 0x8, virtual false, abstract: false, final false
  inline void set_SkeletonChangedCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSkeleton();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSkeleton", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSkeleton(OVRSkeleton&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSkeleton", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSkeleton(OVRSkeleton const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8486 };

  /// @brief Field _skeletonType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::OVRSkeleton_SkeletonType ____skeletonType;

  /// @brief Field _dataProvider, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* ____dataProvider;

  /// @brief Field _updateRootPose, offset: 0x30, size: 0x1, def value: None
  bool ____updateRootPose;

  /// @brief Field _updateRootScale, offset: 0x31, size: 0x1, def value: None
  bool ____updateRootScale;

  /// @brief Field _enablePhysicsCapsules, offset: 0x32, size: 0x1, def value: None
  bool ____enablePhysicsCapsules;

  /// @brief Field _applyBoneTranslations, offset: 0x33, size: 0x1, def value: None
  bool ____applyBoneTranslations;

  /// @brief Field _bonesGO, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____bonesGO;

  /// @brief Field _bindPosesGO, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____bindPosesGO;

  /// @brief Field _capsulesGO, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____capsulesGO;

  /// @brief Field _bones, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* ____bones;

  /// @brief Field _bindPoses, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* ____bindPoses;

  /// @brief Field _capsules, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>* ____capsules;

  /// @brief Field _skeleton, offset: 0x68, size: 0x20, def value: None
  ::GlobalNamespace::OVRPlugin_Skeleton2 ____skeleton;

  /// @brief Field wristFixupRotation, offset: 0x88, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___wristFixupRotation;

  /// @brief Field <IsInitialized>k__BackingField, offset: 0x98, size: 0x1, def value: None
  bool ____IsInitialized_k__BackingField;

  /// @brief Field <IsDataValid>k__BackingField, offset: 0x99, size: 0x1, def value: None
  bool ____IsDataValid_k__BackingField;

  /// @brief Field <IsDataHighConfidence>k__BackingField, offset: 0x9a, size: 0x1, def value: None
  bool ____IsDataHighConfidence_k__BackingField;

  /// @brief Field <Bones>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* ____Bones_k__BackingField;

  /// @brief Field <BindPoses>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* ____BindPoses_k__BackingField;

  /// @brief Field <Capsules>k__BackingField, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* ____Capsules_k__BackingField;

  /// @brief Field <SkeletonChangedCount>k__BackingField, offset: 0xb8, size: 0x4, def value: None
  int32_t ____SkeletonChangedCount_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____skeletonType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____dataProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____updateRootPose) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____updateRootScale) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____enablePhysicsCapsules) == 0x32, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____applyBoneTranslations) == 0x33, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____bonesGO) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____bindPosesGO) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____capsulesGO) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____bones) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____bindPoses) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____capsules) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____skeleton) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ___wristFixupRotation) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____IsInitialized_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____IsDataValid_k__BackingField) == 0x99, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____IsDataHighConfidence_k__BackingField) == 0x9a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____Bones_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____BindPoses_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____Capsules_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____SkeletonChangedCount_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSkeleton, 0xc0>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeleton_BoneId, "", "OVRSkeleton/BoneId");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeleton_SkeletonType, "", "OVRSkeleton/SkeletonType");
NEED_NO_BOX(::GlobalNamespace::OVRSkeleton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeleton*, "", "OVRSkeleton");
NEED_NO_BOX(::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*, "", "OVRSkeleton/IOVRSkeletonDataProvider");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeleton_SkeletonPoseData, "", "OVRSkeleton/SkeletonPoseData");
