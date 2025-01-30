#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRMixedRealityCaptureConfiguration_def.hpp"
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
namespace GlobalNamespace {
class OVRBoundary;
}
namespace GlobalNamespace {
class OVRDisplay;
}
namespace GlobalNamespace {
struct OVRManager_CameraDevice;
}
namespace GlobalNamespace {
struct OVRManager_ColorSpace;
}
namespace GlobalNamespace {
struct OVRManager_CompositionMethod;
}
namespace GlobalNamespace {
struct OVRManager_ControllerDrivenHandPosesType;
}
namespace GlobalNamespace {
struct OVRManager_DepthQuality;
}
namespace GlobalNamespace {
class OVRManager_EventListener;
}
namespace GlobalNamespace {
struct OVRManager_EyeTextureFormat;
}
namespace GlobalNamespace {
struct OVRManager_FixedFoveatedRenderingLevel;
}
namespace GlobalNamespace {
struct OVRManager_FoveatedRenderingLevel;
}
namespace GlobalNamespace {
class OVRManager_InstantiateMrcCameraDelegate;
}
namespace GlobalNamespace {
struct OVRManager_MrcActivationMode;
}
namespace GlobalNamespace {
struct OVRManager_MrcCameraType;
}
namespace GlobalNamespace {
class OVRManager_PassthroughCapabilities;
}
namespace GlobalNamespace {
struct OVRManager_PassthroughInitializationState;
}
namespace GlobalNamespace {
struct OVRManager_ProcessorPerformanceLevel;
}
namespace GlobalNamespace {
struct OVRManager_SystemHeadsetType;
}
namespace GlobalNamespace {
struct OVRManager_TiledMultiResLevel;
}
namespace GlobalNamespace {
struct OVRManager_TrackingOrigin;
}
namespace GlobalNamespace {
struct OVRManager_VirtualGreenScreenType;
}
namespace GlobalNamespace {
struct OVRManager_XRDevice;
}
namespace GlobalNamespace {
struct OVRManager_XrApi;
}
namespace GlobalNamespace {
class OVRManager___c;
}
namespace GlobalNamespace {
class OVRMixedRealityCaptureConfiguration;
}
namespace GlobalNamespace {
class OVRMixedRealityCaptureSettings;
}
namespace GlobalNamespace {
struct OVRPlugin_EventDataBuffer;
}
namespace GlobalNamespace {
struct OVRPlugin_LayerSharpenType;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceComponentType;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceStorageLocation;
}
namespace GlobalNamespace {
struct OVRPose;
}
namespace GlobalNamespace {
class OVRProfile;
}
namespace GlobalNamespace {
class OVRRuntimeSettings;
}
namespace GlobalNamespace {
struct OVRSpace;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_OperationResult;
}
namespace GlobalNamespace {
class OVRTracker;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Action_4;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Action_6;
}
namespace System {
class Action;
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
namespace System {
struct Guid;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Version;
}
namespace System {
template <typename T> class WeakReference_1;
}
namespace UnityEngine::XR {
class XRDisplaySubsystemDescriptor;
}
namespace UnityEngine::XR {
class XRInputSubsystem;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct LayerMask;
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
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRManager_CameraDevice;
}
namespace GlobalNamespace {
struct OVRManager_ColorSpace;
}
namespace GlobalNamespace {
struct OVRManager_CompositionMethod;
}
namespace GlobalNamespace {
struct OVRManager_ControllerDrivenHandPosesType;
}
namespace GlobalNamespace {
struct OVRManager_DepthQuality;
}
namespace GlobalNamespace {
struct OVRManager_EyeTextureFormat;
}
namespace GlobalNamespace {
struct OVRManager_FixedFoveatedRenderingLevel;
}
namespace GlobalNamespace {
struct OVRManager_FoveatedRenderingLevel;
}
namespace GlobalNamespace {
struct OVRManager_MrcActivationMode;
}
namespace GlobalNamespace {
struct OVRManager_MrcCameraType;
}
namespace GlobalNamespace {
struct OVRManager_PassthroughInitializationState;
}
namespace GlobalNamespace {
struct OVRManager_ProcessorPerformanceLevel;
}
namespace GlobalNamespace {
struct OVRManager_SystemHeadsetType;
}
namespace GlobalNamespace {
struct OVRManager_TiledMultiResLevel;
}
namespace GlobalNamespace {
struct OVRManager_TrackingOrigin;
}
namespace GlobalNamespace {
struct OVRManager_VirtualGreenScreenType;
}
namespace GlobalNamespace {
struct OVRManager_XRDevice;
}
namespace GlobalNamespace {
struct OVRManager_XrApi;
}
namespace GlobalNamespace {
class OVRManager;
}
namespace GlobalNamespace {
class OVRManager_EventListener;
}
namespace GlobalNamespace {
class OVRManager_InstantiateMrcCameraDelegate;
}
namespace GlobalNamespace {
class OVRManager_PassthroughCapabilities;
}
namespace GlobalNamespace {
class OVRManager___c;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRManager_CameraDevice);
MARK_VAL_T(::GlobalNamespace::OVRManager_ColorSpace);
MARK_VAL_T(::GlobalNamespace::OVRManager_CompositionMethod);
MARK_VAL_T(::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType);
MARK_VAL_T(::GlobalNamespace::OVRManager_DepthQuality);
MARK_VAL_T(::GlobalNamespace::OVRManager_EyeTextureFormat);
MARK_VAL_T(::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel);
MARK_VAL_T(::GlobalNamespace::OVRManager_FoveatedRenderingLevel);
MARK_VAL_T(::GlobalNamespace::OVRManager_MrcActivationMode);
MARK_VAL_T(::GlobalNamespace::OVRManager_MrcCameraType);
MARK_VAL_T(::GlobalNamespace::OVRManager_PassthroughInitializationState);
MARK_VAL_T(::GlobalNamespace::OVRManager_ProcessorPerformanceLevel);
MARK_VAL_T(::GlobalNamespace::OVRManager_SystemHeadsetType);
MARK_VAL_T(::GlobalNamespace::OVRManager_TiledMultiResLevel);
MARK_VAL_T(::GlobalNamespace::OVRManager_TrackingOrigin);
MARK_VAL_T(::GlobalNamespace::OVRManager_VirtualGreenScreenType);
MARK_VAL_T(::GlobalNamespace::OVRManager_XRDevice);
MARK_VAL_T(::GlobalNamespace::OVRManager_XrApi);
MARK_REF_PTR_T(::GlobalNamespace::OVRManager);
MARK_REF_PTR_T(::GlobalNamespace::OVRManager_EventListener);
MARK_REF_PTR_T(::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate);
MARK_REF_PTR_T(::GlobalNamespace::OVRManager_PassthroughCapabilities);
MARK_REF_PTR_T(::GlobalNamespace::OVRManager___c);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/XrApi
struct CORDL_TYPE OVRManager_XrApi {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRManager_XrApi_Unwrapped
  enum struct __OVRManager_XrApi_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_CAPI = static_cast<int32_t>(0x1),
    __E_VRAPI = static_cast<int32_t>(0x2),
    __E_OpenXR = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRManager_XrApi_Unwrapped() const noexcept {
    return static_cast<__OVRManager_XrApi_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRManager_XrApi();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRManager_XrApi(int32_t value__) noexcept;

  /// @brief Field CAPI value: I32(1)
  static ::GlobalNamespace::OVRManager_XrApi const CAPI;

  /// @brief Field OpenXR value: I32(3)
  static ::GlobalNamespace::OVRManager_XrApi const OpenXR;

  /// @brief Field Unknown value: I32(0)
  static ::GlobalNamespace::OVRManager_XrApi const Unknown;

  /// @brief Field VRAPI value: I32(2)
  static ::GlobalNamespace::OVRManager_XrApi const VRAPI;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7942 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_XrApi, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager_XrApi, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/TrackingOrigin
struct CORDL_TYPE OVRManager_TrackingOrigin {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRManager_TrackingOrigin_Unwrapped
  enum struct __OVRManager_TrackingOrigin_Unwrapped : int32_t {
    __E_EyeLevel = static_cast<int32_t>(0x0),
    __E_FloorLevel = static_cast<int32_t>(0x1),
    __E_Stage = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRManager_TrackingOrigin_Unwrapped() const noexcept {
    return static_cast<__OVRManager_TrackingOrigin_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRManager_TrackingOrigin();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRManager_TrackingOrigin(int32_t value__) noexcept;

  /// @brief Field EyeLevel value: I32(0)
  static ::GlobalNamespace::OVRManager_TrackingOrigin const EyeLevel;

  /// @brief Field FloorLevel value: I32(1)
  static ::GlobalNamespace::OVRManager_TrackingOrigin const FloorLevel;

  /// @brief Field Stage value: I32(2)
  static ::GlobalNamespace::OVRManager_TrackingOrigin const Stage;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7943 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_TrackingOrigin, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager_TrackingOrigin, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/EyeTextureFormat
struct CORDL_TYPE OVRManager_EyeTextureFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRManager_EyeTextureFormat_Unwrapped
  enum struct __OVRManager_EyeTextureFormat_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_R16G16B16A16_FP = static_cast<int32_t>(0x2),
    __E_R11G11B10_FP = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRManager_EyeTextureFormat_Unwrapped() const noexcept {
    return static_cast<__OVRManager_EyeTextureFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRManager_EyeTextureFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRManager_EyeTextureFormat(int32_t value__) noexcept;

  /// @brief Field Default value: I32(0)
  static ::GlobalNamespace::OVRManager_EyeTextureFormat const Default;

  /// @brief Field R11G11B10_FP value: I32(3)
  static ::GlobalNamespace::OVRManager_EyeTextureFormat const R11G11B10_FP;

  /// @brief Field R16G16B16A16_FP value: I32(2)
  static ::GlobalNamespace::OVRManager_EyeTextureFormat const R16G16B16A16_FP;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7944 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_EyeTextureFormat, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager_EyeTextureFormat, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/FoveatedRenderingLevel
struct CORDL_TYPE OVRManager_FoveatedRenderingLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRManager_FoveatedRenderingLevel_Unwrapped
  enum struct __OVRManager_FoveatedRenderingLevel_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Low = static_cast<int32_t>(0x1),
    __E_Medium = static_cast<int32_t>(0x2),
    __E_High = static_cast<int32_t>(0x3),
    __E_HighTop = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRManager_FoveatedRenderingLevel_Unwrapped() const noexcept {
    return static_cast<__OVRManager_FoveatedRenderingLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRManager_FoveatedRenderingLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRManager_FoveatedRenderingLevel(int32_t value__) noexcept;

  /// @brief Field High value: I32(3)
  static ::GlobalNamespace::OVRManager_FoveatedRenderingLevel const High;

  /// @brief Field HighTop value: I32(4)
  static ::GlobalNamespace::OVRManager_FoveatedRenderingLevel const HighTop;

  /// @brief Field Low value: I32(1)
  static ::GlobalNamespace::OVRManager_FoveatedRenderingLevel const Low;

  /// @brief Field Medium value: I32(2)
  static ::GlobalNamespace::OVRManager_FoveatedRenderingLevel const Medium;

  /// @brief Field Off value: I32(0)
  static ::GlobalNamespace::OVRManager_FoveatedRenderingLevel const Off;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7945 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_FoveatedRenderingLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager_FoveatedRenderingLevel, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/FixedFoveatedRenderingLevel
struct CORDL_TYPE OVRManager_FixedFoveatedRenderingLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRManager_FixedFoveatedRenderingLevel_Unwrapped
  enum struct __OVRManager_FixedFoveatedRenderingLevel_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Low = static_cast<int32_t>(0x1),
    __E_Medium = static_cast<int32_t>(0x2),
    __E_High = static_cast<int32_t>(0x3),
    __E_HighTop = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRManager_FixedFoveatedRenderingLevel_Unwrapped() const noexcept {
    return static_cast<__OVRManager_FixedFoveatedRenderingLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRManager_FixedFoveatedRenderingLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRManager_FixedFoveatedRenderingLevel(int32_t value__) noexcept;

  /// @brief Field High value: I32(3)
  static ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel const High;

  /// @brief Field HighTop value: I32(4)
  static ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel const HighTop;

  /// @brief Field Low value: I32(1)
  static ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel const Low;

  /// @brief Field Medium value: I32(2)
  static ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel const Medium;

  /// @brief Field Off value: I32(0)
  static ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel const Off;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7946 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/TiledMultiResLevel
struct CORDL_TYPE OVRManager_TiledMultiResLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRManager_TiledMultiResLevel_Unwrapped
  enum struct __OVRManager_TiledMultiResLevel_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_LMSLow = static_cast<int32_t>(0x1),
    __E_LMSMedium = static_cast<int32_t>(0x2),
    __E_LMSHigh = static_cast<int32_t>(0x3),
    __E_LMSHighTop = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRManager_TiledMultiResLevel_Unwrapped() const noexcept {
    return static_cast<__OVRManager_TiledMultiResLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRManager_TiledMultiResLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRManager_TiledMultiResLevel(int32_t value__) noexcept;

  /// @brief Field LMSHigh value: I32(3)
  static ::GlobalNamespace::OVRManager_TiledMultiResLevel const LMSHigh;

  /// @brief Field LMSHighTop value: I32(4)
  static ::GlobalNamespace::OVRManager_TiledMultiResLevel const LMSHighTop;

  /// @brief Field LMSLow value: I32(1)
  static ::GlobalNamespace::OVRManager_TiledMultiResLevel const LMSLow;

  /// @brief Field LMSMedium value: I32(2)
  static ::GlobalNamespace::OVRManager_TiledMultiResLevel const LMSMedium;

  /// @brief Field Off value: I32(0)
  static ::GlobalNamespace::OVRManager_TiledMultiResLevel const Off;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7947 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_TiledMultiResLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager_TiledMultiResLevel, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/SystemHeadsetType
struct CORDL_TYPE OVRManager_SystemHeadsetType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRManager_SystemHeadsetType_Unwrapped
  enum struct __OVRManager_SystemHeadsetType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Oculus_Quest = static_cast<int32_t>(0x8),
    __E_Oculus_Quest_2 = static_cast<int32_t>(0x9),
    __E_Meta_Quest_Pro = static_cast<int32_t>(0xa),
    __E_Meta_Quest_3 = static_cast<int32_t>(0xb),
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
    __E_Meta_Link_Quest_3 = static_cast<int32_t>(0x1008),
    __E_PC_Placeholder_4105 = static_cast<int32_t>(0x1009),
    __E_PC_Placeholder_4106 = static_cast<int32_t>(0x100a),
    __E_PC_Placeholder_4107 = static_cast<int32_t>(0x100b),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRManager_SystemHeadsetType_Unwrapped() const noexcept {
    return static_cast<__OVRManager_SystemHeadsetType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRManager_SystemHeadsetType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRManager_SystemHeadsetType(int32_t value__) noexcept;

  /// @brief Field Meta_Link_Quest_3 value: I32(4104)
  static ::GlobalNamespace::OVRManager_SystemHeadsetType const Meta_Link_Quest_3;

  /// @brief Field Meta_Link_Quest_Pro value: I32(4103)
  static ::GlobalNamespace::OVRManager_SystemHeadsetType const Meta_Link_Quest_Pro;

  /// @brief Field Meta_Quest_3 value: I32(11)
  static ::GlobalNamespace::OVRManager_SystemHeadsetType const Meta_Quest_3;

  /// @brief Field Meta_Quest_Pro value: I32(10)
  static ::GlobalNamespace::OVRManager_SystemHeadsetType const Meta_Quest_Pro;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRManager_SystemHeadsetType const None;

  /// @brief Field Oculus_Link_Quest value: I32(4101)
  static ::GlobalNamespace::OVRManager_SystemHeadsetType const Oculus_Link_Quest;

  /// @brief Field Oculus_Link_Quest_2 value: I32(4102)
  static ::GlobalNamespace::OVRManager_SystemHeadsetType const Oculus_Link_Quest_2;

  /// @brief Field Oculus_Quest value: I32(8)
  static ::GlobalNamespace::OVRManager_SystemHeadsetType const Oculus_Quest;

  /// @brief Field Oculus_Quest_2 value: I32(9)
  static ::GlobalNamespace::OVRManager_SystemHeadsetType const Oculus_Quest_2;

  /// @brief Field PC_Placeholder_4105 value: I32(4105)
  static ::GlobalNamespace::OVRManager_SystemHeadsetType const PC_Placeholder_4105;

  /// @brief Field PC_Placeholder_4106 value: I32(4106)
  static ::GlobalNamespace::OVRManager_SystemHeadsetType const PC_Placeholder_4106;

  /// @brief Field PC_Placeholder_4107 value: I32(4107)
  static ::GlobalNamespace::OVRManager_SystemHeadsetType const PC_Placeholder_4107;

  /// @brief Field Placeholder_12 value: I32(12)
  static ::GlobalNamespace::OVRManager_SystemHeadsetType const Placeholder_12;

  /// @brief Field Placeholder_13 value: I32(13)
  static ::GlobalNamespace::OVRManager_SystemHeadsetType const Placeholder_13;

  /// @brief Field Placeholder_14 value: I32(14)
  static ::GlobalNamespace::OVRManager_SystemHeadsetType const Placeholder_14;

  /// @brief Field Rift_CB value: I32(4099)
  static ::GlobalNamespace::OVRManager_SystemHeadsetType const Rift_CB;

  /// @brief Field Rift_CV1 value: I32(4098)
  static ::GlobalNamespace::OVRManager_SystemHeadsetType const Rift_CV1;

  /// @brief Field Rift_DK1 value: I32(4096)
  static ::GlobalNamespace::OVRManager_SystemHeadsetType const Rift_DK1;

  /// @brief Field Rift_DK2 value: I32(4097)
  static ::GlobalNamespace::OVRManager_SystemHeadsetType const Rift_DK2;

  /// @brief Field Rift_S value: I32(4100)
  static ::GlobalNamespace::OVRManager_SystemHeadsetType const Rift_S;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7948 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_SystemHeadsetType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager_SystemHeadsetType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/XRDevice
struct CORDL_TYPE OVRManager_XRDevice {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRManager_XRDevice_Unwrapped
  enum struct __OVRManager_XRDevice_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Oculus = static_cast<int32_t>(0x1),
    __E_OpenVR = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRManager_XRDevice_Unwrapped() const noexcept {
    return static_cast<__OVRManager_XRDevice_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRManager_XRDevice();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRManager_XRDevice(int32_t value__) noexcept;

  /// @brief Field Oculus value: I32(1)
  static ::GlobalNamespace::OVRManager_XRDevice const Oculus;

  /// @brief Field OpenVR value: I32(2)
  static ::GlobalNamespace::OVRManager_XRDevice const OpenVR;

  /// @brief Field Unknown value: I32(0)
  static ::GlobalNamespace::OVRManager_XRDevice const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7949 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_XRDevice, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager_XRDevice, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/ColorSpace
struct CORDL_TYPE OVRManager_ColorSpace {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRManager_ColorSpace_Unwrapped
  enum struct __OVRManager_ColorSpace_Unwrapped : int32_t {
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
  constexpr operator __OVRManager_ColorSpace_Unwrapped() const noexcept {
    return static_cast<__OVRManager_ColorSpace_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRManager_ColorSpace();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRManager_ColorSpace(int32_t value__) noexcept;

  /// @brief Field Adobe_RGB value: I32(8)
  static ::GlobalNamespace::OVRManager_ColorSpace const Adobe_RGB;

  /// @brief Field P3 value: I32(7)
  static ::GlobalNamespace::OVRManager_ColorSpace const P3;

  /// @brief Field Quest value: I32(6)
  static ::GlobalNamespace::OVRManager_ColorSpace const Quest;

  /// @brief Field Rec_2020 value: I32(2)
  static ::GlobalNamespace::OVRManager_ColorSpace const Rec_2020;

  /// @brief Field Rec_709 value: I32(3)
  static ::GlobalNamespace::OVRManager_ColorSpace const Rec_709;

  /// @brief Field Rift_CV1 value: I32(4)
  static ::GlobalNamespace::OVRManager_ColorSpace const Rift_CV1;

  /// @brief Field Rift_S value: I32(5)
  static ::GlobalNamespace::OVRManager_ColorSpace const Rift_S;

  /// @brief Field Unknown value: I32(0)
  static ::GlobalNamespace::OVRManager_ColorSpace const Unknown;

  /// @brief Field Unmanaged value: I32(1)
  static ::GlobalNamespace::OVRManager_ColorSpace const Unmanaged;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7950 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_ColorSpace, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager_ColorSpace, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/ProcessorPerformanceLevel
struct CORDL_TYPE OVRManager_ProcessorPerformanceLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRManager_ProcessorPerformanceLevel_Unwrapped
  enum struct __OVRManager_ProcessorPerformanceLevel_Unwrapped : int32_t {
    __E_PowerSavings = static_cast<int32_t>(0x0),
    __E_SustainedLow = static_cast<int32_t>(0x1),
    __E_SustainedHigh = static_cast<int32_t>(0x2),
    __E_Boost = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRManager_ProcessorPerformanceLevel_Unwrapped() const noexcept {
    return static_cast<__OVRManager_ProcessorPerformanceLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRManager_ProcessorPerformanceLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRManager_ProcessorPerformanceLevel(int32_t value__) noexcept;

  /// @brief Field Boost value: I32(3)
  static ::GlobalNamespace::OVRManager_ProcessorPerformanceLevel const Boost;

  /// @brief Field PowerSavings value: I32(0)
  static ::GlobalNamespace::OVRManager_ProcessorPerformanceLevel const PowerSavings;

  /// @brief Field SustainedHigh value: I32(2)
  static ::GlobalNamespace::OVRManager_ProcessorPerformanceLevel const SustainedHigh;

  /// @brief Field SustainedLow value: I32(1)
  static ::GlobalNamespace::OVRManager_ProcessorPerformanceLevel const SustainedLow;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7951 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_ProcessorPerformanceLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager_ProcessorPerformanceLevel, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/ControllerDrivenHandPosesType
struct CORDL_TYPE OVRManager_ControllerDrivenHandPosesType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRManager_ControllerDrivenHandPosesType_Unwrapped
  enum struct __OVRManager_ControllerDrivenHandPosesType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ConformingToController = static_cast<int32_t>(0x1),
    __E_Natural = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRManager_ControllerDrivenHandPosesType_Unwrapped() const noexcept {
    return static_cast<__OVRManager_ControllerDrivenHandPosesType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRManager_ControllerDrivenHandPosesType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRManager_ControllerDrivenHandPosesType(int32_t value__) noexcept;

  /// @brief Field ConformingToController value: I32(1)
  static ::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType const ConformingToController;

  /// @brief Field Natural value: I32(2)
  static ::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType const Natural;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7952 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRManager/EventListener
class CORDL_TYPE OVRManager_EventListener {
public:
  // Declarations
  /// @brief Method OnEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnEvent(::GlobalNamespace::OVRPlugin_EventDataBuffer eventData);

  // Ctor Parameters [CppParam { name: "", ty: "OVRManager_EventListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRManager_EventListener(OVRManager_EventListener const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7953 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/CompositionMethod
struct CORDL_TYPE OVRManager_CompositionMethod {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRManager_CompositionMethod_Unwrapped
  enum struct __OVRManager_CompositionMethod_Unwrapped : int32_t {
    __E_External = static_cast<int32_t>(0x0),
    __E_Direct = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRManager_CompositionMethod_Unwrapped() const noexcept {
    return static_cast<__OVRManager_CompositionMethod_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRManager_CompositionMethod();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRManager_CompositionMethod(int32_t value__) noexcept;

  /// @brief Field Direct value: I32(1)
  static ::GlobalNamespace::OVRManager_CompositionMethod const Direct;

  /// @brief Field External value: I32(0)
  static ::GlobalNamespace::OVRManager_CompositionMethod const External;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7954 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_CompositionMethod, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager_CompositionMethod, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/CameraDevice
struct CORDL_TYPE OVRManager_CameraDevice {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRManager_CameraDevice_Unwrapped
  enum struct __OVRManager_CameraDevice_Unwrapped : int32_t {
    __E_WebCamera0 = static_cast<int32_t>(0x0),
    __E_WebCamera1 = static_cast<int32_t>(0x1),
    __E_ZEDCamera = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRManager_CameraDevice_Unwrapped() const noexcept {
    return static_cast<__OVRManager_CameraDevice_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRManager_CameraDevice();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRManager_CameraDevice(int32_t value__) noexcept;

  /// @brief Field WebCamera0 value: I32(0)
  static ::GlobalNamespace::OVRManager_CameraDevice const WebCamera0;

  /// @brief Field WebCamera1 value: I32(1)
  static ::GlobalNamespace::OVRManager_CameraDevice const WebCamera1;

  /// @brief Field ZEDCamera value: I32(2)
  static ::GlobalNamespace::OVRManager_CameraDevice const ZEDCamera;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7955 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_CameraDevice, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager_CameraDevice, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/DepthQuality
struct CORDL_TYPE OVRManager_DepthQuality {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRManager_DepthQuality_Unwrapped
  enum struct __OVRManager_DepthQuality_Unwrapped : int32_t {
    __E_Low = static_cast<int32_t>(0x0),
    __E_Medium = static_cast<int32_t>(0x1),
    __E_High = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRManager_DepthQuality_Unwrapped() const noexcept {
    return static_cast<__OVRManager_DepthQuality_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRManager_DepthQuality();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRManager_DepthQuality(int32_t value__) noexcept;

  /// @brief Field High value: I32(2)
  static ::GlobalNamespace::OVRManager_DepthQuality const High;

  /// @brief Field Low value: I32(0)
  static ::GlobalNamespace::OVRManager_DepthQuality const Low;

  /// @brief Field Medium value: I32(1)
  static ::GlobalNamespace::OVRManager_DepthQuality const Medium;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7956 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_DepthQuality, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager_DepthQuality, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/VirtualGreenScreenType
struct CORDL_TYPE OVRManager_VirtualGreenScreenType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRManager_VirtualGreenScreenType_Unwrapped
  enum struct __OVRManager_VirtualGreenScreenType_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_OuterBoundary = static_cast<int32_t>(0x1),
    __E_PlayArea = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRManager_VirtualGreenScreenType_Unwrapped() const noexcept {
    return static_cast<__OVRManager_VirtualGreenScreenType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRManager_VirtualGreenScreenType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRManager_VirtualGreenScreenType(int32_t value__) noexcept;

  /// @brief Field Off value: I32(0)
  static ::GlobalNamespace::OVRManager_VirtualGreenScreenType const Off;

  /// @brief Field OuterBoundary value: I32(1)
  static ::GlobalNamespace::OVRManager_VirtualGreenScreenType const OuterBoundary;

  /// @brief Field PlayArea value: I32(2)
  static ::GlobalNamespace::OVRManager_VirtualGreenScreenType const PlayArea;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7957 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_VirtualGreenScreenType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager_VirtualGreenScreenType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/MrcActivationMode
struct CORDL_TYPE OVRManager_MrcActivationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRManager_MrcActivationMode_Unwrapped
  enum struct __OVRManager_MrcActivationMode_Unwrapped : int32_t {
    __E_Automatic = static_cast<int32_t>(0x0),
    __E_Disabled = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRManager_MrcActivationMode_Unwrapped() const noexcept {
    return static_cast<__OVRManager_MrcActivationMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRManager_MrcActivationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRManager_MrcActivationMode(int32_t value__) noexcept;

  /// @brief Field Automatic value: I32(0)
  static ::GlobalNamespace::OVRManager_MrcActivationMode const Automatic;

  /// @brief Field Disabled value: I32(1)
  static ::GlobalNamespace::OVRManager_MrcActivationMode const Disabled;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7958 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_MrcActivationMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager_MrcActivationMode, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/MrcCameraType
struct CORDL_TYPE OVRManager_MrcCameraType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRManager_MrcCameraType_Unwrapped
  enum struct __OVRManager_MrcCameraType_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Foreground = static_cast<int32_t>(0x1),
    __E_Background = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRManager_MrcCameraType_Unwrapped() const noexcept {
    return static_cast<__OVRManager_MrcCameraType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRManager_MrcCameraType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRManager_MrcCameraType(int32_t value__) noexcept;

  /// @brief Field Background value: I32(2)
  static ::GlobalNamespace::OVRManager_MrcCameraType const Background;

  /// @brief Field Foreground value: I32(1)
  static ::GlobalNamespace::OVRManager_MrcCameraType const Foreground;

  /// @brief Field Normal value: I32(0)
  static ::GlobalNamespace::OVRManager_MrcCameraType const Normal;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7959 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_MrcCameraType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager_MrcCameraType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRManager/InstantiateMrcCameraDelegate
class CORDL_TYPE OVRManager_InstantiateMrcCameraDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3fd1ed4, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* mainCameraGameObject, ::GlobalNamespace::OVRManager_MrcCameraType cameraType, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3fd1f68, size 0xc, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3fd1ec0, size 0x14, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> Invoke(::UnityEngine::GameObject* mainCameraGameObject, ::GlobalNamespace::OVRManager_MrcCameraType cameraType);

  static inline ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3fd1e20, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRManager_InstantiateMrcCameraDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRManager_InstantiateMrcCameraDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRManager_InstantiateMrcCameraDelegate(OVRManager_InstantiateMrcCameraDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRManager_InstantiateMrcCameraDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRManager_InstantiateMrcCameraDelegate(OVRManager_InstantiateMrcCameraDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7960 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/PassthroughInitializationState
struct CORDL_TYPE OVRManager_PassthroughInitializationState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRManager_PassthroughInitializationState_Unwrapped
  enum struct __OVRManager_PassthroughInitializationState_Unwrapped : int32_t {
    __E_Unspecified = static_cast<int32_t>(0x0),
    __E_Pending = static_cast<int32_t>(0x1),
    __E_Initialized = static_cast<int32_t>(0x2),
    __E_Failed = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRManager_PassthroughInitializationState_Unwrapped() const noexcept {
    return static_cast<__OVRManager_PassthroughInitializationState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRManager_PassthroughInitializationState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRManager_PassthroughInitializationState(int32_t value__) noexcept;

  /// @brief Field Failed value: I32(3)
  static ::GlobalNamespace::OVRManager_PassthroughInitializationState const Failed;

  /// @brief Field Initialized value: I32(2)
  static ::GlobalNamespace::OVRManager_PassthroughInitializationState const Initialized;

  /// @brief Field Pending value: I32(1)
  static ::GlobalNamespace::OVRManager_PassthroughInitializationState const Pending;

  /// @brief Field Unspecified value: I32(0)
  static ::GlobalNamespace::OVRManager_PassthroughInitializationState const Unspecified;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7961 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_PassthroughInitializationState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager_PassthroughInitializationState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRManager/PassthroughCapabilities
class CORDL_TYPE OVRManager_PassthroughCapabilities : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_MaxColorLutResolution)) uint32_t MaxColorLutResolution;

  __declspec(property(get = get_SupportsColorPassthrough)) bool SupportsColorPassthrough;

  __declspec(property(get = get_SupportsPassthrough)) bool SupportsPassthrough;

  /// @brief Field <MaxColorLutResolution>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__MaxColorLutResolution_k__BackingField,
                      put = __cordl_internal_set__MaxColorLutResolution_k__BackingField)) uint32_t _MaxColorLutResolution_k__BackingField;

  /// @brief Field <SupportsColorPassthrough>k__BackingField, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__SupportsColorPassthrough_k__BackingField,
                      put = __cordl_internal_set__SupportsColorPassthrough_k__BackingField)) bool _SupportsColorPassthrough_k__BackingField;

  /// @brief Field <SupportsPassthrough>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__SupportsPassthrough_k__BackingField, put = __cordl_internal_set__SupportsPassthrough_k__BackingField)) bool _SupportsPassthrough_k__BackingField;

  static inline ::GlobalNamespace::OVRManager_PassthroughCapabilities* New_ctor(bool supportsPassthrough, bool supportsColorPassthrough, uint32_t maxColorLutResolution);

  constexpr uint32_t const& __cordl_internal_get__MaxColorLutResolution_k__BackingField() const;

  constexpr uint32_t& __cordl_internal_get__MaxColorLutResolution_k__BackingField();

  constexpr bool const& __cordl_internal_get__SupportsColorPassthrough_k__BackingField() const;

  constexpr bool& __cordl_internal_get__SupportsColorPassthrough_k__BackingField();

  constexpr bool const& __cordl_internal_get__SupportsPassthrough_k__BackingField() const;

  constexpr bool& __cordl_internal_get__SupportsPassthrough_k__BackingField();

  constexpr void __cordl_internal_set__MaxColorLutResolution_k__BackingField(uint32_t value);

  constexpr void __cordl_internal_set__SupportsColorPassthrough_k__BackingField(bool value);

  constexpr void __cordl_internal_set__SupportsPassthrough_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x3fd19dc, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(bool supportsPassthrough, bool supportsColorPassthrough, uint32_t maxColorLutResolution);

  /// @brief Method get_MaxColorLutResolution, addr 0x3fd1f84, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_MaxColorLutResolution();

  /// @brief Method get_SupportsColorPassthrough, addr 0x3fd1f7c, size 0x8, virtual false, abstract: false, final false
  inline bool get_SupportsColorPassthrough();

  /// @brief Method get_SupportsPassthrough, addr 0x3fd1f74, size 0x8, virtual false, abstract: false, final false
  inline bool get_SupportsPassthrough();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRManager_PassthroughCapabilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRManager_PassthroughCapabilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRManager_PassthroughCapabilities(OVRManager_PassthroughCapabilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRManager_PassthroughCapabilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRManager_PassthroughCapabilities(OVRManager_PassthroughCapabilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7962 };

  /// @brief Field <SupportsPassthrough>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____SupportsPassthrough_k__BackingField;

  /// @brief Field <SupportsColorPassthrough>k__BackingField, offset: 0x11, size: 0x1, def value: None
  bool ____SupportsColorPassthrough_k__BackingField;

  /// @brief Field <MaxColorLutResolution>k__BackingField, offset: 0x14, size: 0x4, def value: None
  uint32_t ____MaxColorLutResolution_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_PassthroughCapabilities, ____SupportsPassthrough_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager_PassthroughCapabilities, ____SupportsColorPassthrough_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager_PassthroughCapabilities, ____MaxColorLutResolution_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager_PassthroughCapabilities, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRManager/<>c
class CORDL_TYPE OVRManager___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::OVRManager___c* __9;

  /// @brief Field <>9__418_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__418_0, put = setStaticF___9__418_0)) ::System::Func_2<float_t, ::StringW>* __9__418_0;

  /// @brief Field <>9__434_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__434_0, put = setStaticF___9__434_0)) ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* __9__434_0;

  static inline ::GlobalNamespace::OVRManager___c* New_ctor();

  /// @brief Method <FindMainCamera>b__434_0, addr 0x3fd200c, size 0x8c, virtual false, abstract: false, final false
  inline int32_t _FindMainCamera_b__434_0(::UnityEngine::Camera* c0, ::UnityEngine::Camera* c1);

  /// @brief Method <InitOVRManager>b__418_0, addr 0x3fd1ff0, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW _InitOVRManager_b__418_0(float_t f);

  /// @brief Method .ctor, addr 0x3fd1fe8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::OVRManager___c* getStaticF___9();

  static inline ::System::Func_2<float_t, ::StringW>* getStaticF___9__418_0();

  static inline ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* getStaticF___9__434_0();

  static inline void setStaticF___9(::GlobalNamespace::OVRManager___c* value);

  static inline void setStaticF___9__418_0(::System::Func_2<float_t, ::StringW>* value);

  static inline void setStaticF___9__434_0(::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRManager___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRManager___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRManager___c(OVRManager___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRManager___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRManager___c(OVRManager___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7963 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRManager::CameraDevice, OVRManager::ColorSpace, OVRManager::CompositionMethod, OVRManager::ControllerDrivenHandPosesType, OVRManager::DepthQuality, OVRManager::MrcActivationMode,
// OVRManager::PassthroughInitializationState, OVRManager::TrackingOrigin, OVRManager::VirtualGreenScreenType, OVRManager::XRDevice, OVRMixedRealityCaptureConfiguration, OVRPlugin::EventDataBuffer,
// OVRPlugin::LayerSharpenType, UnityEngine.Color, UnityEngine.DepthTextureMode, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRManager
class CORDL_TYPE OVRManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using CameraDevice = ::GlobalNamespace::OVRManager_CameraDevice;

  using ColorSpace = ::GlobalNamespace::OVRManager_ColorSpace;

  using CompositionMethod = ::GlobalNamespace::OVRManager_CompositionMethod;

  using ControllerDrivenHandPosesType = ::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType;

  using DepthQuality = ::GlobalNamespace::OVRManager_DepthQuality;

  using EventListener = ::GlobalNamespace::OVRManager_EventListener;

  using EyeTextureFormat = ::GlobalNamespace::OVRManager_EyeTextureFormat;

  using FixedFoveatedRenderingLevel = ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel;

  using FoveatedRenderingLevel = ::GlobalNamespace::OVRManager_FoveatedRenderingLevel;

  using InstantiateMrcCameraDelegate = ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate;

  using MrcActivationMode = ::GlobalNamespace::OVRManager_MrcActivationMode;

  using MrcCameraType = ::GlobalNamespace::OVRManager_MrcCameraType;

  using PassthroughCapabilities = ::GlobalNamespace::OVRManager_PassthroughCapabilities;

  using PassthroughInitializationState = ::GlobalNamespace::OVRManager_PassthroughInitializationState;

  using ProcessorPerformanceLevel = ::GlobalNamespace::OVRManager_ProcessorPerformanceLevel;

  using SystemHeadsetType = ::GlobalNamespace::OVRManager_SystemHeadsetType;

  using TiledMultiResLevel = ::GlobalNamespace::OVRManager_TiledMultiResLevel;

  using TrackingOrigin = ::GlobalNamespace::OVRManager_TrackingOrigin;

  using VirtualGreenScreenType = ::GlobalNamespace::OVRManager_VirtualGreenScreenType;

  using XRDevice = ::GlobalNamespace::OVRManager_XRDevice;

  using XrApi = ::GlobalNamespace::OVRManager_XrApi;

  using __c = ::GlobalNamespace::OVRManager___c;

  /// @brief Field AllowRecenter, offset 0x110, size 0x1
  __declspec(property(get = __cordl_internal_get_AllowRecenter, put = __cordl_internal_set_AllowRecenter)) bool AllowRecenter;

  /// @brief Field AudioInChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AudioInChanged, put = setStaticF_AudioInChanged)) ::System::Action* AudioInChanged;

  /// @brief Field AudioOutChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AudioOutChanged, put = setStaticF_AudioOutChanged)) ::System::Action* AudioOutChanged;

  /// @brief Field DisplayRefreshRateChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DisplayRefreshRateChanged, put = setStaticF_DisplayRefreshRateChanged)) ::System::Action_2<float_t, float_t>* DisplayRefreshRateChanged;

  /// @brief Field HMDAcquired, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_HMDAcquired, put = setStaticF_HMDAcquired)) ::System::Action* HMDAcquired;

  /// @brief Field HMDLost, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_HMDLost, put = setStaticF_HMDLost)) ::System::Action* HMDLost;

  /// @brief Field HMDMounted, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_HMDMounted, put = setStaticF_HMDMounted)) ::System::Action* HMDMounted;

  /// @brief Field HMDUnmounted, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_HMDUnmounted, put = setStaticF_HMDUnmounted)) ::System::Action* HMDUnmounted;

  /// @brief Field HSWDismissed, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_HSWDismissed, put = setStaticF_HSWDismissed)) ::System::Action* HSWDismissed;

  /// @brief Field InputFocusAcquired, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InputFocusAcquired, put = setStaticF_InputFocusAcquired)) ::System::Action* InputFocusAcquired;

  /// @brief Field InputFocusLost, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InputFocusLost, put = setStaticF_InputFocusLost)) ::System::Action* InputFocusLost;

  __declspec(property(get = get_IsSimultaneousHandsAndControllersSupported)) bool IsSimultaneousHandsAndControllersSupported;

  /// @brief Field LateControllerUpdate, offset 0x111, size 0x1
  __declspec(property(get = __cordl_internal_get_LateControllerUpdate, put = __cordl_internal_set_LateControllerUpdate)) bool LateControllerUpdate;

  /// @brief Field LateLatching, offset 0x112, size 0x1
  __declspec(property(get = __cordl_internal_get_LateLatching, put = __cordl_internal_set_LateLatching)) bool LateLatching;

  /// @brief Field OCULUS_UNITY_NAME_STR, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OCULUS_UNITY_NAME_STR, put = setStaticF_OCULUS_UNITY_NAME_STR)) ::StringW OCULUS_UNITY_NAME_STR;

  /// @brief Field OPENVR_UNITY_NAME_STR, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OPENVR_UNITY_NAME_STR, put = setStaticF_OPENVR_UNITY_NAME_STR)) ::StringW OPENVR_UNITY_NAME_STR;

  /// @brief Field OVRManagerinitialized, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_OVRManagerinitialized, put = setStaticF_OVRManagerinitialized)) bool OVRManagerinitialized;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice,
                      put = OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice)) ::GlobalNamespace::OVRManager_CameraDevice OVRMixedRealityCaptureConfiguration_capturingCameraDevice;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_chromaKeyColor,
                      put = OVRMixedRealityCaptureConfiguration_set_chromaKeyColor)) ::UnityEngine::Color OVRMixedRealityCaptureConfiguration_chromaKeyColor;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity,
                      put = OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity)) float_t OVRMixedRealityCaptureConfiguration_chromaKeySimilarity;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange,
                      put = OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange)) float_t OVRMixedRealityCaptureConfiguration_chromaKeySmoothRange;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange,
                      put = OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange)) float_t OVRMixedRealityCaptureConfiguration_chromaKeySpillRange;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_compositionMethod,
                      put = OVRMixedRealityCaptureConfiguration_set_compositionMethod)) ::GlobalNamespace::OVRManager_CompositionMethod OVRMixedRealityCaptureConfiguration_compositionMethod;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_depthQuality,
                      put = OVRMixedRealityCaptureConfiguration_set_depthQuality)) ::GlobalNamespace::OVRManager_DepthQuality OVRMixedRealityCaptureConfiguration_depthQuality;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask,
                      put = OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask)) bool OVRMixedRealityCaptureConfiguration_dynamicCullingMask;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue,
                      put = OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue)) float_t OVRMixedRealityCaptureConfiguration_dynamicLightingDepthVariationClampingValue;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor,
                      put = OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor)) float_t OVRMixedRealityCaptureConfiguration_dynamicLightingSmoothFactor;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_enableMixedReality,
                      put = OVRMixedRealityCaptureConfiguration_set_enableMixedReality)) bool OVRMixedRealityCaptureConfiguration_enableMixedReality;

  __declspec(property(
      get = OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest,
      put = OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest)) ::UnityEngine::Color OVRMixedRealityCaptureConfiguration_externalCompositionBackdropColorQuest;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift,
                      put =
                          OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift)) ::UnityEngine::Color OVRMixedRealityCaptureConfiguration_externalCompositionBackdropColorRift;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers,
                      put = OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers)) ::UnityEngine::LayerMask OVRMixedRealityCaptureConfiguration_extraHiddenLayers;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers,
                      put = OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers)) ::UnityEngine::LayerMask OVRMixedRealityCaptureConfiguration_extraVisibleLayers;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally,
                      put = OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally)) bool OVRMixedRealityCaptureConfiguration_flipCameraFrameHorizontally;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically,
                      put = OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically)) bool OVRMixedRealityCaptureConfiguration_flipCameraFrameVertically;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency,
                      put = OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency)) float_t OVRMixedRealityCaptureConfiguration_handPoseStateLatency;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject,
                      put = OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject)) ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*
      OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_mrcActivationMode,
                      put = OVRMixedRealityCaptureConfiguration_set_mrcActivationMode)) ::GlobalNamespace::OVRManager_MrcActivationMode OVRMixedRealityCaptureConfiguration_mrcActivationMode;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames,
                      put = OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames)) int32_t OVRMixedRealityCaptureConfiguration_sandwichCompositionBufferedFrames;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency,
                      put = OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency)) float_t OVRMixedRealityCaptureConfiguration_sandwichCompositionRenderLatency;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_useDynamicLighting,
                      put = OVRMixedRealityCaptureConfiguration_set_useDynamicLighting)) bool OVRMixedRealityCaptureConfiguration_useDynamicLighting;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling,
                      put = OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling)) bool OVRMixedRealityCaptureConfiguration_virtualGreenScreenApplyDepthCulling;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY,
                      put = OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY)) float_t OVRMixedRealityCaptureConfiguration_virtualGreenScreenBottomY;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance,
                      put = OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance)) float_t OVRMixedRealityCaptureConfiguration_virtualGreenScreenDepthTolerance;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY,
                      put = OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY)) float_t OVRMixedRealityCaptureConfiguration_virtualGreenScreenTopY;

  __declspec(property(
      get = OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType,
      put = OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType)) ::GlobalNamespace::OVRManager_VirtualGreenScreenType OVRMixedRealityCaptureConfiguration_virtualGreenScreenType;

  /// @brief Field OpenVRTouchPositionOffsetLeft, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_OpenVRTouchPositionOffsetLeft, put = setStaticF_OpenVRTouchPositionOffsetLeft)) ::UnityEngine::Vector3 OpenVRTouchPositionOffsetLeft;

  /// @brief Field OpenVRTouchPositionOffsetRight, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_OpenVRTouchPositionOffsetRight, put = setStaticF_OpenVRTouchPositionOffsetRight)) ::UnityEngine::Vector3 OpenVRTouchPositionOffsetRight;

  /// @brief Field OpenVRTouchRotationOffsetEulerLeft, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_OpenVRTouchRotationOffsetEulerLeft, put = setStaticF_OpenVRTouchRotationOffsetEulerLeft)) ::UnityEngine::Vector3 OpenVRTouchRotationOffsetEulerLeft;

  /// @brief Field OpenVRTouchRotationOffsetEulerRight, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_OpenVRTouchRotationOffsetEulerRight, put = setStaticF_OpenVRTouchRotationOffsetEulerRight)) ::UnityEngine::Vector3 OpenVRTouchRotationOffsetEulerRight;

  /// @brief Field SceneCaptureComplete, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SceneCaptureComplete, put = setStaticF_SceneCaptureComplete)) ::System::Action_2<uint64_t, bool>* SceneCaptureComplete;

  /// @brief Field ShareSpacesComplete, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ShareSpacesComplete,
                      put = setStaticF_ShareSpacesComplete)) ::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* ShareSpacesComplete;

  /// @brief Field SpaceEraseComplete, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SpaceEraseComplete,
                      put = setStaticF_SpaceEraseComplete)) ::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>* SpaceEraseComplete;

  /// @brief Field SpaceListSaveComplete, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SpaceListSaveComplete,
                      put = setStaticF_SpaceListSaveComplete)) ::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* SpaceListSaveComplete;

  /// @brief Field SpaceQueryComplete, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SpaceQueryComplete, put = setStaticF_SpaceQueryComplete)) ::System::Action_2<uint64_t, bool>* SpaceQueryComplete;

  /// @brief Field SpaceQueryResults, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SpaceQueryResults, put = setStaticF_SpaceQueryResults)) ::System::Action_1<uint64_t>* SpaceQueryResults;

  /// @brief Field SpaceSaveComplete, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SpaceSaveComplete, put = setStaticF_SpaceSaveComplete)) ::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>* SpaceSaveComplete;

  /// @brief Field SpaceSetComponentStatusComplete, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SpaceSetComponentStatusComplete,
                      put = setStaticF_SpaceSetComponentStatusComplete)) ::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid,
                                                                                            ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>* SpaceSetComponentStatusComplete;

  /// @brief Field SpatialAnchorCreateComplete, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SpatialAnchorCreateComplete,
                      put = setStaticF_SpatialAnchorCreateComplete)) ::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>* SpatialAnchorCreateComplete;

  /// @brief Field TrackingAcquired, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TrackingAcquired, put = setStaticF_TrackingAcquired)) ::System::Action* TrackingAcquired;

  /// @brief Field TrackingLost, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TrackingLost, put = setStaticF_TrackingLost)) ::System::Action* TrackingLost;

  /// @brief Field UnityAlphaOrBetaVersionWarningMessage, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UnityAlphaOrBetaVersionWarningMessage, put = setStaticF_UnityAlphaOrBetaVersionWarningMessage)) ::StringW UnityAlphaOrBetaVersionWarningMessage;

  /// @brief Field VrFocusAcquired, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_VrFocusAcquired, put = setStaticF_VrFocusAcquired)) ::System::Action* VrFocusAcquired;

  /// @brief Field VrFocusLost, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_VrFocusLost, put = setStaticF_VrFocusLost)) ::System::Action* VrFocusLost;

  /// @brief Field <boundary>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__boundary_k__BackingField, put = setStaticF__boundary_k__BackingField)) ::GlobalNamespace::OVRBoundary* _boundary_k__BackingField;

  /// @brief Field _colorGamut, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__colorGamut, put = __cordl_internal_set__colorGamut)) ::GlobalNamespace::OVRManager_ColorSpace _colorGamut;

  /// @brief Field <display>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__display_k__BackingField, put = setStaticF__display_k__BackingField)) ::GlobalNamespace::OVRDisplay* _display_k__BackingField;

  /// @brief Field _hadInputFocus, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__hadInputFocus, put = setStaticF__hadInputFocus)) bool _hadInputFocus;

  /// @brief Field _hadVrFocus, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__hadVrFocus, put = setStaticF__hadVrFocus)) bool _hadVrFocus;

  /// @brief Field _hasVrFocus, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__hasVrFocus, put = setStaticF__hasVrFocus)) bool _hasVrFocus;

  /// @brief Field _hasVrFocusCached, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__hasVrFocusCached, put = setStaticF__hasVrFocusCached)) bool _hasVrFocusCached;

  /// @brief Field _headPoseRelativeOffsetRotation, offset 0x4c, size 0xc
  __declspec(property(get = __cordl_internal_get__headPoseRelativeOffsetRotation, put = __cordl_internal_set__headPoseRelativeOffsetRotation)) ::UnityEngine::Vector3 _headPoseRelativeOffsetRotation;

  /// @brief Field _headPoseRelativeOffsetTranslation, offset 0x58, size 0xc
  __declspec(property(get = __cordl_internal_get__headPoseRelativeOffsetTranslation,
                      put = __cordl_internal_set__headPoseRelativeOffsetTranslation)) ::UnityEngine::Vector3 _headPoseRelativeOffsetTranslation;

  /// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__instance_k__BackingField, put = setStaticF__instance_k__BackingField)) ::UnityW<::GlobalNamespace::OVRManager> _instance_k__BackingField;

  /// @brief Field _isHmdPresent, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__isHmdPresent, put = setStaticF__isHmdPresent)) bool _isHmdPresent;

  /// @brief Field _isHmdPresentCached, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__isHmdPresentCached, put = setStaticF__isHmdPresentCached)) bool _isHmdPresentCached;

  /// @brief Field <isSupportedPlatform>k__BackingField, offset 0x11c, size 0x1
  __declspec(property(get = __cordl_internal_get__isSupportedPlatform_k__BackingField, put = __cordl_internal_set__isSupportedPlatform_k__BackingField)) bool _isSupportedPlatform_k__BackingField;

  /// @brief Field _isUserPresent, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__isUserPresent, put = setStaticF__isUserPresent)) bool _isUserPresent;

  /// @brief Field _isUserPresentCached, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__isUserPresentCached, put = setStaticF__isUserPresentCached)) bool _isUserPresentCached;

  /// @brief Field _localDimming, offset 0x106, size 0x1
  __declspec(property(get = __cordl_internal_get__localDimming, put = __cordl_internal_set__localDimming)) bool _localDimming;

  /// @brief Field _monoscopic, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get__monoscopic, put = __cordl_internal_set__monoscopic)) bool _monoscopic;

  /// @brief Field _passthroughCapabilities, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__passthroughCapabilities, put = setStaticF__passthroughCapabilities)) ::GlobalNamespace::OVRManager_PassthroughCapabilities* _passthroughCapabilities;

  /// @brief Field _passthroughInitializationState, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__passthroughInitializationState,
                      put = setStaticF__passthroughInitializationState)) ::GlobalNamespace::OVRManager_PassthroughInitializationState _passthroughInitializationState;

  /// @brief Field _profile, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__profile, put = setStaticF__profile)) ::UnityW<::GlobalNamespace::OVRProfile> _profile;

  /// @brief Field _readOnlyControllerDrivenHandPosesType, offset 0x114, size 0x4
  __declspec(property(get = __cordl_internal_get__readOnlyControllerDrivenHandPosesType,
                      put = __cordl_internal_set__readOnlyControllerDrivenHandPosesType)) ::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType _readOnlyControllerDrivenHandPosesType;

  /// @brief Field <runtimeSettings>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__runtimeSettings_k__BackingField, put = setStaticF__runtimeSettings_k__BackingField)) ::UnityW<::GlobalNamespace::OVRRuntimeSettings>
      _runtimeSettings_k__BackingField;

  /// @brief Field _sharpenType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__sharpenType, put = __cordl_internal_set__sharpenType)) ::GlobalNamespace::OVRPlugin_LayerSharpenType _sharpenType;

  /// @brief Field <tracker>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__tracker_k__BackingField, put = setStaticF__tracker_k__BackingField)) ::GlobalNamespace::OVRTracker* _tracker_k__BackingField;

  /// @brief Field _trackingOriginType, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get__trackingOriginType, put = __cordl_internal_set__trackingOriginType)) ::GlobalNamespace::OVRManager_TrackingOrigin _trackingOriginType;

  /// @brief Field _wasHmdPresent, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__wasHmdPresent, put = setStaticF__wasHmdPresent)) bool _wasHmdPresent;

  /// @brief Field _wasUserPresent, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__wasUserPresent, put = setStaticF__wasUserPresent)) bool _wasUserPresent;

  /// @brief Field capturingCameraDevice, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_capturingCameraDevice, put = __cordl_internal_set_capturingCameraDevice)) ::GlobalNamespace::OVRManager_CameraDevice capturingCameraDevice;

  /// @brief Field chromaKeyColor, offset 0xb0, size 0x10
  __declspec(property(get = __cordl_internal_get_chromaKeyColor, put = __cordl_internal_set_chromaKeyColor)) ::UnityEngine::Color chromaKeyColor;

  /// @brief Field chromaKeySimilarity, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_chromaKeySimilarity, put = __cordl_internal_set_chromaKeySimilarity)) float_t chromaKeySimilarity;

  /// @brief Field chromaKeySmoothRange, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_chromaKeySmoothRange, put = __cordl_internal_set_chromaKeySmoothRange)) float_t chromaKeySmoothRange;

  /// @brief Field chromaKeySpillRange, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_chromaKeySpillRange, put = __cordl_internal_set_chromaKeySpillRange)) float_t chromaKeySpillRange;

  __declspec(property(get = get_chromatic, put = set_chromatic)) bool chromatic;

  __declspec(property(get = get_colorGamut, put = set_colorGamut)) ::GlobalNamespace::OVRManager_ColorSpace colorGamut;

  /// @brief Field compositionMethod, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_compositionMethod, put = __cordl_internal_set_compositionMethod)) ::GlobalNamespace::OVRManager_CompositionMethod compositionMethod;

  /// @brief Field controllerDrivenHandPosesType, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get_controllerDrivenHandPosesType,
                      put = __cordl_internal_set_controllerDrivenHandPosesType)) ::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType controllerDrivenHandPosesType;

  /// @brief Field depthQuality, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get_depthQuality, put = __cordl_internal_set_depthQuality)) ::GlobalNamespace::OVRManager_DepthQuality depthQuality;

  /// @brief Field disabledCameras, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_disabledCameras,
                      put = __cordl_internal_set_disabledCameras)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Camera>>* disabledCameras;

  /// @brief Field dynamicCullingMask, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_dynamicCullingMask, put = __cordl_internal_set_dynamicCullingMask)) bool dynamicCullingMask;

  /// @brief Field dynamicLightingDepthVariationClampingValue, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_dynamicLightingDepthVariationClampingValue,
                      put = __cordl_internal_set_dynamicLightingDepthVariationClampingValue)) float_t dynamicLightingDepthVariationClampingValue;

  /// @brief Field dynamicLightingSmoothFactor, offset 0xd4, size 0x4
  __declspec(property(get = __cordl_internal_get_dynamicLightingSmoothFactor, put = __cordl_internal_set_dynamicLightingSmoothFactor)) float_t dynamicLightingSmoothFactor;

  /// @brief Field enableDynamicResolution, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_enableDynamicResolution, put = __cordl_internal_set_enableDynamicResolution)) bool enableDynamicResolution;

  /// @brief Field enableMixedReality, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get_enableMixedReality, put = __cordl_internal_set_enableMixedReality)) bool enableMixedReality;

  /// @brief Field eventDataBuffer, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_eventDataBuffer, put = setStaticF_eventDataBuffer)) ::GlobalNamespace::OVRPlugin_EventDataBuffer eventDataBuffer;

  /// @brief Field eventListeners, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_eventListeners,
                      put = __cordl_internal_set_eventListeners)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRManager_EventListener*>* eventListeners;

  /// @brief Field expandMixedRealityCapturePropertySheet, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_expandMixedRealityCapturePropertySheet,
                      put = __cordl_internal_set_expandMixedRealityCapturePropertySheet)) bool expandMixedRealityCapturePropertySheet;

  /// @brief Field externalCompositionBackdropColorQuest, offset 0x8c, size 0x10
  __declspec(property(get = __cordl_internal_get_externalCompositionBackdropColorQuest,
                      put = __cordl_internal_set_externalCompositionBackdropColorQuest)) ::UnityEngine::Color externalCompositionBackdropColorQuest;

  /// @brief Field externalCompositionBackdropColorRift, offset 0x7c, size 0x10
  __declspec(property(get = __cordl_internal_get_externalCompositionBackdropColorRift,
                      put = __cordl_internal_set_externalCompositionBackdropColorRift)) ::UnityEngine::Color externalCompositionBackdropColorRift;

  /// @brief Field extraHiddenLayers, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_extraHiddenLayers, put = __cordl_internal_set_extraHiddenLayers)) ::UnityEngine::LayerMask extraHiddenLayers;

  /// @brief Field extraVisibleLayers, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_extraVisibleLayers, put = __cordl_internal_set_extraVisibleLayers)) ::UnityEngine::LayerMask extraVisibleLayers;

  /// @brief Field flipCameraFrameHorizontally, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_flipCameraFrameHorizontally, put = __cordl_internal_set_flipCameraFrameHorizontally)) bool flipCameraFrameHorizontally;

  /// @brief Field flipCameraFrameVertically, offset 0xa1, size 0x1
  __declspec(property(get = __cordl_internal_get_flipCameraFrameVertically, put = __cordl_internal_set_flipCameraFrameVertically)) bool flipCameraFrameVertically;

  /// @brief Field handPoseStateLatency, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get_handPoseStateLatency, put = __cordl_internal_set_handPoseStateLatency)) float_t handPoseStateLatency;

  __declspec(property(get = get_headPoseRelativeOffsetRotation, put = set_headPoseRelativeOffsetRotation)) ::UnityEngine::Vector3 headPoseRelativeOffsetRotation;

  __declspec(property(get = get_headPoseRelativeOffsetTranslation, put = set_headPoseRelativeOffsetTranslation)) ::UnityEngine::Vector3 headPoseRelativeOffsetTranslation;

  /// @brief Field instantiateMixedRealityCameraGameObject, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_instantiateMixedRealityCameraGameObject,
                      put = __cordl_internal_set_instantiateMixedRealityCameraGameObject)) ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* instantiateMixedRealityCameraGameObject;

  /// @brief Field isInsightPassthroughEnabled, offset 0x101, size 0x1
  __declspec(property(get = __cordl_internal_get_isInsightPassthroughEnabled, put = __cordl_internal_set_isInsightPassthroughEnabled)) bool isInsightPassthroughEnabled;

  __declspec(property(get = get_isSupportedPlatform, put = set_isSupportedPlatform)) bool isSupportedPlatform;

  __declspec(property(get = get_isUserPresent, put = set_isUserPresent)) bool isUserPresent;

  /// @brief Field lastFoundMainCamera, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_lastFoundMainCamera, put = setStaticF_lastFoundMainCamera)) ::System::WeakReference_1<::UnityW<::UnityEngine::Camera>>* lastFoundMainCamera;

  /// @brief Field launchMultimodalHandsControllersOnStartup, offset 0x100, size 0x1
  __declspec(property(get = __cordl_internal_get_launchMultimodalHandsControllersOnStartup,
                      put = __cordl_internal_set_launchMultimodalHandsControllersOnStartup)) bool launchMultimodalHandsControllersOnStartup;

  /// @brief Field loadedXRDevice, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_loadedXRDevice, put = setStaticF_loadedXRDevice)) ::GlobalNamespace::OVRManager_XRDevice loadedXRDevice;

  /// @brief Field m_AppSpaceTransform, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_AppSpaceTransform, put = setStaticF_m_AppSpaceTransform)) ::UnityW<::UnityEngine::Transform> m_AppSpaceTransform;

  /// @brief Field m_CachedDepthTextureMode, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_m_CachedDepthTextureMode, put = setStaticF_m_CachedDepthTextureMode)) ::UnityEngine::DepthTextureMode m_CachedDepthTextureMode;

  /// @brief Field m_SpaceWarpEnabled, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_m_SpaceWarpEnabled, put = setStaticF_m_SpaceWarpEnabled)) bool m_SpaceWarpEnabled;

  /// @brief Field maxDynamicResolutionScale, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_maxDynamicResolutionScale, put = __cordl_internal_set_maxDynamicResolutionScale)) float_t maxDynamicResolutionScale;

  /// @brief Field maxRenderScale, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_maxRenderScale, put = __cordl_internal_set_maxRenderScale)) float_t maxRenderScale;

  /// @brief Field minDynamicResolutionScale, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_minDynamicResolutionScale, put = __cordl_internal_set_minDynamicResolutionScale)) float_t minDynamicResolutionScale;

  /// @brief Field minRenderScale, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_minRenderScale, put = __cordl_internal_set_minRenderScale)) float_t minRenderScale;

  __declspec(property(get = get_monoscopic, put = set_monoscopic)) bool monoscopic;

  /// @brief Field mrcActivationMode, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_mrcActivationMode, put = __cordl_internal_set_mrcActivationMode)) ::GlobalNamespace::OVRManager_MrcActivationMode mrcActivationMode;

  /// @brief Field multipleMainCameraWarningPresented, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_multipleMainCameraWarningPresented, put = setStaticF_multipleMainCameraWarningPresented)) bool multipleMainCameraWarningPresented;

  __declspec(property(get = get_nativeColorGamut)) ::GlobalNamespace::OVRManager_ColorSpace nativeColorGamut;

  /// @brief Field prevAudioInId, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_prevAudioInId, put = setStaticF_prevAudioInId)) ::StringW prevAudioInId;

  /// @brief Field prevAudioInIdIsCached, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_prevAudioInIdIsCached, put = setStaticF_prevAudioInIdIsCached)) bool prevAudioInIdIsCached;

  /// @brief Field prevAudioOutId, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_prevAudioOutId, put = setStaticF_prevAudioOutId)) ::StringW prevAudioOutId;

  /// @brief Field prevAudioOutIdIsCached, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_prevAudioOutIdIsCached, put = setStaticF_prevAudioOutIdIsCached)) bool prevAudioOutIdIsCached;

  /// @brief Field prevTimeScale, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_prevTimeScale, put = __cordl_internal_set_prevTimeScale)) float_t prevTimeScale;

  /// @brief Field profilerTcpPort, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_profilerTcpPort, put = __cordl_internal_set_profilerTcpPort)) int32_t profilerTcpPort;

  /// @brief Field requestBodyTrackingPermissionOnStartup, offset 0x102, size 0x1
  __declspec(property(get = __cordl_internal_get_requestBodyTrackingPermissionOnStartup,
                      put = __cordl_internal_set_requestBodyTrackingPermissionOnStartup)) bool requestBodyTrackingPermissionOnStartup;

  /// @brief Field requestEyeTrackingPermissionOnStartup, offset 0x104, size 0x1
  __declspec(property(get = __cordl_internal_get_requestEyeTrackingPermissionOnStartup, put = __cordl_internal_set_requestEyeTrackingPermissionOnStartup)) bool requestEyeTrackingPermissionOnStartup;

  /// @brief Field requestFaceTrackingPermissionOnStartup, offset 0x103, size 0x1
  __declspec(property(get = __cordl_internal_get_requestFaceTrackingPermissionOnStartup,
                      put = __cordl_internal_set_requestFaceTrackingPermissionOnStartup)) bool requestFaceTrackingPermissionOnStartup;

  /// @brief Field requestScenePermissionOnStartup, offset 0x105, size 0x1
  __declspec(property(get = __cordl_internal_get_requestScenePermissionOnStartup, put = __cordl_internal_set_requestScenePermissionOnStartup)) bool requestScenePermissionOnStartup;

  /// @brief Field resetTrackerOnLoad, offset 0x10f, size 0x1
  __declspec(property(get = __cordl_internal_get_resetTrackerOnLoad, put = __cordl_internal_set_resetTrackerOnLoad)) bool resetTrackerOnLoad;

  /// @brief Field s_displaySubsystemDescriptors, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_displaySubsystemDescriptors,
                      put = setStaticF_s_displaySubsystemDescriptors)) ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* s_displaySubsystemDescriptors;

  /// @brief Field s_displaySubsystems, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_displaySubsystems, put = setStaticF_s_displaySubsystems)) ::System::Collections::Generic::List_1<Il2CppObject*>* s_displaySubsystems;

  /// @brief Field s_inputSubsystems, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_inputSubsystems, put = setStaticF_s_inputSubsystems)) ::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* s_inputSubsystems;

  /// @brief Field sandwichCompositionBufferedFrames, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get_sandwichCompositionBufferedFrames, put = __cordl_internal_set_sandwichCompositionBufferedFrames)) int32_t sandwichCompositionBufferedFrames;

  /// @brief Field sandwichCompositionRenderLatency, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_sandwichCompositionRenderLatency, put = __cordl_internal_set_sandwichCompositionRenderLatency)) float_t sandwichCompositionRenderLatency;

  __declspec(property(get = get_sharpenType, put = set_sharpenType)) ::GlobalNamespace::OVRPlugin_LayerSharpenType sharpenType;

  /// @brief Field staticMixedRealityCaptureInitialized, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_staticMixedRealityCaptureInitialized, put = setStaticF_staticMixedRealityCaptureInitialized)) bool staticMixedRealityCaptureInitialized;

  /// @brief Field staticMrcSettings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_staticMrcSettings, put = setStaticF_staticMrcSettings)) ::UnityW<::GlobalNamespace::OVRMixedRealityCaptureSettings> staticMrcSettings;

  /// @brief Field staticPrevEnableMixedRealityCapture, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_staticPrevEnableMixedRealityCapture, put = setStaticF_staticPrevEnableMixedRealityCapture)) bool staticPrevEnableMixedRealityCapture;

  /// @brief Field suppressDisableMixedRealityBecauseOfNoMainCameraWarning, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_suppressDisableMixedRealityBecauseOfNoMainCameraWarning,
                      put = setStaticF_suppressDisableMixedRealityBecauseOfNoMainCameraWarning)) bool suppressDisableMixedRealityBecauseOfNoMainCameraWarning;

  /// @brief Field suppressUnableToFindMainCameraMessage, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_suppressUnableToFindMainCameraMessage, put = setStaticF_suppressUnableToFindMainCameraMessage)) bool suppressUnableToFindMainCameraMessage;

  __declspec(property(get = get_trackingOriginType, put = set_trackingOriginType)) ::GlobalNamespace::OVRManager_TrackingOrigin trackingOriginType;

  /// @brief Field useDynamicLighting, offset 0xcc, size 0x1
  __declspec(property(get = __cordl_internal_get_useDynamicLighting, put = __cordl_internal_set_useDynamicLighting)) bool useDynamicLighting;

  /// @brief Field useIPDInPositionTracking, offset 0x10e, size 0x1
  __declspec(property(get = __cordl_internal_get_useIPDInPositionTracking, put = __cordl_internal_set_useIPDInPositionTracking)) bool useIPDInPositionTracking;

  /// @brief Field usePositionTracking, offset 0x10c, size 0x1
  __declspec(property(get = __cordl_internal_get_usePositionTracking, put = __cordl_internal_set_usePositionTracking)) bool usePositionTracking;

  /// @brief Field useRecommendedMSAALevel, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_useRecommendedMSAALevel, put = __cordl_internal_set_useRecommendedMSAALevel)) bool useRecommendedMSAALevel;

  /// @brief Field useRotationTracking, offset 0x10d, size 0x1
  __declspec(property(get = __cordl_internal_get_useRotationTracking, put = __cordl_internal_set_useRotationTracking)) bool useRotationTracking;

  /// @brief Field virtualGreenScreenApplyDepthCulling, offset 0xe8, size 0x1
  __declspec(property(get = __cordl_internal_get_virtualGreenScreenApplyDepthCulling, put = __cordl_internal_set_virtualGreenScreenApplyDepthCulling)) bool virtualGreenScreenApplyDepthCulling;

  /// @brief Field virtualGreenScreenBottomY, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get_virtualGreenScreenBottomY, put = __cordl_internal_set_virtualGreenScreenBottomY)) float_t virtualGreenScreenBottomY;

  /// @brief Field virtualGreenScreenDepthTolerance, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_virtualGreenScreenDepthTolerance, put = __cordl_internal_set_virtualGreenScreenDepthTolerance)) float_t virtualGreenScreenDepthTolerance;

  /// @brief Field virtualGreenScreenTopY, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_virtualGreenScreenTopY, put = __cordl_internal_set_virtualGreenScreenTopY)) float_t virtualGreenScreenTopY;

  /// @brief Field virtualGreenScreenType, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get_virtualGreenScreenType,
                      put = __cordl_internal_set_virtualGreenScreenType)) ::GlobalNamespace::OVRManager_VirtualGreenScreenType virtualGreenScreenType;

  __declspec(property(get = get_vsyncCount, put = set_vsyncCount)) int32_t vsyncCount;

  /// @brief Field wasPositionTracked, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_wasPositionTracked, put = setStaticF_wasPositionTracked)) bool wasPositionTracked;

  __declspec(property(get = get_xrApi)) ::GlobalNamespace::OVRManager_XrApi xrApi;

  __declspec(property(get = get_xrInstance)) uint64_t xrInstance;

  __declspec(property(get = get_xrSession)) uint64_t xrSession;

  /// @brief Convert operator to "::GlobalNamespace::OVRMixedRealityCaptureConfiguration"
  constexpr operator ::GlobalNamespace::OVRMixedRealityCaptureConfiguration*() noexcept;

  /// @brief Method Awake, addr 0x3fcd1c0, size 0x6c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CreateMixedRealityCaptureConfigurationFileFromCmd, addr 0x3fcb530, size 0xb8, virtual false, abstract: false, final false
  static inline bool CreateMixedRealityCaptureConfigurationFileFromCmd();

  /// @brief Method DeregisterEventListener, addr 0x3fcb1b8, size 0x58, virtual false, abstract: false, final false
  inline void DeregisterEventListener(::GlobalNamespace::OVRManager_EventListener* listener);

  /// @brief Method FindMainCamera, addr 0x3fca7cc, size 0x680, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Camera> FindMainCamera();

  /// @brief Method FixedUpdate, addr 0x3fd0ed4, size 0x50, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method GetCurrentDisplaySubsystem, addr 0x3fcd37c, size 0x18c, virtual false, abstract: false, final false
  static inline Il2CppObject* GetCurrentDisplaySubsystem();

  /// @brief Method GetCurrentDisplaySubsystemDescriptor, addr 0x3fcd508, size 0x18c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::XRDisplaySubsystemDescriptor* GetCurrentDisplaySubsystemDescriptor();

  /// @brief Method GetCurrentInputSubsystem, addr 0x3fcd694, size 0x18c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::XRInputSubsystem* GetCurrentInputSubsystem();

  /// @brief Method GetOpenVRControllerOffset, addr 0x3fca360, size 0x1f8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPose GetOpenVRControllerOffset(::UnityEngine::XR::XRNode hand);

  /// @brief Method GetPassthroughCapabilities, addr 0x3fd1888, size 0x154, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRManager_PassthroughCapabilities* GetPassthroughCapabilities();

  /// @brief Method GetSpaceWarp, addr 0x3fcae4c, size 0x58, virtual false, abstract: false, final false
  static inline bool GetSpaceWarp();

  /// @brief Method HasInsightPassthroughInitFailed, addr 0x3fd1a7c, size 0x60, virtual false, abstract: false, final false
  static inline bool HasInsightPassthroughInitFailed();

  /// @brief Method InitOVRManager, addr 0x3fcb790, size 0xf8c, virtual false, abstract: false, final false
  inline void InitOVRManager();

  /// @brief Method InitPermissionRequest, addr 0x3fcceec, size 0x100, virtual false, abstract: false, final false
  inline void InitPermissionRequest();

  /// @brief Method Initialize, addr 0x3fccc6c, size 0x280, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method InitializeInsightPassthrough, addr 0x3fccfec, size 0x1d4, virtual false, abstract: false, final false
  static inline bool InitializeInsightPassthrough();

  /// @brief Method IsAdaptiveResSupportedByEngine, addr 0x3fc8a84, size 0x8, virtual false, abstract: false, final false
  static inline bool IsAdaptiveResSupportedByEngine();

  /// @brief Method IsInsightPassthroughInitPending, addr 0x3fd1adc, size 0x60, virtual false, abstract: false, final false
  static inline bool IsInsightPassthroughInitPending();

  /// @brief Method IsInsightPassthroughInitialized, addr 0x3fd1a1c, size 0x60, virtual false, abstract: false, final false
  static inline bool IsInsightPassthroughInitialized();

  /// @brief Method IsInsightPassthroughSupported, addr 0x3fd1838, size 0x50, virtual false, abstract: false, final false
  static inline bool IsInsightPassthroughSupported();

  /// @brief Method IsMultimodalHandsControllersSupported, addr 0x3fd17e8, size 0x50, virtual false, abstract: false, final false
  static inline bool IsMultimodalHandsControllersSupported();

  /// @brief Method IsPassthroughRecommended, addr 0x3fd1b3c, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsPassthroughRecommended();

  /// @brief Method IsUnityAlphaOrBetaVersion, addr 0x3fcb6a0, size 0xf0, virtual false, abstract: false, final false
  static inline bool IsUnityAlphaOrBetaVersion();

  /// @brief Method LateUpdate, addr 0x3fd0ce8, size 0x1ec, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method LoadMixedRealityCaptureConfigurationFileFromCmd, addr 0x3fcb5e8, size 0xb8, virtual false, abstract: false, final false
  static inline bool LoadMixedRealityCaptureConfigurationFileFromCmd();

  /// @brief Method MixedRealityEnabledFromCmd, addr 0x3fcb308, size 0xb8, virtual false, abstract: false, final false
  static inline bool MixedRealityEnabledFromCmd();

  static inline ::GlobalNamespace::OVRManager* New_ctor();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_capturingCameraDevice, addr 0x3fc8dd4, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRManager_CameraDevice OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeyColor, addr 0x3fc8e3c, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color OVRMixedRealityCaptureConfiguration_get_chromaKeyColor();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeySimilarity, addr 0x3fc8e54, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeySmoothRange, addr 0x3fc8e64, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeySpillRange, addr 0x3fc8e74, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_compositionMethod, addr 0x3fc8d94, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRManager_CompositionMethod OVRMixedRealityCaptureConfiguration_get_compositionMethod();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_depthQuality, addr 0x3fc8e98, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRManager_DepthQuality OVRMixedRealityCaptureConfiguration_get_depthQuality();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_dynamicCullingMask, addr 0x3fc8d80, size 0x8, virtual true, abstract: false, final true
  inline bool OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_dynamicLightingDepthVariationClampingValue, addr 0x3fc8eb8, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_dynamicLightingSmoothFactor, addr 0x3fc8ea8, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_enableMixedReality, addr 0x3fc8d4c, size 0x8, virtual true, abstract: false, final true
  inline bool OVRMixedRealityCaptureConfiguration_get_enableMixedReality();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorQuest, addr 0x3fc8dbc, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorRift, addr 0x3fc8da4, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_extraHiddenLayers, addr 0x3fc8d60, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::LayerMask OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_extraVisibleLayers, addr 0x3fc8d70, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::LayerMask OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_flipCameraFrameHorizontally, addr 0x3fc8de4, size 0x8, virtual true, abstract: false, final true
  inline bool OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_flipCameraFrameVertically, addr 0x3fc8df8, size 0x8, virtual true, abstract: false, final true
  inline bool OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_handPoseStateLatency, addr 0x3fc8e0c, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_instantiateMixedRealityCameraGameObject, addr 0x3fc8f2c, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_mrcActivationMode, addr 0x3fc8f1c, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRManager_MrcActivationMode OVRMixedRealityCaptureConfiguration_get_mrcActivationMode();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_sandwichCompositionBufferedFrames, addr 0x3fc8e2c, size 0x8, virtual true, abstract: false, final true
  inline int32_t OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_sandwichCompositionRenderLatency, addr 0x3fc8e1c, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_useDynamicLighting, addr 0x3fc8e84, size 0x8, virtual true, abstract: false, final true
  inline bool OVRMixedRealityCaptureConfiguration_get_useDynamicLighting();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenApplyDepthCulling, addr 0x3fc8ef8, size 0x8, virtual true, abstract: false, final true
  inline bool OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenBottomY, addr 0x3fc8ee8, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenDepthTolerance, addr 0x3fc8f0c, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenTopY, addr 0x3fc8ed8, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenType, addr 0x3fc8ec8, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRManager_VirtualGreenScreenType OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_capturingCameraDevice, addr 0x3fc8ddc, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice(::GlobalNamespace::OVRManager_CameraDevice value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeyColor, addr 0x3fc8e48, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_chromaKeyColor(::UnityEngine::Color value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeySimilarity, addr 0x3fc8e5c, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeySmoothRange, addr 0x3fc8e6c, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeySpillRange, addr 0x3fc8e7c, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_compositionMethod, addr 0x3fc8d9c, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_compositionMethod(::GlobalNamespace::OVRManager_CompositionMethod value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_depthQuality, addr 0x3fc8ea0, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_depthQuality(::GlobalNamespace::OVRManager_DepthQuality value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_dynamicCullingMask, addr 0x3fc8d88, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_dynamicLightingDepthVariationClampingValue, addr 0x3fc8ec0, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_dynamicLightingSmoothFactor, addr 0x3fc8eb0, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_enableMixedReality, addr 0x3fc8d54, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_enableMixedReality(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorQuest, addr 0x3fc8dc8, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest(::UnityEngine::Color value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorRift, addr 0x3fc8db0, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift(::UnityEngine::Color value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_extraHiddenLayers, addr 0x3fc8d68, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers(::UnityEngine::LayerMask value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_extraVisibleLayers, addr 0x3fc8d78, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers(::UnityEngine::LayerMask value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_flipCameraFrameHorizontally, addr 0x3fc8dec, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_flipCameraFrameVertically, addr 0x3fc8e00, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_handPoseStateLatency, addr 0x3fc8e14, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_instantiateMixedRealityCameraGameObject, addr 0x3fc8f34, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject(::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_mrcActivationMode, addr 0x3fc8f24, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_mrcActivationMode(::GlobalNamespace::OVRManager_MrcActivationMode value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_sandwichCompositionBufferedFrames, addr 0x3fc8e34, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames(int32_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_sandwichCompositionRenderLatency, addr 0x3fc8e24, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_useDynamicLighting, addr 0x3fc8e8c, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_useDynamicLighting(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenApplyDepthCulling, addr 0x3fc8f00, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenBottomY, addr 0x3fc8ef0, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenDepthTolerance, addr 0x3fc8f14, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenTopY, addr 0x3fc8ee0, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenType, addr 0x3fc8ed0, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType(::GlobalNamespace::OVRManager_VirtualGreenScreenType value);

  /// @brief Method OnApplicationFocus, addr 0x3fd1048, size 0x88, virtual false, abstract: false, final false
  inline void OnApplicationFocus(bool focus);

  /// @brief Method OnApplicationPause, addr 0x3fd0fc0, size 0x88, virtual false, abstract: false, final false
  inline void OnApplicationPause(bool pause);

  /// @brief Method OnApplicationQuit, addr 0x3fd10d0, size 0x68, virtual false, abstract: false, final false
  inline void OnApplicationQuit();

  /// @brief Method OnDestroy, addr 0x3fd0f24, size 0x9c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x3fd0c30, size 0xb8, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnPermissionGranted, addr 0x3fc9b94, size 0xd4, virtual false, abstract: false, final false
  static inline void OnPermissionGranted(::StringW permissionId);

  /// @brief Method PassthroughInitializedOrPending, addr 0x3fd17d8, size 0x10, virtual false, abstract: false, final false
  static inline bool PassthroughInitializedOrPending(::GlobalNamespace::OVRManager_PassthroughInitializationState state);

  /// @brief Method PlatformUIConfirmQuit, addr 0x3fd1184, size 0x8c, virtual false, abstract: false, final false
  static inline void PlatformUIConfirmQuit();

  /// @brief Method RegisterEventListener, addr 0x3fcb160, size 0x58, virtual false, abstract: false, final false
  inline void RegisterEventListener(::GlobalNamespace::OVRManager_EventListener* listener);

  /// @brief Method ReturnToLauncher, addr 0x3fd1138, size 0x4c, virtual false, abstract: false, final false
  inline void ReturnToLauncher();

  /// @brief Method SetColorScaleAndOffset, addr 0x3fca1a0, size 0xb8, virtual false, abstract: false, final false
  static inline void SetColorScaleAndOffset(::UnityEngine::Vector4 colorScale, ::UnityEngine::Vector4 colorOffset, bool applyToAllLayers);

  /// @brief Method SetCurrentXRDevice, addr 0x3fcd22c, size 0x150, virtual false, abstract: false, final false
  inline void SetCurrentXRDevice();

  /// @brief Method SetDepthSubmission, addr 0x3fcaea4, size 0x1c, virtual false, abstract: false, final false
  static inline bool SetDepthSubmission(bool enable);

  /// @brief Method SetOpenVRLocalPose, addr 0x3fca258, size 0x108, virtual false, abstract: false, final false
  static inline void SetOpenVRLocalPose(::UnityEngine::Vector3 leftPos, ::UnityEngine::Vector3 rightPos, ::UnityEngine::Quaternion leftRot, ::UnityEngine::Quaternion rightRot);

  /// @brief Method SetSpaceWarp, addr 0x3fca558, size 0x274, virtual false, abstract: false, final false
  static inline void SetSpaceWarp(bool enabled);

  /// @brief Method ShutdownInsightPassthrough, addr 0x3fcf948, size 0x130, virtual false, abstract: false, final false
  static inline void ShutdownInsightPassthrough();

  /// @brief Method StaticInitializeMixedRealityCapture, addr 0x3fcc71c, size 0x550, virtual false, abstract: false, final false
  static inline void StaticInitializeMixedRealityCapture(::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration);

  /// @brief Method StaticShutdownMixedRealityCapture, addr 0x3fcf840, size 0x108, virtual false, abstract: false, final false
  static inline void StaticShutdownMixedRealityCapture(::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration);

  /// @brief Method StaticUpdateMixedRealityCapture, addr 0x3fd0568, size 0x4c4, virtual false, abstract: false, final false
  static inline void StaticUpdateMixedRealityCapture(::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration, ::UnityEngine::GameObject* gameObject,
                                                     ::GlobalNamespace::OVRManager_TrackingOrigin trackingOrigin);

  /// @brief Method Update, addr 0x3fcd820, size 0x2020, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateHMDEvents, addr 0x3fcfa78, size 0xaf0, virtual false, abstract: false, final false
  inline void UpdateHMDEvents();

  /// @brief Method UpdateInsightPassthrough, addr 0x3fd0a2c, size 0x204, virtual false, abstract: false, final false
  static inline void UpdateInsightPassthrough(bool shouldBeEnabled);

  /// @brief Method UseDirectCompositionFromCmd, addr 0x3fcb3c0, size 0xb8, virtual false, abstract: false, final false
  static inline bool UseDirectCompositionFromCmd();

  /// @brief Method UseExternalCompositionFromCmd, addr 0x3fcb478, size 0xb8, virtual false, abstract: false, final false
  static inline bool UseExternalCompositionFromCmd();

  constexpr bool const& __cordl_internal_get_AllowRecenter() const;

  constexpr bool& __cordl_internal_get_AllowRecenter();

  constexpr bool const& __cordl_internal_get_LateControllerUpdate() const;

  constexpr bool& __cordl_internal_get_LateControllerUpdate();

  constexpr bool const& __cordl_internal_get_LateLatching() const;

  constexpr bool& __cordl_internal_get_LateLatching();

  constexpr ::GlobalNamespace::OVRManager_ColorSpace const& __cordl_internal_get__colorGamut() const;

  constexpr ::GlobalNamespace::OVRManager_ColorSpace& __cordl_internal_get__colorGamut();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__headPoseRelativeOffsetRotation() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__headPoseRelativeOffsetRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__headPoseRelativeOffsetTranslation() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__headPoseRelativeOffsetTranslation();

  constexpr bool const& __cordl_internal_get__isSupportedPlatform_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isSupportedPlatform_k__BackingField();

  constexpr bool const& __cordl_internal_get__localDimming() const;

  constexpr bool& __cordl_internal_get__localDimming();

  constexpr bool const& __cordl_internal_get__monoscopic() const;

  constexpr bool& __cordl_internal_get__monoscopic();

  constexpr ::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType const& __cordl_internal_get__readOnlyControllerDrivenHandPosesType() const;

  constexpr ::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType& __cordl_internal_get__readOnlyControllerDrivenHandPosesType();

  constexpr ::GlobalNamespace::OVRPlugin_LayerSharpenType const& __cordl_internal_get__sharpenType() const;

  constexpr ::GlobalNamespace::OVRPlugin_LayerSharpenType& __cordl_internal_get__sharpenType();

  constexpr ::GlobalNamespace::OVRManager_TrackingOrigin const& __cordl_internal_get__trackingOriginType() const;

  constexpr ::GlobalNamespace::OVRManager_TrackingOrigin& __cordl_internal_get__trackingOriginType();

  constexpr ::GlobalNamespace::OVRManager_CameraDevice const& __cordl_internal_get_capturingCameraDevice() const;

  constexpr ::GlobalNamespace::OVRManager_CameraDevice& __cordl_internal_get_capturingCameraDevice();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_chromaKeyColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_chromaKeyColor();

  constexpr float_t const& __cordl_internal_get_chromaKeySimilarity() const;

  constexpr float_t& __cordl_internal_get_chromaKeySimilarity();

  constexpr float_t const& __cordl_internal_get_chromaKeySmoothRange() const;

  constexpr float_t& __cordl_internal_get_chromaKeySmoothRange();

  constexpr float_t const& __cordl_internal_get_chromaKeySpillRange() const;

  constexpr float_t& __cordl_internal_get_chromaKeySpillRange();

  constexpr ::GlobalNamespace::OVRManager_CompositionMethod const& __cordl_internal_get_compositionMethod() const;

  constexpr ::GlobalNamespace::OVRManager_CompositionMethod& __cordl_internal_get_compositionMethod();

  constexpr ::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType const& __cordl_internal_get_controllerDrivenHandPosesType() const;

  constexpr ::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType& __cordl_internal_get_controllerDrivenHandPosesType();

  constexpr ::GlobalNamespace::OVRManager_DepthQuality const& __cordl_internal_get_depthQuality() const;

  constexpr ::GlobalNamespace::OVRManager_DepthQuality& __cordl_internal_get_depthQuality();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Camera>>* const& __cordl_internal_get_disabledCameras() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Camera>>*& __cordl_internal_get_disabledCameras();

  constexpr bool const& __cordl_internal_get_dynamicCullingMask() const;

  constexpr bool& __cordl_internal_get_dynamicCullingMask();

  constexpr float_t const& __cordl_internal_get_dynamicLightingDepthVariationClampingValue() const;

  constexpr float_t& __cordl_internal_get_dynamicLightingDepthVariationClampingValue();

  constexpr float_t const& __cordl_internal_get_dynamicLightingSmoothFactor() const;

  constexpr float_t& __cordl_internal_get_dynamicLightingSmoothFactor();

  constexpr bool const& __cordl_internal_get_enableDynamicResolution() const;

  constexpr bool& __cordl_internal_get_enableDynamicResolution();

  constexpr bool const& __cordl_internal_get_enableMixedReality() const;

  constexpr bool& __cordl_internal_get_enableMixedReality();

  constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRManager_EventListener*>* const& __cordl_internal_get_eventListeners() const;

  constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRManager_EventListener*>*& __cordl_internal_get_eventListeners();

  constexpr bool const& __cordl_internal_get_expandMixedRealityCapturePropertySheet() const;

  constexpr bool& __cordl_internal_get_expandMixedRealityCapturePropertySheet();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_externalCompositionBackdropColorQuest() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_externalCompositionBackdropColorQuest();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_externalCompositionBackdropColorRift() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_externalCompositionBackdropColorRift();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_extraHiddenLayers() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_extraHiddenLayers();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_extraVisibleLayers() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_extraVisibleLayers();

  constexpr bool const& __cordl_internal_get_flipCameraFrameHorizontally() const;

  constexpr bool& __cordl_internal_get_flipCameraFrameHorizontally();

  constexpr bool const& __cordl_internal_get_flipCameraFrameVertically() const;

  constexpr bool& __cordl_internal_get_flipCameraFrameVertically();

  constexpr float_t const& __cordl_internal_get_handPoseStateLatency() const;

  constexpr float_t& __cordl_internal_get_handPoseStateLatency();

  constexpr ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* const& __cordl_internal_get_instantiateMixedRealityCameraGameObject() const;

  constexpr ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*& __cordl_internal_get_instantiateMixedRealityCameraGameObject();

  constexpr bool const& __cordl_internal_get_isInsightPassthroughEnabled() const;

  constexpr bool& __cordl_internal_get_isInsightPassthroughEnabled();

  constexpr bool const& __cordl_internal_get_launchMultimodalHandsControllersOnStartup() const;

  constexpr bool& __cordl_internal_get_launchMultimodalHandsControllersOnStartup();

  constexpr float_t const& __cordl_internal_get_maxDynamicResolutionScale() const;

  constexpr float_t& __cordl_internal_get_maxDynamicResolutionScale();

  constexpr float_t const& __cordl_internal_get_maxRenderScale() const;

  constexpr float_t& __cordl_internal_get_maxRenderScale();

  constexpr float_t const& __cordl_internal_get_minDynamicResolutionScale() const;

  constexpr float_t& __cordl_internal_get_minDynamicResolutionScale();

  constexpr float_t const& __cordl_internal_get_minRenderScale() const;

  constexpr float_t& __cordl_internal_get_minRenderScale();

  constexpr ::GlobalNamespace::OVRManager_MrcActivationMode const& __cordl_internal_get_mrcActivationMode() const;

  constexpr ::GlobalNamespace::OVRManager_MrcActivationMode& __cordl_internal_get_mrcActivationMode();

  constexpr float_t const& __cordl_internal_get_prevTimeScale() const;

  constexpr float_t& __cordl_internal_get_prevTimeScale();

  constexpr int32_t const& __cordl_internal_get_profilerTcpPort() const;

  constexpr int32_t& __cordl_internal_get_profilerTcpPort();

  constexpr bool const& __cordl_internal_get_requestBodyTrackingPermissionOnStartup() const;

  constexpr bool& __cordl_internal_get_requestBodyTrackingPermissionOnStartup();

  constexpr bool const& __cordl_internal_get_requestEyeTrackingPermissionOnStartup() const;

  constexpr bool& __cordl_internal_get_requestEyeTrackingPermissionOnStartup();

  constexpr bool const& __cordl_internal_get_requestFaceTrackingPermissionOnStartup() const;

  constexpr bool& __cordl_internal_get_requestFaceTrackingPermissionOnStartup();

  constexpr bool const& __cordl_internal_get_requestScenePermissionOnStartup() const;

  constexpr bool& __cordl_internal_get_requestScenePermissionOnStartup();

  constexpr bool const& __cordl_internal_get_resetTrackerOnLoad() const;

  constexpr bool& __cordl_internal_get_resetTrackerOnLoad();

  constexpr int32_t const& __cordl_internal_get_sandwichCompositionBufferedFrames() const;

  constexpr int32_t& __cordl_internal_get_sandwichCompositionBufferedFrames();

  constexpr float_t const& __cordl_internal_get_sandwichCompositionRenderLatency() const;

  constexpr float_t& __cordl_internal_get_sandwichCompositionRenderLatency();

  constexpr bool const& __cordl_internal_get_useDynamicLighting() const;

  constexpr bool& __cordl_internal_get_useDynamicLighting();

  constexpr bool const& __cordl_internal_get_useIPDInPositionTracking() const;

  constexpr bool& __cordl_internal_get_useIPDInPositionTracking();

  constexpr bool const& __cordl_internal_get_usePositionTracking() const;

  constexpr bool& __cordl_internal_get_usePositionTracking();

  constexpr bool const& __cordl_internal_get_useRecommendedMSAALevel() const;

  constexpr bool& __cordl_internal_get_useRecommendedMSAALevel();

  constexpr bool const& __cordl_internal_get_useRotationTracking() const;

  constexpr bool& __cordl_internal_get_useRotationTracking();

  constexpr bool const& __cordl_internal_get_virtualGreenScreenApplyDepthCulling() const;

  constexpr bool& __cordl_internal_get_virtualGreenScreenApplyDepthCulling();

  constexpr float_t const& __cordl_internal_get_virtualGreenScreenBottomY() const;

  constexpr float_t& __cordl_internal_get_virtualGreenScreenBottomY();

  constexpr float_t const& __cordl_internal_get_virtualGreenScreenDepthTolerance() const;

  constexpr float_t& __cordl_internal_get_virtualGreenScreenDepthTolerance();

  constexpr float_t const& __cordl_internal_get_virtualGreenScreenTopY() const;

  constexpr float_t& __cordl_internal_get_virtualGreenScreenTopY();

  constexpr ::GlobalNamespace::OVRManager_VirtualGreenScreenType const& __cordl_internal_get_virtualGreenScreenType() const;

  constexpr ::GlobalNamespace::OVRManager_VirtualGreenScreenType& __cordl_internal_get_virtualGreenScreenType();

  constexpr void __cordl_internal_set_AllowRecenter(bool value);

  constexpr void __cordl_internal_set_LateControllerUpdate(bool value);

  constexpr void __cordl_internal_set_LateLatching(bool value);

  constexpr void __cordl_internal_set__colorGamut(::GlobalNamespace::OVRManager_ColorSpace value);

  constexpr void __cordl_internal_set__headPoseRelativeOffsetRotation(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__headPoseRelativeOffsetTranslation(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__isSupportedPlatform_k__BackingField(bool value);

  constexpr void __cordl_internal_set__localDimming(bool value);

  constexpr void __cordl_internal_set__monoscopic(bool value);

  constexpr void __cordl_internal_set__readOnlyControllerDrivenHandPosesType(::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType value);

  constexpr void __cordl_internal_set__sharpenType(::GlobalNamespace::OVRPlugin_LayerSharpenType value);

  constexpr void __cordl_internal_set__trackingOriginType(::GlobalNamespace::OVRManager_TrackingOrigin value);

  constexpr void __cordl_internal_set_capturingCameraDevice(::GlobalNamespace::OVRManager_CameraDevice value);

  constexpr void __cordl_internal_set_chromaKeyColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_chromaKeySimilarity(float_t value);

  constexpr void __cordl_internal_set_chromaKeySmoothRange(float_t value);

  constexpr void __cordl_internal_set_chromaKeySpillRange(float_t value);

  constexpr void __cordl_internal_set_compositionMethod(::GlobalNamespace::OVRManager_CompositionMethod value);

  constexpr void __cordl_internal_set_controllerDrivenHandPosesType(::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType value);

  constexpr void __cordl_internal_set_depthQuality(::GlobalNamespace::OVRManager_DepthQuality value);

  constexpr void __cordl_internal_set_disabledCameras(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Camera>>* value);

  constexpr void __cordl_internal_set_dynamicCullingMask(bool value);

  constexpr void __cordl_internal_set_dynamicLightingDepthVariationClampingValue(float_t value);

  constexpr void __cordl_internal_set_dynamicLightingSmoothFactor(float_t value);

  constexpr void __cordl_internal_set_enableDynamicResolution(bool value);

  constexpr void __cordl_internal_set_enableMixedReality(bool value);

  constexpr void __cordl_internal_set_eventListeners(::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRManager_EventListener*>* value);

  constexpr void __cordl_internal_set_expandMixedRealityCapturePropertySheet(bool value);

  constexpr void __cordl_internal_set_externalCompositionBackdropColorQuest(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_externalCompositionBackdropColorRift(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_extraHiddenLayers(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_extraVisibleLayers(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_flipCameraFrameHorizontally(bool value);

  constexpr void __cordl_internal_set_flipCameraFrameVertically(bool value);

  constexpr void __cordl_internal_set_handPoseStateLatency(float_t value);

  constexpr void __cordl_internal_set_instantiateMixedRealityCameraGameObject(::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* value);

  constexpr void __cordl_internal_set_isInsightPassthroughEnabled(bool value);

  constexpr void __cordl_internal_set_launchMultimodalHandsControllersOnStartup(bool value);

  constexpr void __cordl_internal_set_maxDynamicResolutionScale(float_t value);

  constexpr void __cordl_internal_set_maxRenderScale(float_t value);

  constexpr void __cordl_internal_set_minDynamicResolutionScale(float_t value);

  constexpr void __cordl_internal_set_minRenderScale(float_t value);

  constexpr void __cordl_internal_set_mrcActivationMode(::GlobalNamespace::OVRManager_MrcActivationMode value);

  constexpr void __cordl_internal_set_prevTimeScale(float_t value);

  constexpr void __cordl_internal_set_profilerTcpPort(int32_t value);

  constexpr void __cordl_internal_set_requestBodyTrackingPermissionOnStartup(bool value);

  constexpr void __cordl_internal_set_requestEyeTrackingPermissionOnStartup(bool value);

  constexpr void __cordl_internal_set_requestFaceTrackingPermissionOnStartup(bool value);

  constexpr void __cordl_internal_set_requestScenePermissionOnStartup(bool value);

  constexpr void __cordl_internal_set_resetTrackerOnLoad(bool value);

  constexpr void __cordl_internal_set_sandwichCompositionBufferedFrames(int32_t value);

  constexpr void __cordl_internal_set_sandwichCompositionRenderLatency(float_t value);

  constexpr void __cordl_internal_set_useDynamicLighting(bool value);

  constexpr void __cordl_internal_set_useIPDInPositionTracking(bool value);

  constexpr void __cordl_internal_set_usePositionTracking(bool value);

  constexpr void __cordl_internal_set_useRecommendedMSAALevel(bool value);

  constexpr void __cordl_internal_set_useRotationTracking(bool value);

  constexpr void __cordl_internal_set_virtualGreenScreenApplyDepthCulling(bool value);

  constexpr void __cordl_internal_set_virtualGreenScreenBottomY(float_t value);

  constexpr void __cordl_internal_set_virtualGreenScreenDepthTolerance(float_t value);

  constexpr void __cordl_internal_set_virtualGreenScreenTopY(float_t value);

  constexpr void __cordl_internal_set_virtualGreenScreenType(::GlobalNamespace::OVRManager_VirtualGreenScreenType value);

  /// @brief Method .ctor, addr 0x3fd1ba8, size 0x118, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_AudioInChanged, addr 0x3fc69ac, size 0xdc, virtual false, abstract: false, final false
  static inline void add_AudioInChanged(::System::Action* value);

  /// @brief Method add_AudioOutChanged, addr 0x3fc67f4, size 0xdc, virtual false, abstract: false, final false
  static inline void add_AudioOutChanged(::System::Action* value);

  /// @brief Method add_DisplayRefreshRateChanged, addr 0x3fc6ed4, size 0xf4, virtual false, abstract: false, final false
  static inline void add_DisplayRefreshRateChanged(::System::Action_2<float_t, float_t>* value);

  /// @brief Method add_HMDAcquired, addr 0x3fc5a34, size 0xdc, virtual false, abstract: false, final false
  static inline void add_HMDAcquired(::System::Action* value);

  /// @brief Method add_HMDLost, addr 0x3fc5bec, size 0xdc, virtual false, abstract: false, final false
  static inline void add_HMDLost(::System::Action* value);

  /// @brief Method add_HMDMounted, addr 0x3fc5da4, size 0xdc, virtual false, abstract: false, final false
  static inline void add_HMDMounted(::System::Action* value);

  /// @brief Method add_HMDUnmounted, addr 0x3fc5f5c, size 0xdc, virtual false, abstract: false, final false
  static inline void add_HMDUnmounted(::System::Action* value);

  /// @brief Method add_HSWDismissed, addr 0x3fc81e4, size 0xdc, virtual false, abstract: false, final false
  static inline void add_HSWDismissed(::System::Action* value);

  /// @brief Method add_InputFocusAcquired, addr 0x3fc6484, size 0xdc, virtual false, abstract: false, final false
  static inline void add_InputFocusAcquired(::System::Action* value);

  /// @brief Method add_InputFocusLost, addr 0x3fc663c, size 0xdc, virtual false, abstract: false, final false
  static inline void add_InputFocusLost(::System::Action* value);

  /// @brief Method add_SceneCaptureComplete, addr 0x3fc7ffc, size 0xf4, virtual false, abstract: false, final false
  static inline void add_SceneCaptureComplete(::System::Action_2<uint64_t, bool>* value);

  /// @brief Method add_ShareSpacesComplete, addr 0x3fc7c2c, size 0xf4, virtual false, abstract: false, final false
  static inline void add_ShareSpacesComplete(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  /// @brief Method add_SpaceEraseComplete, addr 0x3fc7a44, size 0xf4, virtual false, abstract: false, final false
  static inline void add_SpaceEraseComplete(::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>* value);

  /// @brief Method add_SpaceListSaveComplete, addr 0x3fc7e14, size 0xf4, virtual false, abstract: false, final false
  static inline void add_SpaceListSaveComplete(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  /// @brief Method add_SpaceQueryComplete, addr 0x3fc7674, size 0xf4, virtual false, abstract: false, final false
  static inline void add_SpaceQueryComplete(::System::Action_2<uint64_t, bool>* value);

  /// @brief Method add_SpaceQueryResults, addr 0x3fc748c, size 0xf4, virtual false, abstract: false, final false
  static inline void add_SpaceQueryResults(::System::Action_1<uint64_t>* value);

  /// @brief Method add_SpaceSaveComplete, addr 0x3fc785c, size 0xf4, virtual false, abstract: false, final false
  static inline void add_SpaceSaveComplete(::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>* value);

  /// @brief Method add_SpaceSetComponentStatusComplete, addr 0x3fc72a4, size 0xf4, virtual false, abstract: false, final false
  static inline void add_SpaceSetComponentStatusComplete(::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>* value);

  /// @brief Method add_SpatialAnchorCreateComplete, addr 0x3fc70bc, size 0xf4, virtual false, abstract: false, final false
  static inline void add_SpatialAnchorCreateComplete(::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>* value);

  /// @brief Method add_TrackingAcquired, addr 0x3fc6b64, size 0xdc, virtual false, abstract: false, final false
  static inline void add_TrackingAcquired(::System::Action* value);

  /// @brief Method add_TrackingLost, addr 0x3fc6d1c, size 0xdc, virtual false, abstract: false, final false
  static inline void add_TrackingLost(::System::Action* value);

  /// @brief Method add_VrFocusAcquired, addr 0x3fc6114, size 0xdc, virtual false, abstract: false, final false
  static inline void add_VrFocusAcquired(::System::Action* value);

  /// @brief Method add_VrFocusLost, addr 0x3fc62cc, size 0xdc, virtual false, abstract: false, final false
  static inline void add_VrFocusLost(::System::Action* value);

  static inline ::System::Action* getStaticF_AudioInChanged();

  static inline ::System::Action* getStaticF_AudioOutChanged();

  static inline ::System::Action_2<float_t, float_t>* getStaticF_DisplayRefreshRateChanged();

  static inline ::System::Action* getStaticF_HMDAcquired();

  static inline ::System::Action* getStaticF_HMDLost();

  static inline ::System::Action* getStaticF_HMDMounted();

  static inline ::System::Action* getStaticF_HMDUnmounted();

  static inline ::System::Action* getStaticF_HSWDismissed();

  static inline ::System::Action* getStaticF_InputFocusAcquired();

  static inline ::System::Action* getStaticF_InputFocusLost();

  static inline ::StringW getStaticF_OCULUS_UNITY_NAME_STR();

  static inline ::StringW getStaticF_OPENVR_UNITY_NAME_STR();

  static inline bool getStaticF_OVRManagerinitialized();

  static inline ::UnityEngine::Vector3 getStaticF_OpenVRTouchPositionOffsetLeft();

  static inline ::UnityEngine::Vector3 getStaticF_OpenVRTouchPositionOffsetRight();

  static inline ::UnityEngine::Vector3 getStaticF_OpenVRTouchRotationOffsetEulerLeft();

  static inline ::UnityEngine::Vector3 getStaticF_OpenVRTouchRotationOffsetEulerRight();

  static inline ::System::Action_2<uint64_t, bool>* getStaticF_SceneCaptureComplete();

  static inline ::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* getStaticF_ShareSpacesComplete();

  static inline ::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>* getStaticF_SpaceEraseComplete();

  static inline ::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* getStaticF_SpaceListSaveComplete();

  static inline ::System::Action_2<uint64_t, bool>* getStaticF_SpaceQueryComplete();

  static inline ::System::Action_1<uint64_t>* getStaticF_SpaceQueryResults();

  static inline ::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>* getStaticF_SpaceSaveComplete();

  static inline ::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>* getStaticF_SpaceSetComponentStatusComplete();

  static inline ::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>* getStaticF_SpatialAnchorCreateComplete();

  static inline ::System::Action* getStaticF_TrackingAcquired();

  static inline ::System::Action* getStaticF_TrackingLost();

  static inline ::StringW getStaticF_UnityAlphaOrBetaVersionWarningMessage();

  static inline ::System::Action* getStaticF_VrFocusAcquired();

  static inline ::System::Action* getStaticF_VrFocusLost();

  static inline ::GlobalNamespace::OVRBoundary* getStaticF__boundary_k__BackingField();

  static inline ::GlobalNamespace::OVRDisplay* getStaticF__display_k__BackingField();

  static inline bool getStaticF__hadInputFocus();

  static inline bool getStaticF__hadVrFocus();

  static inline bool getStaticF__hasVrFocus();

  static inline bool getStaticF__hasVrFocusCached();

  static inline ::UnityW<::GlobalNamespace::OVRManager> getStaticF__instance_k__BackingField();

  static inline bool getStaticF__isHmdPresent();

  static inline bool getStaticF__isHmdPresentCached();

  static inline bool getStaticF__isUserPresent();

  static inline bool getStaticF__isUserPresentCached();

  static inline ::GlobalNamespace::OVRManager_PassthroughCapabilities* getStaticF__passthroughCapabilities();

  static inline ::GlobalNamespace::OVRManager_PassthroughInitializationState getStaticF__passthroughInitializationState();

  static inline ::UnityW<::GlobalNamespace::OVRProfile> getStaticF__profile();

  static inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> getStaticF__runtimeSettings_k__BackingField();

  static inline ::GlobalNamespace::OVRTracker* getStaticF__tracker_k__BackingField();

  static inline bool getStaticF__wasHmdPresent();

  static inline bool getStaticF__wasUserPresent();

  static inline ::GlobalNamespace::OVRPlugin_EventDataBuffer getStaticF_eventDataBuffer();

  static inline ::System::WeakReference_1<::UnityW<::UnityEngine::Camera>>* getStaticF_lastFoundMainCamera();

  static inline ::GlobalNamespace::OVRManager_XRDevice getStaticF_loadedXRDevice();

  static inline ::UnityW<::UnityEngine::Transform> getStaticF_m_AppSpaceTransform();

  static inline ::UnityEngine::DepthTextureMode getStaticF_m_CachedDepthTextureMode();

  static inline bool getStaticF_m_SpaceWarpEnabled();

  static inline bool getStaticF_multipleMainCameraWarningPresented();

  static inline ::StringW getStaticF_prevAudioInId();

  static inline bool getStaticF_prevAudioInIdIsCached();

  static inline ::StringW getStaticF_prevAudioOutId();

  static inline bool getStaticF_prevAudioOutIdIsCached();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* getStaticF_s_displaySubsystemDescriptors();

  static inline ::System::Collections::Generic::List_1<Il2CppObject*>* getStaticF_s_displaySubsystems();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* getStaticF_s_inputSubsystems();

  static inline bool getStaticF_staticMixedRealityCaptureInitialized();

  static inline ::UnityW<::GlobalNamespace::OVRMixedRealityCaptureSettings> getStaticF_staticMrcSettings();

  static inline bool getStaticF_staticPrevEnableMixedRealityCapture();

  static inline bool getStaticF_suppressDisableMixedRealityBecauseOfNoMainCameraWarning();

  static inline bool getStaticF_suppressUnableToFindMainCameraMessage();

  static inline bool getStaticF_wasPositionTracked();

  /// @brief Method get_IsSimultaneousHandsAndControllersSupported, addr 0x3fcafec, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsSimultaneousHandsAndControllersSupported();

  /// @brief Method get_audioInId, addr 0x3fc852c, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW get_audioInId();

  /// @brief Method get_audioOutId, addr 0x3fc84dc, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW get_audioOutId();

  /// @brief Method get_batteryLevel, addr 0x3fc9148, size 0x8c, virtual false, abstract: false, final false
  static inline float_t get_batteryLevel();

  /// @brief Method get_batteryStatus, addr 0x3fc9260, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t get_batteryStatus();

  /// @brief Method get_batteryTemperature, addr 0x3fc91d4, size 0x8c, virtual false, abstract: false, final false
  static inline float_t get_batteryTemperature();

  /// @brief Method get_boundary, addr 0x3fc57d4, size 0x58, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRBoundary* get_boundary();

  /// @brief Method get_chromatic, addr 0x3fc870c, size 0x8c, virtual false, abstract: false, final false
  inline bool get_chromatic();

  /// @brief Method get_colorGamut, addr 0x3fc89c4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRManager_ColorSpace get_colorGamut();

  /// @brief Method get_cpuLevel, addr 0x3fc95b0, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t get_cpuLevel();

  /// @brief Method get_display, addr 0x3fc566c, size 0x58, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRDisplay* get_display();

  /// @brief Method get_eyeFovPremultipliedAlphaModeEnabled, addr 0x3fc8ca4, size 0x50, virtual false, abstract: false, final false
  static inline bool get_eyeFovPremultipliedAlphaModeEnabled();

  /// @brief Method get_eyeTextureFormat, addr 0x3fc9874, size 0x50, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRManager_EyeTextureFormat get_eyeTextureFormat();

  /// @brief Method get_eyeTrackedFoveatedRenderingEnabled, addr 0x3fc996c, size 0x50, virtual false, abstract: false, final false
  static inline bool get_eyeTrackedFoveatedRenderingEnabled();

  /// @brief Method get_eyeTrackedFoveatedRenderingSupported, addr 0x3fc991c, size 0x50, virtual false, abstract: false, final false
  static inline bool get_eyeTrackedFoveatedRenderingSupported();

  /// @brief Method get_fixedFoveatedRenderingLevel, addr 0x3fc9d60, size 0x50, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel get_fixedFoveatedRenderingLevel();

  /// @brief Method get_fixedFoveatedRenderingSupported, addr 0x3fc9d10, size 0x50, virtual false, abstract: false, final false
  static inline bool get_fixedFoveatedRenderingSupported();

  /// @brief Method get_foveatedRenderingLevel, addr 0x3fc9c68, size 0x50, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRManager_FoveatedRenderingLevel get_foveatedRenderingLevel();

  /// @brief Method get_gpuLevel, addr 0x3fc96cc, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t get_gpuLevel();

  /// @brief Method get_gpuUtilLevel, addr 0x3fca0a0, size 0xb0, virtual false, abstract: false, final false
  static inline float_t get_gpuUtilLevel();

  /// @brief Method get_gpuUtilSupported, addr 0x3fca050, size 0x50, virtual false, abstract: false, final false
  static inline bool get_gpuUtilSupported();

  /// @brief Method get_hasInputFocus, addr 0x3fc86bc, size 0x50, virtual false, abstract: false, final false
  static inline bool get_hasInputFocus();

  /// @brief Method get_hasVrFocus, addr 0x3fc857c, size 0xd8, virtual false, abstract: false, final false
  static inline bool get_hasVrFocus();

  /// @brief Method get_headPoseRelativeOffsetRotation, addr 0x3fc8a8c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_headPoseRelativeOffsetRotation();

  /// @brief Method get_headPoseRelativeOffsetTranslation, addr 0x3fc8b80, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_headPoseRelativeOffsetTranslation();

  /// @brief Method get_instance, addr 0x3fc55b8, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::OVRManager> get_instance();

  /// @brief Method get_isHmdPresent, addr 0x3fc839c, size 0xd8, virtual false, abstract: false, final false
  static inline bool get_isHmdPresent();

  /// @brief Method get_isPowerSavingActive, addr 0x3fc97e8, size 0x8c, virtual false, abstract: false, final false
  static inline bool get_isPowerSavingActive();

  /// @brief Method get_isSupportedPlatform, addr 0x3fcb00c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isSupportedPlatform();

  /// @brief Method get_isUserPresent, addr 0x3fcb020, size 0xd8, virtual false, abstract: false, final false
  inline bool get_isUserPresent();

  /// @brief Method get_monoscopic, addr 0x3fc8828, size 0x90, virtual false, abstract: false, final false
  inline bool get_monoscopic();

  /// @brief Method get_nativeColorGamut, addr 0x3fc8a34, size 0x50, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRManager_ColorSpace get_nativeColorGamut();

  /// @brief Method get_pluginVersion, addr 0x3fcb268, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Version* get_pluginVersion();

  /// @brief Method get_profile, addr 0x3fc593c, size 0xf8, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::OVRProfile> get_profile();

  /// @brief Method get_runtimeSettings, addr 0x3fc5888, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> get_runtimeSettings();

  /// @brief Method get_sdkVersion, addr 0x3fcb2b8, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Version* get_sdkVersion();

  /// @brief Method get_sharpenType, addr 0x3fc8954, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_LayerSharpenType get_sharpenType();

  /// @brief Method get_suggestedCpuPerfLevel, addr 0x3fc9378, size 0x8c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRManager_ProcessorPerformanceLevel get_suggestedCpuPerfLevel();

  /// @brief Method get_suggestedGpuPerfLevel, addr 0x3fc9494, size 0x8c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRManager_ProcessorPerformanceLevel get_suggestedGpuPerfLevel();

  /// @brief Method get_systemHeadsetType, addr 0x3fca150, size 0x50, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRManager_SystemHeadsetType get_systemHeadsetType();

  /// @brief Method get_tiledMultiResLevel, addr 0x3fc9fa8, size 0x50, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRManager_TiledMultiResLevel get_tiledMultiResLevel();

  /// @brief Method get_tiledMultiResSupported, addr 0x3fc9f58, size 0x50, virtual false, abstract: false, final false
  static inline bool get_tiledMultiResSupported();

  /// @brief Method get_tracker, addr 0x3fc5720, size 0x58, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTracker* get_tracker();

  /// @brief Method get_trackingOriginType, addr 0x3fcaec0, size 0x90, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRManager_TrackingOrigin get_trackingOriginType();

  /// @brief Method get_useDynamicFixedFoveatedRendering, addr 0x3fc9eb0, size 0x50, virtual false, abstract: false, final false
  static inline bool get_useDynamicFixedFoveatedRendering();

  /// @brief Method get_useDynamicFoveatedRendering, addr 0x3fc9e08, size 0x50, virtual false, abstract: false, final false
  static inline bool get_useDynamicFoveatedRendering();

  /// @brief Method get_utilitiesVersion, addr 0x3fcb210, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Version* get_utilitiesVersion();

  /// @brief Method get_volumeLevel, addr 0x3fc92ec, size 0x8c, virtual false, abstract: false, final false
  static inline float_t get_volumeLevel();

  /// @brief Method get_vsyncCount, addr 0x3fc902c, size 0x8c, virtual false, abstract: false, final false
  inline int32_t get_vsyncCount();

  /// @brief Method get_xrApi, addr 0x3fc8f3c, size 0x50, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRManager_XrApi get_xrApi();

  /// @brief Method get_xrInstance, addr 0x3fc8f8c, size 0x50, virtual false, abstract: false, final false
  inline uint64_t get_xrInstance();

  /// @brief Method get_xrSession, addr 0x3fc8fdc, size 0x50, virtual false, abstract: false, final false
  inline uint64_t get_xrSession();

  /// @brief Convert to "::GlobalNamespace::OVRMixedRealityCaptureConfiguration"
  constexpr ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* i___GlobalNamespace__OVRMixedRealityCaptureConfiguration() noexcept;

  /// @brief Method remove_AudioInChanged, addr 0x3fc6a88, size 0xdc, virtual false, abstract: false, final false
  static inline void remove_AudioInChanged(::System::Action* value);

  /// @brief Method remove_AudioOutChanged, addr 0x3fc68d0, size 0xdc, virtual false, abstract: false, final false
  static inline void remove_AudioOutChanged(::System::Action* value);

  /// @brief Method remove_DisplayRefreshRateChanged, addr 0x3fc6fc8, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_DisplayRefreshRateChanged(::System::Action_2<float_t, float_t>* value);

  /// @brief Method remove_HMDAcquired, addr 0x3fc5b10, size 0xdc, virtual false, abstract: false, final false
  static inline void remove_HMDAcquired(::System::Action* value);

  /// @brief Method remove_HMDLost, addr 0x3fc5cc8, size 0xdc, virtual false, abstract: false, final false
  static inline void remove_HMDLost(::System::Action* value);

  /// @brief Method remove_HMDMounted, addr 0x3fc5e80, size 0xdc, virtual false, abstract: false, final false
  static inline void remove_HMDMounted(::System::Action* value);

  /// @brief Method remove_HMDUnmounted, addr 0x3fc6038, size 0xdc, virtual false, abstract: false, final false
  static inline void remove_HMDUnmounted(::System::Action* value);

  /// @brief Method remove_HSWDismissed, addr 0x3fc82c0, size 0xdc, virtual false, abstract: false, final false
  static inline void remove_HSWDismissed(::System::Action* value);

  /// @brief Method remove_InputFocusAcquired, addr 0x3fc6560, size 0xdc, virtual false, abstract: false, final false
  static inline void remove_InputFocusAcquired(::System::Action* value);

  /// @brief Method remove_InputFocusLost, addr 0x3fc6718, size 0xdc, virtual false, abstract: false, final false
  static inline void remove_InputFocusLost(::System::Action* value);

  /// @brief Method remove_SceneCaptureComplete, addr 0x3fc80f0, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_SceneCaptureComplete(::System::Action_2<uint64_t, bool>* value);

  /// @brief Method remove_ShareSpacesComplete, addr 0x3fc7d20, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_ShareSpacesComplete(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  /// @brief Method remove_SpaceEraseComplete, addr 0x3fc7b38, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_SpaceEraseComplete(::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>* value);

  /// @brief Method remove_SpaceListSaveComplete, addr 0x3fc7f08, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_SpaceListSaveComplete(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  /// @brief Method remove_SpaceQueryComplete, addr 0x3fc7768, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_SpaceQueryComplete(::System::Action_2<uint64_t, bool>* value);

  /// @brief Method remove_SpaceQueryResults, addr 0x3fc7580, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_SpaceQueryResults(::System::Action_1<uint64_t>* value);

  /// @brief Method remove_SpaceSaveComplete, addr 0x3fc7950, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_SpaceSaveComplete(::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>* value);

  /// @brief Method remove_SpaceSetComponentStatusComplete, addr 0x3fc7398, size 0xf4, virtual false, abstract: false, final false
  static inline void
  remove_SpaceSetComponentStatusComplete(::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>* value);

  /// @brief Method remove_SpatialAnchorCreateComplete, addr 0x3fc71b0, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_SpatialAnchorCreateComplete(::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>* value);

  /// @brief Method remove_TrackingAcquired, addr 0x3fc6c40, size 0xdc, virtual false, abstract: false, final false
  static inline void remove_TrackingAcquired(::System::Action* value);

  /// @brief Method remove_TrackingLost, addr 0x3fc6df8, size 0xdc, virtual false, abstract: false, final false
  static inline void remove_TrackingLost(::System::Action* value);

  /// @brief Method remove_VrFocusAcquired, addr 0x3fc61f0, size 0xdc, virtual false, abstract: false, final false
  static inline void remove_VrFocusAcquired(::System::Action* value);

  /// @brief Method remove_VrFocusLost, addr 0x3fc63a8, size 0xdc, virtual false, abstract: false, final false
  static inline void remove_VrFocusLost(::System::Action* value);

  static inline void setStaticF_AudioInChanged(::System::Action* value);

  static inline void setStaticF_AudioOutChanged(::System::Action* value);

  static inline void setStaticF_DisplayRefreshRateChanged(::System::Action_2<float_t, float_t>* value);

  static inline void setStaticF_HMDAcquired(::System::Action* value);

  static inline void setStaticF_HMDLost(::System::Action* value);

  static inline void setStaticF_HMDMounted(::System::Action* value);

  static inline void setStaticF_HMDUnmounted(::System::Action* value);

  static inline void setStaticF_HSWDismissed(::System::Action* value);

  static inline void setStaticF_InputFocusAcquired(::System::Action* value);

  static inline void setStaticF_InputFocusLost(::System::Action* value);

  static inline void setStaticF_OCULUS_UNITY_NAME_STR(::StringW value);

  static inline void setStaticF_OPENVR_UNITY_NAME_STR(::StringW value);

  static inline void setStaticF_OVRManagerinitialized(bool value);

  static inline void setStaticF_OpenVRTouchPositionOffsetLeft(::UnityEngine::Vector3 value);

  static inline void setStaticF_OpenVRTouchPositionOffsetRight(::UnityEngine::Vector3 value);

  static inline void setStaticF_OpenVRTouchRotationOffsetEulerLeft(::UnityEngine::Vector3 value);

  static inline void setStaticF_OpenVRTouchRotationOffsetEulerRight(::UnityEngine::Vector3 value);

  static inline void setStaticF_SceneCaptureComplete(::System::Action_2<uint64_t, bool>* value);

  static inline void setStaticF_ShareSpacesComplete(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  static inline void setStaticF_SpaceEraseComplete(::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>* value);

  static inline void setStaticF_SpaceListSaveComplete(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  static inline void setStaticF_SpaceQueryComplete(::System::Action_2<uint64_t, bool>* value);

  static inline void setStaticF_SpaceQueryResults(::System::Action_1<uint64_t>* value);

  static inline void setStaticF_SpaceSaveComplete(::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>* value);

  static inline void
  setStaticF_SpaceSetComponentStatusComplete(::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>* value);

  static inline void setStaticF_SpatialAnchorCreateComplete(::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>* value);

  static inline void setStaticF_TrackingAcquired(::System::Action* value);

  static inline void setStaticF_TrackingLost(::System::Action* value);

  static inline void setStaticF_UnityAlphaOrBetaVersionWarningMessage(::StringW value);

  static inline void setStaticF_VrFocusAcquired(::System::Action* value);

  static inline void setStaticF_VrFocusLost(::System::Action* value);

  static inline void setStaticF__boundary_k__BackingField(::GlobalNamespace::OVRBoundary* value);

  static inline void setStaticF__display_k__BackingField(::GlobalNamespace::OVRDisplay* value);

  static inline void setStaticF__hadInputFocus(bool value);

  static inline void setStaticF__hadVrFocus(bool value);

  static inline void setStaticF__hasVrFocus(bool value);

  static inline void setStaticF__hasVrFocusCached(bool value);

  static inline void setStaticF__instance_k__BackingField(::UnityW<::GlobalNamespace::OVRManager> value);

  static inline void setStaticF__isHmdPresent(bool value);

  static inline void setStaticF__isHmdPresentCached(bool value);

  static inline void setStaticF__isUserPresent(bool value);

  static inline void setStaticF__isUserPresentCached(bool value);

  static inline void setStaticF__passthroughCapabilities(::GlobalNamespace::OVRManager_PassthroughCapabilities* value);

  static inline void setStaticF__passthroughInitializationState(::GlobalNamespace::OVRManager_PassthroughInitializationState value);

  static inline void setStaticF__profile(::UnityW<::GlobalNamespace::OVRProfile> value);

  static inline void setStaticF__runtimeSettings_k__BackingField(::UnityW<::GlobalNamespace::OVRRuntimeSettings> value);

  static inline void setStaticF__tracker_k__BackingField(::GlobalNamespace::OVRTracker* value);

  static inline void setStaticF__wasHmdPresent(bool value);

  static inline void setStaticF__wasUserPresent(bool value);

  static inline void setStaticF_eventDataBuffer(::GlobalNamespace::OVRPlugin_EventDataBuffer value);

  static inline void setStaticF_lastFoundMainCamera(::System::WeakReference_1<::UnityW<::UnityEngine::Camera>>* value);

  static inline void setStaticF_loadedXRDevice(::GlobalNamespace::OVRManager_XRDevice value);

  static inline void setStaticF_m_AppSpaceTransform(::UnityW<::UnityEngine::Transform> value);

  static inline void setStaticF_m_CachedDepthTextureMode(::UnityEngine::DepthTextureMode value);

  static inline void setStaticF_m_SpaceWarpEnabled(bool value);

  static inline void setStaticF_multipleMainCameraWarningPresented(bool value);

  static inline void setStaticF_prevAudioInId(::StringW value);

  static inline void setStaticF_prevAudioInIdIsCached(bool value);

  static inline void setStaticF_prevAudioOutId(::StringW value);

  static inline void setStaticF_prevAudioOutIdIsCached(bool value);

  static inline void setStaticF_s_displaySubsystemDescriptors(::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* value);

  static inline void setStaticF_s_displaySubsystems(::System::Collections::Generic::List_1<Il2CppObject*>* value);

  static inline void setStaticF_s_inputSubsystems(::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* value);

  static inline void setStaticF_staticMixedRealityCaptureInitialized(bool value);

  static inline void setStaticF_staticMrcSettings(::UnityW<::GlobalNamespace::OVRMixedRealityCaptureSettings> value);

  static inline void setStaticF_staticPrevEnableMixedRealityCapture(bool value);

  static inline void setStaticF_suppressDisableMixedRealityBecauseOfNoMainCameraWarning(bool value);

  static inline void setStaticF_suppressUnableToFindMainCameraMessage(bool value);

  static inline void setStaticF_wasPositionTracked(bool value);

  /// @brief Method set_boundary, addr 0x3fc582c, size 0x5c, virtual false, abstract: false, final false
  static inline void set_boundary(::GlobalNamespace::OVRBoundary* value);

  /// @brief Method set_chromatic, addr 0x3fc8798, size 0x90, virtual false, abstract: false, final false
  inline void set_chromatic(bool value);

  /// @brief Method set_colorGamut, addr 0x3fc89cc, size 0x68, virtual false, abstract: false, final false
  inline void set_colorGamut(::GlobalNamespace::OVRManager_ColorSpace value);

  /// @brief Method set_cpuLevel, addr 0x3fc963c, size 0x90, virtual false, abstract: false, final false
  static inline void set_cpuLevel(int32_t value);

  /// @brief Method set_display, addr 0x3fc56c4, size 0x5c, virtual false, abstract: false, final false
  static inline void set_display(::GlobalNamespace::OVRDisplay* value);

  /// @brief Method set_eyeFovPremultipliedAlphaModeEnabled, addr 0x3fc8cf4, size 0x58, virtual false, abstract: false, final false
  static inline void set_eyeFovPremultipliedAlphaModeEnabled(bool value);

  /// @brief Method set_eyeTextureFormat, addr 0x3fc98c4, size 0x58, virtual false, abstract: false, final false
  static inline void set_eyeTextureFormat(::GlobalNamespace::OVRManager_EyeTextureFormat value);

  /// @brief Method set_eyeTrackedFoveatedRenderingEnabled, addr 0x3fc99bc, size 0x1d8, virtual false, abstract: false, final false
  static inline void set_eyeTrackedFoveatedRenderingEnabled(bool value);

  /// @brief Method set_fixedFoveatedRenderingLevel, addr 0x3fc9db0, size 0x58, virtual false, abstract: false, final false
  static inline void set_fixedFoveatedRenderingLevel(::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel value);

  /// @brief Method set_foveatedRenderingLevel, addr 0x3fc9cb8, size 0x58, virtual false, abstract: false, final false
  static inline void set_foveatedRenderingLevel(::GlobalNamespace::OVRManager_FoveatedRenderingLevel value);

  /// @brief Method set_gpuLevel, addr 0x3fc9758, size 0x90, virtual false, abstract: false, final false
  static inline void set_gpuLevel(int32_t value);

  /// @brief Method set_hasVrFocus, addr 0x3fc8654, size 0x68, virtual false, abstract: false, final false
  static inline void set_hasVrFocus(bool value);

  /// @brief Method set_headPoseRelativeOffsetRotation, addr 0x3fc8a98, size 0xe8, virtual false, abstract: false, final false
  inline void set_headPoseRelativeOffsetRotation(::UnityEngine::Vector3 value);

  /// @brief Method set_headPoseRelativeOffsetTranslation, addr 0x3fc8b8c, size 0x118, virtual false, abstract: false, final false
  inline void set_headPoseRelativeOffsetTranslation(::UnityEngine::Vector3 value);

  /// @brief Method set_instance, addr 0x3fc5610, size 0x5c, virtual false, abstract: false, final false
  static inline void set_instance(::GlobalNamespace::OVRManager* value);

  /// @brief Method set_isHmdPresent, addr 0x3fc8474, size 0x68, virtual false, abstract: false, final false
  static inline void set_isHmdPresent(bool value);

  /// @brief Method set_isSupportedPlatform, addr 0x3fcb014, size 0xc, virtual false, abstract: false, final false
  inline void set_isSupportedPlatform(bool value);

  /// @brief Method set_isUserPresent, addr 0x3fcb0f8, size 0x68, virtual false, abstract: false, final false
  inline void set_isUserPresent(bool value);

  /// @brief Method set_monoscopic, addr 0x3fc88b8, size 0x9c, virtual false, abstract: false, final false
  inline void set_monoscopic(bool value);

  /// @brief Method set_runtimeSettings, addr 0x3fc58e0, size 0x5c, virtual false, abstract: false, final false
  static inline void set_runtimeSettings(::GlobalNamespace::OVRRuntimeSettings* value);

  /// @brief Method set_sharpenType, addr 0x3fc895c, size 0x68, virtual false, abstract: false, final false
  inline void set_sharpenType(::GlobalNamespace::OVRPlugin_LayerSharpenType value);

  /// @brief Method set_suggestedCpuPerfLevel, addr 0x3fc9404, size 0x90, virtual false, abstract: false, final false
  static inline void set_suggestedCpuPerfLevel(::GlobalNamespace::OVRManager_ProcessorPerformanceLevel value);

  /// @brief Method set_suggestedGpuPerfLevel, addr 0x3fc9520, size 0x90, virtual false, abstract: false, final false
  static inline void set_suggestedGpuPerfLevel(::GlobalNamespace::OVRManager_ProcessorPerformanceLevel value);

  /// @brief Method set_tiledMultiResLevel, addr 0x3fc9ff8, size 0x58, virtual false, abstract: false, final false
  static inline void set_tiledMultiResLevel(::GlobalNamespace::OVRManager_TiledMultiResLevel value);

  /// @brief Method set_tracker, addr 0x3fc5778, size 0x5c, virtual false, abstract: false, final false
  static inline void set_tracker(::GlobalNamespace::OVRTracker* value);

  /// @brief Method set_trackingOriginType, addr 0x3fcaf50, size 0x9c, virtual false, abstract: false, final false
  inline void set_trackingOriginType(::GlobalNamespace::OVRManager_TrackingOrigin value);

  /// @brief Method set_useDynamicFixedFoveatedRendering, addr 0x3fc9f00, size 0x58, virtual false, abstract: false, final false
  static inline void set_useDynamicFixedFoveatedRendering(bool value);

  /// @brief Method set_useDynamicFoveatedRendering, addr 0x3fc9e58, size 0x58, virtual false, abstract: false, final false
  static inline void set_useDynamicFoveatedRendering(bool value);

  /// @brief Method set_vsyncCount, addr 0x3fc90b8, size 0x90, virtual false, abstract: false, final false
  inline void set_vsyncCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRManager(OVRManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRManager(OVRManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7964 };

  /// @brief Field _pixelStepPerFrame offset 0xffffffff size 0x4
  static constexpr int32_t _pixelStepPerFrame{ static_cast<int32_t>(0x20) };

  /// @brief Field disabledCameras, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Camera>>* ___disabledCameras;

  /// @brief Field prevTimeScale, offset: 0x28, size: 0x4, def value: None
  float_t ___prevTimeScale;

  /// @brief Field useRecommendedMSAALevel, offset: 0x2c, size: 0x1, def value: None
  bool ___useRecommendedMSAALevel;

  /// @brief Field _monoscopic, offset: 0x2d, size: 0x1, def value: None
  bool ____monoscopic;

  /// @brief Field _sharpenType, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_LayerSharpenType ____sharpenType;

  /// @brief Field _colorGamut, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::OVRManager_ColorSpace ____colorGamut;

  /// @brief Field enableDynamicResolution, offset: 0x38, size: 0x1, def value: None
  bool ___enableDynamicResolution;

  /// @brief Field minDynamicResolutionScale, offset: 0x3c, size: 0x4, def value: None
  float_t ___minDynamicResolutionScale;

  /// @brief Field maxDynamicResolutionScale, offset: 0x40, size: 0x4, def value: None
  float_t ___maxDynamicResolutionScale;

  /// @brief Field minRenderScale, offset: 0x44, size: 0x4, def value: None
  float_t ___minRenderScale;

  /// @brief Field maxRenderScale, offset: 0x48, size: 0x4, def value: None
  float_t ___maxRenderScale;

  /// @brief Field _headPoseRelativeOffsetRotation, offset: 0x4c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____headPoseRelativeOffsetRotation;

  /// @brief Field _headPoseRelativeOffsetTranslation, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____headPoseRelativeOffsetTranslation;

  /// @brief Field profilerTcpPort, offset: 0x64, size: 0x4, def value: None
  int32_t ___profilerTcpPort;

  /// @brief Field expandMixedRealityCapturePropertySheet, offset: 0x68, size: 0x1, def value: None
  bool ___expandMixedRealityCapturePropertySheet;

  /// @brief Field enableMixedReality, offset: 0x69, size: 0x1, def value: None
  bool ___enableMixedReality;

  /// @brief Field compositionMethod, offset: 0x6c, size: 0x4, def value: None
  ::GlobalNamespace::OVRManager_CompositionMethod ___compositionMethod;

  /// @brief Field extraHiddenLayers, offset: 0x70, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___extraHiddenLayers;

  /// @brief Field extraVisibleLayers, offset: 0x74, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___extraVisibleLayers;

  /// @brief Field dynamicCullingMask, offset: 0x78, size: 0x1, def value: None
  bool ___dynamicCullingMask;

  /// @brief Field externalCompositionBackdropColorRift, offset: 0x7c, size: 0x10, def value: None
  ::UnityEngine::Color ___externalCompositionBackdropColorRift;

  /// @brief Field externalCompositionBackdropColorQuest, offset: 0x8c, size: 0x10, def value: None
  ::UnityEngine::Color ___externalCompositionBackdropColorQuest;

  /// @brief Field capturingCameraDevice, offset: 0x9c, size: 0x4, def value: None
  ::GlobalNamespace::OVRManager_CameraDevice ___capturingCameraDevice;

  /// @brief Field flipCameraFrameHorizontally, offset: 0xa0, size: 0x1, def value: None
  bool ___flipCameraFrameHorizontally;

  /// @brief Field flipCameraFrameVertically, offset: 0xa1, size: 0x1, def value: None
  bool ___flipCameraFrameVertically;

  /// @brief Field handPoseStateLatency, offset: 0xa4, size: 0x4, def value: None
  float_t ___handPoseStateLatency;

  /// @brief Field sandwichCompositionRenderLatency, offset: 0xa8, size: 0x4, def value: None
  float_t ___sandwichCompositionRenderLatency;

  /// @brief Field sandwichCompositionBufferedFrames, offset: 0xac, size: 0x4, def value: None
  int32_t ___sandwichCompositionBufferedFrames;

  /// @brief Field chromaKeyColor, offset: 0xb0, size: 0x10, def value: None
  ::UnityEngine::Color ___chromaKeyColor;

  /// @brief Field chromaKeySimilarity, offset: 0xc0, size: 0x4, def value: None
  float_t ___chromaKeySimilarity;

  /// @brief Field chromaKeySmoothRange, offset: 0xc4, size: 0x4, def value: None
  float_t ___chromaKeySmoothRange;

  /// @brief Field chromaKeySpillRange, offset: 0xc8, size: 0x4, def value: None
  float_t ___chromaKeySpillRange;

  /// @brief Field useDynamicLighting, offset: 0xcc, size: 0x1, def value: None
  bool ___useDynamicLighting;

  /// @brief Field depthQuality, offset: 0xd0, size: 0x4, def value: None
  ::GlobalNamespace::OVRManager_DepthQuality ___depthQuality;

  /// @brief Field dynamicLightingSmoothFactor, offset: 0xd4, size: 0x4, def value: None
  float_t ___dynamicLightingSmoothFactor;

  /// @brief Field dynamicLightingDepthVariationClampingValue, offset: 0xd8, size: 0x4, def value: None
  float_t ___dynamicLightingDepthVariationClampingValue;

  /// @brief Field virtualGreenScreenType, offset: 0xdc, size: 0x4, def value: None
  ::GlobalNamespace::OVRManager_VirtualGreenScreenType ___virtualGreenScreenType;

  /// @brief Field virtualGreenScreenTopY, offset: 0xe0, size: 0x4, def value: None
  float_t ___virtualGreenScreenTopY;

  /// @brief Field virtualGreenScreenBottomY, offset: 0xe4, size: 0x4, def value: None
  float_t ___virtualGreenScreenBottomY;

  /// @brief Field virtualGreenScreenApplyDepthCulling, offset: 0xe8, size: 0x1, def value: None
  bool ___virtualGreenScreenApplyDepthCulling;

  /// @brief Field virtualGreenScreenDepthTolerance, offset: 0xec, size: 0x4, def value: None
  float_t ___virtualGreenScreenDepthTolerance;

  /// @brief Field mrcActivationMode, offset: 0xf0, size: 0x4, def value: None
  ::GlobalNamespace::OVRManager_MrcActivationMode ___mrcActivationMode;

  /// @brief Field instantiateMixedRealityCameraGameObject, offset: 0xf8, size: 0x8, def value: None
  ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* ___instantiateMixedRealityCameraGameObject;

  /// @brief Field launchMultimodalHandsControllersOnStartup, offset: 0x100, size: 0x1, def value: None
  bool ___launchMultimodalHandsControllersOnStartup;

  /// @brief Field isInsightPassthroughEnabled, offset: 0x101, size: 0x1, def value: None
  bool ___isInsightPassthroughEnabled;

  /// @brief Field requestBodyTrackingPermissionOnStartup, offset: 0x102, size: 0x1, def value: None
  bool ___requestBodyTrackingPermissionOnStartup;

  /// @brief Field requestFaceTrackingPermissionOnStartup, offset: 0x103, size: 0x1, def value: None
  bool ___requestFaceTrackingPermissionOnStartup;

  /// @brief Field requestEyeTrackingPermissionOnStartup, offset: 0x104, size: 0x1, def value: None
  bool ___requestEyeTrackingPermissionOnStartup;

  /// @brief Field requestScenePermissionOnStartup, offset: 0x105, size: 0x1, def value: None
  bool ___requestScenePermissionOnStartup;

  /// @brief Field _localDimming, offset: 0x106, size: 0x1, def value: None
  bool ____localDimming;

  /// @brief Field _trackingOriginType, offset: 0x108, size: 0x4, def value: None
  ::GlobalNamespace::OVRManager_TrackingOrigin ____trackingOriginType;

  /// @brief Field usePositionTracking, offset: 0x10c, size: 0x1, def value: None
  bool ___usePositionTracking;

  /// @brief Field useRotationTracking, offset: 0x10d, size: 0x1, def value: None
  bool ___useRotationTracking;

  /// @brief Field useIPDInPositionTracking, offset: 0x10e, size: 0x1, def value: None
  bool ___useIPDInPositionTracking;

  /// @brief Field resetTrackerOnLoad, offset: 0x10f, size: 0x1, def value: None
  bool ___resetTrackerOnLoad;

  /// @brief Field AllowRecenter, offset: 0x110, size: 0x1, def value: None
  bool ___AllowRecenter;

  /// @brief Field LateControllerUpdate, offset: 0x111, size: 0x1, def value: None
  bool ___LateControllerUpdate;

  /// @brief Field LateLatching, offset: 0x112, size: 0x1, def value: None
  bool ___LateLatching;

  /// @brief Field _readOnlyControllerDrivenHandPosesType, offset: 0x114, size: 0x4, def value: None
  ::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType ____readOnlyControllerDrivenHandPosesType;

  /// @brief Field controllerDrivenHandPosesType, offset: 0x118, size: 0x4, def value: None
  ::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType ___controllerDrivenHandPosesType;

  /// @brief Field <isSupportedPlatform>k__BackingField, offset: 0x11c, size: 0x1, def value: None
  bool ____isSupportedPlatform_k__BackingField;

  /// @brief Field eventListeners, offset: 0x120, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRManager_EventListener*>* ___eventListeners;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager, ___disabledCameras) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___prevTimeScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___useRecommendedMSAALevel) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ____monoscopic) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ____sharpenType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ____colorGamut) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___enableDynamicResolution) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___minDynamicResolutionScale) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___maxDynamicResolutionScale) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___minRenderScale) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___maxRenderScale) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ____headPoseRelativeOffsetRotation) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ____headPoseRelativeOffsetTranslation) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___profilerTcpPort) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___expandMixedRealityCapturePropertySheet) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___enableMixedReality) == 0x69, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___compositionMethod) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___extraHiddenLayers) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___extraVisibleLayers) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___dynamicCullingMask) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___externalCompositionBackdropColorRift) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___externalCompositionBackdropColorQuest) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___capturingCameraDevice) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___flipCameraFrameHorizontally) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___flipCameraFrameVertically) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___handPoseStateLatency) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___sandwichCompositionRenderLatency) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___sandwichCompositionBufferedFrames) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___chromaKeyColor) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___chromaKeySimilarity) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___chromaKeySmoothRange) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___chromaKeySpillRange) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___useDynamicLighting) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___depthQuality) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___dynamicLightingSmoothFactor) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___dynamicLightingDepthVariationClampingValue) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___virtualGreenScreenType) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___virtualGreenScreenTopY) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___virtualGreenScreenBottomY) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___virtualGreenScreenApplyDepthCulling) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___virtualGreenScreenDepthTolerance) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___mrcActivationMode) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___instantiateMixedRealityCameraGameObject) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___launchMultimodalHandsControllersOnStartup) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___isInsightPassthroughEnabled) == 0x101, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___requestBodyTrackingPermissionOnStartup) == 0x102, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___requestFaceTrackingPermissionOnStartup) == 0x103, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___requestEyeTrackingPermissionOnStartup) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___requestScenePermissionOnStartup) == 0x105, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ____localDimming) == 0x106, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ____trackingOriginType) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___usePositionTracking) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___useRotationTracking) == 0x10d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___useIPDInPositionTracking) == 0x10e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___resetTrackerOnLoad) == 0x10f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___AllowRecenter) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___LateControllerUpdate) == 0x111, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___LateLatching) == 0x112, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ____readOnlyControllerDrivenHandPosesType) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___controllerDrivenHandPosesType) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ____isSupportedPlatform_k__BackingField) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRManager, ___eventListeners) == 0x120, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRManager, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_CameraDevice, "", "OVRManager/CameraDevice");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_ColorSpace, "", "OVRManager/ColorSpace");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_CompositionMethod, "", "OVRManager/CompositionMethod");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType, "", "OVRManager/ControllerDrivenHandPosesType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_DepthQuality, "", "OVRManager/DepthQuality");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_EyeTextureFormat, "", "OVRManager/EyeTextureFormat");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel, "", "OVRManager/FixedFoveatedRenderingLevel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_FoveatedRenderingLevel, "", "OVRManager/FoveatedRenderingLevel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_MrcActivationMode, "", "OVRManager/MrcActivationMode");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_MrcCameraType, "", "OVRManager/MrcCameraType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_PassthroughInitializationState, "", "OVRManager/PassthroughInitializationState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_ProcessorPerformanceLevel, "", "OVRManager/ProcessorPerformanceLevel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_SystemHeadsetType, "", "OVRManager/SystemHeadsetType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_TiledMultiResLevel, "", "OVRManager/TiledMultiResLevel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_TrackingOrigin, "", "OVRManager/TrackingOrigin");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_VirtualGreenScreenType, "", "OVRManager/VirtualGreenScreenType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_XRDevice, "", "OVRManager/XRDevice");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_XrApi, "", "OVRManager/XrApi");
NEED_NO_BOX(::GlobalNamespace::OVRManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager*, "", "OVRManager");
NEED_NO_BOX(::GlobalNamespace::OVRManager_EventListener);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_EventListener*, "", "OVRManager/EventListener");
NEED_NO_BOX(::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*, "", "OVRManager/InstantiateMrcCameraDelegate");
NEED_NO_BOX(::GlobalNamespace::OVRManager_PassthroughCapabilities);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_PassthroughCapabilities*, "", "OVRManager/PassthroughCapabilities");
NEED_NO_BOX(::GlobalNamespace::OVRManager___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager___c*, "", "OVRManager/<>c");
