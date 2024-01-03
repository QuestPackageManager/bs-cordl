#pragma once
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTriangleMesh_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "GlobalNamespace/zzzz__OVRTriangleMesh_def.hpp"
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OVRTriangleMesh__GetMeshJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTriangleMesh__GetMeshJob::*)()>(
    &::GlobalNamespace::__OVRTriangleMesh__GetMeshJob::Execute)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2715440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>::get(),
                                                                               "Execute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr GlobalNamespace::__OVRTriangleMesh__GetMeshJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__OVRTriangleMesh__GetMeshJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>::get(), "Execute",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
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
  constexpr static std::size_t addrs = 0x2715514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>::get(), "Execute",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>::get(), "Execute",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
  constexpr static std::size_t addrs = 0x2715530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>::get(), "Execute",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr GlobalNamespace::__OVRTriangleMesh__NegateXJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__OVRTriangleMesh__NegateXJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>::get(), "Execute", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2714e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(),
                                                                               "IOVRAnchorComponent<OVRTriangleMesh>.get_Type", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.IOVRAnchorComponent_OVRTriangleMesh__get_Handle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::GlobalNamespace::OVRTriangleMesh::*)()>(
    &::GlobalNamespace::OVRTriangleMesh::IOVRAnchorComponent_OVRTriangleMesh__get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2714e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(),
                                                                               "IOVRAnchorComponent<OVRTriangleMesh>.get_Handle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.IOVRAnchorComponent_OVRTriangleMesh__FromAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTriangleMesh (::GlobalNamespace::OVRTriangleMesh::*)(::GlobalNamespace::OVRAnchor)>(
    &::GlobalNamespace::OVRTriangleMesh::IOVRAnchorComponent_OVRTriangleMesh__FromAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2714e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "IOVRAnchorComponent<OVRTriangleMesh>.FromAnchor",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.get_IsNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTriangleMesh::*)()>(&::GlobalNamespace::OVRTriangleMesh::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2714e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "get_IsNull",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.get_IsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTriangleMesh::*)()>(&::GlobalNamespace::OVRTriangleMesh::get_IsEnabled)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2714e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "get_IsEnabled",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.IOVRAnchorComponent_OVRTriangleMesh__SetEnabledAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRTriangleMesh::*)(bool, double_t)>(
    &::GlobalNamespace::OVRTriangleMesh::IOVRAnchorComponent_OVRTriangleMesh__SetEnabledAsync)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2714f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "IOVRAnchorComponent<OVRTriangleMesh>.SetEnabledAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTriangleMesh::*)(::GlobalNamespace::OVRTriangleMesh)>(
    &::GlobalNamespace::OVRTriangleMesh::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2714f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "Equals", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTriangleMesh>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRTriangleMesh, ::GlobalNamespace::OVRTriangleMesh)>(
    &::GlobalNamespace::OVRTriangleMesh::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2714f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "op_Equality", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTriangleMesh>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTriangleMesh>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRTriangleMesh, ::GlobalNamespace::OVRTriangleMesh)>(
    &::GlobalNamespace::OVRTriangleMesh::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2714f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "op_Inequality", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTriangleMesh>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTriangleMesh>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTriangleMesh::*)(::System::Object*)>(&::GlobalNamespace::OVRTriangleMesh::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2714fa0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRTriangleMesh::*)()>(&::GlobalNamespace::OVRTriangleMesh::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2715018;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::OVRTriangleMesh::*)()>(&::GlobalNamespace::OVRTriangleMesh::ToString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2715068;

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
  constexpr static std::size_t addrs = 0x2714e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "get_Type",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.get_Handle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::GlobalNamespace::OVRTriangleMesh::*)()>(&::GlobalNamespace::OVRTriangleMesh::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27150ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "get_Handle",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTriangleMesh::*)(::GlobalNamespace::OVRAnchor)>(
    &::GlobalNamespace::OVRTriangleMesh::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2714e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.TryGetCounts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTriangleMesh::*)(ByRef<int32_t>, ByRef<int32_t>)>(
    &::GlobalNamespace::OVRTriangleMesh::TryGetCounts)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x27150f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "TryGetCounts", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.TryGetMeshRawUntransformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTriangleMesh::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeArray_1<int32_t>)>(&::GlobalNamespace::OVRTriangleMesh::TryGetMeshRawUntransformed)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2715168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "TryGetMeshRawUntransformed", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.TryGetMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTriangleMesh::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeArray_1<int32_t>)>(&::GlobalNamespace::OVRTriangleMesh::TryGetMesh)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x27151f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "TryGetMesh", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.ScheduleGetMeshJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::GlobalNamespace::OVRTriangleMesh::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Jobs::JobHandle)>(&::GlobalNamespace::OVRTriangleMesh::ScheduleGetMeshJob)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x27152dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "ScheduleGetMeshJob", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>"
constexpr GlobalNamespace::OVRTriangleMesh::operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>*() {
  return static_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>"
constexpr GlobalNamespace::OVRTriangleMesh::operator ::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::OVRTriangleMesh::setStaticF_Null(::GlobalNamespace::OVRTriangleMesh value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRTriangleMesh, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get>(
      std::forward<::GlobalNamespace::OVRTriangleMesh>(value));
}
inline ::GlobalNamespace::OVRTriangleMesh GlobalNamespace::OVRTriangleMesh::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTriangleMesh, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get>();
}
inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType GlobalNamespace::OVRTriangleMesh::IOVRAnchorComponent_OVRTriangleMesh__get_Type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(),
                                                                             "IOVRAnchorComponent<OVRTriangleMesh>.get_Type", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPlugin__SpaceComponentType, false>(this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRTriangleMesh::IOVRAnchorComponent_OVRTriangleMesh__get_Handle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(),
                                                                             "IOVRAnchorComponent<OVRTriangleMesh>.get_Handle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTriangleMesh GlobalNamespace::OVRTriangleMesh::IOVRAnchorComponent_OVRTriangleMesh__FromAnchor(::GlobalNamespace::OVRAnchor anchor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "IOVRAnchorComponent<OVRTriangleMesh>.FromAnchor",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTriangleMesh, false>(this, ___internal_method, anchor);
}
inline bool GlobalNamespace::OVRTriangleMesh::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "get_IsNull",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRTriangleMesh::get_IsEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "get_IsEnabled",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRTriangleMesh::IOVRAnchorComponent_OVRTriangleMesh__SetEnabledAsync(bool enabled, double_t timeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "IOVRAnchorComponent<OVRTriangleMesh>.SetEnabledAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>, false>(this, ___internal_method, enabled, timeout);
}
inline bool GlobalNamespace::OVRTriangleMesh::Equals(::GlobalNamespace::OVRTriangleMesh other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTriangleMesh>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRTriangleMesh::op_Equality(::GlobalNamespace::OVRTriangleMesh lhs, ::GlobalNamespace::OVRTriangleMesh rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "op_Equality", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTriangleMesh>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTriangleMesh>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRTriangleMesh::op_Inequality(::GlobalNamespace::OVRTriangleMesh lhs, ::GlobalNamespace::OVRTriangleMesh rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "op_Inequality", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTriangleMesh>::get(),
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
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPlugin__SpaceComponentType, false>(this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRTriangleMesh::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "get_Handle",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTriangleMesh::_ctor(::GlobalNamespace::OVRAnchor anchor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchor);
}
inline bool GlobalNamespace::OVRTriangleMesh::TryGetCounts(ByRef<int32_t> vertexCount, ByRef<int32_t> triangleCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "TryGetCounts", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, vertexCount, triangleCount);
}
inline bool GlobalNamespace::OVRTriangleMesh::TryGetMeshRawUntransformed(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> positions, ::Unity::Collections::NativeArray_1<int32_t> indices) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "TryGetMeshRawUntransformed", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, positions, indices);
}
inline bool GlobalNamespace::OVRTriangleMesh::TryGetMesh(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> positions, ::Unity::Collections::NativeArray_1<int32_t> indices) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "TryGetMesh", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, positions, indices);
}
/// @param dependencies: ::Unity::Jobs::JobHandle (default: {})
inline ::Unity::Jobs::JobHandle GlobalNamespace::OVRTriangleMesh::ScheduleGetMeshJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> positions,
                                                                                     ::Unity::Collections::NativeArray_1<int32_t> indices, ::Unity::Jobs::JobHandle dependencies) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTriangleMesh>::get(), "ScheduleGetMeshJob", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>::get(),
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
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
