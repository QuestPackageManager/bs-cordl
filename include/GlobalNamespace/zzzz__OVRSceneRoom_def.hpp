#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneRoom.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
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
// Forward declare root types
namespace GlobalNamespace {
class OVRSceneRoom;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneRoom);
// Type: ::OVRSceneRoom
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSceneRoom*
class CORDL_TYPE OVRSceneRoom : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_Ceiling, put = set_Ceiling)) ::UnityW<::GlobalNamespace::OVRScenePlane> Ceiling;

  __declspec(property(get = get_Floor, put = set_Floor)) ::UnityW<::GlobalNamespace::OVRScenePlane> Floor;

  /// @brief Field SceneRooms, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SceneRooms,
                             put = setStaticF_SceneRooms)) ::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSceneRoom>>* SceneRooms;

  /// @brief Field SceneRoomsList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SceneRoomsList, put = setStaticF_SceneRoomsList)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSceneRoom>>* SceneRoomsList;

  __declspec(property(get = get_Walls, put = set_Walls)) ::ArrayW<::UnityW<::GlobalNamespace::OVRScenePlane>, ::Array<::UnityW<::GlobalNamespace::OVRScenePlane>>*> Walls;

  /// @brief Field <Ceiling>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Ceiling_k__BackingField, put = __cordl_internal_set__Ceiling_k__BackingField)) ::UnityW<::GlobalNamespace::OVRScenePlane> _Ceiling_k__BackingField;

  /// @brief Field <Floor>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Floor_k__BackingField, put = __cordl_internal_set__Floor_k__BackingField)) ::UnityW<::GlobalNamespace::OVRScenePlane> _Floor_k__BackingField;

  /// @brief Field <Walls>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Walls_k__BackingField,
                      put = __cordl_internal_set__Walls_k__BackingField)) ::ArrayW<::UnityW<::GlobalNamespace::OVRScenePlane>, ::Array<::UnityW<::GlobalNamespace::OVRScenePlane>>*>
      _Walls_k__BackingField;

  /// @brief Field _onAnchorLocalizationCompleted, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__onAnchorLocalizationCompleted,
                      put = __cordl_internal_set__onAnchorLocalizationCompleted)) ::System::Action_2<bool, ::GlobalNamespace::OVRAnchor>* _onAnchorLocalizationCompleted;

  /// @brief Field _onFetchAnchorsCompleted, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__onFetchAnchorsCompleted, put = __cordl_internal_set__onFetchAnchorsCompleted)) ::System::Action_1<bool>* _onFetchAnchorsCompleted;

  /// @brief Field _orderedRoomGuids, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__orderedRoomGuids,
                      put = __cordl_internal_set__orderedRoomGuids)) ::System::Collections::Generic::Dictionary_2<::System::Guid, int32_t>* _orderedRoomGuids;

  /// @brief Field _roomAnchors, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__roomAnchors, put = __cordl_internal_set__roomAnchors)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _roomAnchors;

  /// @brief Field _sceneAnchor, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneAnchor, put = __cordl_internal_set__sceneAnchor)) ::UnityW<::GlobalNamespace::OVRSceneAnchor> _sceneAnchor;

  /// @brief Field _sceneManager, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneManager, put = __cordl_internal_set__sceneManager)) ::UnityW<::GlobalNamespace::OVRSceneManager> _sceneManager;

  /// @brief Field _taskCount, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__taskCount, put = __cordl_internal_set__taskCount)) int32_t _taskCount;

  /// @brief Field _uuidToQuery, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__uuidToQuery, put = __cordl_internal_set__uuidToQuery)) ::System::Collections::Generic::HashSet_1<::System::Guid>* _uuidToQuery;

  /// @brief Field _wallOrderComparer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__wallOrderComparer,
                      put = __cordl_internal_set__wallOrderComparer)) ::System::Comparison_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* _wallOrderComparer;

  /// @brief Field _walls, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__walls, put = __cordl_internal_set__walls)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* _walls;

  /// @brief Convert operator to "::GlobalNamespace::IOVRSceneComponent"
  constexpr operator ::GlobalNamespace::IOVRSceneComponent*() noexcept;

  /// @brief Method Awake, addr 0x3faf888, size 0x1f4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetUuidsToQuery, addr 0x3fafb8c, size 0x6f4, virtual false, abstract: false, final false
  inline void GetUuidsToQuery();

  /// @brief Method IOVRSceneComponent.Initialize, addr 0x3fafa7c, size 0x110, virtual true, abstract: false, final true
  inline void IOVRSceneComponent_Initialize();

  /// @brief Method LoadRoom, addr 0x3fa898c, size 0x110, virtual false, abstract: false, final false
  inline void LoadRoom();

  static inline ::GlobalNamespace::OVRSceneRoom* New_ctor();

  /// @brief Method OnDestroy, addr 0x3fb0f3c, size 0xb8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnFetchAnchorsCompleted, addr 0x3fb0280, size 0x4a0, virtual false, abstract: false, final false
  inline void OnFetchAnchorsCompleted(bool success);

  /// @brief Method OnLocalizationCompleted, addr 0x3fb0720, size 0x3f0, virtual false, abstract: false, final false
  inline void OnLocalizationCompleted(bool success, ::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method UpdateRoomInformation, addr 0x3fb0b10, size 0x42c, virtual false, abstract: false, final false
  inline void UpdateRoomInformation(::GlobalNamespace::OVRScenePlane* plane);

  /// @brief Method <Awake>b__24_0, addr 0x3fb1264, size 0x60, virtual false, abstract: false, final false
  inline int32_t _Awake_b__24_0(::GlobalNamespace::OVRScenePlane* planeA, ::GlobalNamespace::OVRScenePlane* planeB);

  /// @brief Method <Awake>g__TryGetUuid|24_1, addr 0x3fb12c4, size 0x94, virtual false, abstract: false, final false
  inline bool _Awake_g__TryGetUuid_24_1(::GlobalNamespace::OVRScenePlane* plane, ByRef<int32_t> index);

  constexpr ::UnityW<::GlobalNamespace::OVRScenePlane> const& __cordl_internal_get__Ceiling_k__BackingField() const;

  constexpr ::UnityW<::GlobalNamespace::OVRScenePlane>& __cordl_internal_get__Ceiling_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::OVRScenePlane> const& __cordl_internal_get__Floor_k__BackingField() const;

  constexpr ::UnityW<::GlobalNamespace::OVRScenePlane>& __cordl_internal_get__Floor_k__BackingField();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::OVRScenePlane>, ::Array<::UnityW<::GlobalNamespace::OVRScenePlane>>*> const& __cordl_internal_get__Walls_k__BackingField() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::OVRScenePlane>, ::Array<::UnityW<::GlobalNamespace::OVRScenePlane>>*>& __cordl_internal_get__Walls_k__BackingField();

  constexpr ::System::Action_2<bool, ::GlobalNamespace::OVRAnchor>*& __cordl_internal_get__onAnchorLocalizationCompleted();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<bool, ::GlobalNamespace::OVRAnchor>*> const& __cordl_internal_get__onAnchorLocalizationCompleted() const;

  constexpr ::System::Action_1<bool>*& __cordl_internal_get__onFetchAnchorsCompleted();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> const& __cordl_internal_get__onFetchAnchorsCompleted() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Guid, int32_t>*& __cordl_internal_get__orderedRoomGuids();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Guid, int32_t>*> const& __cordl_internal_get__orderedRoomGuids() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*& __cordl_internal_get__roomAnchors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*> const& __cordl_internal_get__roomAnchors() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& __cordl_internal_get__sceneAnchor() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& __cordl_internal_get__sceneAnchor();

  constexpr ::UnityW<::GlobalNamespace::OVRSceneManager> const& __cordl_internal_get__sceneManager() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneManager>& __cordl_internal_get__sceneManager();

  constexpr int32_t const& __cordl_internal_get__taskCount() const;

  constexpr int32_t& __cordl_internal_get__taskCount();

  constexpr ::System::Collections::Generic::HashSet_1<::System::Guid>*& __cordl_internal_get__uuidToQuery();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Guid>*> const& __cordl_internal_get__uuidToQuery() const;

  constexpr ::System::Comparison_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*& __cordl_internal_get__wallOrderComparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Comparison_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*> const& __cordl_internal_get__wallOrderComparer() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*& __cordl_internal_get__walls();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*> const& __cordl_internal_get__walls() const;

  constexpr void __cordl_internal_set__Ceiling_k__BackingField(::UnityW<::GlobalNamespace::OVRScenePlane> value);

  constexpr void __cordl_internal_set__Floor_k__BackingField(::UnityW<::GlobalNamespace::OVRScenePlane> value);

  constexpr void __cordl_internal_set__Walls_k__BackingField(::ArrayW<::UnityW<::GlobalNamespace::OVRScenePlane>, ::Array<::UnityW<::GlobalNamespace::OVRScenePlane>>*> value);

  constexpr void __cordl_internal_set__onAnchorLocalizationCompleted(::System::Action_2<bool, ::GlobalNamespace::OVRAnchor>* value);

  constexpr void __cordl_internal_set__onFetchAnchorsCompleted(::System::Action_1<bool>* value);

  constexpr void __cordl_internal_set__orderedRoomGuids(::System::Collections::Generic::Dictionary_2<::System::Guid, int32_t>* value);

  constexpr void __cordl_internal_set__roomAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* value);

  constexpr void __cordl_internal_set__sceneAnchor(::UnityW<::GlobalNamespace::OVRSceneAnchor> value);

  constexpr void __cordl_internal_set__sceneManager(::UnityW<::GlobalNamespace::OVRSceneManager> value);

  constexpr void __cordl_internal_set__taskCount(int32_t value);

  constexpr void __cordl_internal_set__uuidToQuery(::System::Collections::Generic::HashSet_1<::System::Guid>* value);

  constexpr void __cordl_internal_set__wallOrderComparer(::System::Comparison_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* value);

  constexpr void __cordl_internal_set__walls(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* value);

  /// @brief Method .ctor, addr 0x3fb0ff4, size 0x194, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSceneRoom>>* getStaticF_SceneRooms();

  static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSceneRoom>>* getStaticF_SceneRoomsList();

  /// @brief Method get_Ceiling, addr 0x3faf868, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::OVRScenePlane> get_Ceiling();

  /// @brief Method get_Floor, addr 0x3faf858, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::OVRScenePlane> get_Floor();

  /// @brief Method get_Walls, addr 0x3faf878, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::OVRScenePlane>, ::Array<::UnityW<::GlobalNamespace::OVRScenePlane>>*> get_Walls();

  /// @brief Convert to "::GlobalNamespace::IOVRSceneComponent"
  constexpr ::GlobalNamespace::IOVRSceneComponent* i___GlobalNamespace__IOVRSceneComponent() noexcept;

  static inline void setStaticF_SceneRooms(::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSceneRoom>>* value);

  static inline void setStaticF_SceneRoomsList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSceneRoom>>* value);

  /// @brief Method set_Ceiling, addr 0x3faf870, size 0x8, virtual false, abstract: false, final false
  inline void set_Ceiling(::GlobalNamespace::OVRScenePlane* value);

  /// @brief Method set_Floor, addr 0x3faf860, size 0x8, virtual false, abstract: false, final false
  inline void set_Floor(::GlobalNamespace::OVRScenePlane* value);

  /// @brief Method set_Walls, addr 0x3faf880, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field <Floor>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRScenePlane> ____Floor_k__BackingField;

  /// @brief Field <Ceiling>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRScenePlane> ____Ceiling_k__BackingField;

  /// @brief Field <Walls>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::OVRScenePlane>, ::Array<::UnityW<::GlobalNamespace::OVRScenePlane>>*> ____Walls_k__BackingField;

  /// @brief Field _walls, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* ____walls;

  /// @brief Field _orderedRoomGuids, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Guid, int32_t>* ____orderedRoomGuids;

  /// @brief Field _wallOrderComparer, offset: 0x48, size: 0x8, def value: None
  ::System::Comparison_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* ____wallOrderComparer;

  /// @brief Field _sceneAnchor, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneAnchor> ____sceneAnchor;

  /// @brief Field _sceneManager, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneManager> ____sceneManager;

  /// @brief Field _uuidToQuery, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::System::Guid>* ____uuidToQuery;

  /// @brief Field _roomAnchors, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* ____roomAnchors;

  /// @brief Field _taskCount, offset: 0x70, size: 0x4, def value: None
  int32_t ____taskCount;

  /// @brief Field _onFetchAnchorsCompleted, offset: 0x78, size: 0x8, def value: None
  ::System::Action_1<bool>* ____onFetchAnchorsCompleted;

  /// @brief Field _onAnchorLocalizationCompleted, offset: 0x80, size: 0x8, def value: None
  ::System::Action_2<bool, ::GlobalNamespace::OVRAnchor>* ____onAnchorLocalizationCompleted;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8267 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneRoom, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____Floor_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____Ceiling_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____Walls_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____walls) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____orderedRoomGuids) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____wallOrderComparer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____sceneAnchor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____sceneManager) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____uuidToQuery) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____roomAnchors) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____taskCount) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____onFetchAnchorsCompleted) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____onAnchorLocalizationCompleted) == 0x80, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSceneRoom);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneRoom*, "", "OVRSceneRoom");
