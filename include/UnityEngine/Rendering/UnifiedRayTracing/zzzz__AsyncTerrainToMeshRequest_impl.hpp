#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/AsyncTerrainToMeshRequest.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__ComputeTerrainMeshJob_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__AsyncTerrainToMeshRequest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__ComputeTerrainMeshJob_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest::*)(
    ::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob, ::Unity::Jobs::JobHandle)>(&::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6e06e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest>(),
                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest.get_done
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest::get_done)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e0748c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest>(), { "get_done", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest.GetMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest::GetMesh)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6e0725c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest>(), { "GetMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest.WaitForCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest::WaitForCompletion)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6e07214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest>(), { "WaitForCompletion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest.TriangleIndicesWithoutHoles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest::TriangleIndicesWithoutHoles)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x6e074c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest>(), { "TriangleIndicesWithoutHoles", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest::_ctor(::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob job, ::Unity::Jobs::JobHandle jobHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, job, jobHandle);
}
inline bool UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest::get_done() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest>(), { "get_done", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest::GetMesh() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest>(), { "GetMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest::WaitForCompletion() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest>(), { "WaitForCompletion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest::TriangleIndicesWithoutHoles() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest>(), { "TriangleIndicesWithoutHoles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_JobHandle", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Job", ty:
// "::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest::AsyncTerrainToMeshRequest(::Unity::Jobs::JobHandle m_JobHandle,
                                                                                                            ::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob m_Job) noexcept {
  this->m_JobHandle = m_JobHandle;
  this->m_Job = m_Job;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest::AsyncTerrainToMeshRequest() {}
