#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSceneManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneManager)
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
struct OVRSpace;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceQueryResult;
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
struct __OVRSceneManager__QueryMode;
}
namespace GlobalNamespace {
class __OVRSceneManager__RoomLayoutInformation;
}
namespace GlobalNamespace {
class __OVRSceneManager____c__DisplayClass47_0;
}
namespace GlobalNamespace {
class __OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d;
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
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
struct Guid;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRSceneManager__QueryMode;
}
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
class __OVRSceneManager____c__DisplayClass47_0;
}
namespace GlobalNamespace {
class __OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d;
}
namespace GlobalNamespace {
struct __OVRSceneManager__LogForwarder;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRSceneManager__QueryMode);
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneManager);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSceneManager__Classification);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSceneManager__Development);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d);
MARK_VAL_T(::GlobalNamespace::__OVRSceneManager__LogForwarder);
// Type: ::Classification
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7980))
// CS Name: ::OVRSceneManager::Classification*
class CORDL_TYPE __OVRSceneManager__Classification : public ::System::Object {
public:
  // Declarations
  /// @brief Field <List>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__List_k__BackingField, put = setStaticF__List_k__BackingField))::System::Collections::Generic::IReadOnlyList_1<::StringW>* _List_k__BackingField;

  static inline void setStaticF__List_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value);

  static inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* getStaticF__List_k__BackingField();

  /// @brief Method get_List, addr 0x27a3b8c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_List();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager__Classification", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSceneManager__Classification(__OVRSceneManager__Classification&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager__Classification", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSceneManager__Classification(__OVRSceneManager__Classification const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneManager__Classification();

public:
  /// @brief Field Floor offset 0xffffffff size 0x8
  static constexpr ::ConstString Floor{ u"FLOOR" };

  /// @brief Field Ceiling offset 0xffffffff size 0x8
  static constexpr ::ConstString Ceiling{ u"CEILING" };

  /// @brief Field WallFace offset 0xffffffff size 0x8
  static constexpr ::ConstString WallFace{ u"WALL_FACE" };

  /// @brief Field Desk offset 0xffffffff size 0x8
  static constexpr ::ConstString Desk{ u"DESK" };

  /// @brief Field Couch offset 0xffffffff size 0x8
  static constexpr ::ConstString Couch{ u"COUCH" };

  /// @brief Field DoorFrame offset 0xffffffff size 0x8
  static constexpr ::ConstString DoorFrame{ u"DOOR_FRAME" };

  /// @brief Field WindowFrame offset 0xffffffff size 0x8
  static constexpr ::ConstString WindowFrame{ u"WINDOW_FRAME" };

  /// @brief Field Other offset 0xffffffff size 0x8
  static constexpr ::ConstString Other{ u"OTHER" };

  /// @brief Field Storage offset 0xffffffff size 0x8
  static constexpr ::ConstString Storage{ u"STORAGE" };

  /// @brief Field Bed offset 0xffffffff size 0x8
  static constexpr ::ConstString Bed{ u"BED" };

  /// @brief Field Screen offset 0xffffffff size 0x8
  static constexpr ::ConstString Screen{ u"SCREEN" };

  /// @brief Field Lamp offset 0xffffffff size 0x8
  static constexpr ::ConstString Lamp{ u"LAMP" };

  /// @brief Field Plant offset 0xffffffff size 0x8
  static constexpr ::ConstString Plant{ u"PLANT" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneManager__Classification, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RoomLayoutInformation
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7981))
// CS Name: ::OVRSceneManager::RoomLayoutInformation*
class CORDL_TYPE __OVRSceneManager__RoomLayoutInformation : public ::System::Object {
public:
  // Declarations
  /// @brief Field Floor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Floor, put = __cordl_internal_set_Floor))::UnityW<::GlobalNamespace::OVRScenePlane> Floor;

  /// @brief Field Ceiling, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Ceiling, put = __cordl_internal_set_Ceiling))::UnityW<::GlobalNamespace::OVRScenePlane> Ceiling;

  /// @brief Field Walls, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Walls, put = __cordl_internal_set_Walls))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* Walls;

  constexpr ::UnityW<::GlobalNamespace::OVRScenePlane>& __cordl_internal_get_Floor();

  constexpr ::UnityW<::GlobalNamespace::OVRScenePlane> const& __cordl_internal_get_Floor() const;

  constexpr void __cordl_internal_set_Floor(::UnityW<::GlobalNamespace::OVRScenePlane> value);

  constexpr ::UnityW<::GlobalNamespace::OVRScenePlane>& __cordl_internal_get_Ceiling();

  constexpr ::UnityW<::GlobalNamespace::OVRScenePlane> const& __cordl_internal_get_Ceiling() const;

  constexpr void __cordl_internal_set_Ceiling(::UnityW<::GlobalNamespace::OVRScenePlane> value);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*& __cordl_internal_get_Walls();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*> const& __cordl_internal_get_Walls() const;

  constexpr void __cordl_internal_set_Walls(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* value);

  static inline ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation* New_ctor();

  /// @brief Method .ctor, addr 0x27a11bc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager__RoomLayoutInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSceneManager__RoomLayoutInformation(__OVRSceneManager__RoomLayoutInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager__RoomLayoutInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSceneManager__RoomLayoutInformation(__OVRSceneManager__RoomLayoutInformation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneManager__RoomLayoutInformation();

public:
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
// Type: ::QueryMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7982))
// CS Name: ::OVRSceneManager::QueryMode
struct CORDL_TYPE __OVRSceneManager__QueryMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRSceneManager__QueryMode_Unwrapped
  enum struct ____OVRSceneManager__QueryMode_Unwrapped : int32_t {
    __E_QueryAllAnchors = static_cast<int32_t>(0x0),
    __E_QueryByUuid = static_cast<int32_t>(0x1),
    __E_QueryAllBounded2DEnabled = static_cast<int32_t>(0x2),
    __E_QueryAllRoomLayoutEnabledForAllEntitiesInside = static_cast<int32_t>(0x3),
    __E_QueryAllRoomLayoutEnabledForRoomBox = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRSceneManager__QueryMode_Unwrapped() const noexcept {
    return static_cast<____OVRSceneManager__QueryMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRSceneManager__QueryMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneManager__QueryMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field QueryAllAnchors value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRSceneManager__QueryMode const QueryAllAnchors;

  /// @brief Field QueryByUuid value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRSceneManager__QueryMode const QueryByUuid;

  /// @brief Field QueryAllBounded2DEnabled value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRSceneManager__QueryMode const QueryAllBounded2DEnabled;

  /// @brief Field QueryAllRoomLayoutEnabledForAllEntitiesInside value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRSceneManager__QueryMode const QueryAllRoomLayoutEnabledForAllEntitiesInside;

  /// @brief Field QueryAllRoomLayoutEnabledForRoomBox value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRSceneManager__QueryMode const QueryAllRoomLayoutEnabledForRoomBox;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneManager__QueryMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager__QueryMode, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LogForwarder
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7983))
// CS Name: ::OVRSceneManager::LogForwarder
#pragma pack(push, 0)
struct CORDL_TYPE __OVRSceneManager__LogForwarder {
public:
  // Declarations
  /// @brief Method Log, addr 0x27a1ea8, size 0xb4, virtual false, abstract: false, final false
  inline void Log(::StringW context, ::StringW message);

  /// @brief Method LogWarning, addr 0x27a1f5c, size 0xb4, virtual false, abstract: false, final false
  inline void LogWarning(::StringW context, ::StringW message);

  /// @brief Method LogError, addr 0x27a00c4, size 0xb4, virtual false, abstract: false, final false
  inline void LogError(::StringW context, ::StringW message);

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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7984))
// CS Name: ::OVRSceneManager::Development*
class CORDL_TYPE __OVRSceneManager__Development : public ::System::Object {
public:
  // Declarations
  /// @brief Method Log, addr 0x27a3fa4, size 0xb4, virtual false, abstract: false, final false
  static inline void Log(::StringW context, ::StringW message);

  /// @brief Method LogWarning, addr 0x27a4058, size 0xb4, virtual false, abstract: false, final false
  static inline void LogWarning(::StringW context, ::StringW message);

  /// @brief Method LogError, addr 0x27a410c, size 0xb4, virtual false, abstract: false, final false
  static inline void LogError(::StringW context, ::StringW message);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager__Development", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSceneManager__Development(__OVRSceneManager__Development&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager__Development", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSceneManager__Development(__OVRSceneManager__Development const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneManager__Development();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneManager__Development, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<<ProcessQueryResult>g__EnabledComponents|0>d
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7985))
// CS Name: ::OVRSceneManager::<>c__DisplayClass47_0::<<ProcessQueryResult>g__EnabledComponents|0>d*
class CORDL_TYPE __OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::StringW __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_String__get_Current))::StringW System_Collections_Generic_IEnumerator_System_String__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::StringW>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>* i___System__Collections__Generic__IEnumerator_1___StringW_() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr ::StringW& __cordl_internal_get___2__current();

  constexpr ::StringW const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(::StringW value);

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr ::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0* value);

  static inline ::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x27a41c0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x27a41f4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x27a41f8, size 0x21c, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.String>.get_Current, addr 0x27a4414, size 0x8, virtual true, abstract: false, final true
  inline ::StringW System_Collections_Generic_IEnumerator_System_String__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x27a441c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x27a445c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<System.String>.GetEnumerator, addr 0x27a4464, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x27a4508, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d(__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d(__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::StringW _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d, _____4__this) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass47_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 27, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7986))
// CS Name: ::OVRSceneManager::<>c__DisplayClass47_0*
class CORDL_TYPE __OVRSceneManager____c__DisplayClass47_0 : public ::System::Object {
public:
  // Declarations
  using __ProcessQueryResult_g__EnabledComponents_0_d = ::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d;

  /// @brief Field space, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_space, put = __cordl_internal_set_space)) uint64_t space;

  /// @brief Field bounded2dEnabled, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_bounded2dEnabled, put = __cordl_internal_set_bounded2dEnabled)) bool bounded2dEnabled;

  /// @brief Field bounded3dEnabled, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_bounded3dEnabled, put = __cordl_internal_set_bounded3dEnabled)) bool bounded3dEnabled;

  /// @brief Field roomLayoutEnabled, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get_roomLayoutEnabled, put = __cordl_internal_set_roomLayoutEnabled)) bool roomLayoutEnabled;

  constexpr uint64_t& __cordl_internal_get_space();

  constexpr uint64_t const& __cordl_internal_get_space() const;

  constexpr void __cordl_internal_set_space(uint64_t value);

  constexpr bool& __cordl_internal_get_bounded2dEnabled();

  constexpr bool const& __cordl_internal_get_bounded2dEnabled() const;

  constexpr void __cordl_internal_set_bounded2dEnabled(bool value);

  constexpr bool& __cordl_internal_get_bounded3dEnabled();

  constexpr bool const& __cordl_internal_get_bounded3dEnabled() const;

  constexpr void __cordl_internal_set_bounded3dEnabled(bool value);

  constexpr bool& __cordl_internal_get_roomLayoutEnabled();

  constexpr bool const& __cordl_internal_get_roomLayoutEnabled() const;

  constexpr void __cordl_internal_set_roomLayoutEnabled(bool value);

  static inline ::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0* New_ctor();

  /// @brief Method .ctor, addr 0x27a3878, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ProcessQueryResult>g__EnabledComponents|0, addr 0x27a3880, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* _ProcessQueryResult_g__EnabledComponents_0();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager____c__DisplayClass47_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSceneManager____c__DisplayClass47_0(__OVRSceneManager____c__DisplayClass47_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager____c__DisplayClass47_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSceneManager____c__DisplayClass47_0(__OVRSceneManager____c__DisplayClass47_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneManager____c__DisplayClass47_0();

public:
  /// @brief Field space, offset: 0x10, size: 0x8, def value: None
  uint64_t ___space;

  /// @brief Field bounded2dEnabled, offset: 0x18, size: 0x1, def value: None
  bool ___bounded2dEnabled;

  /// @brief Field bounded3dEnabled, offset: 0x19, size: 0x1, def value: None
  bool ___bounded3dEnabled;

  /// @brief Field roomLayoutEnabled, offset: 0x1a, size: 0x1, def value: None
  bool ___roomLayoutEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0, ___space) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0, ___bounded2dEnabled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0, ___bounded3dEnabled) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0, ___roomLayoutEnabled) == 0x1a, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRSceneManager
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 177, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7982)), TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7987))
// CS Name: ::OVRSceneManager*
class CORDL_TYPE OVRSceneManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass47_0 = ::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0;

  using Development = ::GlobalNamespace::__OVRSceneManager__Development;

  using LogForwarder = ::GlobalNamespace::__OVRSceneManager__LogForwarder;

  using QueryMode = ::GlobalNamespace::__OVRSceneManager__QueryMode;

  using RoomLayoutInformation = ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation;

  using Classification = ::GlobalNamespace::__OVRSceneManager__Classification;

  /// @brief Field PlanePrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_PlanePrefab, put = __cordl_internal_set_PlanePrefab))::UnityW<::GlobalNamespace::OVRSceneAnchor> PlanePrefab;

  /// @brief Field VolumePrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_VolumePrefab, put = __cordl_internal_set_VolumePrefab))::UnityW<::GlobalNamespace::OVRSceneAnchor> VolumePrefab;

  /// @brief Field PrefabOverrides, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_PrefabOverrides,
                      put = __cordl_internal_set_PrefabOverrides))::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>* PrefabOverrides;

  /// @brief Field VerboseLogging, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_VerboseLogging, put = __cordl_internal_set_VerboseLogging)) bool VerboseLogging;

  /// @brief Field MaxSceneAnchorUpdatesPerFrame, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_MaxSceneAnchorUpdatesPerFrame, put = __cordl_internal_set_MaxSceneAnchorUpdatesPerFrame)) int32_t MaxSceneAnchorUpdatesPerFrame;

  /// @brief Field SceneModelLoadedSuccessfully, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_SceneModelLoadedSuccessfully, put = __cordl_internal_set_SceneModelLoadedSuccessfully))::System::Action* SceneModelLoadedSuccessfully;

  /// @brief Field NoSceneModelToLoad, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_NoSceneModelToLoad, put = __cordl_internal_set_NoSceneModelToLoad))::System::Action* NoSceneModelToLoad;

  /// @brief Field SceneCaptureReturnedWithoutError, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_SceneCaptureReturnedWithoutError, put = __cordl_internal_set_SceneCaptureReturnedWithoutError))::System::Action* SceneCaptureReturnedWithoutError;

  /// @brief Field UnexpectedErrorWithSceneCapture, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_UnexpectedErrorWithSceneCapture, put = __cordl_internal_set_UnexpectedErrorWithSceneCapture))::System::Action* UnexpectedErrorWithSceneCapture;

  /// @brief Field RoomLayout, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_RoomLayout, put = __cordl_internal_set_RoomLayout))::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation* RoomLayout;

  /// @brief Field _orderedRoomGuids, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__orderedRoomGuids,
                      put = __cordl_internal_set__orderedRoomGuids))::System::Collections::Generic::Dictionary_2<::System::Guid, int32_t>* _orderedRoomGuids;

  /// @brief Field _wallOrderComparer, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__wallOrderComparer,
                      put = __cordl_internal_set__wallOrderComparer))::System::Comparison_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* _wallOrderComparer;

  /// @brief Field _uuidsToQuery, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__uuidsToQuery, put = __cordl_internal_set__uuidsToQuery))::System::Collections::Generic::List_1<::System::Guid>* _uuidsToQuery;

  /// @brief Field _currentQueryMode, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__currentQueryMode, put = __cordl_internal_set__currentQueryMode))::GlobalNamespace::__OVRSceneManager__QueryMode _currentQueryMode;

  /// @brief Field _sceneCaptureRequestId, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneCaptureRequestId, put = __cordl_internal_set__sceneCaptureRequestId)) uint64_t _sceneCaptureRequestId;

  /// @brief Field _individualRequestIds, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__individualRequestIds, put = __cordl_internal_set__individualRequestIds))::System::Collections::Generic::HashSet_1<uint64_t>* _individualRequestIds;

  /// @brief Field _pendingLocatable, offset 0x90, size 0x8
  __declspec(property(
      get = __cordl_internal_get__pendingLocatable,
      put = __cordl_internal_set__pendingLocatable))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace, ::GlobalNamespace::__OVRPlugin__SpaceQueryResult>* _pendingLocatable;

  /// @brief Field _cameraRig, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__cameraRig, put = __cordl_internal_set__cameraRig))::UnityW<::GlobalNamespace::OVRCameraRig> _cameraRig;

  /// @brief Field _sceneAnchorUpdateIndex, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get__sceneAnchorUpdateIndex, put = __cordl_internal_set__sceneAnchorUpdateIndex)) int32_t _sceneAnchorUpdateIndex;

  /// @brief Field _uuidSet, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__uuidSet, put = __cordl_internal_set__uuidSet))::System::Collections::Generic::HashSet_1<::System::Guid>* _uuidSet;

  /// @brief Field _sceneLoadComplete, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get__sceneLoadComplete, put = __cordl_internal_set__sceneLoadComplete)) bool _sceneLoadComplete;

  __declspec(property(get = get_Verbose))::System::Nullable_1<::GlobalNamespace::__OVRSceneManager__LogForwarder> Verbose;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& __cordl_internal_get_PlanePrefab();

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& __cordl_internal_get_PlanePrefab() const;

  constexpr void __cordl_internal_set_PlanePrefab(::UnityW<::GlobalNamespace::OVRSceneAnchor> value);

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& __cordl_internal_get_VolumePrefab();

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& __cordl_internal_get_VolumePrefab() const;

  constexpr void __cordl_internal_set_VolumePrefab(::UnityW<::GlobalNamespace::OVRSceneAnchor> value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*& __cordl_internal_get_PrefabOverrides();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*> const& __cordl_internal_get_PrefabOverrides() const;

  constexpr void __cordl_internal_set_PrefabOverrides(::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>* value);

  constexpr bool& __cordl_internal_get_VerboseLogging();

  constexpr bool const& __cordl_internal_get_VerboseLogging() const;

  constexpr void __cordl_internal_set_VerboseLogging(bool value);

  constexpr int32_t& __cordl_internal_get_MaxSceneAnchorUpdatesPerFrame();

  constexpr int32_t const& __cordl_internal_get_MaxSceneAnchorUpdatesPerFrame() const;

  constexpr void __cordl_internal_set_MaxSceneAnchorUpdatesPerFrame(int32_t value);

  constexpr ::System::Action*& __cordl_internal_get_SceneModelLoadedSuccessfully();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_SceneModelLoadedSuccessfully() const;

  constexpr void __cordl_internal_set_SceneModelLoadedSuccessfully(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_NoSceneModelToLoad();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_NoSceneModelToLoad() const;

  constexpr void __cordl_internal_set_NoSceneModelToLoad(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_SceneCaptureReturnedWithoutError();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_SceneCaptureReturnedWithoutError() const;

  constexpr void __cordl_internal_set_SceneCaptureReturnedWithoutError(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_UnexpectedErrorWithSceneCapture();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_UnexpectedErrorWithSceneCapture() const;

  constexpr void __cordl_internal_set_UnexpectedErrorWithSceneCapture(::System::Action* value);

  constexpr ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*& __cordl_internal_get_RoomLayout();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*> const& __cordl_internal_get_RoomLayout() const;

  constexpr void __cordl_internal_set_RoomLayout(::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Guid, int32_t>*& __cordl_internal_get__orderedRoomGuids();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Guid, int32_t>*> const& __cordl_internal_get__orderedRoomGuids() const;

  constexpr void __cordl_internal_set__orderedRoomGuids(::System::Collections::Generic::Dictionary_2<::System::Guid, int32_t>* value);

  constexpr ::System::Comparison_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*& __cordl_internal_get__wallOrderComparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Comparison_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*> const& __cordl_internal_get__wallOrderComparer() const;

  constexpr void __cordl_internal_set__wallOrderComparer(::System::Comparison_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* value);

  constexpr ::System::Collections::Generic::List_1<::System::Guid>*& __cordl_internal_get__uuidsToQuery();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Guid>*> const& __cordl_internal_get__uuidsToQuery() const;

  constexpr void __cordl_internal_set__uuidsToQuery(::System::Collections::Generic::List_1<::System::Guid>* value);

  constexpr ::GlobalNamespace::__OVRSceneManager__QueryMode& __cordl_internal_get__currentQueryMode();

  constexpr ::GlobalNamespace::__OVRSceneManager__QueryMode const& __cordl_internal_get__currentQueryMode() const;

  constexpr void __cordl_internal_set__currentQueryMode(::GlobalNamespace::__OVRSceneManager__QueryMode value);

  constexpr uint64_t& __cordl_internal_get__sceneCaptureRequestId();

  constexpr uint64_t const& __cordl_internal_get__sceneCaptureRequestId() const;

  constexpr void __cordl_internal_set__sceneCaptureRequestId(uint64_t value);

  constexpr ::System::Collections::Generic::HashSet_1<uint64_t>*& __cordl_internal_get__individualRequestIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<uint64_t>*> const& __cordl_internal_get__individualRequestIds() const;

  constexpr void __cordl_internal_set__individualRequestIds(::System::Collections::Generic::HashSet_1<uint64_t>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace, ::GlobalNamespace::__OVRPlugin__SpaceQueryResult>*& __cordl_internal_get__pendingLocatable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace, ::GlobalNamespace::__OVRPlugin__SpaceQueryResult>*> const&
  __cordl_internal_get__pendingLocatable() const;

  constexpr void __cordl_internal_set__pendingLocatable(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace, ::GlobalNamespace::__OVRPlugin__SpaceQueryResult>* value);

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get__cameraRig();

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get__cameraRig() const;

  constexpr void __cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig> value);

  constexpr int32_t& __cordl_internal_get__sceneAnchorUpdateIndex();

  constexpr int32_t const& __cordl_internal_get__sceneAnchorUpdateIndex() const;

  constexpr void __cordl_internal_set__sceneAnchorUpdateIndex(int32_t value);

  constexpr ::System::Collections::Generic::HashSet_1<::System::Guid>*& __cordl_internal_get__uuidSet();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Guid>*> const& __cordl_internal_get__uuidSet() const;

  constexpr void __cordl_internal_set__uuidSet(::System::Collections::Generic::HashSet_1<::System::Guid>* value);

  constexpr bool& __cordl_internal_get__sceneLoadComplete();

  constexpr bool const& __cordl_internal_get__sceneLoadComplete() const;

  constexpr void __cordl_internal_set__sceneLoadComplete(bool value);

  /// @brief Method get_Verbose, addr 0x279fee4, size 0x68, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::GlobalNamespace::__OVRSceneManager__LogForwarder> get_Verbose();

  /// @brief Method Awake, addr 0x279ff4c, size 0x178, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnTrackingSpaceChanged, addr 0x27a0178, size 0x4, virtual false, abstract: false, final false
  static inline void OnTrackingSpaceChanged(::UnityEngine::Transform* trackingSpace);

  /// @brief Method Update, addr 0x27a0310, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateAllSceneAnchors, addr 0x27a017c, size 0x194, virtual false, abstract: false, final false
  static inline void UpdateAllSceneAnchors();

  /// @brief Method UpdateSomeSceneAnchors, addr 0x27a0314, size 0x130, virtual false, abstract: false, final false
  inline void UpdateSomeSceneAnchors();

  /// @brief Method LoadSceneModel, addr 0x27a0444, size 0xc, virtual false, abstract: false, final false
  inline bool LoadSceneModel();

  /// @brief Method RequestSceneCapture, addr 0x27a0844, size 0x48, virtual false, abstract: false, final false
  inline bool RequestSceneCapture();

  /// @brief Method RequestSceneCapture, addr 0x27a08f8, size 0x2d8, virtual false, abstract: false, final false
  inline bool RequestSceneCapture(::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications);

  /// @brief Method RequestSceneCapture, addr 0x27a088c, size 0x6c, virtual false, abstract: false, final false
  inline bool RequestSceneCapture(::StringW requestString);

  /// @brief Method OnEnable, addr 0x27a0bd0, size 0x324, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x27a0ef4, size 0x2c8, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method LoadSpatialEntities, addr 0x27a0450, size 0x3f4, virtual false, abstract: false, final false
  inline bool LoadSpatialEntities();

  /// @brief Method EnableComponentIfNecessary, addr 0x27a2010, size 0x338, virtual false, abstract: false, final false
  inline bool EnableComponentIfNecessary(::GlobalNamespace::OVRSpace space, ::System::Guid uuid, ::GlobalNamespace::__OVRPlugin__SpaceComponentType componentType);

  /// @brief Method OVRManager_SceneCaptureComplete, addr 0x27a2348, size 0x114, virtual false, abstract: false, final false
  inline void OVRManager_SceneCaptureComplete(uint64_t requestId, bool result);

  /// @brief Method IsComponentEnabled, addr 0x27a245c, size 0x88, virtual false, abstract: false, final false
  static inline bool IsComponentEnabled(::GlobalNamespace::OVRSpace space, ::GlobalNamespace::__OVRPlugin__SpaceComponentType componentType);

  /// @brief Method InstantiateSceneAnchor, addr 0x27a24e4, size 0x6c0, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::OVRSceneAnchor> InstantiateSceneAnchor(::GlobalNamespace::OVRSpace space, ::System::Guid uuid, ::GlobalNamespace::OVRSceneAnchor* prefab);

  /// @brief Method OVRManager_SpaceQueryComplete, addr 0x27a2ba4, size 0x294, virtual false, abstract: false, final false
  inline void OVRManager_SpaceQueryComplete(uint64_t requestId, bool result);

  /// @brief Method CheckForCompletion, addr 0x27a36c4, size 0xcc, virtual false, abstract: false, final false
  inline void CheckForCompletion();

  /// @brief Method OVRManager_SpaceSetComponentStatusComplete, addr 0x27a3790, size 0xe8, virtual false, abstract: false, final false
  inline void OVRManager_SpaceSetComponentStatusComplete(uint64_t requestId, bool result, ::GlobalNamespace::OVRSpace space, ::System::Guid uuid,
                                                         ::GlobalNamespace::__OVRPlugin__SpaceComponentType componentType, bool isEnabled);

  /// @brief Method ProcessQueryResult, addr 0x27a2e38, size 0x88c, virtual false, abstract: false, final false
  inline void ProcessQueryResult(::GlobalNamespace::__OVRPlugin__SpaceQueryResult queryResult);

  static inline ::GlobalNamespace::OVRSceneManager* New_ctor();

  /// @brief Method .ctor, addr 0x27a38fc, size 0x19c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Awake>b__28_0, addr 0x27a3a98, size 0x60, virtual false, abstract: false, final false
  inline int32_t _Awake_b__28_0(::GlobalNamespace::OVRScenePlane* planeA, ::GlobalNamespace::OVRScenePlane* planeB);

  /// @brief Method <Awake>g__TryGetUuid|28_1, addr 0x27a3af8, size 0x94, virtual false, abstract: false, final false
  inline bool _Awake_g__TryGetUuid_28_1(::GlobalNamespace::OVRScenePlane* plane, ByRef<int32_t> index);

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneManager(OVRSceneManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneManager(OVRSceneManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneManager();

public:
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

  /// @brief Field SceneModelLoadedSuccessfully, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___SceneModelLoadedSuccessfully;

  /// @brief Field NoSceneModelToLoad, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___NoSceneModelToLoad;

  /// @brief Field SceneCaptureReturnedWithoutError, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___SceneCaptureReturnedWithoutError;

  /// @brief Field UnexpectedErrorWithSceneCapture, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___UnexpectedErrorWithSceneCapture;

  /// @brief Field RoomLayout, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation* ___RoomLayout;

  /// @brief Field _orderedRoomGuids, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Guid, int32_t>* ____orderedRoomGuids;

  /// @brief Field _wallOrderComparer, offset: 0x68, size: 0x8, def value: None
  ::System::Comparison_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* ____wallOrderComparer;

  /// @brief Field _uuidsToQuery, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Guid>* ____uuidsToQuery;

  /// @brief Field _currentQueryMode, offset: 0x78, size: 0x4, def value: None
  ::GlobalNamespace::__OVRSceneManager__QueryMode ____currentQueryMode;

  /// @brief Field _sceneCaptureRequestId, offset: 0x80, size: 0x8, def value: None
  uint64_t ____sceneCaptureRequestId;

  /// @brief Field _individualRequestIds, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint64_t>* ____individualRequestIds;

  /// @brief Field _pendingLocatable, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace, ::GlobalNamespace::__OVRPlugin__SpaceQueryResult>* ____pendingLocatable;

  /// @brief Field _cameraRig, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ____cameraRig;

  /// @brief Field _sceneAnchorUpdateIndex, offset: 0xa0, size: 0x4, def value: None
  int32_t ____sceneAnchorUpdateIndex;

  /// @brief Field _uuidSet, offset: 0xa8, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::System::Guid>* ____uuidSet;

  /// @brief Field _sceneLoadComplete, offset: 0xb0, size: 0x1, def value: None
  bool ____sceneLoadComplete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneManager, 0xb8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___PlanePrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___VolumePrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___PrefabOverrides) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___VerboseLogging) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___MaxSceneAnchorUpdatesPerFrame) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___SceneModelLoadedSuccessfully) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___NoSceneModelToLoad) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___SceneCaptureReturnedWithoutError) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___UnexpectedErrorWithSceneCapture) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___RoomLayout) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____orderedRoomGuids) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____wallOrderComparer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____uuidsToQuery) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____currentQueryMode) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____sceneCaptureRequestId) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____individualRequestIds) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____pendingLocatable) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____cameraRig) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____sceneAnchorUpdateIndex) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____uuidSet) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____sceneLoadComplete) == 0xb0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneManager__QueryMode, "", "OVRSceneManager/QueryMode");
NEED_NO_BOX(::GlobalNamespace::OVRSceneManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager*, "", "OVRSceneManager");
NEED_NO_BOX(::GlobalNamespace::__OVRSceneManager__Classification);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneManager__Classification*, "", "OVRSceneManager/Classification");
NEED_NO_BOX(::GlobalNamespace::__OVRSceneManager__Development);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneManager__Development*, "", "OVRSceneManager/Development");
NEED_NO_BOX(::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*, "", "OVRSceneManager/RoomLayoutInformation");
NEED_NO_BOX(::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0*, "", "OVRSceneManager/<>c__DisplayClass47_0");
NEED_NO_BOX(::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d*, "",
                       "OVRSceneManager/<>c__DisplayClass47_0/<<ProcessQueryResult>g__EnabledComponents|0>d");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneManager__LogForwarder, "", "OVRSceneManager/LogForwarder");
