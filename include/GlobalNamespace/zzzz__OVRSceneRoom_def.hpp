#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneRoom)
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class OVRScenePlane;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class IOVRSceneComponent;
}
namespace GlobalNamespace {
class OVRSceneManager;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace GlobalNamespace {
class OVRSceneAnchor;
}
namespace GlobalNamespace {
struct OVRAnchor;
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
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7981))
// CS Name: ::OVRSceneRoom*
class CORDL_TYPE OVRSceneRoom : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <Floor>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Floor_k__BackingField, put = __set__Floor_k__BackingField))::GlobalNamespace::OVRScenePlane* _Floor_k__BackingField;

  /// @brief Field <Ceiling>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__Ceiling_k__BackingField, put = __set__Ceiling_k__BackingField))::GlobalNamespace::OVRScenePlane* _Ceiling_k__BackingField;

  /// @brief Field <Walls>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__Walls_k__BackingField,
                      put = __set__Walls_k__BackingField))::ArrayW<::GlobalNamespace::OVRScenePlane*, ::Array<::GlobalNamespace::OVRScenePlane*>*> _Walls_k__BackingField;

  /// @brief Field _walls, offset 0x30, size 0x8
  __declspec(property(get = __get__walls, put = __set__walls))::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePlane*>* _walls;

  /// @brief Field _orderedRoomGuids, offset 0x38, size 0x8
  __declspec(property(get = __get__orderedRoomGuids, put = __set__orderedRoomGuids))::System::Collections::Generic::Dictionary_2<::System::Guid, int32_t>* _orderedRoomGuids;

  /// @brief Field _wallOrderComparer, offset 0x40, size 0x8
  __declspec(property(get = __get__wallOrderComparer, put = __set__wallOrderComparer))::System::Comparison_1<::GlobalNamespace::OVRScenePlane*>* _wallOrderComparer;

  /// @brief Field _sceneAnchor, offset 0x48, size 0x8
  __declspec(property(get = __get__sceneAnchor, put = __set__sceneAnchor))::GlobalNamespace::OVRSceneAnchor* _sceneAnchor;

  /// @brief Field _sceneManager, offset 0x50, size 0x8
  __declspec(property(get = __get__sceneManager, put = __set__sceneManager))::GlobalNamespace::OVRSceneManager* _sceneManager;

  /// @brief Field _uuidToQuery, offset 0x58, size 0x8
  __declspec(property(get = __get__uuidToQuery, put = __set__uuidToQuery))::System::Collections::Generic::HashSet_1<::System::Guid>* _uuidToQuery;

  /// @brief Field _roomAnchors, offset 0x60, size 0x8
  __declspec(property(get = __get__roomAnchors, put = __set__roomAnchors))::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _roomAnchors;

  /// @brief Field _taskCount, offset 0x68, size 0x4
  __declspec(property(get = __get__taskCount, put = __set__taskCount)) int32_t _taskCount;

  /// @brief Field _onFetchAnchorsCompleted, offset 0x70, size 0x8
  __declspec(property(get = __get__onFetchAnchorsCompleted, put = __set__onFetchAnchorsCompleted))::System::Action_1<bool>* _onFetchAnchorsCompleted;

  /// @brief Field _onAnchorLocalizationCompleted, offset 0x78, size 0x8
  __declspec(property(get = __get__onAnchorLocalizationCompleted, put = __set__onAnchorLocalizationCompleted))::System::Action_2<bool, ::GlobalNamespace::OVRAnchor>* _onAnchorLocalizationCompleted;

  /// @brief Field SceneRooms, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SceneRooms, put = setStaticF_SceneRooms))::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRSceneRoom*>* SceneRooms;

  /// @brief Field SceneRoomsList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SceneRoomsList, put = setStaticF_SceneRoomsList))::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneRoom*>* SceneRoomsList;

  __declspec(property(get = get_Floor, put = set_Floor))::GlobalNamespace::OVRScenePlane* Floor;

  __declspec(property(get = get_Ceiling, put = set_Ceiling))::GlobalNamespace::OVRScenePlane* Ceiling;

  __declspec(property(get = get_Walls, put = set_Walls))::ArrayW<::GlobalNamespace::OVRScenePlane*, ::Array<::GlobalNamespace::OVRScenePlane*>*> Walls;

  /// @brief Convert operator to "::GlobalNamespace::IOVRSceneComponent"
  constexpr operator ::GlobalNamespace::IOVRSceneComponent*() noexcept;

  constexpr ::GlobalNamespace::OVRScenePlane*& __get__Floor_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRScenePlane*> const& __get__Floor_k__BackingField() const;

  constexpr void __set__Floor_k__BackingField(::GlobalNamespace::OVRScenePlane* value);

  constexpr ::GlobalNamespace::OVRScenePlane*& __get__Ceiling_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRScenePlane*> const& __get__Ceiling_k__BackingField() const;

  constexpr void __set__Ceiling_k__BackingField(::GlobalNamespace::OVRScenePlane* value);

  constexpr ::ArrayW<::GlobalNamespace::OVRScenePlane*, ::Array<::GlobalNamespace::OVRScenePlane*>*>& __get__Walls_k__BackingField();

  constexpr ::ArrayW<::GlobalNamespace::OVRScenePlane*, ::Array<::GlobalNamespace::OVRScenePlane*>*> const& __get__Walls_k__BackingField() const;

  constexpr void __set__Walls_k__BackingField(::ArrayW<::GlobalNamespace::OVRScenePlane*, ::Array<::GlobalNamespace::OVRScenePlane*>*> value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePlane*>*& __get__walls();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePlane*>*> const& __get__walls() const;

  constexpr void __set__walls(::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePlane*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Guid, int32_t>*& __get__orderedRoomGuids();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Guid, int32_t>*> const& __get__orderedRoomGuids() const;

  constexpr void __set__orderedRoomGuids(::System::Collections::Generic::Dictionary_2<::System::Guid, int32_t>* value);

  constexpr ::System::Comparison_1<::GlobalNamespace::OVRScenePlane*>*& __get__wallOrderComparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Comparison_1<::GlobalNamespace::OVRScenePlane*>*> const& __get__wallOrderComparer() const;

  constexpr void __set__wallOrderComparer(::System::Comparison_1<::GlobalNamespace::OVRScenePlane*>* value);

  constexpr ::GlobalNamespace::OVRSceneAnchor*& __get__sceneAnchor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSceneAnchor*> const& __get__sceneAnchor() const;

  constexpr void __set__sceneAnchor(::GlobalNamespace::OVRSceneAnchor* value);

  constexpr ::GlobalNamespace::OVRSceneManager*& __get__sceneManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSceneManager*> const& __get__sceneManager() const;

  constexpr void __set__sceneManager(::GlobalNamespace::OVRSceneManager* value);

  constexpr ::System::Collections::Generic::HashSet_1<::System::Guid>*& __get__uuidToQuery();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Guid>*> const& __get__uuidToQuery() const;

  constexpr void __set__uuidToQuery(::System::Collections::Generic::HashSet_1<::System::Guid>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*& __get__roomAnchors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*> const& __get__roomAnchors() const;

  constexpr void __set__roomAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* value);

  constexpr int32_t& __get__taskCount();

  constexpr int32_t const& __get__taskCount() const;

  constexpr void __set__taskCount(int32_t value);

  constexpr ::System::Action_1<bool>*& __get__onFetchAnchorsCompleted();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> const& __get__onFetchAnchorsCompleted() const;

  constexpr void __set__onFetchAnchorsCompleted(::System::Action_1<bool>* value);

  constexpr ::System::Action_2<bool, ::GlobalNamespace::OVRAnchor>*& __get__onAnchorLocalizationCompleted();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<bool, ::GlobalNamespace::OVRAnchor>*> const& __get__onAnchorLocalizationCompleted() const;

  constexpr void __set__onAnchorLocalizationCompleted(::System::Action_2<bool, ::GlobalNamespace::OVRAnchor>* value);

  static inline void setStaticF_SceneRooms(::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRSceneRoom*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRSceneRoom*>* getStaticF_SceneRooms();

  static inline void setStaticF_SceneRoomsList(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneRoom*>* value);

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneRoom*>* getStaticF_SceneRoomsList();

  /// @brief Method get_Floor, addr 0x2789858, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRScenePlane* get_Floor();

  /// @brief Method set_Floor, addr 0x2789860, size 0x8, virtual false, abstract: false, final false
  inline void set_Floor(::GlobalNamespace::OVRScenePlane* value);

  /// @brief Method get_Ceiling, addr 0x2789868, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRScenePlane* get_Ceiling();

  /// @brief Method set_Ceiling, addr 0x2789870, size 0x8, virtual false, abstract: false, final false
  inline void set_Ceiling(::GlobalNamespace::OVRScenePlane* value);

  /// @brief Method get_Walls, addr 0x2789878, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::OVRScenePlane*, ::Array<::GlobalNamespace::OVRScenePlane*>*> get_Walls();

  /// @brief Method set_Walls, addr 0x2789880, size 0x8, virtual false, abstract: false, final false
  inline void set_Walls(::ArrayW<::GlobalNamespace::OVRScenePlane*, ::Array<::GlobalNamespace::OVRScenePlane*>*> value);

  /// @brief Method Awake, addr 0x2789888, size 0x200, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method IOVRSceneComponent.Initialize, addr 0x2789a88, size 0x114, virtual true, abstract: false, final true
  inline void IOVRSceneComponent_Initialize();

  /// @brief Method LoadRoom, addr 0x278288c, size 0xf0, virtual false, abstract: false, final false
  inline void LoadRoom();

  /// @brief Method OnFetchAnchorsCompleted, addr 0x278a1e8, size 0x3d4, virtual false, abstract: false, final false
  inline void OnFetchAnchorsCompleted(bool success);

  /// @brief Method OnLocalizationCompleted, addr 0x278a5bc, size 0x3a4, virtual false, abstract: false, final false
  inline void OnLocalizationCompleted(bool success, ::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method UpdateRoomInformation, addr 0x278a960, size 0x434, virtual false, abstract: false, final false
  inline void UpdateRoomInformation(::GlobalNamespace::OVRScenePlane* plane);

  /// @brief Method GetUuidsToQuery, addr 0x2789b9c, size 0x64c, virtual false, abstract: false, final false
  inline void GetUuidsToQuery();

  /// @brief Method OnDestroy, addr 0x278ad94, size 0xb8, virtual false, abstract: false, final false
  inline void OnDestroy();

  static inline ::GlobalNamespace::OVRSceneRoom* New_ctor();

  /// @brief Method .ctor, addr 0x278ae4c, size 0x17c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Awake>b__24_0, addr 0x278b0a0, size 0x60, virtual false, abstract: false, final false
  inline int32_t _Awake_b__24_0(::GlobalNamespace::OVRScenePlane* planeA, ::GlobalNamespace::OVRScenePlane* planeB);

  /// @brief Method <Awake>g__TryGetUuid|24_1, addr 0x278b100, size 0x94, virtual false, abstract: false, final false
  inline bool _Awake_g__TryGetUuid_24_1(::GlobalNamespace::OVRScenePlane* plane, ByRef<int32_t> index);

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneRoom", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneRoom(OVRSceneRoom&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneRoom", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneRoom(OVRSceneRoom const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneRoom();

public:
  /// @brief Field <Floor>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OVRScenePlane* ____Floor_k__BackingField;

  /// @brief Field <Ceiling>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OVRScenePlane* ____Ceiling_k__BackingField;

  /// @brief Field <Walls>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::OVRScenePlane*, ::Array<::GlobalNamespace::OVRScenePlane*>*> ____Walls_k__BackingField;

  /// @brief Field _walls, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePlane*>* ____walls;

  /// @brief Field _orderedRoomGuids, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Guid, int32_t>* ____orderedRoomGuids;

  /// @brief Field _wallOrderComparer, offset: 0x40, size: 0x8, def value: None
  ::System::Comparison_1<::GlobalNamespace::OVRScenePlane*>* ____wallOrderComparer;

  /// @brief Field _sceneAnchor, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::OVRSceneAnchor* ____sceneAnchor;

  /// @brief Field _sceneManager, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::OVRSceneManager* ____sceneManager;

  /// @brief Field _uuidToQuery, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::System::Guid>* ____uuidToQuery;

  /// @brief Field _roomAnchors, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* ____roomAnchors;

  /// @brief Field _taskCount, offset: 0x68, size: 0x4, def value: None
  int32_t ____taskCount;

  /// @brief Field _onFetchAnchorsCompleted, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<bool>* ____onFetchAnchorsCompleted;

  /// @brief Field _onAnchorLocalizationCompleted, offset: 0x78, size: 0x8, def value: None
  ::System::Action_2<bool, ::GlobalNamespace::OVRAnchor>* ____onAnchorLocalizationCompleted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneRoom, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____Floor_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____Ceiling_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____Walls_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____walls) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____orderedRoomGuids) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____wallOrderComparer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____sceneAnchor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____sceneManager) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____uuidToQuery) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____roomAnchors) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____taskCount) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____onFetchAnchorsCompleted) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom, ____onAnchorLocalizationCompleted) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSceneRoom);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneRoom*, "", "OVRSceneRoom");
