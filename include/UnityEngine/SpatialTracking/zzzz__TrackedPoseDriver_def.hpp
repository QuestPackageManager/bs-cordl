#pragma once
// IWYU pragma private; include "UnityEngine/SpatialTracking/TrackedPoseDriver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriver_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackedPoseDriver)
namespace UnityEngine::Experimental::XR::Interaction {
class BasePoseProvider;
}
namespace UnityEngine::SpatialTracking {
struct PoseDataFlags;
}
namespace UnityEngine::SpatialTracking {
struct __TrackedPoseDriver__DeviceType;
}
namespace UnityEngine::SpatialTracking {
struct __TrackedPoseDriver__TrackedPose;
}
namespace UnityEngine::SpatialTracking {
struct __TrackedPoseDriver__TrackingType;
}
namespace UnityEngine::SpatialTracking {
struct __TrackedPoseDriver__UpdateType;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::SpatialTracking {
struct __TrackedPoseDriver__DeviceType;
}
namespace UnityEngine::SpatialTracking {
struct __TrackedPoseDriver__TrackedPose;
}
namespace UnityEngine::SpatialTracking {
struct __TrackedPoseDriver__TrackingType;
}
namespace UnityEngine::SpatialTracking {
struct __TrackedPoseDriver__UpdateType;
}
namespace UnityEngine::SpatialTracking {
class TrackedPoseDriver;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType);
MARK_VAL_T(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose);
MARK_VAL_T(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType);
MARK_VAL_T(::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType);
MARK_REF_PTR_T(::UnityEngine::SpatialTracking::TrackedPoseDriver);
// Type: ::DeviceType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::SpatialTracking {
// Is value type: true
// CS Name: ::TrackedPoseDriver::DeviceType
struct CORDL_TYPE __TrackedPoseDriver__DeviceType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TrackedPoseDriver__DeviceType_Unwrapped
  enum struct ____TrackedPoseDriver__DeviceType_Unwrapped : int32_t {
    __E_GenericXRDevice = static_cast<int32_t>(0x0),
    __E_GenericXRController = static_cast<int32_t>(0x1),
    __E_GenericXRRemote = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TrackedPoseDriver__DeviceType_Unwrapped() const noexcept {
    return static_cast<____TrackedPoseDriver__DeviceType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackedPoseDriver__DeviceType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TrackedPoseDriver__DeviceType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field GenericXRController value: static_cast<int32_t>(0x1)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType const GenericXRController;

  /// @brief Field GenericXRDevice value: static_cast<int32_t>(0x0)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType const GenericXRDevice;

  /// @brief Field GenericXRRemote value: static_cast<int32_t>(0x2)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType const GenericXRRemote;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18907 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::SpatialTracking
// Type: ::TrackedPose
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::SpatialTracking {
// Is value type: true
// CS Name: ::TrackedPoseDriver::TrackedPose
struct CORDL_TYPE __TrackedPoseDriver__TrackedPose {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TrackedPoseDriver__TrackedPose_Unwrapped
  enum struct ____TrackedPoseDriver__TrackedPose_Unwrapped : int32_t {
    __E_LeftEye = static_cast<int32_t>(0x0),
    __E_RightEye = static_cast<int32_t>(0x1),
    __E_Center = static_cast<int32_t>(0x2),
    __E_Head = static_cast<int32_t>(0x3),
    __E_LeftPose = static_cast<int32_t>(0x4),
    __E_RightPose = static_cast<int32_t>(0x5),
    __E_ColorCamera = static_cast<int32_t>(0x6),
    __E_DepthCameraDeprecated = static_cast<int32_t>(0x7),
    __E_FisheyeCameraDeprected = static_cast<int32_t>(0x8),
    __E_DeviceDeprecated = static_cast<int32_t>(0x9),
    __E_RemotePose = static_cast<int32_t>(0xa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TrackedPoseDriver__TrackedPose_Unwrapped() const noexcept {
    return static_cast<____TrackedPoseDriver__TrackedPose_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackedPoseDriver__TrackedPose();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TrackedPoseDriver__TrackedPose(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Center value: static_cast<int32_t>(0x2)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const Center;

  /// @brief Field ColorCamera value: static_cast<int32_t>(0x6)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const ColorCamera;

  /// @brief Field DepthCameraDeprecated value: static_cast<int32_t>(0x7)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const DepthCameraDeprecated;

  /// @brief Field DeviceDeprecated value: static_cast<int32_t>(0x9)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const DeviceDeprecated;

  /// @brief Field FisheyeCameraDeprected value: static_cast<int32_t>(0x8)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const FisheyeCameraDeprected;

  /// @brief Field Head value: static_cast<int32_t>(0x3)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const Head;

  /// @brief Field LeftEye value: static_cast<int32_t>(0x0)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const LeftEye;

  /// @brief Field LeftPose value: static_cast<int32_t>(0x4)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const LeftPose;

  /// @brief Field RemotePose value: static_cast<int32_t>(0xa)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const RemotePose;

  /// @brief Field RightEye value: static_cast<int32_t>(0x1)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const RightEye;

  /// @brief Field RightPose value: static_cast<int32_t>(0x5)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const RightPose;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18908 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::SpatialTracking
// Type: ::TrackingType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::SpatialTracking {
// Is value type: true
// CS Name: ::TrackedPoseDriver::TrackingType
struct CORDL_TYPE __TrackedPoseDriver__TrackingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TrackedPoseDriver__TrackingType_Unwrapped
  enum struct ____TrackedPoseDriver__TrackingType_Unwrapped : int32_t {
    __E_RotationAndPosition = static_cast<int32_t>(0x0),
    __E_RotationOnly = static_cast<int32_t>(0x1),
    __E_PositionOnly = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TrackedPoseDriver__TrackingType_Unwrapped() const noexcept {
    return static_cast<____TrackedPoseDriver__TrackingType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackedPoseDriver__TrackingType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TrackedPoseDriver__TrackingType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field PositionOnly value: static_cast<int32_t>(0x2)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType const PositionOnly;

  /// @brief Field RotationAndPosition value: static_cast<int32_t>(0x0)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType const RotationAndPosition;

  /// @brief Field RotationOnly value: static_cast<int32_t>(0x1)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType const RotationOnly;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18909 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::SpatialTracking
// Type: ::UpdateType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::SpatialTracking {
// Is value type: true
// CS Name: ::TrackedPoseDriver::UpdateType
struct CORDL_TYPE __TrackedPoseDriver__UpdateType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TrackedPoseDriver__UpdateType_Unwrapped
  enum struct ____TrackedPoseDriver__UpdateType_Unwrapped : int32_t {
    __E_UpdateAndBeforeRender = static_cast<int32_t>(0x0),
    __E_Update = static_cast<int32_t>(0x1),
    __E_BeforeRender = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TrackedPoseDriver__UpdateType_Unwrapped() const noexcept {
    return static_cast<____TrackedPoseDriver__UpdateType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackedPoseDriver__UpdateType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TrackedPoseDriver__UpdateType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BeforeRender value: static_cast<int32_t>(0x2)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType const BeforeRender;

  /// @brief Field Update value: static_cast<int32_t>(0x1)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType const Update;

  /// @brief Field UpdateAndBeforeRender value: static_cast<int32_t>(0x0)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType const UpdateAndBeforeRender;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18910 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::SpatialTracking
// Type: UnityEngine.SpatialTracking::TrackedPoseDriver
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::SpatialTracking {
// Is value type: false
// CS Name: ::UnityEngine.SpatialTracking::TrackedPoseDriver*
class CORDL_TYPE TrackedPoseDriver : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using DeviceType = ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType;

  using TrackedPose = ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose;

  using TrackingType = ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType;

  using UpdateType = ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType;

  __declspec(property(get = get_UseRelativeTransform, put = set_UseRelativeTransform)) bool UseRelativeTransform;

  __declspec(property(get = get_deviceType, put = set_deviceType)) ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType deviceType;

  /// @brief Field m_Device, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Device, put = __cordl_internal_set_m_Device)) ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType m_Device;

  /// @brief Field m_OriginPose, offset 0x3c, size 0x1c
  __declspec(property(get = __cordl_internal_get_m_OriginPose, put = __cordl_internal_set_m_OriginPose)) ::UnityEngine::Pose m_OriginPose;

  /// @brief Field m_PoseProviderComponent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PoseProviderComponent, put = __cordl_internal_set_m_PoseProviderComponent)) ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider>
      m_PoseProviderComponent;

  /// @brief Field m_PoseSource, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PoseSource, put = __cordl_internal_set_m_PoseSource)) ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose m_PoseSource;

  /// @brief Field m_TrackingType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TrackingType, put = __cordl_internal_set_m_TrackingType)) ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType m_TrackingType;

  /// @brief Field m_UpdateType, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UpdateType, put = __cordl_internal_set_m_UpdateType)) ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType m_UpdateType;

  /// @brief Field m_UseRelativeTransform, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseRelativeTransform, put = __cordl_internal_set_m_UseRelativeTransform)) bool m_UseRelativeTransform;

  __declspec(property(get = get_originPose, put = set_originPose)) ::UnityEngine::Pose originPose;

  __declspec(property(get = get_poseProviderComponent, put = set_poseProviderComponent)) ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> poseProviderComponent;

  __declspec(property(get = get_poseSource, put = set_poseSource)) ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose poseSource;

  __declspec(property(get = get_trackingType, put = set_trackingType)) ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType trackingType;

  __declspec(property(get = get_updateType, put = set_updateType)) ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType updateType;

  /// @brief Method Awake, addr 0x489f0ec, size 0x4, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method CacheLocalPosition, addr 0x489f07c, size 0x50, virtual false, abstract: false, final false
  inline void CacheLocalPosition();

  /// @brief Method FixedUpdate, addr 0x489f224, size 0x1c, virtual true, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method GetPoseData, addr 0x489ef4c, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::SpatialTracking::PoseDataFlags GetPoseData(::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType device,
                                                                   ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose poseSource, ByRef<::UnityEngine::Pose> resultPose);

  /// @brief Method HasStereoCamera, addr 0x489f420, size 0xb8, virtual false, abstract: false, final false
  inline bool HasStereoCamera();

  static inline ::UnityEngine::SpatialTracking::TrackedPoseDriver* New_ctor();

  /// @brief Method OnBeforeRender, addr 0x489f25c, size 0x20, virtual true, abstract: false, final false
  inline void OnBeforeRender();

  /// @brief Method OnDestroy, addr 0x489f0f0, size 0x4, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x489f188, size 0x9c, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x489f0f4, size 0x94, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method PerformUpdate, addr 0x489f4d8, size 0x94, virtual true, abstract: false, final false
  inline void PerformUpdate();

  /// @brief Method ResetToCachedLocalPosition, addr 0x489f0cc, size 0x20, virtual false, abstract: false, final false
  inline void ResetToCachedLocalPosition();

  /// @brief Method SetLocalTransform, addr 0x489f27c, size 0xe4, virtual true, abstract: false, final false
  inline void SetLocalTransform(::UnityEngine::Vector3 newPosition, ::UnityEngine::Quaternion newRotation, ::UnityEngine::SpatialTracking::PoseDataFlags poseFlags);

  /// @brief Method SetPoseSource, addr 0x489edf8, size 0x144, virtual false, abstract: false, final false
  inline bool SetPoseSource(::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType deviceType, ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose pose);

  /// @brief Method TransformPoseByOriginIfNeeded, addr 0x489f360, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose TransformPoseByOriginIfNeeded(::UnityEngine::Pose pose);

  /// @brief Method Update, addr 0x489f240, size 0x1c, virtual true, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType const& __cordl_internal_get_m_Device() const;

  constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType& __cordl_internal_get_m_Device();

  constexpr ::UnityEngine::Pose const& __cordl_internal_get_m_OriginPose() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get_m_OriginPose();

  constexpr ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> const& __cordl_internal_get_m_PoseProviderComponent() const;

  constexpr ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider>& __cordl_internal_get_m_PoseProviderComponent();

  constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const& __cordl_internal_get_m_PoseSource() const;

  constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose& __cordl_internal_get_m_PoseSource();

  constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType const& __cordl_internal_get_m_TrackingType() const;

  constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType& __cordl_internal_get_m_TrackingType();

  constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType const& __cordl_internal_get_m_UpdateType() const;

  constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType& __cordl_internal_get_m_UpdateType();

  constexpr bool const& __cordl_internal_get_m_UseRelativeTransform() const;

  constexpr bool& __cordl_internal_get_m_UseRelativeTransform();

  constexpr void __cordl_internal_set_m_Device(::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType value);

  constexpr void __cordl_internal_set_m_OriginPose(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set_m_PoseProviderComponent(::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> value);

  constexpr void __cordl_internal_set_m_PoseSource(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose value);

  constexpr void __cordl_internal_set_m_TrackingType(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType value);

  constexpr void __cordl_internal_set_m_UpdateType(::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType value);

  constexpr void __cordl_internal_set_m_UseRelativeTransform(bool value);

  /// @brief Method .ctor, addr 0x489f56c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_UseRelativeTransform, addr 0x489f038, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseRelativeTransform();

  /// @brief Method get_deviceType, addr 0x489edd8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType get_deviceType();

  /// @brief Method get_originPose, addr 0x489f04c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose get_originPose();

  /// @brief Method get_poseProviderComponent, addr 0x489ef3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> get_poseProviderComponent();

  /// @brief Method get_poseSource, addr 0x489ede8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose get_poseSource();

  /// @brief Method get_trackingType, addr 0x489f018, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType get_trackingType();

  /// @brief Method get_updateType, addr 0x489f028, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType get_updateType();

  /// @brief Method set_UseRelativeTransform, addr 0x489f040, size 0xc, virtual false, abstract: false, final false
  inline void set_UseRelativeTransform(bool value);

  /// @brief Method set_deviceType, addr 0x489ede0, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceType(::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType value);

  /// @brief Method set_originPose, addr 0x489f060, size 0x1c, virtual false, abstract: false, final false
  inline void set_originPose(::UnityEngine::Pose value);

  /// @brief Method set_poseProviderComponent, addr 0x489ef44, size 0x8, virtual false, abstract: false, final false
  inline void set_poseProviderComponent(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider* value);

  /// @brief Method set_poseSource, addr 0x489edf0, size 0x8, virtual false, abstract: false, final false
  inline void set_poseSource(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose value);

  /// @brief Method set_trackingType, addr 0x489f020, size 0x8, virtual false, abstract: false, final false
  inline void set_trackingType(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType value);

  /// @brief Method set_updateType, addr 0x489f030, size 0x8, virtual false, abstract: false, final false
  inline void set_updateType(::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackedPoseDriver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackedPoseDriver(TrackedPoseDriver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackedPoseDriver(TrackedPoseDriver const&) = delete;

  /// @brief Field m_Device, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType ___m_Device;

  /// @brief Field m_PoseSource, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose ___m_PoseSource;

  /// @brief Field m_PoseProviderComponent, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> ___m_PoseProviderComponent;

  /// @brief Field m_TrackingType, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType ___m_TrackingType;

  /// @brief Field m_UpdateType, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType ___m_UpdateType;

  /// @brief Field m_UseRelativeTransform, offset: 0x38, size: 0x1, def value: None
  bool ___m_UseRelativeTransform;

  /// @brief Field m_OriginPose, offset: 0x3c, size: 0x1c, def value: None
  ::UnityEngine::Pose ___m_OriginPose;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18911 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpatialTracking::TrackedPoseDriver, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::SpatialTracking::TrackedPoseDriver, ___m_Device) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpatialTracking::TrackedPoseDriver, ___m_PoseSource) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpatialTracking::TrackedPoseDriver, ___m_PoseProviderComponent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpatialTracking::TrackedPoseDriver, ___m_TrackingType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpatialTracking::TrackedPoseDriver, ___m_UpdateType) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpatialTracking::TrackedPoseDriver, ___m_UseRelativeTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpatialTracking::TrackedPoseDriver, ___m_OriginPose) == 0x3c, "Offset mismatch!");

} // namespace UnityEngine::SpatialTracking
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType, "UnityEngine.SpatialTracking", "TrackedPoseDriver/DeviceType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose, "UnityEngine.SpatialTracking", "TrackedPoseDriver/TrackedPose");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType, "UnityEngine.SpatialTracking", "TrackedPoseDriver/TrackingType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType, "UnityEngine.SpatialTracking", "TrackedPoseDriver/UpdateType");
NEED_NO_BOX(::UnityEngine::SpatialTracking::TrackedPoseDriver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::TrackedPoseDriver*, "UnityEngine.SpatialTracking", "TrackedPoseDriver");
