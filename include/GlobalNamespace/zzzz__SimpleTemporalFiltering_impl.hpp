#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleTemporalFiltering_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SimpleTemporalFiltering._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SimpleTemporalFiltering::*)()>(&::GlobalNamespace::SimpleTemporalFiltering::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2adb7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleTemporalFiltering*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleTemporalFiltering.FilterTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::RenderTexture> (::GlobalNamespace::SimpleTemporalFiltering::*)(::UnityEngine::RenderTexture*)>(&::GlobalNamespace::SimpleTemporalFiltering::FilterTexture)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2adb8a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleTemporalFiltering*>::get(), "FilterTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleTemporalFiltering.CreateRenderTexturesIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SimpleTemporalFiltering::*)(int32_t, int32_t)>(
    &::GlobalNamespace::SimpleTemporalFiltering::CreateRenderTexturesIfNeeded)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x2adba28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleTemporalFiltering*>::get(), "CreateRenderTexturesIfNeeded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*>&
GlobalNamespace::SimpleTemporalFiltering::__cordl_internal_get__temporalFilteringTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____temporalFilteringTextures;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> const&
GlobalNamespace::SimpleTemporalFiltering::__cordl_internal_get__temporalFilteringTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____temporalFilteringTextures;
}
constexpr void
GlobalNamespace::SimpleTemporalFiltering::__cordl_internal_set__temporalFilteringTextures(::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____temporalFilteringTextures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____temporalFilteringMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline ::GlobalNamespace::SimpleTemporalFiltering* GlobalNamespace::SimpleTemporalFiltering::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SimpleTemporalFiltering*>());
}
inline void GlobalNamespace::SimpleTemporalFiltering::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleTemporalFiltering*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> GlobalNamespace::SimpleTemporalFiltering::FilterTexture(::UnityEngine::RenderTexture* src) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleTemporalFiltering*>::get(), "FilterTexture", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>, false>(this, ___internal_method, src);
}
inline void GlobalNamespace::SimpleTemporalFiltering::CreateRenderTexturesIfNeeded(int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleTemporalFiltering*>::get(), "CreateRenderTexturesIfNeeded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleTemporalFiltering::SimpleTemporalFiltering() {}
