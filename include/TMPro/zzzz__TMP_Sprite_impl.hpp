#pragma once
#include "TMPro/zzzz__TMP_TextElement_Legacy_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "TMPro/zzzz__TMP_Sprite_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_Sprite._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Sprite::*)()>(&::TMPro::TMP_Sprite::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abe1e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Sprite*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& TMPro::TMP_Sprite::__get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& TMPro::TMP_Sprite::__get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void TMPro::TMP_Sprite::__set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& TMPro::TMP_Sprite::__get_hashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCode;
}
constexpr int32_t const& TMPro::TMP_Sprite::__get_hashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCode;
}
constexpr void TMPro::TMP_Sprite::__set_hashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashCode = value;
}
constexpr int32_t& TMPro::TMP_Sprite::__get_unicode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unicode;
}
constexpr int32_t const& TMPro::TMP_Sprite::__get_unicode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unicode;
}
constexpr void TMPro::TMP_Sprite::__set_unicode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unicode = value;
}
constexpr ::UnityEngine::Vector2& TMPro::TMP_Sprite::__get_pivot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pivot;
}
constexpr ::UnityEngine::Vector2 const& TMPro::TMP_Sprite::__get_pivot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pivot;
}
constexpr void TMPro::TMP_Sprite::__set_pivot(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pivot = value;
}
constexpr ::UnityEngine::Sprite*& TMPro::TMP_Sprite::__get_sprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sprite;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& TMPro::TMP_Sprite::__get_sprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sprite;
}
constexpr void TMPro::TMP_Sprite::__set_sprite(::UnityEngine::Sprite* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sprite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::TMPro::TMP_Sprite* TMPro::TMP_Sprite::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::TMPro::TMP_Sprite*>());
}
inline void TMPro::TMP_Sprite::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Sprite*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TMPro::TMP_Sprite::TMP_Sprite() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
