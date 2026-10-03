#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/TerrainToMesh.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__TerrainToMesh_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__AsyncTerrainToMeshRequest_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh.MakeAsyncTerrainToMeshRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest (*)(
    int32_t, int32_t, ::UnityEngine::Vector3, ::System::Object*, ::System::Object*)>(&::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh::MakeAsyncTerrainToMeshRequest)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x6e06a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh*>(),
                                                                                           { "MakeAsyncTerrainToMeshRequest",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh.ConvertAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest (*)(::UnityEngine::Terrain*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh::ConvertAsync)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6e06e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh*>(), { "ConvertAsync", {}, { ::i2c::type_of<::UnityEngine::Terrain*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh.ConvertAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest (*)(
    int32_t, int32_t, ::ArrayW<int16_t>, ::UnityEngine::Vector3, int32_t, int32_t, ::ArrayW<uint8_t>)>(&::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh::ConvertAsync)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x6e06f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh*>(),
                                                             { "ConvertAsync",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::UnityEngine::Terrain*)>(&::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh::Convert)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e00d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh*>(), { "Convert", {}, { ::i2c::type_of<::UnityEngine::Terrain*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t, int32_t, ::ArrayW<int16_t>, ::UnityEngine::Vector3, int32_t, int32_t, ::ArrayW<uint8_t>)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh::Convert)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6e073c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh*>(),
                                                             { "Convert",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest
UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh::MakeAsyncTerrainToMeshRequest(int32_t width, int32_t height, ::UnityEngine::Vector3 heightmapScale, ::System::Object* heightmap,
                                                                                        ::System::Object* holes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh*>(),
                                                                                         { "MakeAsyncTerrainToMeshRequest",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                             ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest>(nullptr, ___internal_method, width, height, heightmapScale, heightmap, holes);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh::ConvertAsync(::UnityEngine::Terrain* terrain) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh*>(), { "ConvertAsync", {}, { ::i2c::type_of<::UnityEngine::Terrain*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest>(nullptr, ___internal_method, terrain);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest
UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh::ConvertAsync(int32_t heightmapWidth, int32_t heightmapHeight, ::ArrayW<int16_t> heightmapData, ::UnityEngine::Vector3 heightmapScale,
                                                                       int32_t holeWidth, int32_t holeHeight, ::ArrayW<uint8_t> holedata) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh*>(),
                                                           { "ConvertAsync",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest>(nullptr, ___internal_method, heightmapWidth, heightmapHeight, heightmapData,
                                                                                                                     heightmapScale, holeWidth, holeHeight, holedata);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh::Convert(::UnityEngine::Terrain* terrain) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh*>(), { "Convert", {}, { ::i2c::type_of<::UnityEngine::Terrain*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, terrain);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh::Convert(int32_t heightmapWidth, int32_t heightmapHeight, ::ArrayW<int16_t> heightmapData,
                                                                                                       ::UnityEngine::Vector3 heightmapScale, int32_t holeWidth, int32_t holeHeight,
                                                                                                       ::ArrayW<uint8_t> holedata) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh*>(),
                                                           { "Convert",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, heightmapWidth, heightmapHeight, heightmapData, heightmapScale, holeWidth, holeHeight,
                                                                            holedata);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::TerrainToMesh::TerrainToMesh() {}
