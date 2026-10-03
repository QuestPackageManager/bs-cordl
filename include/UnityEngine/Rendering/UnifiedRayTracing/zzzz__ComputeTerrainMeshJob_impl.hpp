#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/ComputeTerrainMeshJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__ComputeTerrainMeshJob_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob.DisposeArrays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob::DisposeArrays)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6e07804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob>(), { "DisposeArrays", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob::*)(int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob::Execute)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6e078ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob.CalculateTerrainNormal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Unity::Mathematics::float3 (*)(::Unity::Collections::NativeArray_1<float_t>, int32_t, int32_t, int32_t, int32_t, ::Unity::Mathematics::float3)>(
        &::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob::CalculateTerrainNormal)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x6e07a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob>(),
                                                             { "CalculateTerrainNormal",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob.SampleHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t, int32_t, int32_t, int32_t, ::Unity::Collections::NativeArray_1<float_t>, float_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob::SampleHeight)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6e07c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob>(),
                                                             { "SampleHeight",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob::DisposeArrays() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob>(), { "DisposeArrays", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline ::Unity::Mathematics::float3 UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob::CalculateTerrainNormal(::Unity::Collections::NativeArray_1<float_t> heightmap, int32_t x,
                                                                                                                             int32_t y, int32_t width, int32_t height,
                                                                                                                             ::Unity::Mathematics::float3 scale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob>(),
                                                           { "CalculateTerrainNormal",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, heightmap, x, y, width, height, scale);
}
inline float_t UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob::SampleHeight(int32_t x, int32_t y, int32_t width, int32_t height,
                                                                                              ::Unity::Collections::NativeArray_1<float_t> heightmap, float_t scale) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob>(),
                                                                                         { "SampleHeight",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x, y, width, height, heightmap, scale);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "heightmap", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "holes", ty:
// "::Unity::Collections::NativeArray_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "heightmapScale", ty: "::Unity::Mathematics::float3", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "positions", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam {
// name: "uvs", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "normals", ty:
// "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "indices", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob::ComputeTerrainMeshJob(
    ::Unity::Collections::NativeArray_1<float_t> heightmap, ::Unity::Collections::NativeArray_1<bool> holes, int32_t width, int32_t height, ::Unity::Mathematics::float3 heightmapScale,
    ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> positions, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> uvs,
    ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> normals, ::Unity::Collections::NativeArray_1<int32_t> indices) noexcept {
  this->heightmap = heightmap;
  this->holes = holes;
  this->width = width;
  this->height = height;
  this->heightmapScale = heightmapScale;
  this->positions = positions;
  this->uvs = uvs;
  this->normals = normals;
  this->indices = indices;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob::ComputeTerrainMeshJob() {}
