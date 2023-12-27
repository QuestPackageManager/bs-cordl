#pragma once
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
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace GlobalNamespace {
class OVRSceneAnchor;
}
namespace GlobalNamespace {
class __OVRSceneManager____c__DisplayClass40_0;
}
namespace GlobalNamespace {
class OVRScenePrefabOverride;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace GlobalNamespace {
struct __OVRSceneManager__LogForwarder;
}
namespace GlobalNamespace {
class __OVRSceneManager__Classification;
}
namespace GlobalNamespace {
class __OVRSceneManager__RoomLayoutInformation;
}
namespace GlobalNamespace {
class __OVRSceneManager____c__DisplayClass37_0;
}
namespace GlobalNamespace {
struct __OVRSceneManager___QueryForExistingAnchorsTransform_d__29;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
struct __OVRSceneManager___OnApplicationPause_d__28;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace GlobalNamespace {
class __OVRSceneManager__Development;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
struct Guid;
}
namespace UnityEngine {
class Transform;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class OVRScenePlane;
}
namespace GlobalNamespace {
template <typename T> struct __OVRObjectPool__ListScope_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace GlobalNamespace {
template <typename TResult> struct __OVRTask_1__Awaiter;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7961))
// CS Name: ::OVRSceneManager::Classification*
class CORDL_TYPE __OVRSceneManager__Classification : public ::System::Object {
public:
  // Declarations
  /// @brief Field <List>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__List_k__BackingField, put = setStaticF__List_k__BackingField))::System::Collections::Generic::IReadOnlyList_1<::StringW>* _List_k__BackingField;

  static inline void setStaticF__List_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value);

  static inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* getStaticF__List_k__BackingField();

  /// @brief Method get_List addr 0x27852c0 size 0x58 virtual false final false
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

  /// @brief Field Table offset 0xffffffff size 0x8
  static constexpr ::ConstString Table{ u"TABLE" };

  /// @brief Field WallArt offset 0xffffffff size 0x8
  static constexpr ::ConstString WallArt{ u"WALL_ART" };

  /// @brief Field InvisibleWallFace offset 0xffffffff size 0x8
  static constexpr ::ConstString InvisibleWallFace{ u"INVISIBLE_WALL_FACE" };

  /// @brief Field GlobalMesh offset 0xffffffff size 0x8
  static constexpr ::ConstString GlobalMesh{ u"GLOBAL_MESH" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneManager__Classification, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RoomLayoutInformation
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7962))
// CS Name: ::OVRSceneManager::RoomLayoutInformation*
class CORDL_TYPE __OVRSceneManager__RoomLayoutInformation : public ::System::Object {
public:
  // Declarations
  /// @brief Field Floor, offset 0x10, size 0x8
  __declspec(property(get = __get_Floor, put = __set_Floor))::GlobalNamespace::OVRScenePlane* Floor;

  /// @brief Field Ceiling, offset 0x18, size 0x8
  __declspec(property(get = __get_Ceiling, put = __set_Ceiling))::GlobalNamespace::OVRScenePlane* Ceiling;

  /// @brief Field Walls, offset 0x20, size 0x8
  __declspec(property(get = __get_Walls, put = __set_Walls))::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePlane*>* Walls;

  constexpr ::GlobalNamespace::OVRScenePlane*& __get_Floor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRScenePlane*> const& __get_Floor() const;

  constexpr void __set_Floor(::GlobalNamespace::OVRScenePlane* value);

  constexpr ::GlobalNamespace::OVRScenePlane*& __get_Ceiling();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRScenePlane*> const& __get_Ceiling() const;

  constexpr void __set_Ceiling(::GlobalNamespace::OVRScenePlane* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePlane*>*& __get_Walls();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePlane*>*> const& __get_Walls() const;

  constexpr void __set_Walls(::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePlane*>* value);

  static inline ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation* New_ctor();

  /// @brief Method .ctor addr 0x2784614 size 0x7c virtual false final false
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
  ::GlobalNamespace::OVRScenePlane* ___Floor;

  /// @brief Field Ceiling, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OVRScenePlane* ___Ceiling;

  /// @brief Field Walls, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePlane*>* ___Walls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LogForwarder
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7963))
// CS Name: ::OVRSceneManager::LogForwarder
#pragma pack(push, 0)
struct CORDL_TYPE __OVRSceneManager__LogForwarder {
public:
  // Declarations
  /// @brief Method Log addr 0x2782b88 size 0xbc virtual false final false
  inline void Log(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject);

  /// @brief Method LogWarning addr 0x2784c6c size 0xbc virtual false final false
  inline void LogWarning(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject);

  /// @brief Method LogError addr 0x2781f44 size 0xbc virtual false final false
  inline void LogError(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject);

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7964))
// CS Name: ::OVRSceneManager::Development*
class CORDL_TYPE __OVRSceneManager__Development : public ::System::Object {
public:
  // Declarations
  /// @brief Method Log addr 0x27857d8 size 0xbc virtual false final false
  static inline void Log(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject);

  /// @brief Method LogWarning addr 0x2785894 size 0xbc virtual false final false
  static inline void LogWarning(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject);

  /// @brief Method LogError addr 0x2785950 size 0xbc virtual false final false
  static inline void LogError(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject);

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
// Type: ::<OnApplicationPause>d__28
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8072)), TypeDefinitionIndex(TypeDefinitionIndex(3400)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8072), inst: 105
// }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8146), inst: 980 }), TypeDefinitionIndex(TypeDefinitionIndex(7510)), TypeDefinitionIndex(TypeDefinitionIndex(8146))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(7965)) CS Name: ::OVRSceneManager::<OnApplicationPause>d__28
struct CORDL_TYPE __OVRSceneManager___OnApplicationPause_d__28 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2785a0c size 0x5ec virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2785ff8 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "isPaused", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::GlobalNamespace::OVRSceneManager*", modifiers: "", def_value: None }, CppParam { name: "_anchors_5__2", ty:
  // "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty:
  // "::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::__OVRTask_1__Awaiter<bool>",
  // modifiers: "", def_value: None }]
  constexpr __OVRSceneManager___OnApplicationPause_d__28(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, bool isPaused,
                                                         ::GlobalNamespace::OVRSceneManager* __4__this, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _anchors_5__2,
                                                         ::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap2,
                                                         ::GlobalNamespace::__OVRTask_1__Awaiter<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneManager___OnApplicationPause_d__28();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field isPaused, offset: 0x28, size: 0x1, def value: None
  bool isPaused;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::OVRSceneManager* __4__this;

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

} // namespace GlobalNamespace
// Type: ::<QueryForExistingAnchorsTransform>d__29
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8146)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8146), inst: 980 }), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(8146), inst: 314 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8072), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(8072)),
// TypeDefinitionIndex(TypeDefinitionIndex(2406)), TypeDefinitionIndex(TypeDefinitionIndex(3400)), TypeDefinitionIndex(TypeDefinitionIndex(7510))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7966))
// CS Name: ::OVRSceneManager::<QueryForExistingAnchorsTransform>d__29
struct CORDL_TYPE __OVRSceneManager___QueryForExistingAnchorsTransform_d__29 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2786004 size 0x5f8 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x27865fc size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty:
  // "::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty:
  // "::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::__OVRTask_1__Awaiter<bool>", modifiers: "",
  // def_value: None }]
  constexpr __OVRSceneManager___QueryForExistingAnchorsTransform_d__29(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                       ::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap1,
                                                                       ::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid> __7__wrap2,
                                                                       ::GlobalNamespace::__OVRTask_1__Awaiter<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneManager___QueryForExistingAnchorsTransform_d__29();

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

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass37_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8075), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(2613)),
// TypeDefinitionIndex(TypeDefinitionIndex(8075))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7967)) CS Name: ::OVRSceneManager::<>c__DisplayClass37_0*
class CORDL_TYPE __OVRSceneManager____c__DisplayClass37_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field requestedAnchorClassifications, offset 0x10, size 0x8
  __declspec(property(get = __get_requestedAnchorClassifications, put = __set_requestedAnchorClassifications))::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications;

  /// @brief Field task, offset 0x18, size 0x10
  __declspec(property(get = __get_task, put = __set_task))::GlobalNamespace::OVRTask_1<bool> task;

  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& __get_requestedAnchorClassifications();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::StringW>*> const& __get_requestedAnchorClassifications() const;

  constexpr void __set_requestedAnchorClassifications(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  constexpr ::GlobalNamespace::OVRTask_1<bool>& __get_task();

  constexpr ::GlobalNamespace::OVRTask_1<bool> const& __get_task() const;

  constexpr void __set_task(::GlobalNamespace::OVRTask_1<bool> value);

  static inline ::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0* New_ctor();

  /// @brief Method .ctor addr 0x27833f4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <DoesRoomSetupExist>b__0 addr 0x2786608 size 0x18 virtual false final false
  inline void _DoesRoomSetupExist_b__0(bool result, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager____c__DisplayClass37_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSceneManager____c__DisplayClass37_0(__OVRSceneManager____c__DisplayClass37_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager____c__DisplayClass37_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSceneManager____c__DisplayClass37_0(__OVRSceneManager____c__DisplayClass37_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneManager____c__DisplayClass37_0();

public:
  /// @brief Field requestedAnchorClassifications, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::StringW>* ___requestedAnchorClassifications;

  /// @brief Field task, offset: 0x18, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1<bool> ___task;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass40_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8075), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(8075)),
// TypeDefinitionIndex(TypeDefinitionIndex(2613))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7968)) CS Name: ::OVRSceneManager::<>c__DisplayClass40_0*
class CORDL_TYPE __OVRSceneManager____c__DisplayClass40_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field requestedAnchorClassifications, offset 0x10, size 0x8
  __declspec(property(get = __get_requestedAnchorClassifications, put = __set_requestedAnchorClassifications))::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications;

  /// @brief Field task, offset 0x18, size 0x10
  __declspec(property(get = __get_task, put = __set_task))::GlobalNamespace::OVRTask_1<bool> task;

  /// @brief Field roomAnchors, offset 0x28, size 0x8
  __declspec(property(get = __get_roomAnchors, put = __set_roomAnchors))::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* roomAnchors;

  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& __get_requestedAnchorClassifications();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::StringW>*> const& __get_requestedAnchorClassifications() const;

  constexpr void __set_requestedAnchorClassifications(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  constexpr ::GlobalNamespace::OVRTask_1<bool>& __get_task();

  constexpr ::GlobalNamespace::OVRTask_1<bool> const& __get_task() const;

  constexpr void __set_task(::GlobalNamespace::OVRTask_1<bool> value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*& __get_roomAnchors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*> const& __get_roomAnchors() const;

  constexpr void __set_roomAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* value);

  static inline ::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0* New_ctor();

  /// @brief Method .ctor addr 0x2783954 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <CheckClassificationsInRooms>b__0 addr 0x2786620 size 0x14 virtual false final false
  inline void _CheckClassificationsInRooms_b__0(bool result);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager____c__DisplayClass40_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSceneManager____c__DisplayClass40_0(__OVRSceneManager____c__DisplayClass40_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneManager____c__DisplayClass40_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSceneManager____c__DisplayClass40_0(__OVRSceneManager____c__DisplayClass40_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneManager____c__DisplayClass40_0();

public:
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

} // namespace GlobalNamespace
// Type: ::OVRSceneManager
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 145, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7969))
// CS Name: ::OVRSceneManager*
class CORDL_TYPE OVRSceneManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass40_0 = ::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0;

  using __c__DisplayClass37_0 = ::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0;

  using _QueryForExistingAnchorsTransform_d__29 = ::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29;

  using _OnApplicationPause_d__28 = ::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28;

  using Development = ::GlobalNamespace::__OVRSceneManager__Development;

  using LogForwarder = ::GlobalNamespace::__OVRSceneManager__LogForwarder;

  using RoomLayoutInformation = ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation;

  using Classification = ::GlobalNamespace::__OVRSceneManager__Classification;

  /// @brief Field PlanePrefab, offset 0x18, size 0x8
  __declspec(property(get = __get_PlanePrefab, put = __set_PlanePrefab))::GlobalNamespace::OVRSceneAnchor* PlanePrefab;

  /// @brief Field VolumePrefab, offset 0x20, size 0x8
  __declspec(property(get = __get_VolumePrefab, put = __set_VolumePrefab))::GlobalNamespace::OVRSceneAnchor* VolumePrefab;

  /// @brief Field PrefabOverrides, offset 0x28, size 0x8
  __declspec(property(get = __get_PrefabOverrides, put = __set_PrefabOverrides))::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>* PrefabOverrides;

  /// @brief Field VerboseLogging, offset 0x30, size 0x1
  __declspec(property(get = __get_VerboseLogging, put = __set_VerboseLogging)) bool VerboseLogging;

  /// @brief Field MaxSceneAnchorUpdatesPerFrame, offset 0x34, size 0x4
  __declspec(property(get = __get_MaxSceneAnchorUpdatesPerFrame, put = __set_MaxSceneAnchorUpdatesPerFrame)) int32_t MaxSceneAnchorUpdatesPerFrame;

  /// @brief Field _initialAnchorParent, offset 0x38, size 0x8
  __declspec(property(get = __get__initialAnchorParent, put = __set__initialAnchorParent))::UnityEngine::Transform* _initialAnchorParent;

  /// @brief Field SceneModelLoadedSuccessfully, offset 0x40, size 0x8
  __declspec(property(get = __get_SceneModelLoadedSuccessfully, put = __set_SceneModelLoadedSuccessfully))::System::Action* SceneModelLoadedSuccessfully;

  /// @brief Field NoSceneModelToLoad, offset 0x48, size 0x8
  __declspec(property(get = __get_NoSceneModelToLoad, put = __set_NoSceneModelToLoad))::System::Action* NoSceneModelToLoad;

  /// @brief Field SceneCaptureReturnedWithoutError, offset 0x50, size 0x8
  __declspec(property(get = __get_SceneCaptureReturnedWithoutError, put = __set_SceneCaptureReturnedWithoutError))::System::Action* SceneCaptureReturnedWithoutError;

  /// @brief Field UnexpectedErrorWithSceneCapture, offset 0x58, size 0x8
  __declspec(property(get = __get_UnexpectedErrorWithSceneCapture, put = __set_UnexpectedErrorWithSceneCapture))::System::Action* UnexpectedErrorWithSceneCapture;

  /// @brief Field NewSceneModelAvailable, offset 0x60, size 0x8
  __declspec(property(get = __get_NewSceneModelAvailable, put = __set_NewSceneModelAvailable))::System::Action* NewSceneModelAvailable;

  /// @brief Field RoomLayout, offset 0x68, size 0x8
  __declspec(property(get = __get_RoomLayout, put = __set_RoomLayout))::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation* RoomLayout;

  /// @brief Field _sceneCaptureRequestId, offset 0x70, size 0x8
  __declspec(property(get = __get__sceneCaptureRequestId, put = __set__sceneCaptureRequestId)) uint64_t _sceneCaptureRequestId;

  /// @brief Field _cameraRig, offset 0x78, size 0x8
  __declspec(property(get = __get__cameraRig, put = __set__cameraRig))::GlobalNamespace::OVRCameraRig* _cameraRig;

  /// @brief Field _sceneAnchorUpdateIndex, offset 0x80, size 0x4
  __declspec(property(get = __get__sceneAnchorUpdateIndex, put = __set__sceneAnchorUpdateIndex)) int32_t _sceneAnchorUpdateIndex;

  /// @brief Field _roomCounter, offset 0x84, size 0x4
  __declspec(property(get = __get__roomCounter, put = __set__roomCounter)) int32_t _roomCounter;

  /// @brief Field _onAnchorsFetchCompleted, offset 0x88, size 0x8
  __declspec(property(get = __get__onAnchorsFetchCompleted,
                      put = __set__onAnchorsFetchCompleted))::System::Action_2<bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>* _onAnchorsFetchCompleted;

  /// @brief Field _hasLoadedScene, offset 0x90, size 0x1
  __declspec(property(get = __get__hasLoadedScene, put = __set__hasLoadedScene)) bool _hasLoadedScene;

  __declspec(property(get = get_InitialAnchorParent, put = set_InitialAnchorParent))::UnityEngine::Transform* InitialAnchorParent;

  __declspec(property(get = get_Verbose))::System::Nullable_1<::GlobalNamespace::__OVRSceneManager__LogForwarder> Verbose;

  constexpr ::GlobalNamespace::OVRSceneAnchor*& __get_PlanePrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSceneAnchor*> const& __get_PlanePrefab() const;

  constexpr void __set_PlanePrefab(::GlobalNamespace::OVRSceneAnchor* value);

  constexpr ::GlobalNamespace::OVRSceneAnchor*& __get_VolumePrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSceneAnchor*> const& __get_VolumePrefab() const;

  constexpr void __set_VolumePrefab(::GlobalNamespace::OVRSceneAnchor* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*& __get_PrefabOverrides();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*> const& __get_PrefabOverrides() const;

  constexpr void __set_PrefabOverrides(::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>* value);

  constexpr bool& __get_VerboseLogging();

  constexpr bool const& __get_VerboseLogging() const;

  constexpr void __set_VerboseLogging(bool value);

  constexpr int32_t& __get_MaxSceneAnchorUpdatesPerFrame();

  constexpr int32_t const& __get_MaxSceneAnchorUpdatesPerFrame() const;

  constexpr void __set_MaxSceneAnchorUpdatesPerFrame(int32_t value);

  constexpr ::UnityEngine::Transform*& __get__initialAnchorParent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__initialAnchorParent() const;

  constexpr void __set__initialAnchorParent(::UnityEngine::Transform* value);

  constexpr ::System::Action*& __get_SceneModelLoadedSuccessfully();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_SceneModelLoadedSuccessfully() const;

  constexpr void __set_SceneModelLoadedSuccessfully(::System::Action* value);

  constexpr ::System::Action*& __get_NoSceneModelToLoad();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_NoSceneModelToLoad() const;

  constexpr void __set_NoSceneModelToLoad(::System::Action* value);

  constexpr ::System::Action*& __get_SceneCaptureReturnedWithoutError();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_SceneCaptureReturnedWithoutError() const;

  constexpr void __set_SceneCaptureReturnedWithoutError(::System::Action* value);

  constexpr ::System::Action*& __get_UnexpectedErrorWithSceneCapture();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_UnexpectedErrorWithSceneCapture() const;

  constexpr void __set_UnexpectedErrorWithSceneCapture(::System::Action* value);

  constexpr ::System::Action*& __get_NewSceneModelAvailable();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_NewSceneModelAvailable() const;

  constexpr void __set_NewSceneModelAvailable(::System::Action* value);

  constexpr ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*& __get_RoomLayout();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*> const& __get_RoomLayout() const;

  constexpr void __set_RoomLayout(::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation* value);

  constexpr uint64_t& __get__sceneCaptureRequestId();

  constexpr uint64_t const& __get__sceneCaptureRequestId() const;

  constexpr void __set__sceneCaptureRequestId(uint64_t value);

  constexpr ::GlobalNamespace::OVRCameraRig*& __get__cameraRig();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRCameraRig*> const& __get__cameraRig() const;

  constexpr void __set__cameraRig(::GlobalNamespace::OVRCameraRig* value);

  constexpr int32_t& __get__sceneAnchorUpdateIndex();

  constexpr int32_t const& __get__sceneAnchorUpdateIndex() const;

  constexpr void __set__sceneAnchorUpdateIndex(int32_t value);

  constexpr int32_t& __get__roomCounter();

  constexpr int32_t const& __get__roomCounter() const;

  constexpr void __set__roomCounter(int32_t value);

  constexpr ::System::Action_2<bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>*& __get__onAnchorsFetchCompleted();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>*> const& __get__onAnchorsFetchCompleted() const;

  constexpr void __set__onAnchorsFetchCompleted(::System::Action_2<bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>* value);

  constexpr bool& __get__hasLoadedScene();

  constexpr bool const& __get__hasLoadedScene() const;

  constexpr void __set__hasLoadedScene(bool value);

  /// @brief Method get_InitialAnchorParent addr 0x2781d54 size 0x8 virtual false final false
  inline ::UnityEngine::Transform* get_InitialAnchorParent();

  /// @brief Method set_InitialAnchorParent addr 0x2781d5c size 0x8 virtual false final false
  inline void set_InitialAnchorParent(::UnityEngine::Transform* value);

  /// @brief Method get_Verbose addr 0x2781d64 size 0x68 virtual false final false
  inline ::System::Nullable_1<::GlobalNamespace::__OVRSceneManager__LogForwarder> get_Verbose();

  /// @brief Method Awake addr 0x2781dcc size 0x178 virtual false final false
  inline void Awake();

  /// @brief Method OnApplicationPause addr 0x2782000 size 0xa8 virtual false final false
  inline void OnApplicationPause(bool isPaused);

  /// @brief Method QueryForExistingAnchorsTransform addr 0x27820a8 size 0x8c virtual false final false
  inline void QueryForExistingAnchorsTransform();

  /// @brief Method LoadSceneModel addr 0x2782134 size 0x118 virtual false final false
  inline bool LoadSceneModel();

  /// @brief Method OnAnchorsFetchCompleted addr 0x2782430 size 0xa8 virtual false final false
  inline void OnAnchorsFetchCompleted(bool success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* roomLayoutAnchors);

  /// @brief Method InstantiateSceneRooms addr 0x27824d8 size 0x3b4 virtual false final false
  inline void InstantiateSceneRooms(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* roomLayoutAnchors);

  /// @brief Method OnSceneRoomLoadCompleted addr 0x278297c size 0xc8 virtual false final false
  inline void OnSceneRoomLoadCompleted();

  /// @brief Method DestroyExistingAnchors addr 0x278224c size 0x1e4 virtual false final false
  inline void DestroyExistingAnchors();

  /// @brief Method RequestSceneCapture addr 0x2782c44 size 0x48 virtual false final false
  inline bool RequestSceneCapture();

  /// @brief Method RequestSceneCapture addr 0x2782d24 size 0x54 virtual false final false
  inline bool RequestSceneCapture(::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications);

  /// @brief Method DoesRoomSetupExist addr 0x2783194 size 0x260 virtual false final false
  inline ::GlobalNamespace::OVRTask_1<bool> DoesRoomSetupExist(::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications);

  /// @brief Method CheckIfClassificationsAreValid addr 0x2782d78 size 0x41c virtual false final false
  static inline void CheckIfClassificationsAreValid(::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications);

  /// @brief Method GetUuidsToQuery addr 0x27833fc size 0xe4 virtual false final false
  static inline void GetUuidsToQuery(::GlobalNamespace::OVRAnchor anchor, ::System::Collections::Generic::HashSet_1<::System::Guid>* uuidsToQuery);

  /// @brief Method CheckClassificationsInRooms addr 0x27834e0 size 0x474 virtual false final false
  static inline void CheckClassificationsInRooms(bool success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* rooms,
                                                 ::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications, ::GlobalNamespace::OVRTask_1<bool> task);

  /// @brief Method CheckIfAnchorsContainClassifications addr 0x278395c size 0x48c virtual false final false
  static inline void CheckIfAnchorsContainClassifications(bool success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* roomAnchors,
                                                          ::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications, ::GlobalNamespace::OVRTask_1<bool> task);

  /// @brief Method CollectLabelsFromAnchors addr 0x2783de8 size 0x130 virtual false final false
  static inline void CollectLabelsFromAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors, ::System::Collections::Generic::List_1<::StringW>* labels);

  /// @brief Method OnTrackingSpaceChanged addr 0x2783f18 size 0x4 virtual false final false
  static inline void OnTrackingSpaceChanged(::UnityEngine::Transform* trackingSpace);

  /// @brief Method Update addr 0x278415c size 0x4 virtual false final false
  inline void Update();

  /// @brief Method UpdateAllSceneAnchors addr 0x2783f1c size 0x240 virtual false final false
  static inline void UpdateAllSceneAnchors();

  /// @brief Method UpdateSomeSceneAnchors addr 0x2784160 size 0x130 virtual false final false
  inline void UpdateSomeSceneAnchors();

  /// @brief Method GetRoomLayoutInformation addr 0x2782a44 size 0x144 virtual false final false
  inline ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation* GetRoomLayoutInformation();

  /// @brief Method RequestSceneCapture addr 0x2782c8c size 0x98 virtual false final false
  inline bool RequestSceneCapture(::StringW requestString);

  /// @brief Method OnEnable addr 0x2784690 size 0x290 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x2784920 size 0x234 virtual false final false
  inline void OnDisable();

  /// @brief Method OVRManager_SceneCaptureComplete addr 0x2784b54 size 0x118 virtual false final false
  inline void OVRManager_SceneCaptureComplete(uint64_t requestId, bool result);

  /// @brief Method InstantiateSceneAnchor addr 0x2784d28 size 0x50c virtual false final false
  inline ::GlobalNamespace::OVRSceneAnchor* InstantiateSceneAnchor(::GlobalNamespace::OVRAnchor anchor, ::GlobalNamespace::OVRSceneAnchor* prefab);

  static inline ::GlobalNamespace::OVRSceneManager* New_ctor();

  /// @brief Method .ctor addr 0x2785234 size 0x8c virtual false final false
  inline void _ctor();

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
  ::GlobalNamespace::OVRSceneAnchor* ___PlanePrefab;

  /// @brief Field VolumePrefab, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OVRSceneAnchor* ___VolumePrefab;

  /// @brief Field PrefabOverrides, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>* ___PrefabOverrides;

  /// @brief Field VerboseLogging, offset: 0x30, size: 0x1, def value: None
  bool ___VerboseLogging;

  /// @brief Field MaxSceneAnchorUpdatesPerFrame, offset: 0x34, size: 0x4, def value: None
  int32_t ___MaxSceneAnchorUpdatesPerFrame;

  /// @brief Field _initialAnchorParent, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Transform* ____initialAnchorParent;

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
  ::GlobalNamespace::OVRCameraRig* ____cameraRig;

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
