#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_InputInterfaceTerrain.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputData_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterface_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterfaceTerrain_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterfaceTerrain_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::*)()>(
    &::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3a80a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__heightFieldName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightFieldName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__heightFieldName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightFieldName;
}
constexpr void HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_set__heightFieldName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____heightFieldName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__parentNodeID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentNodeID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__parentNodeID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentNodeID;
}
constexpr void HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_set__parentNodeID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parentNodeID = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__voxelSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____voxelSize;
}
constexpr float_t const& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__voxelSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____voxelSize;
}
constexpr void HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_set__voxelSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____voxelSize = value;
}
constexpr ::UnityW<::UnityEngine::Terrain>& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__terrain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrain;
}
constexpr ::UnityW<::UnityEngine::Terrain> const& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__terrain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrain;
}
constexpr void HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_set__terrain(::UnityW<::UnityEngine::Terrain> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____terrain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::TerrainData>& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__terrainData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainData;
}
constexpr ::UnityW<::UnityEngine::TerrainData> const& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__terrainData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainData;
}
constexpr void HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_set__terrainData(::UnityW<::UnityEngine::TerrainData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____terrainData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__numPointsX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numPointsX;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__numPointsX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numPointsX;
}
constexpr void HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_set__numPointsX(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numPointsX = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__numPointsY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numPointsY;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__numPointsY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numPointsY;
}
constexpr void HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_set__numPointsY(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numPointsY = value;
}
constexpr ::HoudiniEngineUnity::HAPI_Transform& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::HoudiniEngineUnity::HAPI_Transform const& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_set__transform(::HoudiniEngineUnity::HAPI_Transform value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transform = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__heightScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightScale;
}
constexpr float_t const& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__heightScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightScale;
}
constexpr void HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_set__heightScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____heightScale = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__heightfieldNodeID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightfieldNodeID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__heightfieldNodeID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightfieldNodeID;
}
constexpr void HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_set__heightfieldNodeID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____heightfieldNodeID = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__heightNodeID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightNodeID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__heightNodeID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightNodeID;
}
constexpr void HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_set__heightNodeID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____heightNodeID = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__maskNodeID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maskNodeID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__maskNodeID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maskNodeID;
}
constexpr void HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_set__maskNodeID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maskNodeID = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__mergeNodeID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mergeNodeID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_get__mergeNodeID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mergeNodeID;
}
constexpr void HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::__cordl_internal_set__mergeNodeID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mergeNodeID = value;
}
inline void HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain* HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*>());
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain::HEU_InputInterfaceTerrain_HEU_InputDataTerrain() {}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)()>(
    &::HoudiniEngineUnity::HEU_InputInterfaceTerrain::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a7e5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.CreateInputNodeWithDataUpload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ::UnityEngine::GameObject*, ::ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::CreateInputNodeWithDataUpload)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3a7e5fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.SetMaskLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*, ::ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>)>(
    &::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetMaskLayer)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x3a7fbe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetMaskLayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.IsThisInputObjectSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_InputInterfaceTerrain::IsThisInputObjectSupported)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3a7ff6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.CreateHeightFieldInputNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::CreateHeightFieldInputNode)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3a7ec20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "CreateHeightFieldInputNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.UploadHeightValuesWithTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*, ::ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>)>(
    &::HoudiniEngineUnity::HEU_InputInterfaceTerrain::UploadHeightValuesWithTransform)> {
  constexpr static std::size_t size = 0x7f0;
  constexpr static std::size_t addrs = 0x3a7ed5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "UploadHeightValuesWithTransform", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.UploadAlphaMaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*, ::ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>, ::ByRef<bool>)>(
    &::HoudiniEngineUnity::HEU_InputInterfaceTerrain::UploadAlphaMaps)> {
  constexpr static std::size_t size = 0x694;
  constexpr static std::size_t addrs = 0x3a7f54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "UploadAlphaMaps", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.SetHeightFieldData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::ArrayW<float_t, ::Array<float_t>*>, ::StringW, ::ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>)>(
    &::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetHeightFieldData)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x3a7fcfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetHeightFieldData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.SetTerrainDataAttributesToHeightField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::UnityEngine::TerrainData*)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTerrainDataAttributesToHeightField)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3a80458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetTerrainDataAttributesToHeightField",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.SetTerrainLayerAttributesToHeightField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::UnityEngine::TerrainLayer*)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTerrainLayerAttributesToHeightField)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3a8086c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetTerrainLayerAttributesToHeightField",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainLayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.SetTreePrototypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::UnityEngine::TerrainData*)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTreePrototypes)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x3a805d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetTreePrototypes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.SetTreeInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::UnityEngine::TerrainData*)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTreeInstances)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3a80a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetTreeInstances", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.GenerateTerrainDataFromGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain* (
    ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::GenerateTerrainDataFromGameObject)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x3a7e7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "GenerateTerrainDataFromGameObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::HEU_InputInterfaceTerrain::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceTerrain::CreateInputNodeWithDataUpload(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t connectNodeID, ::UnityEngine::GameObject* inputObject,
                                                                                         ::ByRef<int32_t> inputNodeID) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, connectNodeID, inputObject, inputNodeID);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetMaskLayer(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain* idt,
                                                                        ::ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> baseVolumeInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetMaskLayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, idt, baseVolumeInfo);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceTerrain::IsThisInputObjectSupported(::UnityEngine::GameObject* inputObject) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, inputObject);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceTerrain::CreateHeightFieldInputNode(::HoudiniEngineUnity::HEU_SessionBase* session,
                                                                                      ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain* idt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "CreateHeightFieldInputNode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, idt);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceTerrain::UploadHeightValuesWithTransform(::HoudiniEngineUnity::HEU_SessionBase* session,
                                                                                           ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain* idt,
                                                                                           ::ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> volumeInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "UploadHeightValuesWithTransform", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, idt, volumeInfo);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceTerrain::UploadAlphaMaps(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain* idt,
                                                                           ::ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> baseVolumeInfo, ::ByRef<bool> bMaskSet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "UploadAlphaMaps", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, idt, baseVolumeInfo, bMaskSet);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetHeightFieldData(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t volumeNodeID, int32_t partID,
                                                                              ::ArrayW<float_t, ::Array<float_t>*> heightValues, ::StringW heightFieldName,
                                                                              ::ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> baseVolumeInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetHeightFieldData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, volumeNodeID, partID, heightValues, heightFieldName, baseVolumeInfo);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTerrainDataAttributesToHeightField(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoNodeID, int32_t partID,
                                                                                                 ::UnityEngine::TerrainData* terrainData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetTerrainDataAttributesToHeightField",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, geoNodeID, partID, terrainData);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTerrainLayerAttributesToHeightField(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoNodeID, int32_t partID,
                                                                                                  ::UnityEngine::TerrainLayer* terrainLayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetTerrainLayerAttributesToHeightField",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainLayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, geoNodeID, partID, terrainLayer);
}
inline void HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTreePrototypes(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoNodeID, int32_t partID,
                                                                             ::UnityEngine::TerrainData* terrainData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetTreePrototypes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, geoNodeID, partID, terrainData);
}
inline void HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTreeInstances(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoNodeID, int32_t partID,
                                                                            ::UnityEngine::TerrainData* terrainData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetTreeInstances", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, geoNodeID, partID, terrainData);
}
inline ::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain* HoudiniEngineUnity::HEU_InputInterfaceTerrain::GenerateTerrainDataFromGameObject(::UnityEngine::GameObject* inputObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "GenerateTerrainDataFromGameObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InputInterfaceTerrain_HEU_InputDataTerrain*, false>(this, ___internal_method, inputObject);
}
inline ::HoudiniEngineUnity::HEU_InputInterfaceTerrain* HoudiniEngineUnity::HEU_InputInterfaceTerrain::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>());
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::HEU_InputInterfaceTerrain() {}
