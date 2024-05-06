#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpatialAnchor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSpatialAnchor)
namespace GlobalNamespace {
struct OVRPose;
}
namespace GlobalNamespace {
struct OVRSpaceUser;
}
namespace GlobalNamespace {
struct OVRSpace;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceStorageLocation;
}
namespace GlobalNamespace {
struct __OVRSpaceQuery__Options;
}
namespace GlobalNamespace {
struct __OVRSpace__StorageLocation;
}
namespace GlobalNamespace {
class __OVRSpatialAnchor__Development;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__EraseOptions;
}
namespace GlobalNamespace {
template <typename TResult, typename TCapture> struct __OVRSpatialAnchor__InvertedCapture_2;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__LoadOptions;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__MultiAnchorActionType;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__MultiAnchorDelegatePair;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__OperationResult;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__SaveOptions;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__UnboundAnchor;
}
namespace GlobalNamespace {
class __OVRSpatialAnchor____c;
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
struct __OVRSpatialAnchor__MultiAnchorActionType;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__OperationResult;
}
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
namespace GlobalNamespace {
class __OVRSpatialAnchor__Development;
}
namespace GlobalNamespace {
class __OVRSpatialAnchor____c;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__EraseOptions;
}
namespace GlobalNamespace {
template <typename TResult, typename TCapture> struct __OVRSpatialAnchor__InvertedCapture_2;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__LoadOptions;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__MultiAnchorDelegatePair;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__SaveOptions;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__UnboundAnchor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorActionType);
MARK_VAL_T(::GlobalNamespace::__OVRSpatialAnchor__OperationResult);
MARK_REF_PTR_T(::GlobalNamespace::OVRSpatialAnchor);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSpatialAnchor__Development);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSpatialAnchor____c);
MARK_VAL_T(::GlobalNamespace::__OVRSpatialAnchor__EraseOptions);
MARK_GEN_VAL_T(::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2);
MARK_VAL_T(::GlobalNamespace::__OVRSpatialAnchor__LoadOptions);
MARK_VAL_T(::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair);
MARK_VAL_T(::GlobalNamespace::__OVRSpatialAnchor__SaveOptions);
MARK_VAL_T(::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor);
// Type: ::MultiAnchorDelegatePair
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRSpatialAnchor::MultiAnchorDelegatePair
struct CORDL_TYPE __OVRSpatialAnchor__MultiAnchorDelegatePair {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSpatialAnchor__MultiAnchorDelegatePair();

  // Ctor Parameters [CppParam { name: "Anchors", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*", modifiers: "", def_value: None }, CppParam { name:
  // "Delegate", ty: "::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*",
  // modifiers: "", def_value: None }]
  constexpr __OVRSpatialAnchor__MultiAnchorDelegatePair(
      ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* Anchors,
      ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* Delegate) noexcept;

  /// @brief Field Anchors, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* Anchors;

  /// @brief Field Delegate, offset: 0x8, size: 0x8, def value: None
  ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* Delegate;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair, Anchors) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair, Delegate) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LoadOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRSpatialAnchor::LoadOptions
struct CORDL_TYPE __OVRSpatialAnchor__LoadOptions {
public:
  // Declarations
  __declspec(property(get = get_MaxAnchorCount, put = set_MaxAnchorCount)) int32_t MaxAnchorCount;

  __declspec(property(get = get_StorageLocation, put = set_StorageLocation))::GlobalNamespace::__OVRSpace__StorageLocation StorageLocation;

  __declspec(property(get = get_Timeout, put = set_Timeout)) double_t Timeout;

  __declspec(property(get = get_Uuids, put = set_Uuids))::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* Uuids;

  /// @brief Method ToQueryOptions, addr 0x2b66fc4, size 0x114, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRSpaceQuery__Options ToQueryOptions();

  /// @brief Method get_MaxAnchorCount, addr 0x2b66e18, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxAnchorCount();

  /// @brief Method get_StorageLocation, addr 0x2b66e08, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRSpace__StorageLocation get_StorageLocation();

  /// @brief Method get_Timeout, addr 0x2b66e28, size 0x8, virtual false, abstract: false, final false
  inline double_t get_Timeout();

  /// @brief Method get_Uuids, addr 0x2b66e38, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* get_Uuids();

  /// @brief Method set_MaxAnchorCount, addr 0x2b66e20, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxAnchorCount(int32_t value);

  /// @brief Method set_StorageLocation, addr 0x2b66e10, size 0x8, virtual false, abstract: false, final false
  inline void set_StorageLocation(::GlobalNamespace::__OVRSpace__StorageLocation value);

  /// @brief Method set_Timeout, addr 0x2b66e30, size 0x8, virtual false, abstract: false, final false
  inline void set_Timeout(double_t value);

  /// @brief Method set_Uuids, addr 0x2b66e40, size 0x184, virtual false, abstract: false, final false
  inline void set_Uuids(::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSpatialAnchor__LoadOptions();

  // Ctor Parameters [CppParam { name: "_StorageLocation_k__BackingField", ty: "::GlobalNamespace::__OVRSpace__StorageLocation", modifiers: "", def_value: None }, CppParam { name:
  // "_MaxAnchorCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Timeout_k__BackingField", ty: "double_t", modifiers: "", def_value: None }, CppParam { name:
  // "_uuids", ty: "::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*", modifiers: "", def_value: None }]
  constexpr __OVRSpatialAnchor__LoadOptions(::GlobalNamespace::__OVRSpace__StorageLocation _StorageLocation_k__BackingField, int32_t _MaxAnchorCount_k__BackingField, double_t _Timeout_k__BackingField,
                                            ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* _uuids) noexcept;

  /// @brief Field <StorageLocation>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRSpace__StorageLocation _StorageLocation_k__BackingField;

  /// @brief Field <MaxAnchorCount>k__BackingField, offset: 0x4, size: 0x4, def value: None
  int32_t _MaxAnchorCount_k__BackingField;

  /// @brief Field <Timeout>k__BackingField, offset: 0x8, size: 0x8, def value: None
  double_t _Timeout_k__BackingField;

  /// @brief Field _uuids, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* _uuids;

  /// @brief Field MaxSupported offset 0xffffffff size 0x4
  static constexpr int32_t MaxSupported{ static_cast<int32_t>(0x400) };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSpatialAnchor__LoadOptions, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSpatialAnchor__LoadOptions, _StorageLocation_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSpatialAnchor__LoadOptions, _MaxAnchorCount_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSpatialAnchor__LoadOptions, _Timeout_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSpatialAnchor__LoadOptions, _uuids) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::UnboundAnchor
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRSpatialAnchor::UnboundAnchor
struct CORDL_TYPE __OVRSpatialAnchor__UnboundAnchor {
public:
  // Declarations
  __declspec(property(get = get_Localized)) bool Localized;

  __declspec(property(get = get_Localizing)) bool Localizing;

  __declspec(property(get = get_Pose))::UnityEngine::Pose Pose;

  __declspec(property(get = get_Uuid))::System::Guid Uuid;

  /// @brief Method AddStorableAndShareableComponents, addr 0x2b676a4, size 0xb0, virtual false, abstract: false, final false
  inline void AddStorableAndShareableComponents();

  /// @brief Method BindTo, addr 0x2b67754, size 0x360, virtual false, abstract: false, final false
  inline void BindTo(::GlobalNamespace::OVRSpatialAnchor* spatialAnchor);

  /// @brief Method Localize, addr 0x2b6734c, size 0xd4, virtual false, abstract: false, final false
  inline void Localize(::System::Action_2<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, bool>* onComplete, double_t timeout);

  /// @brief Method LocalizeAsync, addr 0x2b67420, size 0xe8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> LocalizeAsync(double_t timeout);

  /// @brief Method ValidateLocalization, addr 0x2b67508, size 0x19c, virtual false, abstract: false, final false
  inline void ValidateLocalization();

  /// @brief Method .ctor, addr 0x2b67ab4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRSpace space, ::System::Guid uuid);

  /// @brief Method get_Localized, addr 0x2b670e4, size 0x98, virtual false, abstract: false, final false
  inline bool get_Localized();

  /// @brief Method get_Localizing, addr 0x2b6717c, size 0xa4, virtual false, abstract: false, final false
  inline bool get_Localizing();

  /// @brief Method get_Pose, addr 0x2b67220, size 0x12c, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose get_Pose();

  /// @brief Method get_Uuid, addr 0x2b670d8, size 0xc, virtual false, abstract: false, final false
  inline ::System::Guid get_Uuid();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSpatialAnchor__UnboundAnchor();

  // Ctor Parameters [CppParam { name: "_space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: None }, CppParam { name: "_Uuid_k__BackingField", ty: "::System::Guid", modifiers: "",
  // def_value: None }]
  constexpr __OVRSpatialAnchor__UnboundAnchor(::GlobalNamespace::OVRSpace _space, ::System::Guid _Uuid_k__BackingField) noexcept;

  /// @brief Field _space, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::OVRSpace _space;

  /// @brief Field <Uuid>k__BackingField, offset: 0x8, size: 0x10, def value: None
  ::System::Guid _Uuid_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, _space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, _Uuid_k__BackingField) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiAnchorActionType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRSpatialAnchor::MultiAnchorActionType
struct CORDL_TYPE __OVRSpatialAnchor__MultiAnchorActionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRSpatialAnchor__MultiAnchorActionType_Unwrapped
  enum struct ____OVRSpatialAnchor__MultiAnchorActionType_Unwrapped : int32_t {
    __E_Save = static_cast<int32_t>(0x0),
    __E_Share = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRSpatialAnchor__MultiAnchorActionType_Unwrapped() const noexcept {
    return static_cast<____OVRSpatialAnchor__MultiAnchorActionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSpatialAnchor__MultiAnchorActionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRSpatialAnchor__MultiAnchorActionType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Save value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorActionType const Save;

  /// @brief Field Share value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorActionType const Share;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorActionType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorActionType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Development
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSpatialAnchor::Development*
class CORDL_TYPE __OVRSpatialAnchor__Development : public ::System::Object {
public:
  // Declarations
  /// @brief Method Log, addr 0x2b67ac0, size 0x8c, virtual false, abstract: false, final false
  static inline void Log(::StringW message);

  /// @brief Method LogError, addr 0x2b67bd8, size 0x8c, virtual false, abstract: false, final false
  static inline void LogError(::StringW message);

  /// @brief Method LogRequest, addr 0x2b67c64, size 0x4, virtual false, abstract: false, final false
  static inline void LogRequest(uint64_t requestId, ::StringW message);

  /// @brief Method LogRequestResult, addr 0x2b67c68, size 0x4, virtual false, abstract: false, final false
  static inline void LogRequestResult(uint64_t requestId, bool result, ::StringW successMessage, ::StringW failureMessage);

  /// @brief Method LogWarning, addr 0x2b67b4c, size 0x8c, virtual false, abstract: false, final false
  static inline void LogWarning(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSpatialAnchor__Development();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRSpatialAnchor__Development", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSpatialAnchor__Development(__OVRSpatialAnchor__Development&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSpatialAnchor__Development", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSpatialAnchor__Development(__OVRSpatialAnchor__Development const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSpatialAnchor__Development, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SaveOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRSpatialAnchor::SaveOptions
struct CORDL_TYPE __OVRSpatialAnchor__SaveOptions {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSpatialAnchor__SaveOptions();

  // Ctor Parameters [CppParam { name: "Storage", ty: "::GlobalNamespace::__OVRSpace__StorageLocation", modifiers: "", def_value: None }]
  constexpr __OVRSpatialAnchor__SaveOptions(::GlobalNamespace::__OVRSpace__StorageLocation Storage) noexcept;

  /// @brief Field Storage, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRSpace__StorageLocation Storage;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSpatialAnchor__SaveOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSpatialAnchor__SaveOptions, Storage) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::EraseOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRSpatialAnchor::EraseOptions
struct CORDL_TYPE __OVRSpatialAnchor__EraseOptions {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSpatialAnchor__EraseOptions();

  // Ctor Parameters [CppParam { name: "Storage", ty: "::GlobalNamespace::__OVRSpace__StorageLocation", modifiers: "", def_value: None }]
  constexpr __OVRSpatialAnchor__EraseOptions(::GlobalNamespace::__OVRSpace__StorageLocation Storage) noexcept;

  /// @brief Field Storage, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRSpace__StorageLocation Storage;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSpatialAnchor__EraseOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSpatialAnchor__EraseOptions, Storage) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OperationResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRSpatialAnchor::OperationResult
struct CORDL_TYPE __OVRSpatialAnchor__OperationResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRSpatialAnchor__OperationResult_Unwrapped
  enum struct ____OVRSpatialAnchor__OperationResult_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_Failure = static_cast<int32_t>(0xfffffc18),
    __E_Failure_SpaceCloudStorageDisabled = static_cast<int32_t>(0xfffff830),
    __E_Failure_SpaceMappingInsufficient = static_cast<int32_t>(0xfffff82f),
    __E_Failure_SpaceLocalizationFailed = static_cast<int32_t>(0xfffff82e),
    __E_Failure_SpaceNetworkTimeout = static_cast<int32_t>(0xfffff82d),
    __E_Failure_SpaceNetworkRequestFailed = static_cast<int32_t>(0xfffff82c),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRSpatialAnchor__OperationResult_Unwrapped() const noexcept {
    return static_cast<____OVRSpatialAnchor__OperationResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSpatialAnchor__OperationResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRSpatialAnchor__OperationResult(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Failure value: static_cast<int32_t>(0xfffffc18)
  static ::GlobalNamespace::__OVRSpatialAnchor__OperationResult const Failure;

  /// @brief Field Failure_SpaceCloudStorageDisabled value: static_cast<int32_t>(0xfffff830)
  static ::GlobalNamespace::__OVRSpatialAnchor__OperationResult const Failure_SpaceCloudStorageDisabled;

  /// @brief Field Failure_SpaceLocalizationFailed value: static_cast<int32_t>(0xfffff82e)
  static ::GlobalNamespace::__OVRSpatialAnchor__OperationResult const Failure_SpaceLocalizationFailed;

  /// @brief Field Failure_SpaceMappingInsufficient value: static_cast<int32_t>(0xfffff82f)
  static ::GlobalNamespace::__OVRSpatialAnchor__OperationResult const Failure_SpaceMappingInsufficient;

  /// @brief Field Failure_SpaceNetworkRequestFailed value: static_cast<int32_t>(0xfffff82c)
  static ::GlobalNamespace::__OVRSpatialAnchor__OperationResult const Failure_SpaceNetworkRequestFailed;

  /// @brief Field Failure_SpaceNetworkTimeout value: static_cast<int32_t>(0xfffff82d)
  static ::GlobalNamespace::__OVRSpatialAnchor__OperationResult const Failure_SpaceNetworkTimeout;

  /// @brief Field Success value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRSpatialAnchor__OperationResult const Success;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSpatialAnchor__OperationResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSpatialAnchor__OperationResult, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::InvertedCapture`2
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TResult, typename TCapture>
// Is value type: true
// CS Name: ::OVRSpatialAnchor::InvertedCapture`2<TResult,TCapture>
struct CORDL_TYPE __OVRSpatialAnchor__InvertedCapture_2 {
public:
  // Declarations
  /// @brief Field Delegate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Delegate, put = setStaticF_Delegate))::System::Action_2<TResult, ::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult, TCapture>>* Delegate;

  /// @brief Method ContinueTaskWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void ContinueTaskWith(::GlobalNamespace::OVRTask_1<TResult> task, ::System::Action_2<TCapture, TResult>* onCompleted, TCapture state);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Invoke(TResult result, ::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult, TCapture> invertedCapture);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_2<TCapture, TResult>* callback, TCapture capture);

  static inline ::System::Action_2<TResult, ::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult, TCapture>>* getStaticF_Delegate();

  static inline void setStaticF_Delegate(::System::Action_2<TResult, ::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult, TCapture>>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSpatialAnchor__InvertedCapture_2();

  // Ctor Parameters [CppParam { name: "_capture", ty: "TCapture", modifiers: "", def_value: None }, CppParam { name: "_callback", ty: "::System::Action_2<TCapture,TResult>*", modifiers: "",
  // def_value: None }]
  constexpr __OVRSpatialAnchor__InvertedCapture_2(TCapture _capture, ::System::Action_2<TCapture, TResult>* _callback) noexcept;

  /// @brief Field _capture, offset: 0x0, size: 0x8, def value: None
  TCapture _capture;

  /// @brief Field _callback, offset: 0x8, size: 0x8, def value: None
  ::System::Action_2<TCapture, TResult>* _callback;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSpatialAnchor::<>c*
class CORDL_TYPE __OVRSpatialAnchor____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__OVRSpatialAnchor____c* __9;

  /// @brief Field <>9__41_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__41_0, put = setStaticF___9__41_0))::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>* __9__41_0;

  static inline ::GlobalNamespace::__OVRSpatialAnchor____c* New_ctor();

  /// @brief Method <GetListToStoreTheShareRequest>b__41_0, addr 0x2b67cd8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t _GetListToStoreTheShareRequest_b__41_0(::GlobalNamespace::OVRSpaceUser x, ::GlobalNamespace::OVRSpaceUser y);

  /// @brief Method .ctor, addr 0x2b67cd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__OVRSpatialAnchor____c* getStaticF___9();

  static inline ::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>* getStaticF___9__41_0();

  static inline void setStaticF___9(::GlobalNamespace::__OVRSpatialAnchor____c* value);

  static inline void setStaticF___9__41_0(::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSpatialAnchor____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRSpatialAnchor____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSpatialAnchor____c(__OVRSpatialAnchor____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSpatialAnchor____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSpatialAnchor____c(__OVRSpatialAnchor____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSpatialAnchor____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRSpatialAnchor
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSpatialAnchor*
class CORDL_TYPE OVRSpatialAnchor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Development = ::GlobalNamespace::__OVRSpatialAnchor__Development;

  using EraseOptions = ::GlobalNamespace::__OVRSpatialAnchor__EraseOptions;

  template <typename TResult, typename TCapture> using InvertedCapture_2 = ::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult, TCapture>;

  using LoadOptions = ::GlobalNamespace::__OVRSpatialAnchor__LoadOptions;

  using MultiAnchorActionType = ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorActionType;

  using MultiAnchorDelegatePair = ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair;

  using OperationResult = ::GlobalNamespace::__OVRSpatialAnchor__OperationResult;

  using SaveOptions = ::GlobalNamespace::__OVRSpatialAnchor__SaveOptions;

  using UnboundAnchor = ::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor;

  using __c = ::GlobalNamespace::__OVRSpatialAnchor____c;

  /// @brief Field AsyncRequestTaskIds, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AsyncRequestTaskIds,
                             put = setStaticF_AsyncRequestTaskIds))::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::System::Guid>* AsyncRequestTaskIds;

  /// @brief Field ComponentTypeBuffer, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_ComponentTypeBuffer,
               put = setStaticF_ComponentTypeBuffer))::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType, ::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*> ComponentTypeBuffer;

  __declspec(property(get = get_Created)) bool Created;

  /// @brief Field CreationRequests, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreationRequests,
                             put = setStaticF_CreationRequests))::System::Collections::Generic::Dictionary_2<uint64_t, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* CreationRequests;

  __declspec(property(get = get_Localized)) bool Localized;

  /// @brief Field MultiAnchorCompletionDelegates, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MultiAnchorCompletionDelegates, put = setStaticF_MultiAnchorCompletionDelegates))::System::Collections::Generic::Dictionary_2<
      uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>* MultiAnchorCompletionDelegates;

  /// @brief Field OnLocalize, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_OnLocalize, put = __cordl_internal_set_OnLocalize))::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* OnLocalize;

  __declspec(property(get = get_PendingCreation)) bool PendingCreation;

  /// @brief Field SaveRequests, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SaveRequests, put = setStaticF_SaveRequests))::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::__OVRSpace__StorageLocation, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* SaveRequests;

  /// @brief Field ShareRequests, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ShareRequests, put = setStaticF_ShareRequests))::System::Collections::Generic::List_1<::System::ValueTuple_2<
      ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>* ShareRequests;

  __declspec(property(get = get_Space, put = set_Space))::GlobalNamespace::OVRSpace Space;

  /// @brief Field SpatialAnchors, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SpatialAnchors,
                             put = setStaticF_SpatialAnchors))::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* SpatialAnchors;

  /// @brief Field UnboundAnchorBuffer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UnboundAnchorBuffer,
                             put = setStaticF_UnboundAnchorBuffer))::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>* UnboundAnchorBuffer;

  __declspec(property(get = get_Uuid, put = set_Uuid))::System::Guid Uuid;

  /// @brief Field <Space>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Space_k__BackingField, put = __cordl_internal_set__Space_k__BackingField))::GlobalNamespace::OVRSpace _Space_k__BackingField;

  /// @brief Field <Uuid>k__BackingField, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__Uuid_k__BackingField, put = __cordl_internal_set__Uuid_k__BackingField))::System::Guid _Uuid_k__BackingField;

  /// @brief Field _defaultEraseOptions, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultEraseOptions, put = __cordl_internal_set__defaultEraseOptions))::GlobalNamespace::__OVRSpatialAnchor__EraseOptions _defaultEraseOptions;

  /// @brief Field _defaultSaveOptions, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultSaveOptions, put = __cordl_internal_set__defaultSaveOptions))::GlobalNamespace::__OVRSpatialAnchor__SaveOptions _defaultSaveOptions;

  /// @brief Field _requestId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__requestId, put = __cordl_internal_set__requestId)) uint64_t _requestId;

  /// @brief Field _startCalled, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__startCalled, put = __cordl_internal_set__startCalled)) bool _startCalled;

  /// @brief Method AreSortedUserListsEqual, addr 0x2b634ec, size 0x28c, virtual false, abstract: false, final false
  static inline bool AreSortedUserListsEqual(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>* sortedList1,
                                             ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>* sortedList2);

  /// @brief Method CopyAnchorListIntoListFromPool, addr 0x2b620fc, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*
  CopyAnchorListIntoListFromPool(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchorList);

  /// @brief Method CreateSpatialAnchor, addr 0x2b639d0, size 0x230, virtual false, abstract: false, final false
  inline void CreateSpatialAnchor();

  /// @brief Method Erase, addr 0x2b63788, size 0xb0, virtual false, abstract: false, final false
  inline void Erase(::GlobalNamespace::__OVRSpatialAnchor__EraseOptions eraseOptions, ::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>* onComplete);

  /// @brief Method Erase, addr 0x2b63778, size 0x10, virtual false, abstract: false, final false
  inline void Erase(::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>* onComplete);

  /// @brief Method EraseAsync, addr 0x2b6390c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> EraseAsync();

  /// @brief Method EraseAsync, addr 0x2b63838, size 0xd4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> EraseAsync(::GlobalNamespace::__OVRSpatialAnchor__EraseOptions eraseOptions);

  /// @brief Method GetListToStoreTheShareRequest, addr 0x2b631a0, size 0x34c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*
  GetListToStoreTheShareRequest(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>* users);

  /// @brief Method GetTrackingSpacePose, addr 0x2b64170, size 0xc8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPose GetTrackingSpacePose();

  /// @brief Method InitializeFromExisting, addr 0x2b614f4, size 0x20c, virtual false, abstract: false, final false
  inline void InitializeFromExisting(::GlobalNamespace::OVRSpace space, ::System::Guid uuid);

  /// @brief Method InitializeOnLoad, addr 0x2b64418, size 0xf0, virtual false, abstract: false, final false
  static inline void InitializeOnLoad();

  /// @brief Method InitializeUnchecked, addr 0x2b61830, size 0x138, virtual false, abstract: false, final false
  inline void InitializeUnchecked(::GlobalNamespace::OVRSpace space, ::System::Guid uuid);

  /// @brief Method InvokeMultiAnchorDelegate, addr 0x2b64a84, size 0x550, virtual false, abstract: false, final false
  static inline void InvokeMultiAnchorDelegate(uint64_t requestId, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult result,
                                               ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorActionType actionType);

  /// @brief Method LateUpdate, addr 0x2b63c10, size 0x50, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method LoadUnboundAnchors, addr 0x2b651e8, size 0xdc, virtual false, abstract: false, final false
  static inline bool LoadUnboundAnchors(::GlobalNamespace::__OVRSpatialAnchor__LoadOptions options,
                                        ::System::Action_1<::ArrayW<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, ::Array<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>*>>* onComplete);

  /// @brief Method LoadUnboundAnchorsAsync, addr 0x2b652c4, size 0x110, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::ArrayW<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, ::Array<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>*>>
  LoadUnboundAnchorsAsync(::GlobalNamespace::__OVRSpatialAnchor__LoadOptions options);

  static inline ::GlobalNamespace::OVRSpatialAnchor* New_ctor();

  /// @brief Method OnDestroy, addr 0x2b640b8, size 0xb8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnShareSpacesComplete, addr 0x2b65d94, size 0x68, virtual false, abstract: false, final false
  static inline void OnShareSpacesComplete(uint64_t requestId, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult result);

  /// @brief Method OnSpaceEraseComplete, addr 0x2b651e4, size 0x4, virtual false, abstract: false, final false
  static inline void OnSpaceEraseComplete(uint64_t requestId, bool result, ::System::Guid uuid, ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation location);

  /// @brief Method OnSpaceListSaveComplete, addr 0x2b65d2c, size 0x68, virtual false, abstract: false, final false
  static inline void OnSpaceListSaveComplete(uint64_t requestId, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult result);

  /// @brief Method OnSpaceQueryComplete, addr 0x2b653d4, size 0x504, virtual false, abstract: false, final false
  static inline void OnSpaceQueryComplete(uint64_t requestId, bool queryResult);

  /// @brief Method OnSpaceSaveComplete, addr 0x2b651e0, size 0x4, virtual false, abstract: false, final false
  static inline void OnSpaceSaveComplete(uint64_t requestId, ::GlobalNamespace::OVRSpace space, bool result, ::System::Guid uuid);

  /// @brief Method OnSpaceSetComponentStatusComplete, addr 0x2b65c4c, size 0xe0, virtual false, abstract: false, final false
  static inline void OnSpaceSetComponentStatusComplete(uint64_t requestId, bool result, ::GlobalNamespace::OVRSpace space, ::System::Guid uuid,
                                                       ::GlobalNamespace::__OVRPlugin__SpaceComponentType componentType, bool enabled);

  /// @brief Method OnSpatialAnchorCreateComplete, addr 0x2b64fd4, size 0x20c, virtual false, abstract: false, final false
  static inline void OnSpatialAnchorCreateComplete(uint64_t requestId, bool success, ::GlobalNamespace::OVRSpace space, ::System::Guid uuid);

  /// @brief Method PopulateUnbound, addr 0x2b658d8, size 0x374, virtual false, abstract: false, final false
  static inline void PopulateUnbound(::System::Guid uuid, uint64_t space);

  /// @brief Method Save, addr 0x2b61e3c, size 0x2c0, virtual false, abstract: false, final false
  static inline void
  Save(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors, ::GlobalNamespace::__OVRSpatialAnchor__SaveOptions saveOptions,
       ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* onComplete);

  /// @brief Method Save, addr 0x2b61968, size 0x10, virtual false, abstract: false, final false
  inline void Save(::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>* onComplete);

  /// @brief Method Save, addr 0x2b61978, size 0xb0, virtual false, abstract: false, final false
  inline void Save(::GlobalNamespace::__OVRSpatialAnchor__SaveOptions saveOptions, ::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>* onComplete);

  /// @brief Method SaveAsync, addr 0x2b61e34, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> SaveAsync();

  /// @brief Method SaveAsync, addr 0x2b61cd0, size 0x164, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> SaveAsync(::GlobalNamespace::__OVRSpatialAnchor__SaveOptions saveOptions);

  /// @brief Method SaveBatchAnchors, addr 0x2b63c60, size 0x1ec, virtual false, abstract: false, final false
  static inline void SaveBatchAnchors();

  /// @brief Method Share, addr 0x2b62b6c, size 0x634, virtual false, abstract: false, final false
  static inline void
  Share(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors, ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>* users,
        ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* onComplete);

  /// @brief Method Share, addr 0x2b62174, size 0x7c, virtual false, abstract: false, final false
  inline void Share(::GlobalNamespace::OVRSpaceUser user, ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* onComplete);

  /// @brief Method Share, addr 0x2b62400, size 0x84, virtual false, abstract: false, final false
  inline void Share(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2, ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* onComplete);

  /// @brief Method Share, addr 0x2b625b4, size 0x94, virtual false, abstract: false, final false
  inline void Share(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2, ::GlobalNamespace::OVRSpaceUser user3,
                    ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* onComplete);

  /// @brief Method Share, addr 0x2b627dc, size 0x9c, virtual false, abstract: false, final false
  inline void Share(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2, ::GlobalNamespace::OVRSpaceUser user3, ::GlobalNamespace::OVRSpaceUser user4,
                    ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* onComplete);

  /// @brief Method Share, addr 0x2b62a68, size 0x7c, virtual false, abstract: false, final false
  inline void Share(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>* users, ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* onComplete);

  /// @brief Method ShareAsync, addr 0x2b621f0, size 0xd4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult> ShareAsync(::GlobalNamespace::OVRSpaceUser user);

  /// @brief Method ShareAsync, addr 0x2b62484, size 0x130, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult> ShareAsync(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2);

  /// @brief Method ShareAsync, addr 0x2b62648, size 0x194, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult> ShareAsync(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2,
                                                                                                         ::GlobalNamespace::OVRSpaceUser user3);

  /// @brief Method ShareAsync, addr 0x2b62878, size 0x1f0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult> ShareAsync(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2,
                                                                                                         ::GlobalNamespace::OVRSpaceUser user3, ::GlobalNamespace::OVRSpaceUser user4);

  /// @brief Method ShareAsync, addr 0x2b62ae4, size 0x88, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult> ShareAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>* users);

  /// @brief Method ShareAsyncInternal, addr 0x2b622c4, size 0x13c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult> ShareAsyncInternal(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>* users);

  /// @brief Method ShareBatchAnchors, addr 0x2b63e4c, size 0x26c, virtual false, abstract: false, final false
  static inline void ShareBatchAnchors();

  /// @brief Method Start, addr 0x2b639b8, size 0x18, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method ThrowIfBound, addr 0x2b61700, size 0x130, virtual false, abstract: false, final false
  static inline void ThrowIfBound(::System::Guid uuid);

  /// @brief Method ToNativeArray, addr 0x2b61a28, size 0x2a8, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeArray_1<uint64_t> ToNativeArray(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors);

  /// @brief Method TryExtractValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> static inline bool TryExtractValue(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dict, TKey key, ByRef<TValue> value);

  /// @brief Method TryGetPose, addr 0x2b64238, size 0x1e0, virtual false, abstract: false, final false
  static inline bool TryGetPose(::GlobalNamespace::OVRSpace space, ByRef<::GlobalNamespace::OVRPose> pose);

  /// @brief Method Update, addr 0x2b63c00, size 0x10, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateTransform, addr 0x2b63914, size 0xa4, virtual false, abstract: false, final false
  inline void UpdateTransform();

  constexpr ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*& __cordl_internal_get_OnLocalize();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*> const& __cordl_internal_get_OnLocalize() const;

  constexpr ::GlobalNamespace::OVRSpace const& __cordl_internal_get__Space_k__BackingField() const;

  constexpr ::GlobalNamespace::OVRSpace& __cordl_internal_get__Space_k__BackingField();

  constexpr ::System::Guid const& __cordl_internal_get__Uuid_k__BackingField() const;

  constexpr ::System::Guid& __cordl_internal_get__Uuid_k__BackingField();

  constexpr ::GlobalNamespace::__OVRSpatialAnchor__EraseOptions const& __cordl_internal_get__defaultEraseOptions() const;

  constexpr ::GlobalNamespace::__OVRSpatialAnchor__EraseOptions& __cordl_internal_get__defaultEraseOptions();

  constexpr ::GlobalNamespace::__OVRSpatialAnchor__SaveOptions const& __cordl_internal_get__defaultSaveOptions() const;

  constexpr ::GlobalNamespace::__OVRSpatialAnchor__SaveOptions& __cordl_internal_get__defaultSaveOptions();

  constexpr uint64_t const& __cordl_internal_get__requestId() const;

  constexpr uint64_t& __cordl_internal_get__requestId();

  constexpr bool const& __cordl_internal_get__startCalled() const;

  constexpr bool& __cordl_internal_get__startCalled();

  constexpr void __cordl_internal_set_OnLocalize(::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* value);

  constexpr void __cordl_internal_set__Space_k__BackingField(::GlobalNamespace::OVRSpace value);

  constexpr void __cordl_internal_set__Uuid_k__BackingField(::System::Guid value);

  constexpr void __cordl_internal_set__defaultEraseOptions(::GlobalNamespace::__OVRSpatialAnchor__EraseOptions value);

  constexpr void __cordl_internal_set__defaultSaveOptions(::GlobalNamespace::__OVRSpatialAnchor__SaveOptions value);

  constexpr void __cordl_internal_set__requestId(uint64_t value);

  constexpr void __cordl_internal_set__startCalled(bool value);

  /// @brief Method .ctor, addr 0x2b65dfc, size 0x100c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_OnLocalize, addr 0x2b612c0, size 0xb0, virtual false, abstract: false, final false
  inline void add_OnLocalize(::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::System::Guid>* getStaticF_AsyncRequestTaskIds();

  static inline ::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType, ::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*> getStaticF_ComponentTypeBuffer();

  static inline ::System::Collections::Generic::Dictionary_2<uint64_t, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* getStaticF_CreationRequests();

  static inline ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>* getStaticF_MultiAnchorCompletionDelegates();

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSpace__StorageLocation, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*
  getStaticF_SaveRequests();

  static inline ::System::Collections::Generic::List_1<
      ::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>*
  getStaticF_ShareRequests();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* getStaticF_SpatialAnchors();

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>* getStaticF_UnboundAnchorBuffer();

  /// @brief Method get_Created, addr 0x2b61444, size 0x10, virtual false, abstract: false, final false
  inline bool get_Created();

  /// @brief Method get_Localized, addr 0x2b61464, size 0x90, virtual false, abstract: false, final false
  inline bool get_Localized();

  /// @brief Method get_PendingCreation, addr 0x2b61454, size 0x10, virtual false, abstract: false, final false
  inline bool get_PendingCreation();

  /// @brief Method get_Space, addr 0x2b61420, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRSpace get_Space();

  /// @brief Method get_Uuid, addr 0x2b61430, size 0xc, virtual false, abstract: false, final false
  inline ::System::Guid get_Uuid();

  /// @brief Method remove_OnLocalize, addr 0x2b61370, size 0xb0, virtual false, abstract: false, final false
  inline void remove_OnLocalize(::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* value);

  static inline void setStaticF_AsyncRequestTaskIds(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::System::Guid>* value);

  static inline void setStaticF_ComponentTypeBuffer(::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType, ::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*> value);

  static inline void setStaticF_CreationRequests(::System::Collections::Generic::Dictionary_2<uint64_t, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* value);

  static inline void setStaticF_MultiAnchorCompletionDelegates(::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>* value);

  static inline void setStaticF_SaveRequests(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSpace__StorageLocation, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* value);

  static inline void
  setStaticF_ShareRequests(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*,
                                                                                         ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>* value);

  static inline void setStaticF_SpatialAnchors(::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* value);

  static inline void setStaticF_UnboundAnchorBuffer(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>* value);

  /// @brief Method set_Space, addr 0x2b61428, size 0x8, virtual false, abstract: false, final false
  inline void set_Space(::GlobalNamespace::OVRSpace value);

  /// @brief Method set_Uuid, addr 0x2b6143c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _startCalled, offset: 0x18, size: 0x1, def value: None
  bool ____startCalled;

  /// @brief Field _requestId, offset: 0x20, size: 0x8, def value: None
  uint64_t ____requestId;

  /// @brief Field _defaultSaveOptions, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__OVRSpatialAnchor__SaveOptions ____defaultSaveOptions;

  /// @brief Field _defaultEraseOptions, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRSpatialAnchor__EraseOptions ____defaultEraseOptions;

  /// @brief Field OnLocalize, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* ___OnLocalize;

  /// @brief Field <Space>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::OVRSpace ____Space_k__BackingField;

  /// @brief Field <Uuid>k__BackingField, offset: 0x40, size: 0x10, def value: None
  ::System::Guid ____Uuid_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpatialAnchor, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____startCalled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____requestId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____defaultSaveOptions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____defaultEraseOptions) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ___OnLocalize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____Space_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____Uuid_k__BackingField) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorActionType, "", "OVRSpatialAnchor/MultiAnchorActionType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSpatialAnchor__OperationResult, "", "OVRSpatialAnchor/OperationResult");
NEED_NO_BOX(::GlobalNamespace::OVRSpatialAnchor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor*, "", "OVRSpatialAnchor");
NEED_NO_BOX(::GlobalNamespace::__OVRSpatialAnchor__Development);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSpatialAnchor__Development*, "", "OVRSpatialAnchor/Development");
NEED_NO_BOX(::GlobalNamespace::__OVRSpatialAnchor____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSpatialAnchor____c*, "", "OVRSpatialAnchor/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSpatialAnchor__EraseOptions, "", "OVRSpatialAnchor/EraseOptions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2, "", "OVRSpatialAnchor/InvertedCapture`2");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSpatialAnchor__LoadOptions, "", "OVRSpatialAnchor/LoadOptions");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair, "", "OVRSpatialAnchor/MultiAnchorDelegatePair");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSpatialAnchor__SaveOptions, "", "OVRSpatialAnchor/SaveOptions");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, "", "OVRSpatialAnchor/UnboundAnchor");
