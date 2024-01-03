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
class __OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider;
}
namespace GlobalNamespace {
struct __OVRHand__Hand;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
struct __OVRMesh__MeshType;
}
namespace GlobalNamespace {
struct __OVRSkeleton__SkeletonPoseData;
}
namespace GlobalNamespace {
class __OVRSkeleton__IOVRSkeletonDataProvider;
}
namespace GlobalNamespace {
struct __OVRSkeletonRenderer__SkeletonRendererData;
}
namespace GlobalNamespace {
struct __OVRHand__HandFinger;
}
namespace GlobalNamespace {
class __OVRMeshRenderer__IOVRMeshRendererDataProvider;
}
namespace GlobalNamespace {
struct __OVRPlugin__Step;
}
namespace GlobalNamespace {
struct __OVRHand__TrackingConfidence;
}
namespace GlobalNamespace {
struct __OVRSkeleton__SkeletonType;
}
namespace GlobalNamespace {
struct __OVRMeshRenderer__MeshRendererData;
}
namespace GlobalNamespace {
class __OVRMesh__IOVRMeshDataProvider;
}
namespace UnityEngine {
class GameObject;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8113))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRHand__Hand(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRHand__Hand();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRHand__Hand const None;

  /// @brief Field HandLeft value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRHand__Hand const HandLeft;

  /// @brief Field HandRight value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRHand__Hand const HandRight;

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8114))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRHand__HandFinger(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRHand__HandFinger();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Thumb value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRHand__HandFinger const Thumb;

  /// @brief Field Index value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRHand__HandFinger const Index;

  /// @brief Field Middle value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRHand__HandFinger const Middle;

  /// @brief Field Ring value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRHand__HandFinger const Ring;

  /// @brief Field Pinky value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRHand__HandFinger const Pinky;

  /// @brief Field Max value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRHand__HandFinger const Max;

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8115))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRHand__TrackingConfidence(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRHand__TrackingConfidence();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Low value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRHand__TrackingConfidence const Low;

  /// @brief Field High value: static_cast<int32_t>(0x3f800000)
  static ::GlobalNamespace::__OVRHand__TrackingConfidence const High;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(8115)), TypeDefinitionIndex(TypeDefinitionIndex(8113)),
// TypeDefinitionIndex(TypeDefinitionIndex(7603)), TypeDefinitionIndex(TypeDefinitionIndex(7771))} Self: TypeDefinitionIndex(TypeDefinitionIndex(8116)) CS Name: ::OVRHand*
class CORDL_TYPE OVRHand : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using TrackingConfidence = ::GlobalNamespace::__OVRHand__TrackingConfidence;

  using HandFinger = ::GlobalNamespace::__OVRHand__HandFinger;

  using Hand = ::GlobalNamespace::__OVRHand__Hand;

  /// @brief Field HandType, offset 0x18, size 0x4
  __declspec(property(get = __get_HandType, put = __set_HandType))::GlobalNamespace::__OVRHand__Hand HandType;

  /// @brief Field _pointerPoseRoot, offset 0x20, size 0x8
  __declspec(property(get = __get__pointerPoseRoot, put = __set__pointerPoseRoot))::UnityEngine::Transform* _pointerPoseRoot;

  /// @brief Field m_showState, offset 0x28, size 0x4
  __declspec(property(get = __get_m_showState, put = __set_m_showState))::GlobalNamespace::__OVRInput__InputDeviceShowState m_showState;

  /// @brief Field _pointerPoseGO, offset 0x30, size 0x8
  __declspec(property(get = __get__pointerPoseGO, put = __set__pointerPoseGO))::UnityEngine::GameObject* _pointerPoseGO;

  /// @brief Field _handState, offset 0x38, size 0x78
  __declspec(property(get = __get__handState, put = __set__handState))::GlobalNamespace::__OVRPlugin__HandState _handState;

  /// @brief Field <IsDataValid>k__BackingField, offset 0xb0, size 0x1
  __declspec(property(get = __get__IsDataValid_k__BackingField, put = __set__IsDataValid_k__BackingField)) bool _IsDataValid_k__BackingField;

  /// @brief Field <IsDataHighConfidence>k__BackingField, offset 0xb1, size 0x1
  __declspec(property(get = __get__IsDataHighConfidence_k__BackingField, put = __set__IsDataHighConfidence_k__BackingField)) bool _IsDataHighConfidence_k__BackingField;

  /// @brief Field <IsTracked>k__BackingField, offset 0xb2, size 0x1
  __declspec(property(get = __get__IsTracked_k__BackingField, put = __set__IsTracked_k__BackingField)) bool _IsTracked_k__BackingField;

  /// @brief Field <IsSystemGestureInProgress>k__BackingField, offset 0xb3, size 0x1
  __declspec(property(get = __get__IsSystemGestureInProgress_k__BackingField, put = __set__IsSystemGestureInProgress_k__BackingField)) bool _IsSystemGestureInProgress_k__BackingField;

  /// @brief Field <IsPointerPoseValid>k__BackingField, offset 0xb4, size 0x1
  __declspec(property(get = __get__IsPointerPoseValid_k__BackingField, put = __set__IsPointerPoseValid_k__BackingField)) bool _IsPointerPoseValid_k__BackingField;

  /// @brief Field <PointerPose>k__BackingField, offset 0xb8, size 0x8
  __declspec(property(get = __get__PointerPose_k__BackingField, put = __set__PointerPose_k__BackingField))::UnityEngine::Transform* _PointerPose_k__BackingField;

  /// @brief Field <HandScale>k__BackingField, offset 0xc0, size 0x4
  __declspec(property(get = __get__HandScale_k__BackingField, put = __set__HandScale_k__BackingField)) float_t _HandScale_k__BackingField;

  /// @brief Field <HandConfidence>k__BackingField, offset 0xc4, size 0x4
  __declspec(property(get = __get__HandConfidence_k__BackingField, put = __set__HandConfidence_k__BackingField))::GlobalNamespace::__OVRHand__TrackingConfidence _HandConfidence_k__BackingField;

  /// @brief Field <IsDominantHand>k__BackingField, offset 0xc8, size 0x1
  __declspec(property(get = __get__IsDominantHand_k__BackingField, put = __set__IsDominantHand_k__BackingField)) bool _IsDominantHand_k__BackingField;

  __declspec(property(get = get_IsDataValid, put = set_IsDataValid)) bool IsDataValid;

  __declspec(property(get = get_IsDataHighConfidence, put = set_IsDataHighConfidence)) bool IsDataHighConfidence;

  __declspec(property(get = get_IsTracked, put = set_IsTracked)) bool IsTracked;

  __declspec(property(get = get_IsSystemGestureInProgress, put = set_IsSystemGestureInProgress)) bool IsSystemGestureInProgress;

  __declspec(property(get = get_IsPointerPoseValid, put = set_IsPointerPoseValid)) bool IsPointerPoseValid;

  __declspec(property(get = get_PointerPose, put = set_PointerPose))::UnityEngine::Transform* PointerPose;

  __declspec(property(get = get_HandScale, put = set_HandScale)) float_t HandScale;

  __declspec(property(get = get_HandConfidence, put = set_HandConfidence))::GlobalNamespace::__OVRHand__TrackingConfidence HandConfidence;

  __declspec(property(get = get_IsDominantHand, put = set_IsDominantHand)) bool IsDominantHand;

  /// @brief Convert operator to "::GlobalNamespace::__OVRSkeleton__IOVRSkeletonDataProvider"
  constexpr operator ::GlobalNamespace::__OVRSkeleton__IOVRSkeletonDataProvider*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider"
  constexpr operator ::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider"
  constexpr operator ::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::__OVRMeshRenderer__IOVRMeshRendererDataProvider"
  constexpr operator ::GlobalNamespace::__OVRMeshRenderer__IOVRMeshRendererDataProvider*() noexcept;

  constexpr ::GlobalNamespace::__OVRHand__Hand& __get_HandType();

  constexpr ::GlobalNamespace::__OVRHand__Hand const& __get_HandType() const;

  constexpr void __set_HandType(::GlobalNamespace::__OVRHand__Hand value);

  constexpr ::UnityEngine::Transform*& __get__pointerPoseRoot();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__pointerPoseRoot() const;

  constexpr void __set__pointerPoseRoot(::UnityEngine::Transform* value);

  constexpr ::GlobalNamespace::__OVRInput__InputDeviceShowState& __get_m_showState();

  constexpr ::GlobalNamespace::__OVRInput__InputDeviceShowState const& __get_m_showState() const;

  constexpr void __set_m_showState(::GlobalNamespace::__OVRInput__InputDeviceShowState value);

  constexpr ::UnityEngine::GameObject*& __get__pointerPoseGO();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__pointerPoseGO() const;

  constexpr void __set__pointerPoseGO(::UnityEngine::GameObject* value);

  constexpr ::GlobalNamespace::__OVRPlugin__HandState& __get__handState();

  constexpr ::GlobalNamespace::__OVRPlugin__HandState const& __get__handState() const;

  constexpr void __set__handState(::GlobalNamespace::__OVRPlugin__HandState value);

  constexpr bool& __get__IsDataValid_k__BackingField();

  constexpr bool const& __get__IsDataValid_k__BackingField() const;

  constexpr void __set__IsDataValid_k__BackingField(bool value);

  constexpr bool& __get__IsDataHighConfidence_k__BackingField();

  constexpr bool const& __get__IsDataHighConfidence_k__BackingField() const;

  constexpr void __set__IsDataHighConfidence_k__BackingField(bool value);

  constexpr bool& __get__IsTracked_k__BackingField();

  constexpr bool const& __get__IsTracked_k__BackingField() const;

  constexpr void __set__IsTracked_k__BackingField(bool value);

  constexpr bool& __get__IsSystemGestureInProgress_k__BackingField();

  constexpr bool const& __get__IsSystemGestureInProgress_k__BackingField() const;

  constexpr void __set__IsSystemGestureInProgress_k__BackingField(bool value);

  constexpr bool& __get__IsPointerPoseValid_k__BackingField();

  constexpr bool const& __get__IsPointerPoseValid_k__BackingField() const;

  constexpr void __set__IsPointerPoseValid_k__BackingField(bool value);

  constexpr ::UnityEngine::Transform*& __get__PointerPose_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__PointerPose_k__BackingField() const;

  constexpr void __set__PointerPose_k__BackingField(::UnityEngine::Transform* value);

  constexpr float_t& __get__HandScale_k__BackingField();

  constexpr float_t const& __get__HandScale_k__BackingField() const;

  constexpr void __set__HandScale_k__BackingField(float_t value);

  constexpr ::GlobalNamespace::__OVRHand__TrackingConfidence& __get__HandConfidence_k__BackingField();

  constexpr ::GlobalNamespace::__OVRHand__TrackingConfidence const& __get__HandConfidence_k__BackingField() const;

  constexpr void __set__HandConfidence_k__BackingField(::GlobalNamespace::__OVRHand__TrackingConfidence value);

  constexpr bool& __get__IsDominantHand_k__BackingField();

  constexpr bool const& __get__IsDominantHand_k__BackingField() const;

  constexpr void __set__IsDominantHand_k__BackingField(bool value);

  /// @brief Method SetHandType, addr 0x27aeb50, size 0x8, virtual false, abstract: false, final false
  inline void SetHandType(::GlobalNamespace::__OVRHand__Hand type);

  /// @brief Method get_IsDataValid, addr 0x27aeb58, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDataValid();

  /// @brief Method set_IsDataValid, addr 0x27aeb60, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDataValid(bool value);

  /// @brief Method get_IsDataHighConfidence, addr 0x27aeb6c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDataHighConfidence();

  /// @brief Method set_IsDataHighConfidence, addr 0x27aeb74, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDataHighConfidence(bool value);

  /// @brief Method get_IsTracked, addr 0x27aeb80, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsTracked();

  /// @brief Method set_IsTracked, addr 0x27aeb88, size 0xc, virtual false, abstract: false, final false
  inline void set_IsTracked(bool value);

  /// @brief Method get_IsSystemGestureInProgress, addr 0x27aeb94, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsSystemGestureInProgress();

  /// @brief Method set_IsSystemGestureInProgress, addr 0x27aeb9c, size 0xc, virtual false, abstract: false, final false
  inline void set_IsSystemGestureInProgress(bool value);

  /// @brief Method get_IsPointerPoseValid, addr 0x27aeba8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsPointerPoseValid();

  /// @brief Method set_IsPointerPoseValid, addr 0x27aebb0, size 0xc, virtual false, abstract: false, final false
  inline void set_IsPointerPoseValid(bool value);

  /// @brief Method get_PointerPose, addr 0x27aebbc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_PointerPose();

  /// @brief Method set_PointerPose, addr 0x27aebc4, size 0x8, virtual false, abstract: false, final false
  inline void set_PointerPose(::UnityEngine::Transform* value);

  /// @brief Method get_HandScale, addr 0x27aebcc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_HandScale();

  /// @brief Method set_HandScale, addr 0x27aebd4, size 0x8, virtual false, abstract: false, final false
  inline void set_HandScale(float_t value);

  /// @brief Method get_HandConfidence, addr 0x27aebdc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRHand__TrackingConfidence get_HandConfidence();

  /// @brief Method set_HandConfidence, addr 0x27aebe4, size 0x8, virtual false, abstract: false, final false
  inline void set_HandConfidence(::GlobalNamespace::__OVRHand__TrackingConfidence value);

  /// @brief Method get_IsDominantHand, addr 0x27aebec, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDominantHand();

  /// @brief Method set_IsDominantHand, addr 0x27aebf4, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDominantHand(bool value);

  /// @brief Method Awake, addr 0x27aec00, size 0xcc, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Update, addr 0x27aef2c, size 0x8, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method FixedUpdate, addr 0x27aef34, size 0x74, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method GetHandState, addr 0x27aeccc, size 0x260, virtual false, abstract: false, final false
  inline void GetHandState(::GlobalNamespace::__OVRPlugin__Step step);

  /// @brief Method GetFingerIsPinching, addr 0x27aefa8, size 0x28, virtual false, abstract: false, final false
  inline bool GetFingerIsPinching(::GlobalNamespace::__OVRHand__HandFinger finger);

  /// @brief Method GetFingerPinchStrength, addr 0x27aefd0, size 0x40, virtual false, abstract: false, final false
  inline float_t GetFingerPinchStrength(::GlobalNamespace::__OVRHand__HandFinger finger);

  /// @brief Method GetFingerConfidence, addr 0x27af010, size 0x44, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRHand__TrackingConfidence GetFingerConfidence(::GlobalNamespace::__OVRHand__HandFinger finger);

  /// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType, addr 0x27af054, size 0x18, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRSkeleton__SkeletonType OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType();

  /// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData, addr 0x27af06c, size 0x6c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRSkeleton__SkeletonPoseData OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData();

  /// @brief Method OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData, addr 0x27af0d8, size 0x4c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRSkeletonRenderer__SkeletonRendererData OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData();

  /// @brief Method OVRMesh.IOVRMeshDataProvider.GetMeshType, addr 0x27af124, size 0x18, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRMesh__MeshType OVRMesh_IOVRMeshDataProvider_GetMeshType();

  /// @brief Method OVRMeshRenderer.IOVRMeshRendererDataProvider.GetMeshRendererData, addr 0x27af13c, size 0x50, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRMeshRenderer__MeshRendererData OVRMeshRenderer_IOVRMeshRendererDataProvider_GetMeshRendererData();

  static inline ::GlobalNamespace::OVRHand* New_ctor();

  /// @brief Method .ctor, addr 0x27af18c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.get_enabled, addr 0x27af1a4, size 0x8, virtual true, abstract: false, final true
  inline bool OVRSkeleton_IOVRSkeletonDataProvider_get_enabled();

  // Ctor Parameters [CppParam { name: "", ty: "OVRHand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRHand(OVRHand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRHand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRHand(OVRHand const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRHand();

public:
  /// @brief Field HandType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRHand__Hand ___HandType;

  /// @brief Field _pointerPoseRoot, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____pointerPoseRoot;

  /// @brief Field m_showState, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__InputDeviceShowState ___m_showState;

  /// @brief Field _pointerPoseGO, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____pointerPoseGO;

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
  ::UnityEngine::Transform* ____PointerPose_k__BackingField;

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
