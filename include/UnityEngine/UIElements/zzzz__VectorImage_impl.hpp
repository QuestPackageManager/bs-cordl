#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImage_def.hpp"
#include "UnityEngine/UIElements/zzzz__GradientSettings_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImageVertex_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VectorImage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VectorImage::*)()>(&::UnityEngine::UIElements::VectorImage::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2dbcf58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VectorImage*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Texture2D*& UnityEngine::UIElements::VectorImage::__get_atlas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atlas;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> const& UnityEngine::UIElements::VectorImage::__get_atlas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atlas;
}
constexpr void UnityEngine::UIElements::VectorImage::__set_atlas(::UnityEngine::Texture2D* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___atlas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::UIElements::VectorImageVertex, ::Array<::UnityEngine::UIElements::VectorImageVertex>*>& UnityEngine::UIElements::VectorImage::__get_vertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertices;
}
constexpr ::ArrayW<::UnityEngine::UIElements::VectorImageVertex, ::Array<::UnityEngine::UIElements::VectorImageVertex>*> const& UnityEngine::UIElements::VectorImage::__get_vertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertices;
}
constexpr void UnityEngine::UIElements::VectorImage::__set_vertices(::ArrayW<::UnityEngine::UIElements::VectorImageVertex, ::Array<::UnityEngine::UIElements::VectorImageVertex>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___vertices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*>& UnityEngine::UIElements::VectorImage::__get_indices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indices;
}
constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*> const& UnityEngine::UIElements::VectorImage::__get_indices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indices;
}
constexpr void UnityEngine::UIElements::VectorImage::__set_indices(::ArrayW<uint16_t, ::Array<uint16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___indices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::UIElements::GradientSettings, ::Array<::UnityEngine::UIElements::GradientSettings>*>& UnityEngine::UIElements::VectorImage::__get_settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr ::ArrayW<::UnityEngine::UIElements::GradientSettings, ::Array<::UnityEngine::UIElements::GradientSettings>*> const& UnityEngine::UIElements::VectorImage::__get_settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr void UnityEngine::UIElements::VectorImage::__set_settings(::ArrayW<::UnityEngine::UIElements::GradientSettings, ::Array<::UnityEngine::UIElements::GradientSettings>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::VectorImage::__get_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::VectorImage::__get_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr void UnityEngine::UIElements::VectorImage::__set_size(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___size = value;
}
inline ::UnityEngine::UIElements::VectorImage* UnityEngine::UIElements::VectorImage::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::VectorImage*>());
}
inline void UnityEngine::UIElements::VectorImage::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VectorImage*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VectorImage::VectorImage() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
