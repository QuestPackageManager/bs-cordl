#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneManager)
namespace GlobalNamespace {
struct OVRAnchor_FetchResult;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
class OVRSceneAnchor;
}
namespace GlobalNamespace {
class OVRSceneManager_Classification;
}
namespace GlobalNamespace {
class OVRSceneManager_Development;
}
namespace GlobalNamespace {
struct OVRSceneManager_LoadSceneModelResult;
}
namespace GlobalNamespace {
struct OVRSceneManager_LogForwarder;
}
namespace GlobalNamespace {
struct OVRSceneManager_Metrics;
}
namespace GlobalNamespace {
class OVRSceneManager_RoomLayoutInformation;
}
namespace GlobalNamespace {
struct OVRSceneManager_RoomLayoutUuids;
}
namespace GlobalNamespace {
template <typename T> struct OVRSceneManager__FetchAnchorsAsync_d__36_1;
}
namespace GlobalNamespace {
struct OVRSceneManager__FetchAnchorsAsync_d__37;
}
namespace GlobalNamespace {
struct OVRSceneManager__FilterByActiveRoom_d__46;
}
namespace GlobalNamespace {
struct OVRSceneManager__LoadSceneModelAsync_d__45;
}
namespace GlobalNamespace {
struct OVRSceneManager__OnApplicationPause_d__38;
}
namespace GlobalNamespace {
struct OVRSceneManager__ProcessBatch_d__44;
}
namespace GlobalNamespace {
struct OVRSceneManager__QueryForExistingAnchorsTransform_d__39;
}
namespace GlobalNamespace {
struct OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d;
}
namespace GlobalNamespace {
class OVRSceneManager___c__DisplayClass45_0;
}
namespace GlobalNamespace {
class OVRSceneManager___c__DisplayClass51_0;
}
namespace GlobalNamespace {
class OVRSceneManager___c__DisplayClass54_0;
}
namespace GlobalNamespace {
class OVRScenePlane;
}
namespace GlobalNamespace {
class OVRScenePrefabOverride;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
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
template <typename T> class IReadOnlyList_1;
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
class Action;
}
namespace System {
struct Guid;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSceneManager_LoadSceneModelResult;
}
namespace GlobalNamespace {
class OVRSceneManager;
}
namespace GlobalNamespace {
class OVRSceneManager_Classification;
}
namespace GlobalNamespace {
class OVRSceneManager_Development;
}
namespace GlobalNamespace {
class OVRSceneManager_RoomLayoutInformation;
}
namespace GlobalNamespace {
class OVRSceneManager___c__DisplayClass45_0;
}
namespace GlobalNamespace {
class OVRSceneManager___c__DisplayClass51_0;
}
namespace GlobalNamespace {
class OVRSceneManager___c__DisplayClass54_0;
}
namespace GlobalNamespace {
struct OVRSceneManager_LogForwarder;
}
namespace GlobalNamespace {
struct OVRSceneManager_Metrics;
}
namespace GlobalNamespace {
struct OVRSceneManager_RoomLayoutUuids;
}
namespace GlobalNamespace {
template <typename T> struct OVRSceneManager__FetchAnchorsAsync_d__36_1;
}
namespace GlobalNamespace {
struct OVRSceneManager__FetchAnchorsAsync_d__37;
}
namespace GlobalNamespace {
struct OVRSceneManager__FilterByActiveRoom_d__46;
}
namespace GlobalNamespace {
struct OVRSceneManager__LoadSceneModelAsync_d__45;
}
namespace GlobalNamespace {
struct OVRSceneManager__OnApplicationPause_d__38;
}
namespace GlobalNamespace {
struct OVRSceneManager__ProcessBatch_d__44;
}
namespace GlobalNamespace {
struct OVRSceneManager__QueryForExistingAnchorsTransform_d__39;
}
namespace GlobalNamespace {
struct OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSceneManager_LoadSceneModelResult);
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneManager);
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneManager_Classification);
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneManager_Development);
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneManager_RoomLayoutInformation);
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0);
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0);
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneManager___c__DisplayClass54_0);
MARK_VAL_T(::GlobalNamespace::OVRSceneManager_LogForwarder);
MARK_VAL_T(::GlobalNamespace::OVRSceneManager_Metrics);
MARK_VAL_T(::GlobalNamespace::OVRSceneManager_RoomLayoutUuids);
MARK_GEN_VAL_T(::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__36_1);
MARK_VAL_T(::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37);
MARK_VAL_T(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46);
MARK_VAL_T(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45);
MARK_VAL_T(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__38);
MARK_VAL_T(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44);
MARK_VAL_T(::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__39);
MARK_VAL_T(::GlobalNamespace::OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneManager/Classification
class CORDL_TYPE OVRSceneManager_Classification : public ::System::Object {
public:
  // Declarations
  /// @brief Field <List>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__List_k__BackingField, put = setStaticF__List_k__BackingField)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>* _List_k__BackingField;

  /// @brief Field <Set>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__Set_k__BackingField, put = setStaticF__Set_k__BackingField)) ::System::Collections::Generic::HashSet_1<::StringW>* _Set_k__BackingField;

  static inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* getStaticF__List_k__BackingField();

  static inline ::System::Collections::Generic::HashSet_1<::StringW>* getStaticF__Set_k__BackingField();

  /// @brief Method get_List, addr 0x5cb12a4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_List();

  /// @brief Method get_Set, addr 0x5cb1300, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::StringW>* get_Set();

  static inline void setStaticF__List_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value);

  static inline void setStaticF__Set_k__BackingField(::System::Collections::Generic::HashSet_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneManager_Classification();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager_Classification", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneManager_Classification(OVRSceneManager_Classification&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager_Classification", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneManager_Classification(OVRSceneManager_Classification const&) = delete;

  /// @brief Field Bed offset 0xffffffff size 0x8
  static constexpr ::ConstString Bed{ u"BED" };

  /// @brief Field Ceiling offset 0xffffffff size 0x8
  static constexpr ::ConstString Ceiling{ u"CEILING" };

  /// @brief Field Couch offset 0xffffffff size 0x8
  static constexpr ::ConstString Couch{ u"COUCH" };

  /// @brief Field Desk offset 0xffffffff size 0x8
  static constexpr ::ConstString Desk{ u"DESK" };

  /// @brief Field DoorFrame offset 0xffffffff size 0x8
  static constexpr ::ConstString DoorFrame{ u"DOOR_FRAME" };

  /// @brief Field Floor offset 0xffffffff size 0x8
  static constexpr ::ConstString Floor{ u"FLOOR" };

  /// @brief Field GlobalMesh offset 0xffffffff size 0x8
  static constexpr ::ConstString GlobalMesh{ u"GLOBAL_MESH" };

  /// @brief Field InvisibleWallFace offset 0xffffffff size 0x8
  static constexpr ::ConstString InvisibleWallFace{ u"INVISIBLE_WALL_FACE" };

  /// @brief Field Lamp offset 0xffffffff size 0x8
  static constexpr ::ConstString Lamp{ u"LAMP" };

  /// @brief Field Other offset 0xffffffff size 0x8
  static constexpr ::ConstString Other{ u"OTHER" };

  /// @brief Field Plant offset 0xffffffff size 0x8
  static constexpr ::ConstString Plant{ u"PLANT" };

  /// @brief Field Screen offset 0xffffffff size 0x8
  static constexpr ::ConstString Screen{ u"SCREEN" };

  /// @brief Field Storage offset 0xffffffff size 0x8
  static constexpr ::ConstString Storage{ u"STORAGE" };

  /// @brief Field Table offset 0xffffffff size 0x8
  static constexpr ::ConstString Table{ u"TABLE" };

  /// @brief Field WallArt offset 0xffffffff size 0x8
  static constexpr ::ConstString WallArt{ u"WALL_ART" };

  /// @brief Field WallFace offset 0xffffffff size 0x8
  static constexpr ::ConstString WallFace{ u"WALL_FACE" };

  /// @brief Field WindowFrame offset 0xffffffff size 0x8
  static constexpr ::ConstString WindowFrame{ u"WINDOW_FRAME" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7637 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager_Classification, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneManager/RoomLayoutInformation
class CORDL_TYPE OVRSceneManager_RoomLayoutInformation : public ::System::Object {
public:
  // Declarations
  /// @brief Field Ceiling, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Ceiling, put = __cordl_internal_set_Ceiling)) ::UnityW<::GlobalNamespace::OVRScenePlane> Ceiling;

  /// @brief Field Floor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Floor, put = __cordl_internal_set_Floor)) ::UnityW<::GlobalNamespace::OVRScenePlane> Floor;

  /// @brief Field Walls, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Walls, put = __cordl_internal_set_Walls)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* Walls;

  static inline ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::OVRScenePlane> const& __cordl_internal_get_Ceiling() const;

  constexpr ::UnityW<::GlobalNamespace::OVRScenePlane>& __cordl_internal_get_Ceiling();

  constexpr ::UnityW<::GlobalNamespace::OVRScenePlane> const& __cordl_internal_get_Floor() const;

  constexpr ::UnityW<::GlobalNamespace::OVRScenePlane>& __cordl_internal_get_Floor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* const& __cordl_internal_get_Walls() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*& __cordl_internal_get_Walls();

  constexpr void __cordl_internal_set_Ceiling(::UnityW<::GlobalNamespace::OVRScenePlane> value);

  constexpr void __cordl_internal_set_Floor(::UnityW<::GlobalNamespace::OVRScenePlane> value);

  constexpr void __cordl_internal_set_Walls(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* value);

  /// @brief Method .ctor, addr 0x5cb0410, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneManager_RoomLayoutInformation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager_RoomLayoutInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneManager_RoomLayoutInformation(OVRSceneManager_RoomLayoutInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager_RoomLayoutInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneManager_RoomLayoutInformation(OVRSceneManager_RoomLayoutInformation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7638 };

  /// @brief Field Floor, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRScenePlane> ___Floor;

  /// @brief Field Ceiling, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRScenePlane> ___Ceiling;

  /// @brief Field Walls, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* ___Walls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager_RoomLayoutInformation, ___Floor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager_RoomLayoutInformation, ___Ceiling) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager_RoomLayoutInformation, ___Walls) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager_RoomLayoutInformation, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/LogForwarder
#pragma pack(push, 0)
struct CORDL_TYPE OVRSceneManager_LogForwarder {
public:
  // Declarations
  /// @brief Method Log, addr 0x5cb1154, size 0xc0, virtual false, abstract: false, final false
  inline void Log(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject);

  /// @brief Method LogError, addr 0x5cad7c8, size 0xc0, virtual false, abstract: false, final false
  inline void LogError(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject);

  /// @brief Method LogWarning, addr 0x5cb0b00, size 0xc0, virtual false, abstract: false, final false
  inline void LogWarning(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneManager_LogForwarder();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7639 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager_LogForwarder, 0x1>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneManager/Development
class CORDL_TYPE OVRSceneManager_Development : public ::System::Object {
public:
  // Declarations
  /// @brief Method Log, addr 0x5cb1748, size 0xc0, virtual false, abstract: false, final false
  static inline void Log(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject);

  /// @brief Method LogError, addr 0x5cb18c8, size 0xc0, virtual false, abstract: false, final false
  static inline void LogError(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject);

  /// @brief Method LogWarning, addr 0x5cb1808, size 0xc0, virtual false, abstract: false, final false
  static inline void LogWarning(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneManager_Development();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager_Development", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneManager_Development(OVRSceneManager_Development&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager_Development", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneManager_Development(OVRSceneManager_Development const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7640 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager_Development, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/LoadSceneModelResult
struct CORDL_TYPE OVRSceneManager_LoadSceneModelResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRSceneManager_LoadSceneModelResult_Unwrapped
  enum struct __OVRSceneManager_LoadSceneModelResult_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_NoSceneModelToLoad = static_cast<int32_t>(0x1),
    __E_FailureScenePermissionNotGranted = static_cast<int32_t>(0xffffffff),
    __E_FailureUnexpectedError = static_cast<int32_t>(0xfffffffe),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRSceneManager_LoadSceneModelResult_Unwrapped() const noexcept {
    return static_cast<__OVRSceneManager_LoadSceneModelResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneManager_LoadSceneModelResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRSceneManager_LoadSceneModelResult(int32_t value__) noexcept;

  /// @brief Field FailureScenePermissionNotGranted value: I32(-1)
  static ::GlobalNamespace::OVRSceneManager_LoadSceneModelResult const FailureScenePermissionNotGranted;

  /// @brief Field FailureUnexpectedError value: I32(-2)
  static ::GlobalNamespace::OVRSceneManager_LoadSceneModelResult const FailureUnexpectedError;

  /// @brief Field NoSceneModelToLoad value: I32(1)
  static ::GlobalNamespace::OVRSceneManager_LoadSceneModelResult const NoSceneModelToLoad;

  /// @brief Field Success value: I32(0)
  static ::GlobalNamespace::OVRSceneManager_LoadSceneModelResult const Success;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7641 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager_LoadSceneModelResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/Metrics
struct CORDL_TYPE OVRSceneManager_Metrics {
public:
  // Declarations
  /// @brief Method op_Addition, addr 0x5cb1988, size 0x24, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRSceneManager_Metrics op_Addition(::GlobalNamespace::OVRSceneManager_Metrics lhs, ::GlobalNamespace::OVRSceneManager_Metrics rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneManager_Metrics();

  // Ctor Parameters [CppParam { name: "TotalRoomCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "CandidateRoomCount", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "Loaded", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Failed", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SkippedUserNotInRoom",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SkippedAlreadyInstantiated", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRSceneManager_Metrics(int32_t TotalRoomCount, int32_t CandidateRoomCount, int32_t Loaded, int32_t Failed, int32_t SkippedUserNotInRoom, int32_t SkippedAlreadyInstantiated) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7642 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field TotalRoomCount, offset: 0x0, size: 0x4, def value: None
  int32_t TotalRoomCount;

  /// @brief Field CandidateRoomCount, offset: 0x4, size: 0x4, def value: None
  int32_t CandidateRoomCount;

  /// @brief Field Loaded, offset: 0x8, size: 0x4, def value: None
  int32_t Loaded;

  /// @brief Field Failed, offset: 0xc, size: 0x4, def value: None
  int32_t Failed;

  /// @brief Field SkippedUserNotInRoom, offset: 0x10, size: 0x4, def value: None
  int32_t SkippedUserNotInRoom;

  /// @brief Field SkippedAlreadyInstantiated, offset: 0x14, size: 0x4, def value: None
  int32_t SkippedAlreadyInstantiated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager_Metrics, TotalRoomCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager_Metrics, CandidateRoomCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager_Metrics, Loaded) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager_Metrics, Failed) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager_Metrics, SkippedUserNotInRoom) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager_Metrics, SkippedAlreadyInstantiated) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager_Metrics, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/RoomLayoutUuids
struct CORDL_TYPE OVRSceneManager_RoomLayoutUuids {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneManager_RoomLayoutUuids();

  // Ctor Parameters [CppParam { name: "Floor", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "Ceiling", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam {
  // name: "Walls", ty: "::ArrayW<::System::Guid,::Array<::System::Guid>*>", modifiers: "", def_value: None }]
  constexpr OVRSceneManager_RoomLayoutUuids(::System::Guid Floor, ::System::Guid Ceiling, ::ArrayW<::System::Guid, ::Array<::System::Guid>*> Walls) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7643 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field Floor, offset: 0x0, size: 0x10, def value: None
  ::System::Guid Floor;

  /// @brief Field Ceiling, offset: 0x10, size: 0x10, def value: None
  ::System::Guid Ceiling;

  /// @brief Field Walls, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Guid, ::Array<::System::Guid>*> Walls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager_RoomLayoutUuids, Floor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager_RoomLayoutUuids, Ceiling) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager_RoomLayoutUuids, Walls) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager_RoomLayoutUuids, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRSceneManager::LoadSceneModelResult, OVRTask`1::Awaiter<TResult>, OVRTask`1<TResult>, System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/<<LoadSceneModel>g__AwaitTask|40_0>d
struct CORDL_TYPE OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5cb19ac, size 0x21c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5cb1bc8, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "task", ty:
  // "::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::OVRSceneManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult>", modifiers: "", def_value: None }]
  constexpr OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                 ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult> task,
                                                                 ::UnityW<::GlobalNamespace::OVRSceneManager> __4__this,
                                                                 ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7644 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field task, offset: 0x28, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult> task;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneManager> __4__this;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d, task) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneManager/<>c__DisplayClass45_0
class CORDL_TYPE OVRSceneManager___c__DisplayClass45_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::OVRSceneManager> __4__this;

  /// @brief Field tasks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_tasks,
                      put = __cordl_internal_set_tasks)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics>>* tasks;

  static inline ::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0* New_ctor();

  /// @brief Method <LoadSceneModelAsync>b__0, addr 0x5cb1bd4, size 0xd8, virtual false, abstract: false, final false
  inline void _LoadSceneModelAsync_b__0(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* rooms, int32_t startingIndex);

  constexpr ::UnityW<::GlobalNamespace::OVRSceneManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneManager>& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics>>* const& __cordl_internal_get_tasks() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics>>*& __cordl_internal_get_tasks();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRSceneManager> value);

  constexpr void __cordl_internal_set_tasks(::System::Collections::Generic::List_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics>>* value);

  /// @brief Method .ctor, addr 0x5cb1bd0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneManager___c__DisplayClass45_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager___c__DisplayClass45_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneManager___c__DisplayClass45_0(OVRSceneManager___c__DisplayClass45_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager___c__DisplayClass45_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneManager___c__DisplayClass45_0(OVRSceneManager___c__DisplayClass45_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7645 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneManager> _____4__this;

  /// @brief Field tasks, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics>>* ___tasks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0, ___tasks) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRTask`1<TResult>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneManager/<>c__DisplayClass51_0
class CORDL_TYPE OVRSceneManager___c__DisplayClass51_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field requestedAnchorClassifications, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_requestedAnchorClassifications,
                      put = __cordl_internal_set_requestedAnchorClassifications)) ::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications;

  /// @brief Field task, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_task, put = __cordl_internal_set_task)) ::GlobalNamespace::OVRTask_1<bool> task;

  static inline ::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0* New_ctor();

  /// @brief Method <DoesRoomSetupExist>b__0, addr 0x5cb1cac, size 0x18, virtual false, abstract: false, final false
  inline void _DoesRoomSetupExist_b__0(bool result, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors);

  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* const& __cordl_internal_get_requestedAnchorClassifications() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& __cordl_internal_get_requestedAnchorClassifications();

  constexpr ::GlobalNamespace::OVRTask_1<bool> const& __cordl_internal_get_task() const;

  constexpr ::GlobalNamespace::OVRTask_1<bool>& __cordl_internal_get_task();

  constexpr void __cordl_internal_set_requestedAnchorClassifications(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  constexpr void __cordl_internal_set_task(::GlobalNamespace::OVRTask_1<bool> value);

  /// @brief Method .ctor, addr 0x5caef80, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneManager___c__DisplayClass51_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager___c__DisplayClass51_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneManager___c__DisplayClass51_0(OVRSceneManager___c__DisplayClass51_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager___c__DisplayClass51_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneManager___c__DisplayClass51_0(OVRSceneManager___c__DisplayClass51_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7646 };

  /// @brief Field requestedAnchorClassifications, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::StringW>* ___requestedAnchorClassifications;

  /// @brief Field task, offset: 0x18, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1<bool> ___task;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0, ___requestedAnchorClassifications) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0, ___task) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRTask`1<TResult>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneManager/<>c__DisplayClass54_0
class CORDL_TYPE OVRSceneManager___c__DisplayClass54_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field requestedAnchorClassifications, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_requestedAnchorClassifications,
                      put = __cordl_internal_set_requestedAnchorClassifications)) ::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications;

  /// @brief Field roomAnchors, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_roomAnchors, put = __cordl_internal_set_roomAnchors)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* roomAnchors;

  /// @brief Field task, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_task, put = __cordl_internal_set_task)) ::GlobalNamespace::OVRTask_1<bool> task;

  static inline ::GlobalNamespace::OVRSceneManager___c__DisplayClass54_0* New_ctor();

  /// @brief Method <CheckClassificationsInRooms>b__0, addr 0x5cb1cc4, size 0x14, virtual false, abstract: false, final false
  inline void _CheckClassificationsInRooms_b__0(bool result);

  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* const& __cordl_internal_get_requestedAnchorClassifications() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& __cordl_internal_get_requestedAnchorClassifications();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* const& __cordl_internal_get_roomAnchors() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*& __cordl_internal_get_roomAnchors();

  constexpr ::GlobalNamespace::OVRTask_1<bool> const& __cordl_internal_get_task() const;

  constexpr ::GlobalNamespace::OVRTask_1<bool>& __cordl_internal_get_task();

  constexpr void __cordl_internal_set_requestedAnchorClassifications(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  constexpr void __cordl_internal_set_roomAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* value);

  constexpr void __cordl_internal_set_task(::GlobalNamespace::OVRTask_1<bool> value);

  /// @brief Method .ctor, addr 0x5caf584, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneManager___c__DisplayClass54_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager___c__DisplayClass54_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneManager___c__DisplayClass54_0(OVRSceneManager___c__DisplayClass54_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager___c__DisplayClass54_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneManager___c__DisplayClass54_0(OVRSceneManager___c__DisplayClass54_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7647 };

  /// @brief Field requestedAnchorClassifications, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::StringW>* ___requestedAnchorClassifications;

  /// @brief Field task, offset: 0x18, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1<bool> ___task;

  /// @brief Field roomAnchors, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* ___roomAnchors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager___c__DisplayClass54_0, ___requestedAnchorClassifications) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager___c__DisplayClass54_0, ___task) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager___c__DisplayClass54_0, ___roomAnchors) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager___c__DisplayClass54_0, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor::FetchResult, OVRResult`2<TValue, TStatus>, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: OVRSceneManager/<FetchAnchorsAsync>d__36`1<T>
struct CORDL_TYPE OVRSceneManager__FetchAnchorsAsync_d__36_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneManager__FetchAnchorsAsync_d__36_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<bool>", modifiers: "",
  // def_value: None }, CppParam { name: "anchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None }, CppParam { name:
  // "incrementalResultsCallback", ty: "::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>", modifiers:
  // "", def_value: None }]
  constexpr OVRSceneManager__FetchAnchorsAsync_d__36_1(
      int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<bool> __t__builder, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors,
      ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* incrementalResultsCallback,
      ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
          __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7648 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1<bool> __t__builder;

  /// @brief Field anchors, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors;

  /// @brief Field incrementalResultsCallback, offset: 0x30, size: 0x8, def value: None
  ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* incrementalResultsCallback;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies OVRAnchor::FetchResult, OVRResult`2<TValue, TStatus>, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/<FetchAnchorsAsync>d__37
struct CORDL_TYPE OVRSceneManager__FetchAnchorsAsync_d__37 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5cb1cd8, size 0x2f8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5cb1fd0, size 0x3c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneManager__FetchAnchorsAsync_d__37();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<bool>", modifiers: "",
  // def_value: None }, CppParam { name: "anchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None }, CppParam { name: "uuids", ty:
  // "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>", modifiers:
  // "", def_value: None }]
  constexpr OVRSceneManager__FetchAnchorsAsync_d__37(
      int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<bool> __t__builder, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors,
      ::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids,
      ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
          __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7649 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1<bool> __t__builder;

  /// @brief Field anchors, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors;

  /// @brief Field uuids, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37, anchors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37, uuids) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor, OVRObjectPool::ListScope`1<T>, OVRSceneManager::LoadSceneModelResult, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>, OVRTask`1<TResult>, System.Guid,
// System.ValueTuple`2<T1, T2>, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/<FilterByActiveRoom>d__46
struct CORDL_TYPE OVRSceneManager__FilterByActiveRoom_d__46 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5cb200c, size 0x1360, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5cb336c, size 0x3c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneManager__FilterByActiveRoom_d__46();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::GlobalNamespace::OVRTaskBuilder_1<::System::ValueTuple_2<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult,int32_t>>", modifiers: "", def_value: None }, CppParam { name: "rooms", ty:
  // "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None }, CppParam { name: "layouts", ty:
  // "::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>*", modifiers: "", def_value: None }, CppParam { name:
  // "_skipped_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_userPosition_5__3", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name:
  // "_floorAndCeilingAnchors_5__4", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap5", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<::System::Guid>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "",
  // def_value: None }, CppParam { name: "__7__wrap6", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap7", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*>", modifiers: "", def_value: None }]
  constexpr OVRSceneManager__FilterByActiveRoom_d__46(
      int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::System::ValueTuple_2<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult, int32_t>> __t__builder,
      ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* rooms,
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor, ::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>* layouts, int32_t _skipped_5__2,
      ::UnityEngine::Vector3 _userPosition_5__3, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _floorAndCeilingAnchors_5__4,
      ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap4, ::GlobalNamespace::OVRObjectPool_ListScope_1<::System::Guid> __7__wrap5,
      ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__1, ::GlobalNamespace::OVRObjectPool_ListScope_1<bool> __7__wrap6,
      ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>> __7__wrap7, ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7650 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1<::System::ValueTuple_2<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult, int32_t>> __t__builder;

  /// @brief Field rooms, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* rooms;

  /// @brief Field layouts, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor, ::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>* layouts;

  /// @brief Field <skipped>5__2, offset: 0x38, size: 0x4, def value: None
  int32_t _skipped_5__2;

  /// @brief Field <userPosition>5__3, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 _userPosition_5__3;

  /// @brief Field <floorAndCeilingAnchors>5__4, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _floorAndCeilingAnchors_5__4;

  /// @brief Field <>7__wrap4, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap4;

  /// @brief Field <>7__wrap5, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::System::Guid> __7__wrap5;

  /// @brief Field <>u__1, offset: 0x60, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__1;

  /// @brief Field <>7__wrap6, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<bool> __7__wrap6;

  /// @brief Field <>7__wrap7, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>> __7__wrap7;

  /// @brief Field <>u__2, offset: 0x80, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, rooms) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, layouts) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, _skipped_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, _userPosition_5__3) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, _floorAndCeilingAnchors_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, __7__wrap4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, __7__wrap5) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, __u__1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, __7__wrap6) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, __7__wrap7) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, __u__2) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor, OVRObjectPool::ListScope`1<T>, OVRSceneManager::LoadSceneModelResult, OVRSceneManager::Metrics, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>, OVRTask`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/<LoadSceneModelAsync>d__45
struct CORDL_TYPE OVRSceneManager__LoadSceneModelAsync_d__45 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5cb33a8, size 0x95c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5cb3d04, size 0x3c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneManager__LoadSceneModelAsync_d__45();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::OVRSceneManager>", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0*", modifiers: "",
  // def_value: None }, CppParam { name: "_taskResults_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneManager_Metrics>*", modifiers: "", def_value: None }, CppParam {
  // name: "__7__wrap2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSceneManager_Metrics>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics>>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None }, CppParam { name: "_result_5__6", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneManager_Metrics>*>", modifiers: "", def_value: None }]
  constexpr OVRSceneManager__LoadSceneModelAsync_d__45(int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult> __t__builder,
                                                       ::UnityW<::GlobalNamespace::OVRSceneManager> __4__this, ::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0* __8__1,
                                                       ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneManager_Metrics>* _taskResults_5__2,
                                                       ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSceneManager_Metrics> __7__wrap2,
                                                       ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics>> __7__wrap3,
                                                       ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap4, bool _result_5__6,
                                                       ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__1,
                                                       ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneManager_Metrics>*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7651 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneManager> __4__this;

  /// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0* __8__1;

  /// @brief Field <taskResults>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneManager_Metrics>* _taskResults_5__2;

  /// @brief Field <>7__wrap2, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSceneManager_Metrics> __7__wrap2;

  /// @brief Field <>7__wrap3, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics>> __7__wrap3;

  /// @brief Field <>7__wrap4, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap4;

  /// @brief Field <result>5__6, offset: 0x58, size: 0x1, def value: None
  bool _result_5__6;

  /// @brief Field <>u__1, offset: 0x5c, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x6c, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneManager_Metrics>*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, __8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, _taskResults_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, __7__wrap2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, __7__wrap3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, __7__wrap4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, _result_5__6) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, __u__1) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, __u__2) == 0x6c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor, OVRObjectPool::ListScope`1<T>, OVRTask`1::Awaiter<TResult>, System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/<OnApplicationPause>d__38
struct CORDL_TYPE OVRSceneManager__OnApplicationPause_d__38 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5cb3d40, size 0x65c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5cb439c, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneManager__OnApplicationPause_d__38();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "isPaused", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::UnityW<::GlobalNamespace::OVRSceneManager>", modifiers: "", def_value: None }, CppParam { name: "_anchors_5__2", ty:
  // "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>",
  // modifiers: "", def_value: None }]
  constexpr OVRSceneManager__OnApplicationPause_d__38(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, bool isPaused,
                                                      ::UnityW<::GlobalNamespace::OVRSceneManager> __4__this, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _anchors_5__2,
                                                      ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap2,
                                                      ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7652 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field isPaused, offset: 0x28, size: 0x1, def value: None
  bool isPaused;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneManager> __4__this;

  /// @brief Field <anchors>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _anchors_5__2;

  /// @brief Field <>7__wrap2, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__38, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__38, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__38, isPaused) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__38, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__38, _anchors_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__38, __7__wrap2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__38, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__38, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor, OVRObjectPool::DictionaryScope`2<TKey, TValue>, OVRObjectPool::ListScope`1<T>, OVRSceneManager::LoadSceneModelResult, OVRSceneManager::Metrics,
// OVRSceneManager::RoomLayoutUuids, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>, OVRTask`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/<ProcessBatch>d__44
struct CORDL_TYPE OVRSceneManager__ProcessBatch_d__44 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5cb43a4, size 0x1084, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5cb551c, size 0x3c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneManager__ProcessBatch_d__44();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRSceneManager_Metrics>", modifiers: "", def_value: None }, CppParam { name: "rooms", ty:
  // "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None }, CppParam { name: "startingIndex", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::OVRSceneManager>", modifiers: "", def_value: None }, CppParam { name: "_metrics_5__2", ty:
  // "::GlobalNamespace::OVRSceneManager_Metrics", modifiers: "", def_value: None }, CppParam { name: "_candidateRooms_5__3", ty:
  // "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None }, CppParam { name: "_layoutUuids_5__5", ty:
  // "::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap5",
  // ty: "::GlobalNamespace::OVRObjectPool_DictionaryScope_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::System::ValueTuple_2<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult,int32_t>>", modifiers: "", def_value: None }, CppParam { name:
  // "_taskResults_5__7", ty: "::System::Collections::Generic::List_1<bool>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap7", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap8", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*>", modifiers: "", def_value: None }]
  constexpr OVRSceneManager__ProcessBatch_d__44(int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRSceneManager_Metrics> __t__builder,
                                                ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* rooms, int32_t startingIndex,
                                                ::UnityW<::GlobalNamespace::OVRSceneManager> __4__this, ::GlobalNamespace::OVRSceneManager_Metrics _metrics_5__2,
                                                ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _candidateRooms_5__3,
                                                ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap3,
                                                ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor, ::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>* _layoutUuids_5__5,
                                                ::GlobalNamespace::OVRObjectPool_DictionaryScope_2<::GlobalNamespace::OVRAnchor, ::GlobalNamespace::OVRSceneManager_RoomLayoutUuids> __7__wrap5,
                                                ::GlobalNamespace::OVRTask_1_Awaiter<::System::ValueTuple_2<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult, int32_t>> __u__1,
                                                ::System::Collections::Generic::List_1<bool>* _taskResults_5__7, ::GlobalNamespace::OVRObjectPool_ListScope_1<bool> __7__wrap7,
                                                ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>> __7__wrap8,
                                                ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7653 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xb0 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRSceneManager_Metrics> __t__builder;

  /// @brief Field rooms, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* rooms;

  /// @brief Field startingIndex, offset: 0x30, size: 0x4, def value: None
  int32_t startingIndex;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneManager> __4__this;

  /// @brief Field <metrics>5__2, offset: 0x40, size: 0x18, def value: None
  ::GlobalNamespace::OVRSceneManager_Metrics _metrics_5__2;

  /// @brief Field <candidateRooms>5__3, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _candidateRooms_5__3;

  /// @brief Field <>7__wrap3, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap3;

  /// @brief Field <layoutUuids>5__5, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor, ::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>* _layoutUuids_5__5;

  /// @brief Field <>7__wrap5, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_DictionaryScope_2<::GlobalNamespace::OVRAnchor, ::GlobalNamespace::OVRSceneManager_RoomLayoutUuids> __7__wrap5;

  /// @brief Field <>u__1, offset: 0x78, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::System::ValueTuple_2<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult, int32_t>> __u__1;

  /// @brief Field <taskResults>5__7, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<bool>* _taskResults_5__7;

  /// @brief Field <>7__wrap7, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<bool> __7__wrap7;

  /// @brief Field <>7__wrap8, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>> __7__wrap8;

  /// @brief Field <>u__2, offset: 0xa0, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, rooms) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, startingIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, _metrics_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, _candidateRooms_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, __7__wrap3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, _layoutUuids_5__5) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, __7__wrap5) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, __u__1) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, _taskResults_5__7) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, __7__wrap7) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, __7__wrap8) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, __u__2) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, 0xb0>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor, OVRObjectPool::ListScope`1<T>, OVRTask`1::Awaiter<TResult>, System.Guid, System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/<QueryForExistingAnchorsTransform>d__39
struct CORDL_TYPE OVRSceneManager__QueryForExistingAnchorsTransform_d__39 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5cb5558, size 0x5f4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5cb5b5c, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneManager__QueryForExistingAnchorsTransform_d__39();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<::System::Guid>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "",
  // def_value: None }]
  constexpr OVRSceneManager__QueryForExistingAnchorsTransform_d__39(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                    ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap1,
                                                                    ::GlobalNamespace::OVRObjectPool_ListScope_1<::System::Guid> __7__wrap2,
                                                                    ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7654 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>7__wrap1, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::System::Guid> __7__wrap2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__39, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__39, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__39, __7__wrap1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__39, __7__wrap2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__39, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__39, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneManager
class CORDL_TYPE OVRSceneManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Classification = ::GlobalNamespace::OVRSceneManager_Classification;

  using Development = ::GlobalNamespace::OVRSceneManager_Development;

  using LoadSceneModelResult = ::GlobalNamespace::OVRSceneManager_LoadSceneModelResult;

  using LogForwarder = ::GlobalNamespace::OVRSceneManager_LogForwarder;

  using Metrics = ::GlobalNamespace::OVRSceneManager_Metrics;

  using RoomLayoutInformation = ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation;

  using RoomLayoutUuids = ::GlobalNamespace::OVRSceneManager_RoomLayoutUuids;

  template <typename T> using _FetchAnchorsAsync_d__36_1 = ::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__36_1<T>;

  using _FetchAnchorsAsync_d__37 = ::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37;

  using _FilterByActiveRoom_d__46 = ::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46;

  using _LoadSceneModelAsync_d__45 = ::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45;

  using _OnApplicationPause_d__38 = ::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__38;

  using _ProcessBatch_d__44 = ::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44;

  using _QueryForExistingAnchorsTransform_d__39 = ::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__39;

  using __LoadSceneModel_g__AwaitTask_40_0_d = ::GlobalNamespace::OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d;

  using __c__DisplayClass45_0 = ::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0;

  using __c__DisplayClass51_0 = ::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0;

  using __c__DisplayClass54_0 = ::GlobalNamespace::OVRSceneManager___c__DisplayClass54_0;

  /// @brief Field ActiveRoomsOnly, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_ActiveRoomsOnly, put = __cordl_internal_set_ActiveRoomsOnly)) bool ActiveRoomsOnly;

  __declspec(property(get = get_InitialAnchorParent, put = set_InitialAnchorParent)) ::UnityW<::UnityEngine::Transform> InitialAnchorParent;

  /// @brief Field LoadSceneModelFailedPermissionNotGranted, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_LoadSceneModelFailedPermissionNotGranted,
                      put = __cordl_internal_set_LoadSceneModelFailedPermissionNotGranted)) ::System::Action* LoadSceneModelFailedPermissionNotGranted;

  /// @brief Field MaxSceneAnchorUpdatesPerFrame, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_MaxSceneAnchorUpdatesPerFrame, put = __cordl_internal_set_MaxSceneAnchorUpdatesPerFrame)) int32_t MaxSceneAnchorUpdatesPerFrame;

  /// @brief Field NewSceneModelAvailable, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_NewSceneModelAvailable, put = __cordl_internal_set_NewSceneModelAvailable)) ::System::Action* NewSceneModelAvailable;

  /// @brief Field NoSceneModelToLoad, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_NoSceneModelToLoad, put = __cordl_internal_set_NoSceneModelToLoad)) ::System::Action* NoSceneModelToLoad;

  /// @brief Field PlanePrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_PlanePrefab, put = __cordl_internal_set_PlanePrefab)) ::UnityW<::GlobalNamespace::OVRSceneAnchor> PlanePrefab;

  /// @brief Field PrefabOverrides, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_PrefabOverrides,
                      put = __cordl_internal_set_PrefabOverrides)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>* PrefabOverrides;

  /// @brief Field RoomLayout, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_RoomLayout, put = __cordl_internal_set_RoomLayout)) ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation* RoomLayout;

  /// @brief Field SceneCaptureReturnedWithoutError, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_SceneCaptureReturnedWithoutError, put = __cordl_internal_set_SceneCaptureReturnedWithoutError)) ::System::Action* SceneCaptureReturnedWithoutError;

  /// @brief Field SceneModelLoadedSuccessfully, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_SceneModelLoadedSuccessfully, put = __cordl_internal_set_SceneModelLoadedSuccessfully)) ::System::Action* SceneModelLoadedSuccessfully;

  /// @brief Field UnexpectedErrorWithSceneCapture, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_UnexpectedErrorWithSceneCapture, put = __cordl_internal_set_UnexpectedErrorWithSceneCapture)) ::System::Action* UnexpectedErrorWithSceneCapture;

  __declspec(property(get = get_Verbose)) ::System::Nullable_1<::GlobalNamespace::OVRSceneManager_LogForwarder> Verbose;

  /// @brief Field VerboseLogging, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_VerboseLogging, put = __cordl_internal_set_VerboseLogging)) bool VerboseLogging;

  /// @brief Field VolumePrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_VolumePrefab, put = __cordl_internal_set_VolumePrefab)) ::UnityW<::GlobalNamespace::OVRSceneAnchor> VolumePrefab;

  /// @brief Field _cameraRig, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__cameraRig, put = __cordl_internal_set__cameraRig)) ::UnityW<::GlobalNamespace::OVRCameraRig> _cameraRig;

  /// @brief Field _hasLoadBeenRequested, offset 0x94, size 0x1
  __declspec(property(get = __cordl_internal_get__hasLoadBeenRequested, put = __cordl_internal_set__hasLoadBeenRequested)) bool _hasLoadBeenRequested;

  /// @brief Field _initialAnchorParent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__initialAnchorParent, put = __cordl_internal_set__initialAnchorParent)) ::UnityW<::UnityEngine::Transform> _initialAnchorParent;

  /// @brief Field _sceneAnchorUpdateIndex, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__sceneAnchorUpdateIndex, put = __cordl_internal_set__sceneAnchorUpdateIndex)) int32_t _sceneAnchorUpdateIndex;

  /// @brief Field _sceneCaptureRequestId, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneCaptureRequestId, put = __cordl_internal_set__sceneCaptureRequestId)) uint64_t _sceneCaptureRequestId;

  /// @brief Method Awake, addr 0x5cad690, size 0x138, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CheckClassificationsInRooms, addr 0x5caf0cc, size 0x4b8, virtual false, abstract: false, final false
  static inline void CheckClassificationsInRooms(bool success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* rooms,
                                                 ::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications, ::GlobalNamespace::OVRTask_1<bool> task);

  /// @brief Method CheckIfAnchorsContainClassifications, addr 0x5caf588, size 0x4ac, virtual false, abstract: false, final false
  static inline void CheckIfAnchorsContainClassifications(bool success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* roomAnchors,
                                                          ::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications, ::GlobalNamespace::OVRTask_1<bool> task);

  /// @brief Method CheckIfClassificationsAreValid, addr 0x5cae8e0, size 0x42c, virtual false, abstract: false, final false
  static inline void CheckIfClassificationsAreValid(::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications);

  /// @brief Method CollectLabelsFromAnchors, addr 0x5cafa34, size 0x19c, virtual false, abstract: false, final false
  static inline void CollectLabelsFromAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors, ::System::Collections::Generic::List_1<::StringW>* labels);

  /// @brief Method DestroyExistingAnchors, addr 0x5cade64, size 0x244, virtual false, abstract: false, final false
  inline void DestroyExistingAnchors();

  /// @brief Method DoesRoomSetupExist, addr 0x5caed0c, size 0x274, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> DoesRoomSetupExist(::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications);

  /// @brief Method FetchAnchorsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::GlobalNamespace::OVRTask_1<bool> FetchAnchorsAsync(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                                     ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* incrementalResultsCallback);

  /// @brief Method FetchAnchorsAsync, addr 0x5cadb38, size 0xc8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<bool> FetchAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids,
                                                                     ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors);

  /// @brief Method FilterByActiveRoom, addr 0x5cae358, size 0xcc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_2<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult, int32_t>>
  FilterByActiveRoom(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* rooms,
                     ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor, ::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>* layouts);

  /// @brief Method GetRoomLayoutInformation, addr 0x5cb023c, size 0x1d4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation* GetRoomLayoutInformation();

  /// @brief Method GetUuidsToQuery, addr 0x5caef84, size 0x148, virtual false, abstract: false, final false
  static inline void GetUuidsToQuery(::GlobalNamespace::OVRAnchor anchor, ::System::Collections::Generic::HashSet_1<::System::Guid>* uuidsToQuery);

  /// @brief Method InstantiateSceneAnchor, addr 0x5cb0bc0, size 0x58c, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::OVRSceneAnchor> InstantiateSceneAnchor(::GlobalNamespace::OVRAnchor anchor, ::GlobalNamespace::OVRSceneAnchor* prefab);

  /// @brief Method IsUserInRoom, addr 0x5cae424, size 0x2d8, virtual false, abstract: false, final false
  static inline bool IsUserInRoom(::UnityEngine::Vector3 userPosition, ::GlobalNamespace::OVRAnchor floor, ::GlobalNamespace::OVRAnchor ceiling);

  /// @brief Method LoadSceneModel, addr 0x5cadd58, size 0x10c, virtual false, abstract: false, final false
  inline bool LoadSceneModel();

  /// @brief Method LoadSceneModelAsync, addr 0x5cae0a8, size 0xc0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult> LoadSceneModelAsync();

  /// @brief Method Log, addr 0x5cad684, size 0x4, virtual false, abstract: false, final false
  static inline void Log(::StringW message, ::UnityEngine::GameObject* gameObject);

  /// @brief Method LogError, addr 0x5cad68c, size 0x4, virtual false, abstract: false, final false
  static inline void LogError(::StringW message, ::UnityEngine::GameObject* gameObject);

  /// @brief Method LogResult, addr 0x5cadae0, size 0x58, virtual false, abstract: false, final false
  static inline void LogResult(::GlobalNamespace::OVRAnchor_FetchResult value);

  /// @brief Method LogWarning, addr 0x5cad688, size 0x4, virtual false, abstract: false, final false
  static inline void LogWarning(::StringW message, ::UnityEngine::GameObject* gameObject);

  static inline ::GlobalNamespace::OVRSceneManager* New_ctor();

  /// @brief Method OVRManager_SceneCaptureComplete, addr 0x5cb0994, size 0x16c, virtual false, abstract: false, final false
  inline void OVRManager_SceneCaptureComplete(uint64_t requestId, bool result);

  /// @brief Method OnApplicationPause, addr 0x5cadc00, size 0xbc, virtual false, abstract: false, final false
  inline void OnApplicationPause(bool isPaused);

  /// @brief Method OnDisable, addr 0x5cb073c, size 0x258, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x5cb0484, size 0x2b8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnTrackingSpaceChanged, addr 0x5cafbd0, size 0x4, virtual false, abstract: false, final false
  static inline void OnTrackingSpaceChanged(::UnityEngine::Transform* trackingSpace);

  /// @brief Method PointInPolygon2D, addr 0x5cae6fc, size 0xa4, virtual false, abstract: false, final false
  static inline bool PointInPolygon2D(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> boundaryVertices, ::UnityEngine::Vector2 target);

  /// @brief Method ProcessBatch, addr 0x5cae280, size 0xd8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics> ProcessBatch(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* rooms, int32_t startingIndex);

  /// @brief Method QueryForExistingAnchorsTransform, addr 0x5cadcbc, size 0x9c, virtual false, abstract: false, final false
  inline void QueryForExistingAnchorsTransform();

  /// @brief Method RequestSceneCapture, addr 0x5cae7a0, size 0x4c, virtual false, abstract: false, final false
  inline bool RequestSceneCapture();

  /// @brief Method RequestSceneCapture, addr 0x5cae7ec, size 0x94, virtual false, abstract: false, final false
  inline bool RequestSceneCapture(::StringW requestString);

  /// @brief Method RequestSceneCapture, addr 0x5cae880, size 0x60, virtual false, abstract: false, final false
  inline bool RequestSceneCapture(::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications);

  /// @brief Method Start, addr 0x5cad888, size 0x258, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x5cafdf4, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateAllSceneAnchors, addr 0x5cafbd4, size 0x220, virtual false, abstract: false, final false
  static inline void UpdateAllSceneAnchors();

  /// @brief Method UpdateSomeSceneAnchors, addr 0x5cafdf8, size 0x140, virtual false, abstract: false, final false
  inline void UpdateSomeSceneAnchors();

  /// @brief Method <LoadSceneModel>g__AwaitTask|40_0, addr 0x5cae168, size 0xb8, virtual false, abstract: false, final false
  inline void _LoadSceneModel_g__AwaitTask_40_0(::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult> task);

  /// @brief Method <LoadSceneModel>g__InterpretResult|40_1, addr 0x5cae220, size 0x60, virtual false, abstract: false, final false
  inline bool _LoadSceneModel_g__InterpretResult_40_1(::GlobalNamespace::OVRSceneManager_LoadSceneModelResult result);

  constexpr bool const& __cordl_internal_get_ActiveRoomsOnly() const;

  constexpr bool& __cordl_internal_get_ActiveRoomsOnly();

  constexpr ::System::Action* const& __cordl_internal_get_LoadSceneModelFailedPermissionNotGranted() const;

  constexpr ::System::Action*& __cordl_internal_get_LoadSceneModelFailedPermissionNotGranted();

  constexpr int32_t const& __cordl_internal_get_MaxSceneAnchorUpdatesPerFrame() const;

  constexpr int32_t& __cordl_internal_get_MaxSceneAnchorUpdatesPerFrame();

  constexpr ::System::Action* const& __cordl_internal_get_NewSceneModelAvailable() const;

  constexpr ::System::Action*& __cordl_internal_get_NewSceneModelAvailable();

  constexpr ::System::Action* const& __cordl_internal_get_NoSceneModelToLoad() const;

  constexpr ::System::Action*& __cordl_internal_get_NoSceneModelToLoad();

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& __cordl_internal_get_PlanePrefab() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& __cordl_internal_get_PlanePrefab();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>* const& __cordl_internal_get_PrefabOverrides() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*& __cordl_internal_get_PrefabOverrides();

  constexpr ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation* const& __cordl_internal_get_RoomLayout() const;

  constexpr ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*& __cordl_internal_get_RoomLayout();

  constexpr ::System::Action* const& __cordl_internal_get_SceneCaptureReturnedWithoutError() const;

  constexpr ::System::Action*& __cordl_internal_get_SceneCaptureReturnedWithoutError();

  constexpr ::System::Action* const& __cordl_internal_get_SceneModelLoadedSuccessfully() const;

  constexpr ::System::Action*& __cordl_internal_get_SceneModelLoadedSuccessfully();

  constexpr ::System::Action* const& __cordl_internal_get_UnexpectedErrorWithSceneCapture() const;

  constexpr ::System::Action*& __cordl_internal_get_UnexpectedErrorWithSceneCapture();

  constexpr bool const& __cordl_internal_get_VerboseLogging() const;

  constexpr bool& __cordl_internal_get_VerboseLogging();

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& __cordl_internal_get_VolumePrefab() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& __cordl_internal_get_VolumePrefab();

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get__cameraRig() const;

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get__cameraRig();

  constexpr bool const& __cordl_internal_get__hasLoadBeenRequested() const;

  constexpr bool& __cordl_internal_get__hasLoadBeenRequested();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__initialAnchorParent() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__initialAnchorParent();

  constexpr int32_t const& __cordl_internal_get__sceneAnchorUpdateIndex() const;

  constexpr int32_t& __cordl_internal_get__sceneAnchorUpdateIndex();

  constexpr uint64_t const& __cordl_internal_get__sceneCaptureRequestId() const;

  constexpr uint64_t& __cordl_internal_get__sceneCaptureRequestId();

  constexpr void __cordl_internal_set_ActiveRoomsOnly(bool value);

  constexpr void __cordl_internal_set_LoadSceneModelFailedPermissionNotGranted(::System::Action* value);

  constexpr void __cordl_internal_set_MaxSceneAnchorUpdatesPerFrame(int32_t value);

  constexpr void __cordl_internal_set_NewSceneModelAvailable(::System::Action* value);

  constexpr void __cordl_internal_set_NoSceneModelToLoad(::System::Action* value);

  constexpr void __cordl_internal_set_PlanePrefab(::UnityW<::GlobalNamespace::OVRSceneAnchor> value);

  constexpr void __cordl_internal_set_PrefabOverrides(::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>* value);

  constexpr void __cordl_internal_set_RoomLayout(::GlobalNamespace::OVRSceneManager_RoomLayoutInformation* value);

  constexpr void __cordl_internal_set_SceneCaptureReturnedWithoutError(::System::Action* value);

  constexpr void __cordl_internal_set_SceneModelLoadedSuccessfully(::System::Action* value);

  constexpr void __cordl_internal_set_UnexpectedErrorWithSceneCapture(::System::Action* value);

  constexpr void __cordl_internal_set_VerboseLogging(bool value);

  constexpr void __cordl_internal_set_VolumePrefab(::UnityW<::GlobalNamespace::OVRSceneAnchor> value);

  constexpr void __cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig> value);

  constexpr void __cordl_internal_set__hasLoadBeenRequested(bool value);

  constexpr void __cordl_internal_set__initialAnchorParent(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__sceneAnchorUpdateIndex(int32_t value);

  constexpr void __cordl_internal_set__sceneCaptureRequestId(uint64_t value);

  /// @brief Method .ctor, addr 0x5cb1214, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_LoadSceneModelFailedPermissionNotGranted, addr 0x5cad4e8, size 0xac, virtual false, abstract: false, final false
  inline void add_LoadSceneModelFailedPermissionNotGranted(::System::Action* value);

  /// @brief Method get_InitialAnchorParent, addr 0x5cad4d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_InitialAnchorParent();

  /// @brief Method get_Verbose, addr 0x5cad640, size 0x44, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::GlobalNamespace::OVRSceneManager_LogForwarder> get_Verbose();

  /// @brief Method remove_LoadSceneModelFailedPermissionNotGranted, addr 0x5cad594, size 0xac, virtual false, abstract: false, final false
  inline void remove_LoadSceneModelFailedPermissionNotGranted(::System::Action* value);

  /// @brief Method set_InitialAnchorParent, addr 0x5cad4e0, size 0x8, virtual false, abstract: false, final false
  inline void set_InitialAnchorParent(::UnityEngine::Transform* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneManager(OVRSceneManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneManager(OVRSceneManager const&) = delete;

  /// @brief Field DeprecationMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString DeprecationMessage{
    u"OVRSceneManager and associated classes are deprecated (v65), please use MR Utility Kit instead (https://developer.oculus.com/documentation/unity/unity-mr-utility-kit-overview)"
  };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7655 };

  /// @brief Field PlanePrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneAnchor> ___PlanePrefab;

  /// @brief Field VolumePrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneAnchor> ___VolumePrefab;

  /// @brief Field PrefabOverrides, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>* ___PrefabOverrides;

  /// @brief Field ActiveRoomsOnly, offset: 0x38, size: 0x1, def value: None
  bool ___ActiveRoomsOnly;

  /// @brief Field VerboseLogging, offset: 0x39, size: 0x1, def value: None
  bool ___VerboseLogging;

  /// @brief Field MaxSceneAnchorUpdatesPerFrame, offset: 0x3c, size: 0x4, def value: None
  int32_t ___MaxSceneAnchorUpdatesPerFrame;

  /// @brief Field _initialAnchorParent, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____initialAnchorParent;

  /// @brief Field SceneModelLoadedSuccessfully, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___SceneModelLoadedSuccessfully;

  /// @brief Field NoSceneModelToLoad, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___NoSceneModelToLoad;

  /// @brief Field LoadSceneModelFailedPermissionNotGranted, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___LoadSceneModelFailedPermissionNotGranted;

  /// @brief Field SceneCaptureReturnedWithoutError, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___SceneCaptureReturnedWithoutError;

  /// @brief Field UnexpectedErrorWithSceneCapture, offset: 0x68, size: 0x8, def value: None
  ::System::Action* ___UnexpectedErrorWithSceneCapture;

  /// @brief Field NewSceneModelAvailable, offset: 0x70, size: 0x8, def value: None
  ::System::Action* ___NewSceneModelAvailable;

  /// @brief Field RoomLayout, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation* ___RoomLayout;

  /// @brief Field _sceneCaptureRequestId, offset: 0x80, size: 0x8, def value: None
  uint64_t ____sceneCaptureRequestId;

  /// @brief Field _cameraRig, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ____cameraRig;

  /// @brief Field _sceneAnchorUpdateIndex, offset: 0x90, size: 0x4, def value: None
  int32_t ____sceneAnchorUpdateIndex;

  /// @brief Field _hasLoadBeenRequested, offset: 0x94, size: 0x1, def value: None
  bool ____hasLoadBeenRequested;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___PlanePrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___VolumePrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___PrefabOverrides) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___ActiveRoomsOnly) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___VerboseLogging) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___MaxSceneAnchorUpdatesPerFrame) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____initialAnchorParent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___SceneModelLoadedSuccessfully) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___NoSceneModelToLoad) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___LoadSceneModelFailedPermissionNotGranted) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___SceneCaptureReturnedWithoutError) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___UnexpectedErrorWithSceneCapture) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___NewSceneModelAvailable) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___RoomLayout) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____sceneCaptureRequestId) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____cameraRig) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____sceneAnchorUpdateIndex) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____hasLoadBeenRequested) == 0x94, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager_LoadSceneModelResult, "", "OVRSceneManager/LoadSceneModelResult");
NEED_NO_BOX(::GlobalNamespace::OVRSceneManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager*, "", "OVRSceneManager");
NEED_NO_BOX(::GlobalNamespace::OVRSceneManager_Classification);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager_Classification*, "", "OVRSceneManager/Classification");
NEED_NO_BOX(::GlobalNamespace::OVRSceneManager_Development);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager_Development*, "", "OVRSceneManager/Development");
NEED_NO_BOX(::GlobalNamespace::OVRSceneManager_RoomLayoutInformation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*, "", "OVRSceneManager/RoomLayoutInformation");
NEED_NO_BOX(::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0*, "", "OVRSceneManager/<>c__DisplayClass45_0");
NEED_NO_BOX(::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager___c__DisplayClass51_0*, "", "OVRSceneManager/<>c__DisplayClass51_0");
NEED_NO_BOX(::GlobalNamespace::OVRSceneManager___c__DisplayClass54_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager___c__DisplayClass54_0*, "", "OVRSceneManager/<>c__DisplayClass54_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager_LogForwarder, "", "OVRSceneManager/LogForwarder");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager_Metrics, "", "OVRSceneManager/Metrics");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager_RoomLayoutUuids, "", "OVRSceneManager/RoomLayoutUuids");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__36_1, "", "OVRSceneManager/<FetchAnchorsAsync>d__36`1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37, "", "OVRSceneManager/<FetchAnchorsAsync>d__37");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, "", "OVRSceneManager/<FilterByActiveRoom>d__46");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, "", "OVRSceneManager/<LoadSceneModelAsync>d__45");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__38, "", "OVRSceneManager/<OnApplicationPause>d__38");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, "", "OVRSceneManager/<ProcessBatch>d__44");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__39, "", "OVRSceneManager/<QueryForExistingAnchorsTransform>d__39");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d, "", "OVRSceneManager/<<LoadSceneModel>g__AwaitTask|40_0>d");
