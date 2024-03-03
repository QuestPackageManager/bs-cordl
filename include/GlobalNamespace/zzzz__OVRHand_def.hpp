#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRHand_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRHand)
namespace GlobalNamespace {
struct __OVRHand__HandFinger;
}
namespace GlobalNamespace {
struct __OVRHand__Hand;
}
namespace GlobalNamespace {
struct __OVRHand__TrackingConfidence;
}
namespace GlobalNamespace {
class __OVRMeshRenderer__IOVRMeshRendererDataProvider;
}
namespace GlobalNamespace {
struct __OVRMeshRenderer__MeshRendererData;
}
namespace GlobalNamespace {
class __OVRMesh__IOVRMeshDataProvider;
}
namespace GlobalNamespace {
struct __OVRMesh__MeshType;
}
namespace GlobalNamespace {
struct __OVRPlugin__Step;
}
namespace GlobalNamespace {
class __OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider;
}
namespace GlobalNamespace {
struct __OVRSkeletonRenderer__SkeletonRendererData;
}
namespace GlobalNamespace {
class __OVRSkeleton__IOVRSkeletonDataProvider;
}
namespace GlobalNamespace {
struct __OVRSkeleton__SkeletonPoseData;
}
namespace GlobalNamespace {
struct __OVRSkeleton__SkeletonType;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRHand__Hand;
}
namespace GlobalNamespace {
struct __OVRHand__HandFinger;
}
namespace GlobalNamespace {
struct __OVRHand__TrackingConfidence;
}
namespace GlobalNamespace {
class OVRHand;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRHand__Hand);
MARK_VAL_T(::GlobalNamespace::__OVRHand__HandFinger);
MARK_VAL_T(::GlobalNamespace::__OVRHand__TrackingConfidence);
MARK_REF_PTR_T(::GlobalNamespace::OVRHand);
// Type: ::Hand
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRHand::Hand
struct CORDL_TYPE __OVRHand__Hand {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRHand__Hand_Unwrapped
  enum struct ____OVRHand__Hand_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_HandLeft = static_cast<int32_t>(0x0),
    __E_HandRight = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRHand__Hand_Unwrapped() const noexcept {
    return static_cast<____OVRHand__Hand_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRHand__Hand();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRHand__Hand(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field HandLeft value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRHand__Hand const HandLeft;

  /// @brief Field HandRight value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRHand__Hand const HandRight;

  /// @brief Field None value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRHand__Hand const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRHand__Hand, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHand__Hand, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::HandFinger
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRHand::HandFinger
struct CORDL_TYPE __OVRHand__HandFinger {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRHand__HandFinger_Unwrapped
  enum struct ____OVRHand__HandFinger_Unwrapped : int32_t {
    __E_Thumb = static_cast<int32_t>(0x0),
    __E_Index = static_cast<int32_t>(0x1),
    __E_Middle = static_cast<int32_t>(0x2),
    __E_Ring = static_cast<int32_t>(0x3),
    __E_Pinky = static_cast<int32_t>(0x4),
    __E_Max = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRHand__HandFinger_Unwrapped() const noexcept {
    return static_cast<____OVRHand__HandFinger_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRHand__HandFinger();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRHand__HandFinger(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Index value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRHand__HandFinger const Index;

  /// @brief Field Max value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRHand__HandFinger const Max;

  /// @brief Field Middle value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRHand__HandFinger const Middle;

  /// @brief Field Pinky value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRHand__HandFinger const Pinky;

  /// @brief Field Ring value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRHand__HandFinger const Ring;

  /// @brief Field Thumb value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRHand__HandFinger const Thumb;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRHand__HandFinger, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHand__HandFinger, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TrackingConfidence
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRHand::TrackingConfidence
struct CORDL_TYPE __OVRHand__TrackingConfidence {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRHand__TrackingConfidence_Unwrapped
  enum struct ____OVRHand__TrackingConfidence_Unwrapped : int32_t {
    __E_Low = static_cast<int32_t>(0x0),
    __E_High = static_cast<int32_t>(0x3f800000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRHand__TrackingConfidence_Unwrapped() const noexcept {
    return static_cast<____OVRHand__TrackingConfidence_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRHand__TrackingConfidence();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRHand__TrackingConfidence(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field High value: static_cast<int32_t>(0x3f800000)
  static ::GlobalNamespace::__OVRHand__TrackingConfidence const High;

  /// @brief Field Low value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRHand__TrackingConfidence const Low;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRHand__TrackingConfidence, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHand__TrackingConfidence, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRHand
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 201, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRHand*
class CORDL_TYPE OVRHand : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Hand = ::GlobalNamespace::__OVRHand__Hand;

  using HandFinger = ::GlobalNamespace::__OVRHand__HandFinger;

  using TrackingConfidence = ::GlobalNamespace::__OVRHand__TrackingConfidence;

  __declspec(property(get = get_HandConfidence, put = set_HandConfidence))::GlobalNamespace::__OVRHand__TrackingConfidence HandConfidence;

  __declspec(property(get = get_HandScale, put = set_HandScale)) float_t HandScale;

  /// @brief Field HandType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_HandType, put = __cordl_internal_set_HandType))::GlobalNamespace::__OVRHand__Hand HandType;

  __declspec(property(get = get_IsDataHighConfidence, put = set_IsDataHighConfidence)) bool IsDataHighConfidence;

  __declspec(property(get = get_IsDataValid, put = set_IsDataValid)) bool IsDataValid;

  __declspec(property(get = get_IsDominantHand, put = set_IsDominantHand)) bool IsDominantHand;

  __declspec(property(get = get_IsPointerPoseValid, put = set_IsPointerPoseValid)) bool IsPointerPoseValid;

  __declspec(property(get = get_IsSystemGestureInProgress, put = set_IsSystemGestureInProgress)) bool IsSystemGestureInProgress;

  __declspec(property(get = get_IsTracked, put = set_IsTracked)) bool IsTracked;

  __declspec(property(get = get_PointerPose, put = set_PointerPose))::UnityW<::UnityEngine::Transform> PointerPose;

  /// @brief Field <HandConfidence>k__BackingField, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get__HandConfidence_k__BackingField,
                      put = __cordl_internal_set__HandConfidence_k__BackingField))::GlobalNamespace::__OVRHand__TrackingConfidence _HandConfidence_k__BackingField;

  /// @brief Field <HandScale>k__BackingField, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get__HandScale_k__BackingField, put = __cordl_internal_set__HandScale_k__BackingField)) float_t _HandScale_k__BackingField;

  /// @brief Field <IsDataHighConfidence>k__BackingField, offset 0xb1, size 0x1
  __declspec(property(get = __cordl_internal_get__IsDataHighConfidence_k__BackingField, put = __cordl_internal_set__IsDataHighConfidence_k__BackingField)) bool _IsDataHighConfidence_k__BackingField;

  /// @brief Field <IsDataValid>k__BackingField, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get__IsDataValid_k__BackingField, put = __cordl_internal_set__IsDataValid_k__BackingField)) bool _IsDataValid_k__BackingField;

  /// @brief Field <IsDominantHand>k__BackingField, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get__IsDominantHand_k__BackingField, put = __cordl_internal_set__IsDominantHand_k__BackingField)) bool _IsDominantHand_k__BackingField;

  /// @brief Field <IsPointerPoseValid>k__BackingField, offset 0xb4, size 0x1
  __declspec(property(get = __cordl_internal_get__IsPointerPoseValid_k__BackingField, put = __cordl_internal_set__IsPointerPoseValid_k__BackingField)) bool _IsPointerPoseValid_k__BackingField;

  /// @brief Field <IsSystemGestureInProgress>k__BackingField, offset 0xb3, size 0x1
  __declspec(property(get = __cordl_internal_get__IsSystemGestureInProgress_k__BackingField,
                      put = __cordl_internal_set__IsSystemGestureInProgress_k__BackingField)) bool _IsSystemGestureInProgress_k__BackingField;

  /// @brief Field <IsTracked>k__BackingField, offset 0xb2, size 0x1
  __declspec(property(get = __cordl_internal_get__IsTracked_k__BackingField, put = __cordl_internal_set__IsTracked_k__BackingField)) bool _IsTracked_k__BackingField;

  /// @brief Field <PointerPose>k__BackingField, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__PointerPose_k__BackingField, put = __cordl_internal_set__PointerPose_k__BackingField))::UnityW<::UnityEngine::Transform> _PointerPose_k__BackingField;

  /// @brief Field _handState, offset 0x38, size 0x78
  __declspec(property(get = __cordl_internal_get__handState, put = __cordl_internal_set__handState))::GlobalNamespace::__OVRPlugin__HandState _handState;

  /// @brief Field _pointerPoseGO, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerPoseGO, put = __cordl_internal_set__pointerPoseGO))::UnityW<::UnityEngine::GameObject> _pointerPoseGO;

  /// @brief Field _pointerPoseRoot, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerPoseRoot, put = __cordl_internal_set__pointerPoseRoot))::UnityW<::UnityEngine::Transform> _pointerPoseRoot;

  /// @brief Field m_showState, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_showState, put = __cordl_internal_set_m_showState))::GlobalNamespace::__OVRInput__InputDeviceShowState m_showState;

  /// @brief Convert operator to "::GlobalNamespace::__OVRMeshRenderer__IOVRMeshRendererDataProvider"
  constexpr operator ::GlobalNamespace::__OVRMeshRenderer__IOVRMeshRendererDataProvider*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider"
  constexpr operator ::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider"
  constexpr operator ::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::__OVRSkeleton__IOVRSkeletonDataProvider"
  constexpr operator ::GlobalNamespace::__OVRSkeleton__IOVRSkeletonDataProvider*() noexcept;

  /// @brief Method Awake, addr 0x28a0510, size 0xcc, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method FixedUpdate, addr 0x28a0844, size 0x74, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method GetFingerConfidence, addr 0x28a0920, size 0x44, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRHand__TrackingConfidence GetFingerConfidence(::GlobalNamespace::__OVRHand__HandFinger finger);

  /// @brief Method GetFingerIsPinching, addr 0x28a08b8, size 0x28, virtual false, abstract: false, final false
  inline bool GetFingerIsPinching(::GlobalNamespace::__OVRHand__HandFinger finger);

  /// @brief Method GetFingerPinchStrength, addr 0x28a08e0, size 0x40, virtual false, abstract: false, final false
  inline float_t GetFingerPinchStrength(::GlobalNamespace::__OVRHand__HandFinger finger);

  /// @brief Method GetHandState, addr 0x28a05dc, size 0x260, virtual false, abstract: false, final false
  inline void GetHandState(::GlobalNamespace::__OVRPlugin__Step step);

  static inline ::GlobalNamespace::OVRHand* New_ctor();

  /// @brief Method OVRMeshRenderer.IOVRMeshRendererDataProvider.GetMeshRendererData, addr 0x28a0a4c, size 0x50, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRMeshRenderer__MeshRendererData OVRMeshRenderer_IOVRMeshRendererDataProvider_GetMeshRendererData();

  /// @brief Method OVRMesh.IOVRMeshDataProvider.GetMeshType, addr 0x28a0a34, size 0x18, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRMesh__MeshType OVRMesh_IOVRMeshDataProvider_GetMeshType();

  /// @brief Method OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData, addr 0x28a09e8, size 0x4c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRSkeletonRenderer__SkeletonRendererData OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData();

  /// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData, addr 0x28a097c, size 0x6c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRSkeleton__SkeletonPoseData OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData();

  /// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType, addr 0x28a0964, size 0x18, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRSkeleton__SkeletonType OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType();

  /// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.get_enabled, addr 0x28a0ab4, size 0x8, virtual true, abstract: false, final true
  inline bool OVRSkeleton_IOVRSkeletonDataProvider_get_enabled();

  /// @brief Method SetHandType, addr 0x28a0460, size 0x8, virtual false, abstract: false, final false
  inline void SetHandType(::GlobalNamespace::__OVRHand__Hand type);

  /// @brief Method Update, addr 0x28a083c, size 0x8, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::__OVRHand__Hand const& __cordl_internal_get_HandType() const;

  constexpr ::GlobalNamespace::__OVRHand__Hand& __cordl_internal_get_HandType();

  constexpr ::GlobalNamespace::__OVRHand__TrackingConfidence const& __cordl_internal_get__HandConfidence_k__BackingField() const;

  constexpr ::GlobalNamespace::__OVRHand__TrackingConfidence& __cordl_internal_get__HandConfidence_k__BackingField();

  constexpr float_t const& __cordl_internal_get__HandScale_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__HandScale_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsDataHighConfidence_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsDataHighConfidence_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsDataValid_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsDataValid_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsDominantHand_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsDominantHand_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsPointerPoseValid_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsPointerPoseValid_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsSystemGestureInProgress_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsSystemGestureInProgress_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsTracked_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsTracked_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__PointerPose_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__PointerPose_k__BackingField();

  constexpr ::GlobalNamespace::__OVRPlugin__HandState const& __cordl_internal_get__handState() const;

  constexpr ::GlobalNamespace::__OVRPlugin__HandState& __cordl_internal_get__handState();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__pointerPoseGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__pointerPoseGO();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__pointerPoseRoot() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__pointerPoseRoot();

  constexpr ::GlobalNamespace::__OVRInput__InputDeviceShowState const& __cordl_internal_get_m_showState() const;

  constexpr ::GlobalNamespace::__OVRInput__InputDeviceShowState& __cordl_internal_get_m_showState();

  constexpr void __cordl_internal_set_HandType(::GlobalNamespace::__OVRHand__Hand value);

  constexpr void __cordl_internal_set__HandConfidence_k__BackingField(::GlobalNamespace::__OVRHand__TrackingConfidence value);

  constexpr void __cordl_internal_set__HandScale_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__IsDataHighConfidence_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsDataValid_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsDominantHand_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsPointerPoseValid_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsSystemGestureInProgress_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsTracked_k__BackingField(bool value);

  constexpr void __cordl_internal_set__PointerPose_k__BackingField(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__handState(::GlobalNamespace::__OVRPlugin__HandState value);

  constexpr void __cordl_internal_set__pointerPoseGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__pointerPoseRoot(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_showState(::GlobalNamespace::__OVRInput__InputDeviceShowState value);

  /// @brief Method .ctor, addr 0x28a0a9c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_HandConfidence, addr 0x28a04ec, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRHand__TrackingConfidence get_HandConfidence();

  /// @brief Method get_HandScale, addr 0x28a04dc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_HandScale();

  /// @brief Method get_IsDataHighConfidence, addr 0x28a047c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDataHighConfidence();

  /// @brief Method get_IsDataValid, addr 0x28a0468, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDataValid();

  /// @brief Method get_IsDominantHand, addr 0x28a04fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDominantHand();

  /// @brief Method get_IsPointerPoseValid, addr 0x28a04b8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsPointerPoseValid();

  /// @brief Method get_IsSystemGestureInProgress, addr 0x28a04a4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsSystemGestureInProgress();

  /// @brief Method get_IsTracked, addr 0x28a0490, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsTracked();

  /// @brief Method get_PointerPose, addr 0x28a04cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_PointerPose();

  /// @brief Convert to "::GlobalNamespace::__OVRMeshRenderer__IOVRMeshRendererDataProvider"
  constexpr ::GlobalNamespace::__OVRMeshRenderer__IOVRMeshRendererDataProvider* i___GlobalNamespace____OVRMeshRenderer__IOVRMeshRendererDataProvider() noexcept;

  /// @brief Convert to "::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider"
  constexpr ::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider* i___GlobalNamespace____OVRMesh__IOVRMeshDataProvider() noexcept;

  /// @brief Convert to "::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider"
  constexpr ::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider* i___GlobalNamespace____OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider() noexcept;

  /// @brief Convert to "::GlobalNamespace::__OVRSkeleton__IOVRSkeletonDataProvider"
  constexpr ::GlobalNamespace::__OVRSkeleton__IOVRSkeletonDataProvider* i___GlobalNamespace____OVRSkeleton__IOVRSkeletonDataProvider() noexcept;

  /// @brief Method set_HandConfidence, addr 0x28a04f4, size 0x8, virtual false, abstract: false, final false
  inline void set_HandConfidence(::GlobalNamespace::__OVRHand__TrackingConfidence value);

  /// @brief Method set_HandScale, addr 0x28a04e4, size 0x8, virtual false, abstract: false, final false
  inline void set_HandScale(float_t value);

  /// @brief Method set_IsDataHighConfidence, addr 0x28a0484, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDataHighConfidence(bool value);

  /// @brief Method set_IsDataValid, addr 0x28a0470, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDataValid(bool value);

  /// @brief Method set_IsDominantHand, addr 0x28a0504, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDominantHand(bool value);

  /// @brief Method set_IsPointerPoseValid, addr 0x28a04c0, size 0xc, virtual false, abstract: false, final false
  inline void set_IsPointerPoseValid(bool value);

  /// @brief Method set_IsSystemGestureInProgress, addr 0x28a04ac, size 0xc, virtual false, abstract: false, final false
  inline void set_IsSystemGestureInProgress(bool value);

  /// @brief Method set_IsTracked, addr 0x28a0498, size 0xc, virtual false, abstract: false, final false
  inline void set_IsTracked(bool value);

  /// @brief Method set_PointerPose, addr 0x28a04d4, size 0x8, virtual false, abstract: false, final false
  inline void set_PointerPose(::UnityEngine::Transform* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRHand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRHand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRHand(OVRHand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRHand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRHand(OVRHand const&) = delete;

  /// @brief Field HandType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRHand__Hand ___HandType;

  /// @brief Field _pointerPoseRoot, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____pointerPoseRoot;

  /// @brief Field m_showState, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__InputDeviceShowState ___m_showState;

  /// @brief Field _pointerPoseGO, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____pointerPoseGO;

  /// @brief Field _handState, offset: 0x38, size: 0x78, def value: None
  ::GlobalNamespace::__OVRPlugin__HandState ____handState;

  /// @brief Field <IsDataValid>k__BackingField, offset: 0xb0, size: 0x1, def value: None
  bool ____IsDataValid_k__BackingField;

  /// @brief Field <IsDataHighConfidence>k__BackingField, offset: 0xb1, size: 0x1, def value: None
  bool ____IsDataHighConfidence_k__BackingField;

  /// @brief Field <IsTracked>k__BackingField, offset: 0xb2, size: 0x1, def value: None
  bool ____IsTracked_k__BackingField;

  /// @brief Field <IsSystemGestureInProgress>k__BackingField, offset: 0xb3, size: 0x1, def value: None
  bool ____IsSystemGestureInProgress_k__BackingField;

  /// @brief Field <IsPointerPoseValid>k__BackingField, offset: 0xb4, size: 0x1, def value: None
  bool ____IsPointerPoseValid_k__BackingField;

  /// @brief Field <PointerPose>k__BackingField, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____PointerPose_k__BackingField;

  /// @brief Field <HandScale>k__BackingField, offset: 0xc0, size: 0x4, def value: None
  float_t ____HandScale_k__BackingField;

  /// @brief Field <HandConfidence>k__BackingField, offset: 0xc4, size: 0x4, def value: None
  ::GlobalNamespace::__OVRHand__TrackingConfidence ____HandConfidence_k__BackingField;

  /// @brief Field <IsDominantHand>k__BackingField, offset: 0xc8, size: 0x1, def value: None
  bool ____IsDominantHand_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHand, 0xd0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ___HandType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____pointerPoseRoot) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ___m_showState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____pointerPoseGO) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____handState) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____IsDataValid_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____IsDataHighConfidence_k__BackingField) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____IsTracked_k__BackingField) == 0xb2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____IsSystemGestureInProgress_k__BackingField) == 0xb3, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____IsPointerPoseValid_k__BackingField) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____PointerPose_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____HandScale_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____HandConfidence_k__BackingField) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____IsDominantHand_k__BackingField) == 0xc8, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRHand__Hand, "", "OVRHand/Hand");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRHand__HandFinger, "", "OVRHand/HandFinger");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRHand__TrackingConfidence, "", "OVRHand/TrackingConfidence");
NEED_NO_BOX(::GlobalNamespace::OVRHand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHand*, "", "OVRHand");
