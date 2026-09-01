#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\StyleRule.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleProperty_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRule_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleProperty_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleRule.get_properties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::UIElements::StyleProperty*> (::UnityEngine::UIElements::StyleRule::*)()>(
    &::UnityEngine::UIElements::StyleRule::get_properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9ba20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleRule*>(), { "get_properties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleRule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleRule::*)()>(&::UnityEngine::UIElements::StyleRule::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c9ba28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleRule*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::UIElements::StyleProperty*>& UnityEngine::UIElements::StyleRule::__cordl_internal_get_m_Properties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Properties;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleProperty*> const& UnityEngine::UIElements::StyleRule::__cordl_internal_get_m_Properties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Properties;
}
constexpr void UnityEngine::UIElements::StyleRule::__cordl_internal_set_m_Properties(::ArrayW<::UnityEngine::UIElements::StyleProperty*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Properties = value;
}
constexpr int32_t& UnityEngine::UIElements::StyleRule::__cordl_internal_get_line() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___line;
}
constexpr int32_t const& UnityEngine::UIElements::StyleRule::__cordl_internal_get_line() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___line;
}
constexpr void UnityEngine::UIElements::StyleRule::__cordl_internal_set_line(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___line = value;
}
constexpr int32_t& UnityEngine::UIElements::StyleRule::__cordl_internal_get_customPropertiesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customPropertiesCount;
}
constexpr int32_t const& UnityEngine::UIElements::StyleRule::__cordl_internal_get_customPropertiesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customPropertiesCount;
}
constexpr void UnityEngine::UIElements::StyleRule::__cordl_internal_set_customPropertiesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___customPropertiesCount = value;
}
inline ::ArrayW<::UnityEngine::UIElements::StyleProperty*> UnityEngine::UIElements::StyleRule::get_properties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleRule*>(), { "get_properties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::StyleProperty*>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleRule::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleRule*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleRule* UnityEngine::UIElements::StyleRule::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StyleRule*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleRule::StyleRule() {}
