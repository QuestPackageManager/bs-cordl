#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/GeometryPoolDesc.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeometryPoolDesc_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc.NewDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc (*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc::NewDefault)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6dff5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc>(), { "NewDefault", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc::NewDefault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc>(), { "NewDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "vertexPoolByteSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "indexPoolByteSize", ty: "int32_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "meshChunkTablesByteSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc::GeometryPoolDesc(int32_t vertexPoolByteSize, int32_t indexPoolByteSize, int32_t meshChunkTablesByteSize) noexcept {
  this->vertexPoolByteSize = vertexPoolByteSize;
  this->indexPoolByteSize = indexPoolByteSize;
  this->meshChunkTablesByteSize = meshChunkTablesByteSize;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc::GeometryPoolDesc() {}
