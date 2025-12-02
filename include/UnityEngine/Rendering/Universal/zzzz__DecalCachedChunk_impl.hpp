#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalCachedChunk.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "Unity/Mathematics/zzzz__float4x4_impl.hpp"
#include "Unity/Mathematics/zzzz__quaternion_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalChunk_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScaleMode_impl.hpp"
#include "UnityEngine/zzzz__BoundingSphere_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCachedChunk_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCachedChunk.RemoveAtSwapBack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCachedChunk::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::DecalCachedChunk::RemoveAtSwapBack)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x663ebe4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCachedChunk*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCachedChunk*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCachedChunk.SetCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCachedChunk::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::DecalCachedChunk::SetCapacity)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x663eee0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCachedChunk*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCachedChunk*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCachedChunk.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCachedChunk::*)()>(
    &::UnityEngine::Rendering::Universal::DecalCachedChunk::Dispose)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x663f164;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCachedChunk*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCachedChunk*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCachedChunk._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCachedChunk::*)()>(
    &::UnityEngine::Rendering::Universal::DecalCachedChunk::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x663d2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCachedChunk*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::MaterialPropertyBlock*& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_propertyBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_propertyBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyBlock;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_propertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___propertyBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_passIndexDBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndexDBuffer;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_passIndexDBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndexDBuffer;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_passIndexDBuffer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___passIndexDBuffer = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_passIndexEmissive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndexEmissive;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_passIndexEmissive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndexEmissive;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_passIndexEmissive(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___passIndexEmissive = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_passIndexScreenSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndexScreenSpace;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_passIndexScreenSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndexScreenSpace;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_passIndexScreenSpace(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___passIndexScreenSpace = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_passIndexGBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndexGBuffer;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_passIndexGBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndexGBuffer;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_passIndexGBuffer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___passIndexGBuffer = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_drawOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawOrder;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_drawOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawOrder;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_drawOrder(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___drawOrder = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_isCreated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCreated;
}
constexpr bool const& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_isCreated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCreated;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_isCreated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isCreated = value;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_decalToWorlds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decalToWorlds;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> const& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_decalToWorlds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decalToWorlds;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_decalToWorlds(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decalToWorlds = value;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_normalToWorlds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalToWorlds;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> const& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_normalToWorlds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalToWorlds;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_normalToWorlds(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___normalToWorlds = value;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_sizeOffsets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sizeOffsets;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> const& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_sizeOffsets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sizeOffsets;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_sizeOffsets(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sizeOffsets = value;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_drawDistances() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawDistances;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> const& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_drawDistances() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawDistances;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_drawDistances(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___drawDistances = value;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_angleFades() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___angleFades;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> const& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_angleFades() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___angleFades;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_angleFades(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___angleFades = value;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_uvScaleBias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uvScaleBias;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4> const& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_uvScaleBias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uvScaleBias;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_uvScaleBias(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uvScaleBias = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_layerMasks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerMasks;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_layerMasks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerMasks;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_layerMasks(::Unity::Collections::NativeArray_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layerMasks = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint64_t>& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_sceneLayerMasks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneLayerMasks;
}
constexpr ::Unity::Collections::NativeArray_1<uint64_t> const& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_sceneLayerMasks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneLayerMasks;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_sceneLayerMasks(::Unity::Collections::NativeArray_1<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sceneLayerMasks = value;
}
constexpr ::Unity::Collections::NativeArray_1<float_t>& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_fadeFactors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeFactors;
}
constexpr ::Unity::Collections::NativeArray_1<float_t> const& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_fadeFactors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeFactors;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_fadeFactors(::Unity::Collections::NativeArray_1<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fadeFactors = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere>& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_boundingSpheres() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundingSpheres;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere> const& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_boundingSpheres() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundingSpheres;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_boundingSpheres(::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___boundingSpheres = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalScaleMode>& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_scaleModes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleModes;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalScaleMode> const& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_scaleModes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleModes;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_scaleModes(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalScaleMode> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scaleModes = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint32_t>& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_renderingLayerMasks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingLayerMasks;
}
constexpr ::Unity::Collections::NativeArray_1<uint32_t> const& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_renderingLayerMasks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingLayerMasks;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_renderingLayerMasks(::Unity::Collections::NativeArray_1<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderingLayerMasks = value;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_positions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positions;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> const& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_positions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positions;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_positions(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___positions = value;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::quaternion>& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_rotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::quaternion> const& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_rotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_rotation(::Unity::Collections::NativeArray_1<::Unity::Mathematics::quaternion> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotation = value;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_scales() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scales;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> const& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_scales() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scales;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_scales(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scales = value;
}
constexpr ::Unity::Collections::NativeArray_1<bool>& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_dirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirty;
}
constexpr ::Unity::Collections::NativeArray_1<bool> const& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_dirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirty;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_dirty(::Unity::Collections::NativeArray_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dirty = value;
}
constexpr ::ArrayW<::UnityEngine::BoundingSphere, ::Array<::UnityEngine::BoundingSphere>*>& UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_boundingSphereArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundingSphereArray;
}
constexpr ::ArrayW<::UnityEngine::BoundingSphere, ::Array<::UnityEngine::BoundingSphere>*> const&
UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_get_boundingSphereArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundingSphereArray;
}
constexpr void UnityEngine::Rendering::Universal::DecalCachedChunk::__cordl_internal_set_boundingSphereArray(::ArrayW<::UnityEngine::BoundingSphere, ::Array<::UnityEngine::BoundingSphere>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___boundingSphereArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::DecalCachedChunk::RemoveAtSwapBack(int32_t entityIndex) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCachedChunk*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entityIndex);
}
inline void UnityEngine::Rendering::Universal::DecalCachedChunk::SetCapacity(int32_t newCapacity) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCachedChunk*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newCapacity);
}
inline void UnityEngine::Rendering::Universal::DecalCachedChunk::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCachedChunk*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalCachedChunk::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCachedChunk*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalCachedChunk* UnityEngine::Rendering::Universal::DecalCachedChunk::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DecalCachedChunk*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalCachedChunk::DecalCachedChunk() {}
