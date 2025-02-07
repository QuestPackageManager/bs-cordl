#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRHand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshRenderer_def.hpp"
#include "GlobalNamespace/zzzz__OVRMesh_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeletonRenderer_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRHand)
namespace GlobalNamespace {
struct OVRHand_HandFinger;
}
namespace GlobalNamespace {
struct OVRHand_Hand;
}
namespace GlobalNamespace {
struct OVRHand_TrackingConfidence;
}
namespace GlobalNamespace {
struct OVRMeshRenderer_MeshRendererData;
}
namespace GlobalNamespace {
struct OVRMesh_MeshType;
}
namespace GlobalNamespace {
struct OVRPlugin_Step;
}
namespace GlobalNamespace {
struct OVRSkeletonRenderer_SkeletonRendererData;
}
namespace GlobalNamespace {
struct OVRSkeleton_SkeletonPoseData;
}
namespace GlobalNamespace {
struct OVRSkeleton_SkeletonType;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRHand_Hand;
}
namespace GlobalNamespace {
struct OVRHand_HandFinger;
}
namespace GlobalNamespace {
struct OVRHand_TrackingConfidence;
}
namespace GlobalNamespace {
class OVRHand;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRHand_Hand);
MARK_VAL_T(::GlobalNamespace::OVRHand_HandFinger);
MARK_VAL_T(::GlobalNamespace::OVRHand_TrackingConfidence);
MARK_REF_PTR_T(::GlobalNamespace::OVRHand);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRHand/Hand
struct CORDL_TYPE OVRHand_Hand {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRHand_Hand_Unwrapped
  enum struct __OVRHand_Hand_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_HandLeft = static_cast<int32_t>(0x0),
    __E_HandRight = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRHand_Hand_Unwrapped() const noexcept {
    return static_cast<__OVRHand_Hand_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRHand_Hand();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRHand_Hand(int32_t value__) noexcept;

  /// @brief Field HandLeft value: I32(0)
  static ::GlobalNamespace::OVRHand_Hand const HandLeft;

  /// @brief Field HandRight value: I32(1)
  static ::GlobalNamespace::OVRHand_Hand const HandRight;

  /// @brief Field None value: I32(-1)
  static ::GlobalNamespace::OVRHand_Hand const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8428 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRHand_Hand, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHand_Hand, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRHand/HandFinger
struct CORDL_TYPE OVRHand_HandFinger {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRHand_HandFinger_Unwrapped
  enum struct __OVRHand_HandFinger_Unwrapped : int32_t {
    __E_Thumb = static_cast<int32_t>(0x0),
    __E_Index = static_cast<int32_t>(0x1),
    __E_Middle = static_cast<int32_t>(0x2),
    __E_Ring = static_cast<int32_t>(0x3),
    __E_Pinky = static_cast<int32_t>(0x4),
    __E_Max = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRHand_HandFinger_Unwrapped() const noexcept {
    return static_cast<__OVRHand_HandFinger_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRHand_HandFinger();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRHand_HandFinger(int32_t value__) noexcept;

  /// @brief Field Index value: I32(1)
  static ::GlobalNamespace::OVRHand_HandFinger const Index;

  /// @brief Field Max value: I32(5)
  static ::GlobalNamespace::OVRHand_HandFinger const Max;

  /// @brief Field Middle value: I32(2)
  static ::GlobalNamespace::OVRHand_HandFinger const Middle;

  /// @brief Field Pinky value: I32(4)
  static ::GlobalNamespace::OVRHand_HandFinger const Pinky;

  /// @brief Field Ring value: I32(3)
  static ::GlobalNamespace::OVRHand_HandFinger const Ring;

  /// @brief Field Thumb value: I32(0)
  static ::GlobalNamespace::OVRHand_HandFinger const Thumb;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8429 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRHand_HandFinger, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHand_HandFinger, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRHand/TrackingConfidence
struct CORDL_TYPE OVRHand_TrackingConfidence {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRHand_TrackingConfidence_Unwrapped
  enum struct __OVRHand_TrackingConfidence_Unwrapped : int32_t {
    __E_Low = static_cast<int32_t>(0x0),
    __E_High = static_cast<int32_t>(0x3f800000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRHand_TrackingConfidence_Unwrapped() const noexcept {
    return static_cast<__OVRHand_TrackingConfidence_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRHand_TrackingConfidence();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRHand_TrackingConfidence(int32_t value__) noexcept;

  /// @brief Field High value: I32(1065353216)
  static ::GlobalNamespace::OVRHand_TrackingConfidence const High;

  /// @brief Field Low value: I32(0)
  static ::GlobalNamespace::OVRHand_TrackingConfidence const Low;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8430 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRHand_TrackingConfidence, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHand_TrackingConfidence, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRHand::Hand, OVRHand::TrackingConfidence, OVRInput::InputDeviceShowState, OVRMesh::IOVRMeshDataProvider, OVRMeshRenderer::IOVRMeshRendererDataProvider, OVRPlugin::HandState,
// OVRSkeleton::IOVRSkeletonDataProvider, OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRHand
class CORDL_TYPE OVRHand : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Hand = ::GlobalNamespace::OVRHand_Hand;

  using HandFinger = ::GlobalNamespace::OVRHand_HandFinger;

  using TrackingConfidence = ::GlobalNamespace::OVRHand_TrackingConfidence;

  __declspec(property(get = get_HandConfidence, put = set_HandConfidence)) ::GlobalNamespace::OVRHand_TrackingConfidence HandConfidence;

  __declspec(property(get = get_HandScale, put = set_HandScale)) float_t HandScale;

  /// @brief Field HandType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_HandType, put = __cordl_internal_set_HandType)) ::GlobalNamespace::OVRHand_Hand HandType;

  __declspec(property(get = get_IsDataHighConfidence, put = set_IsDataHighConfidence)) bool IsDataHighConfidence;

  __declspec(property(get = get_IsDataValid, put = set_IsDataValid)) bool IsDataValid;

  __declspec(property(get = get_IsDominantHand, put = set_IsDominantHand)) bool IsDominantHand;

  __declspec(property(get = get_IsPointerPoseValid, put = set_IsPointerPoseValid)) bool IsPointerPoseValid;

  __declspec(property(get = get_IsSystemGestureInProgress, put = set_IsSystemGestureInProgress)) bool IsSystemGestureInProgress;

  __declspec(property(get = get_IsTracked, put = set_IsTracked)) bool IsTracked;

  __declspec(property(get = get_PointerPose, put = set_PointerPose)) ::UnityW<::UnityEngine::Transform> PointerPose;

  /// @brief Field <HandConfidence>k__BackingField, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get__HandConfidence_k__BackingField,
                      put = __cordl_internal_set__HandConfidence_k__BackingField)) ::GlobalNamespace::OVRHand_TrackingConfidence _HandConfidence_k__BackingField;

  /// @brief Field <HandScale>k__BackingField, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get__HandScale_k__BackingField, put = __cordl_internal_set__HandScale_k__BackingField)) float_t _HandScale_k__BackingField;

  /// @brief Field <IsDataHighConfidence>k__BackingField, offset 0xb9, size 0x1
  __declspec(property(get = __cordl_internal_get__IsDataHighConfidence_k__BackingField, put = __cordl_internal_set__IsDataHighConfidence_k__BackingField)) bool _IsDataHighConfidence_k__BackingField;

  /// @brief Field <IsDataValid>k__BackingField, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get__IsDataValid_k__BackingField, put = __cordl_internal_set__IsDataValid_k__BackingField)) bool _IsDataValid_k__BackingField;

  /// @brief Field <IsDominantHand>k__BackingField, offset 0xd0, size 0x1
  __declspec(property(get = __cordl_internal_get__IsDominantHand_k__BackingField, put = __cordl_internal_set__IsDominantHand_k__BackingField)) bool _IsDominantHand_k__BackingField;

  /// @brief Field <IsPointerPoseValid>k__BackingField, offset 0xbc, size 0x1
  __declspec(property(get = __cordl_internal_get__IsPointerPoseValid_k__BackingField, put = __cordl_internal_set__IsPointerPoseValid_k__BackingField)) bool _IsPointerPoseValid_k__BackingField;

  /// @brief Field <IsSystemGestureInProgress>k__BackingField, offset 0xbb, size 0x1
  __declspec(property(get = __cordl_internal_get__IsSystemGestureInProgress_k__BackingField,
                      put = __cordl_internal_set__IsSystemGestureInProgress_k__BackingField)) bool _IsSystemGestureInProgress_k__BackingField;

  /// @brief Field <IsTracked>k__BackingField, offset 0xba, size 0x1
  __declspec(property(get = __cordl_internal_get__IsTracked_k__BackingField, put = __cordl_internal_set__IsTracked_k__BackingField)) bool _IsTracked_k__BackingField;

  /// @brief Field <PointerPose>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__PointerPose_k__BackingField, put = __cordl_internal_set__PointerPose_k__BackingField)) ::UnityW<::UnityEngine::Transform>
      _PointerPose_k__BackingField;

  /// @brief Field _handState, offset 0x40, size 0x78
  __declspec(property(get = __cordl_internal_get__handState, put = __cordl_internal_set__handState)) ::GlobalNamespace::OVRPlugin_HandState _handState;

  /// @brief Field _pointerPoseGO, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerPoseGO, put = __cordl_internal_set__pointerPoseGO)) ::UnityW<::UnityEngine::GameObject> _pointerPoseGO;

  /// @brief Field _pointerPoseRoot, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerPoseRoot, put = __cordl_internal_set__pointerPoseRoot)) ::UnityW<::UnityEngine::Transform> _pointerPoseRoot;

  /// @brief Field m_showState, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_showState, put = __cordl_internal_set_m_showState)) ::GlobalNamespace::OVRInput_InputDeviceShowState m_showState;

  /// @brief Convert operator to "::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider"
  constexpr operator ::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::OVRMesh_IOVRMeshDataProvider"
  constexpr operator ::GlobalNamespace::OVRMesh_IOVRMeshDataProvider*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider"
  constexpr operator ::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider"
  constexpr operator ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*() noexcept;

  /// @brief Method Awake, addr 0x4039dc8, size 0xcc, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method FixedUpdate, addr 0x403a104, size 0x74, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method GetFingerConfidence, addr 0x403a1d8, size 0x44, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRHand_TrackingConfidence GetFingerConfidence(::GlobalNamespace::OVRHand_HandFinger finger);

  /// @brief Method GetFingerIsPinching, addr 0x403a178, size 0x20, virtual false, abstract: false, final false
  inline bool GetFingerIsPinching(::GlobalNamespace::OVRHand_HandFinger finger);

  /// @brief Method GetFingerPinchStrength, addr 0x403a198, size 0x40, virtual false, abstract: false, final false
  inline float_t GetFingerPinchStrength(::GlobalNamespace::OVRHand_HandFinger finger);

  /// @brief Method GetHandState, addr 0x4039e94, size 0x268, virtual false, abstract: false, final false
  inline void GetHandState(::GlobalNamespace::OVRPlugin_Step step);

  static inline ::GlobalNamespace::OVRHand* New_ctor();

  /// @brief Method OVRMeshRenderer.IOVRMeshRendererDataProvider.GetMeshRendererData, addr 0x403a360, size 0x48, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRMeshRenderer_MeshRendererData OVRMeshRenderer_IOVRMeshRendererDataProvider_GetMeshRendererData();

  /// @brief Method OVRMesh.IOVRMeshDataProvider.GetMeshType, addr 0x403a348, size 0x18, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRMesh_MeshType OVRMesh_IOVRMeshDataProvider_GetMeshType();

  /// @brief Method OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData, addr 0x403a2f4, size 0x54, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData();

  /// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData, addr 0x403a234, size 0xc0, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRSkeleton_SkeletonPoseData OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData();

  /// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType, addr 0x403a21c, size 0x18, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRSkeleton_SkeletonType OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType();

  /// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.get_enabled, addr 0x403a3c0, size 0x8, virtual true, abstract: false, final true
  inline bool OVRSkeleton_IOVRSkeletonDataProvider_get_enabled();

  /// @brief Method SetHandType, addr 0x4039d18, size 0x8, virtual false, abstract: false, final false
  inline void SetHandType(::GlobalNamespace::OVRHand_Hand type);

  /// @brief Method Update, addr 0x403a0fc, size 0x8, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::OVRHand_Hand const& __cordl_internal_get_HandType() const;

  constexpr ::GlobalNamespace::OVRHand_Hand& __cordl_internal_get_HandType();

  constexpr ::GlobalNamespace::OVRHand_TrackingConfidence const& __cordl_internal_get__HandConfidence_k__BackingField() const;

  constexpr ::GlobalNamespace::OVRHand_TrackingConfidence& __cordl_internal_get__HandConfidence_k__BackingField();

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

  constexpr ::GlobalNamespace::OVRPlugin_HandState const& __cordl_internal_get__handState() const;

  constexpr ::GlobalNamespace::OVRPlugin_HandState& __cordl_internal_get__handState();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__pointerPoseGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__pointerPoseGO();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__pointerPoseRoot() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__pointerPoseRoot();

  constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState const& __cordl_internal_get_m_showState() const;

  constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState& __cordl_internal_get_m_showState();

  constexpr void __cordl_internal_set_HandType(::GlobalNamespace::OVRHand_Hand value);

  constexpr void __cordl_internal_set__HandConfidence_k__BackingField(::GlobalNamespace::OVRHand_TrackingConfidence value);

  constexpr void __cordl_internal_set__HandScale_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__IsDataHighConfidence_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsDataValid_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsDominantHand_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsPointerPoseValid_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsSystemGestureInProgress_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsTracked_k__BackingField(bool value);

  constexpr void __cordl_internal_set__PointerPose_k__BackingField(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__handState(::GlobalNamespace::OVRPlugin_HandState value);

  constexpr void __cordl_internal_set__pointerPoseGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__pointerPoseRoot(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_showState(::GlobalNamespace::OVRInput_InputDeviceShowState value);

  /// @brief Method .ctor, addr 0x403a3a8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_HandConfidence, addr 0x4039da4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRHand_TrackingConfidence get_HandConfidence();

  /// @brief Method get_HandScale, addr 0x4039d94, size 0x8, virtual false, abstract: false, final false
  inline float_t get_HandScale();

  /// @brief Method get_IsDataHighConfidence, addr 0x4039d34, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDataHighConfidence();

  /// @brief Method get_IsDataValid, addr 0x4039d20, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDataValid();

  /// @brief Method get_IsDominantHand, addr 0x4039db4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDominantHand();

  /// @brief Method get_IsPointerPoseValid, addr 0x4039d70, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsPointerPoseValid();

  /// @brief Method get_IsSystemGestureInProgress, addr 0x4039d5c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsSystemGestureInProgress();

  /// @brief Method get_IsTracked, addr 0x4039d48, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsTracked();

  /// @brief Method get_PointerPose, addr 0x4039d84, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_PointerPose();

  /// @brief Convert to "::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider"
  constexpr ::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider* i___GlobalNamespace__OVRMeshRenderer_IOVRMeshRendererDataProvider() noexcept;

  /// @brief Convert to "::GlobalNamespace::OVRMesh_IOVRMeshDataProvider"
  constexpr ::GlobalNamespace::OVRMesh_IOVRMeshDataProvider* i___GlobalNamespace__OVRMesh_IOVRMeshDataProvider() noexcept;

  /// @brief Convert to "::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider"
  constexpr ::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider* i___GlobalNamespace__OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider() noexcept;

  /// @brief Convert to "::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider"
  constexpr ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* i___GlobalNamespace__OVRSkeleton_IOVRSkeletonDataProvider() noexcept;

  /// @brief Method set_HandConfidence, addr 0x4039dac, size 0x8, virtual false, abstract: false, final false
  inline void set_HandConfidence(::GlobalNamespace::OVRHand_TrackingConfidence value);

  /// @brief Method set_HandScale, addr 0x4039d9c, size 0x8, virtual false, abstract: false, final false
  inline void set_HandScale(float_t value);

  /// @brief Method set_IsDataHighConfidence, addr 0x4039d3c, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDataHighConfidence(bool value);

  /// @brief Method set_IsDataValid, addr 0x4039d28, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDataValid(bool value);

  /// @brief Method set_IsDominantHand, addr 0x4039dbc, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDominantHand(bool value);

  /// @brief Method set_IsPointerPoseValid, addr 0x4039d78, size 0xc, virtual false, abstract: false, final false
  inline void set_IsPointerPoseValid(bool value);

  /// @brief Method set_IsSystemGestureInProgress, addr 0x4039d64, size 0xc, virtual false, abstract: false, final false
  inline void set_IsSystemGestureInProgress(bool value);

  /// @brief Method set_IsTracked, addr 0x4039d50, size 0xc, virtual false, abstract: false, final false
  inline void set_IsTracked(bool value);

  /// @brief Method set_PointerPose, addr 0x4039d8c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8431 };

  /// @brief Field HandType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::OVRHand_Hand ___HandType;

  /// @brief Field _pointerPoseRoot, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____pointerPoseRoot;

  /// @brief Field m_showState, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_InputDeviceShowState ___m_showState;

  /// @brief Field _pointerPoseGO, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____pointerPoseGO;

  /// @brief Field _handState, offset: 0x40, size: 0x78, def value: None
  ::GlobalNamespace::OVRPlugin_HandState ____handState;

  /// @brief Field <IsDataValid>k__BackingField, offset: 0xb8, size: 0x1, def value: None
  bool ____IsDataValid_k__BackingField;

  /// @brief Field <IsDataHighConfidence>k__BackingField, offset: 0xb9, size: 0x1, def value: None
  bool ____IsDataHighConfidence_k__BackingField;

  /// @brief Field <IsTracked>k__BackingField, offset: 0xba, size: 0x1, def value: None
  bool ____IsTracked_k__BackingField;

  /// @brief Field <IsSystemGestureInProgress>k__BackingField, offset: 0xbb, size: 0x1, def value: None
  bool ____IsSystemGestureInProgress_k__BackingField;

  /// @brief Field <IsPointerPoseValid>k__BackingField, offset: 0xbc, size: 0x1, def value: None
  bool ____IsPointerPoseValid_k__BackingField;

  /// @brief Field <PointerPose>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____PointerPose_k__BackingField;

  /// @brief Field <HandScale>k__BackingField, offset: 0xc8, size: 0x4, def value: None
  float_t ____HandScale_k__BackingField;

  /// @brief Field <HandConfidence>k__BackingField, offset: 0xcc, size: 0x4, def value: None
  ::GlobalNamespace::OVRHand_TrackingConfidence ____HandConfidence_k__BackingField;

  /// @brief Field <IsDominantHand>k__BackingField, offset: 0xd0, size: 0x1, def value: None
  bool ____IsDominantHand_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRHand, ___HandType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____pointerPoseRoot) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ___m_showState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____pointerPoseGO) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____handState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____IsDataValid_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____IsDataHighConfidence_k__BackingField) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____IsTracked_k__BackingField) == 0xba, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____IsSystemGestureInProgress_k__BackingField) == 0xbb, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____IsPointerPoseValid_k__BackingField) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____PointerPose_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____HandScale_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____HandConfidence_k__BackingField) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____IsDominantHand_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHand, 0xd8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHand_Hand, "", "OVRHand/Hand");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHand_HandFinger, "", "OVRHand/HandFinger");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHand_TrackingConfidence, "", "OVRHand/TrackingConfidence");
NEED_NO_BOX(::GlobalNamespace::OVRHand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHand*, "", "OVRHand");
