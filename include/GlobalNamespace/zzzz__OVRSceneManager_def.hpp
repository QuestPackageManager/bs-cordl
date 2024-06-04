#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneManager)
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
class OVRScenePlane;
}
namespace GlobalNamespace {
class OVRScenePrefabOverride;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace GlobalNamespace {
template <typename T> struct __OVRObjectPool__ListScope_1;
}
namespace GlobalNamespace {
class __OVRSceneManager__Classification;
}
namespace GlobalNamespace {
class __OVRSceneManager__Development;
}
namespace GlobalNamespace {
struct __OVRSceneManager__LogForwarder;
}
namespace GlobalNamespace {
class __OVRSceneManager__RoomLayoutInformation;
}
namespace GlobalNamespace {
struct __OVRSceneManager___OnApplicationPause_d__28;
}
namespace GlobalNamespace {
struct __OVRSceneManager___QueryForExistingAnchorsTransform_d__29;
}
namespace GlobalNamespace {
class __OVRSceneManager____c__DisplayClass37_0;
}
namespace GlobalNamespace {
class __OVRSceneManager____c__DisplayClass40_0;
}
namespace GlobalNamespace {
template <typename TResult> struct __OVRTask_1__Awaiter;
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
struct AsyncVoidMethodBuilder;
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
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSceneManager;
}
namespace GlobalNamespace {
class __OVRSceneManager__Classification;
}
namespace GlobalNamespace {
class __OVRSceneManager__Development;
}
namespace GlobalNamespace {
class __OVRSceneManager__RoomLayoutInformation;
}
namespace GlobalNamespace {
class __OVRSceneManager____c__DisplayClass37_0;
}
namespace GlobalNamespace {
class __OVRSceneManager____c__DisplayClass40_0;
}
namespace GlobalNamespace {
struct __OVRSceneManager__LogForwarder;
}
namespace GlobalNamespace {
struct __OVRSceneManager___OnApplicationPause_d__28;
}
namespace GlobalNamespace {
struct __OVRSceneManager___QueryForExistingAnchorsTransform_d__29;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneManager);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSceneManager__Classification);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSceneManager__Development);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0);
MARK_VAL_T(::GlobalNamespace::__OVRSceneManager__LogForwarder);
MARK_VAL_T(::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28);
MARK_VAL_T(::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29);
// Type: ::Classification
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSceneManager::Classification*
class CORDL_TYPE __OVRSceneManager__Classification : public ::System::Object {
public:
  // Declarations
  /// @brief Field <List>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__List_k__BackingField, put = setStaticF__List_k__BackingField))::System::Collections::Generic::IReadOnlyList_1<::StringW>* _List_k__BackingField;

  static inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* getStaticF__List_k__BackingField();

  /// @brief Method get_List, addr 0x2b7c91c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_List();

  static inline void setStaticF__List_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneManager__Classification();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager__Classification", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSceneManager__Classification(__OVRSceneManager__Classification&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager__Classification", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSceneManager__Classification(__OVRSceneManager__Classification const&) = delete;

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneManager__Classification, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RoomLayoutInformation
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSceneManager::RoomLayoutInformation*
class CORDL_TYPE __OVRSceneManager__RoomLayoutInformation : public ::System::Object {
public:
  // Declarations
  /// @brief Field Ceiling, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Ceiling, put = __cordl_internal_set_Ceiling))::UnityW<::GlobalNamespace::OVRScenePlane> Ceiling;

  /// @brief Field Floor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Floor, put = __cordl_internal_set_Floor))::UnityW<::GlobalNamespace::OVRScenePlane> Floor;

  /// @brief Field Walls, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Walls, put = __cordl_internal_set_Walls))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* Walls;

  static inline ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::OVRScenePlane> const& __cordl_internal_get_Ceiling() const;

  constexpr ::UnityW<::GlobalNamespace::OVRScenePlane>& __cordl_internal_get_Ceiling();

  constexpr ::UnityW<::GlobalNamespace::OVRScenePlane> const& __cordl_internal_get_Floor() const;

  constexpr ::UnityW<::GlobalNamespace::OVRScenePlane>& __cordl_internal_get_Floor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*& __cordl_internal_get_Walls();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*> const& __cordl_internal_get_Walls() const;

  constexpr void __cordl_internal_set_Ceiling(::UnityW<::GlobalNamespace::OVRScenePlane> value);

  constexpr void __cordl_internal_set_Floor(::UnityW<::GlobalNamespace::OVRScenePlane> value);

  constexpr void __cordl_internal_set_Walls(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* value);

  /// @brief Method .ctor, addr 0x2b7bc70, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneManager__RoomLayoutInformation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager__RoomLayoutInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSceneManager__RoomLayoutInformation(__OVRSceneManager__RoomLayoutInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager__RoomLayoutInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSceneManager__RoomLayoutInformation(__OVRSceneManager__RoomLayoutInformation const&) = delete;

  /// @brief Field Floor, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRScenePlane> ___Floor;

  /// @brief Field Ceiling, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRScenePlane> ___Ceiling;

  /// @brief Field Walls, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* ___Walls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation, ___Floor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation, ___Ceiling) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation, ___Walls) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LogForwarder
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRSceneManager::LogForwarder
#pragma pack(push, 0)
struct CORDL_TYPE __OVRSceneManager__LogForwarder {
public:
  // Declarations
  /// @brief Method Log, addr 0x2b7a1e4, size 0xbc, virtual false, abstract: false, final false
  inline void Log(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject);

  /// @brief Method LogError, addr 0x2b795a0, size 0xbc, virtual false, abstract: false, final false
  inline void LogError(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject);

  /// @brief Method LogWarning, addr 0x2b7c2c8, size 0xbc, virtual false, abstract: false, final false
  inline void LogWarning(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneManager__LogForwarder();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneManager__LogForwarder, 0x1>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Development
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSceneManager::Development*
class CORDL_TYPE __OVRSceneManager__Development : public ::System::Object {
public:
  // Declarations
  /// @brief Method Log, addr 0x2b7ce34, size 0xbc, virtual false, abstract: false, final false
  static inline void Log(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject);

  /// @brief Method LogError, addr 0x2b7cfac, size 0xbc, virtual false, abstract: false, final false
  static inline void LogError(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject);

  /// @brief Method LogWarning, addr 0x2b7cef0, size 0xbc, virtual false, abstract: false, final false
  static inline void LogWarning(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneManager__Development();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager__Development", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSceneManager__Development(__OVRSceneManager__Development&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager__Development", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSceneManager__Development(__OVRSceneManager__Development const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneManager__Development, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<OnApplicationPause>d__28
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRSceneManager::<OnApplicationPause>d__28
struct CORDL_TYPE __OVRSceneManager___OnApplicationPause_d__28 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2b7d068, size 0x5ec, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2b7d654, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneManager___OnApplicationPause_d__28();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "isPaused", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::UnityW<::GlobalNamespace::OVRSceneManager>", modifiers: "", def_value: None }, CppParam { name: "_anchors_5__2", ty:
  // "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty:
  // "::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::__OVRTask_1__Awaiter<bool>",
  // modifiers: "", def_value: None }]
  constexpr __OVRSceneManager___OnApplicationPause_d__28(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, bool isPaused,
                                                         ::UnityW<::GlobalNamespace::OVRSceneManager> __4__this, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _anchors_5__2,
                                                         ::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap2,
                                                         ::GlobalNamespace::__OVRTask_1__Awaiter<bool> __u__1) noexcept;

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
  ::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::GlobalNamespace::__OVRTask_1__Awaiter<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28, isPaused) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28, _anchors_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28, __7__wrap2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28, __u__1) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<QueryForExistingAnchorsTransform>d__29
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRSceneManager::<QueryForExistingAnchorsTransform>d__29
struct CORDL_TYPE __OVRSceneManager___QueryForExistingAnchorsTransform_d__29 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2b7d660, size 0x5f8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2b7dc58, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneManager___QueryForExistingAnchorsTransform_d__29();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty:
  // "::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty:
  // "::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::__OVRTask_1__Awaiter<bool>", modifiers: "",
  // def_value: None }]
  constexpr __OVRSceneManager___QueryForExistingAnchorsTransform_d__29(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                       ::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap1,
                                                                       ::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid> __7__wrap2,
                                                                       ::GlobalNamespace::__OVRTask_1__Awaiter<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>7__wrap1, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid> __7__wrap2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::GlobalNamespace::__OVRTask_1__Awaiter<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29, __7__wrap1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29, __7__wrap2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass37_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSceneManager::<>c__DisplayClass37_0*
class CORDL_TYPE __OVRSceneManager____c__DisplayClass37_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field requestedAnchorClassifications, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_requestedAnchorClassifications,
                      put = __cordl_internal_set_requestedAnchorClassifications))::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications;

  /// @brief Field task, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_task, put = __cordl_internal_set_task))::GlobalNamespace::OVRTask_1<bool> task;

  static inline ::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0* New_ctor();

  /// @brief Method <DoesRoomSetupExist>b__0, addr 0x2b7dc64, size 0x18, virtual false, abstract: false, final false
  inline void _DoesRoomSetupExist_b__0(bool result, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors);

  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& __cordl_internal_get_requestedAnchorClassifications();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::StringW>*> const& __cordl_internal_get_requestedAnchorClassifications() const;

  constexpr ::GlobalNamespace::OVRTask_1<bool> const& __cordl_internal_get_task() const;

  constexpr ::GlobalNamespace::OVRTask_1<bool>& __cordl_internal_get_task();

  constexpr void __cordl_internal_set_requestedAnchorClassifications(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  constexpr void __cordl_internal_set_task(::GlobalNamespace::OVRTask_1<bool> value);

  /// @brief Method .ctor, addr 0x2b7aa50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneManager____c__DisplayClass37_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager____c__DisplayClass37_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSceneManager____c__DisplayClass37_0(__OVRSceneManager____c__DisplayClass37_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager____c__DisplayClass37_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSceneManager____c__DisplayClass37_0(__OVRSceneManager____c__DisplayClass37_0 const&) = delete;

  /// @brief Field requestedAnchorClassifications, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::StringW>* ___requestedAnchorClassifications;

  /// @brief Field task, offset: 0x18, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1<bool> ___task;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0, ___requestedAnchorClassifications) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0, ___task) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass40_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSceneManager::<>c__DisplayClass40_0*
class CORDL_TYPE __OVRSceneManager____c__DisplayClass40_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field requestedAnchorClassifications, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_requestedAnchorClassifications,
                      put = __cordl_internal_set_requestedAnchorClassifications))::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications;

  /// @brief Field roomAnchors, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_roomAnchors, put = __cordl_internal_set_roomAnchors))::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* roomAnchors;

  /// @brief Field task, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_task, put = __cordl_internal_set_task))::GlobalNamespace::OVRTask_1<bool> task;

  static inline ::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0* New_ctor();

  /// @brief Method <CheckClassificationsInRooms>b__0, addr 0x2b7dc7c, size 0x14, virtual false, abstract: false, final false
  inline void _CheckClassificationsInRooms_b__0(bool result);

  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& __cordl_internal_get_requestedAnchorClassifications();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::StringW>*> const& __cordl_internal_get_requestedAnchorClassifications() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*& __cordl_internal_get_roomAnchors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*> const& __cordl_internal_get_roomAnchors() const;

  constexpr ::GlobalNamespace::OVRTask_1<bool> const& __cordl_internal_get_task() const;

  constexpr ::GlobalNamespace::OVRTask_1<bool>& __cordl_internal_get_task();

  constexpr void __cordl_internal_set_requestedAnchorClassifications(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  constexpr void __cordl_internal_set_roomAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* value);

  constexpr void __cordl_internal_set_task(::GlobalNamespace::OVRTask_1<bool> value);

  /// @brief Method .ctor, addr 0x2b7afb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneManager____c__DisplayClass40_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager____c__DisplayClass40_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSceneManager____c__DisplayClass40_0(__OVRSceneManager____c__DisplayClass40_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager____c__DisplayClass40_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSceneManager____c__DisplayClass40_0(__OVRSceneManager____c__DisplayClass40_0 const&) = delete;

  /// @brief Field requestedAnchorClassifications, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::StringW>* ___requestedAnchorClassifications;

  /// @brief Field task, offset: 0x18, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1<bool> ___task;

  /// @brief Field roomAnchors, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* ___roomAnchors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0, ___requestedAnchorClassifications) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0, ___task) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0, ___roomAnchors) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRSceneManager
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 145, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSceneManager*
class CORDL_TYPE OVRSceneManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Classification = ::GlobalNamespace::__OVRSceneManager__Classification;

  using Development = ::GlobalNamespace::__OVRSceneManager__Development;

  using LogForwarder = ::GlobalNamespace::__OVRSceneManager__LogForwarder;

  using RoomLayoutInformation = ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation;

  using _OnApplicationPause_d__28 = ::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28;

  using _QueryForExistingAnchorsTransform_d__29 = ::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29;

  using __c__DisplayClass37_0 = ::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0;

  using __c__DisplayClass40_0 = ::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0;

  __declspec(property(get = get_InitialAnchorParent, put = set_InitialAnchorParent))::UnityW<::UnityEngine::Transform> InitialAnchorParent;

  /// @brief Field MaxSceneAnchorUpdatesPerFrame, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_MaxSceneAnchorUpdatesPerFrame, put = __cordl_internal_set_MaxSceneAnchorUpdatesPerFrame)) int32_t MaxSceneAnchorUpdatesPerFrame;

  /// @brief Field NewSceneModelAvailable, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_NewSceneModelAvailable, put = __cordl_internal_set_NewSceneModelAvailable))::System::Action* NewSceneModelAvailable;

  /// @brief Field NoSceneModelToLoad, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_NoSceneModelToLoad, put = __cordl_internal_set_NoSceneModelToLoad))::System::Action* NoSceneModelToLoad;

  /// @brief Field PlanePrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_PlanePrefab, put = __cordl_internal_set_PlanePrefab))::UnityW<::GlobalNamespace::OVRSceneAnchor> PlanePrefab;

  /// @brief Field PrefabOverrides, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_PrefabOverrides,
                      put = __cordl_internal_set_PrefabOverrides))::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>* PrefabOverrides;

  /// @brief Field RoomLayout, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_RoomLayout, put = __cordl_internal_set_RoomLayout))::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation* RoomLayout;

  /// @brief Field SceneCaptureReturnedWithoutError, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_SceneCaptureReturnedWithoutError, put = __cordl_internal_set_SceneCaptureReturnedWithoutError))::System::Action* SceneCaptureReturnedWithoutError;

  /// @brief Field SceneModelLoadedSuccessfully, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_SceneModelLoadedSuccessfully, put = __cordl_internal_set_SceneModelLoadedSuccessfully))::System::Action* SceneModelLoadedSuccessfully;

  /// @brief Field UnexpectedErrorWithSceneCapture, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_UnexpectedErrorWithSceneCapture, put = __cordl_internal_set_UnexpectedErrorWithSceneCapture))::System::Action* UnexpectedErrorWithSceneCapture;

  __declspec(property(get = get_Verbose))::System::Nullable_1<::GlobalNamespace::__OVRSceneManager__LogForwarder> Verbose;

  /// @brief Field VerboseLogging, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_VerboseLogging, put = __cordl_internal_set_VerboseLogging)) bool VerboseLogging;

  /// @brief Field VolumePrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_VolumePrefab, put = __cordl_internal_set_VolumePrefab))::UnityW<::GlobalNamespace::OVRSceneAnchor> VolumePrefab;

  /// @brief Field _cameraRig, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__cameraRig, put = __cordl_internal_set__cameraRig))::UnityW<::GlobalNamespace::OVRCameraRig> _cameraRig;

  /// @brief Field _hasLoadedScene, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__hasLoadedScene, put = __cordl_internal_set__hasLoadedScene)) bool _hasLoadedScene;

  /// @brief Field _initialAnchorParent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__initialAnchorParent, put = __cordl_internal_set__initialAnchorParent))::UnityW<::UnityEngine::Transform> _initialAnchorParent;

  /// @brief Field _onAnchorsFetchCompleted, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__onAnchorsFetchCompleted,
                      put = __cordl_internal_set__onAnchorsFetchCompleted))::System::Action_2<bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>* _onAnchorsFetchCompleted;

  /// @brief Field _roomCounter, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get__roomCounter, put = __cordl_internal_set__roomCounter)) int32_t _roomCounter;

  /// @brief Field _sceneAnchorUpdateIndex, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__sceneAnchorUpdateIndex, put = __cordl_internal_set__sceneAnchorUpdateIndex)) int32_t _sceneAnchorUpdateIndex;

  /// @brief Field _sceneCaptureRequestId, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneCaptureRequestId, put = __cordl_internal_set__sceneCaptureRequestId)) uint64_t _sceneCaptureRequestId;

  /// @brief Method Awake, addr 0x2b79428, size 0x178, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CheckClassificationsInRooms, addr 0x2b7ab3c, size 0x474, virtual false, abstract: false, final false
  static inline void CheckClassificationsInRooms(bool success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* rooms,
                                                 ::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications, ::GlobalNamespace::OVRTask_1<bool> task);

  /// @brief Method CheckIfAnchorsContainClassifications, addr 0x2b7afb8, size 0x48c, virtual false, abstract: false, final false
  static inline void CheckIfAnchorsContainClassifications(bool success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* roomAnchors,
                                                          ::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications, ::GlobalNamespace::OVRTask_1<bool> task);

  /// @brief Method CheckIfClassificationsAreValid, addr 0x2b7a3d4, size 0x41c, virtual false, abstract: false, final false
  static inline void CheckIfClassificationsAreValid(::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications);

  /// @brief Method CollectLabelsFromAnchors, addr 0x2b7b444, size 0x130, virtual false, abstract: false, final false
  static inline void CollectLabelsFromAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors, ::System::Collections::Generic::List_1<::StringW>* labels);

  /// @brief Method DestroyExistingAnchors, addr 0x2b798a8, size 0x1e4, virtual false, abstract: false, final false
  inline void DestroyExistingAnchors();

  /// @brief Method DoesRoomSetupExist, addr 0x2b7a7f0, size 0x260, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> DoesRoomSetupExist(::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications);

  /// @brief Method GetRoomLayoutInformation, addr 0x2b7a0a0, size 0x144, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation* GetRoomLayoutInformation();

  /// @brief Method GetUuidsToQuery, addr 0x2b7aa58, size 0xe4, virtual false, abstract: false, final false
  static inline void GetUuidsToQuery(::GlobalNamespace::OVRAnchor anchor, ::System::Collections::Generic::HashSet_1<::System::Guid>* uuidsToQuery);

  /// @brief Method InstantiateSceneAnchor, addr 0x2b7c384, size 0x50c, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::OVRSceneAnchor> InstantiateSceneAnchor(::GlobalNamespace::OVRAnchor anchor, ::GlobalNamespace::OVRSceneAnchor* prefab);

  /// @brief Method InstantiateSceneRooms, addr 0x2b79b34, size 0x3b4, virtual false, abstract: false, final false
  inline void InstantiateSceneRooms(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* roomLayoutAnchors);

  /// @brief Method LoadSceneModel, addr 0x2b79790, size 0x118, virtual false, abstract: false, final false
  inline bool LoadSceneModel();

  static inline ::GlobalNamespace::OVRSceneManager* New_ctor();

  /// @brief Method OVRManager_SceneCaptureComplete, addr 0x2b7c1b0, size 0x118, virtual false, abstract: false, final false
  inline void OVRManager_SceneCaptureComplete(uint64_t requestId, bool result);

  /// @brief Method OnAnchorsFetchCompleted, addr 0x2b79a8c, size 0xa8, virtual false, abstract: false, final false
  inline void OnAnchorsFetchCompleted(bool success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* roomLayoutAnchors);

  /// @brief Method OnApplicationPause, addr 0x2b7965c, size 0xa8, virtual false, abstract: false, final false
  inline void OnApplicationPause(bool isPaused);

  /// @brief Method OnDisable, addr 0x2b7bf7c, size 0x234, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2b7bcec, size 0x290, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnSceneRoomLoadCompleted, addr 0x2b79fd8, size 0xc8, virtual false, abstract: false, final false
  inline void OnSceneRoomLoadCompleted();

  /// @brief Method OnTrackingSpaceChanged, addr 0x2b7b574, size 0x4, virtual false, abstract: false, final false
  static inline void OnTrackingSpaceChanged(::UnityEngine::Transform* trackingSpace);

  /// @brief Method QueryForExistingAnchorsTransform, addr 0x2b79704, size 0x8c, virtual false, abstract: false, final false
  inline void QueryForExistingAnchorsTransform();

  /// @brief Method RequestSceneCapture, addr 0x2b7a2a0, size 0x48, virtual false, abstract: false, final false
  inline bool RequestSceneCapture();

  /// @brief Method RequestSceneCapture, addr 0x2b7a2e8, size 0x98, virtual false, abstract: false, final false
  inline bool RequestSceneCapture(::StringW requestString);

  /// @brief Method RequestSceneCapture, addr 0x2b7a380, size 0x54, virtual false, abstract: false, final false
  inline bool RequestSceneCapture(::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications);

  /// @brief Method Update, addr 0x2b7b7b8, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateAllSceneAnchors, addr 0x2b7b578, size 0x240, virtual false, abstract: false, final false
  static inline void UpdateAllSceneAnchors();

  /// @brief Method UpdateSomeSceneAnchors, addr 0x2b7b7bc, size 0x130, virtual false, abstract: false, final false
  inline void UpdateSomeSceneAnchors();

  constexpr int32_t const& __cordl_internal_get_MaxSceneAnchorUpdatesPerFrame() const;

  constexpr int32_t& __cordl_internal_get_MaxSceneAnchorUpdatesPerFrame();

  constexpr ::System::Action*& __cordl_internal_get_NewSceneModelAvailable();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_NewSceneModelAvailable() const;

  constexpr ::System::Action*& __cordl_internal_get_NoSceneModelToLoad();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_NoSceneModelToLoad() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& __cordl_internal_get_PlanePrefab() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& __cordl_internal_get_PlanePrefab();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*& __cordl_internal_get_PrefabOverrides();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*> const& __cordl_internal_get_PrefabOverrides() const;

  constexpr ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*& __cordl_internal_get_RoomLayout();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*> const& __cordl_internal_get_RoomLayout() const;

  constexpr ::System::Action*& __cordl_internal_get_SceneCaptureReturnedWithoutError();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_SceneCaptureReturnedWithoutError() const;

  constexpr ::System::Action*& __cordl_internal_get_SceneModelLoadedSuccessfully();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_SceneModelLoadedSuccessfully() const;

  constexpr ::System::Action*& __cordl_internal_get_UnexpectedErrorWithSceneCapture();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_UnexpectedErrorWithSceneCapture() const;

  constexpr bool const& __cordl_internal_get_VerboseLogging() const;

  constexpr bool& __cordl_internal_get_VerboseLogging();

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& __cordl_internal_get_VolumePrefab() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& __cordl_internal_get_VolumePrefab();

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get__cameraRig() const;

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get__cameraRig();

  constexpr bool const& __cordl_internal_get__hasLoadedScene() const;

  constexpr bool& __cordl_internal_get__hasLoadedScene();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__initialAnchorParent() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__initialAnchorParent();

  constexpr ::System::Action_2<bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>*& __cordl_internal_get__onAnchorsFetchCompleted();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>*> const&
  __cordl_internal_get__onAnchorsFetchCompleted() const;

  constexpr int32_t const& __cordl_internal_get__roomCounter() const;

  constexpr int32_t& __cordl_internal_get__roomCounter();

  constexpr int32_t const& __cordl_internal_get__sceneAnchorUpdateIndex() const;

  constexpr int32_t& __cordl_internal_get__sceneAnchorUpdateIndex();

  constexpr uint64_t const& __cordl_internal_get__sceneCaptureRequestId() const;

  constexpr uint64_t& __cordl_internal_get__sceneCaptureRequestId();

  constexpr void __cordl_internal_set_MaxSceneAnchorUpdatesPerFrame(int32_t value);

  constexpr void __cordl_internal_set_NewSceneModelAvailable(::System::Action* value);

  constexpr void __cordl_internal_set_NoSceneModelToLoad(::System::Action* value);

  constexpr void __cordl_internal_set_PlanePrefab(::UnityW<::GlobalNamespace::OVRSceneAnchor> value);

  constexpr void __cordl_internal_set_PrefabOverrides(::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>* value);

  constexpr void __cordl_internal_set_RoomLayout(::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation* value);

  constexpr void __cordl_internal_set_SceneCaptureReturnedWithoutError(::System::Action* value);

  constexpr void __cordl_internal_set_SceneModelLoadedSuccessfully(::System::Action* value);

  constexpr void __cordl_internal_set_UnexpectedErrorWithSceneCapture(::System::Action* value);

  constexpr void __cordl_internal_set_VerboseLogging(bool value);

  constexpr void __cordl_internal_set_VolumePrefab(::UnityW<::GlobalNamespace::OVRSceneAnchor> value);

  constexpr void __cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig> value);

  constexpr void __cordl_internal_set__hasLoadedScene(bool value);

  constexpr void __cordl_internal_set__initialAnchorParent(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__onAnchorsFetchCompleted(::System::Action_2<bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>* value);

  constexpr void __cordl_internal_set__roomCounter(int32_t value);

  constexpr void __cordl_internal_set__sceneAnchorUpdateIndex(int32_t value);

  constexpr void __cordl_internal_set__sceneCaptureRequestId(uint64_t value);

  /// @brief Method .ctor, addr 0x2b7c890, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_InitialAnchorParent, addr 0x2b793b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_InitialAnchorParent();

  /// @brief Method get_Verbose, addr 0x2b793c0, size 0x68, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::GlobalNamespace::__OVRSceneManager__LogForwarder> get_Verbose();

  /// @brief Method set_InitialAnchorParent, addr 0x2b793b8, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field PlanePrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneAnchor> ___PlanePrefab;

  /// @brief Field VolumePrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneAnchor> ___VolumePrefab;

  /// @brief Field PrefabOverrides, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>* ___PrefabOverrides;

  /// @brief Field VerboseLogging, offset: 0x30, size: 0x1, def value: None
  bool ___VerboseLogging;

  /// @brief Field MaxSceneAnchorUpdatesPerFrame, offset: 0x34, size: 0x4, def value: None
  int32_t ___MaxSceneAnchorUpdatesPerFrame;

  /// @brief Field _initialAnchorParent, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____initialAnchorParent;

  /// @brief Field SceneModelLoadedSuccessfully, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___SceneModelLoadedSuccessfully;

  /// @brief Field NoSceneModelToLoad, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___NoSceneModelToLoad;

  /// @brief Field SceneCaptureReturnedWithoutError, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___SceneCaptureReturnedWithoutError;

  /// @brief Field UnexpectedErrorWithSceneCapture, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___UnexpectedErrorWithSceneCapture;

  /// @brief Field NewSceneModelAvailable, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___NewSceneModelAvailable;

  /// @brief Field RoomLayout, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation* ___RoomLayout;

  /// @brief Field _sceneCaptureRequestId, offset: 0x70, size: 0x8, def value: None
  uint64_t ____sceneCaptureRequestId;

  /// @brief Field _cameraRig, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ____cameraRig;

  /// @brief Field _sceneAnchorUpdateIndex, offset: 0x80, size: 0x4, def value: None
  int32_t ____sceneAnchorUpdateIndex;

  /// @brief Field _roomCounter, offset: 0x84, size: 0x4, def value: None
  int32_t ____roomCounter;

  /// @brief Field _onAnchorsFetchCompleted, offset: 0x88, size: 0x8, def value: None
  ::System::Action_2<bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>* ____onAnchorsFetchCompleted;

  /// @brief Field _hasLoadedScene, offset: 0x90, size: 0x1, def value: None
  bool ____hasLoadedScene;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___PlanePrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___VolumePrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___PrefabOverrides) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___VerboseLogging) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___MaxSceneAnchorUpdatesPerFrame) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____initialAnchorParent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___SceneModelLoadedSuccessfully) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___NoSceneModelToLoad) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___SceneCaptureReturnedWithoutError) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___UnexpectedErrorWithSceneCapture) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___NewSceneModelAvailable) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___RoomLayout) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____sceneCaptureRequestId) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____cameraRig) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____sceneAnchorUpdateIndex) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____roomCounter) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____onAnchorsFetchCompleted) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____hasLoadedScene) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSceneManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager*, "", "OVRSceneManager");
NEED_NO_BOX(::GlobalNamespace::__OVRSceneManager__Classification);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneManager__Classification*, "", "OVRSceneManager/Classification");
NEED_NO_BOX(::GlobalNamespace::__OVRSceneManager__Development);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneManager__Development*, "", "OVRSceneManager/Development");
NEED_NO_BOX(::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*, "", "OVRSceneManager/RoomLayoutInformation");
NEED_NO_BOX(::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0*, "", "OVRSceneManager/<>c__DisplayClass37_0");
NEED_NO_BOX(::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0*, "", "OVRSceneManager/<>c__DisplayClass40_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneManager__LogForwarder, "", "OVRSceneManager/LogForwarder");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28, "", "OVRSceneManager/<OnApplicationPause>d__28");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29, "", "OVRSceneManager/<QueryForExistingAnchorsTransform>d__29");
