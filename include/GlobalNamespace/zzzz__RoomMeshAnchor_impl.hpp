#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomMeshAnchor.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSemanticLabels_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTriangleMesh_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/zzzz__Mesh_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__RoomMeshAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__RoomMeshAnchor_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshCountsJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshCountsJob::*)()>(
    &::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshCountsJob::Execute)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58827f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshCountsJob>::get(), "Execute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RoomMeshAnchor_GetTriangleMeshCountsJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshCountsJob>::get(),
                                                                             "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr GlobalNamespace::RoomMeshAnchor_GetTriangleMeshCountsJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::RoomMeshAnchor_GetTriangleMeshCountsJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "Results", ty: "::Unity::Collections::NativeArray_1<int32_t>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshCountsJob::RoomMeshAnchor_GetTriangleMeshCountsJob(::GlobalNamespace::OVRSpace Space,
                                                                                                              ::Unity::Collections::NativeArray_1<int32_t> Results) noexcept {
  this->Space = Space;
  this->Results = Results;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshCountsJob::RoomMeshAnchor_GetTriangleMeshCountsJob() {}
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshJob::*)()>(
    &::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshJob::Execute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5882890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshJob>::get(),
                                                                               "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RoomMeshAnchor_GetTriangleMeshJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshJob>::get(),
                                                                             "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr GlobalNamespace::RoomMeshAnchor_GetTriangleMeshJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::RoomMeshAnchor_GetTriangleMeshJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "Vertices", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers:
// "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshJob::RoomMeshAnchor_GetTriangleMeshJob(::GlobalNamespace::OVRSpace Space,
                                                                                                  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Vertices,
                                                                                                  ::Unity::Collections::NativeArray_1<int32_t> Triangles) noexcept {
  this->Space = Space;
  this->Vertices = Vertices;
  this->Triangles = Triangles;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshJob::RoomMeshAnchor_GetTriangleMeshJob() {}
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob::*)()>(
    &::GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob::Execute)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5882910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob>::get(),
                                                                               "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob>::get(),
                                                                             "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "Vertices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Triangles", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshData", ty: "::UnityEngine::Mesh_MeshData", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob::RoomMeshAnchor_PopulateMeshDataJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Vertices,
                                                                                                    ::Unity::Collections::NativeArray_1<int32_t> Triangles,
                                                                                                    ::UnityEngine::Mesh_MeshData MeshData) noexcept {
  this->Vertices = Vertices;
  this->Triangles = Triangles;
  this->MeshData = MeshData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob::RoomMeshAnchor_PopulateMeshDataJob() {}
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor_BakeMeshJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomMeshAnchor_BakeMeshJob::*)()>(&::GlobalNamespace::RoomMeshAnchor_BakeMeshJob::Execute)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5882b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor_BakeMeshJob>::get(), "Execute",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RoomMeshAnchor_BakeMeshJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor_BakeMeshJob>::get(), "Execute",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr GlobalNamespace::RoomMeshAnchor_BakeMeshJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::RoomMeshAnchor_BakeMeshJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "MeshID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Convex", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RoomMeshAnchor_BakeMeshJob::RoomMeshAnchor_BakeMeshJob(int32_t MeshID, bool Convex) noexcept {
  this->MeshID = MeshID;
  this->Convex = Convex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomMeshAnchor_BakeMeshJob::RoomMeshAnchor_BakeMeshJob() {}
template <typename T> inline void GlobalNamespace::RoomMeshAnchor__EnableComponent_d__16_1<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor__EnableComponent_d__16_1<T>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::RoomMeshAnchor__EnableComponent_d__16_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor__EnableComponent_d__16_1<T>>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr GlobalNamespace::RoomMeshAnchor__EnableComponent_d__16_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::RoomMeshAnchor__EnableComponent_d__16_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::RoomMeshAnchor>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_component_5__2", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::RoomMeshAnchor__EnableComponent_d__16_1<T>::RoomMeshAnchor__EnableComponent_d__16_1(int32_t __1__state,
                                                                                                                 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder,
                                                                                                                 ::UnityW<::GlobalNamespace::RoomMeshAnchor> __4__this, T _component_5__2,
                                                                                                                 ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_component_5__2 = _component_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::RoomMeshAnchor__EnableComponent_d__16_1<T>::RoomMeshAnchor__EnableComponent_d__16_1() {}
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::*)(int32_t)>(
    &::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588244c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::*)()>(
    &::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5882bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::*)()>(
    &::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x5882bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::*)()>(
    &::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__m__Finally1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x58831f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>::get(), "<>m__Finally1",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::*)()>(
    &::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5883248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::*)()>(
    &::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5883250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::*)()>(
    &::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5883288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::RoomMeshAnchor>& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::RoomMeshAnchor> const& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RoomMeshAnchor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Mesh_MeshDataArray& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get__meshDataArray_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshDataArray_5__2;
}
constexpr ::UnityEngine::Mesh_MeshDataArray const& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get__meshDataArray_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshDataArray_5__2;
}
constexpr void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_set__meshDataArray_5__2(::UnityEngine::Mesh_MeshDataArray value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____meshDataArray_5__2 = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get__disposeVerticesJob_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposeVerticesJob_5__3;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get__disposeVerticesJob_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposeVerticesJob_5__3;
}
constexpr void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_set__disposeVerticesJob_5__3(::Unity::Jobs::JobHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposeVerticesJob_5__3 = value;
}
constexpr ::UnityW<::UnityEngine::MeshCollider>& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get__collider_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collider_5__4;
}
constexpr ::UnityW<::UnityEngine::MeshCollider> const& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get__collider_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collider_5__4;
}
constexpr void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_set__collider_5__4(::UnityW<::UnityEngine::MeshCollider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____collider_5__4)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get__meshCountResults_5__5() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshCountResults_5__5;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get__meshCountResults_5__5() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshCountResults_5__5;
}
constexpr void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_set__meshCountResults_5__5(::Unity::Collections::NativeArray_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____meshCountResults_5__5 = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get__job_5__6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____job_5__6;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get__job_5__6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____job_5__6;
}
constexpr void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_set__job_5__6(::Unity::Jobs::JobHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____job_5__6 = value;
}
inline void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__m__Finally1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>::get(),
                                                                             "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15* GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::RoomMeshAnchor__GenerateRoomMesh_d__15() {}
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor__Initialize_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomMeshAnchor__Initialize_d__14::*)()>(
    &::GlobalNamespace::RoomMeshAnchor__Initialize_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x5883290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor__Initialize_d__14>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor__Initialize_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomMeshAnchor__Initialize_d__14::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::RoomMeshAnchor__Initialize_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588382c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor__Initialize_d__14>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RoomMeshAnchor__Initialize_d__14::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor__Initialize_d__14>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomMeshAnchor__Initialize_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor__Initialize_d__14>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::RoomMeshAnchor__Initialize_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::RoomMeshAnchor__Initialize_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::RoomMeshAnchor>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "anchor", ty: "::GlobalNamespace::OVRAnchor", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OVRSemanticLabels>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OVRTriangleMesh>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RoomMeshAnchor__Initialize_d__14::RoomMeshAnchor__Initialize_d__14(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::RoomMeshAnchor> __4__this, ::GlobalNamespace::OVRAnchor anchor,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OVRSemanticLabels> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OVRTriangleMesh> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->anchor = anchor;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomMeshAnchor__Initialize_d__14::RoomMeshAnchor__Initialize_d__14() {}
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor.get_IsCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomMeshAnchor::*)()>(&::GlobalNamespace::RoomMeshAnchor::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58821c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get(), "get_IsCompleted",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor.set_IsCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomMeshAnchor::*)(bool)>(&::GlobalNamespace::RoomMeshAnchor::set_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58821d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get(), "set_IsCompleted",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor.get_Valid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomMeshAnchor::*)()>(&::GlobalNamespace::RoomMeshAnchor::get_Valid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58821d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get(), "get_Valid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomMeshAnchor::*)()>(&::GlobalNamespace::RoomMeshAnchor::Awake)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5882238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomMeshAnchor::*)(::GlobalNamespace::OVRAnchor)>(
    &::GlobalNamespace::RoomMeshAnchor::Initialize)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5882334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor.GenerateRoomMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::RoomMeshAnchor::*)()>(
    &::GlobalNamespace::RoomMeshAnchor::GenerateRoomMesh)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x58823f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get(), "GenerateRoomMesh",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor.TryUpdateTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomMeshAnchor::*)()>(&::GlobalNamespace::RoomMeshAnchor::TryUpdateTransform)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5882454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get(), "TryUpdateTransform",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomMeshAnchor::*)()>(&::GlobalNamespace::RoomMeshAnchor::OnDestroy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58826a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor.IsJobDone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::Jobs::JobHandle)>(&::GlobalNamespace::RoomMeshAnchor::IsJobDone)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5882704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get(), "IsJobDone", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomMeshAnchor::*)()>(&::GlobalNamespace::RoomMeshAnchor::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5882788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__IsCompleted_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsCompleted_k__BackingField;
}
constexpr bool const& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__IsCompleted_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsCompleted_k__BackingField;
}
constexpr void GlobalNamespace::RoomMeshAnchor::__cordl_internal_set__IsCompleted_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsCompleted_k__BackingField = value;
}
constexpr ::GlobalNamespace::OVRAnchor& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__anchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anchor;
}
constexpr ::GlobalNamespace::OVRAnchor const& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__anchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anchor;
}
constexpr void GlobalNamespace::RoomMeshAnchor::__cordl_internal_set__anchor(::GlobalNamespace::OVRAnchor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____anchor = value;
}
constexpr ::GlobalNamespace::OVRSemanticLabels& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__labels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labels;
}
constexpr ::GlobalNamespace::OVRSemanticLabels const& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__labels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labels;
}
constexpr void GlobalNamespace::RoomMeshAnchor::__cordl_internal_set__labels(::GlobalNamespace::OVRSemanticLabels value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____labels = value;
}
constexpr ::GlobalNamespace::OVRTriangleMesh& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__triangleMeshComponent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triangleMeshComponent;
}
constexpr ::GlobalNamespace::OVRTriangleMesh const& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__triangleMeshComponent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triangleMeshComponent;
}
constexpr void GlobalNamespace::RoomMeshAnchor::__cordl_internal_set__triangleMeshComponent(::GlobalNamespace::OVRTriangleMesh value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____triangleMeshComponent = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mesh;
}
constexpr void GlobalNamespace::RoomMeshAnchor::__cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__meshFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__meshFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshFilter;
}
constexpr void GlobalNamespace::RoomMeshAnchor::__cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::RoomMeshAnchor::setStaticF_RotateY180(::UnityEngine::Quaternion value) {
  ::cordl_internals::setStaticField<::UnityEngine::Quaternion, "RotateY180", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get>(
      std::forward<::UnityEngine::Quaternion>(value));
}
inline ::UnityEngine::Quaternion GlobalNamespace::RoomMeshAnchor::getStaticF_RotateY180() {
  return ::cordl_internals::getStaticField<::UnityEngine::Quaternion, "RotateY180", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get>();
}
inline bool GlobalNamespace::RoomMeshAnchor::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get(), "get_IsCompleted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomMeshAnchor::set_IsCompleted(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get(), "set_IsCompleted",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::RoomMeshAnchor::get_Valid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get(), "get_Valid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::RoomMeshAnchor::IsComponentEnabled() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get(), "IsComponentEnabled",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomMeshAnchor::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomMeshAnchor::Initialize(::GlobalNamespace::OVRAnchor anchor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchor);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::RoomMeshAnchor::GenerateRoomMesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get(), "GenerateRoomMesh",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* GlobalNamespace::RoomMeshAnchor::EnableComponent() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get(), "EnableComponent",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::RoomMeshAnchor::TryUpdateTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get(), "TryUpdateTransform",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomMeshAnchor::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::RoomMeshAnchor::IsJobDone(::Unity::Jobs::JobHandle job) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get(), "IsJobDone", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, job);
}
inline void GlobalNamespace::RoomMeshAnchor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMeshAnchor*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::RoomMeshAnchor* GlobalNamespace::RoomMeshAnchor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RoomMeshAnchor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomMeshAnchor::RoomMeshAnchor() {}
