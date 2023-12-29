#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSkeleton)
namespace GlobalNamespace {
struct __OVRSkeleton__SkeletonPoseData;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace GlobalNamespace {
struct __OVRSkeleton__BoneId;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
struct __OVRSkeleton__SkeletonType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class OVRBone;
}
namespace GlobalNamespace {
class __OVRSkeleton__IOVRSkeletonDataProvider;
}
namespace GlobalNamespace {
class OVRBoneCapsule;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector3f;
}
namespace GlobalNamespace {
struct __OVRPlugin__Quatf;
}
namespace GlobalNamespace {
struct __OVRPlugin__Posef;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRSkeleton__BoneId;
}
namespace GlobalNamespace {
struct __OVRSkeleton__SkeletonType;
}
namespace GlobalNamespace {
class OVRSkeleton;
}
namespace GlobalNamespace {
class __OVRSkeleton__IOVRSkeletonDataProvider;
}
namespace GlobalNamespace {
struct __OVRSkeleton__SkeletonPoseData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRSkeleton__BoneId);
MARK_VAL_T(::GlobalNamespace::__OVRSkeleton__SkeletonType);
MARK_REF_PTR_T(::GlobalNamespace::OVRSkeleton);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSkeleton__IOVRSkeletonDataProvider);
MARK_VAL_T(::GlobalNamespace::__OVRSkeleton__SkeletonPoseData);
// Type: ::IOVRSkeletonDataProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8941))
// CS Name: ::OVRSkeleton::IOVRSkeletonDataProvider*
class CORDL_TYPE __OVRSkeleton__IOVRSkeletonDataProvider {
public:
  // Declarations
  __declspec(property(get = get_enabled)) bool enabled;

  /// @brief Method GetSkeletonType addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::__OVRSkeleton__SkeletonType GetSkeletonType();

  /// @brief Method GetSkeletonPoseData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::__OVRSkeleton__SkeletonPoseData GetSkeletonPoseData();

  /// @brief Method get_enabled addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_enabled();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSkeleton__IOVRSkeletonDataProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSkeleton__IOVRSkeletonDataProvider(__OVRSkeleton__IOVRSkeletonDataProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSkeleton__IOVRSkeletonDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSkeleton__IOVRSkeletonDataProvider(__OVRSkeleton__IOVRSkeletonDataProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::SkeletonPoseData
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8942))
// CS Name: ::OVRSkeleton::SkeletonPoseData
struct CORDL_TYPE __OVRSkeleton__SkeletonPoseData {
public:
  // Declarations
  __declspec(property(get = get_RootPose, put = set_RootPose))::GlobalNamespace::__OVRPlugin__Posef RootPose;

  __declspec(property(get = get_RootScale, put = set_RootScale)) float_t RootScale;

  __declspec(property(get = get_BoneRotations, put = set_BoneRotations))::ArrayW<::GlobalNamespace::__OVRPlugin__Quatf, ::Array<::GlobalNamespace::__OVRPlugin__Quatf>*> BoneRotations;

  __declspec(property(get = get_IsDataValid, put = set_IsDataValid)) bool IsDataValid;

  __declspec(property(get = get_IsDataHighConfidence, put = set_IsDataHighConfidence)) bool IsDataHighConfidence;

  __declspec(property(get = get_BoneTranslations, put = set_BoneTranslations))::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f, ::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*> BoneTranslations;

  __declspec(property(get = get_SkeletonChangedCount, put = set_SkeletonChangedCount)) int32_t SkeletonChangedCount;

  /// @brief Method get_RootPose addr 0x2649f00 size 0x14 virtual false final false
  inline ::GlobalNamespace::__OVRPlugin__Posef get_RootPose();

  /// @brief Method set_RootPose addr 0x2649f14 size 0x1c virtual false final false
  inline void set_RootPose(::GlobalNamespace::__OVRPlugin__Posef value);

  /// @brief Method get_RootScale addr 0x2649f30 size 0x8 virtual false final false
  inline float_t get_RootScale();

  /// @brief Method set_RootScale addr 0x2649f38 size 0x8 virtual false final false
  inline void set_RootScale(float_t value);

  /// @brief Method get_BoneRotations addr 0x2649f40 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__OVRPlugin__Quatf, ::Array<::GlobalNamespace::__OVRPlugin__Quatf>*> get_BoneRotations();

  /// @brief Method set_BoneRotations addr 0x2649f48 size 0x8 virtual false final false
  inline void set_BoneRotations(::ArrayW<::GlobalNamespace::__OVRPlugin__Quatf, ::Array<::GlobalNamespace::__OVRPlugin__Quatf>*> value);

  /// @brief Method get_IsDataValid addr 0x2649f50 size 0x8 virtual false final false
  inline bool get_IsDataValid();

  /// @brief Method set_IsDataValid addr 0x2649f58 size 0xc virtual false final false
  inline void set_IsDataValid(bool value);

  /// @brief Method get_IsDataHighConfidence addr 0x2649f64 size 0x8 virtual false final false
  inline bool get_IsDataHighConfidence();

  /// @brief Method set_IsDataHighConfidence addr 0x2649f6c size 0xc virtual false final false
  inline void set_IsDataHighConfidence(bool value);

  /// @brief Method get_BoneTranslations addr 0x2649f78 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f, ::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*> get_BoneTranslations();

  /// @brief Method set_BoneTranslations addr 0x2649f80 size 0x8 virtual false final false
  inline void set_BoneTranslations(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f, ::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*> value);

  /// @brief Method get_SkeletonChangedCount addr 0x2649f88 size 0x8 virtual false final false
  inline int32_t get_SkeletonChangedCount();

  /// @brief Method set_SkeletonChangedCount addr 0x2649f90 size 0x8 virtual false final false
  inline void set_SkeletonChangedCount(int32_t value);

  // Ctor Parameters [CppParam { name: "_RootPose_k__BackingField", ty: "::GlobalNamespace::__OVRPlugin__Posef", modifiers: "", def_value: None }, CppParam { name: "_RootScale_k__BackingField", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "_BoneRotations_k__BackingField", ty:
  // "::ArrayW<::GlobalNamespace::__OVRPlugin__Quatf,::Array<::GlobalNamespace::__OVRPlugin__Quatf>*>", modifiers: "", def_value: None }, CppParam { name: "_IsDataValid_k__BackingField", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "_IsDataHighConfidence_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_BoneTranslations_k__BackingField", ty:
  // "::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f,::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*>", modifiers: "", def_value: None }, CppParam { name:
  // "_SkeletonChangedCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRSkeleton__SkeletonPoseData(::GlobalNamespace::__OVRPlugin__Posef _RootPose_k__BackingField, float_t _RootScale_k__BackingField,
                                            ::ArrayW<::GlobalNamespace::__OVRPlugin__Quatf, ::Array<::GlobalNamespace::__OVRPlugin__Quatf>*> _BoneRotations_k__BackingField,
                                            bool _IsDataValid_k__BackingField, bool _IsDataHighConfidence_k__BackingField,
                                            ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f, ::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*> _BoneTranslations_k__BackingField,
                                            int32_t _SkeletonChangedCount_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSkeleton__SkeletonPoseData();

  /// @brief Field <RootPose>k__BackingField, offset: 0x0, size: 0x1c, def value: None
  ::GlobalNamespace::__OVRPlugin__Posef _RootPose_k__BackingField;

  /// @brief Field <RootScale>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  float_t _RootScale_k__BackingField;

  /// @brief Field <BoneRotations>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRPlugin__Quatf, ::Array<::GlobalNamespace::__OVRPlugin__Quatf>*> _BoneRotations_k__BackingField;

  /// @brief Field <IsDataValid>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool _IsDataValid_k__BackingField;

  /// @brief Field <IsDataHighConfidence>k__BackingField, offset: 0x29, size: 0x1, def value: None
  bool _IsDataHighConfidence_k__BackingField;

  /// @brief Field <BoneTranslations>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f, ::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*> _BoneTranslations_k__BackingField;

  /// @brief Field <SkeletonChangedCount>k__BackingField, offset: 0x38, size: 0x4, def value: None
  int32_t _SkeletonChangedCount_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSkeleton__SkeletonPoseData, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeleton__SkeletonPoseData, _RootPose_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeleton__SkeletonPoseData, _RootScale_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeleton__SkeletonPoseData, _BoneRotations_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeleton__SkeletonPoseData, _IsDataValid_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeleton__SkeletonPoseData, _IsDataHighConfidence_k__BackingField) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeleton__SkeletonPoseData, _BoneTranslations_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeleton__SkeletonPoseData, _SkeletonChangedCount_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SkeletonType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8943))
// CS Name: ::OVRSkeleton::SkeletonType
struct CORDL_TYPE __OVRSkeleton__SkeletonType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRSkeleton__SkeletonType_Unwrapped
  enum struct ____OVRSkeleton__SkeletonType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_HandLeft = static_cast<int32_t>(0x0),
    __E_HandRight = static_cast<int32_t>(0x1),
    __E_Body = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRSkeleton__SkeletonType_Unwrapped() const noexcept {
    return static_cast<____OVRSkeleton__SkeletonType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRSkeleton__SkeletonType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSkeleton__SkeletonType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRSkeleton__SkeletonType const None;

  /// @brief Field HandLeft value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRSkeleton__SkeletonType const HandLeft;

  /// @brief Field HandRight value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRSkeleton__SkeletonType const HandRight;

  /// @brief Field Body value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRSkeleton__SkeletonType const Body;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSkeleton__SkeletonType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeleton__SkeletonType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BoneId
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8944))
// CS Name: ::OVRSkeleton::BoneId
struct CORDL_TYPE __OVRSkeleton__BoneId {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRSkeleton__BoneId_Unwrapped
  enum struct ____OVRSkeleton__BoneId_Unwrapped : int32_t {
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
  constexpr operator ____OVRSkeleton__BoneId_Unwrapped() const noexcept {
    return static_cast<____OVRSkeleton__BoneId_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRSkeleton__BoneId(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSkeleton__BoneId();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Invalid value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Invalid;

  /// @brief Field Hand_Start value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_Start;

  /// @brief Field Hand_WristRoot value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_WristRoot;

  /// @brief Field Hand_ForearmStub value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_ForearmStub;

  /// @brief Field Hand_Thumb0 value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_Thumb0;

  /// @brief Field Hand_Thumb1 value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_Thumb1;

  /// @brief Field Hand_Thumb2 value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_Thumb2;

  /// @brief Field Hand_Thumb3 value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_Thumb3;

  /// @brief Field Hand_Index1 value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_Index1;

  /// @brief Field Hand_Index2 value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_Index2;

  /// @brief Field Hand_Index3 value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_Index3;

  /// @brief Field Hand_Middle1 value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_Middle1;

  /// @brief Field Hand_Middle2 value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_Middle2;

  /// @brief Field Hand_Middle3 value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_Middle3;

  /// @brief Field Hand_Ring1 value: static_cast<int32_t>(0xc)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_Ring1;

  /// @brief Field Hand_Ring2 value: static_cast<int32_t>(0xd)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_Ring2;

  /// @brief Field Hand_Ring3 value: static_cast<int32_t>(0xe)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_Ring3;

  /// @brief Field Hand_Pinky0 value: static_cast<int32_t>(0xf)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_Pinky0;

  /// @brief Field Hand_Pinky1 value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_Pinky1;

  /// @brief Field Hand_Pinky2 value: static_cast<int32_t>(0x11)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_Pinky2;

  /// @brief Field Hand_Pinky3 value: static_cast<int32_t>(0x12)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_Pinky3;

  /// @brief Field Hand_MaxSkinnable value: static_cast<int32_t>(0x13)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_MaxSkinnable;

  /// @brief Field Hand_ThumbTip value: static_cast<int32_t>(0x13)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_ThumbTip;

  /// @brief Field Hand_IndexTip value: static_cast<int32_t>(0x14)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_IndexTip;

  /// @brief Field Hand_MiddleTip value: static_cast<int32_t>(0x15)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_MiddleTip;

  /// @brief Field Hand_RingTip value: static_cast<int32_t>(0x16)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_RingTip;

  /// @brief Field Hand_PinkyTip value: static_cast<int32_t>(0x17)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_PinkyTip;

  /// @brief Field Hand_End value: static_cast<int32_t>(0x18)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Hand_End;

  /// @brief Field Body_Start value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_Start;

  /// @brief Field Body_Root value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_Root;

  /// @brief Field Body_Hips value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_Hips;

  /// @brief Field Body_SpineLower value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_SpineLower;

  /// @brief Field Body_SpineMiddle value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_SpineMiddle;

  /// @brief Field Body_SpineUpper value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_SpineUpper;

  /// @brief Field Body_Chest value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_Chest;

  /// @brief Field Body_Neck value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_Neck;

  /// @brief Field Body_Head value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_Head;

  /// @brief Field Body_LeftShoulder value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftShoulder;

  /// @brief Field Body_LeftScapula value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftScapula;

  /// @brief Field Body_LeftArmUpper value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftArmUpper;

  /// @brief Field Body_LeftArmLower value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftArmLower;

  /// @brief Field Body_LeftHandWristTwist value: static_cast<int32_t>(0xc)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandWristTwist;

  /// @brief Field Body_RightShoulder value: static_cast<int32_t>(0xd)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightShoulder;

  /// @brief Field Body_RightScapula value: static_cast<int32_t>(0xe)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightScapula;

  /// @brief Field Body_RightArmUpper value: static_cast<int32_t>(0xf)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightArmUpper;

  /// @brief Field Body_RightArmLower value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightArmLower;

  /// @brief Field Body_RightHandWristTwist value: static_cast<int32_t>(0x11)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandWristTwist;

  /// @brief Field Body_LeftHandPalm value: static_cast<int32_t>(0x12)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandPalm;

  /// @brief Field Body_LeftHandWrist value: static_cast<int32_t>(0x13)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandWrist;

  /// @brief Field Body_LeftHandThumbMetacarpal value: static_cast<int32_t>(0x14)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandThumbMetacarpal;

  /// @brief Field Body_LeftHandThumbProximal value: static_cast<int32_t>(0x15)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandThumbProximal;

  /// @brief Field Body_LeftHandThumbDistal value: static_cast<int32_t>(0x16)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandThumbDistal;

  /// @brief Field Body_LeftHandThumbTip value: static_cast<int32_t>(0x17)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandThumbTip;

  /// @brief Field Body_LeftHandIndexMetacarpal value: static_cast<int32_t>(0x18)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandIndexMetacarpal;

  /// @brief Field Body_LeftHandIndexProximal value: static_cast<int32_t>(0x19)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandIndexProximal;

  /// @brief Field Body_LeftHandIndexIntermediate value: static_cast<int32_t>(0x1a)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandIndexIntermediate;

  /// @brief Field Body_LeftHandIndexDistal value: static_cast<int32_t>(0x1b)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandIndexDistal;

  /// @brief Field Body_LeftHandIndexTip value: static_cast<int32_t>(0x1c)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandIndexTip;

  /// @brief Field Body_LeftHandMiddleMetacarpal value: static_cast<int32_t>(0x1d)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandMiddleMetacarpal;

  /// @brief Field Body_LeftHandMiddleProximal value: static_cast<int32_t>(0x1e)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandMiddleProximal;

  /// @brief Field Body_LeftHandMiddleIntermediate value: static_cast<int32_t>(0x1f)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandMiddleIntermediate;

  /// @brief Field Body_LeftHandMiddleDistal value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandMiddleDistal;

  /// @brief Field Body_LeftHandMiddleTip value: static_cast<int32_t>(0x21)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandMiddleTip;

  /// @brief Field Body_LeftHandRingMetacarpal value: static_cast<int32_t>(0x22)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandRingMetacarpal;

  /// @brief Field Body_LeftHandRingProximal value: static_cast<int32_t>(0x23)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandRingProximal;

  /// @brief Field Body_LeftHandRingIntermediate value: static_cast<int32_t>(0x24)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandRingIntermediate;

  /// @brief Field Body_LeftHandRingDistal value: static_cast<int32_t>(0x25)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandRingDistal;

  /// @brief Field Body_LeftHandRingTip value: static_cast<int32_t>(0x26)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandRingTip;

  /// @brief Field Body_LeftHandLittleMetacarpal value: static_cast<int32_t>(0x27)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandLittleMetacarpal;

  /// @brief Field Body_LeftHandLittleProximal value: static_cast<int32_t>(0x28)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandLittleProximal;

  /// @brief Field Body_LeftHandLittleIntermediate value: static_cast<int32_t>(0x29)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandLittleIntermediate;

  /// @brief Field Body_LeftHandLittleDistal value: static_cast<int32_t>(0x2a)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandLittleDistal;

  /// @brief Field Body_LeftHandLittleTip value: static_cast<int32_t>(0x2b)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_LeftHandLittleTip;

  /// @brief Field Body_RightHandPalm value: static_cast<int32_t>(0x2c)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandPalm;

  /// @brief Field Body_RightHandWrist value: static_cast<int32_t>(0x2d)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandWrist;

  /// @brief Field Body_RightHandThumbMetacarpal value: static_cast<int32_t>(0x2e)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandThumbMetacarpal;

  /// @brief Field Body_RightHandThumbProximal value: static_cast<int32_t>(0x2f)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandThumbProximal;

  /// @brief Field Body_RightHandThumbDistal value: static_cast<int32_t>(0x30)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandThumbDistal;

  /// @brief Field Body_RightHandThumbTip value: static_cast<int32_t>(0x31)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandThumbTip;

  /// @brief Field Body_RightHandIndexMetacarpal value: static_cast<int32_t>(0x32)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandIndexMetacarpal;

  /// @brief Field Body_RightHandIndexProximal value: static_cast<int32_t>(0x33)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandIndexProximal;

  /// @brief Field Body_RightHandIndexIntermediate value: static_cast<int32_t>(0x34)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandIndexIntermediate;

  /// @brief Field Body_RightHandIndexDistal value: static_cast<int32_t>(0x35)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandIndexDistal;

  /// @brief Field Body_RightHandIndexTip value: static_cast<int32_t>(0x36)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandIndexTip;

  /// @brief Field Body_RightHandMiddleMetacarpal value: static_cast<int32_t>(0x37)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandMiddleMetacarpal;

  /// @brief Field Body_RightHandMiddleProximal value: static_cast<int32_t>(0x38)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandMiddleProximal;

  /// @brief Field Body_RightHandMiddleIntermediate value: static_cast<int32_t>(0x39)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandMiddleIntermediate;

  /// @brief Field Body_RightHandMiddleDistal value: static_cast<int32_t>(0x3a)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandMiddleDistal;

  /// @brief Field Body_RightHandMiddleTip value: static_cast<int32_t>(0x3b)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandMiddleTip;

  /// @brief Field Body_RightHandRingMetacarpal value: static_cast<int32_t>(0x3c)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandRingMetacarpal;

  /// @brief Field Body_RightHandRingProximal value: static_cast<int32_t>(0x3d)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandRingProximal;

  /// @brief Field Body_RightHandRingIntermediate value: static_cast<int32_t>(0x3e)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandRingIntermediate;

  /// @brief Field Body_RightHandRingDistal value: static_cast<int32_t>(0x3f)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandRingDistal;

  /// @brief Field Body_RightHandRingTip value: static_cast<int32_t>(0x40)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandRingTip;

  /// @brief Field Body_RightHandLittleMetacarpal value: static_cast<int32_t>(0x41)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandLittleMetacarpal;

  /// @brief Field Body_RightHandLittleProximal value: static_cast<int32_t>(0x42)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandLittleProximal;

  /// @brief Field Body_RightHandLittleIntermediate value: static_cast<int32_t>(0x43)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandLittleIntermediate;

  /// @brief Field Body_RightHandLittleDistal value: static_cast<int32_t>(0x44)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandLittleDistal;

  /// @brief Field Body_RightHandLittleTip value: static_cast<int32_t>(0x45)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_RightHandLittleTip;

  /// @brief Field Body_End value: static_cast<int32_t>(0x46)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Body_End;

  /// @brief Field Max value: static_cast<int32_t>(0x46)
  static ::GlobalNamespace::__OVRSkeleton__BoneId const Max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSkeleton__BoneId, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeleton__BoneId, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRSkeleton
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 180, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8654)), TypeDefinitionIndex(TypeDefinitionIndex(8943)), TypeDefinitionIndex(TypeDefinitionIndex(10179)),
// TypeDefinitionIndex(TypeDefinitionIndex(10152))} Self: TypeDefinitionIndex(TypeDefinitionIndex(8945)) CS Name: ::OVRSkeleton*
class CORDL_TYPE OVRSkeleton : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using BoneId = ::GlobalNamespace::__OVRSkeleton__BoneId;

  using SkeletonType = ::GlobalNamespace::__OVRSkeleton__SkeletonType;

  using SkeletonPoseData = ::GlobalNamespace::__OVRSkeleton__SkeletonPoseData;

  using IOVRSkeletonDataProvider = ::GlobalNamespace::__OVRSkeleton__IOVRSkeletonDataProvider;

  /// @brief Field _skeletonType, offset 0x18, size 0x4
  __declspec(property(get = __get__skeletonType, put = __set__skeletonType))::GlobalNamespace::__OVRSkeleton__SkeletonType _skeletonType;

  /// @brief Field _dataProvider, offset 0x20, size 0x8
  __declspec(property(get = __get__dataProvider, put = __set__dataProvider))::GlobalNamespace::__OVRSkeleton__IOVRSkeletonDataProvider* _dataProvider;

  /// @brief Field _updateRootPose, offset 0x28, size 0x1
  __declspec(property(get = __get__updateRootPose, put = __set__updateRootPose)) bool _updateRootPose;

  /// @brief Field _updateRootScale, offset 0x29, size 0x1
  __declspec(property(get = __get__updateRootScale, put = __set__updateRootScale)) bool _updateRootScale;

  /// @brief Field _enablePhysicsCapsules, offset 0x2a, size 0x1
  __declspec(property(get = __get__enablePhysicsCapsules, put = __set__enablePhysicsCapsules)) bool _enablePhysicsCapsules;

  /// @brief Field _applyBoneTranslations, offset 0x2b, size 0x1
  __declspec(property(get = __get__applyBoneTranslations, put = __set__applyBoneTranslations)) bool _applyBoneTranslations;

  /// @brief Field _bonesGO, offset 0x30, size 0x8
  __declspec(property(get = __get__bonesGO, put = __set__bonesGO))::UnityEngine::GameObject* _bonesGO;

  /// @brief Field _bindPosesGO, offset 0x38, size 0x8
  __declspec(property(get = __get__bindPosesGO, put = __set__bindPosesGO))::UnityEngine::GameObject* _bindPosesGO;

  /// @brief Field _capsulesGO, offset 0x40, size 0x8
  __declspec(property(get = __get__capsulesGO, put = __set__capsulesGO))::UnityEngine::GameObject* _capsulesGO;

  /// @brief Field _bones, offset 0x48, size 0x8
  __declspec(property(get = __get__bones, put = __set__bones))::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* _bones;

  /// @brief Field _bindPoses, offset 0x50, size 0x8
  __declspec(property(get = __get__bindPoses, put = __set__bindPoses))::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* _bindPoses;

  /// @brief Field _capsules, offset 0x58, size 0x8
  __declspec(property(get = __get__capsules, put = __set__capsules))::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>* _capsules;

  /// @brief Field _skeleton, offset 0x60, size 0x20
  __declspec(property(get = __get__skeleton, put = __set__skeleton))::GlobalNamespace::__OVRPlugin__Skeleton2 _skeleton;

  /// @brief Field wristFixupRotation, offset 0x80, size 0x10
  __declspec(property(get = __get_wristFixupRotation, put = __set_wristFixupRotation))::UnityEngine::Quaternion wristFixupRotation;

  /// @brief Field <IsInitialized>k__BackingField, offset 0x90, size 0x1
  __declspec(property(get = __get__IsInitialized_k__BackingField, put = __set__IsInitialized_k__BackingField)) bool _IsInitialized_k__BackingField;

  /// @brief Field <IsDataValid>k__BackingField, offset 0x91, size 0x1
  __declspec(property(get = __get__IsDataValid_k__BackingField, put = __set__IsDataValid_k__BackingField)) bool _IsDataValid_k__BackingField;

  /// @brief Field <IsDataHighConfidence>k__BackingField, offset 0x92, size 0x1
  __declspec(property(get = __get__IsDataHighConfidence_k__BackingField, put = __set__IsDataHighConfidence_k__BackingField)) bool _IsDataHighConfidence_k__BackingField;

  /// @brief Field <Bones>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __get__Bones_k__BackingField, put = __set__Bones_k__BackingField))::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* _Bones_k__BackingField;

  /// @brief Field <BindPoses>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __get__BindPoses_k__BackingField, put = __set__BindPoses_k__BackingField))::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* _BindPoses_k__BackingField;

  /// @brief Field <Capsules>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __get__Capsules_k__BackingField,
                      put = __set__Capsules_k__BackingField))::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* _Capsules_k__BackingField;

  /// @brief Field <SkeletonChangedCount>k__BackingField, offset 0xb0, size 0x4
  __declspec(property(get = __get__SkeletonChangedCount_k__BackingField, put = __set__SkeletonChangedCount_k__BackingField)) int32_t _SkeletonChangedCount_k__BackingField;

  __declspec(property(get = get_IsInitialized, put = set_IsInitialized)) bool IsInitialized;

  __declspec(property(get = get_IsDataValid, put = set_IsDataValid)) bool IsDataValid;

  __declspec(property(get = get_IsDataHighConfidence, put = set_IsDataHighConfidence)) bool IsDataHighConfidence;

  __declspec(property(get = get_Bones, put = set_Bones))::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* Bones;

  __declspec(property(get = get_BindPoses, put = set_BindPoses))::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* BindPoses;

  __declspec(property(get = get_Capsules, put = set_Capsules))::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* Capsules;

  __declspec(property(get = get_SkeletonChangedCount, put = set_SkeletonChangedCount)) int32_t SkeletonChangedCount;

  constexpr ::GlobalNamespace::__OVRSkeleton__SkeletonType& __get__skeletonType();

  constexpr ::GlobalNamespace::__OVRSkeleton__SkeletonType const& __get__skeletonType() const;

  constexpr void __set__skeletonType(::GlobalNamespace::__OVRSkeleton__SkeletonType value);

  constexpr ::GlobalNamespace::__OVRSkeleton__IOVRSkeletonDataProvider*& __get__dataProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRSkeleton__IOVRSkeletonDataProvider*> const& __get__dataProvider() const;

  constexpr void __set__dataProvider(::GlobalNamespace::__OVRSkeleton__IOVRSkeletonDataProvider* value);

  constexpr bool& __get__updateRootPose();

  constexpr bool const& __get__updateRootPose() const;

  constexpr void __set__updateRootPose(bool value);

  constexpr bool& __get__updateRootScale();

  constexpr bool const& __get__updateRootScale() const;

  constexpr void __set__updateRootScale(bool value);

  constexpr bool& __get__enablePhysicsCapsules();

  constexpr bool const& __get__enablePhysicsCapsules() const;

  constexpr void __set__enablePhysicsCapsules(bool value);

  constexpr bool& __get__applyBoneTranslations();

  constexpr bool const& __get__applyBoneTranslations() const;

  constexpr void __set__applyBoneTranslations(bool value);

  constexpr ::UnityEngine::GameObject*& __get__bonesGO();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__bonesGO() const;

  constexpr void __set__bonesGO(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__bindPosesGO();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__bindPosesGO() const;

  constexpr void __set__bindPosesGO(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__capsulesGO();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__capsulesGO() const;

  constexpr void __set__capsulesGO(::UnityEngine::GameObject* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*& __get__bones();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*> const& __get__bones() const;

  constexpr void __set__bones(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*& __get__bindPoses();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*> const& __get__bindPoses() const;

  constexpr void __set__bindPoses(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>*& __get__capsules();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>*> const& __get__capsules() const;

  constexpr void __set__capsules(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>* value);

  constexpr ::GlobalNamespace::__OVRPlugin__Skeleton2& __get__skeleton();

  constexpr ::GlobalNamespace::__OVRPlugin__Skeleton2 const& __get__skeleton() const;

  constexpr void __set__skeleton(::GlobalNamespace::__OVRPlugin__Skeleton2 value);

  constexpr ::UnityEngine::Quaternion& __get_wristFixupRotation();

  constexpr ::UnityEngine::Quaternion const& __get_wristFixupRotation() const;

  constexpr void __set_wristFixupRotation(::UnityEngine::Quaternion value);

  constexpr bool& __get__IsInitialized_k__BackingField();

  constexpr bool const& __get__IsInitialized_k__BackingField() const;

  constexpr void __set__IsInitialized_k__BackingField(bool value);

  constexpr bool& __get__IsDataValid_k__BackingField();

  constexpr bool const& __get__IsDataValid_k__BackingField() const;

  constexpr void __set__IsDataValid_k__BackingField(bool value);

  constexpr bool& __get__IsDataHighConfidence_k__BackingField();

  constexpr bool const& __get__IsDataHighConfidence_k__BackingField() const;

  constexpr void __set__IsDataHighConfidence_k__BackingField(bool value);

  constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*& __get__Bones_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*> const& __get__Bones_k__BackingField() const;

  constexpr void __set__Bones_k__BackingField(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* value);

  constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*& __get__BindPoses_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*> const& __get__BindPoses_k__BackingField() const;

  constexpr void __set__BindPoses_k__BackingField(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* value);

  constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*& __get__Capsules_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*> const& __get__Capsules_k__BackingField() const;

  constexpr void __set__Capsules_k__BackingField(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* value);

  constexpr int32_t& __get__SkeletonChangedCount_k__BackingField();

  constexpr int32_t const& __get__SkeletonChangedCount_k__BackingField() const;

  constexpr void __set__SkeletonChangedCount_k__BackingField(int32_t value);

  /// @brief Method get_IsInitialized addr 0x2647b90 size 0x8 virtual false final false
  inline bool get_IsInitialized();

  /// @brief Method set_IsInitialized addr 0x2647b98 size 0xc virtual false final false
  inline void set_IsInitialized(bool value);

  /// @brief Method get_IsDataValid addr 0x2647ba4 size 0x8 virtual false final false
  inline bool get_IsDataValid();

  /// @brief Method set_IsDataValid addr 0x2647bac size 0xc virtual false final false
  inline void set_IsDataValid(bool value);

  /// @brief Method get_IsDataHighConfidence addr 0x2647bb8 size 0x8 virtual false final false
  inline bool get_IsDataHighConfidence();

  /// @brief Method set_IsDataHighConfidence addr 0x2647bc0 size 0xc virtual false final false
  inline void set_IsDataHighConfidence(bool value);

  /// @brief Method get_Bones addr 0x2647bcc size 0x8 virtual false final false
  inline ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* get_Bones();

  /// @brief Method set_Bones addr 0x2647bd4 size 0x8 virtual false final false
  inline void set_Bones(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* value);

  /// @brief Method get_BindPoses addr 0x2647bdc size 0x8 virtual false final false
  inline ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* get_BindPoses();

  /// @brief Method set_BindPoses addr 0x2647be4 size 0x8 virtual false final false
  inline void set_BindPoses(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* value);

  /// @brief Method get_Capsules addr 0x2647bec size 0x8 virtual false final false
  inline ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* get_Capsules();

  /// @brief Method set_Capsules addr 0x2647bf4 size 0x8 virtual false final false
  inline void set_Capsules(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* value);

  /// @brief Method GetSkeletonType addr 0x2647bfc size 0x8 virtual false final false
  inline ::GlobalNamespace::__OVRSkeleton__SkeletonType GetSkeletonType();

  /// @brief Method get_SkeletonChangedCount addr 0x2647c04 size 0x8 virtual false final false
  inline int32_t get_SkeletonChangedCount();

  /// @brief Method set_SkeletonChangedCount addr 0x2647c0c size 0x8 virtual false final false
  inline void set_SkeletonChangedCount(int32_t value);

  /// @brief Method Awake addr 0x2647c14 size 0x160 virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x2647d74 size 0x24 virtual false final false
  inline void Start();

  /// @brief Method ShouldInitialize addr 0x2647d98 size 0xc4 virtual false final false
  inline bool ShouldInitialize();

  /// @brief Method Initialize addr 0x2647e5c size 0x94 virtual false final false
  inline void Initialize();

  /// @brief Method GetBoneTransform addr 0x2648cc0 size 0x8 virtual true final false
  inline ::UnityEngine::Transform* GetBoneTransform(::GlobalNamespace::__OVRSkeleton__BoneId boneId);

  /// @brief Method InitializeBones addr 0x2648cc8 size 0x58c virtual true final false
  inline void InitializeBones();

  /// @brief Method InitializeBindPose addr 0x2647ef0 size 0x500 virtual false final false
  inline void InitializeBindPose();

  /// @brief Method InitializeCapsules addr 0x26483f0 size 0x8d0 virtual false final false
  inline void InitializeCapsules();

  /// @brief Method Update addr 0x264977c size 0x420 virtual false final false
  inline void Update();

  /// @brief Method FixedUpdate addr 0x2649b9c size 0x2a0 virtual false final false
  inline void FixedUpdate();

  /// @brief Method GetCurrentStartBoneId addr 0x2649e3c size 0x10 virtual false final false
  inline ::GlobalNamespace::__OVRSkeleton__BoneId GetCurrentStartBoneId();

  /// @brief Method GetCurrentEndBoneId addr 0x2649e4c size 0x24 virtual false final false
  inline ::GlobalNamespace::__OVRSkeleton__BoneId GetCurrentEndBoneId();

  /// @brief Method GetCurrentMaxSkinnableBoneId addr 0x2649e70 size 0x24 virtual false final false
  inline ::GlobalNamespace::__OVRSkeleton__BoneId GetCurrentMaxSkinnableBoneId();

  /// @brief Method GetCurrentNumBones addr 0x2649e94 size 0x24 virtual false final false
  inline int32_t GetCurrentNumBones();

  /// @brief Method GetCurrentNumSkinnableBones addr 0x2649eb8 size 0x24 virtual false final false
  inline int32_t GetCurrentNumSkinnableBones();

  /// @brief Method BoneLabelFromBoneId addr 0x264925c size 0x518 virtual false final false
  static inline ::StringW BoneLabelFromBoneId(::GlobalNamespace::__OVRSkeleton__SkeletonType skeletonType, ::GlobalNamespace::__OVRSkeleton__BoneId boneId);

  static inline ::GlobalNamespace::OVRSkeleton* New_ctor();

  /// @brief Method .ctor addr 0x2649edc size 0x24 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRSkeleton", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSkeleton(OVRSkeleton&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSkeleton", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSkeleton(OVRSkeleton const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSkeleton();

public:
  /// @brief Field _skeletonType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRSkeleton__SkeletonType ____skeletonType;

  /// @brief Field _dataProvider, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__OVRSkeleton__IOVRSkeletonDataProvider* ____dataProvider;

  /// @brief Field _updateRootPose, offset: 0x28, size: 0x1, def value: None
  bool ____updateRootPose;

  /// @brief Field _updateRootScale, offset: 0x29, size: 0x1, def value: None
  bool ____updateRootScale;

  /// @brief Field _enablePhysicsCapsules, offset: 0x2a, size: 0x1, def value: None
  bool ____enablePhysicsCapsules;

  /// @brief Field _applyBoneTranslations, offset: 0x2b, size: 0x1, def value: None
  bool ____applyBoneTranslations;

  /// @brief Field _bonesGO, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____bonesGO;

  /// @brief Field _bindPosesGO, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____bindPosesGO;

  /// @brief Field _capsulesGO, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____capsulesGO;

  /// @brief Field _bones, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* ____bones;

  /// @brief Field _bindPoses, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* ____bindPoses;

  /// @brief Field _capsules, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>* ____capsules;

  /// @brief Field _skeleton, offset: 0x60, size: 0x20, def value: None
  ::GlobalNamespace::__OVRPlugin__Skeleton2 ____skeleton;

  /// @brief Field wristFixupRotation, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___wristFixupRotation;

  /// @brief Field <IsInitialized>k__BackingField, offset: 0x90, size: 0x1, def value: None
  bool ____IsInitialized_k__BackingField;

  /// @brief Field <IsDataValid>k__BackingField, offset: 0x91, size: 0x1, def value: None
  bool ____IsDataValid_k__BackingField;

  /// @brief Field <IsDataHighConfidence>k__BackingField, offset: 0x92, size: 0x1, def value: None
  bool ____IsDataHighConfidence_k__BackingField;

  /// @brief Field <Bones>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* ____Bones_k__BackingField;

  /// @brief Field <BindPoses>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* ____BindPoses_k__BackingField;

  /// @brief Field <Capsules>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* ____Capsules_k__BackingField;

  /// @brief Field <SkeletonChangedCount>k__BackingField, offset: 0xb0, size: 0x4, def value: None
  int32_t ____SkeletonChangedCount_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSkeleton, 0xb8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____skeletonType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____dataProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____updateRootPose) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____updateRootScale) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____enablePhysicsCapsules) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____applyBoneTranslations) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____bonesGO) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____bindPosesGO) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____capsulesGO) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____bones) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____bindPoses) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____capsules) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____skeleton) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ___wristFixupRotation) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____IsInitialized_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____IsDataValid_k__BackingField) == 0x91, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____IsDataHighConfidence_k__BackingField) == 0x92, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____Bones_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____BindPoses_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____Capsules_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____SkeletonChangedCount_k__BackingField) == 0xb0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSkeleton__BoneId, "", "OVRSkeleton/BoneId");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSkeleton__SkeletonType, "", "OVRSkeleton/SkeletonType");
NEED_NO_BOX(::GlobalNamespace::OVRSkeleton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeleton*, "", "OVRSkeleton");
NEED_NO_BOX(::GlobalNamespace::__OVRSkeleton__IOVRSkeletonDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSkeleton__IOVRSkeletonDataProvider*, "", "OVRSkeleton/IOVRSkeletonDataProvider");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSkeleton__SkeletonPoseData, "", "OVRSkeleton/SkeletonPoseData");
