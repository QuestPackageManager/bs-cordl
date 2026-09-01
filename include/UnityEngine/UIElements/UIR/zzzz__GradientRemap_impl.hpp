#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UIR\GradientRemap.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_impl.hpp"
#include "UnityEngine/zzzz__RectInt_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientRemap_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientRemap.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::GradientRemap::*)()>(&::UnityEngine::UIElements::UIR::GradientRemap::Reset)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6cf60f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientRemap*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientRemap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::GradientRemap::*)()>(&::UnityEngine::UIElements::UIR::GradientRemap::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6cf60a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientRemap*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::UIR::GradientRemap::__cordl_internal_get_origIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___origIndex;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::GradientRemap::__cordl_internal_get_origIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___origIndex;
}
constexpr void UnityEngine::UIElements::UIR::GradientRemap::__cordl_internal_set_origIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___origIndex = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::GradientRemap::__cordl_internal_get_destIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destIndex;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::GradientRemap::__cordl_internal_get_destIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destIndex;
}
constexpr void UnityEngine::UIElements::UIR::GradientRemap::__cordl_internal_set_destIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destIndex = value;
}
constexpr ::UnityEngine::RectInt& UnityEngine::UIElements::UIR::GradientRemap::__cordl_internal_get_location() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr ::UnityEngine::RectInt const& UnityEngine::UIElements::UIR::GradientRemap::__cordl_internal_get_location() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr void UnityEngine::UIElements::UIR::GradientRemap::__cordl_internal_set_location(::UnityEngine::RectInt value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___location = value;
}
constexpr ::UnityEngine::UIElements::UIR::GradientRemap*& UnityEngine::UIElements::UIR::GradientRemap::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr ::UnityEngine::UIElements::UIR::GradientRemap* const& UnityEngine::UIElements::UIR::GradientRemap::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void UnityEngine::UIElements::UIR::GradientRemap::__cordl_internal_set_next(::UnityEngine::UIElements::UIR::GradientRemap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___next = value;
}
constexpr ::UnityEngine::UIElements::TextureId& UnityEngine::UIElements::UIR::GradientRemap::__cordl_internal_get_atlas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atlas;
}
constexpr ::UnityEngine::UIElements::TextureId const& UnityEngine::UIElements::UIR::GradientRemap::__cordl_internal_get_atlas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atlas;
}
constexpr void UnityEngine::UIElements::UIR::GradientRemap::__cordl_internal_set_atlas(::UnityEngine::UIElements::TextureId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___atlas = value;
}
inline void UnityEngine::UIElements::UIR::GradientRemap::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientRemap*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::GradientRemap::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientRemap*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::GradientRemap* UnityEngine::UIElements::UIR::GradientRemap::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::GradientRemap*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::GradientRemap::GradientRemap() {}
