#pragma once
// IWYU pragma private; include "UnityEngine/HelpURLAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__HelpURLAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::HelpURLAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::HelpURLAttribute::*)(::StringW)>(&::UnityEngine::HelpURLAttribute::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6ad7820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HelpURLAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HelpURLAttribute.get_URL
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::HelpURLAttribute::*)()>(&::UnityEngine::HelpURLAttribute::get_URL)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ad7880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::HelpURLAttribute*>(), { ::i2c::class_of<::UnityEngine::HelpURLAttribute*>(), 7 }));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::HelpURLAttribute::__cordl_internal_get_m_Url() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Url;
}
constexpr ::StringW const& UnityEngine::HelpURLAttribute::__cordl_internal_get_m_Url() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Url;
}
constexpr void UnityEngine::HelpURLAttribute::__cordl_internal_set_m_Url(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Url = value;
}
constexpr bool& UnityEngine::HelpURLAttribute::__cordl_internal_get_m_Dispatcher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dispatcher;
}
constexpr bool const& UnityEngine::HelpURLAttribute::__cordl_internal_get_m_Dispatcher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dispatcher;
}
constexpr void UnityEngine::HelpURLAttribute::__cordl_internal_set_m_Dispatcher(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Dispatcher = value;
}
constexpr ::StringW& UnityEngine::HelpURLAttribute::__cordl_internal_get_m_DispatchingFieldName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DispatchingFieldName;
}
constexpr ::StringW const& UnityEngine::HelpURLAttribute::__cordl_internal_get_m_DispatchingFieldName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DispatchingFieldName;
}
constexpr void UnityEngine::HelpURLAttribute::__cordl_internal_set_m_DispatchingFieldName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DispatchingFieldName = value;
}
inline void UnityEngine::HelpURLAttribute::_ctor(::StringW url) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HelpURLAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url);
}
inline ::StringW UnityEngine::HelpURLAttribute::get_URL() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::HelpURLAttribute*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::HelpURLAttribute* UnityEngine::HelpURLAttribute::New_ctor(::StringW url) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::HelpURLAttribute*>(url));
}
// Ctor Parameters []
constexpr ::UnityEngine::HelpURLAttribute::HelpURLAttribute() {}
