#pragma once
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_impl.hpp"
#include "UnityEngine/zzzz__RectInt_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientRemap_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientRemap.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::GradientRemap::*)()>(&::UnityEngine::UIElements::UIR::GradientRemap::Reset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2dcd160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientRemap*>::get(), "Reset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientRemap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::GradientRemap::*)()>(&::UnityEngine::UIElements::UIR::GradientRemap::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2dcd104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientRemap*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::UIR::GradientRemap::__get_origIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___origIndex;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::GradientRemap::__get_origIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___origIndex;
}
constexpr void UnityEngine::UIElements::UIR::GradientRemap::__set_origIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___origIndex = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::GradientRemap::__get_destIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destIndex;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::GradientRemap::__get_destIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destIndex;
}
constexpr void UnityEngine::UIElements::UIR::GradientRemap::__set_destIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destIndex = value;
}
constexpr ::UnityEngine::RectInt& UnityEngine::UIElements::UIR::GradientRemap::__get_location() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr ::UnityEngine::RectInt const& UnityEngine::UIElements::UIR::GradientRemap::__get_location() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr void UnityEngine::UIElements::UIR::GradientRemap::__set_location(::UnityEngine::RectInt value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___location = value;
}
constexpr ::UnityEngine::UIElements::UIR::GradientRemap*& UnityEngine::UIElements::UIR::GradientRemap::__get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::GradientRemap*> const& UnityEngine::UIElements::UIR::GradientRemap::__get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void UnityEngine::UIElements::UIR::GradientRemap::__set_next(::UnityEngine::UIElements::UIR::GradientRemap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::TextureId& UnityEngine::UIElements::UIR::GradientRemap::__get_atlas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atlas;
}
constexpr ::UnityEngine::UIElements::TextureId const& UnityEngine::UIElements::UIR::GradientRemap::__get_atlas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atlas;
}
constexpr void UnityEngine::UIElements::UIR::GradientRemap::__set_atlas(::UnityEngine::UIElements::TextureId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___atlas = value;
}
inline void UnityEngine::UIElements::UIR::GradientRemap::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientRemap*>::get(), "Reset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::GradientRemap* UnityEngine::UIElements::UIR::GradientRemap::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UIR::GradientRemap*>());
}
inline void UnityEngine::UIElements::UIR::GradientRemap::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GradientRemap*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::GradientRemap::GradientRemap() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
