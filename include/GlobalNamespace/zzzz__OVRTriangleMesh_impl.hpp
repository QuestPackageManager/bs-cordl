#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTriangleMesh.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTriangleMesh_def.hpp"
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTriangleMesh_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OVRTriangleMesh__GetMeshJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTriangleMesh__GetMeshJob::*)()>(
    &::GlobalNamespace::__OVRTriangleMesh__GetMeshJob::Execute)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3f40944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>::get(),
                                                                               "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr GlobalNamespace::__OVRTriangleMesh__GetMeshJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::__OVRTriangleMesh__GetMeshJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__OVRTriangleMesh__GetMeshJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>::get(), "Execute",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Positions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "Indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRTriangleMesh__GetMeshJob::__OVRTriangleMesh__GetMeshJob(uint64_t Space, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Positions,
                                                                                          ::Unity::Collections::NativeArray_1<int32_t> Indices) noexcept {
  this->Space = Space;
  this->Positions = Positions;
  this->Indices = Indices;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTriangleMesh__GetMeshJob::__OVRTriangleMesh__GetMeshJob() {}
// Ctor Parameters [CppParam { name: "A", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "B", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "C", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRTriangleMesh__Triangle::__OVRTriangleMesh__Triangle(int32_t A, int32_t B, int32_t C) noexcept {
  this->A = A;
  this->B = B;
  this->C = C;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTriangleMesh__Triangle::__OVRTriangleMesh__Triangle() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob::*)(int32_t)>(
    &::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob::Execute)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3f40a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob::__OVRTriangleMesh__FlipTriangleWindingJob(
    ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle> Triangles) noexcept {
  this->Triangles = Triangles;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob::__OVRTriangleMesh__FlipTriangleWindingJob() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRTriangleMesh__NegateXJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTriangleMesh__NegateXJob::*)(int32_t)>(
    &::GlobalNamespace::__OVRTriangleMesh__NegateXJob::Execute)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3f40a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr GlobalNamespace::__OVRTriangleMesh__NegateXJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::__OVRTriangleMesh__NegateXJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__OVRTriangleMesh__NegateXJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "Positions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRTriangleMesh__NegateXJob::__OVRTriangleMesh__NegateXJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Positions) noexcept {
  this->Positions = Positions;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTriangleMesh__NegateXJob::__OVRTriangleMesh__NegateXJob() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.IOVRAnchorComponent_OVRTriangleMesh__get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPlugin__SpaceComponentType (::GlobalNamespace::OVRTriangleMesh::*)()>(
    &::GlobalNamespace::OVRTriangleMesh::IOVRAnchorComponent_OVRTriangleMesh__get_Type)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3f3ff68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "IOVRAnchorComponent<OVRTriangleMesh>.get_Type",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.IOVRAnchorComponent_OVRTriangleMesh__get_Handle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::GlobalNamespace::OVRTriangleMesh::*)()>(
    &::GlobalNamespace::OVRTriangleMesh::IOVRAnchorComponent_OVRTriangleMesh__get_Handle)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3f3ffc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "IOVRAnchorComponent<OVRTriangleMesh>.get_Handle",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.IOVRAnchorComponent_OVRTriangleMesh__FromAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTriangleMesh (::GlobalNamespace::OVRTriangleMesh::*)(::GlobalNamespace::OVRAnchor)>(
    &::GlobalNamespace::OVRTriangleMesh::IOVRAnchorComponent_OVRTriangleMesh__FromAnchor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3f4001c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "IOVRAnchorComponent<OVRTriangleMesh>.FromAnchor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.get_IsNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTriangleMesh::*)()>(&::GlobalNamespace::OVRTriangleMesh::get_IsNull)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3f400b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "get_IsNull",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.get_IsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTriangleMesh::*)()>(&::GlobalNamespace::OVRTriangleMesh::get_IsEnabled)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3f4010c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "get_IsEnabled",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.IOVRAnchorComponent_OVRTriangleMesh__SetEnabledAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRTriangleMesh::*)(bool, double_t)>(
    &::GlobalNamespace::OVRTriangleMesh::IOVRAnchorComponent_OVRTriangleMesh__SetEnabledAsync)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3f401fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "IOVRAnchorComponent<OVRTriangleMesh>.SetEnabledAsync",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTriangleMesh::*)(::GlobalNamespace::OVRTriangleMesh)>(
    &::GlobalNamespace::OVRTriangleMesh::Equals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3f40248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTriangleMesh>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRTriangleMesh, ::GlobalNamespace::OVRTriangleMesh)>(
    &::GlobalNamespace::OVRTriangleMesh::op_Equality)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3f402b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTriangleMesh>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTriangleMesh>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRTriangleMesh, ::GlobalNamespace::OVRTriangleMesh)>(
    &::GlobalNamespace::OVRTriangleMesh::op_Inequality)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3f4031c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTriangleMesh>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTriangleMesh>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTriangleMesh::*)(::System::Object*)>(&::GlobalNamespace::OVRTriangleMesh::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3f4038c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRTriangleMesh::*)()>(&::GlobalNamespace::OVRTriangleMesh::GetHashCode)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3f4041c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::OVRTriangleMesh::*)()>(&::GlobalNamespace::OVRTriangleMesh::ToString)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3f404b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPlugin__SpaceComponentType (::GlobalNamespace::OVRTriangleMesh::*)()>(
    &::GlobalNamespace::OVRTriangleMesh::get_Type)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3f3ffbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "get_Type",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.get_Handle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::GlobalNamespace::OVRTriangleMesh::*)()>(&::GlobalNamespace::OVRTriangleMesh::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f4055c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "get_Handle",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTriangleMesh::*)(::GlobalNamespace::OVRAnchor)>(
    &::GlobalNamespace::OVRTriangleMesh::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3f4004c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.TryGetCounts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTriangleMesh::*)(ByRef<int32_t>, ByRef<int32_t>)>(
    &::GlobalNamespace::OVRTriangleMesh::TryGetCounts)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3f40564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "TryGetCounts", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.TryGetMeshRawUntransformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTriangleMesh::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeArray_1<int32_t>)>(&::GlobalNamespace::OVRTriangleMesh::TryGetMeshRawUntransformed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3f405fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "TryGetMeshRawUntransformed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.TryGetMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTriangleMesh::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeArray_1<int32_t>)>(&::GlobalNamespace::OVRTriangleMesh::TryGetMesh)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3f406ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "TryGetMesh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.ScheduleGetMeshJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::GlobalNamespace::OVRTriangleMesh::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Jobs::JobHandle)>(&::GlobalNamespace::OVRTriangleMesh::ScheduleGetMeshJob)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3f407bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "ScheduleGetMeshJob", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>"
constexpr GlobalNamespace::OVRTriangleMesh::operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>*() {
  return static_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>"
constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>*
GlobalNamespace::OVRTriangleMesh::i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRTriangleMesh_() {
  return static_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>"
constexpr GlobalNamespace::OVRTriangleMesh::operator ::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>* GlobalNamespace::OVRTriangleMesh::i___System__IEquatable_1___GlobalNamespace__OVRTriangleMesh_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::OVRTriangleMesh::setStaticF_Null(::GlobalNamespace::OVRTriangleMesh value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRTriangleMesh, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get>(
      std::forward<::GlobalNamespace::OVRTriangleMesh>(value));
}
inline ::GlobalNamespace::OVRTriangleMesh GlobalNamespace::OVRTriangleMesh::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTriangleMesh, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get>();
}
inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType GlobalNamespace::OVRTriangleMesh::IOVRAnchorComponent_OVRTriangleMesh__get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "IOVRAnchorComponent<OVRTriangleMesh>.get_Type",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPlugin__SpaceComponentType, false>(this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRTriangleMesh::IOVRAnchorComponent_OVRTriangleMesh__get_Handle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "IOVRAnchorComponent<OVRTriangleMesh>.get_Handle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTriangleMesh GlobalNamespace::OVRTriangleMesh::IOVRAnchorComponent_OVRTriangleMesh__FromAnchor(::GlobalNamespace::OVRAnchor anchor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "IOVRAnchorComponent<OVRTriangleMesh>.FromAnchor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTriangleMesh, false>(this, ___internal_method, anchor);
}
inline bool GlobalNamespace::OVRTriangleMesh::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "get_IsNull",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRTriangleMesh::get_IsEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "get_IsEnabled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRTriangleMesh::IOVRAnchorComponent_OVRTriangleMesh__SetEnabledAsync(bool enabled, double_t timeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "IOVRAnchorComponent<OVRTriangleMesh>.SetEnabledAsync",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>, false>(this, ___internal_method, enabled, timeout);
}
inline bool GlobalNamespace::OVRTriangleMesh::Equals(::GlobalNamespace::OVRTriangleMesh other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTriangleMesh>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRTriangleMesh::op_Equality(::GlobalNamespace::OVRTriangleMesh lhs, ::GlobalNamespace::OVRTriangleMesh rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTriangleMesh>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTriangleMesh>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRTriangleMesh::op_Inequality(::GlobalNamespace::OVRTriangleMesh lhs, ::GlobalNamespace::OVRTriangleMesh rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTriangleMesh>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTriangleMesh>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRTriangleMesh::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::OVRTriangleMesh::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRTriangleMesh::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType GlobalNamespace::OVRTriangleMesh::get_Type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "get_Type",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPlugin__SpaceComponentType, false>(this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRTriangleMesh::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "get_Handle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTriangleMesh::_ctor(::GlobalNamespace::OVRAnchor anchor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchor);
}
inline bool GlobalNamespace::OVRTriangleMesh::TryGetCounts(ByRef<int32_t> vertexCount, ByRef<int32_t> triangleCount) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "TryGetCounts", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, vertexCount, triangleCount);
}
inline bool GlobalNamespace::OVRTriangleMesh::TryGetMeshRawUntransformed(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> positions, ::Unity::Collections::NativeArray_1<int32_t> indices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "TryGetMeshRawUntransformed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, positions, indices);
}
inline bool GlobalNamespace::OVRTriangleMesh::TryGetMesh(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> positions, ::Unity::Collections::NativeArray_1<int32_t> indices) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "TryGetMesh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, positions, indices);
}
/// @param dependencies: ::Unity::Jobs::JobHandle (default: {})
inline ::Unity::Jobs::JobHandle GlobalNamespace::OVRTriangleMesh::ScheduleGetMeshJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> positions,
                                                                                     ::Unity::Collections::NativeArray_1<int32_t> indices, ::Unity::Jobs::JobHandle dependencies) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "ScheduleGetMeshJob", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, positions, indices, dependencies);
}
// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRTriangleMesh::OVRTriangleMesh(uint64_t _Handle_k__BackingField) noexcept {
  this->_Handle_k__BackingField = _Handle_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTriangleMesh::OVRTriangleMesh() {}
