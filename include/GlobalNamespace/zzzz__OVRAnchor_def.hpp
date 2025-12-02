#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRObjectPool_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRAnchor)
namespace GlobalNamespace {
struct AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3;
}
namespace GlobalNamespace {
struct OVRAnchor_ConfigureTrackerResult;
}
namespace GlobalNamespace {
struct OVRAnchor_DeferredKey;
}
namespace GlobalNamespace {
struct OVRAnchor_DeferredValue;
}
namespace GlobalNamespace {
struct OVRAnchor_EraseResult;
}
namespace GlobalNamespace {
struct OVRAnchor_FetchOptions;
}
namespace GlobalNamespace {
struct OVRAnchor_FetchResult;
}
namespace GlobalNamespace {
struct OVRAnchor_FetchTaskData;
}
namespace GlobalNamespace {
struct OVRAnchor_FilterUnion;
}
namespace GlobalNamespace {
struct OVRAnchor_SaveResult;
}
namespace GlobalNamespace {
struct OVRAnchor_ShareResult;
}
namespace GlobalNamespace {
class OVRAnchor_Telemetry;
}
namespace GlobalNamespace {
struct OVRAnchor_TrackableType;
}
namespace GlobalNamespace {
struct OVRAnchor_TrackerConfiguration;
}
namespace GlobalNamespace {
class OVRAnchor_Tracker;
}
namespace GlobalNamespace {
struct OVRAnchor__FetchAnchorsAsync_d__56;
}
namespace GlobalNamespace {
struct OVRAnchor__FetchSharedAnchorsAsync_d__10;
}
namespace GlobalNamespace {
struct OVRAnchor__FetchSharedAnchorsAsync_d__9;
}
namespace GlobalNamespace {
struct OVRAnchor__FetchTrackablesAsync_d__66;
}
namespace GlobalNamespace {
struct OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d;
}
namespace GlobalNamespace {
class OVRAnchor___c__DisplayClass54_0;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceDiscoveryCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceDiscoveryResultsData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceEraseCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceListSaveResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceQueryCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceSetComponentStatusCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpacesEraseResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpacesSaveResultData;
}
namespace GlobalNamespace {
template <typename T> struct OVRNativeList_1;
}
namespace GlobalNamespace {
struct OVRPlugin_DynamicObjectClass;
}
namespace GlobalNamespace {
struct OVRPlugin_Result;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceComponentType;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceQueryInfo2;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceStorageLocation;
}
namespace GlobalNamespace {
template <typename TStatus> struct OVRResult_1;
}
namespace GlobalNamespace {
template <typename TValue, typename TStatus> struct OVRResult_2;
}
namespace GlobalNamespace {
struct OVRSpaceUser;
}
namespace GlobalNamespace {
struct OVRSpace_StorageLocation;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace GlobalNamespace {
struct OVRTelemetryMarker;
}
namespace GlobalNamespace {
class Telemetry_OVRAnchor_Annotation;
}
namespace GlobalNamespace {
struct Telemetry_OVRAnchor_Key;
}
namespace GlobalNamespace {
struct Telemetry_OVRAnchor_MarkerId;
}
namespace GlobalNamespace {
struct Tracker_OVRAnchor_AsyncLock;
}
namespace GlobalNamespace {
struct Tracker_OVRAnchor__ConfigureAsync_d__7;
}
namespace GlobalNamespace {
struct Tracker_OVRAnchor__Dispose_d__10;
}
namespace GlobalNamespace {
struct Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5;
}
namespace GlobalNamespace {
struct Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d;
}
namespace GlobalNamespace {
struct __c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
struct Guid;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
class Type;
}
namespace Unity::Collections {
struct Allocator;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRAnchor_ConfigureTrackerResult;
}
namespace GlobalNamespace {
struct OVRAnchor_EraseResult;
}
namespace GlobalNamespace {
struct OVRAnchor_FetchResult;
}
namespace GlobalNamespace {
struct OVRAnchor_SaveResult;
}
namespace GlobalNamespace {
struct OVRAnchor_ShareResult;
}
namespace GlobalNamespace {
struct OVRAnchor_TrackableType;
}
namespace GlobalNamespace {
struct Telemetry_OVRAnchor_MarkerId;
}
namespace GlobalNamespace {
class OVRAnchor_Telemetry;
}
namespace GlobalNamespace {
class OVRAnchor_Tracker;
}
namespace GlobalNamespace {
class OVRAnchor___c__DisplayClass54_0;
}
namespace GlobalNamespace {
class Telemetry_OVRAnchor_Annotation;
}
namespace GlobalNamespace {
struct AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
struct OVRAnchor_DeferredKey;
}
namespace GlobalNamespace {
struct OVRAnchor_DeferredValue;
}
namespace GlobalNamespace {
struct OVRAnchor_FetchOptions;
}
namespace GlobalNamespace {
struct OVRAnchor_FetchTaskData;
}
namespace GlobalNamespace {
struct OVRAnchor_FilterUnion;
}
namespace GlobalNamespace {
struct OVRAnchor_TrackerConfiguration;
}
namespace GlobalNamespace {
struct OVRAnchor__FetchAnchorsAsync_d__56;
}
namespace GlobalNamespace {
struct OVRAnchor__FetchSharedAnchorsAsync_d__10;
}
namespace GlobalNamespace {
struct OVRAnchor__FetchSharedAnchorsAsync_d__9;
}
namespace GlobalNamespace {
struct OVRAnchor__FetchTrackablesAsync_d__66;
}
namespace GlobalNamespace {
struct OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d;
}
namespace GlobalNamespace {
struct Telemetry_OVRAnchor_Key;
}
namespace GlobalNamespace {
struct Tracker_OVRAnchor_AsyncLock;
}
namespace GlobalNamespace {
struct Tracker_OVRAnchor__ConfigureAsync_d__7;
}
namespace GlobalNamespace {
struct Tracker_OVRAnchor__Dispose_d__10;
}
namespace GlobalNamespace {
struct Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5;
}
namespace GlobalNamespace {
struct Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d;
}
namespace GlobalNamespace {
struct __c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRAnchor_ConfigureTrackerResult);
MARK_VAL_T(::GlobalNamespace::OVRAnchor_EraseResult);
MARK_VAL_T(::GlobalNamespace::OVRAnchor_FetchResult);
MARK_VAL_T(::GlobalNamespace::OVRAnchor_SaveResult);
MARK_VAL_T(::GlobalNamespace::OVRAnchor_ShareResult);
MARK_VAL_T(::GlobalNamespace::OVRAnchor_TrackableType);
MARK_VAL_T(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId);
MARK_REF_PTR_T(::GlobalNamespace::OVRAnchor_Telemetry);
MARK_REF_PTR_T(::GlobalNamespace::OVRAnchor_Tracker);
MARK_REF_PTR_T(::GlobalNamespace::OVRAnchor___c__DisplayClass54_0);
MARK_REF_PTR_T(::GlobalNamespace::Telemetry_OVRAnchor_Annotation);
MARK_VAL_T(::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3);
MARK_VAL_T(::GlobalNamespace::OVRAnchor);
MARK_VAL_T(::GlobalNamespace::OVRAnchor_DeferredKey);
MARK_VAL_T(::GlobalNamespace::OVRAnchor_DeferredValue);
MARK_VAL_T(::GlobalNamespace::OVRAnchor_FetchOptions);
MARK_VAL_T(::GlobalNamespace::OVRAnchor_FetchTaskData);
MARK_VAL_T(::GlobalNamespace::OVRAnchor_FilterUnion);
MARK_VAL_T(::GlobalNamespace::OVRAnchor_TrackerConfiguration);
MARK_VAL_T(::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56);
MARK_VAL_T(::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10);
MARK_VAL_T(::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9);
MARK_VAL_T(::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66);
MARK_VAL_T(::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d);
MARK_VAL_T(::GlobalNamespace::Telemetry_OVRAnchor_Key);
MARK_VAL_T(::GlobalNamespace::Tracker_OVRAnchor_AsyncLock);
MARK_VAL_T(::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7);
MARK_VAL_T(::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10);
MARK_VAL_T(::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5);
MARK_VAL_T(::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d);
MARK_VAL_T(::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/SaveResult
struct CORDL_TYPE OVRAnchor_SaveResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRAnchor_SaveResult_Unwrapped
  enum struct __OVRAnchor_SaveResult_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_Failure = static_cast<int32_t>(0xfffffc18),
    __E_FailureInvalidAnchor = static_cast<int32_t>(0xfffffc0b),
    __E_FailureDataIsInvalid = static_cast<int32_t>(0xfffffc10),
    __E_FailureInsufficientResources = static_cast<int32_t>(0xffffdcd8),
    __E_FailureStorageAtCapacity = static_cast<int32_t>(0xffffdcd7),
    __E_FailureInsufficientView = static_cast<int32_t>(0xffffdcd6),
    __E_FailurePermissionInsufficient = static_cast<int32_t>(0xffffdcd5),
    __E_FailureRateLimited = static_cast<int32_t>(0xffffdcd4),
    __E_FailureTooDark = static_cast<int32_t>(0xffffdcd3),
    __E_FailureTooBright = static_cast<int32_t>(0xffffdcd2),
    __E_FailureUnsupported = static_cast<int32_t>(0xfffffc14),
    __E_FailurePersistenceNotEnabled = static_cast<int32_t>(0xfffff82a),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRAnchor_SaveResult_Unwrapped() const noexcept {
    return static_cast<__OVRAnchor_SaveResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchor_SaveResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRAnchor_SaveResult(int32_t value__) noexcept;

  /// @brief Field Failure value: I32(-1000)
  static ::GlobalNamespace::OVRAnchor_SaveResult const Failure;

  /// @brief Field FailureDataIsInvalid value: I32(-1008)
  static ::GlobalNamespace::OVRAnchor_SaveResult const FailureDataIsInvalid;

  /// @brief Field FailureInsufficientResources value: I32(-9000)
  static ::GlobalNamespace::OVRAnchor_SaveResult const FailureInsufficientResources;

  /// @brief Field FailureInsufficientView value: I32(-9002)
  static ::GlobalNamespace::OVRAnchor_SaveResult const FailureInsufficientView;

  /// @brief Field FailureInvalidAnchor value: I32(-1013)
  static ::GlobalNamespace::OVRAnchor_SaveResult const FailureInvalidAnchor;

  /// @brief Field FailurePermissionInsufficient value: I32(-9003)
  static ::GlobalNamespace::OVRAnchor_SaveResult const FailurePermissionInsufficient;

  /// @brief Field FailurePersistenceNotEnabled value: I32(-2006)
  static ::GlobalNamespace::OVRAnchor_SaveResult const FailurePersistenceNotEnabled;

  /// @brief Field FailureRateLimited value: I32(-9004)
  static ::GlobalNamespace::OVRAnchor_SaveResult const FailureRateLimited;

  /// @brief Field FailureStorageAtCapacity value: I32(-9001)
  static ::GlobalNamespace::OVRAnchor_SaveResult const FailureStorageAtCapacity;

  /// @brief Field FailureTooBright value: I32(-9006)
  static ::GlobalNamespace::OVRAnchor_SaveResult const FailureTooBright;

  /// @brief Field FailureTooDark value: I32(-9005)
  static ::GlobalNamespace::OVRAnchor_SaveResult const FailureTooDark;

  /// @brief Field FailureUnsupported value: I32(-1004)
  static ::GlobalNamespace::OVRAnchor_SaveResult const FailureUnsupported;

  /// @brief Field Success value: I32(0)
  static ::GlobalNamespace::OVRAnchor_SaveResult const Success;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7044 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor_SaveResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchor_SaveResult, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/EraseResult
struct CORDL_TYPE OVRAnchor_EraseResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRAnchor_EraseResult_Unwrapped
  enum struct __OVRAnchor_EraseResult_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_Failure = static_cast<int32_t>(0xfffffc18),
    __E_FailureInvalidAnchor = static_cast<int32_t>(0xfffffc0b),
    __E_FailureDataIsInvalid = static_cast<int32_t>(0xfffffc10),
    __E_FailureInsufficientResources = static_cast<int32_t>(0xffffdcd8),
    __E_FailurePermissionInsufficient = static_cast<int32_t>(0xffffdcd5),
    __E_FailureRateLimited = static_cast<int32_t>(0xffffdcd4),
    __E_FailureUnsupported = static_cast<int32_t>(0xfffffc14),
    __E_FailurePersistenceNotEnabled = static_cast<int32_t>(0xfffff82a),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRAnchor_EraseResult_Unwrapped() const noexcept {
    return static_cast<__OVRAnchor_EraseResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchor_EraseResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRAnchor_EraseResult(int32_t value__) noexcept;

  /// @brief Field Failure value: I32(-1000)
  static ::GlobalNamespace::OVRAnchor_EraseResult const Failure;

  /// @brief Field FailureDataIsInvalid value: I32(-1008)
  static ::GlobalNamespace::OVRAnchor_EraseResult const FailureDataIsInvalid;

  /// @brief Field FailureInsufficientResources value: I32(-9000)
  static ::GlobalNamespace::OVRAnchor_EraseResult const FailureInsufficientResources;

  /// @brief Field FailureInvalidAnchor value: I32(-1013)
  static ::GlobalNamespace::OVRAnchor_EraseResult const FailureInvalidAnchor;

  /// @brief Field FailurePermissionInsufficient value: I32(-9003)
  static ::GlobalNamespace::OVRAnchor_EraseResult const FailurePermissionInsufficient;

  /// @brief Field FailurePersistenceNotEnabled value: I32(-2006)
  static ::GlobalNamespace::OVRAnchor_EraseResult const FailurePersistenceNotEnabled;

  /// @brief Field FailureRateLimited value: I32(-9004)
  static ::GlobalNamespace::OVRAnchor_EraseResult const FailureRateLimited;

  /// @brief Field FailureUnsupported value: I32(-1004)
  static ::GlobalNamespace::OVRAnchor_EraseResult const FailureUnsupported;

  /// @brief Field Success value: I32(0)
  static ::GlobalNamespace::OVRAnchor_EraseResult const Success;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7045 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor_EraseResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchor_EraseResult, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/FetchResult
struct CORDL_TYPE OVRAnchor_FetchResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRAnchor_FetchResult_Unwrapped
  enum struct __OVRAnchor_FetchResult_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_Failure = static_cast<int32_t>(0xfffffc18),
    __E_FailureDataIsInvalid = static_cast<int32_t>(0xfffffc10),
    __E_FailureInvalidOption = static_cast<int32_t>(0xfffffc17),
    __E_FailureInsufficientResources = static_cast<int32_t>(0xffffdcd8),
    __E_FailureInsufficientView = static_cast<int32_t>(0xffffdcd6),
    __E_FailurePermissionInsufficient = static_cast<int32_t>(0xffffdcd5),
    __E_FailureRateLimited = static_cast<int32_t>(0xffffdcd4),
    __E_FailureTooDark = static_cast<int32_t>(0xffffdcd3),
    __E_FailureTooBright = static_cast<int32_t>(0xffffdcd2),
    __E_FailureUnsupported = static_cast<int32_t>(0xfffffc14),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRAnchor_FetchResult_Unwrapped() const noexcept {
    return static_cast<__OVRAnchor_FetchResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchor_FetchResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRAnchor_FetchResult(int32_t value__) noexcept;

  /// @brief Field Failure value: I32(-1000)
  static ::GlobalNamespace::OVRAnchor_FetchResult const Failure;

  /// @brief Field FailureDataIsInvalid value: I32(-1008)
  static ::GlobalNamespace::OVRAnchor_FetchResult const FailureDataIsInvalid;

  /// @brief Field FailureInsufficientResources value: I32(-9000)
  static ::GlobalNamespace::OVRAnchor_FetchResult const FailureInsufficientResources;

  /// @brief Field FailureInsufficientView value: I32(-9002)
  static ::GlobalNamespace::OVRAnchor_FetchResult const FailureInsufficientView;

  /// @brief Field FailureInvalidOption value: I32(-1001)
  static ::GlobalNamespace::OVRAnchor_FetchResult const FailureInvalidOption;

  /// @brief Field FailurePermissionInsufficient value: I32(-9003)
  static ::GlobalNamespace::OVRAnchor_FetchResult const FailurePermissionInsufficient;

  /// @brief Field FailureRateLimited value: I32(-9004)
  static ::GlobalNamespace::OVRAnchor_FetchResult const FailureRateLimited;

  /// @brief Field FailureTooBright value: I32(-9006)
  static ::GlobalNamespace::OVRAnchor_FetchResult const FailureTooBright;

  /// @brief Field FailureTooDark value: I32(-9005)
  static ::GlobalNamespace::OVRAnchor_FetchResult const FailureTooDark;

  /// @brief Field FailureUnsupported value: I32(-1004)
  static ::GlobalNamespace::OVRAnchor_FetchResult const FailureUnsupported;

  /// @brief Field Success value: I32(0)
  static ::GlobalNamespace::OVRAnchor_FetchResult const Success;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7046 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor_FetchResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchor_FetchResult, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/ShareResult
struct CORDL_TYPE OVRAnchor_ShareResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRAnchor_ShareResult_Unwrapped
  enum struct __OVRAnchor_ShareResult_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_Failure = static_cast<int32_t>(0xfffffc18),
    __E_FailureOperationFailed = static_cast<int32_t>(0xfffffc12),
    __E_FailureInvalidParameter = static_cast<int32_t>(0xfffffc17),
    __E_FailureHandleInvalid = static_cast<int32_t>(0xfffffc0b),
    __E_FailureDataIsInvalid = static_cast<int32_t>(0xfffffc10),
    __E_FailureNetworkTimeout = static_cast<int32_t>(0xfffff82d),
    __E_FailureNetworkRequestFailed = static_cast<int32_t>(0xfffff82c),
    __E_FailureMappingInsufficient = static_cast<int32_t>(0xfffff82f),
    __E_FailureLocalizationFailed = static_cast<int32_t>(0xfffff82e),
    __E_FailureSharableComponentNotEnabled = static_cast<int32_t>(0xfffff82a),
    __E_FailureCloudStorageDisabled = static_cast<int32_t>(0xfffff830),
    __E_FailurePermissionInsufficient = static_cast<int32_t>(0xffffdcd5),
    __E_FailureUnsupported = static_cast<int32_t>(0xfffffc14),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRAnchor_ShareResult_Unwrapped() const noexcept {
    return static_cast<__OVRAnchor_ShareResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchor_ShareResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRAnchor_ShareResult(int32_t value__) noexcept;

  /// @brief Field Failure value: I32(-1000)
  static ::GlobalNamespace::OVRAnchor_ShareResult const Failure;

  /// @brief Field FailureCloudStorageDisabled value: I32(-2000)
  static ::GlobalNamespace::OVRAnchor_ShareResult const FailureCloudStorageDisabled;

  /// @brief Field FailureDataIsInvalid value: I32(-1008)
  static ::GlobalNamespace::OVRAnchor_ShareResult const FailureDataIsInvalid;

  /// @brief Field FailureHandleInvalid value: I32(-1013)
  static ::GlobalNamespace::OVRAnchor_ShareResult const FailureHandleInvalid;

  /// @brief Field FailureInvalidParameter value: I32(-1001)
  static ::GlobalNamespace::OVRAnchor_ShareResult const FailureInvalidParameter;

  /// @brief Field FailureLocalizationFailed value: I32(-2002)
  static ::GlobalNamespace::OVRAnchor_ShareResult const FailureLocalizationFailed;

  /// @brief Field FailureMappingInsufficient value: I32(-2001)
  static ::GlobalNamespace::OVRAnchor_ShareResult const FailureMappingInsufficient;

  /// @brief Field FailureNetworkRequestFailed value: I32(-2004)
  static ::GlobalNamespace::OVRAnchor_ShareResult const FailureNetworkRequestFailed;

  /// @brief Field FailureNetworkTimeout value: I32(-2003)
  static ::GlobalNamespace::OVRAnchor_ShareResult const FailureNetworkTimeout;

  /// @brief Field FailureOperationFailed value: I32(-1006)
  static ::GlobalNamespace::OVRAnchor_ShareResult const FailureOperationFailed;

  /// @brief Field FailurePermissionInsufficient value: I32(-9003)
  static ::GlobalNamespace::OVRAnchor_ShareResult const FailurePermissionInsufficient;

  /// @brief Field FailureSharableComponentNotEnabled value: I32(-2006)
  static ::GlobalNamespace::OVRAnchor_ShareResult const FailureSharableComponentNotEnabled;

  /// @brief Field FailureUnsupported value: I32(-1004)
  static ::GlobalNamespace::OVRAnchor_ShareResult const FailureUnsupported;

  /// @brief Field Success value: I32(0)
  static ::GlobalNamespace::OVRAnchor_ShareResult const Success;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7047 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor_ShareResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchor_ShareResult, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/FetchTaskData
struct CORDL_TYPE OVRAnchor_FetchTaskData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchor_FetchTaskData();

  // Ctor Parameters [CppParam { name: "Anchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None }, CppParam { name:
  // "IncrementalResultsCallback", ty: "::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*", modifiers: "", def_value: None }]
  constexpr OVRAnchor_FetchTaskData(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* Anchors,
                                    ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* IncrementalResultsCallback) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7048 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Anchors, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* Anchors;

  /// @brief Field IncrementalResultsCallback, offset: 0x8, size: 0x8, def value: None
  ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* IncrementalResultsCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor_FetchTaskData, Anchors) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_FetchTaskData, IncrementalResultsCallback) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchor_FetchTaskData, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRTask`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/DeferredValue
struct CORDL_TYPE OVRAnchor_DeferredValue {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchor_DeferredValue();

  // Ctor Parameters [CppParam { name: "Task", ty: "::GlobalNamespace::OVRTask_1<bool>", modifiers: "", def_value: None }, CppParam { name: "EnabledDesired", ty: "bool", modifiers: "", def_value: None
  // }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Timeout", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "StartTime", ty:
  // "float_t", modifiers: "", def_value: None }]
  constexpr OVRAnchor_DeferredValue(::GlobalNamespace::OVRTask_1<bool> Task, bool EnabledDesired, uint64_t RequestId, double_t Timeout, float_t StartTime) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7049 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field Task, offset: 0x0, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1<bool> Task;

  /// @brief Field EnabledDesired, offset: 0x10, size: 0x1, def value: None
  bool EnabledDesired;

  /// @brief Field RequestId, offset: 0x18, size: 0x8, def value: None
  uint64_t RequestId;

  /// @brief Field Timeout, offset: 0x20, size: 0x8, def value: None
  double_t Timeout;

  /// @brief Field StartTime, offset: 0x28, size: 0x4, def value: None
  float_t StartTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor_DeferredValue, Task) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_DeferredValue, EnabledDesired) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_DeferredValue, RequestId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_DeferredValue, Timeout) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_DeferredValue, StartTime) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchor_DeferredValue, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPlugin::SpaceComponentType
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/DeferredKey
struct CORDL_TYPE OVRAnchor_DeferredKey {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>*();

  /// @brief Method Equals, addr 0x5bf4360, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x5bf433c, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::OVRAnchor_DeferredKey other);

  /// @brief Method FromEvent, addr 0x5bf2a40, size 0x10, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRAnchor_DeferredKey FromEvent(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData eventData);

  /// @brief Method GetHashCode, addr 0x5bf43ec, size 0x1c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>* i___System__IEquatable_1___GlobalNamespace__OVRAnchor_DeferredKey_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchor_DeferredKey();

  // Ctor Parameters [CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "ComponentType", ty: "::GlobalNamespace::OVRPlugin_SpaceComponentType", modifiers:
  // "", def_value: None }]
  constexpr OVRAnchor_DeferredKey(uint64_t Space, ::GlobalNamespace::OVRPlugin_SpaceComponentType ComponentType) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7050 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Space, offset: 0x0, size: 0x8, def value: None
  uint64_t Space;

  /// @brief Field ComponentType, offset: 0x8, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_SpaceComponentType ComponentType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor_DeferredKey, Space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_DeferredKey, ComponentType) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchor_DeferredKey, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Guid, System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/FetchOptions
struct CORDL_TYPE OVRAnchor_FetchOptions {
public:
  // Declarations
  /// @brief Method DiscoverSpaces, addr 0x5bee3b4, size 0x964, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_Result DiscoverSpaces(::ByRef<uint64_t> requestId);

  /// @brief Method GetSpaceComponentType, addr 0x5bf4408, size 0x190, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GetSpaceComponentType(::System::Type* type);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchor_FetchOptions();

  // Ctor Parameters [CppParam { name: "SingleUuid", ty: "::System::Nullable_1<::System::Guid>", modifiers: "", def_value: None }, CppParam { name: "Uuids", ty:
  // "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: None }, CppParam { name: "SingleComponentType", ty: "::System::Type*", modifiers: "", def_value: None
  // }, CppParam { name: "ComponentTypes", ty: "::System::Collections::Generic::IEnumerable_1<::System::Type*>*", modifiers: "", def_value: None }]
  constexpr OVRAnchor_FetchOptions(::System::Nullable_1<::System::Guid> SingleUuid, ::System::Collections::Generic::IEnumerable_1<::System::Guid>* Uuids, ::System::Type* SingleComponentType,
                                   ::System::Collections::Generic::IEnumerable_1<::System::Type*>* ComponentTypes) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7051 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field SingleUuid, offset: 0x0, size: 0x14, def value: None
  ::System::Nullable_1<::System::Guid> SingleUuid;

  /// @brief Field Uuids, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::System::Guid>* Uuids;

  /// @brief Field SingleComponentType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* SingleComponentType;

  /// @brief Field ComponentTypes, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::System::Type*>* ComponentTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor_FetchOptions, SingleUuid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_FetchOptions, Uuids) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_FetchOptions, SingleComponentType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_FetchOptions, ComponentTypes) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchor_FetchOptions, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPlugin::SpaceDiscoveryFilterInfoComponents, OVRPlugin::SpaceDiscoveryFilterInfoIds, OVRPlugin::SpaceDiscoveryFilterType
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/FilterUnion
struct CORDL_TYPE OVRAnchor_FilterUnion {
public:
  // Declarations
  /// @brief Field ComponentFilter, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_ComponentFilter, put = __cordl_internal_set_ComponentFilter)) ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents ComponentFilter;

  /// @brief Field IdFilter, offset 0x0, size 0x10
  __declspec(property(get = __cordl_internal_get_IdFilter, put = __cordl_internal_set_IdFilter)) ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds IdFilter;

  /// @brief Field Type, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type)) ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType Type;

  constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents const& __cordl_internal_get_ComponentFilter() const;

  constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents& __cordl_internal_get_ComponentFilter();

  constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds const& __cordl_internal_get_IdFilter() const;

  constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds& __cordl_internal_get_IdFilter();

  constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType const& __cordl_internal_get_Type() const;

  constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType& __cordl_internal_get_Type();

  constexpr void __cordl_internal_set_ComponentFilter(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents value);

  constexpr void __cordl_internal_set_IdFilter(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds value);

  constexpr void __cordl_internal_set_Type(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchor_FilterUnion();

  // Ctor Parameters [CppParam { name: "Type", ty: "::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType", modifiers: "", def_value: None }, CppParam { name: "ComponentFilter", ty:
  // "::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents", modifiers: "", def_value: None }, CppParam { name: "IdFilter", ty: "::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds",
  // modifiers: "", def_value: None }]
  constexpr OVRAnchor_FilterUnion(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType Type, ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents ComponentFilter,
                                  ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds IdFilter) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___Type_padding[0x0];
      /// @brief Field Type, offset: 0x0, size: 0x4, def value: None
      ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType ___Type;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___Type_padding_forAlignment[0x0];
      /// @brief Field Type, offset: 0x0, size: 0x4, def value: None
      ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType ___Type_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___ComponentFilter_padding[0x0];
      /// @brief Field ComponentFilter, offset: 0x0, size: 0x8, def value: None
      ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents ___ComponentFilter;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___ComponentFilter_padding_forAlignment[0x0];
      /// @brief Field ComponentFilter, offset: 0x0, size: 0x8, def value: None
      ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents ___ComponentFilter_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___IdFilter_padding[0x0];
      /// @brief Field IdFilter, offset: 0x0, size: 0x10, def value: None
      ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds ___IdFilter;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___IdFilter_padding_forAlignment[0x0];
      /// @brief Field IdFilter, offset: 0x0, size: 0x10, def value: None
      ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds ___IdFilter_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7052 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchor_FilterUnion, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/TrackableType
struct CORDL_TYPE OVRAnchor_TrackableType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRAnchor_TrackableType_Unwrapped
  enum struct __OVRAnchor_TrackableType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Keyboard = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRAnchor_TrackableType_Unwrapped() const noexcept {
    return static_cast<__OVRAnchor_TrackableType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchor_TrackableType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRAnchor_TrackableType(int32_t value__) noexcept;

  /// @brief Field Keyboard value: I32(1)
  static ::GlobalNamespace::OVRAnchor_TrackableType const Keyboard;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRAnchor_TrackableType const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7053 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor_TrackableType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchor_TrackableType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/Telemetry/Key
struct CORDL_TYPE Telemetry_OVRAnchor_Key {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>*();

  /// @brief Method Equals, addr 0x5bf4a38, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x5bf4a14, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::Telemetry_OVRAnchor_Key other);

  /// @brief Method GetHashCode, addr 0x5bf4ac4, size 0x1c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x5bf4660, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRTelemetryMarker marker, uint64_t requestId);

  /// @brief Method .ctor, addr 0x5bf4750, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId);

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>* i___System__IEquatable_1___GlobalNamespace__Telemetry_OVRAnchor_Key_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Telemetry_OVRAnchor_Key();

  // Ctor Parameters [CppParam { name: "_markerId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_requestId", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr Telemetry_OVRAnchor_Key(int32_t _markerId, uint64_t _requestId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7054 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _markerId, offset: 0x0, size: 0x4, def value: None
  int32_t _markerId;

  /// @brief Field _requestId, offset: 0x8, size: 0x8, def value: None
  uint64_t _requestId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Telemetry_OVRAnchor_Key, _markerId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Telemetry_OVRAnchor_Key, _requestId) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Telemetry_OVRAnchor_Key, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/Telemetry/MarkerId
struct CORDL_TYPE Telemetry_OVRAnchor_MarkerId {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Telemetry_OVRAnchor_MarkerId_Unwrapped
  enum struct __Telemetry_OVRAnchor_MarkerId_Unwrapped : int32_t {
    __E_DiscoverSpaces = static_cast<int32_t>(0x9b8056f),
    __E_SaveSpaces = static_cast<int32_t>(0x9b80d4e),
    __E_EraseSpaces = static_cast<int32_t>(0x9b8204e),
    __E_QuerySpaces = static_cast<int32_t>(0x9b83c86),
    __E_SaveSpaceList = static_cast<int32_t>(0x9b82cd8),
    __E_EraseSingleSpace = static_cast<int32_t>(0x9b8220c),
    __E_ConfigureTracker = static_cast<int32_t>(0x9b8394d),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Telemetry_OVRAnchor_MarkerId_Unwrapped() const noexcept {
    return static_cast<__Telemetry_OVRAnchor_MarkerId_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Telemetry_OVRAnchor_MarkerId();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Telemetry_OVRAnchor_MarkerId(int32_t value__) noexcept;

  /// @brief Field ConfigureTracker value: I32(163068237)
  static ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId const ConfigureTracker;

  /// @brief Field DiscoverSpaces value: I32(163054959)
  static ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId const DiscoverSpaces;

  /// @brief Field EraseSingleSpace value: I32(163062284)
  static ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId const EraseSingleSpace;

  /// @brief Field EraseSpaces value: I32(163061838)
  static ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId const EraseSpaces;

  /// @brief Field QuerySpaces value: I32(163069062)
  static ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId const QuerySpaces;

  /// @brief Field SaveSpaceList value: I32(163065048)
  static ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId const SaveSpaceList;

  /// @brief Field SaveSpaces value: I32(163056974)
  static ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId const SaveSpaces;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7055 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRAnchor/Telemetry/Annotation
class CORDL_TYPE Telemetry_OVRAnchor_Annotation : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Telemetry_OVRAnchor_Annotation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Telemetry_OVRAnchor_Annotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Telemetry_OVRAnchor_Annotation(Telemetry_OVRAnchor_Annotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Telemetry_OVRAnchor_Annotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Telemetry_OVRAnchor_Annotation(Telemetry_OVRAnchor_Annotation const&) = delete;

  /// @brief Field AsynchronousResult offset 0xffffffff size 0x8
  static constexpr ::ConstString AsynchronousResult{ u"async_result" };

  /// @brief Field ComponentTypes offset 0xffffffff size 0x8
  static constexpr ::ConstString ComponentTypes{ u"component_types" };

  /// @brief Field DynamicObjectClasses offset 0xffffffff size 0x8
  static constexpr ::ConstString DynamicObjectClasses{ u"dynamic_object_classes" };

  /// @brief Field GroupCount offset 0xffffffff size 0x8
  static constexpr ::ConstString GroupCount{ u"group_count" };

  /// @brief Field MaxResults offset 0xffffffff size 0x8
  static constexpr ::ConstString MaxResults{ u"max_results" };

  /// @brief Field ResultsCount offset 0xffffffff size 0x8
  static constexpr ::ConstString ResultsCount{ u"results_count" };

  /// @brief Field SpaceCount offset 0xffffffff size 0x8
  static constexpr ::ConstString SpaceCount{ u"space_count" };

  /// @brief Field StorageLocation offset 0xffffffff size 0x8
  static constexpr ::ConstString StorageLocation{ u"storage_location" };

  /// @brief Field SynchronousResult offset 0xffffffff size 0x8
  static constexpr ::ConstString SynchronousResult{ u"sync_result" };

  /// @brief Field Timeout offset 0xffffffff size 0x8
  static constexpr ::ConstString Timeout{ u"timeout" };

  /// @brief Field TotalFilterCount offset 0xffffffff size 0x8
  static constexpr ::ConstString TotalFilterCount{ u"total_filter_count" };

  /// @brief Field UuidCount offset 0xffffffff size 0x8
  static constexpr ::ConstString UuidCount{ u"uuid_count" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7056 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Telemetry_OVRAnchor_Annotation, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRAnchor/Telemetry
class CORDL_TYPE OVRAnchor_Telemetry : public ::System::Object {
public:
  // Declarations
  using Annotation = ::GlobalNamespace::Telemetry_OVRAnchor_Annotation;

  using Key = ::GlobalNamespace::Telemetry_OVRAnchor_Key;

  using MarkerId = ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId;

  /// @brief Field s_markers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_markers,
                      put = setStaticF_s_markers)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Telemetry_OVRAnchor_Key, ::GlobalNamespace::OVRTelemetryMarker>* s_markers;

  /// @brief Method AddMarker, addr 0x5bf4598, size 0xc8, virtual false, abstract: false, final false
  static inline void AddMarker(uint64_t requestId, ::GlobalNamespace::OVRTelemetryMarker marker);

  /// @brief Method GetMarker, addr 0x5bedccc, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> GetMarker(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId);

  /// @brief Method GetRemove, addr 0x5bf489c, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> GetRemove(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId);

  /// @brief Method OnInit, addr 0x5bf1dd0, size 0x80, virtual false, abstract: false, final false
  static inline void OnInit();

  /// @brief Method Remove, addr 0x5bf47fc, size 0xa0, virtual false, abstract: false, final false
  static inline bool Remove(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId, ::ByRef<::GlobalNamespace::OVRTelemetryMarker> marker);

  /// @brief Method SetAsyncResult, addr 0x5bf30d0, size 0x160, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> SetAsyncResult(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId, int64_t result);

  /// @brief Method SetAsyncResultAndSend, addr 0x5bedd90, size 0x108, virtual false, abstract: false, final false
  static inline void SetAsyncResultAndSend(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId, int64_t result);

  /// @brief Method SetSyncResult, addr 0x5bef838, size 0x1c8, virtual false, abstract: false, final false
  static inline void SetSyncResult(::GlobalNamespace::OVRTelemetryMarker marker, uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result);

  /// @brief Method Start, addr 0x5bf4670, size 0xe0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTelemetryMarker Start(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result);

  /// @brief Method TryGetMarker, addr 0x5bf475c, size 0xa0, virtual false, abstract: false, final false
  static inline bool TryGetMarker(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId, ::ByRef<::GlobalNamespace::OVRTelemetryMarker> marker);

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Telemetry_OVRAnchor_Key, ::GlobalNamespace::OVRTelemetryMarker>* getStaticF_s_markers();

  static inline void setStaticF_s_markers(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Telemetry_OVRAnchor_Key, ::GlobalNamespace::OVRTelemetryMarker>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchor_Telemetry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRAnchor_Telemetry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRAnchor_Telemetry(OVRAnchor_Telemetry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRAnchor_Telemetry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRAnchor_Telemetry(OVRAnchor_Telemetry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7057 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchor_Telemetry, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/TrackerConfiguration
struct CORDL_TYPE OVRAnchor_TrackerConfiguration {
public:
  // Declarations
  __declspec(property(get = get_KeyboardTrackingEnabled, put = set_KeyboardTrackingEnabled)) bool KeyboardTrackingEnabled;

  __declspec(property(get = get_RequiresDynamicObjectTracker)) bool RequiresDynamicObjectTracker;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>*();

  /// @brief Method Equals, addr 0x5bf4ffc, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x5bf4fe0, size 0x1c, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::OVRAnchor_TrackerConfiguration other);

  /// @brief Method GetHashCode, addr 0x5bf5084, size 0x80, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetTrackableTypes, addr 0x5bf4c68, size 0x114, virtual false, abstract: false, final false
  inline void GetTrackableTypes(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypes);

  /// @brief Method ResetDynamicObjects, addr 0x5bf4c54, size 0x8, virtual false, abstract: false, final false
  inline void ResetDynamicObjects();

  /// @brief Method SetDynamicObjectState, addr 0x5bf4c5c, size 0xc, virtual false, abstract: false, final false
  inline void SetDynamicObjectState(::ByRef<::GlobalNamespace::OVRAnchor_TrackerConfiguration> other);

  /// @brief Method ToDynamicObjectClasses, addr 0x5bf4b94, size 0xc0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRNativeList_1<::GlobalNamespace::OVRPlugin_DynamicObjectClass> ToDynamicObjectClasses(::Unity::Collections::Allocator allocator);

  /// @brief Method ToString, addr 0x5bf4d7c, size 0x264, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_KeyboardTrackingEnabled, addr 0x5bf4ae0, size 0x8, virtual false, abstract: false, final false
  inline bool get_KeyboardTrackingEnabled();

  /// @brief Method get_KeyboardTrackingSupported, addr 0x5bf4af0, size 0x9c, virtual false, abstract: false, final false
  static inline bool get_KeyboardTrackingSupported();

  /// @brief Method get_RequiresDynamicObjectTracker, addr 0x5bf4b8c, size 0x8, virtual false, abstract: false, final false
  inline bool get_RequiresDynamicObjectTracker();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>* i___System__IEquatable_1___GlobalNamespace__OVRAnchor_TrackerConfiguration_();

  /// @brief Method op_Equality, addr 0x5bf5104, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::OVRAnchor_TrackerConfiguration lhs, ::GlobalNamespace::OVRAnchor_TrackerConfiguration rhs);

  /// @brief Method op_Inequality, addr 0x5bf511c, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::OVRAnchor_TrackerConfiguration lhs, ::GlobalNamespace::OVRAnchor_TrackerConfiguration rhs);

  /// @brief Method set_KeyboardTrackingEnabled, addr 0x5bf4ae8, size 0x8, virtual false, abstract: false, final false
  inline void set_KeyboardTrackingEnabled(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchor_TrackerConfiguration();

  // Ctor Parameters [CppParam { name: "_KeyboardTrackingEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
  constexpr OVRAnchor_TrackerConfiguration(bool _KeyboardTrackingEnabled_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7058 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field <KeyboardTrackingEnabled>k__BackingField, offset: 0x0, size: 0x1, def value: None
  bool _KeyboardTrackingEnabled_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor_TrackerConfiguration, _KeyboardTrackingEnabled_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchor_TrackerConfiguration, 0x1>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/ConfigureTrackerResult
struct CORDL_TYPE OVRAnchor_ConfigureTrackerResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRAnchor_ConfigureTrackerResult_Unwrapped
  enum struct __OVRAnchor_ConfigureTrackerResult_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_Failure = static_cast<int32_t>(0xfffffc18),
    __E_Invalid = static_cast<int32_t>(0xfffffc10),
    __E_NotSupported = static_cast<int32_t>(0xfffffc14),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRAnchor_ConfigureTrackerResult_Unwrapped() const noexcept {
    return static_cast<__OVRAnchor_ConfigureTrackerResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchor_ConfigureTrackerResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRAnchor_ConfigureTrackerResult(int32_t value__) noexcept;

  /// @brief Field Failure value: I32(-1000)
  static ::GlobalNamespace::OVRAnchor_ConfigureTrackerResult const Failure;

  /// @brief Field Invalid value: I32(-1008)
  static ::GlobalNamespace::OVRAnchor_ConfigureTrackerResult const Invalid;

  /// @brief Field NotSupported value: I32(-1004)
  static ::GlobalNamespace::OVRAnchor_ConfigureTrackerResult const NotSupported;

  /// @brief Field Success value: I32(0)
  static ::GlobalNamespace::OVRAnchor_ConfigureTrackerResult const Success;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7059 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor_ConfigureTrackerResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/Tracker/AsyncLock
struct CORDL_TYPE Tracker_OVRAnchor_AsyncLock {
public:
  // Declarations
  using _AcquireAsync_d__3 = ::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method AcquireAsync, addr 0x5bf5858, size 0xb8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock> AcquireAsync(::GlobalNamespace::OVRAnchor_Tracker* tracker);

  /// @brief Method Dispose, addr 0x5bf5838, size 0x20, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x5bf5818, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRAnchor_Tracker* tracker);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Tracker_OVRAnchor_AsyncLock();

  // Ctor Parameters [CppParam { name: "_tracker", ty: "::GlobalNamespace::OVRAnchor_Tracker*", modifiers: "", def_value: None }]
  constexpr Tracker_OVRAnchor_AsyncLock(::GlobalNamespace::OVRAnchor_Tracker* _tracker) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7061 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _tracker, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::OVRAnchor_Tracker* _tracker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor_AsyncLock, _tracker) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor::Tracker::AsyncLock, OVRTaskBuilder`1<T>, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/Tracker/AsyncLock/<AcquireAsync>d__3
struct CORDL_TYPE AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5bf5910, size 0x1f4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5bf5b04, size 0x3c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>", modifiers: "", def_value: None }, CppParam { name: "tracker", ty: "::GlobalNamespace::OVRAnchor_Tracker*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None }]
  constexpr AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3(int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock> __t__builder,
                                                           ::GlobalNamespace::OVRAnchor_Tracker* tracker, ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7060 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock> __t__builder;

  /// @brief Field tracker, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OVRAnchor_Tracker* tracker;

  /// @brief Field <>u__1, offset: 0x30, size: 0x1, def value: None
  ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3, tracker) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor::TrackerConfiguration, OVRPlugin::Result, OVRResult`1<TStatus>, OVRResult`2<TValue, TStatus>, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/Tracker/<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync|5_1>d
struct CORDL_TYPE Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5bf5b40, size 0x6b0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5bf61f0, size 0x3c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>>", modifiers: "", def_value: None }, CppParam { name: "tracker", ty: "uint64_t",
  // modifiers: "", def_value: None }, CppParam { name: "config", ty: "::GlobalNamespace::OVRAnchor_TrackerConfiguration", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty:
  // "uint64_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRPlugin_Result>>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>>", modifiers:
  // "", def_value: None }]
  constexpr Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d(
      int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<uint64_t, ::GlobalNamespace::OVRPlugin_Result>> __t__builder, uint64_t tracker,
      ::GlobalNamespace::OVRAnchor_TrackerConfiguration config, uint64_t __7__wrap1, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRPlugin_Result>> __u__1,
      ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<uint64_t, ::GlobalNamespace::OVRPlugin_Result>> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7062 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<uint64_t, ::GlobalNamespace::OVRPlugin_Result>> __t__builder;

  /// @brief Field tracker, offset: 0x28, size: 0x8, def value: None
  uint64_t tracker;

  /// @brief Field config, offset: 0x30, size: 0x1, def value: None
  ::GlobalNamespace::OVRAnchor_TrackerConfiguration config;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  uint64_t __7__wrap1;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRPlugin_Result>> __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<uint64_t, ::GlobalNamespace::OVRPlugin_Result>> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d, tracker) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d, config) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d, __7__wrap1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d, __u__2) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor::ConfigureTrackerResult, OVRAnchor::Tracker::AsyncLock, OVRAnchor::TrackerConfiguration, OVRObjectPool::TaskScope`1<T>, OVRPlugin::Result, OVRResult`1<TStatus>,
// OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/Tracker/<ConfigureAsync>d__7
struct CORDL_TYPE Tracker_OVRAnchor__ConfigureAsync_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5bf622c, size 0x920, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5bf6b4c, size 0x3c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Tracker_OVRAnchor__ConfigureAsync_d__7();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OVRAnchor_Tracker*", modifiers: "", def_value: None }, CppParam { name: "configuration", ty: "::GlobalNamespace::OVRAnchor_TrackerConfiguration", modifiers: "", def_value:
  // None }, CppParam { name: "__7__wrap1", ty: "::GlobalNamespace::Tracker_OVRAnchor_AsyncLock", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>", modifiers: "", def_value: None }, CppParam { name: "_results_5__3", ty:
  // "::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty:
  // "::GlobalNamespace::OVRObjectPool_TaskScope_1<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*>", modifiers: "", def_value: None }]
  constexpr Tracker_OVRAnchor__ConfigureAsync_d__7(int32_t __1__state,
                                                   ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>> __t__builder,
                                                   ::GlobalNamespace::OVRAnchor_Tracker* __4__this, ::GlobalNamespace::OVRAnchor_TrackerConfiguration configuration,
                                                   ::GlobalNamespace::Tracker_OVRAnchor_AsyncLock __7__wrap1,
                                                   ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock> __u__1,
                                                   ::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>* _results_5__3,
                                                   ::GlobalNamespace::OVRObjectPool_TaskScope_1<::GlobalNamespace::OVRPlugin_Result> __7__wrap3,
                                                   ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7063 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>> __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OVRAnchor_Tracker* __4__this;

  /// @brief Field configuration, offset: 0x30, size: 0x1, def value: None
  ::GlobalNamespace::OVRAnchor_TrackerConfiguration configuration;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::Tracker_OVRAnchor_AsyncLock __7__wrap1;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock> __u__1;

  /// @brief Field <results>5__3, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>* _results_5__3;

  /// @brief Field <>7__wrap3, offset: 0x58, size: 0x10, def value: None
  ::GlobalNamespace::OVRObjectPool_TaskScope_1<::GlobalNamespace::OVRPlugin_Result> __7__wrap3;

  /// @brief Field <>u__2, offset: 0x68, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7, configuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7, __7__wrap1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7, _results_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7, __7__wrap3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7, __u__2) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor::Tracker::AsyncLock, OVRTask`1::Awaiter<TResult>, System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/Tracker/<Dispose>d__10
struct CORDL_TYPE Tracker_OVRAnchor__Dispose_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5bf6b88, size 0x31c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5bf6ea4, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Tracker_OVRAnchor__Dispose_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OVRAnchor_Tracker*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>", modifiers: "", def_value: None }]
  constexpr Tracker_OVRAnchor__Dispose_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::OVRAnchor_Tracker* __4__this,
                                             ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7064 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OVRAnchor_Tracker* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor::TrackerConfiguration, OVRPlugin::Result, OVRResult`2<TValue, TStatus>, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/Tracker/<SetupDynamicObjectTracker>d__5
struct CORDL_TYPE Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5bf6eac, size 0x38c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5bf7238, size 0x3c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OVRAnchor_Tracker*", modifiers:
  // "", def_value: None }, CppParam { name: "config", ty: "::GlobalNamespace::OVRAnchor_TrackerConfiguration", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>>", modifiers: "", def_value: None }]
  constexpr Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5(int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRPlugin_Result> __t__builder,
                                                              ::GlobalNamespace::OVRAnchor_Tracker* __4__this, ::GlobalNamespace::OVRAnchor_TrackerConfiguration config,
                                                              ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<uint64_t, ::GlobalNamespace::OVRPlugin_Result>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7065 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRPlugin_Result> __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OVRAnchor_Tracker* __4__this;

  /// @brief Field config, offset: 0x30, size: 0x1, def value: None
  ::GlobalNamespace::OVRAnchor_TrackerConfiguration config;

  /// @brief Field <>u__1, offset: 0x34, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<uint64_t, ::GlobalNamespace::OVRPlugin_Result>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5, config) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5, __u__1) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor::TrackerConfiguration, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRAnchor/Tracker
class CORDL_TYPE OVRAnchor_Tracker : public ::System::Object {
public:
  // Declarations
  using AsyncLock = ::GlobalNamespace::Tracker_OVRAnchor_AsyncLock;

  using _ConfigureAsync_d__7 = ::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7;

  using _Dispose_d__10 = ::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10;

  using _SetupDynamicObjectTracker_d__5 = ::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5;

  using __SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d = ::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d;

  __declspec(property(get = get_Configuration)) ::GlobalNamespace::OVRAnchor_TrackerConfiguration Configuration;

  /// @brief Field _asyncOperationCount, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__asyncOperationCount, put = __cordl_internal_set__asyncOperationCount)) int32_t _asyncOperationCount;

  /// @brief Field _configuration, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__configuration, put = __cordl_internal_set__configuration)) ::GlobalNamespace::OVRAnchor_TrackerConfiguration _configuration;

  /// @brief Field _dynamicObjectTracker, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__dynamicObjectTracker, put = __cordl_internal_set__dynamicObjectTracker)) uint64_t _dynamicObjectTracker;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ConfigureAsync, addr 0x5bf5208, size 0xd4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>>
  ConfigureAsync(::GlobalNamespace::OVRAnchor_TrackerConfiguration configuration);

  /// @brief Method Dispose, addr 0x5bf5540, size 0xa0, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method FetchTrackablesAsync, addr 0x5bf52dc, size 0x1b0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
  FetchTrackablesAsync(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors,
                       ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* incrementalResultsCallback);

  /// @brief Method Finalize, addr 0x5bf548c, size 0xb4, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::GlobalNamespace::OVRAnchor_Tracker* New_ctor();

  /// @brief Method SetupDynamicObjectTracker, addr 0x5bf513c, size 0xcc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> SetupDynamicObjectTracker(::GlobalNamespace::OVRAnchor_TrackerConfiguration config);

  /// @brief Method <SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync|5_1, addr 0x5bf574c, size 0xcc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<uint64_t, ::GlobalNamespace::OVRPlugin_Result>>
  _SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1(uint64_t tracker, ::GlobalNamespace::OVRAnchor_TrackerConfiguration config);

  /// @brief Method <SetupDynamicObjectTracker>g__SetClassesAsync|5_0, addr 0x5bf55e4, size 0x168, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRPlugin_Result>>
  _SetupDynamicObjectTracker_g__SetClassesAsync_5_0(uint64_t tracker, ::GlobalNamespace::OVRAnchor_TrackerConfiguration config);

  constexpr int32_t const& __cordl_internal_get__asyncOperationCount() const;

  constexpr int32_t& __cordl_internal_get__asyncOperationCount();

  constexpr ::GlobalNamespace::OVRAnchor_TrackerConfiguration const& __cordl_internal_get__configuration() const;

  constexpr ::GlobalNamespace::OVRAnchor_TrackerConfiguration& __cordl_internal_get__configuration();

  constexpr uint64_t const& __cordl_internal_get__dynamicObjectTracker() const;

  constexpr uint64_t& __cordl_internal_get__dynamicObjectTracker();

  constexpr void __cordl_internal_set__asyncOperationCount(int32_t value);

  constexpr void __cordl_internal_set__configuration(::GlobalNamespace::OVRAnchor_TrackerConfiguration value);

  constexpr void __cordl_internal_set__dynamicObjectTracker(uint64_t value);

  /// @brief Method .ctor, addr 0x5bf55e0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Configuration, addr 0x5bf5134, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRAnchor_TrackerConfiguration get_Configuration();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchor_Tracker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRAnchor_Tracker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRAnchor_Tracker(OVRAnchor_Tracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRAnchor_Tracker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRAnchor_Tracker(OVRAnchor_Tracker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7066 };

  /// @brief Field _configuration, offset: 0x10, size: 0x1, def value: None
  ::GlobalNamespace::OVRAnchor_TrackerConfiguration ____configuration;

  /// @brief Field _asyncOperationCount, offset: 0x14, size: 0x4, def value: None
  int32_t ____asyncOperationCount;

  /// @brief Field _dynamicObjectTracker, offset: 0x18, size: 0x8, def value: None
  uint64_t ____dynamicObjectTracker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor_Tracker, ____configuration) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_Tracker, ____asyncOperationCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_Tracker, ____dynamicObjectTracker) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchor_Tracker, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor
struct CORDL_TYPE OVRAnchor {
public:
  // Declarations
  using ConfigureTrackerResult = ::GlobalNamespace::OVRAnchor_ConfigureTrackerResult;

  using DeferredKey = ::GlobalNamespace::OVRAnchor_DeferredKey;

  using DeferredValue = ::GlobalNamespace::OVRAnchor_DeferredValue;

  using EraseResult = ::GlobalNamespace::OVRAnchor_EraseResult;

  using FetchOptions = ::GlobalNamespace::OVRAnchor_FetchOptions;

  using FetchResult = ::GlobalNamespace::OVRAnchor_FetchResult;

  using FetchTaskData = ::GlobalNamespace::OVRAnchor_FetchTaskData;

  using FilterUnion = ::GlobalNamespace::OVRAnchor_FilterUnion;

  using SaveResult = ::GlobalNamespace::OVRAnchor_SaveResult;

  using ShareResult = ::GlobalNamespace::OVRAnchor_ShareResult;

  using Telemetry = ::GlobalNamespace::OVRAnchor_Telemetry;

  using TrackableType = ::GlobalNamespace::OVRAnchor_TrackableType;

  using Tracker = ::GlobalNamespace::OVRAnchor_Tracker;

  using TrackerConfiguration = ::GlobalNamespace::OVRAnchor_TrackerConfiguration;

  using _FetchAnchorsAsync_d__56 = ::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56;

  using _FetchSharedAnchorsAsync_d__10 = ::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10;

  using _FetchSharedAnchorsAsync_d__9 = ::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9;

  using _FetchTrackablesAsync_d__66 = ::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66;

  using __FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d = ::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d;

  using __c__DisplayClass54_0 = ::GlobalNamespace::OVRAnchor___c__DisplayClass54_0;

  __declspec(property(get = get_Handle)) uint64_t Handle;

  /// @brief Field Null, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::GlobalNamespace::OVRAnchor Null;

  __declspec(property(get = get_Uuid)) ::System::Guid Uuid;

  /// @brief Field _deferredTasks, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__deferredTasks, put = setStaticF__deferredTasks)) ::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::OVRAnchor_DeferredKey, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_DeferredValue>*>* _deferredTasks;

  /// @brief Field _typeMap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__typeMap, put = setStaticF__typeMap)) ::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::OVRPlugin_SpaceComponentType>* _typeMap;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRAnchor>*();

  /// @brief Method CreateDeferredSpaceComponentStatusTask, addr 0x5bf230c, size 0x254, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<bool> CreateDeferredSpaceComponentStatusTask(uint64_t space, ::GlobalNamespace::OVRPlugin_SpaceComponentType componentType, bool enabledDesired,
                                                                                          double_t timeout);

  /// @brief Method CreateSpatialAnchorAsync, addr 0x5beeec8, size 0x1a4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> CreateSpatialAnchorAsync(::UnityEngine::Pose trackingSpacePose);

  /// @brief Method CreateSpatialAnchorAsync, addr 0x5bef06c, size 0x174, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> CreateSpatialAnchorAsync(::UnityEngine::Transform* transform, ::UnityEngine::Camera* centerEyeCamera);

  /// @brief Method Dispose, addr 0x5bf1c9c, size 0x88, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Equals, addr 0x5bf19fc, size 0xa0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x5bf1940, size 0xbc, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::OVRAnchor other);

  /// @brief Method EraseAsync, addr 0x5befa70, size 0x8c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> EraseAsync();

  /// @brief Method EraseAsync, addr 0x5befd90, size 0x57c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>>
  EraseAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>* anchors, ::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids);

  /// @brief Method EraseSpace, addr 0x5bf3540, size 0x158, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_Result EraseSpace(uint64_t space, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation location, ::ByRef<uint64_t> requestId);

  /// @brief Method EraseSpacesAsync, addr 0x5befafc, size 0x294, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> EraseSpacesAsync(::System::ReadOnlySpan_1<uint64_t> spaces,
                                                                                                                                        ::System::ReadOnlySpan_1<::System::Guid> uuids);

  /// @brief Method FetchAnchors, addr 0x5bf1e50, size 0x4bc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> FetchAnchors(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                                                               ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 queryInfo);

  /// @brief Method FetchAnchorsAsync, addr 0x5bee204, size 0x1b0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
  FetchAnchorsAsync(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors, ::GlobalNamespace::OVRAnchor_FetchOptions options,
                    ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* incrementalResultsCallback);

  /// @brief Method FetchAnchorsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::GlobalNamespace::OVRTask_1<bool> FetchAnchorsAsync(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                                     ::GlobalNamespace::OVRSpace_StorageLocation location, int32_t maxResults, double_t timeout);

  /// @brief Method FetchAnchorsAsync, addr 0x5bf3230, size 0xf4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<bool> FetchAnchorsAsync(::GlobalNamespace::OVRPlugin_SpaceComponentType type,
                                                                     ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                                     ::GlobalNamespace::OVRSpace_StorageLocation location, int32_t maxResults, double_t timeout);

  /// @brief Method FetchAnchorsAsync, addr 0x5bf2a50, size 0xf4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<bool> FetchAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids,
                                                                     ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                                     ::GlobalNamespace::OVRSpace_StorageLocation location, double_t timeout);

  /// @brief Method FetchSharedAnchorsAsync, addr 0x5beedec, size 0xdc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
  FetchSharedAnchorsAsync(::System::Guid groupUuid, ::System::Collections::Generic::IEnumerable_1<::System::Guid>* allowedAnchorUuids,
                          ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors);

  /// @brief Method FetchSharedAnchorsAsync, addr 0x5beed18, size 0xd4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
  FetchSharedAnchorsAsync(::System::Guid groupUuid, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors);

  /// @brief Method FetchTrackablesAsync, addr 0x5bf3bf8, size 0xd4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
  FetchTrackablesAsync(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors,
                       ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypes,
                       ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* incrementalResultsCallback);

  /// @brief Method GetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponent();

  /// @brief Method GetHashCode, addr 0x5bf1bb0, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetRequiredComponents, addr 0x5bf39d8, size 0x220, virtual false, abstract: false, final false
  static inline void GetRequiredComponents(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypes,
                                           ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypesOut,
                                           ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>* requiredComponentsOut);

  /// @brief Method GetSupportedComponents, addr 0x5bf16f8, size 0x248, virtual false, abstract: false, final false
  inline bool GetSupportedComponents(::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>* components);

  /// @brief Method GetTrackableType, addr 0x5bf3704, size 0x2d4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRAnchor_TrackableType GetTrackableType();

  /// @brief Method Init, addr 0x5bf1d24, size 0xac, virtual false, abstract: false, final false
  static inline void Init();

  /// @brief Method OnEraseSpacesResult, addr 0x5bf030c, size 0x70, virtual false, abstract: false, final false
  static inline void OnEraseSpacesResult(::GlobalNamespace::OVRDeserialize_SpacesEraseResultData eventData);

  /// @brief Method OnSaveSpacesResult, addr 0x5befa00, size 0x70, virtual false, abstract: false, final false
  static inline void OnSaveSpacesResult(::GlobalNamespace::OVRDeserialize_SpacesSaveResultData eventData);

  /// @brief Method OnShareAnchorsToGroupsComplete, addr 0x5bf165c, size 0x88, virtual false, abstract: false, final false
  static inline void OnShareAnchorsToGroupsComplete(uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result);

  /// @brief Method OnSpaceDiscoveryComplete, addr 0x5bed958, size 0x374, virtual false, abstract: false, final false
  static inline void OnSpaceDiscoveryComplete(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryCompleteData data);

  /// @brief Method OnSpaceDiscoveryResultsAvailable, addr 0x5bede98, size 0x360, virtual false, abstract: false, final false
  static inline void OnSpaceDiscoveryResultsAvailable(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData data);

  /// @brief Method OnSpaceEraseComplete, addr 0x5bf3698, size 0x6c, virtual false, abstract: false, final false
  static inline void OnSpaceEraseComplete(::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData eventData);

  /// @brief Method OnSpaceListSaveResult, addr 0x5bf34d0, size 0x70, virtual false, abstract: false, final false
  static inline void OnSpaceListSaveResult(::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData eventData);

  /// @brief Method OnSpaceQueryComplete, addr 0x5bf2b44, size 0x58c, virtual false, abstract: false, final false
  static inline void OnSpaceQueryComplete(::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData data);

  /// @brief Method OnSpaceSetComponentStatusComplete, addr 0x5bf2560, size 0x4e0, virtual false, abstract: false, final false
  static inline void OnSpaceSetComponentStatusComplete(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData eventData);

  /// @brief Method SaveAsync, addr 0x5bef1e0, size 0x84, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> SaveAsync();

  /// @brief Method SaveAsync, addr 0x5bef46c, size 0x3cc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>>
  SaveAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>* anchors);

  /// @brief Method SaveSpaceList, addr 0x5bf3324, size 0x1ac, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_Result SaveSpaceList(uint64_t* spaces, uint32_t numSpaces, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation location, ::ByRef<uint64_t> requestId);

  /// @brief Method SaveSpacesAsync, addr 0x5bef264, size 0x208, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> SaveSpacesAsync(::System::ReadOnlySpan_1<uint64_t> spaces);

  /// @brief Method ShareAsync, addr 0x5bf128c, size 0x3d0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>
  ShareAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>* anchors, ::System::Guid groupUuid);

  /// @brief Method ShareAsync, addr 0x5bf0918, size 0x748, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>
  ShareAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>* anchors, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>* users);

  /// @brief Method ShareAsync, addr 0x5bf1060, size 0xa4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> ShareAsync(::System::Guid groupUuid);

  /// @brief Method ShareAsync, addr 0x5bf037c, size 0x458, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>
  ShareAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>* users);

  /// @brief Method ShareAsyncInternal, addr 0x5bf1104, size 0x188, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> ShareAsyncInternal(::System::ReadOnlySpan_1<uint64_t> anchors,
                                                                                                                                          ::System::ReadOnlySpan_1<::System::Guid> groupUuids);

  /// @brief Method ShareSpacesAsync, addr 0x5bf07d4, size 0x144, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> ShareSpacesAsync(::System::ReadOnlySpan_1<uint64_t> spaces,
                                                                                                                                        ::System::ReadOnlySpan_1<uint64_t> users);

  /// @brief Method SupportsComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool SupportsComponent();

  /// @brief Method ToString, addr 0x5bf1c2c, size 0x70, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryGetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGetComponent(::ByRef<T> component);

  /// @brief Method <FetchTrackablesAsync>g__DoesComponentMatchTrackableType|66_1, addr 0x5bf421c, size 0x120, virtual false, abstract: false, final false
  static inline bool _FetchTrackablesAsync_g__DoesComponentMatchTrackableType_66_1(::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypes,
                                                                                   ::GlobalNamespace::OVRAnchor anchor, ::GlobalNamespace::OVRPlugin_SpaceComponentType componentType);

  /// @brief Method <FetchTrackablesAsync>g__QuerySingleComponentAsync|66_0, addr 0x5bf4138, size 0xe4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> _FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0(
      ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypes,
      ::GlobalNamespace::OVRPlugin_SpaceComponentType componentType, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* incrementalResultsCallback);

  /// @brief Method .ctor, addr 0x5bee1f8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint64_t handle, ::System::Guid uuid);

  static inline ::GlobalNamespace::OVRAnchor getStaticF_Null();

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor_DeferredKey, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_DeferredValue>*>*
  getStaticF__deferredTasks();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::OVRPlugin_SpaceComponentType>* getStaticF__typeMap();

  /// @brief Method get_Handle, addr 0x5bf16e4, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_Handle();

  /// @brief Method get_Uuid, addr 0x5bf16ec, size 0xc, virtual false, abstract: false, final false
  inline ::System::Guid get_Uuid();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::OVRAnchor>* i___System__IEquatable_1___GlobalNamespace__OVRAnchor_();

  /// @brief Method op_Equality, addr 0x5bf1a9c, size 0x88, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::OVRAnchor lhs, ::GlobalNamespace::OVRAnchor rhs);

  /// @brief Method op_Inequality, addr 0x5bf1b24, size 0x8c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::OVRAnchor lhs, ::GlobalNamespace::OVRAnchor rhs);

  static inline void setStaticF_Null(::GlobalNamespace::OVRAnchor value);

  static inline void setStaticF__deferredTasks(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor_DeferredKey, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_DeferredValue>*>* value);

  static inline void setStaticF__typeMap(::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::OVRPlugin_SpaceComponentType>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchor();

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_Uuid_k__BackingField", ty: "::System::Guid", modifiers: "",
  // def_value: None }]
  constexpr OVRAnchor(uint64_t _Handle_k__BackingField, ::System::Guid _Uuid_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7074 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _Handle_k__BackingField;

  /// @brief Field <Uuid>k__BackingField, offset: 0x8, size: 0x10, def value: None
  ::System::Guid _Uuid_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor, _Uuid_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchor, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor, OVRObjectPool::ListScope`1<T>, OVRPlugin::Result, OVRPlugin::SpaceComponentType, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/<<FetchTrackablesAsync>g__QuerySingleComponentAsync|66_0>d
struct CORDL_TYPE OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5bf7274, size 0x778, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5bf79ec, size 0x3c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: None }, CppParam { name: "componentType", ty:
  // "::GlobalNamespace::OVRPlugin_SpaceComponentType", modifiers: "", def_value: None }, CppParam { name: "anchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*",
  // modifiers: "", def_value: None }, CppParam { name: "trackableTypes", ty: "::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*", modifiers: "", def_value: None
  // }, CppParam { name: "incrementalResultsCallback", ty: "::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*", modifiers: "", def_value: None },
  // CppParam { name: "_anchorsWithComponent_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: None }]
  constexpr OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d(
      int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRPlugin_Result> __t__builder, ::GlobalNamespace::OVRPlugin_SpaceComponentType componentType,
      ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypes,
      ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* incrementalResultsCallback,
      ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _anchorsWithComponent_5__2, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap2,
      ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7067 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRPlugin_Result> __t__builder;

  /// @brief Field componentType, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_SpaceComponentType componentType;

  /// @brief Field anchors, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors;

  /// @brief Field trackableTypes, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypes;

  /// @brief Field incrementalResultsCallback, offset: 0x40, size: 0x8, def value: None
  ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* incrementalResultsCallback;

  /// @brief Field <anchorsWithComponent>5__2, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _anchorsWithComponent_5__2;

  /// @brief Field <>7__wrap2, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap2;

  /// @brief Field <>u__1, offset: 0x58, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d, componentType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d, anchors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d, trackableTypes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d, incrementalResultsCallback) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d, _anchorsWithComponent_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d, __7__wrap2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d, __u__1) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPlugin::Result, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/<>c__DisplayClass54_0/<<FetchAnchorsAsync>g__execute|0>d
struct CORDL_TYPE __c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5bf7ae4, size 0x3f4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5bf7f84, size 0x3c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<bool>", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OVRAnchor___c__DisplayClass54_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: None }]
  constexpr __c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d(int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<bool> __t__builder,
                                                                               ::GlobalNamespace::OVRAnchor___c__DisplayClass54_0* __4__this,
                                                                               ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7068 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OVRAnchor___c__DisplayClass54_0* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRSpace::StorageLocation, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRAnchor/<>c__DisplayClass54_0
class CORDL_TYPE OVRAnchor___c__DisplayClass54_0 : public ::System::Object {
public:
  // Declarations
  using __FetchAnchorsAsync_g__execute_0_d = ::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d;

  /// @brief Field anchors, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_anchors, put = __cordl_internal_set_anchors)) ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors;

  /// @brief Field location, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_location, put = __cordl_internal_set_location)) ::GlobalNamespace::OVRSpace_StorageLocation location;

  /// @brief Field timeout, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_timeout, put = __cordl_internal_set_timeout)) double_t timeout;

  /// @brief Field uuids, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_uuids, put = __cordl_internal_set_uuids)) ::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids;

  static inline ::GlobalNamespace::OVRAnchor___c__DisplayClass54_0* New_ctor();

  /// @brief Method <FetchAnchorsAsync>g__execute|0, addr 0x5bf7a2c, size 0xb8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> _FetchAnchorsAsync_g__execute_0();

  constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* const& __cordl_internal_get_anchors() const;

  constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*& __cordl_internal_get_anchors();

  constexpr ::GlobalNamespace::OVRSpace_StorageLocation const& __cordl_internal_get_location() const;

  constexpr ::GlobalNamespace::OVRSpace_StorageLocation& __cordl_internal_get_location();

  constexpr double_t const& __cordl_internal_get_timeout() const;

  constexpr double_t& __cordl_internal_get_timeout();

  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Guid>* const& __cordl_internal_get_uuids() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Guid>*& __cordl_internal_get_uuids();

  constexpr void __cordl_internal_set_anchors(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* value);

  constexpr void __cordl_internal_set_location(::GlobalNamespace::OVRSpace_StorageLocation value);

  constexpr void __cordl_internal_set_timeout(double_t value);

  constexpr void __cordl_internal_set_uuids(::System::Collections::Generic::IEnumerable_1<::System::Guid>* value);

  /// @brief Method .ctor, addr 0x5bf7a28, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchor___c__DisplayClass54_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRAnchor___c__DisplayClass54_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRAnchor___c__DisplayClass54_0(OVRAnchor___c__DisplayClass54_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRAnchor___c__DisplayClass54_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRAnchor___c__DisplayClass54_0(OVRAnchor___c__DisplayClass54_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7069 };

  /// @brief Field uuids, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::System::Guid>* ___uuids;

  /// @brief Field location, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::OVRSpace_StorageLocation ___location;

  /// @brief Field timeout, offset: 0x20, size: 0x8, def value: None
  double_t ___timeout;

  /// @brief Field anchors, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* ___anchors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor___c__DisplayClass54_0, ___uuids) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor___c__DisplayClass54_0, ___location) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor___c__DisplayClass54_0, ___timeout) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor___c__DisplayClass54_0, ___anchors) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchor___c__DisplayClass54_0, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPlugin::Result, OVRPlugin::SpaceComponentType, OVRSpace::StorageLocation, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/<FetchAnchorsAsync>d__56
struct CORDL_TYPE OVRAnchor__FetchAnchorsAsync_d__56 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5bf7fc0, size 0x3ac, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5bf836c, size 0x3c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchor__FetchAnchorsAsync_d__56();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<bool>", modifiers: "",
  // def_value: None }, CppParam { name: "type", ty: "::GlobalNamespace::OVRPlugin_SpaceComponentType", modifiers: "", def_value: None }, CppParam { name: "location", ty:
  // "::GlobalNamespace::OVRSpace_StorageLocation", modifiers: "", def_value: None }, CppParam { name: "maxResults", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "timeout", ty:
  // "double_t", modifiers: "", def_value: None }, CppParam { name: "anchors", ty: "::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None }, CppParam
  // { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: None }]
  constexpr OVRAnchor__FetchAnchorsAsync_d__56(int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<bool> __t__builder, ::GlobalNamespace::OVRPlugin_SpaceComponentType type,
                                               ::GlobalNamespace::OVRSpace_StorageLocation location, int32_t maxResults, double_t timeout,
                                               ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors,
                                               ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7070 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1<bool> __t__builder;

  /// @brief Field type, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_SpaceComponentType type;

  /// @brief Field location, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::OVRSpace_StorageLocation location;

  /// @brief Field maxResults, offset: 0x30, size: 0x4, def value: None
  int32_t maxResults;

  /// @brief Field timeout, offset: 0x38, size: 0x8, def value: None
  double_t timeout;

  /// @brief Field anchors, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56, type) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56, location) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56, maxResults) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56, timeout) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56, anchors) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor::FetchResult, OVRPlugin::Result, OVRResult`2<TValue, TStatus>, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>, System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/<FetchSharedAnchorsAsync>d__10
struct CORDL_TYPE OVRAnchor__FetchSharedAnchorsAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5bf83a8, size 0x418, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5bf87c0, size 0x3c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchor__FetchSharedAnchorsAsync_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>", modifiers:
  // "", def_value: None }, CppParam { name: "allowedAnchorUuids", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: None }, CppParam { name: "anchors",
  // ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None }, CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "", def_value: None
  // }, CppParam { name: "__7__wrap1", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: None }]
  constexpr OVRAnchor__FetchSharedAnchorsAsync_d__10(
      int32_t __1__state,
      ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> __t__builder,
      ::System::Collections::Generic::IEnumerable_1<::System::Guid>* allowedAnchorUuids, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors, ::System::Guid groupUuid,
      ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* __7__wrap1, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7071 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> __t__builder;

  /// @brief Field allowedAnchorUuids, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::System::Guid>* allowedAnchorUuids;

  /// @brief Field anchors, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors;

  /// @brief Field groupUuid, offset: 0x38, size: 0x10, def value: None
  ::System::Guid groupUuid;

  /// @brief Field <>7__wrap1, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* __7__wrap1;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10, allowedAnchorUuids) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10, anchors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10, groupUuid) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10, __7__wrap1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10, __u__1) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor::FetchResult, OVRPlugin::Result, OVRResult`2<TValue, TStatus>, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>, System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/<FetchSharedAnchorsAsync>d__9
struct CORDL_TYPE OVRAnchor__FetchSharedAnchorsAsync_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5bf87fc, size 0x3b8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5bf8bb4, size 0x3c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchor__FetchSharedAnchorsAsync_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>", modifiers:
  // "", def_value: None }, CppParam { name: "anchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None }, CppParam { name: "groupUuid", ty:
  // "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: None }]
  constexpr OVRAnchor__FetchSharedAnchorsAsync_d__9(
      int32_t __1__state,
      ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> __t__builder,
      ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors, ::System::Guid groupUuid, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* __7__wrap1,
      ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7072 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> __t__builder;

  /// @brief Field anchors, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors;

  /// @brief Field groupUuid, offset: 0x30, size: 0x10, def value: None
  ::System::Guid groupUuid;

  /// @brief Field <>7__wrap1, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* __7__wrap1;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9, anchors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9, groupUuid) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9, __7__wrap1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor::FetchResult, OVRAnchor::TrackableType, OVRObjectPool::HashSetScope`1<T>, OVRObjectPool::TaskScope`1<T>, OVRPlugin::Result, OVRPlugin::SpaceComponentType, OVRResult`2<TValue,
// TStatus>, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/<FetchTrackablesAsync>d__66
struct CORDL_TYPE OVRAnchor__FetchTrackablesAsync_d__66 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5bf8bf0, size 0x9b8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5bf95a8, size 0x3c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchor__FetchTrackablesAsync_d__66();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>", modifiers:
  // "", def_value: None }, CppParam { name: "anchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None }, CppParam { name:
  // "trackableTypes", ty: "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*", modifiers: "", def_value: None }, CppParam { name:
  // "incrementalResultsCallback", ty: "::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*", modifiers: "", def_value: None }, CppParam { name:
  // "__7__wrap1", ty: "::GlobalNamespace::OVRObjectPool_HashSetScope_1<::GlobalNamespace::OVRAnchor_TrackableType>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty:
  // "::GlobalNamespace::OVRObjectPool_HashSetScope_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty:
  // "::GlobalNamespace::OVRObjectPool_TaskScope_1<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*>", modifiers: "", def_value: None }]
  constexpr OVRAnchor__FetchTrackablesAsync_d__66(
      int32_t __1__state,
      ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> __t__builder,
      ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypes,
      ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* incrementalResultsCallback,
      ::GlobalNamespace::OVRObjectPool_HashSetScope_1<::GlobalNamespace::OVRAnchor_TrackableType> __7__wrap1,
      ::GlobalNamespace::OVRObjectPool_HashSetScope_1<::GlobalNamespace::OVRPlugin_SpaceComponentType> __7__wrap2,
      ::GlobalNamespace::OVRObjectPool_TaskScope_1<::GlobalNamespace::OVRPlugin_Result> __7__wrap3,
      ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7073 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> __t__builder;

  /// @brief Field anchors, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors;

  /// @brief Field trackableTypes, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypes;

  /// @brief Field incrementalResultsCallback, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* incrementalResultsCallback;

  /// @brief Field <>7__wrap1, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_HashSetScope_1<::GlobalNamespace::OVRAnchor_TrackableType> __7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_HashSetScope_1<::GlobalNamespace::OVRPlugin_SpaceComponentType> __7__wrap2;

  /// @brief Field <>7__wrap3, offset: 0x50, size: 0x10, def value: None
  ::GlobalNamespace::OVRObjectPool_TaskScope_1<::GlobalNamespace::OVRPlugin_Result> __7__wrap3;

  /// @brief Field <>u__1, offset: 0x60, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66, anchors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66, trackableTypes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66, incrementalResultsCallback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66, __7__wrap1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66, __7__wrap2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66, __7__wrap3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66, __u__1) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor_ConfigureTrackerResult, "", "OVRAnchor/ConfigureTrackerResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor_EraseResult, "", "OVRAnchor/EraseResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor_FetchResult, "", "OVRAnchor/FetchResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor_SaveResult, "", "OVRAnchor/SaveResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor_ShareResult, "", "OVRAnchor/ShareResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor_TrackableType, "", "OVRAnchor/TrackableType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, "", "OVRAnchor/Telemetry/MarkerId");
NEED_NO_BOX(::GlobalNamespace::OVRAnchor_Telemetry);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor_Telemetry*, "", "OVRAnchor/Telemetry");
NEED_NO_BOX(::GlobalNamespace::OVRAnchor_Tracker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor_Tracker*, "", "OVRAnchor/Tracker");
NEED_NO_BOX(::GlobalNamespace::OVRAnchor___c__DisplayClass54_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor___c__DisplayClass54_0*, "", "OVRAnchor/<>c__DisplayClass54_0");
NEED_NO_BOX(::GlobalNamespace::Telemetry_OVRAnchor_Annotation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Telemetry_OVRAnchor_Annotation*, "", "OVRAnchor/Telemetry/Annotation");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3, "", "OVRAnchor/Tracker/AsyncLock/<AcquireAsync>d__3");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor, "", "OVRAnchor");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor_DeferredKey, "", "OVRAnchor/DeferredKey");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor_DeferredValue, "", "OVRAnchor/DeferredValue");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor_FetchOptions, "", "OVRAnchor/FetchOptions");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor_FetchTaskData, "", "OVRAnchor/FetchTaskData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor_FilterUnion, "", "OVRAnchor/FilterUnion");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor_TrackerConfiguration, "", "OVRAnchor/TrackerConfiguration");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56, "", "OVRAnchor/<FetchAnchorsAsync>d__56");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10, "", "OVRAnchor/<FetchSharedAnchorsAsync>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9, "", "OVRAnchor/<FetchSharedAnchorsAsync>d__9");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66, "", "OVRAnchor/<FetchTrackablesAsync>d__66");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d, "", "OVRAnchor/<<FetchTrackablesAsync>g__QuerySingleComponentAsync|66_0>d");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Telemetry_OVRAnchor_Key, "", "OVRAnchor/Telemetry/Key");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Tracker_OVRAnchor_AsyncLock, "", "OVRAnchor/Tracker/AsyncLock");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7, "", "OVRAnchor/Tracker/<ConfigureAsync>d__7");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10, "", "OVRAnchor/Tracker/<Dispose>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5, "", "OVRAnchor/Tracker/<SetupDynamicObjectTracker>d__5");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d, "",
                       "OVRAnchor/Tracker/<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync|5_1>d");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d, "", "OVRAnchor/<>c__DisplayClass54_0/<<FetchAnchorsAsync>g__execute|0>d");
