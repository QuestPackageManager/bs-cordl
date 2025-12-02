#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneRoom.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_def.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneRoom)
namespace GlobalNamespace {
class IOVRSceneComponent;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
class OVRSceneAnchor;
}
namespace GlobalNamespace {
class OVRSceneManager;
}
namespace GlobalNamespace {
class OVRScenePlane;
}
namespace GlobalNamespace {
struct OVRSceneRoom__LoadRoom_d__19;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSceneRoom;
}
namespace GlobalNamespace {
struct OVRSceneRoom__LoadRoom_d__19;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneRoom);
MARK_VAL_T(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19);
// Dependencies OVRAnchor, OVRObjectPool::HashSetScope`1<T>, OVRObjectPool::ListScope`1<T>, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>, OVRTask`1<TResult>, System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneRoom/<LoadRoom>d__19
struct CORDL_TYPE OVRSceneRoom__LoadRoom_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5cb9c24, size 0x11a4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5cbadc8, size 0x3c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneRoom__LoadRoom_d__19();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<bool>", modifiers: "",
  // def_value: None }, CppParam { name: "floor", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "ceiling", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam {
  // name: "walls", ty: "::ArrayW<::System::Guid,::Array<::System::Guid>*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::OVRSceneRoom>", modifiers:
  // "", def_value: None }, CppParam { name: "__7__wrap1", ty: "::GlobalNamespace::OVRObjectPool_HashSetScope_1<::System::Guid>", modifiers: "", def_value: None }, CppParam { name: "_anchors_5__3",
  // ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>",
  // modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap5", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*>", modifiers: "", def_value: None }]
  constexpr OVRSceneRoom__LoadRoom_d__19(int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<bool> __t__builder, ::System::Guid floor, ::System::Guid ceiling,
                                         ::ArrayW<::System::Guid, ::Array<::System::Guid>*> walls, ::UnityW<::GlobalNamespace::OVRSceneRoom> __4__this,
                                         ::GlobalNamespace::OVRObjectPool_HashSetScope_1<::System::Guid> __7__wrap1,
                                         ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _anchors_5__3,
                                         ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap3, ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__1,
                                         ::GlobalNamespace::OVRObjectPool_ListScope_1<bool> __7__wrap4, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>> __7__wrap5,
                                         ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7669 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa0 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1<bool> __t__builder;

  /// @brief Field floor, offset: 0x28, size: 0x10, def value: None
  ::System::Guid floor;

  /// @brief Field ceiling, offset: 0x38, size: 0x10, def value: None
  ::System::Guid ceiling;

  /// @brief Field walls, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::System::Guid, ::Array<::System::Guid>*> walls;

  /// @brief Field <>4__this, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneRoom> __4__this;

  /// @brief Field <>7__wrap1, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_HashSetScope_1<::System::Guid> __7__wrap1;

  /// @brief Field <anchors>5__3, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _anchors_5__3;

  /// @brief Field <>7__wrap3, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap3;

  /// @brief Field <>u__1, offset: 0x70, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__1;

  /// @brief Field <>7__wrap4, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<bool> __7__wrap4;

  /// @brief Field <>7__wrap5, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>> __7__wrap5;

  /// @brief Field <>u__2, offset: 0x90, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, floor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, ceiling) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, walls) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, __4__this) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, __7__wrap1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, _anchors_5__3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, __7__wrap3) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, __u__1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, __7__wrap4) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, __7__wrap5) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, __u__2) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Guid, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneRoom
class CORDL_TYPE OVRSceneRoom : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _LoadRoom_d__19 = ::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19;

  __declspec(property(get = get_Ceiling, put = set_Ceiling)) ::UnityW<::GlobalNamespace::OVRScenePlane> Ceiling;

  __declspec(property(get = get_Floor, put = set_Floor)) ::UnityW<::GlobalNamespace::OVRScenePlane> Floor;

  /// @brief Field SceneRooms, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SceneRooms, put = setStaticF_SceneRooms)) ::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSceneRoom>>* SceneRooms;

  /// @brief Field SceneRoomsList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SceneRoomsList, put = setStaticF_SceneRoomsList)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSceneRoom>>* SceneRoomsList;

  __declspec(property(get = get_Walls, put = set_Walls)) ::ArrayW<::UnityW<::GlobalNamespace::OVRScenePlane>, ::Array<::UnityW<::GlobalNamespace::OVRScenePlane>>*> Walls;

  /// @brief Field <Ceiling>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Ceiling_k__BackingField, put = __cordl_internal_set__Ceiling_k__BackingField)) ::UnityW<::GlobalNamespace::OVRScenePlane> _Ceiling_k__BackingField;

  /// @brief Field <Floor>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Floor_k__BackingField, put = __cordl_internal_set__Floor_k__BackingField)) ::UnityW<::GlobalNamespace::OVRScenePlane> _Floor_k__BackingField;

  /// @brief Field <Walls>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Walls_k__BackingField,
                      put = __cordl_internal_set__Walls_k__BackingField)) ::ArrayW<::UnityW<::GlobalNamespace::OVRScenePlane>, ::Array<::UnityW<::GlobalNamespace::OVRScenePlane>>*>
      _Walls_k__BackingField;

  /// @brief Field _sceneAnchor, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneAnchor, put = __cordl_internal_set__sceneAnchor)) ::UnityW<::GlobalNamespace::OVRSceneAnchor> _sceneAnchor;

  /// @brief Field _sceneManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneManager, put = __cordl_internal_set__sceneManager)) ::UnityW<::GlobalNamespace::OVRSceneManager> _sceneManager;

  /// @brief Field _uuid, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__uuid, put = __cordl_internal_set__uuid)) ::System::Guid _uuid;

  /// @brief Convert operator to "::GlobalNamespace::IOVRSceneComponent"
  constexpr operator ::GlobalNamespace::IOVRSceneComponent*() noexcept;

  /// @brief Method Awake, addr 0x5cb93f0, size 0x138, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method IOVRSceneComponent.Initialize, addr 0x5cb9528, size 0x11c, virtual true, abstract: false, final true
  inline void IOVRSceneComponent_Initialize();

  /// @brief Method LoadRoom, addr 0x5cb5428, size 0xf4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> LoadRoom(::System::Guid floor, ::System::Guid ceiling, ::ArrayW<::System::Guid, ::Array<::System::Guid>*> walls);

  /// @brief Method Log, addr 0x5cb9700, size 0xac, virtual false, abstract: false, final false
  inline void Log(::StringW message);

  /// @brief Method LogError, addr 0x5cb9858, size 0xac, virtual false, abstract: false, final false
  inline void LogError(::StringW message);

  /// @brief Method LogWarning, addr 0x5cb97ac, size 0xac, virtual false, abstract: false, final false
  inline void LogWarning(::StringW message);

  static inline ::GlobalNamespace::OVRSceneRoom* New_ctor();

  /// @brief Method OnDestroy, addr 0x5cb9644, size 0xbc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method <LoadRoom>g__GetPlane|19_1, addr 0x5cb9ba4, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::OVRScenePlane> _LoadRoom_g__GetPlane_19_1(::System::Guid uuid);

  /// @brief Method <LoadRoom>g__TryGetPlane|19_0, addr 0x5cb9aac, size 0xf8, virtual false, abstract: false, final false
  static inline bool _LoadRoom_g__TryGetPlane_19_0(::System::Guid uuid, ::ByRef<::GlobalNamespace::OVRScenePlane*> plane);

  constexpr ::UnityW<::GlobalNamespace::OVRScenePlane> const& __cordl_internal_get__Ceiling_k__BackingField() const;

  constexpr ::UnityW<::GlobalNamespace::OVRScenePlane>& __cordl_internal_get__Ceiling_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::OVRScenePlane> const& __cordl_internal_get__Floor_k__BackingField() const;

  constexpr ::UnityW<::GlobalNamespace::OVRScenePlane>& __cordl_internal_get__Floor_k__BackingField();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::OVRScenePlane>, ::Array<::UnityW<::GlobalNamespace::OVRScenePlane>>*> const& __cordl_internal_get__Walls_k__BackingField() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::OVRScenePlane>, ::Array<::UnityW<::GlobalNamespace::OVRScenePlane>>*>& __cordl_internal_get__Walls_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& __cordl_internal_get__sceneAnchor() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& __cordl_internal_get__sceneAnchor();

  constexpr ::UnityW<::GlobalNamespace::OVRSceneManager> const& __cordl_internal_get__sceneManager() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneManager>& __cordl_internal_get__sceneManager();

  constexpr ::System::Guid const& __cordl_internal_get__uuid() const;

  constexpr ::System::Guid& __cordl_internal_get__uuid();

  constexpr void __cordl_internal_set__Ceiling_k__BackingField(::UnityW<::GlobalNamespace::OVRScenePlane> value);

  constexpr void __cordl_internal_set__Floor_k__BackingField(::UnityW<::GlobalNamespace::OVRScenePlane> value);

  constexpr void __cordl_internal_set__Walls_k__BackingField(::ArrayW<::UnityW<::GlobalNamespace::OVRScenePlane>, ::Array<::UnityW<::GlobalNamespace::OVRScenePlane>>*> value);

  constexpr void __cordl_internal_set__sceneAnchor(::UnityW<::GlobalNamespace::OVRSceneAnchor> value);

  constexpr void __cordl_internal_set__sceneManager(::UnityW<::GlobalNamespace::OVRSceneManager> value);

  constexpr void __cordl_internal_set__uuid(::System::Guid value);

  /// @brief Method .ctor, addr 0x5cb9904, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSceneRoom>>* getStaticF_SceneRooms();

  static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSceneRoom>>* getStaticF_SceneRoomsList();

  /// @brief Method get_Ceiling, addr 0x5cb93d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::OVRScenePlane> get_Ceiling();

  /// @brief Method get_Floor, addr 0x5cb93c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::OVRScenePlane> get_Floor();

  /// @brief Method get_Walls, addr 0x5cb93e0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::OVRScenePlane>, ::Array<::UnityW<::GlobalNamespace::OVRScenePlane>>*> get_Walls();

  /// @brief Convert to "::GlobalNamespace::IOVRSceneComponent"
  constexpr ::GlobalNamespace::IOVRSceneComponent* i___GlobalNamespace__IOVRSceneComponent() noexcept;

  static inline void setStaticF_SceneRooms(::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSceneRoom>>* value);

  static inline void setStaticF_SceneRoomsList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSceneRoom>>* value);

  /// @brief Method set_Ceiling, addr 0x5cb93d8, size 0x8, virtual false, abstract: false, final false
  inline void set_Ceiling(::GlobalNamespace::OVRScenePlane* value);

  /// @brief Method set_Floor, addr 0x5cb93c8, size 0x8, virtual false, abstract: false, final false
  inline void set_Floor(::GlobalNamespace::OVRScenePlane* value);

  /// @brief Method set_Walls, addr 0x5cb93e8, size 0x8, virtual false, abstract: false, final false
  inline void set_Walls(::ArrayW<::GlobalNamespace::OVRScenePlane*, ::Array<::GlobalNamespace::OVRScenePlane*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneRoom();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneRoom", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneRoom(OVRSceneRoom&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneRoom", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneRoom(OVRSceneRoom const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7670 };

  /// @brief Field <Floor>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRScenePlane> ____Floor_k__BackingField;

  /// @brief Field <Ceiling>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRScenePlane> ____Ceiling_k__BackingField;

  /// @brief Field <Walls>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::OVRScenePlane>, ::Array<::UnityW<::GlobalNamespace::OVRScenePlane>>*> ____Walls_k__BackingField;

  /// @brief Field _sceneAnchor, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneAnchor> ____sceneAnchor;

  /// @brief Field _sceneManager, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneManager> ____sceneManager;

  /// @brief Field _uuid, offset: 0x48, size: 0x10, def value: None
  ::System::Guid ____uuid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____Floor_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____Ceiling_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____Walls_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____sceneAnchor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____sceneManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____uuid) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneRoom, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSceneRoom);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneRoom*, "", "OVRSceneRoom");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, "", "OVRSceneRoom/<LoadRoom>d__19");
