#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__DepthTextureMode_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRManager)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace GlobalNamespace {
struct __OVRManager__CameraDevice;
}
namespace GlobalNamespace {
class OVRProfile;
}
namespace UnityEngine {
struct LayerMask;
}
namespace GlobalNamespace {
struct OVRSpace;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct __OVRManager__CompositionMethod;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct __OVRManager__PassthroughInitializationState;
}
namespace GlobalNamespace {
struct __OVRManager__VirtualGreenScreenType;
}
namespace GlobalNamespace {
struct __OVRManager__ProcessorPerformanceLevel;
}
namespace UnityEngine {
class Camera;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__OperationResult;
}
namespace System {
template <typename T> class WeakReference_1;
}
namespace UnityEngine {
struct Vector4;
}
namespace GlobalNamespace {
struct __OVRManager__MrcCameraType;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Action_6;
}
namespace GlobalNamespace {
struct __OVRManager__TrackingOrigin;
}
namespace GlobalNamespace {
struct __OVRManager__FixedFoveatedRenderingLevel;
}
namespace GlobalNamespace {
class __OVRManager__PassthroughCapabilities;
}
namespace System {
struct Guid;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
struct __OVRManager__MrcActivationMode;
}
namespace UnityEngine::XR {
class XRInputSubsystem;
}
namespace GlobalNamespace {
class OVRMixedRealityCaptureSettings;
}
namespace GlobalNamespace {
struct OVRPose;
}
namespace GlobalNamespace {
struct __OVRManager__TiledMultiResLevel;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Action_4;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
struct __OVRManager__SystemHeadsetType;
}
namespace GlobalNamespace {
class OVRDisplay;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace GlobalNamespace {
class OVRMixedRealityCaptureConfiguration;
}
namespace UnityEngine {
class GameObject;
}
namespace System {
class Version;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class OVRTracker;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
struct __OVRManager__DepthQuality;
}
namespace GlobalNamespace {
class OVRBoundary;
}
namespace GlobalNamespace {
struct __OVRManager__XrApi;
}
namespace GlobalNamespace {
struct __OVRManager__ColorSpace;
}
namespace GlobalNamespace {
class OVRRuntimeSettings;
}
namespace GlobalNamespace {
struct __OVRManager__EyeTextureFormat;
}
namespace GlobalNamespace {
struct __OVRManager__FoveatedRenderingLevel;
}
namespace GlobalNamespace {
class __OVRManager__InstantiateMrcCameraDelegate;
}
namespace GlobalNamespace {
class __OVRManager____c;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceStorageLocation;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR {
class XRDisplaySubsystemDescriptor;
}
namespace GlobalNamespace {
struct __OVRManager__XRDevice;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRManager__CameraDevice;
}
namespace GlobalNamespace {
struct __OVRManager__ColorSpace;
}
namespace GlobalNamespace {
struct __OVRManager__CompositionMethod;
}
namespace GlobalNamespace {
struct __OVRManager__DepthQuality;
}
namespace GlobalNamespace {
struct __OVRManager__EyeTextureFormat;
}
namespace GlobalNamespace {
struct __OVRManager__FixedFoveatedRenderingLevel;
}
namespace GlobalNamespace {
struct __OVRManager__FoveatedRenderingLevel;
}
namespace GlobalNamespace {
struct __OVRManager__MrcActivationMode;
}
namespace GlobalNamespace {
struct __OVRManager__MrcCameraType;
}
namespace GlobalNamespace {
struct __OVRManager__PassthroughInitializationState;
}
namespace GlobalNamespace {
struct __OVRManager__ProcessorPerformanceLevel;
}
namespace GlobalNamespace {
struct __OVRManager__SystemHeadsetType;
}
namespace GlobalNamespace {
struct __OVRManager__TiledMultiResLevel;
}
namespace GlobalNamespace {
struct __OVRManager__TrackingOrigin;
}
namespace GlobalNamespace {
struct __OVRManager__VirtualGreenScreenType;
}
namespace GlobalNamespace {
struct __OVRManager__XRDevice;
}
namespace GlobalNamespace {
struct __OVRManager__XrApi;
}
namespace GlobalNamespace {
class OVRManager;
}
namespace GlobalNamespace {
class __OVRManager__InstantiateMrcCameraDelegate;
}
namespace GlobalNamespace {
class __OVRManager__PassthroughCapabilities;
}
namespace GlobalNamespace {
class __OVRManager____c;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRManager__CameraDevice);
MARK_VAL_T(::GlobalNamespace::__OVRManager__ColorSpace);
MARK_VAL_T(::GlobalNamespace::__OVRManager__CompositionMethod);
MARK_VAL_T(::GlobalNamespace::__OVRManager__DepthQuality);
MARK_VAL_T(::GlobalNamespace::__OVRManager__EyeTextureFormat);
MARK_VAL_T(::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel);
MARK_VAL_T(::GlobalNamespace::__OVRManager__FoveatedRenderingLevel);
MARK_VAL_T(::GlobalNamespace::__OVRManager__MrcActivationMode);
MARK_VAL_T(::GlobalNamespace::__OVRManager__MrcCameraType);
MARK_VAL_T(::GlobalNamespace::__OVRManager__PassthroughInitializationState);
MARK_VAL_T(::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel);
MARK_VAL_T(::GlobalNamespace::__OVRManager__SystemHeadsetType);
MARK_VAL_T(::GlobalNamespace::__OVRManager__TiledMultiResLevel);
MARK_VAL_T(::GlobalNamespace::__OVRManager__TrackingOrigin);
MARK_VAL_T(::GlobalNamespace::__OVRManager__VirtualGreenScreenType);
MARK_VAL_T(::GlobalNamespace::__OVRManager__XRDevice);
MARK_VAL_T(::GlobalNamespace::__OVRManager__XrApi);
MARK_REF_PTR_T(::GlobalNamespace::OVRManager);
MARK_REF_PTR_T(::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate);
MARK_REF_PTR_T(::GlobalNamespace::__OVRManager__PassthroughCapabilities);
MARK_REF_PTR_T(::GlobalNamespace::__OVRManager____c);
// Type: ::XrApi
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8520))
// CS Name: ::OVRManager::XrApi
struct CORDL_TYPE __OVRManager__XrApi {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRManager__XrApi_Unwrapped
  enum struct ____OVRManager__XrApi_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_CAPI = static_cast<int32_t>(0x1),
    __E_VRAPI = static_cast<int32_t>(0x2),
    __E_OpenXR = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRManager__XrApi_Unwrapped() const noexcept {
    return static_cast<____OVRManager__XrApi_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRManager__XrApi(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRManager__XrApi();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRManager__XrApi const Unknown;

  /// @brief Field CAPI value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRManager__XrApi const CAPI;

  /// @brief Field VRAPI value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRManager__XrApi const VRAPI;

  /// @brief Field OpenXR value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRManager__XrApi const OpenXR;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRManager__XrApi, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRManager__XrApi, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TrackingOrigin
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8521))
// CS Name: ::OVRManager::TrackingOrigin
struct CORDL_TYPE __OVRManager__TrackingOrigin {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRManager__TrackingOrigin_Unwrapped
  enum struct ____OVRManager__TrackingOrigin_Unwrapped : int32_t {
    __E_EyeLevel = static_cast<int32_t>(0x0),
    __E_FloorLevel = static_cast<int32_t>(0x1),
    __E_Stage = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRManager__TrackingOrigin_Unwrapped() const noexcept {
    return static_cast<____OVRManager__TrackingOrigin_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRManager__TrackingOrigin(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRManager__TrackingOrigin();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field EyeLevel value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRManager__TrackingOrigin const EyeLevel;

  /// @brief Field FloorLevel value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRManager__TrackingOrigin const FloorLevel;

  /// @brief Field Stage value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRManager__TrackingOrigin const Stage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRManager__TrackingOrigin, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRManager__TrackingOrigin, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::EyeTextureFormat
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8522))
// CS Name: ::OVRManager::EyeTextureFormat
struct CORDL_TYPE __OVRManager__EyeTextureFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRManager__EyeTextureFormat_Unwrapped
  enum struct ____OVRManager__EyeTextureFormat_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_R16G16B16A16_FP = static_cast<int32_t>(0x2),
    __E_R11G11B10_FP = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRManager__EyeTextureFormat_Unwrapped() const noexcept {
    return static_cast<____OVRManager__EyeTextureFormat_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRManager__EyeTextureFormat(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRManager__EyeTextureFormat();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRManager__EyeTextureFormat const Default;

  /// @brief Field R16G16B16A16_FP value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRManager__EyeTextureFormat const R16G16B16A16_FP;

  /// @brief Field R11G11B10_FP value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRManager__EyeTextureFormat const R11G11B10_FP;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRManager__EyeTextureFormat, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRManager__EyeTextureFormat, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FoveatedRenderingLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8523))
// CS Name: ::OVRManager::FoveatedRenderingLevel
struct CORDL_TYPE __OVRManager__FoveatedRenderingLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRManager__FoveatedRenderingLevel_Unwrapped
  enum struct ____OVRManager__FoveatedRenderingLevel_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Low = static_cast<int32_t>(0x1),
    __E_Medium = static_cast<int32_t>(0x2),
    __E_High = static_cast<int32_t>(0x3),
    __E_HighTop = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRManager__FoveatedRenderingLevel_Unwrapped() const noexcept {
    return static_cast<____OVRManager__FoveatedRenderingLevel_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRManager__FoveatedRenderingLevel(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRManager__FoveatedRenderingLevel();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Off value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRManager__FoveatedRenderingLevel const Off;

  /// @brief Field Low value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRManager__FoveatedRenderingLevel const Low;

  /// @brief Field Medium value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRManager__FoveatedRenderingLevel const Medium;

  /// @brief Field High value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRManager__FoveatedRenderingLevel const High;

  /// @brief Field HighTop value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRManager__FoveatedRenderingLevel const HighTop;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRManager__FoveatedRenderingLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRManager__FoveatedRenderingLevel, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FixedFoveatedRenderingLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8524))
// CS Name: ::OVRManager::FixedFoveatedRenderingLevel
struct CORDL_TYPE __OVRManager__FixedFoveatedRenderingLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRManager__FixedFoveatedRenderingLevel_Unwrapped
  enum struct ____OVRManager__FixedFoveatedRenderingLevel_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Low = static_cast<int32_t>(0x1),
    __E_Medium = static_cast<int32_t>(0x2),
    __E_High = static_cast<int32_t>(0x3),
    __E_HighTop = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRManager__FixedFoveatedRenderingLevel_Unwrapped() const noexcept {
    return static_cast<____OVRManager__FixedFoveatedRenderingLevel_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRManager__FixedFoveatedRenderingLevel(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRManager__FixedFoveatedRenderingLevel();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Off value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel const Off;

  /// @brief Field Low value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel const Low;

  /// @brief Field Medium value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel const Medium;

  /// @brief Field High value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel const High;

  /// @brief Field HighTop value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel const HighTop;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TiledMultiResLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8525))
// CS Name: ::OVRManager::TiledMultiResLevel
struct CORDL_TYPE __OVRManager__TiledMultiResLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRManager__TiledMultiResLevel_Unwrapped
  enum struct ____OVRManager__TiledMultiResLevel_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_LMSLow = static_cast<int32_t>(0x1),
    __E_LMSMedium = static_cast<int32_t>(0x2),
    __E_LMSHigh = static_cast<int32_t>(0x3),
    __E_LMSHighTop = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRManager__TiledMultiResLevel_Unwrapped() const noexcept {
    return static_cast<____OVRManager__TiledMultiResLevel_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRManager__TiledMultiResLevel(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRManager__TiledMultiResLevel();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Off value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRManager__TiledMultiResLevel const Off;

  /// @brief Field LMSLow value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRManager__TiledMultiResLevel const LMSLow;

  /// @brief Field LMSMedium value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRManager__TiledMultiResLevel const LMSMedium;

  /// @brief Field LMSHigh value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRManager__TiledMultiResLevel const LMSHigh;

  /// @brief Field LMSHighTop value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRManager__TiledMultiResLevel const LMSHighTop;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRManager__TiledMultiResLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRManager__TiledMultiResLevel, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SystemHeadsetType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8526))
// CS Name: ::OVRManager::SystemHeadsetType
struct CORDL_TYPE __OVRManager__SystemHeadsetType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRManager__SystemHeadsetType_Unwrapped
  enum struct ____OVRManager__SystemHeadsetType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Oculus_Quest = static_cast<int32_t>(0x8),
    __E_Oculus_Quest_2 = static_cast<int32_t>(0x9),
    __E_Meta_Quest_Pro = static_cast<int32_t>(0xa),
    __E_Placeholder_11 = static_cast<int32_t>(0xb),
    __E_Placeholder_12 = static_cast<int32_t>(0xc),
    __E_Placeholder_13 = static_cast<int32_t>(0xd),
    __E_Placeholder_14 = static_cast<int32_t>(0xe),
    __E_Rift_DK1 = static_cast<int32_t>(0x1000),
    __E_Rift_DK2 = static_cast<int32_t>(0x1001),
    __E_Rift_CV1 = static_cast<int32_t>(0x1002),
    __E_Rift_CB = static_cast<int32_t>(0x1003),
    __E_Rift_S = static_cast<int32_t>(0x1004),
    __E_Oculus_Link_Quest = static_cast<int32_t>(0x1005),
    __E_Oculus_Link_Quest_2 = static_cast<int32_t>(0x1006),
    __E_Meta_Link_Quest_Pro = static_cast<int32_t>(0x1007),
    __E_PC_Placeholder_4104 = static_cast<int32_t>(0x1008),
    __E_PC_Placeholder_4105 = static_cast<int32_t>(0x1009),
    __E_PC_Placeholder_4106 = static_cast<int32_t>(0x100a),
    __E_PC_Placeholder_4107 = static_cast<int32_t>(0x100b),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRManager__SystemHeadsetType_Unwrapped() const noexcept {
    return static_cast<____OVRManager__SystemHeadsetType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRManager__SystemHeadsetType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRManager__SystemHeadsetType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRManager__SystemHeadsetType const None;

  /// @brief Field Oculus_Quest value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRManager__SystemHeadsetType const Oculus_Quest;

  /// @brief Field Oculus_Quest_2 value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::__OVRManager__SystemHeadsetType const Oculus_Quest_2;

  /// @brief Field Meta_Quest_Pro value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__OVRManager__SystemHeadsetType const Meta_Quest_Pro;

  /// @brief Field Placeholder_11 value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::__OVRManager__SystemHeadsetType const Placeholder_11;

  /// @brief Field Placeholder_12 value: static_cast<int32_t>(0xc)
  static ::GlobalNamespace::__OVRManager__SystemHeadsetType const Placeholder_12;

  /// @brief Field Placeholder_13 value: static_cast<int32_t>(0xd)
  static ::GlobalNamespace::__OVRManager__SystemHeadsetType const Placeholder_13;

  /// @brief Field Placeholder_14 value: static_cast<int32_t>(0xe)
  static ::GlobalNamespace::__OVRManager__SystemHeadsetType const Placeholder_14;

  /// @brief Field Rift_DK1 value: static_cast<int32_t>(0x1000)
  static ::GlobalNamespace::__OVRManager__SystemHeadsetType const Rift_DK1;

  /// @brief Field Rift_DK2 value: static_cast<int32_t>(0x1001)
  static ::GlobalNamespace::__OVRManager__SystemHeadsetType const Rift_DK2;

  /// @brief Field Rift_CV1 value: static_cast<int32_t>(0x1002)
  static ::GlobalNamespace::__OVRManager__SystemHeadsetType const Rift_CV1;

  /// @brief Field Rift_CB value: static_cast<int32_t>(0x1003)
  static ::GlobalNamespace::__OVRManager__SystemHeadsetType const Rift_CB;

  /// @brief Field Rift_S value: static_cast<int32_t>(0x1004)
  static ::GlobalNamespace::__OVRManager__SystemHeadsetType const Rift_S;

  /// @brief Field Oculus_Link_Quest value: static_cast<int32_t>(0x1005)
  static ::GlobalNamespace::__OVRManager__SystemHeadsetType const Oculus_Link_Quest;

  /// @brief Field Oculus_Link_Quest_2 value: static_cast<int32_t>(0x1006)
  static ::GlobalNamespace::__OVRManager__SystemHeadsetType const Oculus_Link_Quest_2;

  /// @brief Field Meta_Link_Quest_Pro value: static_cast<int32_t>(0x1007)
  static ::GlobalNamespace::__OVRManager__SystemHeadsetType const Meta_Link_Quest_Pro;

  /// @brief Field PC_Placeholder_4104 value: static_cast<int32_t>(0x1008)
  static ::GlobalNamespace::__OVRManager__SystemHeadsetType const PC_Placeholder_4104;

  /// @brief Field PC_Placeholder_4105 value: static_cast<int32_t>(0x1009)
  static ::GlobalNamespace::__OVRManager__SystemHeadsetType const PC_Placeholder_4105;

  /// @brief Field PC_Placeholder_4106 value: static_cast<int32_t>(0x100a)
  static ::GlobalNamespace::__OVRManager__SystemHeadsetType const PC_Placeholder_4106;

  /// @brief Field PC_Placeholder_4107 value: static_cast<int32_t>(0x100b)
  static ::GlobalNamespace::__OVRManager__SystemHeadsetType const PC_Placeholder_4107;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRManager__SystemHeadsetType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRManager__SystemHeadsetType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::XRDevice
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8527))
// CS Name: ::OVRManager::XRDevice
struct CORDL_TYPE __OVRManager__XRDevice {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRManager__XRDevice_Unwrapped
  enum struct ____OVRManager__XRDevice_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Oculus = static_cast<int32_t>(0x1),
    __E_OpenVR = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRManager__XRDevice_Unwrapped() const noexcept {
    return static_cast<____OVRManager__XRDevice_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRManager__XRDevice(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRManager__XRDevice();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRManager__XRDevice const Unknown;

  /// @brief Field Oculus value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRManager__XRDevice const Oculus;

  /// @brief Field OpenVR value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRManager__XRDevice const OpenVR;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRManager__XRDevice, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRManager__XRDevice, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ColorSpace
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8528))
// CS Name: ::OVRManager::ColorSpace
struct CORDL_TYPE __OVRManager__ColorSpace {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRManager__ColorSpace_Unwrapped
  enum struct ____OVRManager__ColorSpace_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Unmanaged = static_cast<int32_t>(0x1),
    __E_Rec_2020 = static_cast<int32_t>(0x2),
    __E_Rec_709 = static_cast<int32_t>(0x3),
    __E_Rift_CV1 = static_cast<int32_t>(0x4),
    __E_Rift_S = static_cast<int32_t>(0x5),
    __E_Quest = static_cast<int32_t>(0x6),
    __E_P3 = static_cast<int32_t>(0x7),
    __E_Adobe_RGB = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRManager__ColorSpace_Unwrapped() const noexcept {
    return static_cast<____OVRManager__ColorSpace_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRManager__ColorSpace(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRManager__ColorSpace();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRManager__ColorSpace const Unknown;

  /// @brief Field Unmanaged value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRManager__ColorSpace const Unmanaged;

  /// @brief Field Rec_2020 value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRManager__ColorSpace const Rec_2020;

  /// @brief Field Rec_709 value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRManager__ColorSpace const Rec_709;

  /// @brief Field Rift_CV1 value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRManager__ColorSpace const Rift_CV1;

  /// @brief Field Rift_S value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRManager__ColorSpace const Rift_S;

  /// @brief Field Quest value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__OVRManager__ColorSpace const Quest;

  /// @brief Field P3 value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__OVRManager__ColorSpace const P3;

  /// @brief Field Adobe_RGB value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRManager__ColorSpace const Adobe_RGB;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRManager__ColorSpace, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRManager__ColorSpace, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ProcessorPerformanceLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8529))
// CS Name: ::OVRManager::ProcessorPerformanceLevel
struct CORDL_TYPE __OVRManager__ProcessorPerformanceLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRManager__ProcessorPerformanceLevel_Unwrapped
  enum struct ____OVRManager__ProcessorPerformanceLevel_Unwrapped : int32_t {
    __E_PowerSavings = static_cast<int32_t>(0x0),
    __E_SustainedLow = static_cast<int32_t>(0x1),
    __E_SustainedHigh = static_cast<int32_t>(0x2),
    __E_Boost = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRManager__ProcessorPerformanceLevel_Unwrapped() const noexcept {
    return static_cast<____OVRManager__ProcessorPerformanceLevel_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRManager__ProcessorPerformanceLevel(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRManager__ProcessorPerformanceLevel();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field PowerSavings value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel const PowerSavings;

  /// @brief Field SustainedLow value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel const SustainedLow;

  /// @brief Field SustainedHigh value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel const SustainedHigh;

  /// @brief Field Boost value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel const Boost;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CompositionMethod
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8530))
// CS Name: ::OVRManager::CompositionMethod
struct CORDL_TYPE __OVRManager__CompositionMethod {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRManager__CompositionMethod_Unwrapped
  enum struct ____OVRManager__CompositionMethod_Unwrapped : int32_t {
    __E_External = static_cast<int32_t>(0x0),
    __E_Direct = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRManager__CompositionMethod_Unwrapped() const noexcept {
    return static_cast<____OVRManager__CompositionMethod_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRManager__CompositionMethod(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRManager__CompositionMethod();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field External value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRManager__CompositionMethod const External;

  /// @brief Field Direct value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRManager__CompositionMethod const Direct;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRManager__CompositionMethod, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRManager__CompositionMethod, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CameraDevice
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8531))
// CS Name: ::OVRManager::CameraDevice
struct CORDL_TYPE __OVRManager__CameraDevice {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRManager__CameraDevice_Unwrapped
  enum struct ____OVRManager__CameraDevice_Unwrapped : int32_t {
    __E_WebCamera0 = static_cast<int32_t>(0x0),
    __E_WebCamera1 = static_cast<int32_t>(0x1),
    __E_ZEDCamera = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRManager__CameraDevice_Unwrapped() const noexcept {
    return static_cast<____OVRManager__CameraDevice_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRManager__CameraDevice(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRManager__CameraDevice();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field WebCamera0 value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRManager__CameraDevice const WebCamera0;

  /// @brief Field WebCamera1 value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRManager__CameraDevice const WebCamera1;

  /// @brief Field ZEDCamera value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRManager__CameraDevice const ZEDCamera;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRManager__CameraDevice, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRManager__CameraDevice, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DepthQuality
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8532))
// CS Name: ::OVRManager::DepthQuality
struct CORDL_TYPE __OVRManager__DepthQuality {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRManager__DepthQuality_Unwrapped
  enum struct ____OVRManager__DepthQuality_Unwrapped : int32_t {
    __E_Low = static_cast<int32_t>(0x0),
    __E_Medium = static_cast<int32_t>(0x1),
    __E_High = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRManager__DepthQuality_Unwrapped() const noexcept {
    return static_cast<____OVRManager__DepthQuality_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRManager__DepthQuality(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRManager__DepthQuality();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Low value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRManager__DepthQuality const Low;

  /// @brief Field Medium value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRManager__DepthQuality const Medium;

  /// @brief Field High value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRManager__DepthQuality const High;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRManager__DepthQuality, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRManager__DepthQuality, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualGreenScreenType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8533))
// CS Name: ::OVRManager::VirtualGreenScreenType
struct CORDL_TYPE __OVRManager__VirtualGreenScreenType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRManager__VirtualGreenScreenType_Unwrapped
  enum struct ____OVRManager__VirtualGreenScreenType_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_OuterBoundary = static_cast<int32_t>(0x1),
    __E_PlayArea = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRManager__VirtualGreenScreenType_Unwrapped() const noexcept {
    return static_cast<____OVRManager__VirtualGreenScreenType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRManager__VirtualGreenScreenType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRManager__VirtualGreenScreenType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Off value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRManager__VirtualGreenScreenType const Off;

  /// @brief Field OuterBoundary value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRManager__VirtualGreenScreenType const OuterBoundary;

  /// @brief Field PlayArea value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRManager__VirtualGreenScreenType const PlayArea;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRManager__VirtualGreenScreenType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRManager__VirtualGreenScreenType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MrcActivationMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8534))
// CS Name: ::OVRManager::MrcActivationMode
struct CORDL_TYPE __OVRManager__MrcActivationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRManager__MrcActivationMode_Unwrapped
  enum struct ____OVRManager__MrcActivationMode_Unwrapped : int32_t {
    __E_Automatic = static_cast<int32_t>(0x0),
    __E_Disabled = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRManager__MrcActivationMode_Unwrapped() const noexcept {
    return static_cast<____OVRManager__MrcActivationMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRManager__MrcActivationMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRManager__MrcActivationMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Automatic value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRManager__MrcActivationMode const Automatic;

  /// @brief Field Disabled value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRManager__MrcActivationMode const Disabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRManager__MrcActivationMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRManager__MrcActivationMode, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MrcCameraType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8535))
// CS Name: ::OVRManager::MrcCameraType
struct CORDL_TYPE __OVRManager__MrcCameraType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRManager__MrcCameraType_Unwrapped
  enum struct ____OVRManager__MrcCameraType_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Foreground = static_cast<int32_t>(0x1),
    __E_Background = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRManager__MrcCameraType_Unwrapped() const noexcept {
    return static_cast<____OVRManager__MrcCameraType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRManager__MrcCameraType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRManager__MrcCameraType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRManager__MrcCameraType const Normal;

  /// @brief Field Foreground value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRManager__MrcCameraType const Foreground;

  /// @brief Field Background value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRManager__MrcCameraType const Background;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRManager__MrcCameraType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRManager__MrcCameraType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::InstantiateMrcCameraDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8536))
// CS Name: ::OVRManager::InstantiateMrcCameraDelegate*
class CORDL_TYPE __OVRManager__InstantiateMrcCameraDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x25e4c3c size 0xd8 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x25e4d14 size 0x14 virtual true final false
  inline ::UnityEngine::GameObject* Invoke(::UnityEngine::GameObject* mainCameraGameObject, ::GlobalNamespace::__OVRManager__MrcCameraType cameraType);

  /// @brief Method BeginInvoke addr 0x25e4d28 size 0x94 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* mainCameraGameObject, ::GlobalNamespace::__OVRManager__MrcCameraType cameraType, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke addr 0x25e4dbc size 0xc virtual true final false
  inline ::UnityEngine::GameObject* EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRManager__InstantiateMrcCameraDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRManager__InstantiateMrcCameraDelegate(__OVRManager__InstantiateMrcCameraDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRManager__InstantiateMrcCameraDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRManager__InstantiateMrcCameraDelegate(__OVRManager__InstantiateMrcCameraDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRManager__InstantiateMrcCameraDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PassthroughInitializationState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8537))
// CS Name: ::OVRManager::PassthroughInitializationState
struct CORDL_TYPE __OVRManager__PassthroughInitializationState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRManager__PassthroughInitializationState_Unwrapped
  enum struct ____OVRManager__PassthroughInitializationState_Unwrapped : int32_t {
    __E_Unspecified = static_cast<int32_t>(0x0),
    __E_Pending = static_cast<int32_t>(0x1),
    __E_Initialized = static_cast<int32_t>(0x2),
    __E_Failed = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRManager__PassthroughInitializationState_Unwrapped() const noexcept {
    return static_cast<____OVRManager__PassthroughInitializationState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRManager__PassthroughInitializationState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRManager__PassthroughInitializationState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unspecified value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRManager__PassthroughInitializationState const Unspecified;

  /// @brief Field Pending value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRManager__PassthroughInitializationState const Pending;

  /// @brief Field Initialized value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRManager__PassthroughInitializationState const Initialized;

  /// @brief Field Failed value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRManager__PassthroughInitializationState const Failed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRManager__PassthroughInitializationState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRManager__PassthroughInitializationState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PassthroughCapabilities
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 18, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8538))
// CS Name: ::OVRManager::PassthroughCapabilities*
class CORDL_TYPE __OVRManager__PassthroughCapabilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field <SupportsPassthrough>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__SupportsPassthrough_k__BackingField, put = __set__SupportsPassthrough_k__BackingField)) bool _SupportsPassthrough_k__BackingField;

  /// @brief Field <SupportsColorPassthrough>k__BackingField, offset 0x11, size 0x1
  __declspec(property(get = __get__SupportsColorPassthrough_k__BackingField, put = __set__SupportsColorPassthrough_k__BackingField)) bool _SupportsColorPassthrough_k__BackingField;

  __declspec(property(get = get_SupportsPassthrough)) bool SupportsPassthrough;

  __declspec(property(get = get_SupportsColorPassthrough)) bool SupportsColorPassthrough;

  constexpr bool& __get__SupportsPassthrough_k__BackingField();

  constexpr bool const& __get__SupportsPassthrough_k__BackingField() const;

  constexpr void __set__SupportsPassthrough_k__BackingField(bool value);

  constexpr bool& __get__SupportsColorPassthrough_k__BackingField();

  constexpr bool const& __get__SupportsColorPassthrough_k__BackingField() const;

  constexpr void __set__SupportsColorPassthrough_k__BackingField(bool value);

  /// @brief Method get_SupportsPassthrough addr 0x25e4dc8 size 0x8 virtual false final false
  inline bool get_SupportsPassthrough();

  /// @brief Method get_SupportsColorPassthrough addr 0x25e4dd0 size 0x8 virtual false final false
  inline bool get_SupportsColorPassthrough();

  static inline ::GlobalNamespace::__OVRManager__PassthroughCapabilities* New_ctor(bool supportsPassthrough, bool supportsColorPassthrough);

  /// @brief Method .ctor addr 0x25e4dd8 size 0x30 virtual false final false
  inline void _ctor(bool supportsPassthrough, bool supportsColorPassthrough);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRManager__PassthroughCapabilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRManager__PassthroughCapabilities(__OVRManager__PassthroughCapabilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRManager__PassthroughCapabilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRManager__PassthroughCapabilities(__OVRManager__PassthroughCapabilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRManager__PassthroughCapabilities();

public:
  /// @brief Field <SupportsPassthrough>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____SupportsPassthrough_k__BackingField;

  /// @brief Field <SupportsColorPassthrough>k__BackingField, offset: 0x11, size: 0x1, def value: None
  bool ____SupportsColorPassthrough_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRManager__PassthroughCapabilities, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRManager__PassthroughCapabilities, ____SupportsPassthrough_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRManager__PassthroughCapabilities, ____SupportsColorPassthrough_k__BackingField) == 0x11, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8539))
// CS Name: ::OVRManager::<>c*
class CORDL_TYPE __OVRManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__OVRManager____c* __9;

  /// @brief Field <>9__397_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__397_0, put = setStaticF___9__397_0))::System::Func_2<float_t, ::StringW>* __9__397_0;

  /// @brief Field <>9__413_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__413_0, put = setStaticF___9__413_0))::System::Comparison_1<::UnityEngine::Camera*>* __9__413_0;

  static inline void setStaticF___9(::GlobalNamespace::__OVRManager____c* value);

  static inline ::GlobalNamespace::__OVRManager____c* getStaticF___9();

  static inline void setStaticF___9__397_0(::System::Func_2<float_t, ::StringW>* value);

  static inline ::System::Func_2<float_t, ::StringW>* getStaticF___9__397_0();

  static inline void setStaticF___9__413_0(::System::Comparison_1<::UnityEngine::Camera*>* value);

  static inline ::System::Comparison_1<::UnityEngine::Camera*>* getStaticF___9__413_0();

  static inline ::GlobalNamespace::__OVRManager____c* New_ctor();

  /// @brief Method .ctor addr 0x25e4e6c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <InitOVRManager>b__397_0 addr 0x25e4e74 size 0x1c virtual false final false
  inline ::StringW _InitOVRManager_b__397_0(float_t f);

  /// @brief Method <FindMainCamera>b__413_0 addr 0x25e4e90 size 0x80 virtual false final false
  inline int32_t _FindMainCamera_b__413_0(::UnityEngine::Camera* c0, ::UnityEngine::Camera* c1);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRManager____c(__OVRManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRManager____c(__OVRManager____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRManager____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRManager____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRManager
// SizeInfo { instance_size: 256, native_size: -1, calculated_instance_size: 256, calculated_native_size: 252, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8528)), TypeDefinitionIndex(TypeDefinitionIndex(8521)), TypeDefinitionIndex(TypeDefinitionIndex(10152)),
// TypeDefinitionIndex(TypeDefinitionIndex(8682)), TypeDefinitionIndex(TypeDefinitionIndex(10132)), TypeDefinitionIndex(TypeDefinitionIndex(8527)), TypeDefinitionIndex(TypeDefinitionIndex(10178)),
// TypeDefinitionIndex(TypeDefinitionIndex(8531)), TypeDefinitionIndex(TypeDefinitionIndex(10176)), TypeDefinitionIndex(TypeDefinitionIndex(8533)), TypeDefinitionIndex(TypeDefinitionIndex(8532)),
// TypeDefinitionIndex(TypeDefinitionIndex(8530)), TypeDefinitionIndex(TypeDefinitionIndex(8534)), TypeDefinitionIndex(TypeDefinitionIndex(10036)), TypeDefinitionIndex(TypeDefinitionIndex(8537))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8540))
// CS Name: ::OVRManager*
class CORDL_TYPE OVRManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__OVRManager____c;

  using PassthroughCapabilities = ::GlobalNamespace::__OVRManager__PassthroughCapabilities;

  using PassthroughInitializationState = ::GlobalNamespace::__OVRManager__PassthroughInitializationState;

  using InstantiateMrcCameraDelegate = ::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate;

  using MrcCameraType = ::GlobalNamespace::__OVRManager__MrcCameraType;

  using MrcActivationMode = ::GlobalNamespace::__OVRManager__MrcActivationMode;

  using VirtualGreenScreenType = ::GlobalNamespace::__OVRManager__VirtualGreenScreenType;

  using DepthQuality = ::GlobalNamespace::__OVRManager__DepthQuality;

  using CameraDevice = ::GlobalNamespace::__OVRManager__CameraDevice;

  using CompositionMethod = ::GlobalNamespace::__OVRManager__CompositionMethod;

  using ProcessorPerformanceLevel = ::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel;

  using ColorSpace = ::GlobalNamespace::__OVRManager__ColorSpace;

  using XRDevice = ::GlobalNamespace::__OVRManager__XRDevice;

  using SystemHeadsetType = ::GlobalNamespace::__OVRManager__SystemHeadsetType;

  using TiledMultiResLevel = ::GlobalNamespace::__OVRManager__TiledMultiResLevel;

  using FixedFoveatedRenderingLevel = ::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel;

  using FoveatedRenderingLevel = ::GlobalNamespace::__OVRManager__FoveatedRenderingLevel;

  using EyeTextureFormat = ::GlobalNamespace::__OVRManager__EyeTextureFormat;

  using TrackingOrigin = ::GlobalNamespace::__OVRManager__TrackingOrigin;

  using XrApi = ::GlobalNamespace::__OVRManager__XrApi;

  /// @brief Field disabledCameras, offset 0x18, size 0x8
  __declspec(property(get = __get_disabledCameras, put = __set_disabledCameras))::System::Collections::Generic::IEnumerable_1<::UnityEngine::Camera*>* disabledCameras;

  /// @brief Field prevTimeScale, offset 0x20, size 0x4
  __declspec(property(get = __get_prevTimeScale, put = __set_prevTimeScale)) float_t prevTimeScale;

  /// @brief Field useRecommendedMSAALevel, offset 0x24, size 0x1
  __declspec(property(get = __get_useRecommendedMSAALevel, put = __set_useRecommendedMSAALevel)) bool useRecommendedMSAALevel;

  /// @brief Field _monoscopic, offset 0x25, size 0x1
  __declspec(property(get = __get__monoscopic, put = __set__monoscopic)) bool _monoscopic;

  /// @brief Field _colorGamut, offset 0x28, size 0x4
  __declspec(property(get = __get__colorGamut, put = __set__colorGamut))::GlobalNamespace::__OVRManager__ColorSpace _colorGamut;

  /// @brief Field minRenderScale, offset 0x2c, size 0x4
  __declspec(property(get = __get_minRenderScale, put = __set_minRenderScale)) float_t minRenderScale;

  /// @brief Field maxRenderScale, offset 0x30, size 0x4
  __declspec(property(get = __get_maxRenderScale, put = __set_maxRenderScale)) float_t maxRenderScale;

  /// @brief Field _headPoseRelativeOffsetRotation, offset 0x34, size 0xc
  __declspec(property(get = __get__headPoseRelativeOffsetRotation, put = __set__headPoseRelativeOffsetRotation))::UnityEngine::Vector3 _headPoseRelativeOffsetRotation;

  /// @brief Field _headPoseRelativeOffsetTranslation, offset 0x40, size 0xc
  __declspec(property(get = __get__headPoseRelativeOffsetTranslation, put = __set__headPoseRelativeOffsetTranslation))::UnityEngine::Vector3 _headPoseRelativeOffsetTranslation;

  /// @brief Field profilerTcpPort, offset 0x4c, size 0x4
  __declspec(property(get = __get_profilerTcpPort, put = __set_profilerTcpPort)) int32_t profilerTcpPort;

  /// @brief Field expandMixedRealityCapturePropertySheet, offset 0x50, size 0x1
  __declspec(property(get = __get_expandMixedRealityCapturePropertySheet, put = __set_expandMixedRealityCapturePropertySheet)) bool expandMixedRealityCapturePropertySheet;

  /// @brief Field enableMixedReality, offset 0x51, size 0x1
  __declspec(property(get = __get_enableMixedReality, put = __set_enableMixedReality)) bool enableMixedReality;

  /// @brief Field compositionMethod, offset 0x54, size 0x4
  __declspec(property(get = __get_compositionMethod, put = __set_compositionMethod))::GlobalNamespace::__OVRManager__CompositionMethod compositionMethod;

  /// @brief Field extraHiddenLayers, offset 0x58, size 0x4
  __declspec(property(get = __get_extraHiddenLayers, put = __set_extraHiddenLayers))::UnityEngine::LayerMask extraHiddenLayers;

  /// @brief Field extraVisibleLayers, offset 0x5c, size 0x4
  __declspec(property(get = __get_extraVisibleLayers, put = __set_extraVisibleLayers))::UnityEngine::LayerMask extraVisibleLayers;

  /// @brief Field dynamicCullingMask, offset 0x60, size 0x1
  __declspec(property(get = __get_dynamicCullingMask, put = __set_dynamicCullingMask)) bool dynamicCullingMask;

  /// @brief Field externalCompositionBackdropColorRift, offset 0x64, size 0x10
  __declspec(property(get = __get_externalCompositionBackdropColorRift, put = __set_externalCompositionBackdropColorRift))::UnityEngine::Color externalCompositionBackdropColorRift;

  /// @brief Field externalCompositionBackdropColorQuest, offset 0x74, size 0x10
  __declspec(property(get = __get_externalCompositionBackdropColorQuest, put = __set_externalCompositionBackdropColorQuest))::UnityEngine::Color externalCompositionBackdropColorQuest;

  /// @brief Field capturingCameraDevice, offset 0x84, size 0x4
  __declspec(property(get = __get_capturingCameraDevice, put = __set_capturingCameraDevice))::GlobalNamespace::__OVRManager__CameraDevice capturingCameraDevice;

  /// @brief Field flipCameraFrameHorizontally, offset 0x88, size 0x1
  __declspec(property(get = __get_flipCameraFrameHorizontally, put = __set_flipCameraFrameHorizontally)) bool flipCameraFrameHorizontally;

  /// @brief Field flipCameraFrameVertically, offset 0x89, size 0x1
  __declspec(property(get = __get_flipCameraFrameVertically, put = __set_flipCameraFrameVertically)) bool flipCameraFrameVertically;

  /// @brief Field handPoseStateLatency, offset 0x8c, size 0x4
  __declspec(property(get = __get_handPoseStateLatency, put = __set_handPoseStateLatency)) float_t handPoseStateLatency;

  /// @brief Field sandwichCompositionRenderLatency, offset 0x90, size 0x4
  __declspec(property(get = __get_sandwichCompositionRenderLatency, put = __set_sandwichCompositionRenderLatency)) float_t sandwichCompositionRenderLatency;

  /// @brief Field sandwichCompositionBufferedFrames, offset 0x94, size 0x4
  __declspec(property(get = __get_sandwichCompositionBufferedFrames, put = __set_sandwichCompositionBufferedFrames)) int32_t sandwichCompositionBufferedFrames;

  /// @brief Field chromaKeyColor, offset 0x98, size 0x10
  __declspec(property(get = __get_chromaKeyColor, put = __set_chromaKeyColor))::UnityEngine::Color chromaKeyColor;

  /// @brief Field chromaKeySimilarity, offset 0xa8, size 0x4
  __declspec(property(get = __get_chromaKeySimilarity, put = __set_chromaKeySimilarity)) float_t chromaKeySimilarity;

  /// @brief Field chromaKeySmoothRange, offset 0xac, size 0x4
  __declspec(property(get = __get_chromaKeySmoothRange, put = __set_chromaKeySmoothRange)) float_t chromaKeySmoothRange;

  /// @brief Field chromaKeySpillRange, offset 0xb0, size 0x4
  __declspec(property(get = __get_chromaKeySpillRange, put = __set_chromaKeySpillRange)) float_t chromaKeySpillRange;

  /// @brief Field useDynamicLighting, offset 0xb4, size 0x1
  __declspec(property(get = __get_useDynamicLighting, put = __set_useDynamicLighting)) bool useDynamicLighting;

  /// @brief Field depthQuality, offset 0xb8, size 0x4
  __declspec(property(get = __get_depthQuality, put = __set_depthQuality))::GlobalNamespace::__OVRManager__DepthQuality depthQuality;

  /// @brief Field dynamicLightingSmoothFactor, offset 0xbc, size 0x4
  __declspec(property(get = __get_dynamicLightingSmoothFactor, put = __set_dynamicLightingSmoothFactor)) float_t dynamicLightingSmoothFactor;

  /// @brief Field dynamicLightingDepthVariationClampingValue, offset 0xc0, size 0x4
  __declspec(property(get = __get_dynamicLightingDepthVariationClampingValue, put = __set_dynamicLightingDepthVariationClampingValue)) float_t dynamicLightingDepthVariationClampingValue;

  /// @brief Field virtualGreenScreenType, offset 0xc4, size 0x4
  __declspec(property(get = __get_virtualGreenScreenType, put = __set_virtualGreenScreenType))::GlobalNamespace::__OVRManager__VirtualGreenScreenType virtualGreenScreenType;

  /// @brief Field virtualGreenScreenTopY, offset 0xc8, size 0x4
  __declspec(property(get = __get_virtualGreenScreenTopY, put = __set_virtualGreenScreenTopY)) float_t virtualGreenScreenTopY;

  /// @brief Field virtualGreenScreenBottomY, offset 0xcc, size 0x4
  __declspec(property(get = __get_virtualGreenScreenBottomY, put = __set_virtualGreenScreenBottomY)) float_t virtualGreenScreenBottomY;

  /// @brief Field virtualGreenScreenApplyDepthCulling, offset 0xd0, size 0x1
  __declspec(property(get = __get_virtualGreenScreenApplyDepthCulling, put = __set_virtualGreenScreenApplyDepthCulling)) bool virtualGreenScreenApplyDepthCulling;

  /// @brief Field virtualGreenScreenDepthTolerance, offset 0xd4, size 0x4
  __declspec(property(get = __get_virtualGreenScreenDepthTolerance, put = __set_virtualGreenScreenDepthTolerance)) float_t virtualGreenScreenDepthTolerance;

  /// @brief Field mrcActivationMode, offset 0xd8, size 0x4
  __declspec(property(get = __get_mrcActivationMode, put = __set_mrcActivationMode))::GlobalNamespace::__OVRManager__MrcActivationMode mrcActivationMode;

  /// @brief Field instantiateMixedRealityCameraGameObject, offset 0xe0, size 0x8
  __declspec(property(get = __get_instantiateMixedRealityCameraGameObject,
                      put = __set_instantiateMixedRealityCameraGameObject))::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* instantiateMixedRealityCameraGameObject;

  /// @brief Field isInsightPassthroughEnabled, offset 0xe8, size 0x1
  __declspec(property(get = __get_isInsightPassthroughEnabled, put = __set_isInsightPassthroughEnabled)) bool isInsightPassthroughEnabled;

  /// @brief Field requestBodyTrackingPermissionOnStartup, offset 0xe9, size 0x1
  __declspec(property(get = __get_requestBodyTrackingPermissionOnStartup, put = __set_requestBodyTrackingPermissionOnStartup)) bool requestBodyTrackingPermissionOnStartup;

  /// @brief Field requestFaceTrackingPermissionOnStartup, offset 0xea, size 0x1
  __declspec(property(get = __get_requestFaceTrackingPermissionOnStartup, put = __set_requestFaceTrackingPermissionOnStartup)) bool requestFaceTrackingPermissionOnStartup;

  /// @brief Field requestEyeTrackingPermissionOnStartup, offset 0xeb, size 0x1
  __declspec(property(get = __get_requestEyeTrackingPermissionOnStartup, put = __set_requestEyeTrackingPermissionOnStartup)) bool requestEyeTrackingPermissionOnStartup;

  /// @brief Field _localDimming, offset 0xec, size 0x1
  __declspec(property(get = __get__localDimming, put = __set__localDimming)) bool _localDimming;

  /// @brief Field _trackingOriginType, offset 0xf0, size 0x4
  __declspec(property(get = __get__trackingOriginType, put = __set__trackingOriginType))::GlobalNamespace::__OVRManager__TrackingOrigin _trackingOriginType;

  /// @brief Field usePositionTracking, offset 0xf4, size 0x1
  __declspec(property(get = __get_usePositionTracking, put = __set_usePositionTracking)) bool usePositionTracking;

  /// @brief Field useRotationTracking, offset 0xf5, size 0x1
  __declspec(property(get = __get_useRotationTracking, put = __set_useRotationTracking)) bool useRotationTracking;

  /// @brief Field useIPDInPositionTracking, offset 0xf6, size 0x1
  __declspec(property(get = __get_useIPDInPositionTracking, put = __set_useIPDInPositionTracking)) bool useIPDInPositionTracking;

  /// @brief Field resetTrackerOnLoad, offset 0xf7, size 0x1
  __declspec(property(get = __get_resetTrackerOnLoad, put = __set_resetTrackerOnLoad)) bool resetTrackerOnLoad;

  /// @brief Field AllowRecenter, offset 0xf8, size 0x1
  __declspec(property(get = __get_AllowRecenter, put = __set_AllowRecenter)) bool AllowRecenter;

  /// @brief Field LateControllerUpdate, offset 0xf9, size 0x1
  __declspec(property(get = __get_LateControllerUpdate, put = __set_LateControllerUpdate)) bool LateControllerUpdate;

  /// @brief Field LateLatching, offset 0xfa, size 0x1
  __declspec(property(get = __get_LateLatching, put = __set_LateLatching)) bool LateLatching;

  /// @brief Field <isSupportedPlatform>k__BackingField, offset 0xfb, size 0x1
  __declspec(property(get = __get__isSupportedPlatform_k__BackingField, put = __set__isSupportedPlatform_k__BackingField)) bool _isSupportedPlatform_k__BackingField;

  /// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance_k__BackingField, put = setStaticF__instance_k__BackingField))::GlobalNamespace::OVRManager* _instance_k__BackingField;

  /// @brief Field <display>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__display_k__BackingField, put = setStaticF__display_k__BackingField))::GlobalNamespace::OVRDisplay* _display_k__BackingField;

  /// @brief Field <tracker>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__tracker_k__BackingField, put = setStaticF__tracker_k__BackingField))::GlobalNamespace::OVRTracker* _tracker_k__BackingField;

  /// @brief Field <boundary>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__boundary_k__BackingField, put = setStaticF__boundary_k__BackingField))::GlobalNamespace::OVRBoundary* _boundary_k__BackingField;

  /// @brief Field <runtimeSettings>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__runtimeSettings_k__BackingField,
                             put = setStaticF__runtimeSettings_k__BackingField))::GlobalNamespace::OVRRuntimeSettings* _runtimeSettings_k__BackingField;

  /// @brief Field _profile, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__profile, put = setStaticF__profile))::GlobalNamespace::OVRProfile* _profile;

  /// @brief Field HMDAcquired, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HMDAcquired, put = setStaticF_HMDAcquired))::System::Action* HMDAcquired;

  /// @brief Field HMDLost, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HMDLost, put = setStaticF_HMDLost))::System::Action* HMDLost;

  /// @brief Field HMDMounted, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HMDMounted, put = setStaticF_HMDMounted))::System::Action* HMDMounted;

  /// @brief Field HMDUnmounted, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HMDUnmounted, put = setStaticF_HMDUnmounted))::System::Action* HMDUnmounted;

  /// @brief Field VrFocusAcquired, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_VrFocusAcquired, put = setStaticF_VrFocusAcquired))::System::Action* VrFocusAcquired;

  /// @brief Field VrFocusLost, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_VrFocusLost, put = setStaticF_VrFocusLost))::System::Action* VrFocusLost;

  /// @brief Field InputFocusAcquired, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InputFocusAcquired, put = setStaticF_InputFocusAcquired))::System::Action* InputFocusAcquired;

  /// @brief Field InputFocusLost, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InputFocusLost, put = setStaticF_InputFocusLost))::System::Action* InputFocusLost;

  /// @brief Field AudioOutChanged, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AudioOutChanged, put = setStaticF_AudioOutChanged))::System::Action* AudioOutChanged;

  /// @brief Field AudioInChanged, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AudioInChanged, put = setStaticF_AudioInChanged))::System::Action* AudioInChanged;

  /// @brief Field TrackingAcquired, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TrackingAcquired, put = setStaticF_TrackingAcquired))::System::Action* TrackingAcquired;

  /// @brief Field TrackingLost, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TrackingLost, put = setStaticF_TrackingLost))::System::Action* TrackingLost;

  /// @brief Field DisplayRefreshRateChanged, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DisplayRefreshRateChanged, put = setStaticF_DisplayRefreshRateChanged))::System::Action_2<float_t, float_t>* DisplayRefreshRateChanged;

  /// @brief Field SpatialAnchorCreateComplete, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SpatialAnchorCreateComplete,
                             put = setStaticF_SpatialAnchorCreateComplete))::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>* SpatialAnchorCreateComplete;

  /// @brief Field SpaceSetComponentStatusComplete, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SpaceSetComponentStatusComplete,
                             put = setStaticF_SpaceSetComponentStatusComplete))::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid,
                                                                                                  ::GlobalNamespace::__OVRPlugin__SpaceComponentType, bool>* SpaceSetComponentStatusComplete;

  /// @brief Field SpaceQueryResults, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SpaceQueryResults, put = setStaticF_SpaceQueryResults))::System::Action_1<uint64_t>* SpaceQueryResults;

  /// @brief Field SpaceQueryComplete, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SpaceQueryComplete, put = setStaticF_SpaceQueryComplete))::System::Action_2<uint64_t, bool>* SpaceQueryComplete;

  /// @brief Field SpaceSaveComplete, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SpaceSaveComplete, put = setStaticF_SpaceSaveComplete))::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>* SpaceSaveComplete;

  /// @brief Field SpaceEraseComplete, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SpaceEraseComplete,
                             put = setStaticF_SpaceEraseComplete))::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation>* SpaceEraseComplete;

  /// @brief Field ShareSpacesComplete, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ShareSpacesComplete,
                             put = setStaticF_ShareSpacesComplete))::System::Action_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* ShareSpacesComplete;

  /// @brief Field SpaceListSaveComplete, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SpaceListSaveComplete,
                             put = setStaticF_SpaceListSaveComplete))::System::Action_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* SpaceListSaveComplete;

  /// @brief Field SceneCaptureComplete, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SceneCaptureComplete, put = setStaticF_SceneCaptureComplete))::System::Action_2<uint64_t, bool>* SceneCaptureComplete;

  /// @brief Field HSWDismissed, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HSWDismissed, put = setStaticF_HSWDismissed))::System::Action* HSWDismissed;

  /// @brief Field _isHmdPresentCached, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__isHmdPresentCached, put = setStaticF__isHmdPresentCached)) bool _isHmdPresentCached;

  /// @brief Field _isHmdPresent, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__isHmdPresent, put = setStaticF__isHmdPresent)) bool _isHmdPresent;

  /// @brief Field _wasHmdPresent, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__wasHmdPresent, put = setStaticF__wasHmdPresent)) bool _wasHmdPresent;

  /// @brief Field _hasVrFocusCached, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__hasVrFocusCached, put = setStaticF__hasVrFocusCached)) bool _hasVrFocusCached;

  /// @brief Field _hasVrFocus, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__hasVrFocus, put = setStaticF__hasVrFocus)) bool _hasVrFocus;

  /// @brief Field _hadVrFocus, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__hadVrFocus, put = setStaticF__hadVrFocus)) bool _hadVrFocus;

  /// @brief Field _hadInputFocus, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__hadInputFocus, put = setStaticF__hadInputFocus)) bool _hadInputFocus;

  /// @brief Field OCULUS_UNITY_NAME_STR, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OCULUS_UNITY_NAME_STR, put = setStaticF_OCULUS_UNITY_NAME_STR))::StringW OCULUS_UNITY_NAME_STR;

  /// @brief Field OPENVR_UNITY_NAME_STR, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OPENVR_UNITY_NAME_STR, put = setStaticF_OPENVR_UNITY_NAME_STR))::StringW OPENVR_UNITY_NAME_STR;

  /// @brief Field loadedXRDevice, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_loadedXRDevice, put = setStaticF_loadedXRDevice))::GlobalNamespace::__OVRManager__XRDevice loadedXRDevice;

  /// @brief Field OpenVRTouchRotationOffsetEulerLeft, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_OpenVRTouchRotationOffsetEulerLeft, put = setStaticF_OpenVRTouchRotationOffsetEulerLeft))::UnityEngine::Vector3 OpenVRTouchRotationOffsetEulerLeft;

  /// @brief Field OpenVRTouchRotationOffsetEulerRight, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_OpenVRTouchRotationOffsetEulerRight, put = setStaticF_OpenVRTouchRotationOffsetEulerRight))::UnityEngine::Vector3 OpenVRTouchRotationOffsetEulerRight;

  /// @brief Field OpenVRTouchPositionOffsetLeft, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_OpenVRTouchPositionOffsetLeft, put = setStaticF_OpenVRTouchPositionOffsetLeft))::UnityEngine::Vector3 OpenVRTouchPositionOffsetLeft;

  /// @brief Field OpenVRTouchPositionOffsetRight, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_OpenVRTouchPositionOffsetRight, put = setStaticF_OpenVRTouchPositionOffsetRight))::UnityEngine::Vector3 OpenVRTouchPositionOffsetRight;

  /// @brief Field m_SpaceWarpEnabled, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_m_SpaceWarpEnabled, put = setStaticF_m_SpaceWarpEnabled)) bool m_SpaceWarpEnabled;

  /// @brief Field m_AppSpaceTransform, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_AppSpaceTransform, put = setStaticF_m_AppSpaceTransform))::UnityEngine::Transform* m_AppSpaceTransform;

  /// @brief Field m_CachedDepthTextureMode, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_m_CachedDepthTextureMode, put = setStaticF_m_CachedDepthTextureMode))::UnityEngine::DepthTextureMode m_CachedDepthTextureMode;

  /// @brief Field _isUserPresentCached, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__isUserPresentCached, put = setStaticF__isUserPresentCached)) bool _isUserPresentCached;

  /// @brief Field _isUserPresent, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__isUserPresent, put = setStaticF__isUserPresent)) bool _isUserPresent;

  /// @brief Field _wasUserPresent, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__wasUserPresent, put = setStaticF__wasUserPresent)) bool _wasUserPresent;

  /// @brief Field prevAudioOutIdIsCached, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_prevAudioOutIdIsCached, put = setStaticF_prevAudioOutIdIsCached)) bool prevAudioOutIdIsCached;

  /// @brief Field prevAudioInIdIsCached, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_prevAudioInIdIsCached, put = setStaticF_prevAudioInIdIsCached)) bool prevAudioInIdIsCached;

  /// @brief Field prevAudioOutId, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_prevAudioOutId, put = setStaticF_prevAudioOutId))::StringW prevAudioOutId;

  /// @brief Field prevAudioInId, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_prevAudioInId, put = setStaticF_prevAudioInId))::StringW prevAudioInId;

  /// @brief Field wasPositionTracked, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_wasPositionTracked, put = setStaticF_wasPositionTracked)) bool wasPositionTracked;

  /// @brief Field eventDataBuffer, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_eventDataBuffer, put = setStaticF_eventDataBuffer))::GlobalNamespace::__OVRPlugin__EventDataBuffer eventDataBuffer;

  /// @brief Field UnityAlphaOrBetaVersionWarningMessage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UnityAlphaOrBetaVersionWarningMessage, put = setStaticF_UnityAlphaOrBetaVersionWarningMessage))::StringW UnityAlphaOrBetaVersionWarningMessage;

  /// @brief Field OVRManagerinitialized, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_OVRManagerinitialized, put = setStaticF_OVRManagerinitialized)) bool OVRManagerinitialized;

  /// @brief Field s_displaySubsystems, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_displaySubsystems, put = setStaticF_s_displaySubsystems))::System::Collections::Generic::List_1<Il2CppObject*>* s_displaySubsystems;

  /// @brief Field s_displaySubsystemDescriptors, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_displaySubsystemDescriptors,
                             put = setStaticF_s_displaySubsystemDescriptors))::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* s_displaySubsystemDescriptors;

  /// @brief Field s_inputSubsystems, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_inputSubsystems, put = setStaticF_s_inputSubsystems))::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* s_inputSubsystems;

  /// @brief Field multipleMainCameraWarningPresented, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_multipleMainCameraWarningPresented, put = setStaticF_multipleMainCameraWarningPresented)) bool multipleMainCameraWarningPresented;

  /// @brief Field suppressUnableToFindMainCameraMessage, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_suppressUnableToFindMainCameraMessage, put = setStaticF_suppressUnableToFindMainCameraMessage)) bool suppressUnableToFindMainCameraMessage;

  /// @brief Field lastFoundMainCamera, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_lastFoundMainCamera, put = setStaticF_lastFoundMainCamera))::System::WeakReference_1<::UnityEngine::Camera*>* lastFoundMainCamera;

  /// @brief Field staticMixedRealityCaptureInitialized, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_staticMixedRealityCaptureInitialized, put = setStaticF_staticMixedRealityCaptureInitialized)) bool staticMixedRealityCaptureInitialized;

  /// @brief Field staticPrevEnableMixedRealityCapture, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_staticPrevEnableMixedRealityCapture, put = setStaticF_staticPrevEnableMixedRealityCapture)) bool staticPrevEnableMixedRealityCapture;

  /// @brief Field staticMrcSettings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_staticMrcSettings, put = setStaticF_staticMrcSettings))::GlobalNamespace::OVRMixedRealityCaptureSettings* staticMrcSettings;

  /// @brief Field suppressDisableMixedRealityBecauseOfNoMainCameraWarning, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_suppressDisableMixedRealityBecauseOfNoMainCameraWarning,
                             put = setStaticF_suppressDisableMixedRealityBecauseOfNoMainCameraWarning)) bool suppressDisableMixedRealityBecauseOfNoMainCameraWarning;

  /// @brief Field _passthroughInitializationState, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__passthroughInitializationState,
                             put = setStaticF__passthroughInitializationState))::GlobalNamespace::__OVRManager__PassthroughInitializationState _passthroughInitializationState;

  /// @brief Field _passthroughCapabilities, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__passthroughCapabilities, put = setStaticF__passthroughCapabilities))::GlobalNamespace::__OVRManager__PassthroughCapabilities* _passthroughCapabilities;

  __declspec(property(get = get_chromatic, put = set_chromatic)) bool chromatic;

  __declspec(property(get = get_monoscopic, put = set_monoscopic)) bool monoscopic;

  __declspec(property(get = get_colorGamut, put = set_colorGamut))::GlobalNamespace::__OVRManager__ColorSpace colorGamut;

  __declspec(property(get = get_nativeColorGamut))::GlobalNamespace::__OVRManager__ColorSpace nativeColorGamut;

  __declspec(property(get = get_headPoseRelativeOffsetRotation, put = set_headPoseRelativeOffsetRotation))::UnityEngine::Vector3 headPoseRelativeOffsetRotation;

  __declspec(property(get = get_headPoseRelativeOffsetTranslation, put = set_headPoseRelativeOffsetTranslation))::UnityEngine::Vector3 headPoseRelativeOffsetTranslation;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_enableMixedReality,
                      put = OVRMixedRealityCaptureConfiguration_set_enableMixedReality)) bool OVRMixedRealityCaptureConfiguration_enableMixedReality;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers,
                      put = OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers))::UnityEngine::LayerMask OVRMixedRealityCaptureConfiguration_extraHiddenLayers;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers,
                      put = OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers))::UnityEngine::LayerMask OVRMixedRealityCaptureConfiguration_extraVisibleLayers;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask,
                      put = OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask)) bool OVRMixedRealityCaptureConfiguration_dynamicCullingMask;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_compositionMethod,
                      put = OVRMixedRealityCaptureConfiguration_set_compositionMethod))::GlobalNamespace::__OVRManager__CompositionMethod OVRMixedRealityCaptureConfiguration_compositionMethod;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift,
                      put = OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift))::UnityEngine::Color OVRMixedRealityCaptureConfiguration_externalCompositionBackdropColorRift;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest,
                      put = OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest))::UnityEngine::Color
      OVRMixedRealityCaptureConfiguration_externalCompositionBackdropColorQuest;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice,
                      put = OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice))::GlobalNamespace::__OVRManager__CameraDevice OVRMixedRealityCaptureConfiguration_capturingCameraDevice;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally,
                      put = OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally)) bool OVRMixedRealityCaptureConfiguration_flipCameraFrameHorizontally;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically,
                      put = OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically)) bool OVRMixedRealityCaptureConfiguration_flipCameraFrameVertically;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency,
                      put = OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency)) float_t OVRMixedRealityCaptureConfiguration_handPoseStateLatency;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency,
                      put = OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency)) float_t OVRMixedRealityCaptureConfiguration_sandwichCompositionRenderLatency;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames,
                      put = OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames)) int32_t OVRMixedRealityCaptureConfiguration_sandwichCompositionBufferedFrames;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_chromaKeyColor,
                      put = OVRMixedRealityCaptureConfiguration_set_chromaKeyColor))::UnityEngine::Color OVRMixedRealityCaptureConfiguration_chromaKeyColor;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity,
                      put = OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity)) float_t OVRMixedRealityCaptureConfiguration_chromaKeySimilarity;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange,
                      put = OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange)) float_t OVRMixedRealityCaptureConfiguration_chromaKeySmoothRange;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange,
                      put = OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange)) float_t OVRMixedRealityCaptureConfiguration_chromaKeySpillRange;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_useDynamicLighting,
                      put = OVRMixedRealityCaptureConfiguration_set_useDynamicLighting)) bool OVRMixedRealityCaptureConfiguration_useDynamicLighting;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_depthQuality,
                      put = OVRMixedRealityCaptureConfiguration_set_depthQuality))::GlobalNamespace::__OVRManager__DepthQuality OVRMixedRealityCaptureConfiguration_depthQuality;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor,
                      put = OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor)) float_t OVRMixedRealityCaptureConfiguration_dynamicLightingSmoothFactor;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue,
                      put = OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue)) float_t OVRMixedRealityCaptureConfiguration_dynamicLightingDepthVariationClampingValue;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType,
                      put = OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType))::GlobalNamespace::__OVRManager__VirtualGreenScreenType
      OVRMixedRealityCaptureConfiguration_virtualGreenScreenType;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY,
                      put = OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY)) float_t OVRMixedRealityCaptureConfiguration_virtualGreenScreenTopY;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY,
                      put = OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY)) float_t OVRMixedRealityCaptureConfiguration_virtualGreenScreenBottomY;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling,
                      put = OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling)) bool OVRMixedRealityCaptureConfiguration_virtualGreenScreenApplyDepthCulling;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance,
                      put = OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance)) float_t OVRMixedRealityCaptureConfiguration_virtualGreenScreenDepthTolerance;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_mrcActivationMode,
                      put = OVRMixedRealityCaptureConfiguration_set_mrcActivationMode))::GlobalNamespace::__OVRManager__MrcActivationMode OVRMixedRealityCaptureConfiguration_mrcActivationMode;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject, put = OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject))::
      GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject;

  __declspec(property(get = get_xrApi))::GlobalNamespace::__OVRManager__XrApi xrApi;

  __declspec(property(get = get_xrInstance)) uint64_t xrInstance;

  __declspec(property(get = get_xrSession)) uint64_t xrSession;

  __declspec(property(get = get_vsyncCount, put = set_vsyncCount)) int32_t vsyncCount;

  __declspec(property(get = get_trackingOriginType, put = set_trackingOriginType))::GlobalNamespace::__OVRManager__TrackingOrigin trackingOriginType;

  __declspec(property(get = get_isSupportedPlatform, put = set_isSupportedPlatform)) bool isSupportedPlatform;

  __declspec(property(get = get_isUserPresent, put = set_isUserPresent)) bool isUserPresent;

  /// @brief Convert operator to "::GlobalNamespace::OVRMixedRealityCaptureConfiguration"
  constexpr operator ::GlobalNamespace::OVRMixedRealityCaptureConfiguration*() noexcept;

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Camera*>*& __get_disabledCameras();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Camera*>*> const& __get_disabledCameras() const;

  constexpr void __set_disabledCameras(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Camera*>* value);

  constexpr float_t& __get_prevTimeScale();

  constexpr float_t const& __get_prevTimeScale() const;

  constexpr void __set_prevTimeScale(float_t value);

  constexpr bool& __get_useRecommendedMSAALevel();

  constexpr bool const& __get_useRecommendedMSAALevel() const;

  constexpr void __set_useRecommendedMSAALevel(bool value);

  constexpr bool& __get__monoscopic();

  constexpr bool const& __get__monoscopic() const;

  constexpr void __set__monoscopic(bool value);

  constexpr ::GlobalNamespace::__OVRManager__ColorSpace& __get__colorGamut();

  constexpr ::GlobalNamespace::__OVRManager__ColorSpace const& __get__colorGamut() const;

  constexpr void __set__colorGamut(::GlobalNamespace::__OVRManager__ColorSpace value);

  constexpr float_t& __get_minRenderScale();

  constexpr float_t const& __get_minRenderScale() const;

  constexpr void __set_minRenderScale(float_t value);

  constexpr float_t& __get_maxRenderScale();

  constexpr float_t const& __get_maxRenderScale() const;

  constexpr void __set_maxRenderScale(float_t value);

  constexpr ::UnityEngine::Vector3& __get__headPoseRelativeOffsetRotation();

  constexpr ::UnityEngine::Vector3 const& __get__headPoseRelativeOffsetRotation() const;

  constexpr void __set__headPoseRelativeOffsetRotation(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__headPoseRelativeOffsetTranslation();

  constexpr ::UnityEngine::Vector3 const& __get__headPoseRelativeOffsetTranslation() const;

  constexpr void __set__headPoseRelativeOffsetTranslation(::UnityEngine::Vector3 value);

  constexpr int32_t& __get_profilerTcpPort();

  constexpr int32_t const& __get_profilerTcpPort() const;

  constexpr void __set_profilerTcpPort(int32_t value);

  constexpr bool& __get_expandMixedRealityCapturePropertySheet();

  constexpr bool const& __get_expandMixedRealityCapturePropertySheet() const;

  constexpr void __set_expandMixedRealityCapturePropertySheet(bool value);

  constexpr bool& __get_enableMixedReality();

  constexpr bool const& __get_enableMixedReality() const;

  constexpr void __set_enableMixedReality(bool value);

  constexpr ::GlobalNamespace::__OVRManager__CompositionMethod& __get_compositionMethod();

  constexpr ::GlobalNamespace::__OVRManager__CompositionMethod const& __get_compositionMethod() const;

  constexpr void __set_compositionMethod(::GlobalNamespace::__OVRManager__CompositionMethod value);

  constexpr ::UnityEngine::LayerMask& __get_extraHiddenLayers();

  constexpr ::UnityEngine::LayerMask const& __get_extraHiddenLayers() const;

  constexpr void __set_extraHiddenLayers(::UnityEngine::LayerMask value);

  constexpr ::UnityEngine::LayerMask& __get_extraVisibleLayers();

  constexpr ::UnityEngine::LayerMask const& __get_extraVisibleLayers() const;

  constexpr void __set_extraVisibleLayers(::UnityEngine::LayerMask value);

  constexpr bool& __get_dynamicCullingMask();

  constexpr bool const& __get_dynamicCullingMask() const;

  constexpr void __set_dynamicCullingMask(bool value);

  constexpr ::UnityEngine::Color& __get_externalCompositionBackdropColorRift();

  constexpr ::UnityEngine::Color const& __get_externalCompositionBackdropColorRift() const;

  constexpr void __set_externalCompositionBackdropColorRift(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get_externalCompositionBackdropColorQuest();

  constexpr ::UnityEngine::Color const& __get_externalCompositionBackdropColorQuest() const;

  constexpr void __set_externalCompositionBackdropColorQuest(::UnityEngine::Color value);

  constexpr ::GlobalNamespace::__OVRManager__CameraDevice& __get_capturingCameraDevice();

  constexpr ::GlobalNamespace::__OVRManager__CameraDevice const& __get_capturingCameraDevice() const;

  constexpr void __set_capturingCameraDevice(::GlobalNamespace::__OVRManager__CameraDevice value);

  constexpr bool& __get_flipCameraFrameHorizontally();

  constexpr bool const& __get_flipCameraFrameHorizontally() const;

  constexpr void __set_flipCameraFrameHorizontally(bool value);

  constexpr bool& __get_flipCameraFrameVertically();

  constexpr bool const& __get_flipCameraFrameVertically() const;

  constexpr void __set_flipCameraFrameVertically(bool value);

  constexpr float_t& __get_handPoseStateLatency();

  constexpr float_t const& __get_handPoseStateLatency() const;

  constexpr void __set_handPoseStateLatency(float_t value);

  constexpr float_t& __get_sandwichCompositionRenderLatency();

  constexpr float_t const& __get_sandwichCompositionRenderLatency() const;

  constexpr void __set_sandwichCompositionRenderLatency(float_t value);

  constexpr int32_t& __get_sandwichCompositionBufferedFrames();

  constexpr int32_t const& __get_sandwichCompositionBufferedFrames() const;

  constexpr void __set_sandwichCompositionBufferedFrames(int32_t value);

  constexpr ::UnityEngine::Color& __get_chromaKeyColor();

  constexpr ::UnityEngine::Color const& __get_chromaKeyColor() const;

  constexpr void __set_chromaKeyColor(::UnityEngine::Color value);

  constexpr float_t& __get_chromaKeySimilarity();

  constexpr float_t const& __get_chromaKeySimilarity() const;

  constexpr void __set_chromaKeySimilarity(float_t value);

  constexpr float_t& __get_chromaKeySmoothRange();

  constexpr float_t const& __get_chromaKeySmoothRange() const;

  constexpr void __set_chromaKeySmoothRange(float_t value);

  constexpr float_t& __get_chromaKeySpillRange();

  constexpr float_t const& __get_chromaKeySpillRange() const;

  constexpr void __set_chromaKeySpillRange(float_t value);

  constexpr bool& __get_useDynamicLighting();

  constexpr bool const& __get_useDynamicLighting() const;

  constexpr void __set_useDynamicLighting(bool value);

  constexpr ::GlobalNamespace::__OVRManager__DepthQuality& __get_depthQuality();

  constexpr ::GlobalNamespace::__OVRManager__DepthQuality const& __get_depthQuality() const;

  constexpr void __set_depthQuality(::GlobalNamespace::__OVRManager__DepthQuality value);

  constexpr float_t& __get_dynamicLightingSmoothFactor();

  constexpr float_t const& __get_dynamicLightingSmoothFactor() const;

  constexpr void __set_dynamicLightingSmoothFactor(float_t value);

  constexpr float_t& __get_dynamicLightingDepthVariationClampingValue();

  constexpr float_t const& __get_dynamicLightingDepthVariationClampingValue() const;

  constexpr void __set_dynamicLightingDepthVariationClampingValue(float_t value);

  constexpr ::GlobalNamespace::__OVRManager__VirtualGreenScreenType& __get_virtualGreenScreenType();

  constexpr ::GlobalNamespace::__OVRManager__VirtualGreenScreenType const& __get_virtualGreenScreenType() const;

  constexpr void __set_virtualGreenScreenType(::GlobalNamespace::__OVRManager__VirtualGreenScreenType value);

  constexpr float_t& __get_virtualGreenScreenTopY();

  constexpr float_t const& __get_virtualGreenScreenTopY() const;

  constexpr void __set_virtualGreenScreenTopY(float_t value);

  constexpr float_t& __get_virtualGreenScreenBottomY();

  constexpr float_t const& __get_virtualGreenScreenBottomY() const;

  constexpr void __set_virtualGreenScreenBottomY(float_t value);

  constexpr bool& __get_virtualGreenScreenApplyDepthCulling();

  constexpr bool const& __get_virtualGreenScreenApplyDepthCulling() const;

  constexpr void __set_virtualGreenScreenApplyDepthCulling(bool value);

  constexpr float_t& __get_virtualGreenScreenDepthTolerance();

  constexpr float_t const& __get_virtualGreenScreenDepthTolerance() const;

  constexpr void __set_virtualGreenScreenDepthTolerance(float_t value);

  constexpr ::GlobalNamespace::__OVRManager__MrcActivationMode& __get_mrcActivationMode();

  constexpr ::GlobalNamespace::__OVRManager__MrcActivationMode const& __get_mrcActivationMode() const;

  constexpr void __set_mrcActivationMode(::GlobalNamespace::__OVRManager__MrcActivationMode value);

  constexpr ::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*& __get_instantiateMixedRealityCameraGameObject();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*> const& __get_instantiateMixedRealityCameraGameObject() const;

  constexpr void __set_instantiateMixedRealityCameraGameObject(::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* value);

  constexpr bool& __get_isInsightPassthroughEnabled();

  constexpr bool const& __get_isInsightPassthroughEnabled() const;

  constexpr void __set_isInsightPassthroughEnabled(bool value);

  constexpr bool& __get_requestBodyTrackingPermissionOnStartup();

  constexpr bool const& __get_requestBodyTrackingPermissionOnStartup() const;

  constexpr void __set_requestBodyTrackingPermissionOnStartup(bool value);

  constexpr bool& __get_requestFaceTrackingPermissionOnStartup();

  constexpr bool const& __get_requestFaceTrackingPermissionOnStartup() const;

  constexpr void __set_requestFaceTrackingPermissionOnStartup(bool value);

  constexpr bool& __get_requestEyeTrackingPermissionOnStartup();

  constexpr bool const& __get_requestEyeTrackingPermissionOnStartup() const;

  constexpr void __set_requestEyeTrackingPermissionOnStartup(bool value);

  constexpr bool& __get__localDimming();

  constexpr bool const& __get__localDimming() const;

  constexpr void __set__localDimming(bool value);

  constexpr ::GlobalNamespace::__OVRManager__TrackingOrigin& __get__trackingOriginType();

  constexpr ::GlobalNamespace::__OVRManager__TrackingOrigin const& __get__trackingOriginType() const;

  constexpr void __set__trackingOriginType(::GlobalNamespace::__OVRManager__TrackingOrigin value);

  constexpr bool& __get_usePositionTracking();

  constexpr bool const& __get_usePositionTracking() const;

  constexpr void __set_usePositionTracking(bool value);

  constexpr bool& __get_useRotationTracking();

  constexpr bool const& __get_useRotationTracking() const;

  constexpr void __set_useRotationTracking(bool value);

  constexpr bool& __get_useIPDInPositionTracking();

  constexpr bool const& __get_useIPDInPositionTracking() const;

  constexpr void __set_useIPDInPositionTracking(bool value);

  constexpr bool& __get_resetTrackerOnLoad();

  constexpr bool const& __get_resetTrackerOnLoad() const;

  constexpr void __set_resetTrackerOnLoad(bool value);

  constexpr bool& __get_AllowRecenter();

  constexpr bool const& __get_AllowRecenter() const;

  constexpr void __set_AllowRecenter(bool value);

  constexpr bool& __get_LateControllerUpdate();

  constexpr bool const& __get_LateControllerUpdate() const;

  constexpr void __set_LateControllerUpdate(bool value);

  constexpr bool& __get_LateLatching();

  constexpr bool const& __get_LateLatching() const;

  constexpr void __set_LateLatching(bool value);

  constexpr bool& __get__isSupportedPlatform_k__BackingField();

  constexpr bool const& __get__isSupportedPlatform_k__BackingField() const;

  constexpr void __set__isSupportedPlatform_k__BackingField(bool value);

  static inline void setStaticF__instance_k__BackingField(::GlobalNamespace::OVRManager* value);

  static inline ::GlobalNamespace::OVRManager* getStaticF__instance_k__BackingField();

  static inline void setStaticF__display_k__BackingField(::GlobalNamespace::OVRDisplay* value);

  static inline ::GlobalNamespace::OVRDisplay* getStaticF__display_k__BackingField();

  static inline void setStaticF__tracker_k__BackingField(::GlobalNamespace::OVRTracker* value);

  static inline ::GlobalNamespace::OVRTracker* getStaticF__tracker_k__BackingField();

  static inline void setStaticF__boundary_k__BackingField(::GlobalNamespace::OVRBoundary* value);

  static inline ::GlobalNamespace::OVRBoundary* getStaticF__boundary_k__BackingField();

  static inline void setStaticF__runtimeSettings_k__BackingField(::GlobalNamespace::OVRRuntimeSettings* value);

  static inline ::GlobalNamespace::OVRRuntimeSettings* getStaticF__runtimeSettings_k__BackingField();

  static inline void setStaticF__profile(::GlobalNamespace::OVRProfile* value);

  static inline ::GlobalNamespace::OVRProfile* getStaticF__profile();

  static inline void setStaticF_HMDAcquired(::System::Action* value);

  static inline ::System::Action* getStaticF_HMDAcquired();

  static inline void setStaticF_HMDLost(::System::Action* value);

  static inline ::System::Action* getStaticF_HMDLost();

  static inline void setStaticF_HMDMounted(::System::Action* value);

  static inline ::System::Action* getStaticF_HMDMounted();

  static inline void setStaticF_HMDUnmounted(::System::Action* value);

  static inline ::System::Action* getStaticF_HMDUnmounted();

  static inline void setStaticF_VrFocusAcquired(::System::Action* value);

  static inline ::System::Action* getStaticF_VrFocusAcquired();

  static inline void setStaticF_VrFocusLost(::System::Action* value);

  static inline ::System::Action* getStaticF_VrFocusLost();

  static inline void setStaticF_InputFocusAcquired(::System::Action* value);

  static inline ::System::Action* getStaticF_InputFocusAcquired();

  static inline void setStaticF_InputFocusLost(::System::Action* value);

  static inline ::System::Action* getStaticF_InputFocusLost();

  static inline void setStaticF_AudioOutChanged(::System::Action* value);

  static inline ::System::Action* getStaticF_AudioOutChanged();

  static inline void setStaticF_AudioInChanged(::System::Action* value);

  static inline ::System::Action* getStaticF_AudioInChanged();

  static inline void setStaticF_TrackingAcquired(::System::Action* value);

  static inline ::System::Action* getStaticF_TrackingAcquired();

  static inline void setStaticF_TrackingLost(::System::Action* value);

  static inline ::System::Action* getStaticF_TrackingLost();

  static inline void setStaticF_DisplayRefreshRateChanged(::System::Action_2<float_t, float_t>* value);

  static inline ::System::Action_2<float_t, float_t>* getStaticF_DisplayRefreshRateChanged();

  static inline void setStaticF_SpatialAnchorCreateComplete(::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>* value);

  static inline ::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>* getStaticF_SpatialAnchorCreateComplete();

  static inline void
  setStaticF_SpaceSetComponentStatusComplete(::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::__OVRPlugin__SpaceComponentType, bool>* value);

  static inline ::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::__OVRPlugin__SpaceComponentType, bool>* getStaticF_SpaceSetComponentStatusComplete();

  static inline void setStaticF_SpaceQueryResults(::System::Action_1<uint64_t>* value);

  static inline ::System::Action_1<uint64_t>* getStaticF_SpaceQueryResults();

  static inline void setStaticF_SpaceQueryComplete(::System::Action_2<uint64_t, bool>* value);

  static inline ::System::Action_2<uint64_t, bool>* getStaticF_SpaceQueryComplete();

  static inline void setStaticF_SpaceSaveComplete(::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>* value);

  static inline ::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>* getStaticF_SpaceSaveComplete();

  static inline void setStaticF_SpaceEraseComplete(::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation>* value);

  static inline ::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation>* getStaticF_SpaceEraseComplete();

  static inline void setStaticF_ShareSpacesComplete(::System::Action_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* value);

  static inline ::System::Action_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* getStaticF_ShareSpacesComplete();

  static inline void setStaticF_SpaceListSaveComplete(::System::Action_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* value);

  static inline ::System::Action_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* getStaticF_SpaceListSaveComplete();

  static inline void setStaticF_SceneCaptureComplete(::System::Action_2<uint64_t, bool>* value);

  static inline ::System::Action_2<uint64_t, bool>* getStaticF_SceneCaptureComplete();

  static inline void setStaticF_HSWDismissed(::System::Action* value);

  static inline ::System::Action* getStaticF_HSWDismissed();

  static inline void setStaticF__isHmdPresentCached(bool value);

  static inline bool getStaticF__isHmdPresentCached();

  static inline void setStaticF__isHmdPresent(bool value);

  static inline bool getStaticF__isHmdPresent();

  static inline void setStaticF__wasHmdPresent(bool value);

  static inline bool getStaticF__wasHmdPresent();

  static inline void setStaticF__hasVrFocusCached(bool value);

  static inline bool getStaticF__hasVrFocusCached();

  static inline void setStaticF__hasVrFocus(bool value);

  static inline bool getStaticF__hasVrFocus();

  static inline void setStaticF__hadVrFocus(bool value);

  static inline bool getStaticF__hadVrFocus();

  static inline void setStaticF__hadInputFocus(bool value);

  static inline bool getStaticF__hadInputFocus();

  static inline void setStaticF_OCULUS_UNITY_NAME_STR(::StringW value);

  static inline ::StringW getStaticF_OCULUS_UNITY_NAME_STR();

  static inline void setStaticF_OPENVR_UNITY_NAME_STR(::StringW value);

  static inline ::StringW getStaticF_OPENVR_UNITY_NAME_STR();

  static inline void setStaticF_loadedXRDevice(::GlobalNamespace::__OVRManager__XRDevice value);

  static inline ::GlobalNamespace::__OVRManager__XRDevice getStaticF_loadedXRDevice();

  static inline void setStaticF_OpenVRTouchRotationOffsetEulerLeft(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_OpenVRTouchRotationOffsetEulerLeft();

  static inline void setStaticF_OpenVRTouchRotationOffsetEulerRight(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_OpenVRTouchRotationOffsetEulerRight();

  static inline void setStaticF_OpenVRTouchPositionOffsetLeft(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_OpenVRTouchPositionOffsetLeft();

  static inline void setStaticF_OpenVRTouchPositionOffsetRight(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_OpenVRTouchPositionOffsetRight();

  static inline void setStaticF_m_SpaceWarpEnabled(bool value);

  static inline bool getStaticF_m_SpaceWarpEnabled();

  static inline void setStaticF_m_AppSpaceTransform(::UnityEngine::Transform* value);

  static inline ::UnityEngine::Transform* getStaticF_m_AppSpaceTransform();

  static inline void setStaticF_m_CachedDepthTextureMode(::UnityEngine::DepthTextureMode value);

  static inline ::UnityEngine::DepthTextureMode getStaticF_m_CachedDepthTextureMode();

  static inline void setStaticF__isUserPresentCached(bool value);

  static inline bool getStaticF__isUserPresentCached();

  static inline void setStaticF__isUserPresent(bool value);

  static inline bool getStaticF__isUserPresent();

  static inline void setStaticF__wasUserPresent(bool value);

  static inline bool getStaticF__wasUserPresent();

  static inline void setStaticF_prevAudioOutIdIsCached(bool value);

  static inline bool getStaticF_prevAudioOutIdIsCached();

  static inline void setStaticF_prevAudioInIdIsCached(bool value);

  static inline bool getStaticF_prevAudioInIdIsCached();

  static inline void setStaticF_prevAudioOutId(::StringW value);

  static inline ::StringW getStaticF_prevAudioOutId();

  static inline void setStaticF_prevAudioInId(::StringW value);

  static inline ::StringW getStaticF_prevAudioInId();

  static inline void setStaticF_wasPositionTracked(bool value);

  static inline bool getStaticF_wasPositionTracked();

  static inline void setStaticF_eventDataBuffer(::GlobalNamespace::__OVRPlugin__EventDataBuffer value);

  static inline ::GlobalNamespace::__OVRPlugin__EventDataBuffer getStaticF_eventDataBuffer();

  static inline void setStaticF_UnityAlphaOrBetaVersionWarningMessage(::StringW value);

  static inline ::StringW getStaticF_UnityAlphaOrBetaVersionWarningMessage();

  static inline void setStaticF_OVRManagerinitialized(bool value);

  static inline bool getStaticF_OVRManagerinitialized();

  static inline void setStaticF_s_displaySubsystems(::System::Collections::Generic::List_1<Il2CppObject*>* value);

  static inline ::System::Collections::Generic::List_1<Il2CppObject*>* getStaticF_s_displaySubsystems();

  static inline void setStaticF_s_displaySubsystemDescriptors(::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* getStaticF_s_displaySubsystemDescriptors();

  static inline void setStaticF_s_inputSubsystems(::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* getStaticF_s_inputSubsystems();

  static inline void setStaticF_multipleMainCameraWarningPresented(bool value);

  static inline bool getStaticF_multipleMainCameraWarningPresented();

  static inline void setStaticF_suppressUnableToFindMainCameraMessage(bool value);

  static inline bool getStaticF_suppressUnableToFindMainCameraMessage();

  static inline void setStaticF_lastFoundMainCamera(::System::WeakReference_1<::UnityEngine::Camera*>* value);

  static inline ::System::WeakReference_1<::UnityEngine::Camera*>* getStaticF_lastFoundMainCamera();

  static inline void setStaticF_staticMixedRealityCaptureInitialized(bool value);

  static inline bool getStaticF_staticMixedRealityCaptureInitialized();

  static inline void setStaticF_staticPrevEnableMixedRealityCapture(bool value);

  static inline bool getStaticF_staticPrevEnableMixedRealityCapture();

  static inline void setStaticF_staticMrcSettings(::GlobalNamespace::OVRMixedRealityCaptureSettings* value);

  static inline ::GlobalNamespace::OVRMixedRealityCaptureSettings* getStaticF_staticMrcSettings();

  static inline void setStaticF_suppressDisableMixedRealityBecauseOfNoMainCameraWarning(bool value);

  static inline bool getStaticF_suppressDisableMixedRealityBecauseOfNoMainCameraWarning();

  static inline void setStaticF__passthroughInitializationState(::GlobalNamespace::__OVRManager__PassthroughInitializationState value);

  static inline ::GlobalNamespace::__OVRManager__PassthroughInitializationState getStaticF__passthroughInitializationState();

  static inline void setStaticF__passthroughCapabilities(::GlobalNamespace::__OVRManager__PassthroughCapabilities* value);

  static inline ::GlobalNamespace::__OVRManager__PassthroughCapabilities* getStaticF__passthroughCapabilities();

  /// @brief Method get_instance addr 0x25d886c size 0x58 virtual false final false
  static inline ::GlobalNamespace::OVRManager* get_instance();

  /// @brief Method set_instance addr 0x25d88c4 size 0x5c virtual false final false
  static inline void set_instance(::GlobalNamespace::OVRManager* value);

  /// @brief Method get_display addr 0x25d8920 size 0x58 virtual false final false
  static inline ::GlobalNamespace::OVRDisplay* get_display();

  /// @brief Method set_display addr 0x25d8978 size 0x5c virtual false final false
  static inline void set_display(::GlobalNamespace::OVRDisplay* value);

  /// @brief Method get_tracker addr 0x25d89d4 size 0x58 virtual false final false
  static inline ::GlobalNamespace::OVRTracker* get_tracker();

  /// @brief Method set_tracker addr 0x25d8a2c size 0x5c virtual false final false
  static inline void set_tracker(::GlobalNamespace::OVRTracker* value);

  /// @brief Method get_boundary addr 0x25d8a88 size 0x58 virtual false final false
  static inline ::GlobalNamespace::OVRBoundary* get_boundary();

  /// @brief Method set_boundary addr 0x25d8ae0 size 0x5c virtual false final false
  static inline void set_boundary(::GlobalNamespace::OVRBoundary* value);

  /// @brief Method get_runtimeSettings addr 0x25d8b3c size 0x58 virtual false final false
  static inline ::GlobalNamespace::OVRRuntimeSettings* get_runtimeSettings();

  /// @brief Method set_runtimeSettings addr 0x25d8b94 size 0x5c virtual false final false
  static inline void set_runtimeSettings(::GlobalNamespace::OVRRuntimeSettings* value);

  /// @brief Method get_profile addr 0x25d8bf0 size 0x100 virtual false final false
  static inline ::GlobalNamespace::OVRProfile* get_profile();

  /// @brief Method add_HMDAcquired addr 0x25d8cf0 size 0xdc virtual false final false
  static inline void add_HMDAcquired(::System::Action* value);

  /// @brief Method remove_HMDAcquired addr 0x25d8dcc size 0xdc virtual false final false
  static inline void remove_HMDAcquired(::System::Action* value);

  /// @brief Method add_HMDLost addr 0x25d8ea8 size 0xdc virtual false final false
  static inline void add_HMDLost(::System::Action* value);

  /// @brief Method remove_HMDLost addr 0x25d8f84 size 0xdc virtual false final false
  static inline void remove_HMDLost(::System::Action* value);

  /// @brief Method add_HMDMounted addr 0x25d9060 size 0xdc virtual false final false
  static inline void add_HMDMounted(::System::Action* value);

  /// @brief Method remove_HMDMounted addr 0x25d913c size 0xdc virtual false final false
  static inline void remove_HMDMounted(::System::Action* value);

  /// @brief Method add_HMDUnmounted addr 0x25d9218 size 0xdc virtual false final false
  static inline void add_HMDUnmounted(::System::Action* value);

  /// @brief Method remove_HMDUnmounted addr 0x25d92f4 size 0xdc virtual false final false
  static inline void remove_HMDUnmounted(::System::Action* value);

  /// @brief Method add_VrFocusAcquired addr 0x25d93d0 size 0xdc virtual false final false
  static inline void add_VrFocusAcquired(::System::Action* value);

  /// @brief Method remove_VrFocusAcquired addr 0x25d94ac size 0xdc virtual false final false
  static inline void remove_VrFocusAcquired(::System::Action* value);

  /// @brief Method add_VrFocusLost addr 0x25d9588 size 0xdc virtual false final false
  static inline void add_VrFocusLost(::System::Action* value);

  /// @brief Method remove_VrFocusLost addr 0x25d9664 size 0xdc virtual false final false
  static inline void remove_VrFocusLost(::System::Action* value);

  /// @brief Method add_InputFocusAcquired addr 0x25d9740 size 0xdc virtual false final false
  static inline void add_InputFocusAcquired(::System::Action* value);

  /// @brief Method remove_InputFocusAcquired addr 0x25d981c size 0xdc virtual false final false
  static inline void remove_InputFocusAcquired(::System::Action* value);

  /// @brief Method add_InputFocusLost addr 0x25d98f8 size 0xdc virtual false final false
  static inline void add_InputFocusLost(::System::Action* value);

  /// @brief Method remove_InputFocusLost addr 0x25d99d4 size 0xdc virtual false final false
  static inline void remove_InputFocusLost(::System::Action* value);

  /// @brief Method add_AudioOutChanged addr 0x25d9ab0 size 0xdc virtual false final false
  static inline void add_AudioOutChanged(::System::Action* value);

  /// @brief Method remove_AudioOutChanged addr 0x25d9b8c size 0xdc virtual false final false
  static inline void remove_AudioOutChanged(::System::Action* value);

  /// @brief Method add_AudioInChanged addr 0x25d9c68 size 0xdc virtual false final false
  static inline void add_AudioInChanged(::System::Action* value);

  /// @brief Method remove_AudioInChanged addr 0x25d9d44 size 0xdc virtual false final false
  static inline void remove_AudioInChanged(::System::Action* value);

  /// @brief Method add_TrackingAcquired addr 0x25d9e20 size 0xdc virtual false final false
  static inline void add_TrackingAcquired(::System::Action* value);

  /// @brief Method remove_TrackingAcquired addr 0x25d9efc size 0xdc virtual false final false
  static inline void remove_TrackingAcquired(::System::Action* value);

  /// @brief Method add_TrackingLost addr 0x25d9fd8 size 0xdc virtual false final false
  static inline void add_TrackingLost(::System::Action* value);

  /// @brief Method remove_TrackingLost addr 0x25da0b4 size 0xdc virtual false final false
  static inline void remove_TrackingLost(::System::Action* value);

  /// @brief Method add_DisplayRefreshRateChanged addr 0x25da190 size 0xf4 virtual false final false
  static inline void add_DisplayRefreshRateChanged(::System::Action_2<float_t, float_t>* value);

  /// @brief Method remove_DisplayRefreshRateChanged addr 0x25da284 size 0xf4 virtual false final false
  static inline void remove_DisplayRefreshRateChanged(::System::Action_2<float_t, float_t>* value);

  /// @brief Method add_SpatialAnchorCreateComplete addr 0x25da378 size 0xf4 virtual false final false
  static inline void add_SpatialAnchorCreateComplete(::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>* value);

  /// @brief Method remove_SpatialAnchorCreateComplete addr 0x25da46c size 0xf4 virtual false final false
  static inline void remove_SpatialAnchorCreateComplete(::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>* value);

  /// @brief Method add_SpaceSetComponentStatusComplete addr 0x25da560 size 0xf4 virtual false final false
  static inline void
  add_SpaceSetComponentStatusComplete(::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::__OVRPlugin__SpaceComponentType, bool>* value);

  /// @brief Method remove_SpaceSetComponentStatusComplete addr 0x25da654 size 0xf4 virtual false final false
  static inline void
  remove_SpaceSetComponentStatusComplete(::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::__OVRPlugin__SpaceComponentType, bool>* value);

  /// @brief Method add_SpaceQueryResults addr 0x25da748 size 0xf4 virtual false final false
  static inline void add_SpaceQueryResults(::System::Action_1<uint64_t>* value);

  /// @brief Method remove_SpaceQueryResults addr 0x25da83c size 0xf4 virtual false final false
  static inline void remove_SpaceQueryResults(::System::Action_1<uint64_t>* value);

  /// @brief Method add_SpaceQueryComplete addr 0x25da930 size 0xf4 virtual false final false
  static inline void add_SpaceQueryComplete(::System::Action_2<uint64_t, bool>* value);

  /// @brief Method remove_SpaceQueryComplete addr 0x25daa24 size 0xf4 virtual false final false
  static inline void remove_SpaceQueryComplete(::System::Action_2<uint64_t, bool>* value);

  /// @brief Method add_SpaceSaveComplete addr 0x25dab18 size 0xf4 virtual false final false
  static inline void add_SpaceSaveComplete(::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>* value);

  /// @brief Method remove_SpaceSaveComplete addr 0x25dac0c size 0xf4 virtual false final false
  static inline void remove_SpaceSaveComplete(::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>* value);

  /// @brief Method add_SpaceEraseComplete addr 0x25dad00 size 0xf4 virtual false final false
  static inline void add_SpaceEraseComplete(::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation>* value);

  /// @brief Method remove_SpaceEraseComplete addr 0x25dadf4 size 0xf4 virtual false final false
  static inline void remove_SpaceEraseComplete(::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation>* value);

  /// @brief Method add_ShareSpacesComplete addr 0x25daee8 size 0xf4 virtual false final false
  static inline void add_ShareSpacesComplete(::System::Action_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* value);

  /// @brief Method remove_ShareSpacesComplete addr 0x25dafdc size 0xf4 virtual false final false
  static inline void remove_ShareSpacesComplete(::System::Action_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* value);

  /// @brief Method add_SpaceListSaveComplete addr 0x25db0d0 size 0xf4 virtual false final false
  static inline void add_SpaceListSaveComplete(::System::Action_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* value);

  /// @brief Method remove_SpaceListSaveComplete addr 0x25db1c4 size 0xf4 virtual false final false
  static inline void remove_SpaceListSaveComplete(::System::Action_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* value);

  /// @brief Method add_SceneCaptureComplete addr 0x25db2b8 size 0xf4 virtual false final false
  static inline void add_SceneCaptureComplete(::System::Action_2<uint64_t, bool>* value);

  /// @brief Method remove_SceneCaptureComplete addr 0x25db3ac size 0xf4 virtual false final false
  static inline void remove_SceneCaptureComplete(::System::Action_2<uint64_t, bool>* value);

  /// @brief Method add_HSWDismissed addr 0x25db4a0 size 0xdc virtual false final false
  static inline void add_HSWDismissed(::System::Action* value);

  /// @brief Method remove_HSWDismissed addr 0x25db57c size 0xdc virtual false final false
  static inline void remove_HSWDismissed(::System::Action* value);

  /// @brief Method get_isHmdPresent addr 0x25db658 size 0xd8 virtual false final false
  static inline bool get_isHmdPresent();

  /// @brief Method set_isHmdPresent addr 0x25db730 size 0x64 virtual false final false
  static inline void set_isHmdPresent(bool value);

  /// @brief Method get_audioOutId addr 0x25db794 size 0x50 virtual false final false
  static inline ::StringW get_audioOutId();

  /// @brief Method get_audioInId addr 0x25db7e4 size 0x50 virtual false final false
  static inline ::StringW get_audioInId();

  /// @brief Method get_hasVrFocus addr 0x25db834 size 0xd8 virtual false final false
  static inline bool get_hasVrFocus();

  /// @brief Method set_hasVrFocus addr 0x25db90c size 0x64 virtual false final false
  static inline void set_hasVrFocus(bool value);

  /// @brief Method get_hasInputFocus addr 0x25db970 size 0x50 virtual false final false
  static inline bool get_hasInputFocus();

  /// @brief Method get_chromatic addr 0x25db9c0 size 0x8c virtual false final false
  inline bool get_chromatic();

  /// @brief Method set_chromatic addr 0x25dba4c size 0x90 virtual false final false
  inline void set_chromatic(bool value);

  /// @brief Method get_monoscopic addr 0x25dbadc size 0x90 virtual false final false
  inline bool get_monoscopic();

  /// @brief Method set_monoscopic addr 0x25dbb6c size 0x9c virtual false final false
  inline void set_monoscopic(bool value);

  /// @brief Method get_colorGamut addr 0x25dbc08 size 0x8 virtual false final false
  inline ::GlobalNamespace::__OVRManager__ColorSpace get_colorGamut();

  /// @brief Method set_colorGamut addr 0x25dbc10 size 0x68 virtual false final false
  inline void set_colorGamut(::GlobalNamespace::__OVRManager__ColorSpace value);

  /// @brief Method get_nativeColorGamut addr 0x25dbc78 size 0x50 virtual false final false
  inline ::GlobalNamespace::__OVRManager__ColorSpace get_nativeColorGamut();

  /// @brief Method IsAdaptiveResSupportedByEngine addr 0x25dbcc8 size 0x8 virtual false final false
  static inline bool IsAdaptiveResSupportedByEngine();

  /// @brief Method get_headPoseRelativeOffsetRotation addr 0x25dbcd0 size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_headPoseRelativeOffsetRotation();

  /// @brief Method set_headPoseRelativeOffsetRotation addr 0x25d10a4 size 0xe8 virtual false final false
  inline void set_headPoseRelativeOffsetRotation(::UnityEngine::Vector3 value);

  /// @brief Method get_headPoseRelativeOffsetTranslation addr 0x25dbcdc size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_headPoseRelativeOffsetTranslation();

  /// @brief Method set_headPoseRelativeOffsetTranslation addr 0x25d0f8c size 0x118 virtual false final false
  inline void set_headPoseRelativeOffsetTranslation(::UnityEngine::Vector3 value);

  /// @brief Method get_eyeFovPremultipliedAlphaModeEnabled addr 0x25dbce8 size 0x50 virtual false final false
  static inline bool get_eyeFovPremultipliedAlphaModeEnabled();

  /// @brief Method set_eyeFovPremultipliedAlphaModeEnabled addr 0x25dbd38 size 0x58 virtual false final false
  static inline void set_eyeFovPremultipliedAlphaModeEnabled(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_enableMixedReality addr 0x25dbd90 size 0x8 virtual true final true
  inline bool OVRMixedRealityCaptureConfiguration_get_enableMixedReality();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_enableMixedReality addr 0x25dbd98 size 0xc virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_enableMixedReality(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_extraHiddenLayers addr 0x25dbda4 size 0x8 virtual true final true
  inline ::UnityEngine::LayerMask OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_extraHiddenLayers addr 0x25dbdac size 0x8 virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers(::UnityEngine::LayerMask value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_extraVisibleLayers addr 0x25dbdb4 size 0x8 virtual true final true
  inline ::UnityEngine::LayerMask OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_extraVisibleLayers addr 0x25dbdbc size 0x8 virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers(::UnityEngine::LayerMask value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_dynamicCullingMask addr 0x25dbdc4 size 0x8 virtual true final true
  inline bool OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_dynamicCullingMask addr 0x25dbdcc size 0xc virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_compositionMethod addr 0x25dbdd8 size 0x8 virtual true final true
  inline ::GlobalNamespace::__OVRManager__CompositionMethod OVRMixedRealityCaptureConfiguration_get_compositionMethod();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_compositionMethod addr 0x25dbde0 size 0x8 virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_compositionMethod(::GlobalNamespace::__OVRManager__CompositionMethod value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorRift addr 0x25dbde8 size 0xc virtual true final true
  inline ::UnityEngine::Color OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorRift addr 0x25dbdf4 size 0xc virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift(::UnityEngine::Color value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorQuest addr 0x25dbe00 size 0xc virtual true final true
  inline ::UnityEngine::Color OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorQuest addr 0x25dbe0c size 0xc virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest(::UnityEngine::Color value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_capturingCameraDevice addr 0x25dbe18 size 0x8 virtual true final true
  inline ::GlobalNamespace::__OVRManager__CameraDevice OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_capturingCameraDevice addr 0x25dbe20 size 0x8 virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice(::GlobalNamespace::__OVRManager__CameraDevice value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_flipCameraFrameHorizontally addr 0x25dbe28 size 0x8 virtual true final true
  inline bool OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_flipCameraFrameHorizontally addr 0x25dbe30 size 0xc virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_flipCameraFrameVertically addr 0x25dbe3c size 0x8 virtual true final true
  inline bool OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_flipCameraFrameVertically addr 0x25dbe44 size 0xc virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_handPoseStateLatency addr 0x25dbe50 size 0x8 virtual true final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_handPoseStateLatency addr 0x25dbe58 size 0x8 virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_sandwichCompositionRenderLatency addr 0x25dbe60 size 0x8 virtual true final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_sandwichCompositionRenderLatency addr 0x25dbe68 size 0x8 virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_sandwichCompositionBufferedFrames addr 0x25dbe70 size 0x8 virtual true final true
  inline int32_t OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_sandwichCompositionBufferedFrames addr 0x25dbe78 size 0x8 virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames(int32_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeyColor addr 0x25dbe80 size 0xc virtual true final true
  inline ::UnityEngine::Color OVRMixedRealityCaptureConfiguration_get_chromaKeyColor();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeyColor addr 0x25dbe8c size 0xc virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_chromaKeyColor(::UnityEngine::Color value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeySimilarity addr 0x25dbe98 size 0x8 virtual true final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeySimilarity addr 0x25dbea0 size 0x8 virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeySmoothRange addr 0x25dbea8 size 0x8 virtual true final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeySmoothRange addr 0x25dbeb0 size 0x8 virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeySpillRange addr 0x25dbeb8 size 0x8 virtual true final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeySpillRange addr 0x25dbec0 size 0x8 virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_useDynamicLighting addr 0x25dbec8 size 0x8 virtual true final true
  inline bool OVRMixedRealityCaptureConfiguration_get_useDynamicLighting();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_useDynamicLighting addr 0x25dbed0 size 0xc virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_useDynamicLighting(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_depthQuality addr 0x25dbedc size 0x8 virtual true final true
  inline ::GlobalNamespace::__OVRManager__DepthQuality OVRMixedRealityCaptureConfiguration_get_depthQuality();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_depthQuality addr 0x25dbee4 size 0x8 virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_depthQuality(::GlobalNamespace::__OVRManager__DepthQuality value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_dynamicLightingSmoothFactor addr 0x25dbeec size 0x8 virtual true final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_dynamicLightingSmoothFactor addr 0x25dbef4 size 0x8 virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_dynamicLightingDepthVariationClampingValue addr 0x25dbefc size 0x8 virtual true final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_dynamicLightingDepthVariationClampingValue addr 0x25dbf04 size 0x8 virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenType addr 0x25dbf0c size 0x8 virtual true final true
  inline ::GlobalNamespace::__OVRManager__VirtualGreenScreenType OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenType addr 0x25dbf14 size 0x8 virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType(::GlobalNamespace::__OVRManager__VirtualGreenScreenType value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenTopY addr 0x25dbf1c size 0x8 virtual true final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenTopY addr 0x25dbf24 size 0x8 virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenBottomY addr 0x25dbf2c size 0x8 virtual true final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenBottomY addr 0x25dbf34 size 0x8 virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenApplyDepthCulling addr 0x25dbf3c size 0x8 virtual true final true
  inline bool OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenApplyDepthCulling addr 0x25dbf44 size 0xc virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenDepthTolerance addr 0x25dbf50 size 0x8 virtual true final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenDepthTolerance addr 0x25dbf58 size 0x8 virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_mrcActivationMode addr 0x25dbf60 size 0x8 virtual true final true
  inline ::GlobalNamespace::__OVRManager__MrcActivationMode OVRMixedRealityCaptureConfiguration_get_mrcActivationMode();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_mrcActivationMode addr 0x25dbf68 size 0x8 virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_mrcActivationMode(::GlobalNamespace::__OVRManager__MrcActivationMode value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_instantiateMixedRealityCameraGameObject addr 0x25dbf70 size 0x8 virtual true final true
  inline ::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_instantiateMixedRealityCameraGameObject addr 0x25dbf78 size 0x8 virtual true final true
  inline void OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject(::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* value);

  /// @brief Method get_xrApi addr 0x25dbf80 size 0x50 virtual false final false
  inline ::GlobalNamespace::__OVRManager__XrApi get_xrApi();

  /// @brief Method get_xrInstance addr 0x25dbfd0 size 0x50 virtual false final false
  inline uint64_t get_xrInstance();

  /// @brief Method get_xrSession addr 0x25dc020 size 0x50 virtual false final false
  inline uint64_t get_xrSession();

  /// @brief Method get_vsyncCount addr 0x25dc070 size 0x8c virtual false final false
  inline int32_t get_vsyncCount();

  /// @brief Method set_vsyncCount addr 0x25dc0fc size 0x90 virtual false final false
  inline void set_vsyncCount(int32_t value);

  /// @brief Method get_batteryLevel addr 0x25dc18c size 0x8c virtual false final false
  static inline float_t get_batteryLevel();

  /// @brief Method get_batteryTemperature addr 0x25dc218 size 0x8c virtual false final false
  static inline float_t get_batteryTemperature();

  /// @brief Method get_batteryStatus addr 0x25dc2a4 size 0x8c virtual false final false
  static inline int32_t get_batteryStatus();

  /// @brief Method get_volumeLevel addr 0x25dc330 size 0x8c virtual false final false
  static inline float_t get_volumeLevel();

  /// @brief Method get_suggestedCpuPerfLevel addr 0x25dc3bc size 0x8c virtual false final false
  static inline ::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel get_suggestedCpuPerfLevel();

  /// @brief Method set_suggestedCpuPerfLevel addr 0x25dc448 size 0x90 virtual false final false
  static inline void set_suggestedCpuPerfLevel(::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel value);

  /// @brief Method get_suggestedGpuPerfLevel addr 0x25dc4d8 size 0x8c virtual false final false
  static inline ::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel get_suggestedGpuPerfLevel();

  /// @brief Method set_suggestedGpuPerfLevel addr 0x25dc564 size 0x90 virtual false final false
  static inline void set_suggestedGpuPerfLevel(::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel value);

  /// @brief Method get_cpuLevel addr 0x25dc5f4 size 0x8c virtual false final false
  static inline int32_t get_cpuLevel();

  /// @brief Method set_cpuLevel addr 0x25dc680 size 0x90 virtual false final false
  static inline void set_cpuLevel(int32_t value);

  /// @brief Method get_gpuLevel addr 0x25dc710 size 0x8c virtual false final false
  static inline int32_t get_gpuLevel();

  /// @brief Method set_gpuLevel addr 0x25dc79c size 0x90 virtual false final false
  static inline void set_gpuLevel(int32_t value);

  /// @brief Method get_isPowerSavingActive addr 0x25dc82c size 0x8c virtual false final false
  static inline bool get_isPowerSavingActive();

  /// @brief Method get_eyeTextureFormat addr 0x25dc8b8 size 0x50 virtual false final false
  static inline ::GlobalNamespace::__OVRManager__EyeTextureFormat get_eyeTextureFormat();

  /// @brief Method set_eyeTextureFormat addr 0x25dc908 size 0x58 virtual false final false
  static inline void set_eyeTextureFormat(::GlobalNamespace::__OVRManager__EyeTextureFormat value);

  /// @brief Method get_eyeTrackedFoveatedRenderingSupported addr 0x25dc960 size 0x50 virtual false final false
  static inline bool get_eyeTrackedFoveatedRenderingSupported();

  /// @brief Method get_eyeTrackedFoveatedRenderingEnabled addr 0x25dc9b0 size 0x50 virtual false final false
  static inline bool get_eyeTrackedFoveatedRenderingEnabled();

  /// @brief Method set_eyeTrackedFoveatedRenderingEnabled addr 0x25dca00 size 0x74 virtual false final false
  static inline void set_eyeTrackedFoveatedRenderingEnabled(bool value);

  /// @brief Method get_foveatedRenderingLevel addr 0x25dca74 size 0x50 virtual false final false
  static inline ::GlobalNamespace::__OVRManager__FoveatedRenderingLevel get_foveatedRenderingLevel();

  /// @brief Method set_foveatedRenderingLevel addr 0x25dcac4 size 0x58 virtual false final false
  static inline void set_foveatedRenderingLevel(::GlobalNamespace::__OVRManager__FoveatedRenderingLevel value);

  /// @brief Method get_fixedFoveatedRenderingSupported addr 0x25dcb1c size 0x50 virtual false final false
  static inline bool get_fixedFoveatedRenderingSupported();

  /// @brief Method get_fixedFoveatedRenderingLevel addr 0x25dcb6c size 0x50 virtual false final false
  static inline ::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel get_fixedFoveatedRenderingLevel();

  /// @brief Method set_fixedFoveatedRenderingLevel addr 0x25dcbbc size 0x58 virtual false final false
  static inline void set_fixedFoveatedRenderingLevel(::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel value);

  /// @brief Method get_useDynamicFoveatedRendering addr 0x25dcc14 size 0x50 virtual false final false
  static inline bool get_useDynamicFoveatedRendering();

  /// @brief Method set_useDynamicFoveatedRendering addr 0x25dcc64 size 0x58 virtual false final false
  static inline void set_useDynamicFoveatedRendering(bool value);

  /// @brief Method get_useDynamicFixedFoveatedRendering addr 0x25dccbc size 0x50 virtual false final false
  static inline bool get_useDynamicFixedFoveatedRendering();

  /// @brief Method set_useDynamicFixedFoveatedRendering addr 0x25dcd0c size 0x58 virtual false final false
  static inline void set_useDynamicFixedFoveatedRendering(bool value);

  /// @brief Method get_tiledMultiResSupported addr 0x25dcd64 size 0x50 virtual false final false
  static inline bool get_tiledMultiResSupported();

  /// @brief Method get_tiledMultiResLevel addr 0x25dcdb4 size 0x50 virtual false final false
  static inline ::GlobalNamespace::__OVRManager__TiledMultiResLevel get_tiledMultiResLevel();

  /// @brief Method set_tiledMultiResLevel addr 0x25dce04 size 0x58 virtual false final false
  static inline void set_tiledMultiResLevel(::GlobalNamespace::__OVRManager__TiledMultiResLevel value);

  /// @brief Method get_gpuUtilSupported addr 0x25dce5c size 0x50 virtual false final false
  static inline bool get_gpuUtilSupported();

  /// @brief Method get_gpuUtilLevel addr 0x25dceac size 0xb0 virtual false final false
  static inline float_t get_gpuUtilLevel();

  /// @brief Method get_systemHeadsetType addr 0x25dcf5c size 0x50 virtual false final false
  static inline ::GlobalNamespace::__OVRManager__SystemHeadsetType get_systemHeadsetType();

  /// @brief Method SetColorScaleAndOffset addr 0x25dcfac size 0xb8 virtual false final false
  static inline void SetColorScaleAndOffset(::UnityEngine::Vector4 colorScale, ::UnityEngine::Vector4 colorOffset, bool applyToAllLayers);

  /// @brief Method SetOpenVRLocalPose addr 0x25dd064 size 0x104 virtual false final false
  static inline void SetOpenVRLocalPose(::UnityEngine::Vector3 leftPos, ::UnityEngine::Vector3 rightPos, ::UnityEngine::Quaternion leftRot, ::UnityEngine::Quaternion rightRot);

  /// @brief Method GetOpenVRControllerOffset addr 0x25dd168 size 0x1e4 virtual false final false
  static inline ::GlobalNamespace::OVRPose GetOpenVRControllerOffset(::UnityEngine::XR::XRNode hand);

  /// @brief Method SetSpaceWarp addr 0x25dd34c size 0x274 virtual false final false
  static inline void SetSpaceWarp(bool enabled);

  /// @brief Method GetSpaceWarp addr 0x25ddc38 size 0x58 virtual false final false
  static inline bool GetSpaceWarp();

  /// @brief Method get_trackingOriginType addr 0x25ddc90 size 0x90 virtual false final false
  inline ::GlobalNamespace::__OVRManager__TrackingOrigin get_trackingOriginType();

  /// @brief Method set_trackingOriginType addr 0x25ddd20 size 0x1c8 virtual false final false
  inline void set_trackingOriginType(::GlobalNamespace::__OVRManager__TrackingOrigin value);

  /// @brief Method get_isSupportedPlatform addr 0x25de078 size 0x8 virtual false final false
  inline bool get_isSupportedPlatform();

  /// @brief Method set_isSupportedPlatform addr 0x25de080 size 0xc virtual false final false
  inline void set_isSupportedPlatform(bool value);

  /// @brief Method get_isUserPresent addr 0x25de08c size 0xd8 virtual false final false
  inline bool get_isUserPresent();

  /// @brief Method set_isUserPresent addr 0x25de164 size 0x64 virtual false final false
  inline void set_isUserPresent(bool value);

  /// @brief Method get_utilitiesVersion addr 0x25de1c8 size 0x58 virtual false final false
  static inline ::System::Version* get_utilitiesVersion();

  /// @brief Method get_pluginVersion addr 0x25de220 size 0x50 virtual false final false
  static inline ::System::Version* get_pluginVersion();

  /// @brief Method get_sdkVersion addr 0x25de270 size 0x50 virtual false final false
  static inline ::System::Version* get_sdkVersion();

  /// @brief Method MixedRealityEnabledFromCmd addr 0x25de2c0 size 0xac virtual false final false
  static inline bool MixedRealityEnabledFromCmd();

  /// @brief Method UseDirectCompositionFromCmd addr 0x25de36c size 0xac virtual false final false
  static inline bool UseDirectCompositionFromCmd();

  /// @brief Method UseExternalCompositionFromCmd addr 0x25de418 size 0xac virtual false final false
  static inline bool UseExternalCompositionFromCmd();

  /// @brief Method CreateMixedRealityCaptureConfigurationFileFromCmd addr 0x25de4c4 size 0xac virtual false final false
  static inline bool CreateMixedRealityCaptureConfigurationFileFromCmd();

  /// @brief Method LoadMixedRealityCaptureConfigurationFileFromCmd addr 0x25de570 size 0xac virtual false final false
  static inline bool LoadMixedRealityCaptureConfigurationFileFromCmd();

  /// @brief Method IsUnityAlphaOrBetaVersion addr 0x25de61c size 0xb8 virtual false final false
  static inline bool IsUnityAlphaOrBetaVersion();

  /// @brief Method InitOVRManager addr 0x25de6d4 size 0xca0 virtual false final false
  inline void InitOVRManager();

  /// @brief Method InitPermissionRequest addr 0x25dfb30 size 0xd4 virtual false final false
  inline void InitPermissionRequest();

  /// @brief Method Awake addr 0x25dfde8 size 0x6c virtual false final false
  inline void Awake();

  /// @brief Method SetCurrentXRDevice addr 0x25dfe54 size 0x150 virtual false final false
  inline void SetCurrentXRDevice();

  /// @brief Method GetCurrentDisplaySubsystem addr 0x25dffa4 size 0x190 virtual false final false
  static inline Il2CppObject* GetCurrentDisplaySubsystem();

  /// @brief Method GetCurrentDisplaySubsystemDescriptor addr 0x25e0134 size 0x190 virtual false final false
  static inline ::UnityEngine::XR::XRDisplaySubsystemDescriptor* GetCurrentDisplaySubsystemDescriptor();

  /// @brief Method GetCurrentInputSubsystem addr 0x25ddee8 size 0x190 virtual false final false
  static inline ::UnityEngine::XR::XRInputSubsystem* GetCurrentInputSubsystem();

  /// @brief Method Initialize addr 0x25df8a0 size 0x290 virtual false final false
  inline void Initialize();

  /// @brief Method Update addr 0x25e02c4 size 0x1f60 virtual false final false
  inline void Update();

  /// @brief Method UpdateHMDEvents addr 0x25e2460 size 0x67c virtual false final false
  inline void UpdateHMDEvents();

  /// @brief Method FindMainCamera addr 0x25dd5c0 size 0x678 virtual false final false
  static inline ::UnityEngine::Camera* FindMainCamera();

  /// @brief Method OnDisable addr 0x25e31e0 size 0xb8 virtual false final false
  inline void OnDisable();

  /// @brief Method LateUpdate addr 0x25e3298 size 0x1e8 virtual false final false
  inline void LateUpdate();

  /// @brief Method FixedUpdate addr 0x25e3480 size 0x4c virtual false final false
  inline void FixedUpdate();

  /// @brief Method OnDestroy addr 0x25e34cc size 0x9c virtual false final false
  inline void OnDestroy();

  /// @brief Method OnApplicationPause addr 0x25e3568 size 0x88 virtual false final false
  inline void OnApplicationPause(bool pause);

  /// @brief Method OnApplicationFocus addr 0x25e35f0 size 0x88 virtual false final false
  inline void OnApplicationFocus(bool focus);

  /// @brief Method OnApplicationQuit addr 0x25e3678 size 0x68 virtual false final false
  inline void OnApplicationQuit();

  /// @brief Method ReturnToLauncher addr 0x25e36e0 size 0x4c virtual false final false
  inline void ReturnToLauncher();

  /// @brief Method PlatformUIConfirmQuit addr 0x25e372c size 0x8c virtual false final false
  static inline void PlatformUIConfirmQuit();

  /// @brief Method StaticInitializeMixedRealityCapture addr 0x25df374 size 0x52c virtual false final false
  static inline void StaticInitializeMixedRealityCapture(::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration);

  /// @brief Method StaticUpdateMixedRealityCapture addr 0x25e2adc size 0x4e0 virtual false final false
  static inline void StaticUpdateMixedRealityCapture(::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration, ::UnityEngine::GameObject* gameObject,
                                                     ::GlobalNamespace::__OVRManager__TrackingOrigin trackingOrigin, float_t displayFrequency);

  /// @brief Method StaticShutdownMixedRealityCapture addr 0x25e2224 size 0x10c virtual false final false
  static inline void StaticShutdownMixedRealityCapture(::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration);

  /// @brief Method PassthroughInitializedOrPending addr 0x25e37b8 size 0x10 virtual false final false
  static inline bool PassthroughInitializedOrPending(::GlobalNamespace::__OVRManager__PassthroughInitializationState state);

  /// @brief Method InitializeInsightPassthrough addr 0x25dfc04 size 0x1e4 virtual false final false
  static inline bool InitializeInsightPassthrough();

  /// @brief Method ShutdownInsightPassthrough addr 0x25e2330 size 0x130 virtual false final false
  static inline void ShutdownInsightPassthrough();

  /// @brief Method UpdateInsightPassthrough addr 0x25e2fbc size 0x224 virtual false final false
  static inline void UpdateInsightPassthrough(bool shouldBeEnabled);

  /// @brief Method IsInsightPassthroughSupported addr 0x25e37c8 size 0x50 virtual false final false
  static inline bool IsInsightPassthroughSupported();

  /// @brief Method GetPassthroughCapabilities addr 0x25e3818 size 0xfc virtual false final false
  static inline ::GlobalNamespace::__OVRManager__PassthroughCapabilities* GetPassthroughCapabilities();

  /// @brief Method IsInsightPassthroughInitialized addr 0x25e3914 size 0x60 virtual false final false
  static inline bool IsInsightPassthroughInitialized();

  /// @brief Method HasInsightPassthroughInitFailed addr 0x25e3974 size 0x60 virtual false final false
  static inline bool HasInsightPassthroughInitFailed();

  /// @brief Method IsInsightPassthroughInitPending addr 0x25e39d4 size 0x60 virtual false final false
  static inline bool IsInsightPassthroughInitPending();

  static inline ::GlobalNamespace::OVRManager* New_ctor();

  /// @brief Method .ctor addr 0x25e3a34 size 0xa4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRManager(OVRManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRManager(OVRManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRManager();

public:
  /// @brief Field disabledCameras, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Camera*>* ___disabledCameras;

  /// @brief Field prevTimeScale, offset: 0x20, size: 0x4, def value: None
  float_t ___prevTimeScale;

  /// @brief Field useRecommendedMSAALevel, offset: 0x24, size: 0x1, def value: None
  bool ___useRecommendedMSAALevel;

  /// @brief Field _monoscopic, offset: 0x25, size: 0x1, def value: None
  bool ____monoscopic;

  /// @brief Field _colorGamut, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__ColorSpace ____colorGamut;

  /// @brief Field minRenderScale, offset: 0x2c, size: 0x4, def value: None
  float_t ___minRenderScale;

  /// @brief Field maxRenderScale, offset: 0x30, size: 0x4, def value: None
  float_t ___maxRenderScale;

  /// @brief Field _headPoseRelativeOffsetRotation, offset: 0x34, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____headPoseRelativeOffsetRotation;

  /// @brief Field _headPoseRelativeOffsetTranslation, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____headPoseRelativeOffsetTranslation;

  /// @brief Field profilerTcpPort, offset: 0x4c, size: 0x4, def value: None
  int32_t ___profilerTcpPort;

  /// @brief Field expandMixedRealityCapturePropertySheet, offset: 0x50, size: 0x1, def value: None
  bool ___expandMixedRealityCapturePropertySheet;

  /// @brief Field enableMixedReality, offset: 0x51, size: 0x1, def value: None
  bool ___enableMixedReality;

  /// @brief Field compositionMethod, offset: 0x54, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__CompositionMethod ___compositionMethod;

  /// @brief Field extraHiddenLayers, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___extraHiddenLayers;

  /// @brief Field extraVisibleLayers, offset: 0x5c, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___extraVisibleLayers;

  /// @brief Field dynamicCullingMask, offset: 0x60, size: 0x1, def value: None
  bool ___dynamicCullingMask;

  /// @brief Field externalCompositionBackdropColorRift, offset: 0x64, size: 0x10, def value: None
  ::UnityEngine::Color ___externalCompositionBackdropColorRift;

  /// @brief Field externalCompositionBackdropColorQuest, offset: 0x74, size: 0x10, def value: None
  ::UnityEngine::Color ___externalCompositionBackdropColorQuest;

  /// @brief Field capturingCameraDevice, offset: 0x84, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__CameraDevice ___capturingCameraDevice;

  /// @brief Field flipCameraFrameHorizontally, offset: 0x88, size: 0x1, def value: None
  bool ___flipCameraFrameHorizontally;

  /// @brief Field flipCameraFrameVertically, offset: 0x89, size: 0x1, def value: None
  bool ___flipCameraFrameVertically;

  /// @brief Field handPoseStateLatency, offset: 0x8c, size: 0x4, def value: None
  float_t ___handPoseStateLatency;

  /// @brief Field sandwichCompositionRenderLatency, offset: 0x90, size: 0x4, def value: None
  float_t ___sandwichCompositionRenderLatency;

  /// @brief Field sandwichCompositionBufferedFrames, offset: 0x94, size: 0x4, def value: None
  int32_t ___sandwichCompositionBufferedFrames;

  /// @brief Field chromaKeyColor, offset: 0x98, size: 0x10, def value: None
  ::UnityEngine::Color ___chromaKeyColor;

  /// @brief Field chromaKeySimilarity, offset: 0xa8, size: 0x4, def value: None
  float_t ___chromaKeySimilarity;

  /// @brief Field chromaKeySmoothRange, offset: 0xac, size: 0x4, def value: None
  float_t ___chromaKeySmoothRange;

  /// @brief Field chromaKeySpillRange, offset: 0xb0, size: 0x4, def value: None
  float_t ___chromaKeySpillRange;

  /// @brief Field useDynamicLighting, offset: 0xb4, size: 0x1, def value: None
  bool ___useDynamicLighting;

  /// @brief Field depthQuality, offset: 0xb8, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__DepthQuality ___depthQuality;

  /// @brief Field dynamicLightingSmoothFactor, offset: 0xbc, size: 0x4, def value: None
  float_t ___dynamicLightingSmoothFactor;

  /// @brief Field dynamicLightingDepthVariationClampingValue, offset: 0xc0, size: 0x4, def value: None
  float_t ___dynamicLightingDepthVariationClampingValue;

  /// @brief Field virtualGreenScreenType, offset: 0xc4, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__VirtualGreenScreenType ___virtualGreenScreenType;

  /// @brief Field virtualGreenScreenTopY, offset: 0xc8, size: 0x4, def value: None
  float_t ___virtualGreenScreenTopY;

  /// @brief Field virtualGreenScreenBottomY, offset: 0xcc, size: 0x4, def value: None
  float_t ___virtualGreenScreenBottomY;

  /// @brief Field virtualGreenScreenApplyDepthCulling, offset: 0xd0, size: 0x1, def value: None
  bool ___virtualGreenScreenApplyDepthCulling;

  /// @brief Field virtualGreenScreenDepthTolerance, offset: 0xd4, size: 0x4, def value: None
  float_t ___virtualGreenScreenDepthTolerance;

  /// @brief Field mrcActivationMode, offset: 0xd8, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__MrcActivationMode ___mrcActivationMode;

  /// @brief Field instantiateMixedRealityCameraGameObject, offset: 0xe0, size: 0x8, def value: None
  ::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* ___instantiateMixedRealityCameraGameObject;

  /// @brief Field isInsightPassthroughEnabled, offset: 0xe8, size: 0x1, def value: None
  bool ___isInsightPassthroughEnabled;

  /// @brief Field requestBodyTrackingPermissionOnStartup, offset: 0xe9, size: 0x1, def value: None
  bool ___requestBodyTrackingPermissionOnStartup;

  /// @brief Field requestFaceTrackingPermissionOnStartup, offset: 0xea, size: 0x1, def value: None
  bool ___requestFaceTrackingPermissionOnStartup;

  /// @brief Field requestEyeTrackingPermissionOnStartup, offset: 0xeb, size: 0x1, def value: None
  bool ___requestEyeTrackingPermissionOnStartup;

  /// @brief Field _localDimming, offset: 0xec, size: 0x1, def value: None
  bool ____localDimming;

  /// @brief Field _trackingOriginType, offset: 0xf0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__TrackingOrigin ____trackingOriginType;

  /// @brief Field usePositionTracking, offset: 0xf4, size: 0x1, def value: None
  bool ___usePositionTracking;

  /// @brief Field useRotationTracking, offset: 0xf5, size: 0x1, def value: None
  bool ___useRotationTracking;

  /// @brief Field useIPDInPositionTracking, offset: 0xf6, size: 0x1, def value: None
  bool ___useIPDInPositionTracking;

  /// @brief Field resetTrackerOnLoad, offset: 0xf7, size: 0x1, def value: None
  bool ___resetTrackerOnLoad;

  /// @brief Field AllowRecenter, offset: 0xf8, size: 0x1, def value: None
  bool ___AllowRecenter;

  /// @brief Field LateControllerUpdate, offset: 0xf9, size: 0x1, def value: None
  bool ___LateControllerUpdate;

  /// @brief Field LateLatching, offset: 0xfa, size: 0x1, def value: None
  bool ___LateLatching;

  /// @brief Field <isSupportedPlatform>k__BackingField, offset: 0xfb, size: 0x1, def value: None
  bool ____isSupportedPlatform_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager, 0x100>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___disabledCameras) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___prevTimeScale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___useRecommendedMSAALevel) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ____monoscopic) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ____colorGamut) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___minRenderScale) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___maxRenderScale) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ____headPoseRelativeOffsetRotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ____headPoseRelativeOffsetTranslation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___profilerTcpPort) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___expandMixedRealityCapturePropertySheet) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___enableMixedReality) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___compositionMethod) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___extraHiddenLayers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___extraVisibleLayers) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___dynamicCullingMask) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___externalCompositionBackdropColorRift) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___externalCompositionBackdropColorQuest) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___capturingCameraDevice) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___flipCameraFrameHorizontally) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___flipCameraFrameVertically) == 0x89, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___handPoseStateLatency) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___sandwichCompositionRenderLatency) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___sandwichCompositionBufferedFrames) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___chromaKeyColor) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___chromaKeySimilarity) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___chromaKeySmoothRange) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___chromaKeySpillRange) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___useDynamicLighting) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___depthQuality) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___dynamicLightingSmoothFactor) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___dynamicLightingDepthVariationClampingValue) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___virtualGreenScreenType) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___virtualGreenScreenTopY) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___virtualGreenScreenBottomY) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___virtualGreenScreenApplyDepthCulling) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___virtualGreenScreenDepthTolerance) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___mrcActivationMode) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___instantiateMixedRealityCameraGameObject) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___isInsightPassthroughEnabled) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___requestBodyTrackingPermissionOnStartup) == 0xe9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___requestFaceTrackingPermissionOnStartup) == 0xea, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___requestEyeTrackingPermissionOnStartup) == 0xeb, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ____localDimming) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ____trackingOriginType) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___usePositionTracking) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___useRotationTracking) == 0xf5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___useIPDInPositionTracking) == 0xf6, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___resetTrackerOnLoad) == 0xf7, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___AllowRecenter) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___LateControllerUpdate) == 0xf9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___LateLatching) == 0xfa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ____isSupportedPlatform_k__BackingField) == 0xfb, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRManager__CameraDevice, "", "OVRManager/CameraDevice");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRManager__ColorSpace, "", "OVRManager/ColorSpace");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRManager__CompositionMethod, "", "OVRManager/CompositionMethod");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRManager__DepthQuality, "", "OVRManager/DepthQuality");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRManager__EyeTextureFormat, "", "OVRManager/EyeTextureFormat");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRManager__FixedFoveatedRenderingLevel, "", "OVRManager/FixedFoveatedRenderingLevel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRManager__FoveatedRenderingLevel, "", "OVRManager/FoveatedRenderingLevel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRManager__MrcActivationMode, "", "OVRManager/MrcActivationMode");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRManager__MrcCameraType, "", "OVRManager/MrcCameraType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRManager__PassthroughInitializationState, "", "OVRManager/PassthroughInitializationState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRManager__ProcessorPerformanceLevel, "", "OVRManager/ProcessorPerformanceLevel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRManager__SystemHeadsetType, "", "OVRManager/SystemHeadsetType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRManager__TiledMultiResLevel, "", "OVRManager/TiledMultiResLevel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRManager__TrackingOrigin, "", "OVRManager/TrackingOrigin");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRManager__VirtualGreenScreenType, "", "OVRManager/VirtualGreenScreenType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRManager__XRDevice, "", "OVRManager/XRDevice");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRManager__XrApi, "", "OVRManager/XrApi");
NEED_NO_BOX(::GlobalNamespace::OVRManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager*, "", "OVRManager");
NEED_NO_BOX(::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*, "", "OVRManager/InstantiateMrcCameraDelegate");
NEED_NO_BOX(::GlobalNamespace::__OVRManager__PassthroughCapabilities);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRManager__PassthroughCapabilities*, "", "OVRManager/PassthroughCapabilities");
NEED_NO_BOX(::GlobalNamespace::__OVRManager____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRManager____c*, "", "OVRManager/<>c");
