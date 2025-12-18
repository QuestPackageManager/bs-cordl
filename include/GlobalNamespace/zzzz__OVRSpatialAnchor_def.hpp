#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpatialAnchor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSpatialAnchor)
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
struct OVRAnchor_SaveResult;
}
namespace GlobalNamespace {
struct OVRAnchor_ShareResult;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
struct OVRPlugin_Result;
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
template <typename TStatus> struct OVRResult_1;
}
namespace GlobalNamespace {
template <typename TValue, typename TStatus> struct OVRResult_2;
}
namespace GlobalNamespace {
struct OVRSpaceQuery_Options;
}
namespace GlobalNamespace {
struct OVRSpaceUser;
}
namespace GlobalNamespace {
struct OVRSpace_StorageLocation;
}
namespace GlobalNamespace {
struct OVRSpace;
}
namespace GlobalNamespace {
class OVRSpatialAnchor_Development;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_EraseOptions;
}
namespace GlobalNamespace {
template <typename TResult, typename TCapture> struct OVRSpatialAnchor_InvertedCapture_2;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_LoadOptions;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_MultiAnchorActionType;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_MultiAnchorDelegatePair;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_OperationResult;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_SaveOptions;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_UnboundAnchor;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor__WhenCreatedAsync_d__19;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor__WhenLocalizedAsync_d__22;
}
namespace GlobalNamespace {
class OVRSpatialAnchor___c;
}
namespace GlobalNamespace {
class OVRSpatialAnchor___c__DisplayClass65_0;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
struct Guid;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSpatialAnchor_MultiAnchorActionType;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_OperationResult;
}
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
namespace GlobalNamespace {
class OVRSpatialAnchor_Development;
}
namespace GlobalNamespace {
class OVRSpatialAnchor___c;
}
namespace GlobalNamespace {
class OVRSpatialAnchor___c__DisplayClass65_0;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_EraseOptions;
}
namespace GlobalNamespace {
template <typename TResult, typename TCapture> struct OVRSpatialAnchor_InvertedCapture_2;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_LoadOptions;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_MultiAnchorDelegatePair;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_SaveOptions;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_UnboundAnchor;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor__WhenCreatedAsync_d__19;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor__WhenLocalizedAsync_d__22;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType);
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor_OperationResult);
MARK_REF_PTR_T(::GlobalNamespace::OVRSpatialAnchor);
MARK_REF_PTR_T(::GlobalNamespace::OVRSpatialAnchor_Development);
MARK_REF_PTR_T(::GlobalNamespace::OVRSpatialAnchor___c);
MARK_REF_PTR_T(::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0);
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor_EraseOptions);
MARK_GEN_VAL_T(::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2);
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor_LoadOptions);
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair);
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor_SaveOptions);
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor);
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65);
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62);
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63);
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64);
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19);
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpatialAnchor/MultiAnchorDelegatePair
struct CORDL_TYPE OVRSpatialAnchor_MultiAnchorDelegatePair {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpatialAnchor_MultiAnchorDelegatePair();

  // Ctor Parameters [CppParam { name: "Anchors", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*", modifiers: "", def_value: None }, CppParam { name:
  // "Delegate", ty: "::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*",
  // modifiers: "", def_value: None }]
  constexpr OVRSpatialAnchor_MultiAnchorDelegatePair(
      ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* Anchors,
      ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* Delegate) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7690 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Anchors, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* Anchors;

  /// @brief Field Delegate, offset: 0x8, size: 0x8, def value: None
  ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* Delegate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair, Anchors) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair, Delegate) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRSpace, System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpatialAnchor/UnboundAnchor
struct CORDL_TYPE OVRSpatialAnchor_UnboundAnchor {
public:
  // Declarations
  __declspec(property(get = get_Localized)) bool Localized;

  __declspec(property(get = get_Localizing)) bool Localizing;

  __declspec(property(get = get_Pose)) ::UnityEngine::Pose Pose;

  __declspec(property(get = get_Uuid)) ::System::Guid Uuid;

  /// @brief Method BindTo, addr 0x5d2cadc, size 0x328, virtual false, abstract: false, final false
  inline void BindTo(::GlobalNamespace::OVRSpatialAnchor* spatialAnchor);

  /// @brief Method Localize, addr 0x5d2ce04, size 0xdc, virtual false, abstract: false, final false
  inline void Localize(::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, bool>* onComplete, double_t timeout);

  /// @brief Method LocalizeAsync, addr 0x5d2c8fc, size 0x1e0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> LocalizeAsync(double_t timeout);

  /// @brief Method TryGetPose, addr 0x5d2c640, size 0x2bc, virtual false, abstract: false, final false
  inline bool TryGetPose(::ByRef<::UnityEngine::Pose> pose);

  /// @brief Method .ctor, addr 0x5d2a58c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRSpace space, ::System::Guid uuid);

  /// @brief Method get_Localized, addr 0x5d2c520, size 0x8c, virtual false, abstract: false, final false
  inline bool get_Localized();

  /// @brief Method get_Localizing, addr 0x5d2c5ac, size 0x94, virtual false, abstract: false, final false
  inline bool get_Localizing();

  /// @brief Method get_Pose, addr 0x5d2cee0, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose get_Pose();

  /// @brief Method get_Uuid, addr 0x5d2c514, size 0xc, virtual false, abstract: false, final false
  inline ::System::Guid get_Uuid();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpatialAnchor_UnboundAnchor();

  // Ctor Parameters [CppParam { name: "_space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: None }, CppParam { name: "_Uuid_k__BackingField", ty: "::System::Guid", modifiers: "",
  // def_value: None }]
  constexpr OVRSpatialAnchor_UnboundAnchor(::GlobalNamespace::OVRSpace _space, ::System::Guid _Uuid_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7691 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field _space, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::OVRSpace _space;

  /// @brief Field <Uuid>k__BackingField, offset: 0x8, size: 0x10, def value: None
  ::System::Guid _Uuid_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, _space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, _Uuid_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpatialAnchor/MultiAnchorActionType
struct CORDL_TYPE OVRSpatialAnchor_MultiAnchorActionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRSpatialAnchor_MultiAnchorActionType_Unwrapped
  enum struct __OVRSpatialAnchor_MultiAnchorActionType_Unwrapped : int32_t {
    __E_Save = static_cast<int32_t>(0x0),
    __E_Share = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRSpatialAnchor_MultiAnchorActionType_Unwrapped() const noexcept {
    return static_cast<__OVRSpatialAnchor_MultiAnchorActionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpatialAnchor_MultiAnchorActionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRSpatialAnchor_MultiAnchorActionType(int32_t value__) noexcept;

  /// @brief Field Save value: I32(0)
  static ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType const Save;

  /// @brief Field Share value: I32(1)
  static ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType const Share;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7692 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSpatialAnchor/Development
class CORDL_TYPE OVRSpatialAnchor_Development : public ::System::Object {
public:
  // Declarations
  /// @brief Method Log, addr 0x5d2cfa0, size 0x8c, virtual false, abstract: false, final false
  static inline void Log(::StringW message);

  /// @brief Method LogError, addr 0x5d2d0b8, size 0x8c, virtual false, abstract: false, final false
  static inline void LogError(::StringW message);

  /// @brief Method LogRequest, addr 0x5d2d19c, size 0x4, virtual false, abstract: false, final false
  static inline void LogRequest(uint64_t requestId, ::StringW message);

  /// @brief Method LogRequestOrError, addr 0x5d2d144, size 0x58, virtual false, abstract: false, final false
  static inline void LogRequestOrError(uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result, ::StringW successMessage, ::StringW failureMessage);

  /// @brief Method LogRequestResult, addr 0x5d2d1a0, size 0x4, virtual false, abstract: false, final false
  static inline void LogRequestResult(uint64_t requestId, bool result, ::StringW successMessage, ::StringW failureMessage);

  /// @brief Method LogWarning, addr 0x5d2d02c, size 0x8c, virtual false, abstract: false, final false
  static inline void LogWarning(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpatialAnchor_Development();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSpatialAnchor_Development", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSpatialAnchor_Development(OVRSpatialAnchor_Development&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSpatialAnchor_Development", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSpatialAnchor_Development(OVRSpatialAnchor_Development const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7693 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpatialAnchor_Development, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpatialAnchor/OperationResult
struct CORDL_TYPE OVRSpatialAnchor_OperationResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRSpatialAnchor_OperationResult_Unwrapped
  enum struct __OVRSpatialAnchor_OperationResult_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_Failure = static_cast<int32_t>(0xfffffc18),
    __E_Failure_DataIsInvalid = static_cast<int32_t>(0xfffffc10),
    __E_Failure_InvalidParameter = static_cast<int32_t>(0xfffffc17),
    __E_Failure_SpaceCloudStorageDisabled = static_cast<int32_t>(0xfffff830),
    __E_Failure_SpaceMappingInsufficient = static_cast<int32_t>(0xfffff82f),
    __E_Failure_SpaceLocalizationFailed = static_cast<int32_t>(0xfffff82e),
    __E_Failure_SpaceNetworkTimeout = static_cast<int32_t>(0xfffff82d),
    __E_Failure_SpaceNetworkRequestFailed = static_cast<int32_t>(0xfffff82c),
    __E_Failure_GroupNotFound = static_cast<int32_t>(0xfffff827),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRSpatialAnchor_OperationResult_Unwrapped() const noexcept {
    return static_cast<__OVRSpatialAnchor_OperationResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpatialAnchor_OperationResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRSpatialAnchor_OperationResult(int32_t value__) noexcept;

  /// @brief Field Failure value: I32(-1000)
  static ::GlobalNamespace::OVRSpatialAnchor_OperationResult const Failure;

  /// @brief Field Failure_DataIsInvalid value: I32(-1008)
  static ::GlobalNamespace::OVRSpatialAnchor_OperationResult const Failure_DataIsInvalid;

  /// @brief Field Failure_GroupNotFound value: I32(-2009)
  static ::GlobalNamespace::OVRSpatialAnchor_OperationResult const Failure_GroupNotFound;

  /// @brief Field Failure_InvalidParameter value: I32(-1001)
  static ::GlobalNamespace::OVRSpatialAnchor_OperationResult const Failure_InvalidParameter;

  /// @brief Field Failure_SpaceCloudStorageDisabled value: I32(-2000)
  static ::GlobalNamespace::OVRSpatialAnchor_OperationResult const Failure_SpaceCloudStorageDisabled;

  /// @brief Field Failure_SpaceLocalizationFailed value: I32(-2002)
  static ::GlobalNamespace::OVRSpatialAnchor_OperationResult const Failure_SpaceLocalizationFailed;

  /// @brief Field Failure_SpaceMappingInsufficient value: I32(-2001)
  static ::GlobalNamespace::OVRSpatialAnchor_OperationResult const Failure_SpaceMappingInsufficient;

  /// @brief Field Failure_SpaceNetworkRequestFailed value: I32(-2004)
  static ::GlobalNamespace::OVRSpatialAnchor_OperationResult const Failure_SpaceNetworkRequestFailed;

  /// @brief Field Failure_SpaceNetworkTimeout value: I32(-2003)
  static ::GlobalNamespace::OVRSpatialAnchor_OperationResult const Failure_SpaceNetworkTimeout;

  /// @brief Field Success value: I32(0)
  static ::GlobalNamespace::OVRSpatialAnchor_OperationResult const Success;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7694 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor_OperationResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpatialAnchor_OperationResult, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename TResult, typename TCapture>
// Is value type: true
// CS Name: OVRSpatialAnchor/InvertedCapture`2<TResult,TCapture>
struct CORDL_TYPE OVRSpatialAnchor_InvertedCapture_2 {
public:
  // Declarations
  /// @brief Field s_delegate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_delegate, put = setStaticF_s_delegate)) ::System::Action_2<TResult, ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>* s_delegate;

  /// @brief Method ContinueTaskWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void ContinueTaskWith(::GlobalNamespace::OVRTask_1<TResult> task, ::System::Action_2<TCapture, TResult>* onCompleted, TCapture state);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Invoke(TResult result, ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture> invertedCapture);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_2<TCapture, TResult>* callback, TCapture capture);

  static inline ::System::Action_2<TResult, ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>* getStaticF_s_delegate();

  static inline void setStaticF_s_delegate(::System::Action_2<TResult, ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpatialAnchor_InvertedCapture_2();

  // Ctor Parameters [CppParam { name: "_capture", ty: "TCapture", modifiers: "", def_value: None }, CppParam { name: "_callback", ty: "::System::Action_2<TCapture,TResult>*", modifiers: "",
  // def_value: None }]
  constexpr OVRSpatialAnchor_InvertedCapture_2(TCapture _capture, ::System::Action_2<TCapture, TResult>* _callback) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7695 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _capture, offset: 0x0, size: 0x8, def value: None
  TCapture _capture;

  /// @brief Field _callback, offset: 0x8, size: 0x8, def value: None
  ::System::Action_2<TCapture, TResult>* _callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies OVRSpace::StorageLocation
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpatialAnchor/EraseOptions
struct CORDL_TYPE OVRSpatialAnchor_EraseOptions {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpatialAnchor_EraseOptions();

  // Ctor Parameters [CppParam { name: "Storage", ty: "::GlobalNamespace::OVRSpace_StorageLocation", modifiers: "", def_value: None }]
  constexpr OVRSpatialAnchor_EraseOptions(::GlobalNamespace::OVRSpace_StorageLocation Storage) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7696 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Storage, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::OVRSpace_StorageLocation Storage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor_EraseOptions, Storage) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpatialAnchor_EraseOptions, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRSpace::StorageLocation
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpatialAnchor/SaveOptions
struct CORDL_TYPE OVRSpatialAnchor_SaveOptions {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpatialAnchor_SaveOptions();

  // Ctor Parameters [CppParam { name: "Storage", ty: "::GlobalNamespace::OVRSpace_StorageLocation", modifiers: "", def_value: None }]
  constexpr OVRSpatialAnchor_SaveOptions(::GlobalNamespace::OVRSpace_StorageLocation Storage) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7697 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Storage, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::OVRSpace_StorageLocation Storage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor_SaveOptions, Storage) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpatialAnchor_SaveOptions, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRSpace::StorageLocation
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpatialAnchor/LoadOptions
struct CORDL_TYPE OVRSpatialAnchor_LoadOptions {
public:
  // Declarations
  __declspec(property(get = get_MaxAnchorCount, put = set_MaxAnchorCount)) int32_t MaxAnchorCount;

  __declspec(property(get = get_StorageLocation, put = set_StorageLocation)) ::GlobalNamespace::OVRSpace_StorageLocation StorageLocation;

  __declspec(property(get = get_Timeout, put = set_Timeout)) double_t Timeout;

  __declspec(property(get = get_Uuids, put = set_Uuids)) ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* Uuids;

  /// @brief Method ToQueryOptions, addr 0x5d2bed0, size 0x5c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRSpaceQuery_Options ToQueryOptions();

  /// @brief Method get_MaxAnchorCount, addr 0x5d2d1b4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxAnchorCount();

  /// @brief Method get_StorageLocation, addr 0x5d2d1a4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRSpace_StorageLocation get_StorageLocation();

  /// @brief Method get_Timeout, addr 0x5d2d1c4, size 0x8, virtual false, abstract: false, final false
  inline double_t get_Timeout();

  /// @brief Method get_Uuids, addr 0x5d2d1d4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* get_Uuids();

  /// @brief Method set_MaxAnchorCount, addr 0x5d2d1bc, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxAnchorCount(int32_t value);

  /// @brief Method set_StorageLocation, addr 0x5d2d1ac, size 0x8, virtual false, abstract: false, final false
  inline void set_StorageLocation(::GlobalNamespace::OVRSpace_StorageLocation value);

  /// @brief Method set_Timeout, addr 0x5d2d1cc, size 0x8, virtual false, abstract: false, final false
  inline void set_Timeout(double_t value);

  /// @brief Method set_Uuids, addr 0x5d2d1dc, size 0x174, virtual false, abstract: false, final false
  inline void set_Uuids(::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpatialAnchor_LoadOptions();

  // Ctor Parameters [CppParam { name: "_StorageLocation_k__BackingField", ty: "::GlobalNamespace::OVRSpace_StorageLocation", modifiers: "", def_value: None }, CppParam { name:
  // "_MaxAnchorCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Timeout_k__BackingField", ty: "double_t", modifiers: "", def_value: None }, CppParam { name:
  // "_uuids", ty: "::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*", modifiers: "", def_value: None }]
  constexpr OVRSpatialAnchor_LoadOptions(::GlobalNamespace::OVRSpace_StorageLocation _StorageLocation_k__BackingField, int32_t _MaxAnchorCount_k__BackingField, double_t _Timeout_k__BackingField,
                                         ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* _uuids) noexcept;

  /// @brief Field MaxSupported offset 0xffffffff size 0x4
  static constexpr int32_t MaxSupported{ static_cast<int32_t>(0x400) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7698 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field <StorageLocation>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::OVRSpace_StorageLocation _StorageLocation_k__BackingField;

  /// @brief Field <MaxAnchorCount>k__BackingField, offset: 0x4, size: 0x4, def value: None
  int32_t _MaxAnchorCount_k__BackingField;

  /// @brief Field <Timeout>k__BackingField, offset: 0x8, size: 0x8, def value: None
  double_t _Timeout_k__BackingField;

  /// @brief Field _uuids, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* _uuids;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor_LoadOptions, _StorageLocation_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor_LoadOptions, _MaxAnchorCount_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor_LoadOptions, _Timeout_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor_LoadOptions, _uuids) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpatialAnchor_LoadOptions, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSpatialAnchor/<>c
class CORDL_TYPE OVRSpatialAnchor___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::OVRSpatialAnchor___c* __9;

  /// @brief Field <>9__33_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__33_0, put = setStaticF___9__33_0)) ::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>* __9__33_0;

  static inline ::GlobalNamespace::OVRSpatialAnchor___c* New_ctor();

  /// @brief Method <GetListToStoreTheShareRequest>b__33_0, addr 0x5d2d3a8, size 0x38, virtual false, abstract: false, final false
  inline int32_t _GetListToStoreTheShareRequest_b__33_0(::GlobalNamespace::OVRSpaceUser x, ::GlobalNamespace::OVRSpaceUser y);

  /// @brief Method .ctor, addr 0x5d2d3a4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::OVRSpatialAnchor___c* getStaticF___9();

  static inline ::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>* getStaticF___9__33_0();

  static inline void setStaticF___9(::GlobalNamespace::OVRSpatialAnchor___c* value);

  static inline void setStaticF___9__33_0(::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpatialAnchor___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSpatialAnchor___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSpatialAnchor___c(OVRSpatialAnchor___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSpatialAnchor___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSpatialAnchor___c(OVRSpatialAnchor___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7699 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpatialAnchor___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSpatialAnchor/<>c__DisplayClass65_0
class CORDL_TYPE OVRSpatialAnchor___c__DisplayClass65_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field resultsHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_resultsHandler,
                      put =
                          __cordl_internal_set_resultsHandler)) ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, int32_t>* resultsHandler;

  /// @brief Field unboundAnchors, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_unboundAnchors,
                      put = __cordl_internal_set_unboundAnchors)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* unboundAnchors;

  static inline ::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0* New_ctor();

  /// @brief Method <LoadUnboundAnchorsAsync>b__0, addr 0x5d2d3e4, size 0x268, virtual false, abstract: false, final false
  inline void _LoadUnboundAnchorsAsync_b__0(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* incrementalResults, int32_t staringIndex);

  constexpr ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, int32_t>* const& __cordl_internal_get_resultsHandler() const;

  constexpr ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, int32_t>*& __cordl_internal_get_resultsHandler();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* const& __cordl_internal_get_unboundAnchors() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*& __cordl_internal_get_unboundAnchors();

  constexpr void __cordl_internal_set_resultsHandler(::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, int32_t>* value);

  constexpr void __cordl_internal_set_unboundAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* value);

  /// @brief Method .ctor, addr 0x5d2d3e0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpatialAnchor___c__DisplayClass65_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSpatialAnchor___c__DisplayClass65_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSpatialAnchor___c__DisplayClass65_0(OVRSpatialAnchor___c__DisplayClass65_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSpatialAnchor___c__DisplayClass65_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSpatialAnchor___c__DisplayClass65_0(OVRSpatialAnchor___c__DisplayClass65_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7700 };

  /// @brief Field unboundAnchors, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* ___unboundAnchors;

  /// @brief Field resultsHandler, offset: 0x18, size: 0x8, def value: None
  ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, int32_t>* ___resultsHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0, ___unboundAnchors) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0, ___resultsHandler) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor, OVRAnchor::FetchOptions, OVRAnchor::FetchResult, OVRObjectPool::ListScope`1<T>, OVRResult`2<TValue, TStatus>, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpatialAnchor/<LoadUnboundAnchorsAsync>d__65
struct CORDL_TYPE OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d2d64c, size 0x80c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d2de58, size 0x3c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>",
  // modifiers: "", def_value: None }, CppParam { name: "unboundAnchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*", modifiers: "", def_value:
  // None }, CppParam { name: "resultsHandler", ty: "::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>*", modifiers: "", def_value:
  // None }, CppParam { name: "fetchOptions", ty: "::GlobalNamespace::OVRAnchor_FetchOptions", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>", modifiers:
  // "", def_value: None }]
  constexpr OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65(
      int32_t __1__state,
      ::GlobalNamespace::OVRTaskBuilder_1<
          ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
          __t__builder,
      ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* unboundAnchors,
      ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, int32_t>* resultsHandler, ::GlobalNamespace::OVRAnchor_FetchOptions fetchOptions,
      ::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0* __8__1, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap1,
      ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
          __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7701 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x88 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1<
      ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
      __t__builder;

  /// @brief Field unboundAnchors, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* unboundAnchors;

  /// @brief Field resultsHandler, offset: 0x30, size: 0x8, def value: None
  ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, int32_t>* resultsHandler;

  /// @brief Field fetchOptions, offset: 0x38, size: 0x30, def value: None
  ::GlobalNamespace::OVRAnchor_FetchOptions fetchOptions;

  /// @brief Field <>8__1, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0* __8__1;

  /// @brief Field <>7__wrap1, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap1;

  /// @brief Field <>u__1, offset: 0x78, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65, unboundAnchors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65, resultsHandler) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65, fetchOptions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65, __8__1) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65, __7__wrap1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65, __u__1) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65, 0x88>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor, OVRObjectPool::ListScope`1<T>, OVRPlugin::Result, OVRResult`2<TValue, TStatus>, OVRSpatialAnchor::OperationResult, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpatialAnchor/<LoadUnboundSharedAnchorsAsync>d__62
struct CORDL_TYPE OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d2de94, size 0x7b4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d2e648, size 0x3c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>",
  // modifiers: "", def_value: None }, CppParam { name: "uuids", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: None }, CppParam { name:
  // "unboundAnchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*", modifiers: "", def_value: None }, CppParam { name: "_anchorBuff_5__2", ty:
  // "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: None }]
  constexpr OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62(
      int32_t __1__state,
      ::GlobalNamespace::OVRTaskBuilder_1<
          ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
          __t__builder,
      ::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* unboundAnchors,
      ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _anchorBuff_5__2, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap2,
      ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7702 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1<
      ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
      __t__builder;

  /// @brief Field uuids, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids;

  /// @brief Field unboundAnchors, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* unboundAnchors;

  /// @brief Field <anchorBuff>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _anchorBuff_5__2;

  /// @brief Field <>7__wrap2, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62, uuids) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62, unboundAnchors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62, _anchorBuff_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62, __7__wrap2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor, OVRObjectPool::ListScope`1<T>, OVRPlugin::Result, OVRResult`2<TValue, TStatus>, OVRSpatialAnchor::OperationResult, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>,
// System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpatialAnchor/<LoadUnboundSharedAnchorsAsync>d__63
struct CORDL_TYPE OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d2e684, size 0x768, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d2edec, size 0x3c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>",
  // modifiers: "", def_value: None }, CppParam { name: "unboundAnchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*", modifiers: "", def_value:
  // None }, CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "_anchorBuff_5__2", ty:
  // "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: None }]
  constexpr OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63(
      int32_t __1__state,
      ::GlobalNamespace::OVRTaskBuilder_1<
          ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
          __t__builder,
      ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* unboundAnchors, ::System::Guid groupUuid,
      ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _anchorBuff_5__2, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap2,
      ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7703 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1<
      ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
      __t__builder;

  /// @brief Field unboundAnchors, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* unboundAnchors;

  /// @brief Field groupUuid, offset: 0x30, size: 0x10, def value: None
  ::System::Guid groupUuid;

  /// @brief Field <anchorBuff>5__2, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _anchorBuff_5__2;

  /// @brief Field <>7__wrap2, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap2;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63, unboundAnchors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63, groupUuid) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63, _anchorBuff_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63, __7__wrap2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63, __u__1) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor, OVRObjectPool::ListScope`1<T>, OVRPlugin::Result, OVRResult`2<TValue, TStatus>, OVRSpatialAnchor::OperationResult, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>,
// System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpatialAnchor/<LoadUnboundSharedAnchorsAsync>d__64
struct CORDL_TYPE OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d2ee28, size 0x7b8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d2f5e0, size 0x3c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>",
  // modifiers: "", def_value: None }, CppParam { name: "allowedAnchorUuids", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: None }, CppParam { name:
  // "unboundAnchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*", modifiers: "", def_value: None }, CppParam { name: "groupUuid", ty:
  // "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "_anchorBuff_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value:
  // None }, CppParam { name: "__7__wrap2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: None }]
  constexpr OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64(
      int32_t __1__state,
      ::GlobalNamespace::OVRTaskBuilder_1<
          ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
          __t__builder,
      ::System::Collections::Generic::IEnumerable_1<::System::Guid>* allowedAnchorUuids, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* unboundAnchors,
      ::System::Guid groupUuid, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _anchorBuff_5__2,
      ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap2, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7704 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1<
      ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
      __t__builder;

  /// @brief Field allowedAnchorUuids, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::System::Guid>* allowedAnchorUuids;

  /// @brief Field unboundAnchors, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* unboundAnchors;

  /// @brief Field groupUuid, offset: 0x38, size: 0x10, def value: None
  ::System::Guid groupUuid;

  /// @brief Field <anchorBuff>5__2, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _anchorBuff_5__2;

  /// @brief Field <>7__wrap2, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap2;

  /// @brief Field <>u__1, offset: 0x58, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64, allowedAnchorUuids) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64, unboundAnchors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64, groupUuid) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64, _anchorBuff_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64, __7__wrap2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64, __u__1) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRTaskBuilder`1<T>, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpatialAnchor/<WhenCreatedAsync>d__19
struct CORDL_TYPE OVRSpatialAnchor__WhenCreatedAsync_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d2f61c, size 0x28c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d2f8a8, size 0x3c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpatialAnchor__WhenCreatedAsync_d__19();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<bool>", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::OVRSpatialAnchor>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None }]
  constexpr OVRSpatialAnchor__WhenCreatedAsync_d__19(int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<bool> __t__builder, ::UnityW<::GlobalNamespace::OVRSpatialAnchor> __4__this,
                                                     ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7705 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSpatialAnchor> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x1, def value: None
  ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpatialAnchor/<WhenLocalizedAsync>d__22
struct CORDL_TYPE OVRSpatialAnchor__WhenLocalizedAsync_d__22 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d2f8e4, size 0x3cc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d2fcb0, size 0x3c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpatialAnchor__WhenLocalizedAsync_d__22();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<bool>", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::OVRSpatialAnchor>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "",
  // def_value: None }]
  constexpr OVRSpatialAnchor__WhenLocalizedAsync_d__22(int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<bool> __t__builder, ::UnityW<::GlobalNamespace::OVRSpatialAnchor> __4__this,
                                                       ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__1, ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7706 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSpatialAnchor> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x1, def value: None
  ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22, __u__2) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor, OVRSpatialAnchor::EraseOptions, OVRSpatialAnchor::SaveOptions, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSpatialAnchor
class CORDL_TYPE OVRSpatialAnchor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Development = ::GlobalNamespace::OVRSpatialAnchor_Development;

  using EraseOptions = ::GlobalNamespace::OVRSpatialAnchor_EraseOptions;

  template <typename TResult, typename TCapture> using InvertedCapture_2 = ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>;

  using LoadOptions = ::GlobalNamespace::OVRSpatialAnchor_LoadOptions;

  using MultiAnchorActionType = ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType;

  using MultiAnchorDelegatePair = ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair;

  using OperationResult = ::GlobalNamespace::OVRSpatialAnchor_OperationResult;

  using SaveOptions = ::GlobalNamespace::OVRSpatialAnchor_SaveOptions;

  using UnboundAnchor = ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor;

  using _LoadUnboundAnchorsAsync_d__65 = ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65;

  using _LoadUnboundSharedAnchorsAsync_d__62 = ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62;

  using _LoadUnboundSharedAnchorsAsync_d__63 = ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63;

  using _LoadUnboundSharedAnchorsAsync_d__64 = ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64;

  using _WhenCreatedAsync_d__19 = ::GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19;

  using _WhenLocalizedAsync_d__22 = ::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22;

  using __c = ::GlobalNamespace::OVRSpatialAnchor___c;

  using __c__DisplayClass65_0 = ::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0;

  /// @brief Field AsyncRequestTaskIds, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AsyncRequestTaskIds,
                      put = setStaticF_AsyncRequestTaskIds)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::System::Guid>* AsyncRequestTaskIds;

  __declspec(property(get = get_Created)) bool Created;

  /// @brief Field CreationRequests, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CreationRequests,
                      put = setStaticF_CreationRequests)) ::System::Collections::Generic::Dictionary_2<uint64_t, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* CreationRequests;

  __declspec(property(get = get_Localized)) bool Localized;

  /// @brief Field MultiAnchorCompletionDelegates, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MultiAnchorCompletionDelegates,
                      put = setStaticF_MultiAnchorCompletionDelegates)) ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>*
      MultiAnchorCompletionDelegates;

  __declspec(property(get = get_PendingCreation)) bool PendingCreation;

  /// @brief Field SaveRequests, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SaveRequests, put = setStaticF_SaveRequests)) ::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::OVRSpace_StorageLocation, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* SaveRequests;

  /// @brief Field ShareRequests, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ShareRequests, put = setStaticF_ShareRequests)) ::System::Collections::Generic::List_1<
      ::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>*
      ShareRequests;

  __declspec(property(get = get_Space)) ::GlobalNamespace::OVRSpace Space;

  /// @brief Field SpatialAnchors, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SpatialAnchors,
                      put = setStaticF_SpatialAnchors)) ::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* SpatialAnchors;

  __declspec(property(get = get_Uuid)) ::System::Guid Uuid;

  /// @brief Field <_anchor>k__BackingField, offset 0x40, size 0x18
  __declspec(property(get = __cordl_internal_get___anchor_k__BackingField, put = __cordl_internal_set___anchor_k__BackingField)) ::GlobalNamespace::OVRAnchor __anchor_k__BackingField;

  __declspec(property(get = get__anchor, put = set__anchor)) ::GlobalNamespace::OVRAnchor _anchor;

  /// @brief Field _creationFailed, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__creationFailed, put = __cordl_internal_set__creationFailed)) bool _creationFailed;

  /// @brief Field _defaultEraseOptions, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultEraseOptions, put = __cordl_internal_set__defaultEraseOptions)) ::GlobalNamespace::OVRSpatialAnchor_EraseOptions _defaultEraseOptions;

  /// @brief Field _defaultSaveOptions, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultSaveOptions, put = __cordl_internal_set__defaultSaveOptions)) ::GlobalNamespace::OVRSpatialAnchor_SaveOptions _defaultSaveOptions;

  /// @brief Field _onLocalize, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__onLocalize, put = __cordl_internal_set__onLocalize)) ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* _onLocalize;

  /// @brief Field _requestId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__requestId, put = __cordl_internal_set__requestId)) uint64_t _requestId;

  /// @brief Field _startCalled, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__startCalled, put = __cordl_internal_set__startCalled)) bool _startCalled;

  /// @brief Method AreSortedUserListsEqual, addr 0x5d27218, size 0x29c, virtual false, abstract: false, final false
  static inline bool AreSortedUserListsEqual(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>* sortedList1,
                                             ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>* sortedList2);

  /// @brief Method CopyAnchorListIntoListFromPool, addr 0x5d2b6ac, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*
  CopyAnchorListIntoListFromPool(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchorList);

  /// @brief Method CreateSpatialAnchor, addr 0x5d281f0, size 0x188, virtual false, abstract: false, final false
  inline void CreateSpatialAnchor();

  /// @brief Method Erase, addr 0x5d2af98, size 0xb8, virtual false, abstract: false, final false
  inline void Erase(::GlobalNamespace::OVRSpatialAnchor_EraseOptions eraseOptions, ::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>* onComplete);

  /// @brief Method Erase, addr 0x5d2af88, size 0x10, virtual false, abstract: false, final false
  inline void Erase(::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>* onComplete);

  /// @brief Method EraseAnchorAsync, addr 0x5d278d4, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> EraseAnchorAsync();

  /// @brief Method EraseAnchorsAsync, addr 0x5d2794c, size 0x3d0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>>
  EraseAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors, ::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids);

  /// @brief Method EraseAsync, addr 0x5d2b9d0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> EraseAsync();

  /// @brief Method EraseAsync, addr 0x5d2b050, size 0x110, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> EraseAsync(::GlobalNamespace::OVRSpatialAnchor_EraseOptions eraseOptions);

  /// @brief Method FromOVRAnchor, addr 0x5d2a330, size 0x134, virtual false, abstract: false, final false
  static inline bool FromOVRAnchor(::GlobalNamespace::OVRAnchor anchor, ::ByRef<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor> unboundAnchor);

  /// @brief Method GetListToStoreTheShareRequest, addr 0x5d26f28, size 0x2f0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*
  GetListToStoreTheShareRequest(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>* users);

  /// @brief Method GetTrackingSpacePose, addr 0x5d28f80, size 0x114, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPose GetTrackingSpacePose();

  /// @brief Method InitializeFromExisting, addr 0x5d2a724, size 0x224, virtual false, abstract: false, final false
  inline void InitializeFromExisting(::GlobalNamespace::OVRSpace space, ::System::Guid uuid);

  /// @brief Method InitializeOnLoad, addr 0x5d29230, size 0xe0, virtual false, abstract: false, final false
  static inline void InitializeOnLoad();

  /// @brief Method InitializeUnchecked, addr 0x5d27e58, size 0x290, virtual false, abstract: false, final false
  inline void InitializeUnchecked(::GlobalNamespace::OVRSpace space, ::System::Guid uuid);

  /// @brief Method InvokeMultiAnchorDelegate, addr 0x5d29928, size 0x3d4, virtual false, abstract: false, final false
  static inline void InvokeMultiAnchorDelegate(uint64_t requestId, ::GlobalNamespace::OVRSpatialAnchor_OperationResult result, ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType actionType);

  /// @brief Method LateUpdate, addr 0x5d2839c, size 0x54, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method LoadUnboundAnchors, addr 0x5d2b160, size 0x100, virtual false, abstract: false, final false
  static inline bool LoadUnboundAnchors(::GlobalNamespace::OVRSpatialAnchor_LoadOptions options,
                                        ::System::Action_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, ::Array<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>>* onComplete);

  /// @brief Method LoadUnboundAnchorsAsync, addr 0x5d2b260, size 0x178, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, ::Array<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>>
  LoadUnboundAnchorsAsync(::GlobalNamespace::OVRSpatialAnchor_LoadOptions options);

  /// @brief Method LoadUnboundAnchorsAsync, addr 0x5d29fd8, size 0xdc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<
      ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
  LoadUnboundAnchorsAsync(::GlobalNamespace::OVRAnchor_FetchOptions fetchOptions, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* unboundAnchors,
                          ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, int32_t>* resultsHandler);

  /// @brief Method LoadUnboundAnchorsAsync, addr 0x5d29ee0, size 0xf8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<
      ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
  LoadUnboundAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids,
                          ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* unboundAnchors,
                          ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, int32_t>* onIncrementalResultsAvailable);

  /// @brief Method LoadUnboundSharedAnchorsAsync, addr 0x5d2a250, size 0xe0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<
      ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
  LoadUnboundSharedAnchorsAsync(::System::Guid groupUuid, ::System::Collections::Generic::IEnumerable_1<::System::Guid>* allowedAnchorUuids,
                                ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* unboundAnchors);

  /// @brief Method LoadUnboundSharedAnchorsAsync, addr 0x5d2a180, size 0xd0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<
      ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
  LoadUnboundSharedAnchorsAsync(::System::Guid groupUuid, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* unboundAnchors);

  /// @brief Method LoadUnboundSharedAnchorsAsync, addr 0x5d2a0b4, size 0xcc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<
      ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
  LoadUnboundSharedAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids,
                                ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* unboundAnchors);

  static inline ::GlobalNamespace::OVRSpatialAnchor* New_ctor();

  /// @brief Method OnDestroy, addr 0x5d28e48, size 0x138, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnShareSpacesComplete, addr 0x5d2a690, size 0x94, virtual false, abstract: false, final false
  static inline void OnShareSpacesComplete(uint64_t requestId, ::GlobalNamespace::OVRSpatialAnchor_OperationResult result);

  /// @brief Method OnSpaceEraseComplete, addr 0x5d2bf30, size 0x4, virtual false, abstract: false, final false
  static inline void OnSpaceEraseComplete(uint64_t requestId, bool result, ::System::Guid uuid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation location);

  /// @brief Method OnSpaceListSaveComplete, addr 0x5d2c478, size 0x94, virtual false, abstract: false, final false
  static inline void OnSpaceListSaveComplete(uint64_t requestId, ::GlobalNamespace::OVRSpatialAnchor_OperationResult result);

  /// @brief Method OnSpaceQueryComplete, addr 0x5d2bf34, size 0x544, virtual false, abstract: false, final false
  static inline void OnSpaceQueryComplete(uint64_t requestId, bool queryResult);

  /// @brief Method OnSpaceSaveComplete, addr 0x5d2bf2c, size 0x4, virtual false, abstract: false, final false
  static inline void OnSpaceSaveComplete(uint64_t requestId, ::GlobalNamespace::OVRSpace space, bool result, ::System::Guid uuid);

  /// @brief Method OnSpaceSetComponentStatusComplete, addr 0x5d2a598, size 0xf8, virtual false, abstract: false, final false
  static inline void OnSpaceSetComponentStatusComplete(uint64_t requestId, bool result, ::GlobalNamespace::OVRSpace space, ::System::Guid uuid,
                                                       ::GlobalNamespace::OVRPlugin_SpaceComponentType componentType, bool enabled);

  /// @brief Method OnSpatialAnchorCreateComplete, addr 0x5d29cfc, size 0x1e4, virtual false, abstract: false, final false
  static inline void OnSpatialAnchorCreateComplete(uint64_t requestId, bool success, ::GlobalNamespace::OVRSpace space, ::System::Guid uuid);

  /// @brief Method Save, addr 0x5d2b73c, size 0x294, virtual false, abstract: false, final false
  static inline void
  Save(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors, ::GlobalNamespace::OVRSpatialAnchor_SaveOptions saveOptions,
       ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete);

  /// @brief Method Save, addr 0x5d2a948, size 0x10, virtual false, abstract: false, final false
  inline void Save(::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>* onComplete);

  /// @brief Method Save, addr 0x5d2a958, size 0xb8, virtual false, abstract: false, final false
  inline void Save(::GlobalNamespace::OVRSpatialAnchor_SaveOptions saveOptions, ::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>* onComplete);

  /// @brief Method SaveAnchorAsync, addr 0x5d2785c, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> SaveAnchorAsync();

  /// @brief Method SaveAnchorsAsync, addr 0x5d274b4, size 0x3a8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>>
  SaveAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors);

  /// @brief Method SaveAsync, addr 0x5d2b9e0, size 0x4f0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>
  SaveAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors, ::GlobalNamespace::OVRSpatialAnchor_SaveOptions saveOptions);

  /// @brief Method SaveAsync, addr 0x5d2b9d8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> SaveAsync();

  /// @brief Method SaveAsync, addr 0x5d2aa10, size 0x184, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> SaveAsync(::GlobalNamespace::OVRSpatialAnchor_SaveOptions saveOptions);

  /// @brief Method SaveBatchAnchors, addr 0x5d283f0, size 0x1e8, virtual false, abstract: false, final false
  static inline void SaveBatchAnchors();

  /// @brief Method Share, addr 0x5d28840, size 0x608, virtual false, abstract: false, final false
  static inline void
  Share(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors, ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>* users,
        ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete);

  /// @brief Method Share, addr 0x5d2abf0, size 0xa8, virtual false, abstract: false, final false
  inline void Share(::GlobalNamespace::OVRSpaceUser user, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete);

  /// @brief Method Share, addr 0x5d2ac98, size 0xb8, virtual false, abstract: false, final false
  inline void Share(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete);

  /// @brief Method Share, addr 0x5d2ad50, size 0xc0, virtual false, abstract: false, final false
  inline void Share(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2, ::GlobalNamespace::OVRSpaceUser user3,
                    ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete);

  /// @brief Method Share, addr 0x5d2ae10, size 0xd0, virtual false, abstract: false, final false
  inline void Share(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2, ::GlobalNamespace::OVRSpaceUser user3, ::GlobalNamespace::OVRSpaceUser user4,
                    ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete);

  /// @brief Method Share, addr 0x5d2aee0, size 0xa8, virtual false, abstract: false, final false
  inline void Share(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>* users, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete);

  /// @brief Method ShareAsync, addr 0x5d2665c, size 0x3dc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>
  ShareAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors, ::System::Guid groupUuid);

  /// @brief Method ShareAsync, addr 0x5d26a38, size 0x4f0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>
  ShareAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors, ::System::Collections::Generic::IEnumerable_1<::System::Guid>* groupUuids);

  /// @brief Method ShareAsync, addr 0x5d25dec, size 0xa8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> ShareAsync(::System::Guid groupUuid);

  /// @brief Method ShareAsync, addr 0x5d25e94, size 0x7c8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>
  ShareAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors,
             ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>* users);

  /// @brief Method ShareAsync, addr 0x5d25674, size 0xd8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> ShareAsync(::GlobalNamespace::OVRSpaceUser user);

  /// @brief Method ShareAsync, addr 0x5d258a4, size 0x130, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> ShareAsync(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2);

  /// @brief Method ShareAsync, addr 0x5d259d4, size 0x190, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> ShareAsync(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2,
                                                                                                      ::GlobalNamespace::OVRSpaceUser user3);

  /// @brief Method ShareAsync, addr 0x5d25b64, size 0x1e8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> ShareAsync(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2,
                                                                                                      ::GlobalNamespace::OVRSpaceUser user3, ::GlobalNamespace::OVRSpaceUser user4);

  /// @brief Method ShareAsync, addr 0x5d25d4c, size 0xa0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> ShareAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>* users);

  /// @brief Method ShareAsyncInternal, addr 0x5d2574c, size 0x158, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> ShareAsyncInternal(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>* users);

  /// @brief Method ShareBatchAnchors, addr 0x5d285d8, size 0x268, virtual false, abstract: false, final false
  static inline void ShareBatchAnchors();

  /// @brief Method Start, addr 0x5d281c4, size 0x2c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method ThrowIfBound, addr 0x5d27d1c, size 0x13c, virtual false, abstract: false, final false
  static inline void ThrowIfBound(::System::Guid uuid);

  /// @brief Method ToNativeArray, addr 0x5d2b3d8, size 0x2d4, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeArray_1<uint64_t> ToNativeArray(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors);

  /// @brief Method TryGetPose, addr 0x5d29094, size 0x19c, virtual false, abstract: false, final false
  static inline bool TryGetPose(::GlobalNamespace::OVRSpace space, ::ByRef<::GlobalNamespace::OVRPose> pose);

  /// @brief Method TryGetUnbound, addr 0x5d2a464, size 0x128, virtual false, abstract: false, final false
  static inline bool TryGetUnbound(::GlobalNamespace::OVRAnchor anchor, ::ByRef<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor> unboundAnchor);

  /// @brief Method Update, addr 0x5d28378, size 0x24, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateTransform, addr 0x5d280e8, size 0xdc, virtual false, abstract: false, final false
  inline void UpdateTransform();

  /// @brief Method WhenCreatedAsync, addr 0x5d25438, size 0xb8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> WhenCreatedAsync();

  /// @brief Method WhenLocalizedAsync, addr 0x5d255b8, size 0xbc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> WhenLocalizedAsync();

  constexpr ::GlobalNamespace::OVRAnchor const& __cordl_internal_get___anchor_k__BackingField() const;

  constexpr ::GlobalNamespace::OVRAnchor& __cordl_internal_get___anchor_k__BackingField();

  constexpr bool const& __cordl_internal_get__creationFailed() const;

  constexpr bool& __cordl_internal_get__creationFailed();

  constexpr ::GlobalNamespace::OVRSpatialAnchor_EraseOptions const& __cordl_internal_get__defaultEraseOptions() const;

  constexpr ::GlobalNamespace::OVRSpatialAnchor_EraseOptions& __cordl_internal_get__defaultEraseOptions();

  constexpr ::GlobalNamespace::OVRSpatialAnchor_SaveOptions const& __cordl_internal_get__defaultSaveOptions() const;

  constexpr ::GlobalNamespace::OVRSpatialAnchor_SaveOptions& __cordl_internal_get__defaultSaveOptions();

  constexpr ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const& __cordl_internal_get__onLocalize() const;

  constexpr ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*& __cordl_internal_get__onLocalize();

  constexpr uint64_t const& __cordl_internal_get__requestId() const;

  constexpr uint64_t& __cordl_internal_get__requestId();

  constexpr bool const& __cordl_internal_get__startCalled() const;

  constexpr bool& __cordl_internal_get__startCalled();

  constexpr void __cordl_internal_set___anchor_k__BackingField(::GlobalNamespace::OVRAnchor value);

  constexpr void __cordl_internal_set__creationFailed(bool value);

  constexpr void __cordl_internal_set__defaultEraseOptions(::GlobalNamespace::OVRSpatialAnchor_EraseOptions value);

  constexpr void __cordl_internal_set__defaultSaveOptions(::GlobalNamespace::OVRSpatialAnchor_SaveOptions value);

  constexpr void __cordl_internal_set__onLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  constexpr void __cordl_internal_set__requestId(uint64_t value);

  constexpr void __cordl_internal_set__startCalled(bool value);

  /// @brief Method .ctor, addr 0x5d2c50c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_OnLocalize, addr 0x5d25184, size 0x100, virtual false, abstract: false, final false
  inline void add_OnLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  /// @brief Method add__onLocalize, addr 0x5d24fdc, size 0xc0, virtual false, abstract: false, final false
  inline void add__onLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::System::Guid>* getStaticF_AsyncRequestTaskIds();

  static inline ::System::Collections::Generic::Dictionary_2<uint64_t, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* getStaticF_CreationRequests();

  static inline ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>* getStaticF_MultiAnchorCompletionDelegates();

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace_StorageLocation, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*
  getStaticF_SaveRequests();

  static inline ::System::Collections::Generic::List_1<
      ::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>*
  getStaticF_ShareRequests();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* getStaticF_SpatialAnchors();

  /// @brief Method get_Created, addr 0x5d25284, size 0xd8, virtual false, abstract: false, final false
  inline bool get_Created();

  /// @brief Method get_Localized, addr 0x5d254f0, size 0xc8, virtual false, abstract: false, final false
  inline bool get_Localized();

  /// @brief Method get_PendingCreation, addr 0x5d253c0, size 0x78, virtual false, abstract: false, final false
  inline bool get_PendingCreation();

  /// @brief Method get_Space, addr 0x5d2ab94, size 0x5c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRSpace get_Space();

  /// @brief Method get_Uuid, addr 0x5d25360, size 0x60, virtual false, abstract: false, final false
  inline ::System::Guid get_Uuid();

  /// @brief Method get__anchor, addr 0x5d2515c, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRAnchor get__anchor();

  /// @brief Method remove_OnLocalize, addr 0x5d2535c, size 0x4, virtual false, abstract: false, final false
  inline void remove_OnLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  /// @brief Method remove__onLocalize, addr 0x5d2509c, size 0xc0, virtual false, abstract: false, final false
  inline void remove__onLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  static inline void setStaticF_AsyncRequestTaskIds(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::System::Guid>* value);

  static inline void setStaticF_CreationRequests(::System::Collections::Generic::Dictionary_2<uint64_t, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* value);

  static inline void setStaticF_MultiAnchorCompletionDelegates(::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>* value);

  static inline void setStaticF_SaveRequests(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace_StorageLocation, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* value);

  static inline void
  setStaticF_ShareRequests(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*,
                                                                                         ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>* value);

  static inline void setStaticF_SpatialAnchors(::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* value);

  /// @brief Method set__anchor, addr 0x5d25170, size 0x14, virtual false, abstract: false, final false
  inline void set__anchor(::GlobalNamespace::OVRAnchor value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpatialAnchor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSpatialAnchor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSpatialAnchor(OVRSpatialAnchor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSpatialAnchor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSpatialAnchor(OVRSpatialAnchor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7707 };

  /// @brief Field _startCalled, offset: 0x20, size: 0x1, def value: None
  bool ____startCalled;

  /// @brief Field _requestId, offset: 0x28, size: 0x8, def value: None
  uint64_t ____requestId;

  /// @brief Field _creationFailed, offset: 0x30, size: 0x1, def value: None
  bool ____creationFailed;

  /// @brief Field _onLocalize, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* ____onLocalize;

  /// @brief Field <_anchor>k__BackingField, offset: 0x40, size: 0x18, def value: None
  ::GlobalNamespace::OVRAnchor _____anchor_k__BackingField;

  /// @brief Field _defaultSaveOptions, offset: 0x58, size: 0x4, def value: None
  ::GlobalNamespace::OVRSpatialAnchor_SaveOptions ____defaultSaveOptions;

  /// @brief Field _defaultEraseOptions, offset: 0x5c, size: 0x4, def value: None
  ::GlobalNamespace::OVRSpatialAnchor_EraseOptions ____defaultEraseOptions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____startCalled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____requestId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____creationFailed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____onLocalize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, _____anchor_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____defaultSaveOptions) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____defaultEraseOptions) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpatialAnchor, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType, "", "OVRSpatialAnchor/MultiAnchorActionType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor_OperationResult, "", "OVRSpatialAnchor/OperationResult");
NEED_NO_BOX(::GlobalNamespace::OVRSpatialAnchor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor*, "", "OVRSpatialAnchor");
NEED_NO_BOX(::GlobalNamespace::OVRSpatialAnchor_Development);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor_Development*, "", "OVRSpatialAnchor/Development");
NEED_NO_BOX(::GlobalNamespace::OVRSpatialAnchor___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor___c*, "", "OVRSpatialAnchor/<>c");
NEED_NO_BOX(::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0*, "", "OVRSpatialAnchor/<>c__DisplayClass65_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor_EraseOptions, "", "OVRSpatialAnchor/EraseOptions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2, "", "OVRSpatialAnchor/InvertedCapture`2");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor_LoadOptions, "", "OVRSpatialAnchor/LoadOptions");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair, "", "OVRSpatialAnchor/MultiAnchorDelegatePair");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor_SaveOptions, "", "OVRSpatialAnchor/SaveOptions");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, "", "OVRSpatialAnchor/UnboundAnchor");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65, "", "OVRSpatialAnchor/<LoadUnboundAnchorsAsync>d__65");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62, "", "OVRSpatialAnchor/<LoadUnboundSharedAnchorsAsync>d__62");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63, "", "OVRSpatialAnchor/<LoadUnboundSharedAnchorsAsync>d__63");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64, "", "OVRSpatialAnchor/<LoadUnboundSharedAnchorsAsync>d__64");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19, "", "OVRSpatialAnchor/<WhenCreatedAsync>d__19");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22, "", "OVRSpatialAnchor/<WhenLocalizedAsync>d__22");
