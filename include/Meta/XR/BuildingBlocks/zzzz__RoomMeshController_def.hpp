#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/RoomMeshController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomMeshController)
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
class RoomMeshAnchor;
}
namespace Meta::XR::BuildingBlocks {
class RoomMeshController__LoadRoomMesh_d__6;
}
namespace Meta::XR::BuildingBlocks {
class RoomMeshController__Start_d__4;
}
namespace Meta::XR::BuildingBlocks {
class RoomMeshController__UpdateVolume_d__5;
}
namespace Meta::XR::BuildingBlocks {
class RoomMeshEvent;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Meta::XR::BuildingBlocks {
class RoomMeshController;
}
namespace Meta::XR::BuildingBlocks {
class RoomMeshController__LoadRoomMesh_d__6;
}
namespace Meta::XR::BuildingBlocks {
class RoomMeshController__Start_d__4;
}
namespace Meta::XR::BuildingBlocks {
class RoomMeshController__UpdateVolume_d__5;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::BuildingBlocks::RoomMeshController);
MARK_REF_PTR_T(::Meta::XR::BuildingBlocks::RoomMeshController__LoadRoomMesh_d__6);
MARK_REF_PTR_T(::Meta::XR::BuildingBlocks::RoomMeshController__Start_d__4);
MARK_REF_PTR_T(::Meta::XR::BuildingBlocks::RoomMeshController__UpdateVolume_d__5);
// Dependencies OVRAnchor, OVRAnchor::FetchResult, OVRObjectPool::ListScope`1<T>, OVRResult`2<TValue, TStatus>, OVRTask`1<TResult>, System.Collections.Generic.List`1::Enumerator<T>, System.Object
namespace Meta::XR::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.BuildingBlocks.RoomMeshController/<LoadRoomMesh>d__6
class CORDL_TYPE RoomMeshController__LoadRoomMesh_d__6 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::Meta::XR::BuildingBlocks::RoomMeshController> __4__this;

  /// @brief Field <>7__wrap2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2)) ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap2;

  /// @brief Field <>7__wrap4, offset 0x48, size 0x28
  __declspec(property(get = __cordl_internal_get___7__wrap4, put = __cordl_internal_set___7__wrap4)) ::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::OVRAnchor> __7__wrap4;

  /// @brief Field <anchor>5__6, offset 0x70, size 0x18
  __declspec(property(get = __cordl_internal_get__anchor_5__6, put = __cordl_internal_set__anchor_5__6)) ::GlobalNamespace::OVRAnchor _anchor_5__6;

  /// @brief Field <anchors>5__2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__anchors_5__2, put = __cordl_internal_set__anchors_5__2)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _anchors_5__2;

  /// @brief Field <localizeTask>5__7, offset 0x88, size 0x10
  __declspec(property(get = __cordl_internal_get__localizeTask_5__7, put = __cordl_internal_set__localizeTask_5__7)) ::GlobalNamespace::OVRTask_1<bool> _localizeTask_5__7;

  /// @brief Field <task>5__4, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get__task_5__4, put = __cordl_internal_set__task_5__4)) ::GlobalNamespace::OVRTask_1<
      ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
      _task_5__4;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5885100, size 0x524, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Meta::XR::BuildingBlocks::RoomMeshController__LoadRoomMesh_d__6* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x58856c0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x58856c8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5885700, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x588500c, size 0xf4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::Meta::XR::BuildingBlocks::RoomMeshController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::Meta::XR::BuildingBlocks::RoomMeshController>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> const& __cordl_internal_get___7__wrap2() const;

  constexpr ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>& __cordl_internal_get___7__wrap2();

  constexpr ::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::OVRAnchor> const& __cordl_internal_get___7__wrap4() const;

  constexpr ::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::OVRAnchor>& __cordl_internal_get___7__wrap4();

  constexpr ::GlobalNamespace::OVRAnchor const& __cordl_internal_get__anchor_5__6() const;

  constexpr ::GlobalNamespace::OVRAnchor& __cordl_internal_get__anchor_5__6();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* const& __cordl_internal_get__anchors_5__2() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*& __cordl_internal_get__anchors_5__2();

  constexpr ::GlobalNamespace::OVRTask_1<bool> const& __cordl_internal_get__localizeTask_5__7() const;

  constexpr ::GlobalNamespace::OVRTask_1<bool>& __cordl_internal_get__localizeTask_5__7();

  constexpr ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> const&
  __cordl_internal_get__task_5__4() const;

  constexpr ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>&
  __cordl_internal_get__task_5__4();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::XR::BuildingBlocks::RoomMeshController> value);

  constexpr void __cordl_internal_set___7__wrap2(::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> value);

  constexpr void __cordl_internal_set___7__wrap4(::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::OVRAnchor> value);

  constexpr void __cordl_internal_set__anchor_5__6(::GlobalNamespace::OVRAnchor value);

  constexpr void __cordl_internal_set__anchors_5__2(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* value);

  constexpr void __cordl_internal_set__localizeTask_5__7(::GlobalNamespace::OVRTask_1<bool> value);

  constexpr void __cordl_internal_set__task_5__4(
      ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> value);

  /// @brief Method <>m__Finally1, addr 0x588566c, size 0x54, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x5885624, size 0x48, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method .ctor, addr 0x5884e20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomMeshController__LoadRoomMesh_d__6();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomMeshController__LoadRoomMesh_d__6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomMeshController__LoadRoomMesh_d__6(RoomMeshController__LoadRoomMesh_d__6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomMeshController__LoadRoomMesh_d__6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomMeshController__LoadRoomMesh_d__6(RoomMeshController__LoadRoomMesh_d__6 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21164 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Meta::XR::BuildingBlocks::RoomMeshController> _____4__this;

  /// @brief Field <anchors>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* ____anchors_5__2;

  /// @brief Field <>7__wrap2, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> _____7__wrap2;

  /// @brief Field <task>5__4, offset: 0x38, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> ____task_5__4;

  /// @brief Field <>7__wrap4, offset: 0x48, size: 0x28, def value: None
  ::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::OVRAnchor> _____7__wrap4;

  /// @brief Field <anchor>5__6, offset: 0x70, size: 0x18, def value: None
  ::GlobalNamespace::OVRAnchor ____anchor_5__6;

  /// @brief Field <localizeTask>5__7, offset: 0x88, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1<bool> ____localizeTask_5__7;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::RoomMeshController__LoadRoomMesh_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::RoomMeshController__LoadRoomMesh_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::RoomMeshController__LoadRoomMesh_d__6, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::RoomMeshController__LoadRoomMesh_d__6, ____anchors_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::RoomMeshController__LoadRoomMesh_d__6, _____7__wrap2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::RoomMeshController__LoadRoomMesh_d__6, ____task_5__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::RoomMeshController__LoadRoomMesh_d__6, _____7__wrap4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::RoomMeshController__LoadRoomMesh_d__6, ____anchor_5__6) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::RoomMeshController__LoadRoomMesh_d__6, ____localizeTask_5__7) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::RoomMeshController__LoadRoomMesh_d__6, 0x98>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
// Dependencies System.Object
namespace Meta::XR::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.BuildingBlocks.RoomMeshController/<Start>d__4
class CORDL_TYPE RoomMeshController__Start_d__4 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::Meta::XR::BuildingBlocks::RoomMeshController> __4__this;

  /// @brief Field <startTime>5__3, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__startTime_5__3, put = __cordl_internal_set__startTime_5__3)) float_t _startTime_5__3;

  /// @brief Field <timeout>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__timeout_5__2, put = __cordl_internal_set__timeout_5__2)) float_t _timeout_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x588570c, size 0x2ec, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Meta::XR::BuildingBlocks::RoomMeshController__Start_d__4* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x58859f8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5885a00, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5885a38, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5885708, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::Meta::XR::BuildingBlocks::RoomMeshController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::Meta::XR::BuildingBlocks::RoomMeshController>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__startTime_5__3() const;

  constexpr float_t& __cordl_internal_get__startTime_5__3();

  constexpr float_t const& __cordl_internal_get__timeout_5__2() const;

  constexpr float_t& __cordl_internal_get__timeout_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::XR::BuildingBlocks::RoomMeshController> value);

  constexpr void __cordl_internal_set__startTime_5__3(float_t value);

  constexpr void __cordl_internal_set__timeout_5__2(float_t value);

  /// @brief Method .ctor, addr 0x5884d68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomMeshController__Start_d__4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomMeshController__Start_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomMeshController__Start_d__4(RoomMeshController__Start_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomMeshController__Start_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomMeshController__Start_d__4(RoomMeshController__Start_d__4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21165 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Meta::XR::BuildingBlocks::RoomMeshController> _____4__this;

  /// @brief Field <timeout>5__2, offset: 0x28, size: 0x4, def value: None
  float_t ____timeout_5__2;

  /// @brief Field <startTime>5__3, offset: 0x2c, size: 0x4, def value: None
  float_t ____startTime_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::RoomMeshController__Start_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::RoomMeshController__Start_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::RoomMeshController__Start_d__4, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::RoomMeshController__Start_d__4, ____timeout_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::RoomMeshController__Start_d__4, ____startTime_5__3) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::RoomMeshController__Start_d__4, 0x30>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
// Dependencies System.Object
namespace Meta::XR::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.BuildingBlocks.RoomMeshController/<UpdateVolume>d__5
class CORDL_TYPE RoomMeshController__UpdateVolume_d__5 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::Meta::XR::BuildingBlocks::RoomMeshController> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5885a44, size 0x460, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Meta::XR::BuildingBlocks::RoomMeshController__UpdateVolume_d__5* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5885ea4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5885eac, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5885ee4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5885a40, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::Meta::XR::BuildingBlocks::RoomMeshController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::Meta::XR::BuildingBlocks::RoomMeshController>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::XR::BuildingBlocks::RoomMeshController> value);

  /// @brief Method .ctor, addr 0x5884dc4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomMeshController__UpdateVolume_d__5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomMeshController__UpdateVolume_d__5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomMeshController__UpdateVolume_d__5(RoomMeshController__UpdateVolume_d__5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomMeshController__UpdateVolume_d__5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomMeshController__UpdateVolume_d__5(RoomMeshController__UpdateVolume_d__5 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21166 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Meta::XR::BuildingBlocks::RoomMeshController> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::RoomMeshController__UpdateVolume_d__5, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::RoomMeshController__UpdateVolume_d__5, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::RoomMeshController__UpdateVolume_d__5, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::RoomMeshController__UpdateVolume_d__5, 0x28>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.BuildingBlocks.RoomMeshController
class CORDL_TYPE RoomMeshController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _LoadRoomMesh_d__6 = ::Meta::XR::BuildingBlocks::RoomMeshController__LoadRoomMesh_d__6;

  using _Start_d__4 = ::Meta::XR::BuildingBlocks::RoomMeshController__Start_d__4;

  using _UpdateVolume_d__5 = ::Meta::XR::BuildingBlocks::RoomMeshController__UpdateVolume_d__5;

  /// @brief Field _meshPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__meshPrefab, put = __cordl_internal_set__meshPrefab)) ::UnityW<::UnityEngine::GameObject> _meshPrefab;

  /// @brief Field _roomMeshAnchor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__roomMeshAnchor, put = __cordl_internal_set__roomMeshAnchor)) ::UnityW<::GlobalNamespace::RoomMeshAnchor> _roomMeshAnchor;

  /// @brief Field _roomMeshEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__roomMeshEvent, put = __cordl_internal_set__roomMeshEvent)) ::UnityW<::Meta::XR::BuildingBlocks::RoomMeshEvent> _roomMeshEvent;

  /// @brief Method Awake, addr 0x5884c70, size 0xa4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method InstantiateRoomMesh, addr 0x5884e28, size 0x1e0, virtual false, abstract: false, final false
  inline void InstantiateRoomMesh(::GlobalNamespace::OVRAnchor anchor, ::UnityEngine::GameObject* prefab);

  /// @brief Method LoadRoomMesh, addr 0x5884dcc, size 0x54, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* LoadRoomMesh();

  static inline ::Meta::XR::BuildingBlocks::RoomMeshController* New_ctor();

  /// @brief Method Start, addr 0x5884d14, size 0x54, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  /// @brief Method UpdateVolume, addr 0x5884d70, size 0x54, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* UpdateVolume();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__meshPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__meshPrefab();

  constexpr ::UnityW<::GlobalNamespace::RoomMeshAnchor> const& __cordl_internal_get__roomMeshAnchor() const;

  constexpr ::UnityW<::GlobalNamespace::RoomMeshAnchor>& __cordl_internal_get__roomMeshAnchor();

  constexpr ::UnityW<::Meta::XR::BuildingBlocks::RoomMeshEvent> const& __cordl_internal_get__roomMeshEvent() const;

  constexpr ::UnityW<::Meta::XR::BuildingBlocks::RoomMeshEvent>& __cordl_internal_get__roomMeshEvent();

  constexpr void __cordl_internal_set__meshPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__roomMeshAnchor(::UnityW<::GlobalNamespace::RoomMeshAnchor> value);

  constexpr void __cordl_internal_set__roomMeshEvent(::UnityW<::Meta::XR::BuildingBlocks::RoomMeshEvent> value);

  /// @brief Method .ctor, addr 0x5885008, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomMeshController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomMeshController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomMeshController(RoomMeshController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomMeshController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomMeshController(RoomMeshController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21167 };

  /// @brief Field _meshPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____meshPrefab;

  /// @brief Field _roomMeshEvent, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Meta::XR::BuildingBlocks::RoomMeshEvent> ____roomMeshEvent;

  /// @brief Field _roomMeshAnchor, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RoomMeshAnchor> ____roomMeshAnchor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::RoomMeshController, ____meshPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::RoomMeshController, ____roomMeshEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::RoomMeshController, ____roomMeshAnchor) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::RoomMeshController, 0x38>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
NEED_NO_BOX(::Meta::XR::BuildingBlocks::RoomMeshController);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::RoomMeshController*, "Meta.XR.BuildingBlocks", "RoomMeshController");
NEED_NO_BOX(::Meta::XR::BuildingBlocks::RoomMeshController__LoadRoomMesh_d__6);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::RoomMeshController__LoadRoomMesh_d__6*, "Meta.XR.BuildingBlocks", "RoomMeshController/<LoadRoomMesh>d__6");
NEED_NO_BOX(::Meta::XR::BuildingBlocks::RoomMeshController__Start_d__4);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::RoomMeshController__Start_d__4*, "Meta.XR.BuildingBlocks", "RoomMeshController/<Start>d__4");
NEED_NO_BOX(::Meta::XR::BuildingBlocks::RoomMeshController__UpdateVolume_d__5);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::RoomMeshController__UpdateVolume_d__5*, "Meta.XR.BuildingBlocks", "RoomMeshController/<UpdateVolume>d__5");
