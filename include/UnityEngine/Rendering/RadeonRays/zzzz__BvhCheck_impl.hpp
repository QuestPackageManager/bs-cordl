#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/BvhCheck.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__IndexFormat_impl.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__BvhCheck_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__uint3_def.hpp"
#include "Unity/Mathematics/zzzz__uint4_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__AABB_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__BottomLevelLevelAccelStruct_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__BvhCheck_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__BvhHeader_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__BvhNode_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__MeshBuildInfo_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::*)()>(
    &::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6dfacf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_get_vertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertices;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_get_vertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertices;
}
constexpr void UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_set_vertices(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vertices = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_get_indices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indices;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_get_indices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indices;
}
constexpr void UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_set_indices(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indices = value;
}
constexpr uint32_t& UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_get_vertexBufferOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertexBufferOffset;
}
constexpr uint32_t const& UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_get_vertexBufferOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertexBufferOffset;
}
constexpr void UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_set_vertexBufferOffset(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vertexBufferOffset = value;
}
constexpr uint32_t& UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_get_vertexCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertexCount;
}
constexpr uint32_t const& UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_get_vertexCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertexCount;
}
constexpr void UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_set_vertexCount(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vertexCount = value;
}
constexpr uint32_t& UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_get_vertexStride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertexStride;
}
constexpr uint32_t const& UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_get_vertexStride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertexStride;
}
constexpr void UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_set_vertexStride(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vertexStride = value;
}
constexpr uint32_t& UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_get_indexBufferOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexBufferOffset;
}
constexpr uint32_t const& UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_get_indexBufferOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexBufferOffset;
}
constexpr void UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_set_indexBufferOffset(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indexBufferOffset = value;
}
constexpr ::UnityEngine::Rendering::RadeonRays::IndexFormat& UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_get_indexFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexFormat;
}
constexpr ::UnityEngine::Rendering::RadeonRays::IndexFormat const& UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_get_indexFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexFormat;
}
constexpr void UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_set_indexFormat(::UnityEngine::Rendering::RadeonRays::IndexFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indexFormat = value;
}
constexpr uint32_t& UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_get_indexCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexCount;
}
constexpr uint32_t const& UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_get_indexCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexCount;
}
constexpr void UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::__cordl_internal_set_indexCount(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indexCount = value;
}
inline void UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers* UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers::BvhCheck_VertexBuffers() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU::*)()>(
    &::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6dfb714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t>& UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU::__cordl_internal_get_vertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertices;
}
constexpr ::ArrayW<float_t> const& UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU::__cordl_internal_get_vertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertices;
}
constexpr void UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU::__cordl_internal_set_vertices(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vertices = value;
}
constexpr ::ArrayW<uint32_t>& UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU::__cordl_internal_get_indices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indices;
}
constexpr ::ArrayW<uint32_t> const& UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU::__cordl_internal_get_indices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indices;
}
constexpr void UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU::__cordl_internal_set_indices(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indices = value;
}
constexpr uint32_t& UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU::__cordl_internal_get_vertexStride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertexStride;
}
constexpr uint32_t const& UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU::__cordl_internal_get_vertexStride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertexStride;
}
constexpr void UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU::__cordl_internal_set_vertexStride(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vertexStride = value;
}
inline void UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU* UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU::BvhCheck_VertexBuffersCPU() {}
// Ctor Parameters [CppParam { name: "v0", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "v1", ty: "::Unity::Mathematics::float3",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "v2", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RadeonRays::BvhCheck_Triangle::BvhCheck_Triangle(::Unity::Mathematics::float3 v0, ::Unity::Mathematics::float3 v1, ::Unity::Mathematics::float3 v2) noexcept {
  this->v0 = v0;
  this->v1 = v1;
  this->v2 = v2;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::BvhCheck_Triangle::BvhCheck_Triangle() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::BvhCheck.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers* (*)(::UnityEngine::Rendering::RadeonRays::MeshBuildInfo)>(
    &::UnityEngine::Rendering::RadeonRays::BvhCheck::Convert)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6dfac58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
                                                                                           { "Convert", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::MeshBuildInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::BvhCheck.SurfaceArea
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::UnityEngine::Rendering::RadeonRays::AABB*)>(&::UnityEngine::Rendering::RadeonRays::BvhCheck::SurfaceArea)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6dfacfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
                                                                                           { "SurfaceArea", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::AABB*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::BvhCheck.NodeSahCost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(uint32_t, ::UnityEngine::Rendering::RadeonRays::AABB*, ::UnityEngine::Rendering::RadeonRays::AABB*)>(
    &::UnityEngine::Rendering::RadeonRays::BvhCheck::NodeSahCost)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dfad40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
            { "NodeSahCost", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::AABB*>(), ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::AABB*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::BvhCheck.CheckConsistency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers*, ::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct,
                                                                    uint32_t)>(&::UnityEngine::Rendering::RadeonRays::BvhCheck::CheckConsistency)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6dfada4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
                                                             { "CheckConsistency",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::BvhCheck.CheckConsistency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::UnityEngine::GraphicsBuffer*, uint32_t, uint32_t)>(&::UnityEngine::Rendering::RadeonRays::BvhCheck::CheckConsistency)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6dfaeac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
                                                { "CheckConsistency", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::BvhCheck.CheckConsistency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers*, ::UnityEngine::GraphicsBuffer*, uint32_t,
                                                                    ::UnityEngine::GraphicsBuffer*, uint32_t, uint32_t)>(&::UnityEngine::Rendering::RadeonRays::BvhCheck::CheckConsistency)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6dfadc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
                                                { "CheckConsistency",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                    ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::BvhCheck.ExtractBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::RadeonRays::BvhCheck::ExtractBits)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6dfb218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
                                                             { "ExtractBits", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::BvhCheck.IsLeafNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t)>(&::UnityEngine::Rendering::RadeonRays::BvhCheck::IsLeafNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dfad90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(), { "IsLeafNode", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::BvhCheck.GetLeafNodeFirstPrim
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::UnityEngine::Rendering::RadeonRays::BvhCheck::GetLeafNodeFirstPrim)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dfb234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(), { "GetLeafNodeFirstPrim", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::BvhCheck.GetLeafNodePrimCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::UnityEngine::Rendering::RadeonRays::BvhCheck::GetLeafNodePrimCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6dfad98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(), { "GetLeafNodePrimCount", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::BvhCheck.CheckConsistency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers*, ::UnityEngine::GraphicsBuffer*, uint32_t,
                                                                    ::UnityEngine::GraphicsBuffer*, uint32_t, ::UnityEngine::Rendering::RadeonRays::BvhHeader, uint32_t)>(
    &::UnityEngine::Rendering::RadeonRays::BvhCheck::CheckConsistency)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x6dfaec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
                                                             { "CheckConsistency",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<uint32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BvhHeader>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::BvhCheck.GetFaceIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::ArrayW<uint32_t>, uint32_t)>(&::UnityEngine::Rendering::RadeonRays::BvhCheck::GetFaceIndices)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6dfb5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
                                                                                           { "GetFaceIndices", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::BvhCheck.GetVertex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::ArrayW<float_t>, uint32_t, uint32_t)>(&::UnityEngine::Rendering::RadeonRays::BvhCheck::GetVertex)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6dfb628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
                                                             { "GetVertex", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::BvhCheck.GetTriangle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RadeonRays::BvhCheck_Triangle (*)(::ArrayW<float_t>, uint32_t, ::Unity::Mathematics::uint3)>(
    &::UnityEngine::Rendering::RadeonRays::BvhCheck::GetTriangle)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6dfb67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
                                                { "GetTriangle", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::BvhCheck.DownloadVertexData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU* (*)(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers*)>(
    &::UnityEngine::Rendering::RadeonRays::BvhCheck::DownloadVertexData)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6dfb244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
                                                             { "DownloadVertexData", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::BvhCheck.GetAabb
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Rendering::RadeonRays::AABB* (*)(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU*, ::ArrayW<::UnityEngine::Rendering::RadeonRays::BvhNode>,
                                                                ::ArrayW<::Unity::Mathematics::uint4>, uint32_t, bool)>(&::UnityEngine::Rendering::RadeonRays::BvhCheck::GetAabb)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6dfb3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
                            { "GetAabb",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RadeonRays::BvhNode>>(),
                                ::i2c::type_of<::ArrayW<::Unity::Mathematics::uint4>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::BvhCheck._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::BvhCheck::*)()>(&::UnityEngine::Rendering::RadeonRays::BvhCheck::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6dfb718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers* UnityEngine::Rendering::RadeonRays::BvhCheck::Convert(::UnityEngine::Rendering::RadeonRays::MeshBuildInfo info) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
                                                                                         { "Convert", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::MeshBuildInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers*>(nullptr, ___internal_method, info);
}
inline double_t UnityEngine::Rendering::RadeonRays::BvhCheck::SurfaceArea(::UnityEngine::Rendering::RadeonRays::AABB* aabb) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(), { "SurfaceArea", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::AABB*>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, aabb);
}
inline double_t UnityEngine::Rendering::RadeonRays::BvhCheck::NodeSahCost(uint32_t nodeAddr, ::UnityEngine::Rendering::RadeonRays::AABB* nodeAabb,
                                                                          ::UnityEngine::Rendering::RadeonRays::AABB* parentAabb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
          { "NodeSahCost", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::AABB*>(), ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::AABB*>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, nodeAddr, nodeAabb, parentAabb);
}
inline double_t UnityEngine::Rendering::RadeonRays::BvhCheck::CheckConsistency(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers* bvhVertexBuffers,
                                                                               ::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct bvh, uint32_t primitiveCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
                                                           { "CheckConsistency",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, bvhVertexBuffers, bvh, primitiveCount);
}
inline double_t UnityEngine::Rendering::RadeonRays::BvhCheck::CheckConsistency(::UnityEngine::GraphicsBuffer* bvhBuffer, uint32_t bvhBufferOffset, uint32_t primitiveCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
                                                           { "CheckConsistency", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, bvhBuffer, bvhBufferOffset, primitiveCount);
}
inline double_t UnityEngine::Rendering::RadeonRays::BvhCheck::CheckConsistency(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers* bvhVertexBuffers, ::UnityEngine::GraphicsBuffer* bvhBuffer,
                                                                               uint32_t bvhBufferOffset, ::UnityEngine::GraphicsBuffer* bvhLeavesBuffer, uint32_t bvhLeavesBufferOffset,
                                                                               uint32_t primitiveCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
                                              { "CheckConsistency",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                  ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, bvhVertexBuffers, bvhBuffer, bvhBufferOffset, bvhLeavesBuffer, bvhLeavesBufferOffset, primitiveCount);
}
inline int32_t UnityEngine::Rendering::RadeonRays::BvhCheck::ExtractBits(uint32_t value, int32_t startBit, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
                                                                                         { "ExtractBits", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, startBit, count);
}
inline bool UnityEngine::Rendering::RadeonRays::BvhCheck::IsLeafNode(uint32_t nodeAddr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(), { "IsLeafNode", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nodeAddr);
}
inline uint32_t UnityEngine::Rendering::RadeonRays::BvhCheck::GetLeafNodeFirstPrim(uint32_t nodeAddr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(), { "GetLeafNodeFirstPrim", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, nodeAddr);
}
inline uint32_t UnityEngine::Rendering::RadeonRays::BvhCheck::GetLeafNodePrimCount(uint32_t nodeAddr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(), { "GetLeafNodePrimCount", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, nodeAddr);
}
inline double_t UnityEngine::Rendering::RadeonRays::BvhCheck::CheckConsistency(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers* bvhVertexBuffers, ::UnityEngine::GraphicsBuffer* bvhBuffer,
                                                                               uint32_t bvhBufferOffset, ::UnityEngine::GraphicsBuffer* bvhLeavesBuffer, uint32_t bvhLeavesBufferOffset,
                                                                               ::UnityEngine::Rendering::RadeonRays::BvhHeader header, uint32_t primitiveCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
                                                           { "CheckConsistency",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<uint32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BvhHeader>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, bvhVertexBuffers, bvhBuffer, bvhBufferOffset, bvhLeavesBuffer, bvhLeavesBufferOffset, header, primitiveCount);
}
inline ::Unity::Mathematics::uint3 UnityEngine::Rendering::RadeonRays::BvhCheck::GetFaceIndices(::ArrayW<uint32_t> indices, uint32_t triangleIdx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
                                                                                         { "GetFaceIndices", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, indices, triangleIdx);
}
inline ::Unity::Mathematics::float3 UnityEngine::Rendering::RadeonRays::BvhCheck::GetVertex(::ArrayW<float_t> vertices, uint32_t stride, uint32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
                                                           { "GetVertex", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, vertices, stride, idx);
}
inline ::UnityEngine::Rendering::RadeonRays::BvhCheck_Triangle UnityEngine::Rendering::RadeonRays::BvhCheck::GetTriangle(::ArrayW<float_t> vertices, uint32_t stride, ::Unity::Mathematics::uint3 idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
                                                           { "GetTriangle", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RadeonRays::BvhCheck_Triangle>(nullptr, ___internal_method, vertices, stride, idx);
}
inline ::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU*
UnityEngine::Rendering::RadeonRays::BvhCheck::DownloadVertexData(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers* vertexBuffers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
                                                           { "DownloadVertexData", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU*>(nullptr, ___internal_method, vertexBuffers);
}
inline ::UnityEngine::Rendering::RadeonRays::AABB* UnityEngine::Rendering::RadeonRays::BvhCheck::GetAabb(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU* bvhVertexBuffers,
                                                                                                         ::ArrayW<::UnityEngine::Rendering::RadeonRays::BvhNode> bvhNodes,
                                                                                                         ::ArrayW<::Unity::Mathematics::uint4> bvhLeafNodes, uint32_t nodeAddr, bool isTopLevel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(),
                          { "GetAabb",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RadeonRays::BvhNode>>(),
                              ::i2c::type_of<::ArrayW<::Unity::Mathematics::uint4>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RadeonRays::AABB*>(nullptr, ___internal_method, bvhVertexBuffers, bvhNodes, bvhLeafNodes, nodeAddr, isTopLevel);
}
inline void UnityEngine::Rendering::RadeonRays::BvhCheck::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::BvhCheck*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RadeonRays::BvhCheck* UnityEngine::Rendering::RadeonRays::BvhCheck::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RadeonRays::BvhCheck*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::BvhCheck::BvhCheck() {}
