#pragma once
// IWYU pragma private; include "GlobalNamespace\SimpleTemporalFiltering.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__RenderTexture_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleTemporalFiltering_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SimpleTemporalFiltering._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleTemporalFiltering::*)()>(&::GlobalNamespace::SimpleTemporalFiltering::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f4ee4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleTemporalFiltering*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleTemporalFiltering.FilterTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::GlobalNamespace::SimpleTemporalFiltering::*)(::UnityEngine::RenderTexture*)>(
    &::GlobalNamespace::SimpleTemporalFiltering::FilterTexture)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5f4ef08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleTemporalFiltering*>(), { "FilterTexture", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleTemporalFiltering.CreateRenderTexturesIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleTemporalFiltering::*)(int32_t, int32_t)>(
    &::GlobalNamespace::SimpleTemporalFiltering::CreateRenderTexturesIfNeeded)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5f4f07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleTemporalFiltering*>(),
                                                                                           { "CreateRenderTexturesIfNeeded", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>& GlobalNamespace::SimpleTemporalFiltering::__cordl_internal_get__temporalFilteringTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____temporalFilteringTextures;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> const& GlobalNamespace::SimpleTemporalFiltering::__cordl_internal_get__temporalFilteringTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____temporalFilteringTextures;
}
constexpr void GlobalNamespace::SimpleTemporalFiltering::__cordl_internal_set__temporalFilteringTextures(::ArrayW<::UnityW<::UnityEngine::RenderTexture>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____temporalFilteringTextures = value;
}
constexpr int32_t& GlobalNamespace::SimpleTemporalFiltering::__cordl_internal_get__prevTemporalFilteringTextureIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevTemporalFilteringTextureIdx;
}
constexpr int32_t const& GlobalNamespace::SimpleTemporalFiltering::__cordl_internal_get__prevTemporalFilteringTextureIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevTemporalFilteringTextureIdx;
}
constexpr void GlobalNamespace::SimpleTemporalFiltering::__cordl_internal_set__prevTemporalFilteringTextureIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevTemporalFilteringTextureIdx = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SimpleTemporalFiltering::__cordl_internal_get__temporalFilteringMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____temporalFilteringMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SimpleTemporalFiltering::__cordl_internal_get__temporalFilteringMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____temporalFilteringMaterial;
}
constexpr void GlobalNamespace::SimpleTemporalFiltering::__cordl_internal_set__temporalFilteringMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____temporalFilteringMaterial = value;
}
constexpr int32_t& GlobalNamespace::SimpleTemporalFiltering::__cordl_internal_get__bufferTexID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferTexID;
}
constexpr int32_t const& GlobalNamespace::SimpleTemporalFiltering::__cordl_internal_get__bufferTexID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferTexID;
}
constexpr void GlobalNamespace::SimpleTemporalFiltering::__cordl_internal_set__bufferTexID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bufferTexID = value;
}
inline void GlobalNamespace::SimpleTemporalFiltering::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleTemporalFiltering*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> GlobalNamespace::SimpleTemporalFiltering::FilterTexture(::UnityEngine::RenderTexture* src) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleTemporalFiltering*>(), { "FilterTexture", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, src);
}
inline void GlobalNamespace::SimpleTemporalFiltering::CreateRenderTexturesIfNeeded(int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleTemporalFiltering*>(),
                                                                                         { "CreateRenderTexturesIfNeeded", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height);
}
inline ::GlobalNamespace::SimpleTemporalFiltering* GlobalNamespace::SimpleTemporalFiltering::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SimpleTemporalFiltering*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleTemporalFiltering::SimpleTemporalFiltering() {}
