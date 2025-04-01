#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpatialAnchor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSpatialAnchor)
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
class OVRSpatialAnchor___c;
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
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType);
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor_OperationResult);
MARK_REF_PTR_T(::GlobalNamespace::OVRSpatialAnchor);
MARK_REF_PTR_T(::GlobalNamespace::OVRSpatialAnchor_Development);
MARK_REF_PTR_T(::GlobalNamespace::OVRSpatialAnchor___c);
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor_EraseOptions);
MARK_GEN_VAL_T(::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2);
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor_LoadOptions);
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair);
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor_SaveOptions);
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor);
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8310 };

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

  /// @brief Method ToQueryOptions, addr 0x4014ec8, size 0x14c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRSpaceQuery_Options ToQueryOptions();

  /// @brief Method get_MaxAnchorCount, addr 0x4014d28, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxAnchorCount();

  /// @brief Method get_StorageLocation, addr 0x4014d18, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRSpace_StorageLocation get_StorageLocation();

  /// @brief Method get_Timeout, addr 0x4014d38, size 0x8, virtual false, abstract: false, final false
  inline double_t get_Timeout();

  /// @brief Method get_Uuids, addr 0x4014d48, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* get_Uuids();

  /// @brief Method set_MaxAnchorCount, addr 0x4014d30, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxAnchorCount(int32_t value);

  /// @brief Method set_StorageLocation, addr 0x4014d20, size 0x8, virtual false, abstract: false, final false
  inline void set_StorageLocation(::GlobalNamespace::OVRSpace_StorageLocation value);

  /// @brief Method set_Timeout, addr 0x4014d40, size 0x8, virtual false, abstract: false, final false
  inline void set_Timeout(double_t value);

  /// @brief Method set_Uuids, addr 0x4014d50, size 0x178, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8311 };

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

  /// @brief Method AddStorableAndShareableComponents, addr 0x40155cc, size 0xb0, virtual false, abstract: false, final false
  inline void AddStorableAndShareableComponents();

  /// @brief Method BindTo, addr 0x401567c, size 0x354, virtual false, abstract: false, final false
  inline void BindTo(::GlobalNamespace::OVRSpatialAnchor* spatialAnchor);

  /// @brief Method Localize, addr 0x401527c, size 0xd4, virtual false, abstract: false, final false
  inline void Localize(::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, bool>* onComplete, double_t timeout);

  /// @brief Method LocalizeAsync, addr 0x4015350, size 0xe8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> LocalizeAsync(double_t timeout);

  /// @brief Method ValidateLocalization, addr 0x4015438, size 0x194, virtual false, abstract: false, final false
  inline void ValidateLocalization();

  /// @brief Method .ctor, addr 0x40159d0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRSpace space, ::System::Guid uuid);

  /// @brief Method get_Localized, addr 0x4015020, size 0x98, virtual false, abstract: false, final false
  inline bool get_Localized();

  /// @brief Method get_Localizing, addr 0x40150b8, size 0xa0, virtual false, abstract: false, final false
  inline bool get_Localizing();

  /// @brief Method get_Pose, addr 0x4015158, size 0x124, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose get_Pose();

  /// @brief Method get_Uuid, addr 0x4015014, size 0xc, virtual false, abstract: false, final false
  inline ::System::Guid get_Uuid();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpatialAnchor_UnboundAnchor();

  // Ctor Parameters [CppParam { name: "_space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: None }, CppParam { name: "_Uuid_k__BackingField", ty: "::System::Guid", modifiers: "",
  // def_value: None }]
  constexpr OVRSpatialAnchor_UnboundAnchor(::GlobalNamespace::OVRSpace _space, ::System::Guid _Uuid_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8312 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8313 };

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
  /// @brief Method Log, addr 0x40159dc, size 0x8c, virtual false, abstract: false, final false
  static inline void Log(::StringW message);

  /// @brief Method LogError, addr 0x4015af4, size 0x8c, virtual false, abstract: false, final false
  static inline void LogError(::StringW message);

  /// @brief Method LogRequest, addr 0x4015b80, size 0x4, virtual false, abstract: false, final false
  static inline void LogRequest(uint64_t requestId, ::StringW message);

  /// @brief Method LogRequestResult, addr 0x4015b84, size 0x4, virtual false, abstract: false, final false
  static inline void LogRequestResult(uint64_t requestId, bool result, ::StringW successMessage, ::StringW failureMessage);

  /// @brief Method LogWarning, addr 0x4015a68, size 0x8c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8314 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpatialAnchor_Development, 0x10>, "Size mismatch!");

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8315 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8316 };

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
    __E_Failure_SpaceCloudStorageDisabled = static_cast<int32_t>(0xfffff830),
    __E_Failure_SpaceMappingInsufficient = static_cast<int32_t>(0xfffff82f),
    __E_Failure_SpaceLocalizationFailed = static_cast<int32_t>(0xfffff82e),
    __E_Failure_SpaceNetworkTimeout = static_cast<int32_t>(0xfffff82d),
    __E_Failure_SpaceNetworkRequestFailed = static_cast<int32_t>(0xfffff82c),
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8317 };

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
  /// @brief Field Delegate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Delegate, put = setStaticF_Delegate)) ::System::Action_2<TResult, ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>* Delegate;

  /// @brief Method ContinueTaskWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void ContinueTaskWith(::GlobalNamespace::OVRTask_1<TResult> task, ::System::Action_2<TCapture, TResult>* onCompleted, TCapture state);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Invoke(TResult result, ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture> invertedCapture);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_2<TCapture, TResult>* callback, TCapture capture);

  static inline ::System::Action_2<TResult, ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>* getStaticF_Delegate();

  static inline void setStaticF_Delegate(::System::Action_2<TResult, ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpatialAnchor_InvertedCapture_2();

  // Ctor Parameters [CppParam { name: "_capture", ty: "TCapture", modifiers: "", def_value: None }, CppParam { name: "_callback", ty: "::System::Action_2<TCapture,TResult>*", modifiers: "",
  // def_value: None }]
  constexpr OVRSpatialAnchor_InvertedCapture_2(TCapture _capture, ::System::Action_2<TCapture, TResult>* _callback) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8318 };

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
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSpatialAnchor/<>c
class CORDL_TYPE OVRSpatialAnchor___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::OVRSpatialAnchor___c* __9;

  /// @brief Field <>9__41_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__41_0, put = setStaticF___9__41_0)) ::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>* __9__41_0;

  static inline ::GlobalNamespace::OVRSpatialAnchor___c* New_ctor();

  /// @brief Method <GetListToStoreTheShareRequest>b__41_0, addr 0x4015bec, size 0x3c, virtual false, abstract: false, final false
  inline int32_t _GetListToStoreTheShareRequest_b__41_0(::GlobalNamespace::OVRSpaceUser x, ::GlobalNamespace::OVRSpaceUser y);

  /// @brief Method .ctor, addr 0x4015be4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::OVRSpatialAnchor___c* getStaticF___9();

  static inline ::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>* getStaticF___9__41_0();

  static inline void setStaticF___9(::GlobalNamespace::OVRSpatialAnchor___c* value);

  static inline void setStaticF___9__41_0(::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8319 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpatialAnchor___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRSpace, OVRSpatialAnchor::EraseOptions, OVRSpatialAnchor::SaveOptions, System.Guid, UnityEngine.MonoBehaviour
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

  using __c = ::GlobalNamespace::OVRSpatialAnchor___c;

  /// @brief Field AsyncRequestTaskIds, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AsyncRequestTaskIds,
                      put = setStaticF_AsyncRequestTaskIds)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::System::Guid>* AsyncRequestTaskIds;

  /// @brief Field ComponentTypeBuffer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ComponentTypeBuffer,
                      put = setStaticF_ComponentTypeBuffer)) ::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType, ::Array<::GlobalNamespace::OVRPlugin_SpaceComponentType>*>
      ComponentTypeBuffer;

  __declspec(property(get = get_Created)) bool Created;

  /// @brief Field CreationRequests, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CreationRequests,
                      put = setStaticF_CreationRequests)) ::System::Collections::Generic::Dictionary_2<uint64_t, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* CreationRequests;

  __declspec(property(get = get_Localized)) bool Localized;

  /// @brief Field MultiAnchorCompletionDelegates, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MultiAnchorCompletionDelegates,
                      put = setStaticF_MultiAnchorCompletionDelegates)) ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>*
      MultiAnchorCompletionDelegates;

  /// @brief Field OnLocalize, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_OnLocalize, put = __cordl_internal_set_OnLocalize)) ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* OnLocalize;

  __declspec(property(get = get_PendingCreation)) bool PendingCreation;

  /// @brief Field SaveRequests, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SaveRequests, put = setStaticF_SaveRequests)) ::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::OVRSpace_StorageLocation, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* SaveRequests;

  /// @brief Field ShareRequests, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ShareRequests, put = setStaticF_ShareRequests)) ::System::Collections::Generic::List_1<
      ::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>*
      ShareRequests;

  __declspec(property(get = get_Space, put = set_Space)) ::GlobalNamespace::OVRSpace Space;

  /// @brief Field SpatialAnchors, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SpatialAnchors,
                      put = setStaticF_SpatialAnchors)) ::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* SpatialAnchors;

  /// @brief Field UnboundAnchorBuffer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UnboundAnchorBuffer,
                      put = setStaticF_UnboundAnchorBuffer)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* UnboundAnchorBuffer;

  __declspec(property(get = get_Uuid, put = set_Uuid)) ::System::Guid Uuid;

  /// @brief Field <Space>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Space_k__BackingField, put = __cordl_internal_set__Space_k__BackingField)) ::GlobalNamespace::OVRSpace _Space_k__BackingField;

  /// @brief Field <Uuid>k__BackingField, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__Uuid_k__BackingField, put = __cordl_internal_set__Uuid_k__BackingField)) ::System::Guid _Uuid_k__BackingField;

  /// @brief Field _defaultEraseOptions, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultEraseOptions, put = __cordl_internal_set__defaultEraseOptions)) ::GlobalNamespace::OVRSpatialAnchor_EraseOptions _defaultEraseOptions;

  /// @brief Field _defaultSaveOptions, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultSaveOptions, put = __cordl_internal_set__defaultSaveOptions)) ::GlobalNamespace::OVRSpatialAnchor_SaveOptions _defaultSaveOptions;

  /// @brief Field _requestId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__requestId, put = __cordl_internal_set__requestId)) uint64_t _requestId;

  /// @brief Field _startCalled, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__startCalled, put = __cordl_internal_set__startCalled)) bool _startCalled;

  /// @brief Method AreSortedUserListsEqual, addr 0x4012320, size 0x2a0, virtual false, abstract: false, final false
  static inline bool AreSortedUserListsEqual(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>* sortedList1,
                                             ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>* sortedList2);

  /// @brief Method CopyAnchorListIntoListFromPool, addr 0x4010eb0, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*
  CopyAnchorListIntoListFromPool(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchorList);

  /// @brief Method CreateSpatialAnchor, addr 0x4012818, size 0x224, virtual false, abstract: false, final false
  inline void CreateSpatialAnchor();

  /// @brief Method Erase, addr 0x40125d0, size 0xb0, virtual false, abstract: false, final false
  inline void Erase(::GlobalNamespace::OVRSpatialAnchor_EraseOptions eraseOptions, ::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>* onComplete);

  /// @brief Method Erase, addr 0x40125c0, size 0x10, virtual false, abstract: false, final false
  inline void Erase(::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>* onComplete);

  /// @brief Method EraseAsync, addr 0x4012754, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> EraseAsync();

  /// @brief Method EraseAsync, addr 0x4012680, size 0xd4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> EraseAsync(::GlobalNamespace::OVRSpatialAnchor_EraseOptions eraseOptions);

  /// @brief Method GetListToStoreTheShareRequest, addr 0x4011fdc, size 0x344, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*
  GetListToStoreTheShareRequest(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>* users);

  /// @brief Method GetTrackingSpacePose, addr 0x4012fa8, size 0xc4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPose GetTrackingSpacePose();

  /// @brief Method InitializeFromExisting, addr 0x40102dc, size 0x200, virtual false, abstract: false, final false
  inline void InitializeFromExisting(::GlobalNamespace::OVRSpace space, ::System::Guid uuid);

  /// @brief Method InitializeOnLoad, addr 0x401324c, size 0xf0, virtual false, abstract: false, final false
  static inline void InitializeOnLoad();

  /// @brief Method InitializeUnchecked, addr 0x4010604, size 0x138, virtual false, abstract: false, final false
  inline void InitializeUnchecked(::GlobalNamespace::OVRSpace space, ::System::Guid uuid);

  /// @brief Method InvokeMultiAnchorDelegate, addr 0x4013890, size 0x594, virtual false, abstract: false, final false
  static inline void InvokeMultiAnchorDelegate(uint64_t requestId, ::GlobalNamespace::OVRSpatialAnchor_OperationResult result, ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType actionType);

  /// @brief Method LateUpdate, addr 0x4012a4c, size 0x50, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method LoadUnboundAnchors, addr 0x4014038, size 0x104, virtual false, abstract: false, final false
  static inline bool LoadUnboundAnchors(::GlobalNamespace::OVRSpatialAnchor_LoadOptions options,
                                        ::System::Action_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, ::Array<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>>* onComplete);

  /// @brief Method LoadUnboundAnchorsAsync, addr 0x401413c, size 0x124, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, ::Array<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>>
  LoadUnboundAnchorsAsync(::GlobalNamespace::OVRSpatialAnchor_LoadOptions options);

  static inline ::GlobalNamespace::OVRSpatialAnchor* New_ctor();

  /// @brief Method OnDestroy, addr 0x4012ef0, size 0xb8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnShareSpacesComplete, addr 0x4014ca4, size 0x68, virtual false, abstract: false, final false
  static inline void OnShareSpacesComplete(uint64_t requestId, ::GlobalNamespace::OVRSpatialAnchor_OperationResult result);

  /// @brief Method OnSpaceEraseComplete, addr 0x4014034, size 0x4, virtual false, abstract: false, final false
  static inline void OnSpaceEraseComplete(uint64_t requestId, bool result, ::System::Guid uuid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation location);

  /// @brief Method OnSpaceListSaveComplete, addr 0x4014c3c, size 0x68, virtual false, abstract: false, final false
  static inline void OnSpaceListSaveComplete(uint64_t requestId, ::GlobalNamespace::OVRSpatialAnchor_OperationResult result);

  /// @brief Method OnSpaceQueryComplete, addr 0x4014260, size 0x598, virtual false, abstract: false, final false
  static inline void OnSpaceQueryComplete(uint64_t requestId, bool queryResult);

  /// @brief Method OnSpaceSaveComplete, addr 0x4014030, size 0x4, virtual false, abstract: false, final false
  static inline void OnSpaceSaveComplete(uint64_t requestId, ::GlobalNamespace::OVRSpace space, bool result, ::System::Guid uuid);

  /// @brief Method OnSpaceSetComponentStatusComplete, addr 0x4014b5c, size 0xe0, virtual false, abstract: false, final false
  static inline void OnSpaceSetComponentStatusComplete(uint64_t requestId, bool result, ::GlobalNamespace::OVRSpace space, ::System::Guid uuid,
                                                       ::GlobalNamespace::OVRPlugin_SpaceComponentType componentType, bool enabled);

  /// @brief Method OnSpatialAnchorCreateComplete, addr 0x4013e24, size 0x20c, virtual false, abstract: false, final false
  static inline void OnSpatialAnchorCreateComplete(uint64_t requestId, bool success, ::GlobalNamespace::OVRSpace space, ::System::Guid uuid);

  /// @brief Method PopulateUnbound, addr 0x40147f8, size 0x364, virtual false, abstract: false, final false
  static inline void PopulateUnbound(::System::Guid uuid, uint64_t space);

  /// @brief Method Save, addr 0x4010bf8, size 0x2b8, virtual false, abstract: false, final false
  static inline void
  Save(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors, ::GlobalNamespace::OVRSpatialAnchor_SaveOptions saveOptions,
       ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete);

  /// @brief Method Save, addr 0x401073c, size 0x10, virtual false, abstract: false, final false
  inline void Save(::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>* onComplete);

  /// @brief Method Save, addr 0x401074c, size 0xb0, virtual false, abstract: false, final false
  inline void Save(::GlobalNamespace::OVRSpatialAnchor_SaveOptions saveOptions, ::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>* onComplete);

  /// @brief Method SaveAsync, addr 0x4010bf0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> SaveAsync();

  /// @brief Method SaveAsync, addr 0x4010a90, size 0x160, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> SaveAsync(::GlobalNamespace::OVRSpatialAnchor_SaveOptions saveOptions);

  /// @brief Method SaveBatchAnchors, addr 0x4012a9c, size 0x1ec, virtual false, abstract: false, final false
  static inline void SaveBatchAnchors();

  /// @brief Method Share, addr 0x40119a8, size 0x634, virtual false, abstract: false, final false
  static inline void
  Share(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors, ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>* users,
        ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete);

  /// @brief Method Share, addr 0x4010f28, size 0xa0, virtual false, abstract: false, final false
  inline void Share(::GlobalNamespace::OVRSpaceUser user, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete);

  /// @brief Method Share, addr 0x40111d0, size 0xa8, virtual false, abstract: false, final false
  inline void Share(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete);

  /// @brief Method Share, addr 0x40113a0, size 0xb8, virtual false, abstract: false, final false
  inline void Share(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2, ::GlobalNamespace::OVRSpaceUser user3,
                    ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete);

  /// @brief Method Share, addr 0x40115e0, size 0xc0, virtual false, abstract: false, final false
  inline void Share(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2, ::GlobalNamespace::OVRSpaceUser user3, ::GlobalNamespace::OVRSpaceUser user4,
                    ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete);

  /// @brief Method Share, addr 0x4011880, size 0xa0, virtual false, abstract: false, final false
  inline void Share(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>* users, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete);

  /// @brief Method ShareAsync, addr 0x4010fc8, size 0xd0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> ShareAsync(::GlobalNamespace::OVRSpaceUser user);

  /// @brief Method ShareAsync, addr 0x4011278, size 0x128, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> ShareAsync(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2);

  /// @brief Method ShareAsync, addr 0x4011458, size 0x188, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> ShareAsync(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2,
                                                                                                      ::GlobalNamespace::OVRSpaceUser user3);

  /// @brief Method ShareAsync, addr 0x40116a0, size 0x1e0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> ShareAsync(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2,
                                                                                                      ::GlobalNamespace::OVRSpaceUser user3, ::GlobalNamespace::OVRSpaceUser user4);

  /// @brief Method ShareAsync, addr 0x4011920, size 0x88, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> ShareAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>* users);

  /// @brief Method ShareAsyncInternal, addr 0x4011098, size 0x138, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> ShareAsyncInternal(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>* users);

  /// @brief Method ShareBatchAnchors, addr 0x4012c88, size 0x268, virtual false, abstract: false, final false
  static inline void ShareBatchAnchors();

  /// @brief Method Start, addr 0x4012800, size 0x18, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method ThrowIfBound, addr 0x40104dc, size 0x128, virtual false, abstract: false, final false
  static inline void ThrowIfBound(::System::Guid uuid);

  /// @brief Method ToNativeArray, addr 0x40107fc, size 0x294, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeArray_1<uint64_t> ToNativeArray(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors);

  /// @brief Method TryExtractValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> static inline bool TryExtractValue(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dict, TKey key, ::ByRef<TValue> value);

  /// @brief Method TryGetPose, addr 0x401306c, size 0x1e0, virtual false, abstract: false, final false
  static inline bool TryGetPose(::GlobalNamespace::OVRSpace space, ::ByRef<::GlobalNamespace::OVRPose> pose);

  /// @brief Method Update, addr 0x4012a3c, size 0x10, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateTransform, addr 0x401275c, size 0xa4, virtual false, abstract: false, final false
  inline void UpdateTransform();

  constexpr ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const& __cordl_internal_get_OnLocalize() const;

  constexpr ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*& __cordl_internal_get_OnLocalize();

  constexpr ::GlobalNamespace::OVRSpace const& __cordl_internal_get__Space_k__BackingField() const;

  constexpr ::GlobalNamespace::OVRSpace& __cordl_internal_get__Space_k__BackingField();

  constexpr ::System::Guid const& __cordl_internal_get__Uuid_k__BackingField() const;

  constexpr ::System::Guid& __cordl_internal_get__Uuid_k__BackingField();

  constexpr ::GlobalNamespace::OVRSpatialAnchor_EraseOptions const& __cordl_internal_get__defaultEraseOptions() const;

  constexpr ::GlobalNamespace::OVRSpatialAnchor_EraseOptions& __cordl_internal_get__defaultEraseOptions();

  constexpr ::GlobalNamespace::OVRSpatialAnchor_SaveOptions const& __cordl_internal_get__defaultSaveOptions() const;

  constexpr ::GlobalNamespace::OVRSpatialAnchor_SaveOptions& __cordl_internal_get__defaultSaveOptions();

  constexpr uint64_t const& __cordl_internal_get__requestId() const;

  constexpr uint64_t& __cordl_internal_get__requestId();

  constexpr bool const& __cordl_internal_get__startCalled() const;

  constexpr bool& __cordl_internal_get__startCalled();

  constexpr void __cordl_internal_set_OnLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  constexpr void __cordl_internal_set__Space_k__BackingField(::GlobalNamespace::OVRSpace value);

  constexpr void __cordl_internal_set__Uuid_k__BackingField(::System::Guid value);

  constexpr void __cordl_internal_set__defaultEraseOptions(::GlobalNamespace::OVRSpatialAnchor_EraseOptions value);

  constexpr void __cordl_internal_set__defaultSaveOptions(::GlobalNamespace::OVRSpatialAnchor_SaveOptions value);

  constexpr void __cordl_internal_set__requestId(uint64_t value);

  constexpr void __cordl_internal_set__startCalled(bool value);

  /// @brief Method .ctor, addr 0x4014d0c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_OnLocalize, addr 0x40100a8, size 0xb0, virtual false, abstract: false, final false
  inline void add_OnLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::System::Guid>* getStaticF_AsyncRequestTaskIds();

  static inline ::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType, ::Array<::GlobalNamespace::OVRPlugin_SpaceComponentType>*> getStaticF_ComponentTypeBuffer();

  static inline ::System::Collections::Generic::Dictionary_2<uint64_t, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* getStaticF_CreationRequests();

  static inline ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>* getStaticF_MultiAnchorCompletionDelegates();

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace_StorageLocation, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*
  getStaticF_SaveRequests();

  static inline ::System::Collections::Generic::List_1<
      ::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>*
  getStaticF_ShareRequests();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* getStaticF_SpatialAnchors();

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* getStaticF_UnboundAnchorBuffer();

  /// @brief Method get_Created, addr 0x401022c, size 0x10, virtual false, abstract: false, final false
  inline bool get_Created();

  /// @brief Method get_Localized, addr 0x401024c, size 0x90, virtual false, abstract: false, final false
  inline bool get_Localized();

  /// @brief Method get_PendingCreation, addr 0x401023c, size 0x10, virtual false, abstract: false, final false
  inline bool get_PendingCreation();

  /// @brief Method get_Space, addr 0x4010208, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRSpace get_Space();

  /// @brief Method get_Uuid, addr 0x4010218, size 0xc, virtual false, abstract: false, final false
  inline ::System::Guid get_Uuid();

  /// @brief Method remove_OnLocalize, addr 0x4010158, size 0xb0, virtual false, abstract: false, final false
  inline void remove_OnLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  static inline void setStaticF_AsyncRequestTaskIds(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::System::Guid>* value);

  static inline void setStaticF_ComponentTypeBuffer(::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType, ::Array<::GlobalNamespace::OVRPlugin_SpaceComponentType>*> value);

  static inline void setStaticF_CreationRequests(::System::Collections::Generic::Dictionary_2<uint64_t, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* value);

  static inline void setStaticF_MultiAnchorCompletionDelegates(::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>* value);

  static inline void setStaticF_SaveRequests(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace_StorageLocation, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* value);

  static inline void
  setStaticF_ShareRequests(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*,
                                                                                         ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>* value);

  static inline void setStaticF_SpatialAnchors(::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* value);

  static inline void setStaticF_UnboundAnchorBuffer(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* value);

  /// @brief Method set_Space, addr 0x4010210, size 0x8, virtual false, abstract: false, final false
  inline void set_Space(::GlobalNamespace::OVRSpace value);

  /// @brief Method set_Uuid, addr 0x4010224, size 0x8, virtual false, abstract: false, final false
  inline void set_Uuid(::System::Guid value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8320 };

  /// @brief Field _startCalled, offset: 0x20, size: 0x1, def value: None
  bool ____startCalled;

  /// @brief Field _requestId, offset: 0x28, size: 0x8, def value: None
  uint64_t ____requestId;

  /// @brief Field _defaultSaveOptions, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::OVRSpatialAnchor_SaveOptions ____defaultSaveOptions;

  /// @brief Field _defaultEraseOptions, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::OVRSpatialAnchor_EraseOptions ____defaultEraseOptions;

  /// @brief Field OnLocalize, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* ___OnLocalize;

  /// @brief Field <Space>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::OVRSpace ____Space_k__BackingField;

  /// @brief Field <Uuid>k__BackingField, offset: 0x48, size: 0x10, def value: None
  ::System::Guid ____Uuid_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____startCalled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____requestId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____defaultSaveOptions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____defaultEraseOptions) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ___OnLocalize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____Space_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____Uuid_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpatialAnchor, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType, "", "OVRSpatialAnchor/MultiAnchorActionType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor_OperationResult, "", "OVRSpatialAnchor/OperationResult");
NEED_NO_BOX(::GlobalNamespace::OVRSpatialAnchor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor*, "", "OVRSpatialAnchor");
NEED_NO_BOX(::GlobalNamespace::OVRSpatialAnchor_Development);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor_Development*, "", "OVRSpatialAnchor/Development");
NEED_NO_BOX(::GlobalNamespace::OVRSpatialAnchor___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor___c*, "", "OVRSpatialAnchor/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor_EraseOptions, "", "OVRSpatialAnchor/EraseOptions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2, "", "OVRSpatialAnchor/InvertedCapture`2");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor_LoadOptions, "", "OVRSpatialAnchor/LoadOptions");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair, "", "OVRSpatialAnchor/MultiAnchorDelegatePair");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor_SaveOptions, "", "OVRSpatialAnchor/SaveOptions");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, "", "OVRSpatialAnchor/UnboundAnchor");
