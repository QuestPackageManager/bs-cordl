#pragma once
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
struct __OVRSpatialAnchor__OperationResult;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__UnboundAnchor;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class __OVRSpatialAnchor____c;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__MultiAnchorActionType;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__SingleAnchorDelegatePair;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace GlobalNamespace {
struct OVRSpace;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
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
namespace System {
struct Guid;
}
namespace GlobalNamespace {
struct OVRPose;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceStorageLocation;
}
namespace GlobalNamespace {
struct OVRSpaceUser;
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
namespace System {
template <typename T> class Comparison_1;
}
namespace GlobalNamespace {
struct __OVRSpaceQuery__Options;
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
struct __OVRSpatialAnchor__LoadOptions;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__MultiAnchorDelegatePair;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__SaveOptions;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__SingleAnchorDelegatePair;
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
MARK_VAL_T(::GlobalNamespace::__OVRSpatialAnchor__LoadOptions);
MARK_VAL_T(::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair);
MARK_VAL_T(::GlobalNamespace::__OVRSpatialAnchor__SaveOptions);
MARK_VAL_T(::GlobalNamespace::__OVRSpatialAnchor__SingleAnchorDelegatePair);
MARK_VAL_T(::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor);
// Type: ::SingleAnchorDelegatePair
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8829))
// CS Name: ::OVRSpatialAnchor::SingleAnchorDelegatePair
struct CORDL_TYPE __OVRSpatialAnchor__SingleAnchorDelegatePair {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Anchor", ty: "::GlobalNamespace::OVRSpatialAnchor*", modifiers: "", def_value: None }, CppParam { name: "Delegate", ty:
  // "::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*,bool>*", modifiers: "", def_value: None }]
  constexpr __OVRSpatialAnchor__SingleAnchorDelegatePair(::GlobalNamespace::OVRSpatialAnchor* Anchor, ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>* Delegate) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSpatialAnchor__SingleAnchorDelegatePair();

  /// @brief Field Anchor, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::OVRSpatialAnchor* Anchor;

  /// @brief Field Delegate, offset: 0x8, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>* Delegate;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSpatialAnchor__SingleAnchorDelegatePair, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSpatialAnchor__SingleAnchorDelegatePair, Anchor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSpatialAnchor__SingleAnchorDelegatePair, Delegate) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiAnchorDelegatePair
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8830))
// CS Name: ::OVRSpatialAnchor::MultiAnchorDelegatePair
struct CORDL_TYPE __OVRSpatialAnchor__MultiAnchorDelegatePair {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Anchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>*", modifiers: "", def_value: None }, CppParam { name: "Delegate",
  // ty: "::System::Action_2<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*", modifiers: "", def_value:
  // None }]
  constexpr __OVRSpatialAnchor__MultiAnchorDelegatePair(
      ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>* Anchors,
      ::System::Action_2<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* Delegate) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSpatialAnchor__MultiAnchorDelegatePair();

  /// @brief Field Anchors, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>* Anchors;

  /// @brief Field Delegate, offset: 0x8, size: 0x8, def value: None
  ::System::Action_2<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* Delegate;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8824))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8831))
// CS Name: ::OVRSpatialAnchor::LoadOptions
struct CORDL_TYPE __OVRSpatialAnchor__LoadOptions {
public:
  // Declarations
  __declspec(property(get = get_StorageLocation, put = set_StorageLocation))::GlobalNamespace::__OVRSpace__StorageLocation StorageLocation;

  __declspec(property(get = get_MaxAnchorCount, put = set_MaxAnchorCount)) int32_t MaxAnchorCount;

  __declspec(property(get = get_Timeout, put = set_Timeout)) double_t Timeout;

  __declspec(property(get = get_Uuids, put = set_Uuids))::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* Uuids;

  /// @brief Method get_StorageLocation addr 0x26275ac size 0x8 virtual false final false
  inline ::GlobalNamespace::__OVRSpace__StorageLocation get_StorageLocation();

  /// @brief Method set_StorageLocation addr 0x26275b4 size 0x8 virtual false final false
  inline void set_StorageLocation(::GlobalNamespace::__OVRSpace__StorageLocation value);

  /// @brief Method get_MaxAnchorCount addr 0x26275bc size 0x8 virtual false final false
  inline int32_t get_MaxAnchorCount();

  /// @brief Method set_MaxAnchorCount addr 0x26275c4 size 0x8 virtual false final false
  inline void set_MaxAnchorCount(int32_t value);

  /// @brief Method get_Timeout addr 0x26275cc size 0x8 virtual false final false
  inline double_t get_Timeout();

  /// @brief Method set_Timeout addr 0x26275d4 size 0x8 virtual false final false
  inline void set_Timeout(double_t value);

  /// @brief Method get_Uuids addr 0x26275dc size 0x8 virtual false final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* get_Uuids();

  /// @brief Method set_Uuids addr 0x26275e4 size 0x184 virtual false final false
  inline void set_Uuids(::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* value);

  /// @brief Method ToQueryOptions addr 0x2626ad0 size 0x110 virtual false final false
  inline ::GlobalNamespace::__OVRSpaceQuery__Options ToQueryOptions();

  // Ctor Parameters [CppParam { name: "_StorageLocation_k__BackingField", ty: "::GlobalNamespace::__OVRSpace__StorageLocation", modifiers: "", def_value: None }, CppParam { name:
  // "_MaxAnchorCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Timeout_k__BackingField", ty: "double_t", modifiers: "", def_value: None }, CppParam { name:
  // "_uuids", ty: "::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*", modifiers: "", def_value: None }]
  constexpr __OVRSpatialAnchor__LoadOptions(::GlobalNamespace::__OVRSpace__StorageLocation _StorageLocation_k__BackingField, int32_t _MaxAnchorCount_k__BackingField, double_t _Timeout_k__BackingField,
                                            ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* _uuids) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSpatialAnchor__LoadOptions();

  /// @brief Field <StorageLocation>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRSpace__StorageLocation _StorageLocation_k__BackingField;

  /// @brief Field <MaxAnchorCount>k__BackingField, offset: 0x4, size: 0x4, def value: None
  int32_t _MaxAnchorCount_k__BackingField;

  /// @brief Field <Timeout>k__BackingField, offset: 0x8, size: 0x8, def value: None
  double_t _Timeout_k__BackingField;

  /// @brief Field _uuids, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* _uuids;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field MaxSupported offset 0xffffffff size 0x4
  static constexpr int32_t MaxSupported{ static_cast<int32_t>(0x400) };

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2406)), TypeDefinitionIndex(TypeDefinitionIndex(8825))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8832))
// CS Name: ::OVRSpatialAnchor::UnboundAnchor
struct CORDL_TYPE __OVRSpatialAnchor__UnboundAnchor {
public:
  // Declarations
  __declspec(property(get = get_Uuid))::System::Guid Uuid;

  __declspec(property(get = get_Localized)) bool Localized;

  __declspec(property(get = get_Localizing)) bool Localizing;

  __declspec(property(get = get_Pose))::UnityEngine::Pose Pose;

  /// @brief Method get_Uuid addr 0x2627768 size 0xc virtual false final false
  inline ::System::Guid get_Uuid();

  /// @brief Method get_Localized addr 0x2627774 size 0x88 virtual false final false
  inline bool get_Localized();

  /// @brief Method get_Localizing addr 0x26277fc size 0x94 virtual false final false
  inline bool get_Localizing();

  /// @brief Method get_Pose addr 0x2627890 size 0x124 virtual false final false
  inline ::UnityEngine::Pose get_Pose();

  /// @brief Method Localize addr 0x26279b4 size 0x2c0 virtual false final false
  inline void Localize(::System::Action_2<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, bool>* onComplete, double_t timeout);

  /// @brief Method BindTo addr 0x2627c74 size 0x340 virtual false final false
  inline void BindTo(::GlobalNamespace::OVRSpatialAnchor* spatialAnchor);

  /// @brief Method .ctor addr 0x2627358 size 0xc virtual false final false
  inline void _ctor(::GlobalNamespace::OVRSpace space, ::System::Guid uuid);

  // Ctor Parameters [CppParam { name: "_space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: None }, CppParam { name: "_Uuid_k__BackingField", ty: "::System::Guid", modifiers: "",
  // def_value: None }]
  constexpr __OVRSpatialAnchor__UnboundAnchor(::GlobalNamespace::OVRSpace _space, ::System::Guid _Uuid_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSpatialAnchor__UnboundAnchor();

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8833))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRSpatialAnchor__MultiAnchorActionType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSpatialAnchor__MultiAnchorActionType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Save value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorActionType const Save;

  /// @brief Field Share value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorActionType const Share;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8834))
// CS Name: ::OVRSpatialAnchor::Development*
class CORDL_TYPE __OVRSpatialAnchor__Development : public ::System::Object {
public:
  // Declarations
  /// @brief Method Log addr 0x2627fb4 size 0x8c virtual false final false
  static inline void Log(::StringW message);

  /// @brief Method LogWarning addr 0x2628040 size 0x8c virtual false final false
  static inline void LogWarning(::StringW message);

  /// @brief Method LogError addr 0x26280cc size 0x8c virtual false final false
  static inline void LogError(::StringW message);

  /// @brief Method LogRequest addr 0x2628158 size 0x4 virtual false final false
  static inline void LogRequest(uint64_t requestId, ::StringW message);

  /// @brief Method LogRequestResult addr 0x262815c size 0x4 virtual false final false
  static inline void LogRequestResult(uint64_t requestId, bool result, ::StringW successMessage, ::StringW failureMessage);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSpatialAnchor__Development", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSpatialAnchor__Development(__OVRSpatialAnchor__Development&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSpatialAnchor__Development", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSpatialAnchor__Development(__OVRSpatialAnchor__Development const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSpatialAnchor__Development();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSpatialAnchor__Development, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SaveOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8824))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8835))
// CS Name: ::OVRSpatialAnchor::SaveOptions
struct CORDL_TYPE __OVRSpatialAnchor__SaveOptions {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Storage", ty: "::GlobalNamespace::__OVRSpace__StorageLocation", modifiers: "", def_value: None }]
  constexpr __OVRSpatialAnchor__SaveOptions(::GlobalNamespace::__OVRSpace__StorageLocation Storage) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSpatialAnchor__SaveOptions();

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8824))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8836))
// CS Name: ::OVRSpatialAnchor::EraseOptions
struct CORDL_TYPE __OVRSpatialAnchor__EraseOptions {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Storage", ty: "::GlobalNamespace::__OVRSpace__StorageLocation", modifiers: "", def_value: None }]
  constexpr __OVRSpatialAnchor__EraseOptions(::GlobalNamespace::__OVRSpace__StorageLocation Storage) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSpatialAnchor__EraseOptions();

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8837))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRSpatialAnchor__OperationResult(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSpatialAnchor__OperationResult();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Success value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRSpatialAnchor__OperationResult const Success;

  /// @brief Field Failure value: static_cast<int32_t>(0xfffffc18)
  static ::GlobalNamespace::__OVRSpatialAnchor__OperationResult const Failure;

  /// @brief Field Failure_SpaceCloudStorageDisabled value: static_cast<int32_t>(0xfffff830)
  static ::GlobalNamespace::__OVRSpatialAnchor__OperationResult const Failure_SpaceCloudStorageDisabled;

  /// @brief Field Failure_SpaceMappingInsufficient value: static_cast<int32_t>(0xfffff82f)
  static ::GlobalNamespace::__OVRSpatialAnchor__OperationResult const Failure_SpaceMappingInsufficient;

  /// @brief Field Failure_SpaceLocalizationFailed value: static_cast<int32_t>(0xfffff82e)
  static ::GlobalNamespace::__OVRSpatialAnchor__OperationResult const Failure_SpaceLocalizationFailed;

  /// @brief Field Failure_SpaceNetworkTimeout value: static_cast<int32_t>(0xfffff82d)
  static ::GlobalNamespace::__OVRSpatialAnchor__OperationResult const Failure_SpaceNetworkTimeout;

  /// @brief Field Failure_SpaceNetworkRequestFailed value: static_cast<int32_t>(0xfffff82c)
  static ::GlobalNamespace::__OVRSpatialAnchor__OperationResult const Failure_SpaceNetworkRequestFailed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSpatialAnchor__OperationResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSpatialAnchor__OperationResult, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8838))
// CS Name: ::OVRSpatialAnchor::<>c*
class CORDL_TYPE __OVRSpatialAnchor____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__OVRSpatialAnchor____c* __9;

  /// @brief Field <>9__34_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__34_0, put = setStaticF___9__34_0))::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>* __9__34_0;

  static inline void setStaticF___9(::GlobalNamespace::__OVRSpatialAnchor____c* value);

  static inline ::GlobalNamespace::__OVRSpatialAnchor____c* getStaticF___9();

  static inline void setStaticF___9__34_0(::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>* value);

  static inline ::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>* getStaticF___9__34_0();

  static inline ::GlobalNamespace::__OVRSpatialAnchor____c* New_ctor();

  /// @brief Method .ctor addr 0x26281c4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetListToStoreTheShareRequest>b__34_0 addr 0x26281cc size 0x3c virtual false final false
  inline int32_t _GetListToStoreTheShareRequest_b__34_0(::GlobalNamespace::OVRSpaceUser x, ::GlobalNamespace::OVRSpaceUser y);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSpatialAnchor____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSpatialAnchor____c(__OVRSpatialAnchor____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSpatialAnchor____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSpatialAnchor____c(__OVRSpatialAnchor____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSpatialAnchor____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSpatialAnchor____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRSpatialAnchor
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(8836)), TypeDefinitionIndex(TypeDefinitionIndex(8825)),
// TypeDefinitionIndex(TypeDefinitionIndex(8835)), TypeDefinitionIndex(TypeDefinitionIndex(2406))} Self: TypeDefinitionIndex(TypeDefinitionIndex(8839)) CS Name: ::OVRSpatialAnchor*
class CORDL_TYPE OVRSpatialAnchor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__OVRSpatialAnchor____c;

  using OperationResult = ::GlobalNamespace::__OVRSpatialAnchor__OperationResult;

  using EraseOptions = ::GlobalNamespace::__OVRSpatialAnchor__EraseOptions;

  using SaveOptions = ::GlobalNamespace::__OVRSpatialAnchor__SaveOptions;

  using Development = ::GlobalNamespace::__OVRSpatialAnchor__Development;

  using MultiAnchorActionType = ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorActionType;

  using UnboundAnchor = ::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor;

  using LoadOptions = ::GlobalNamespace::__OVRSpatialAnchor__LoadOptions;

  using MultiAnchorDelegatePair = ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair;

  using SingleAnchorDelegatePair = ::GlobalNamespace::__OVRSpatialAnchor__SingleAnchorDelegatePair;

  /// @brief Field _startCalled, offset 0x18, size 0x1
  __declspec(property(get = __get__startCalled, put = __set__startCalled)) bool _startCalled;

  /// @brief Field _requestId, offset 0x20, size 0x8
  __declspec(property(get = __get__requestId, put = __set__requestId)) uint64_t _requestId;

  /// @brief Field _defaultSaveOptions, offset 0x28, size 0x4
  __declspec(property(get = __get__defaultSaveOptions, put = __set__defaultSaveOptions))::GlobalNamespace::__OVRSpatialAnchor__SaveOptions _defaultSaveOptions;

  /// @brief Field _defaultEraseOptions, offset 0x2c, size 0x4
  __declspec(property(get = __get__defaultEraseOptions, put = __set__defaultEraseOptions))::GlobalNamespace::__OVRSpatialAnchor__EraseOptions _defaultEraseOptions;

  /// @brief Field OnLocalize, offset 0x30, size 0x8
  __declspec(property(get = __get_OnLocalize, put = __set_OnLocalize))::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* OnLocalize;

  /// @brief Field <Space>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __get__Space_k__BackingField, put = __set__Space_k__BackingField))::GlobalNamespace::OVRSpace _Space_k__BackingField;

  /// @brief Field <Uuid>k__BackingField, offset 0x40, size 0x10
  __declspec(property(get = __get__Uuid_k__BackingField, put = __set__Uuid_k__BackingField))::System::Guid _Uuid_k__BackingField;

  /// @brief Field SpatialAnchors, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SpatialAnchors,
                             put = setStaticF_SpatialAnchors))::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRSpatialAnchor*>* SpatialAnchors;

  /// @brief Field CreationRequests, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreationRequests,
                             put = setStaticF_CreationRequests))::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor*>* CreationRequests;

  /// @brief Field SaveRequests, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SaveRequests,
                             put = setStaticF_SaveRequests))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSpace__StorageLocation,
                                                                                                         ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>*>* SaveRequests;

  /// @brief Field SaveRequestCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SaveRequestCallbacks,
                             put = setStaticF_SaveRequestCallbacks))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpatialAnchor*,
                                                                                                                 ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>*>* SaveRequestCallbacks;

  /// @brief Field ShareRequests, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ShareRequests, put = setStaticF_ShareRequests))::System::Collections::Generic::List_1<
      ::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>*>>* ShareRequests;

  /// @brief Field ShareRequestCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ShareRequestCallbacks, put = setStaticF_ShareRequestCallbacks))::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::OVRSpatialAnchor*, ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>* ShareRequestCallbacks;

  /// @brief Field SingleAnchorCompletionDelegates, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SingleAnchorCompletionDelegates, put = setStaticF_SingleAnchorCompletionDelegates))::System::Collections::Generic::Dictionary_2<
      uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__SingleAnchorDelegatePair>* SingleAnchorCompletionDelegates;

  /// @brief Field MultiAnchorCompletionDelegates, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MultiAnchorCompletionDelegates, put = setStaticF_MultiAnchorCompletionDelegates))::System::Collections::Generic::Dictionary_2<
      uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>* MultiAnchorCompletionDelegates;

  /// @brief Field LocalizationDelegates, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_LocalizationDelegates, put = setStaticF_LocalizationDelegates))::System::Collections::Generic::Dictionary_2<
      uint64_t, ::System::Action_2<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, bool>*>* LocalizationDelegates;

  /// @brief Field Queries, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Queries, put = setStaticF_Queries))::System::Collections::Generic::Dictionary_2<
      uint64_t, ::System::Action_1<::ArrayW<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, ::Array<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>*>>*>* Queries;

  /// @brief Field UnboundAnchorBuffer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UnboundAnchorBuffer,
                             put = setStaticF_UnboundAnchorBuffer))::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>* UnboundAnchorBuffer;

  /// @brief Field ComponentTypeBuffer, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_ComponentTypeBuffer,
               put = setStaticF_ComponentTypeBuffer))::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType, ::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*> ComponentTypeBuffer;

  __declspec(property(get = get_Space, put = set_Space))::GlobalNamespace::OVRSpace Space;

  __declspec(property(get = get_Uuid, put = set_Uuid))::System::Guid Uuid;

  __declspec(property(get = get_Created)) bool Created;

  __declspec(property(get = get_PendingCreation)) bool PendingCreation;

  __declspec(property(get = get_Localized)) bool Localized;

  constexpr bool& __get__startCalled();

  constexpr bool const& __get__startCalled() const;

  constexpr void __set__startCalled(bool value);

  constexpr uint64_t& __get__requestId();

  constexpr uint64_t const& __get__requestId() const;

  constexpr void __set__requestId(uint64_t value);

  constexpr ::GlobalNamespace::__OVRSpatialAnchor__SaveOptions& __get__defaultSaveOptions();

  constexpr ::GlobalNamespace::__OVRSpatialAnchor__SaveOptions const& __get__defaultSaveOptions() const;

  constexpr void __set__defaultSaveOptions(::GlobalNamespace::__OVRSpatialAnchor__SaveOptions value);

  constexpr ::GlobalNamespace::__OVRSpatialAnchor__EraseOptions& __get__defaultEraseOptions();

  constexpr ::GlobalNamespace::__OVRSpatialAnchor__EraseOptions const& __get__defaultEraseOptions() const;

  constexpr void __set__defaultEraseOptions(::GlobalNamespace::__OVRSpatialAnchor__EraseOptions value);

  constexpr ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*& __get_OnLocalize();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*> const& __get_OnLocalize() const;

  constexpr void __set_OnLocalize(::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* value);

  constexpr ::GlobalNamespace::OVRSpace& __get__Space_k__BackingField();

  constexpr ::GlobalNamespace::OVRSpace const& __get__Space_k__BackingField() const;

  constexpr void __set__Space_k__BackingField(::GlobalNamespace::OVRSpace value);

  constexpr ::System::Guid& __get__Uuid_k__BackingField();

  constexpr ::System::Guid const& __get__Uuid_k__BackingField() const;

  constexpr void __set__Uuid_k__BackingField(::System::Guid value);

  static inline void setStaticF_SpatialAnchors(::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRSpatialAnchor*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRSpatialAnchor*>* getStaticF_SpatialAnchors();

  static inline void setStaticF_CreationRequests(::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor*>* getStaticF_CreationRequests();

  static inline void setStaticF_SaveRequests(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSpace__StorageLocation, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSpace__StorageLocation, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>*>*
  getStaticF_SaveRequests();

  static inline void
  setStaticF_SaveRequestCallbacks(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpatialAnchor*, ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpatialAnchor*, ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>*>* getStaticF_SaveRequestCallbacks();

  static inline void setStaticF_ShareRequests(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*,
                                                                                                            ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>*>>* value);

  static inline ::System::Collections::Generic::List_1<
      ::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>*>>*
  getStaticF_ShareRequests();

  static inline void setStaticF_ShareRequestCallbacks(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpatialAnchor*, ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpatialAnchor*, ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>*
  getStaticF_ShareRequestCallbacks();

  static inline void setStaticF_SingleAnchorCompletionDelegates(::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__SingleAnchorDelegatePair>* value);

  static inline ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__SingleAnchorDelegatePair>* getStaticF_SingleAnchorCompletionDelegates();

  static inline void setStaticF_MultiAnchorCompletionDelegates(::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>* value);

  static inline ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>* getStaticF_MultiAnchorCompletionDelegates();

  static inline void setStaticF_LocalizationDelegates(::System::Collections::Generic::Dictionary_2<uint64_t, ::System::Action_2<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, bool>*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<uint64_t, ::System::Action_2<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, bool>*>* getStaticF_LocalizationDelegates();

  static inline void
  setStaticF_Queries(::System::Collections::Generic::Dictionary_2<
                     uint64_t, ::System::Action_1<::ArrayW<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, ::Array<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>*>>*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<
      uint64_t, ::System::Action_1<::ArrayW<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, ::Array<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>*>>*>*
  getStaticF_Queries();

  static inline void setStaticF_UnboundAnchorBuffer(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>* value);

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>* getStaticF_UnboundAnchorBuffer();

  static inline void setStaticF_ComponentTypeBuffer(::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType, ::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*> value);

  static inline ::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType, ::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*> getStaticF_ComponentTypeBuffer();

  /// @brief Method add_OnLocalize addr 0x2622744 size 0xb0 virtual false final false
  inline void add_OnLocalize(::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* value);

  /// @brief Method remove_OnLocalize addr 0x26227f4 size 0xb0 virtual false final false
  inline void remove_OnLocalize(::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* value);

  /// @brief Method get_Space addr 0x26228a4 size 0x8 virtual false final false
  inline ::GlobalNamespace::OVRSpace get_Space();

  /// @brief Method set_Space addr 0x26228ac size 0x8 virtual false final false
  inline void set_Space(::GlobalNamespace::OVRSpace value);

  /// @brief Method get_Uuid addr 0x26228b4 size 0xc virtual false final false
  inline ::System::Guid get_Uuid();

  /// @brief Method set_Uuid addr 0x26228c0 size 0x8 virtual false final false
  inline void set_Uuid(::System::Guid value);

  /// @brief Method get_Created addr 0x26228c8 size 0x10 virtual false final false
  inline bool get_Created();

  /// @brief Method get_PendingCreation addr 0x26228d8 size 0x10 virtual false final false
  inline bool get_PendingCreation();

  /// @brief Method get_Localized addr 0x26228e8 size 0x90 virtual false final false
  inline bool get_Localized();

  /// @brief Method InitializeFromExisting addr 0x2622978 size 0x20c virtual false final false
  inline void InitializeFromExisting(::GlobalNamespace::OVRSpace space, ::System::Guid uuid);

  /// @brief Method Save addr 0x2622dec size 0x10 virtual false final false
  inline void Save(::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>* onComplete);

  /// @brief Method ToNativeArray addr 0x2622f2c size 0x568 virtual false final false
  static inline ::Unity::Collections::NativeArray_1<uint64_t> ToNativeArray(::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>* anchors);

  /// @brief Method Save addr 0x2622dfc size 0x130 virtual false final false
  inline void Save(::GlobalNamespace::__OVRSpatialAnchor__SaveOptions saveOptions, ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>* onComplete);

  /// @brief Method Save addr 0x2623494 size 0x250 virtual false final false
  static inline void Save(::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>* anchors, ::GlobalNamespace::__OVRSpatialAnchor__SaveOptions saveOptions,
                          ::System::Action_2<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* onComplete);

  /// @brief Method CopyAnchorListIntoListFromPool addr 0x26236e4 size 0xac virtual false final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>*
  CopyAnchorListIntoListFromPool(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpatialAnchor*>* anchorList);

  /// @brief Method Share addr 0x2623790 size 0xdc virtual false final false
  inline void Share(::GlobalNamespace::OVRSpaceUser user, ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* onComplete);

  /// @brief Method Share addr 0x2623974 size 0x140 virtual false final false
  inline void Share(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2, ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* onComplete);

  /// @brief Method Share addr 0x2623ab4 size 0x19c virtual false final false
  inline void Share(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2, ::GlobalNamespace::OVRSpaceUser user3,
                    ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* onComplete);

  /// @brief Method Share addr 0x2623c50 size 0x200 virtual false final false
  inline void Share(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2, ::GlobalNamespace::OVRSpaceUser user3, ::GlobalNamespace::OVRSpaceUser user4,
                    ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* onComplete);

  /// @brief Method Share addr 0x2623e50 size 0x398 virtual false final false
  inline void Share(::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>* users, ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* onComplete);

  /// @brief Method Share addr 0x26241e8 size 0x634 virtual false final false
  static inline void
  Share(::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>* anchors, ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>* users,
        ::System::Action_2<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* onComplete);

  /// @brief Method ShareInternal addr 0x262386c size 0x108 virtual false final false
  inline void ShareInternal(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>* users, ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* onComplete);

  /// @brief Method GetListToStoreTheShareRequest addr 0x262481c size 0x37c virtual false final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>* GetListToStoreTheShareRequest(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>* users);

  /// @brief Method AreSortedUserListsEqual addr 0x2624b98 size 0x284 virtual false final false
  static inline bool AreSortedUserListsEqual(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>* sortedList1,
                                             ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>* sortedList2);

  /// @brief Method Erase addr 0x2624e98 size 0x10 virtual false final false
  inline void Erase(::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>* onComplete);

  /// @brief Method Erase addr 0x2624ea8 size 0x120 virtual false final false
  inline void Erase(::GlobalNamespace::__OVRSpatialAnchor__EraseOptions eraseOptions, ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>* onComplete);

  /// @brief Method ThrowIfBound addr 0x2622b84 size 0x130 virtual false final false
  static inline void ThrowIfBound(::System::Guid uuid);

  /// @brief Method InitializeUnchecked addr 0x2622cb4 size 0x138 virtual false final false
  inline void InitializeUnchecked(::GlobalNamespace::OVRSpace space, ::System::Guid uuid);

  /// @brief Method Start addr 0x262506c size 0x18 virtual false final false
  inline void Start();

  /// @brief Method Update addr 0x26251f0 size 0x10 virtual false final false
  inline void Update();

  /// @brief Method LateUpdate addr 0x2625200 size 0x50 virtual false final false
  inline void LateUpdate();

  /// @brief Method SaveBatchAnchors addr 0x2625250 size 0x1ec virtual false final false
  static inline void SaveBatchAnchors();

  /// @brief Method ShareBatchAnchors addr 0x262543c size 0x26c virtual false final false
  static inline void ShareBatchAnchors();

  /// @brief Method OnDestroy addr 0x26256a8 size 0xb8 virtual false final false
  inline void OnDestroy();

  /// @brief Method GetTrackingSpacePose addr 0x2625760 size 0xc8 virtual false final false
  inline ::GlobalNamespace::OVRPose GetTrackingSpacePose();

  /// @brief Method CreateSpatialAnchor addr 0x2625084 size 0x16c virtual false final false
  inline void CreateSpatialAnchor();

  /// @brief Method TryGetPose addr 0x2625828 size 0x190 virtual false final false
  static inline bool TryGetPose(::GlobalNamespace::OVRSpace space, ByRef<::GlobalNamespace::OVRPose> pose);

  /// @brief Method UpdateTransform addr 0x2624fc8 size 0xa4 virtual false final false
  inline void UpdateTransform();

  /// @brief Method TryExtractValue addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TKey, typename TValue> static inline bool TryExtractValue(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dict, TKey key, ByRef<TValue> value);

  /// @brief Method InitializeOnLoad addr 0x26259b8 size 0x174 virtual false final false
  static inline void InitializeOnLoad();

  /// @brief Method InvokeSingleAnchorDelegate addr 0x26261d8 size 0xc0 virtual false final false
  static inline void InvokeSingleAnchorDelegate(uint64_t requestId, bool result);

  /// @brief Method InvokeMultiAnchorDelegate addr 0x2626298 size 0x47c virtual false final false
  static inline void InvokeMultiAnchorDelegate(uint64_t requestId, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult result,
                                               ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorActionType actionType);

  /// @brief Method OnSpatialAnchorCreateComplete addr 0x2626714 size 0x19c virtual false final false
  static inline void OnSpatialAnchorCreateComplete(uint64_t requestId, bool success, ::GlobalNamespace::OVRSpace space, ::System::Guid uuid);

  /// @brief Method OnSpaceSaveComplete addr 0x26268b0 size 0x64 virtual false final false
  static inline void OnSpaceSaveComplete(uint64_t requestId, ::GlobalNamespace::OVRSpace space, bool result, ::System::Guid uuid);

  /// @brief Method OnSpaceEraseComplete addr 0x2626914 size 0x64 virtual false final false
  static inline void OnSpaceEraseComplete(uint64_t requestId, bool result, ::System::Guid uuid, ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation location);

  /// @brief Method LoadUnboundAnchors addr 0x2626978 size 0x158 virtual false final false
  static inline bool LoadUnboundAnchors(::GlobalNamespace::__OVRSpatialAnchor__LoadOptions options,
                                        ::System::Action_1<::ArrayW<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, ::Array<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>*>>* onComplete);

  /// @brief Method OnSpaceQueryComplete addr 0x2626be0 size 0x778 virtual false final false
  static inline void OnSpaceQueryComplete(uint64_t requestId, bool queryResult);

  /// @brief Method OnSpaceSetComponentStatusComplete addr 0x2627364 size 0x16c virtual false final false
  static inline void OnSpaceSetComponentStatusComplete(uint64_t requestId, bool result, ::GlobalNamespace::OVRSpace space, ::System::Guid uuid,
                                                       ::GlobalNamespace::__OVRPlugin__SpaceComponentType componentType, bool enabled);

  /// @brief Method OnSpaceListSaveComplete addr 0x26274d0 size 0x68 virtual false final false
  static inline void OnSpaceListSaveComplete(uint64_t requestId, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult result);

  /// @brief Method OnShareSpacesComplete addr 0x2627538 size 0x68 virtual false final false
  static inline void OnShareSpacesComplete(uint64_t requestId, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult result);

  static inline ::GlobalNamespace::OVRSpatialAnchor* New_ctor();

  /// @brief Method .ctor addr 0x26275a0 size 0xc virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRSpatialAnchor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSpatialAnchor(OVRSpatialAnchor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSpatialAnchor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSpatialAnchor(OVRSpatialAnchor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpatialAnchor();

public:
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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSpatialAnchor__LoadOptions, "", "OVRSpatialAnchor/LoadOptions");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair, "", "OVRSpatialAnchor/MultiAnchorDelegatePair");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSpatialAnchor__SaveOptions, "", "OVRSpatialAnchor/SaveOptions");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSpatialAnchor__SingleAnchorDelegatePair, "", "OVRSpatialAnchor/SingleAnchorDelegatePair");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, "", "OVRSpatialAnchor/UnboundAnchor");
