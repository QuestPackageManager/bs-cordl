#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/ComputeRayTracingAccelStruct.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__MeshBuildInfo_impl.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__TopLevelAccelStruct_impl.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__Transform_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BlockAllocator_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BuildFlags_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__ComputeRayTracingAccelStruct_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__BuildFlags_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__RadeonRaysAPI_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__Transform_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__AccelerationStructureOptions_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BLASPositionsPool_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BlockAllocator_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BuildFlags_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__ComputeRayTracingAccelStruct_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__IRayTracingAccelStruct_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__IRayTracingShader_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__MeshInstanceDesc_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__RayTracingResources_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__ReferenceCounter_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "v0", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "v1", ty: "::Unity::Mathematics::float3",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "v2", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_Triangle::ComputeRayTracingAccelStruct_Triangle(::Unity::Mathematics::float3 v0, ::Unity::Mathematics::float3 v1,
                                                                                                                                    ::Unity::Mathematics::float3 v2) noexcept {
  this->v0 = v0;
  this->v1 = v1;
  this->v2 = v2;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_Triangle::ComputeRayTracingAccelStruct_Triangle() {}
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e0be9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::ValueTuple_2<int32_t, int32_t>& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_get_geomKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___geomKey;
}
constexpr ::System::ValueTuple_2<int32_t, int32_t> const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_get_geomKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___geomKey;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_set_geomKey(::System::ValueTuple_2<int32_t, int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___geomKey = value;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*&
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_get_blas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blas;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas* const&
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_get_blas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blas;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_set_blas(
    ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blas = value;
}
constexpr uint32_t& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_get_instanceMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instanceMask;
}
constexpr uint32_t const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_get_instanceMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instanceMask;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_set_instanceMask(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___instanceMask = value;
}
constexpr bool& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_get_triangleCullingEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___triangleCullingEnabled;
}
constexpr bool const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_get_triangleCullingEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___triangleCullingEnabled;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_set_triangleCullingEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___triangleCullingEnabled = value;
}
constexpr bool& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_get_invertTriangleCulling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invertTriangleCulling;
}
constexpr bool const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_get_invertTriangleCulling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invertTriangleCulling;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_set_invertTriangleCulling(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___invertTriangleCulling = value;
}
constexpr uint32_t& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_get_userInstanceID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userInstanceID;
}
constexpr uint32_t const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_get_userInstanceID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userInstanceID;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_set_userInstanceID(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___userInstanceID = value;
}
constexpr bool& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_get_opaqueGeometry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opaqueGeometry;
}
constexpr bool const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_get_opaqueGeometry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opaqueGeometry;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_set_opaqueGeometry(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___opaqueGeometry = value;
}
constexpr ::UnityEngine::Rendering::RadeonRays::Transform& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_get_localToWorldTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localToWorldTransform;
}
constexpr ::UnityEngine::Rendering::RadeonRays::Transform const&
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_get_localToWorldTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localToWorldTransform;
}
constexpr void
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::__cordl_internal_set_localToWorldTransform(::UnityEngine::Rendering::RadeonRays::Transform value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localToWorldTransform = value;
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance*
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance::ComputeRayTracingAccelStruct_RadeonRaysInstance() {}
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas.IncRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::IncRef)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e0bea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*>(), { "IncRef", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas.DecRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::DecRef)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e0beb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*>(), { "DecRef", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas.IsUnreferenced
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::IsUnreferenced)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e0bec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*>(), { "IsUnreferenced", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e0bed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RadeonRays::MeshBuildInfo& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::__cordl_internal_get_buildInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buildInfo;
}
constexpr ::UnityEngine::Rendering::RadeonRays::MeshBuildInfo const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::__cordl_internal_get_buildInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buildInfo;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::__cordl_internal_set_buildInfo(::UnityEngine::Rendering::RadeonRays::MeshBuildInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buildInfo = value;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::__cordl_internal_get_bvhAlloc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bvhAlloc;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation const&
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::__cordl_internal_get_bvhAlloc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bvhAlloc;
}
constexpr void
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::__cordl_internal_set_bvhAlloc(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bvhAlloc = value;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation&
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::__cordl_internal_get_bvhLeavesAlloc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bvhLeavesAlloc;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation const&
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::__cordl_internal_get_bvhLeavesAlloc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bvhLeavesAlloc;
}
constexpr void
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::__cordl_internal_set_bvhLeavesAlloc(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bvhLeavesAlloc = value;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation&
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::__cordl_internal_get_blasVertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blasVertices;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation const&
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::__cordl_internal_get_blasVertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blasVertices;
}
constexpr void
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::__cordl_internal_set_blasVertices(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blasVertices = value;
}
constexpr bool& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::__cordl_internal_get_bvhBuilt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bvhBuilt;
}
constexpr bool const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::__cordl_internal_get_bvhBuilt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bvhBuilt;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::__cordl_internal_set_bvhBuilt(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bvhBuilt = value;
}
constexpr uint32_t& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::__cordl_internal_get_refCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refCount;
}
constexpr uint32_t const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::__cordl_internal_get_refCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refCount;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::__cordl_internal_set_refCount(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___refCount = value;
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::IncRef() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*>(), { "IncRef", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::DecRef() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*>(), { "DecRef", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::IsUnreferenced() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*>(), { "IsUnreferenced", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas* UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas::ComputeRayTracingAccelStruct_MeshBlas() {}
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)(
    ::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions*, ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*,
    ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*, int32_t)>(&::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::_ctor)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x6e092e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.get_topLevelBvhBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::get_topLevelBvhBuffer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e0960c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(), { "get_topLevelBvhBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.get_bottomLevelBvhBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::get_bottomLevelBvhBuffer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e09674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(), { "get_bottomLevelBvhBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.get_instanceInfoBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::get_instanceInfoBuffer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e096dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(), { "get_instanceInfoBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::Dispose)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6e09744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.AddInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)(
    ::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc)>(&::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::AddInstance)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6e09928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                             { "AddInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.RemoveInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)(int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::RemoveInstance)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6e09d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(), { "RemoveInstance", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.ClearInstances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::ClearInstances)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6e09f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(), { "ClearInstances", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.UpdateInstanceTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)(int32_t, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::UpdateInstanceTransform)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6e0a1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                             { "UpdateInstanceTransform", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.UpdateInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)(int32_t, uint32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::UpdateInstanceID)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e0a25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                                                           { "UpdateInstanceID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.UpdateInstanceMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)(int32_t, uint32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::UpdateInstanceMask)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e0a2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                                                           { "UpdateInstanceMask", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::Build)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e0a354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                             { "Build", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.GetBuildScratchBufferRequiredSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::GetBuildScratchBufferRequiredSizeInBytes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e0a3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(), { "GetBuildScratchBufferRequiredSizeInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.FreeTopLevelAccelStruct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::FreeTopLevelAccelStruct)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6e09c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(), { "FreeTopLevelAccelStruct", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.GetOrAllocateMeshBlas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas* (
    ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)(::UnityEngine::Mesh*, int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::GetOrAllocateMeshBlas)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6e09ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                                                           { "GetOrAllocateMeshBlas", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.AllocateBlas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)(
    ::UnityEngine::Mesh*, int32_t, ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::AllocateBlas)> {
  constexpr static std::size_t size = 0x598;
  constexpr static std::size_t addrs = 0x6e0a5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                             { "AllocateBlas",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.LoadIndexBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)(::UnityEngine::Mesh*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::LoadIndexBuffer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e0ac18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                                                           { "LoadIndexBuffer", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.LoadPositionBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)(::UnityEngine::Mesh*, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
        &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::LoadPositionBuffer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e0ab80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                { "LoadPositionBuffer", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.DeleteMeshBlas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)(
    ::System::ValueTuple_2<int32_t, int32_t>, ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::DeleteMeshBlas)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6e09e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                             { "DeleteMeshBlas",
                                                               {},
                                                               { ::i2c::type_of<::System::ValueTuple_2<int32_t, int32_t>>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.GetBvhBuildScratchBufferSizeInDwords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::GetBvhBuildScratchBufferSizeInDwords)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6e0a424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(), { "GetBvhBuildScratchBufferSizeInDwords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.CreateBvh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::CreateBvh)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6e0a3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                             { "CreateBvh", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.BuildMissingBottomLevelAccelStructs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::BuildMissingBottomLevelAccelStructs)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6e0b010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                            { "BuildMissingBottomLevelAccelStructs", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.BuildTopLevelAccelStruct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::BuildTopLevelAccelStruct)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x6e0b204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                { "BuildTopLevelAccelStruct", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.ConvertFlagsToGpuBuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RadeonRays::BuildFlags (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)(
    ::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags)>(&::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::ConvertFlagsToGpuBuild)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e0ac30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                             { "ConvertFlagsToGpuBuild", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::StringW, ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::Bind)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x6e0b5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                                                           { "Bind",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::StringW, ::UnityEngine::ComputeShader*, int32_t)>(&::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::Bind)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6e0b974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
            { "Bind", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.ConvertTranform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RadeonRays::Transform (*)(::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::ConvertTranform)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e09d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                                                           { "ConvertTranform", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.ConvertTranform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Rendering::RadeonRays::Transform)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::ConvertTranform)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6e0bb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                                                           { "ConvertTranform", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::Transform>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.GetFaceIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::System::Collections::Generic::List_1<int32_t>*, int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::GetFaceIndices)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6e0bc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                             { "GetFaceIndices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.GetTriangle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_Triangle (*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::Unity::Mathematics::int3)>(&::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::GetTriangle)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6e0bcc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                         { "GetTriangle", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.AllocateBlasInternalNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation (
    ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)(int32_t)>(&::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::AllocateBlasInternalNodes)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6e0ac40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                                                           { "AllocateBlasInternalNodes", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.AllocateBlasLeafNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation (
    ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)(int32_t)>(&::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::AllocateBlasLeafNodes)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6e0ae28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                                                           { "AllocateBlasLeafNodes", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.NewHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::NewHandle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e09c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(), { "NewHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.ReleaseHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)(int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::ReleaseHandle)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e09e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(), { "ReleaseHandle", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct.CheckInstanceHandleIsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::*)(int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::CheckInstanceHandleIsValid)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6e0bda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                                                           { "CheckInstanceHandleIsValid", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr uint32_t& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_HandleObfuscation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HandleObfuscation;
}
constexpr uint32_t const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_HandleObfuscation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HandleObfuscation;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_set_m_HandleObfuscation(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HandleObfuscation = value;
}
constexpr ::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_RadeonRaysAPI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RadeonRaysAPI;
}
constexpr ::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI* const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_RadeonRaysAPI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RadeonRaysAPI;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_set_m_RadeonRaysAPI(::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RadeonRaysAPI = value;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_BuildFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BuildFlags;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_BuildFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BuildFlags;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_set_m_BuildFlags(::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BuildFlags = value;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_Counter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Counter;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_Counter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Counter;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_set_m_Counter(::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Counter = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t, int32_t>, ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*>*&
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_Blases() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Blases;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t, int32_t>, ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*>* const&
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_Blases() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Blases;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_set_m_Blases(
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t, int32_t>, ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Blases = value;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_BlasAllocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlasAllocator;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_BlasAllocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlasAllocator;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_set_m_BlasAllocator(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlasAllocator = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_BlasBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlasBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_BlasBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlasBuffer;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_set_m_BlasBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlasBuffer = value;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_BlasLeavesAllocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlasLeavesAllocator;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator const&
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_BlasLeavesAllocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlasLeavesAllocator;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_set_m_BlasLeavesAllocator(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlasLeavesAllocator = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_BlasLeavesBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlasLeavesBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_BlasLeavesBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlasLeavesBuffer;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_set_m_BlasLeavesBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlasLeavesBuffer = value;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool*& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_BlasPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlasPositions;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool* const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_BlasPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlasPositions;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_set_m_BlasPositions(::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlasPositions = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct>&
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_TopLevelAccelStruct() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TopLevelAccelStruct;
}
constexpr ::System::Nullable_1<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct> const&
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_TopLevelAccelStruct() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TopLevelAccelStruct;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_set_m_TopLevelAccelStruct(
    ::System::Nullable_1<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TopLevelAccelStruct = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_CopyShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyShader;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_CopyShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyShader;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_set_m_CopyShader(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CopyShader = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance*>*&
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_RadeonInstances() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RadeonInstances;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance*>* const&
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_RadeonInstances() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RadeonInstances;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_set_m_RadeonInstances(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RadeonInstances = value;
}
constexpr ::System::Collections::Generic::Queue_1<uint32_t>*& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_FreeHandles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeHandles;
}
constexpr ::System::Collections::Generic::Queue_1<uint32_t>* const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_get_m_FreeHandles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeHandles;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::__cordl_internal_set_m_FreeHandles(::System::Collections::Generic::Queue_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FreeHandles = value;
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::_ctor(::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions* options,
                                                                                           ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* resources,
                                                                                           ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* counter, int32_t blasBufferInitialSizeBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, resources, counter, blasBufferInitialSizeBytes);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::get_topLevelBvhBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(), { "get_topLevelBvhBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::get_bottomLevelBvhBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(), { "get_bottomLevelBvhBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::get_instanceInfoBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(), { "get_instanceInfoBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::AddInstance(::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc meshInstance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                                                         { "AddInstance", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, meshInstance);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::RemoveInstance(int32_t instanceHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(), { "RemoveInstance", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceHandle);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::ClearInstances() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(), { "ClearInstances", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::UpdateInstanceTransform(int32_t instanceHandle, ::UnityEngine::Matrix4x4 localToWorldMatrix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                           { "UpdateInstanceTransform", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceHandle, localToWorldMatrix);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::UpdateInstanceID(int32_t instanceHandle, uint32_t instanceID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                                                         { "UpdateInstanceID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceHandle, instanceID);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::UpdateInstanceMask(int32_t instanceHandle, uint32_t mask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                                                         { "UpdateInstanceMask", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceHandle, mask);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::Build(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratchBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                           { "Build", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, scratchBuffer);
}
inline uint64_t UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::GetBuildScratchBufferRequiredSizeInBytes() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(), { "GetBuildScratchBufferRequiredSizeInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::FreeTopLevelAccelStruct() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(), { "FreeTopLevelAccelStruct", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::GetOrAllocateMeshBlas(::UnityEngine::Mesh* mesh, int32_t subMeshIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                                                         { "GetOrAllocateMeshBlas", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*>(this, ___internal_method, mesh, subMeshIndex);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::AllocateBlas(::UnityEngine::Mesh* mesh, int32_t submeshIndex,
                                                                                                  ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas* blas) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                           { "AllocateBlas",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, submeshIndex, blas);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::LoadIndexBuffer(::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                                                         { "LoadIndexBuffer", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method, mesh);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::LoadPositionBuffer(::UnityEngine::Mesh* mesh, ::by_ref<int32_t> stride,
                                                                                                                                  ::by_ref<int32_t> offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                              { "LoadPositionBuffer", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method, mesh, stride, offset);
}
inline void
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::DeleteMeshBlas(/* [TupleElementNames(new[] { "mesh", "subMeshIndex" })] */ ::System::ValueTuple_2<int32_t, int32_t> geomKey,
                                                                                        ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas* blas) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                          { "DeleteMeshBlas",
                            {},
                            { ::i2c::type_of<::System::ValueTuple_2<int32_t, int32_t>>(), ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, geomKey, blas);
}
inline uint64_t UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::GetBvhBuildScratchBufferSizeInDwords() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(), { "GetBvhBuildScratchBufferSizeInDwords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::CreateBvh(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratchBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                           { "CreateBvh", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, scratchBuffer);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::BuildMissingBottomLevelAccelStructs(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                                         ::UnityEngine::GraphicsBuffer* scratchBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                          { "BuildMissingBottomLevelAccelStructs", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, scratchBuffer);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::BuildTopLevelAccelStruct(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                              ::UnityEngine::GraphicsBuffer* scratchBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                              { "BuildTopLevelAccelStruct", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, scratchBuffer);
}
inline ::UnityEngine::Rendering::RadeonRays::BuildFlags
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::ConvertFlagsToGpuBuild(::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                           { "ConvertFlagsToGpuBuild", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RadeonRays::BuildFlags>(this, ___internal_method, flags);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::Bind(::UnityEngine::Rendering::CommandBuffer* cmd, ::StringW name,
                                                                                          ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader* shader) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                                                         { "Bind",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, name, shader);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::Bind(::UnityEngine::Rendering::CommandBuffer* cmd, ::StringW name, ::UnityEngine::ComputeShader* shader,
                                                                                          int32_t kernelIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
          { "Bind", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, name, shader, kernelIndex);
}
inline ::UnityEngine::Rendering::RadeonRays::Transform UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::ConvertTranform(::UnityEngine::Matrix4x4 input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                                                         { "ConvertTranform", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RadeonRays::Transform>(nullptr, ___internal_method, input);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::ConvertTranform(::UnityEngine::Rendering::RadeonRays::Transform input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                                                         { "ConvertTranform", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::Transform>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, input);
}
inline ::Unity::Mathematics::int3 UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::GetFaceIndices(::System::Collections::Generic::List_1<int32_t>* indices,
                                                                                                                          int32_t triangleIdx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                           { "GetFaceIndices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, indices, triangleIdx);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_Triangle
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::GetTriangle(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices, ::Unity::Mathematics::int3 idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                       { "GetTriangle", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::Unity::Mathematics::int3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_Triangle>(nullptr, ___internal_method, vertices, idx);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::AllocateBlasInternalNodes(int32_t allocationNodeCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                                                         { "AllocateBlasInternalNodes", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>(this, ___internal_method, allocationNodeCount);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::AllocateBlasLeafNodes(int32_t allocationNodeCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(), { "AllocateBlasLeafNodes", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>(this, ___internal_method, allocationNodeCount);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::NewHandle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(), { "NewHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::ReleaseHandle(int32_t handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(), { "ReleaseHandle", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::CheckInstanceHandleIsValid(int32_t instanceHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(),
                                                                                         { "CheckInstanceHandleIsValid", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceHandle);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::New_ctor(::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions* options,
                                                                                  ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* resources,
                                                                                  ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* counter, int32_t blasBufferInitialSizeBytes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*>(options, resources, counter, blasBufferInitialSizeBytes));
}
/// @brief Convert operator to "::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct"
constexpr UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::operator ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*() noexcept {
  return static_cast<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct"
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::i___UnityEngine__Rendering__UnifiedRayTracing__IRayTracingAccelStruct() noexcept {
  return static_cast<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct::ComputeRayTracingAccelStruct() {}
