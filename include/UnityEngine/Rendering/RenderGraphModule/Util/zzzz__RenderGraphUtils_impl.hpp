#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/Util/RenderGraphUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/Util/zzzz__RenderGraphUtils_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/Util/zzzz__RenderGraphUtils_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65ce4b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData::__cordl_internal_get_isMSAA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMSAA;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData::__cordl_internal_get_isMSAA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMSAA;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData::__cordl_internal_set_isMSAA(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isMSAA = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData* UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData::RenderGraphUtils_CopyPassData() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode::RenderGraphUtils_BlitFilterMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode::RenderGraphUtils_BlitFilterMode() {}
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode::ClampNearest{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode::ClampBilinear{
  static_cast<int32_t>(0x1)
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65ce4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_set_source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_set_destination(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destination = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scale;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scale;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_set_scale(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scale = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_set_offset(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_sourceSlice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceSlice;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_sourceSlice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceSlice;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_set_sourceSlice(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceSlice = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_destinationSlice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationSlice;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_destinationSlice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationSlice;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_set_destinationSlice(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destinationSlice = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_numSlices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numSlices;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_numSlices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numSlices;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_set_numSlices(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___numSlices = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_sourceMip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceMip;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_sourceMip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceMip;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_set_sourceMip(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceMip = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_destinationMip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationMip;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_destinationMip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationMip;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_set_destinationMip(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destinationMip = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_numMips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numMips;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_numMips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numMips;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_set_numMips(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___numMips = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode&
UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_filterMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filterMode;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode const&
UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_filterMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filterMode;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_set_filterMode(
    ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___filterMode = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData* UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::RenderGraphUtils_BlitPassData() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType::RenderGraphUtils_FullScreenGeometryType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType::RenderGraphUtils_FullScreenGeometryType() {}
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType::Mesh{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType
    UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType::ProceduralTriangle{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType
    UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType::ProceduralQuad{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::*)(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Material*, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x65ce4c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::*)(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Material*,
    int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x65ce5f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::*)(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Material*, int32_t, ::UnityEngine::MaterialPropertyBlock*,
    int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x65ce6e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 15>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::*)(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Material*,
    int32_t, ::UnityEngine::MaterialPropertyBlock*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType,
    int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::_ctor)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x65ce87c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 18>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::*)(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Material*, int32_t, ::UnityEngine::MaterialPropertyBlock*,
    ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x65cea00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 9>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::*)(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Material*,
    int32_t, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x65ceb74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 12>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::setStaticF_blitTextureProperty(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "blitTextureProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::getStaticF_blitTextureProperty() {
  return ::cordl_internals::getStaticField<int32_t, "blitTextureProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters>::get>();
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::setStaticF_blitSliceProperty(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "blitSliceProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::getStaticF_blitSliceProperty() {
  return ::cordl_internals::getStaticField<int32_t, "blitSliceProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters>::get>();
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::setStaticF_blitMipProperty(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "blitMipProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::getStaticF_blitMipProperty() {
  return ::cordl_internals::getStaticField<int32_t, "blitMipProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters>::get>();
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::setStaticF_blitScaleBias(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "blitScaleBias",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::getStaticF_blitScaleBias() {
  return ::cordl_internals::getStaticField<int32_t, "blitScaleBias",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters>::get>();
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::_ctor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle source,
                                                                                                            ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination,
                                                                                                            ::UnityEngine::Material* material, int32_t shaderPass) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, destination, material, shaderPass);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::_ctor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle source,
                                                                                                            ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination,
                                                                                                            ::UnityEngine::Vector2 scale, ::UnityEngine::Vector2 offset,
                                                                                                            ::UnityEngine::Material* material, int32_t shaderPass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, destination, scale, offset, material, shaderPass);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::_ctor(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::UnityEngine::Material* material, int32_t shaderPass,
    ::UnityEngine::MaterialPropertyBlock* mpb, int32_t destinationSlice, int32_t destinationMip, int32_t numSlices, int32_t numMips, int32_t sourceSlice, int32_t sourceMip,
    ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType geometry, int32_t sourceTexturePropertyID, int32_t sourceSlicePropertyID, int32_t sourceMipPropertyID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 15>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, destination, material, shaderPass, mpb, destinationSlice, destinationMip, numSlices, numMips, sourceSlice,
                                                          sourceMip, geometry, sourceTexturePropertyID, sourceSlicePropertyID, sourceMipPropertyID);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::_ctor(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::UnityEngine::Vector2 scale,
    ::UnityEngine::Vector2 offset, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MaterialPropertyBlock* mpb, int32_t destinationSlice, int32_t destinationMip,
    int32_t numSlices, int32_t numMips, int32_t sourceSlice, int32_t sourceMip, ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType geometry,
    int32_t sourceTexturePropertyID, int32_t sourceSlicePropertyID, int32_t sourceMipPropertyID, int32_t scaleBiasPropertyID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 18>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, destination, scale, offset, material, shaderPass, mpb, destinationSlice, destinationMip, numSlices, numMips,
                                                          sourceSlice, sourceMip, geometry, sourceTexturePropertyID, sourceSlicePropertyID, sourceMipPropertyID, scaleBiasPropertyID);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::_ctor(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::UnityEngine::Material* material, int32_t shaderPass,
    ::UnityEngine::MaterialPropertyBlock* mpb, ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType geometry, int32_t sourceTexturePropertyID,
    int32_t sourceSlicePropertyID, int32_t sourceMipPropertyID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, destination, material, shaderPass, mpb, geometry, sourceTexturePropertyID, sourceSlicePropertyID,
                                                          sourceMipPropertyID);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::_ctor(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::UnityEngine::Vector2 scale,
    ::UnityEngine::Vector2 offset, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MaterialPropertyBlock* mpb,
    ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType geometry, int32_t sourceTexturePropertyID, int32_t sourceSlicePropertyID, int32_t sourceMipPropertyID,
    int32_t scaleBiasPropertyID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 12>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, destination, scale, offset, material, shaderPass, mpb, geometry, sourceTexturePropertyID,
                                                          sourceSlicePropertyID, sourceMipPropertyID, scaleBiasPropertyID);
}
// Ctor Parameters [CppParam { name: "source", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "destination", ty:
// "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") },
// CppParam { name: "offset", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "sourceSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "destinationSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "numSlices", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sourceMip",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "destinationMip", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "numMips", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}") }, CppParam { name: "shaderPass", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "propertyBlock", ty: "::UnityEngine::MaterialPropertyBlock*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "sourceTexturePropertyID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sourceSlicePropertyID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "sourceMipPropertyID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "scaleBiasPropertyID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "geometry", ty: "::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::RenderGraphUtils_BlitMaterialParameters(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::UnityEngine::Vector2 scale,
    ::UnityEngine::Vector2 offset, int32_t sourceSlice, int32_t destinationSlice, int32_t numSlices, int32_t sourceMip, int32_t destinationMip, int32_t numMips,
    ::UnityW<::UnityEngine::Material> material, int32_t shaderPass, ::UnityEngine::MaterialPropertyBlock* propertyBlock, int32_t sourceTexturePropertyID, int32_t sourceSlicePropertyID,
    int32_t sourceMipPropertyID, int32_t scaleBiasPropertyID, ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType geometry) noexcept {
  this->source = source;
  this->destination = destination;
  this->scale = scale;
  this->offset = offset;
  this->sourceSlice = sourceSlice;
  this->destinationSlice = destinationSlice;
  this->numSlices = numSlices;
  this->sourceMip = sourceMip;
  this->destinationMip = destinationMip;
  this->numMips = numMips;
  this->material = material;
  this->shaderPass = shaderPass;
  this->propertyBlock = propertyBlock;
  this->sourceTexturePropertyID = sourceTexturePropertyID;
  this->sourceSlicePropertyID = sourceSlicePropertyID;
  this->sourceMipPropertyID = sourceMipPropertyID;
  this->scaleBiasPropertyID = scaleBiasPropertyID;
  this->geometry = geometry;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters::RenderGraphUtils_BlitMaterialParameters() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65cedac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_sourceTexturePropertyID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexturePropertyID;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_sourceTexturePropertyID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexturePropertyID;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_sourceTexturePropertyID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTexturePropertyID = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr void
UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_destination(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destination = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scale;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scale;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_scale(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scale = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_offset(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_shaderPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaderPass;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_shaderPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaderPass;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_shaderPass(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shaderPass = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_propertyBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_propertyBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyBlock;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_propertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___propertyBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_sourceSlice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceSlice;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_sourceSlice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceSlice;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_sourceSlice(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceSlice = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_destinationSlice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationSlice;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_destinationSlice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationSlice;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_destinationSlice(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destinationSlice = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_numSlices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numSlices;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_numSlices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numSlices;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_numSlices(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___numSlices = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_sourceMip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceMip;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_sourceMip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceMip;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_sourceMip(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceMip = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_destinationMip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationMip;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_destinationMip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationMip;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_destinationMip(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destinationMip = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_numMips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numMips;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_numMips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numMips;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_numMips(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___numMips = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType&
UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_geometry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___geometry;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType const&
UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_geometry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___geometry;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_geometry(
    ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___geometry = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_sourceSlicePropertyID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceSlicePropertyID;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_sourceSlicePropertyID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceSlicePropertyID;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_sourceSlicePropertyID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceSlicePropertyID = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_sourceMipPropertyID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceMipPropertyID;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_sourceMipPropertyID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceMipPropertyID;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_sourceMipPropertyID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceMipPropertyID = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_scaleBiasPropertyID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleBiasPropertyID;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_scaleBiasPropertyID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleBiasPropertyID;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_scaleBiasPropertyID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scaleBiasPropertyID = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData* UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::RenderGraphUtils_BlitMaterialPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65cee04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c._AddCopyPass_b__3_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::*)(
    ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::_AddCopyPass_b__3_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x65cee08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>::get(), "<AddCopyPass>b__3_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c._AddBlitPass_b__7_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::*)(
    ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::_AddBlitPass_b__7_0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x65cee78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>::get(), "<AddBlitPass>b__7_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c._AddBlitPass_b__13_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::*)(
    ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::_AddBlitPass_b__13_0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x65ceee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>::get(), "<AddBlitPass>b__13_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::setStaticF___9(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c* UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>::get>();
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::setStaticF___9__3_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>::get>();
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::setStaticF___9__7_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>::get>();
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::setStaticF___9__13_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__13_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::getStaticF___9__13_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__13_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>::get>();
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::_AddCopyPass_b__3_0(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData* data,
                                                                                                       ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>::get(), "<AddCopyPass>b__3_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::_AddBlitPass_b__7_0(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData* data,
                                                                                                       ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>::get(), "<AddBlitPass>b__7_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::_AddBlitPass_b__13_0(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData* data,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>::get(), "<AddBlitPass>b__13_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c* UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::RenderGraphUtils___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils.CanAddCopyPassMSAA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::CanAddCopyPassMSAA)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x65cca0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>::get(),
                                                 "CanAddCopyPassMSAA", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils.AddCopyPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t, int32_t,
    int32_t, int32_t, ::StringW, ::StringW, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::AddCopyPass)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x65cca60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>::get(), "AddCopyPass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils.CopyRenderFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
        &::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::CopyRenderFunc)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x65cd110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>::get(), "CopyRenderFunc", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils.AddBlitPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Vector2, ::UnityEngine::Vector2, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode, ::StringW,
    ::StringW, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::AddBlitPass)> {
  constexpr static std::size_t size = 0x62c;
  constexpr static std::size_t addrs = 0x65cd18c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>::get(), "AddBlitPass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 15>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils.BlitRenderFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
        &::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::BlitRenderFunc)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x65cd7b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>::get(), "BlitRenderFunc", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils.AddBlitPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters, ::StringW, ::StringW, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::AddBlitPass)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x65cd9ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>::get(), "AddBlitPass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils.BlitMaterialRenderFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
        &::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::BlitMaterialRenderFunc)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x65ce08c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>::get(), "BlitMaterialRenderFunc",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::setStaticF_s_PropertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  ::cordl_internals::setStaticField<::UnityEngine::MaterialPropertyBlock*, "s_PropertyBlock",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>::get>(
      std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
inline ::UnityEngine::MaterialPropertyBlock* UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::getStaticF_s_PropertyBlock() {
  return ::cordl_internals::getStaticField<::UnityEngine::MaterialPropertyBlock*, "s_PropertyBlock",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>::get>();
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::setStaticF_s_BlitScaleBias(::UnityEngine::Vector4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector4, "s_BlitScaleBias",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>::get>(
      std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::getStaticF_s_BlitScaleBias() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "s_BlitScaleBias",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>::get>();
}
inline bool UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::CanAddCopyPassMSAA() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>::get(),
                                               "CanAddCopyPassMSAA", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::AddCopyPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph,
                                                                                           ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source,
                                                                                           ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, int32_t sourceSlice,
                                                                                           int32_t destinationSlice, int32_t sourceMip, int32_t destinationMip, ::StringW passName, ::StringW file,
                                                                                           int32_t line) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>::get(), "AddCopyPass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, graph, source, destination, sourceSlice, destinationSlice, sourceMip, destinationMip, passName, file, line);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::CopyRenderFunc(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData* data,
                                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>::get(), "CopyRenderFunc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, rgContext);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::AddBlitPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph,
                                                                                           ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source,
                                                                                           ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::UnityEngine::Vector2 scale,
                                                                                           ::UnityEngine::Vector2 offset, int32_t sourceSlice, int32_t destinationSlice, int32_t numSlices,
                                                                                           int32_t sourceMip, int32_t destinationMip, int32_t numMips,
                                                                                           ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode filterMode,
                                                                                           ::StringW passName, ::StringW file, int32_t line) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>::get(), "AddBlitPass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 15>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, graph, source, destination, scale, offset, sourceSlice, destinationSlice, numSlices, sourceMip, destinationMip,
                                                          numMips, filterMode, passName, file, line);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::BlitRenderFunc(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData* data,
                                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>::get(), "BlitRenderFunc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::AddBlitPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph,
                                                                                           ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters blitParameters,
                                                                                           ::StringW passName, ::StringW file, int32_t line) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>::get(), "AddBlitPass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, graph, blitParameters, passName, file, line);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::BlitMaterialRenderFunc(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData* data,
                                                                                                      ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>::get(), "BlitMaterialRenderFunc",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, context);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::RenderGraphUtils() {}
