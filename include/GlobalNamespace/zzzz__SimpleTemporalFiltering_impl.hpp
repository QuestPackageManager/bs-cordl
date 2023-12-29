#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleTemporalFiltering_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SimpleTemporalFiltering._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SimpleTemporalFiltering::*)()>(&::GlobalNamespace::SimpleTemporalFiltering::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x26910e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleTemporalFiltering*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleTemporalFiltering.FilterTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTexture* (::GlobalNamespace::SimpleTemporalFiltering::*)(::UnityEngine::RenderTexture*)>(
    &::GlobalNamespace::SimpleTemporalFiltering::FilterTexture)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x26911ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleTemporalFiltering*>::get(), "FilterTexture", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleTemporalFiltering.CreateRenderTexturesIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SimpleTemporalFiltering::*)(int32_t, int32_t)>(
    &::GlobalNamespace::SimpleTemporalFiltering::CreateRenderTexturesIfNeeded)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x269132c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleTemporalFiltering*>::get(), "CreateRenderTexturesIfNeeded", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::RenderTexture*, ::Array<::UnityEngine::RenderTexture*>*>& GlobalNamespace::SimpleTemporalFiltering::__get__temporalFilteringTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____temporalFilteringTextures;
}
constexpr ::ArrayW<::UnityEngine::RenderTexture*, ::Array<::UnityEngine::RenderTexture*>*> const& GlobalNamespace::SimpleTemporalFiltering::__get__temporalFilteringTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____temporalFilteringTextures;
}
constexpr void GlobalNamespace::SimpleTemporalFiltering::__set__temporalFilteringTextures(::ArrayW<::UnityEngine::RenderTexture*, ::Array<::UnityEngine::RenderTexture*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____temporalFilteringTextures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::SimpleTemporalFiltering::__get__prevTemporalFilteringTextureIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevTemporalFilteringTextureIdx;
}
constexpr int32_t const& GlobalNamespace::SimpleTemporalFiltering::__get__prevTemporalFilteringTextureIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevTemporalFilteringTextureIdx;
}
constexpr void GlobalNamespace::SimpleTemporalFiltering::__set__prevTemporalFilteringTextureIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevTemporalFilteringTextureIdx = value;
}
constexpr ::UnityEngine::Material*& GlobalNamespace::SimpleTemporalFiltering::__get__temporalFilteringMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____temporalFilteringMaterial;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& GlobalNamespace::SimpleTemporalFiltering::__get__temporalFilteringMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____temporalFilteringMaterial;
}
constexpr void GlobalNamespace::SimpleTemporalFiltering::__set__temporalFilteringMaterial(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____temporalFilteringMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::SimpleTemporalFiltering::__get__bufferTexID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferTexID;
}
constexpr int32_t const& GlobalNamespace::SimpleTemporalFiltering::__get__bufferTexID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferTexID;
}
constexpr void GlobalNamespace::SimpleTemporalFiltering::__set__bufferTexID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bufferTexID = value;
}
inline ::GlobalNamespace::SimpleTemporalFiltering* GlobalNamespace::SimpleTemporalFiltering::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SimpleTemporalFiltering*>());
}
inline void GlobalNamespace::SimpleTemporalFiltering::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleTemporalFiltering*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::RenderTexture* GlobalNamespace::SimpleTemporalFiltering::FilterTexture(::UnityEngine::RenderTexture* src) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleTemporalFiltering*>::get(), "FilterTexture", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTexture*, false>(this, ___internal_method, src);
}
inline void GlobalNamespace::SimpleTemporalFiltering::CreateRenderTexturesIfNeeded(int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleTemporalFiltering*>::get(), "CreateRenderTexturesIfNeeded", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleTemporalFiltering::SimpleTemporalFiltering() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
