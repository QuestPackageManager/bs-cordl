#pragma once
// IWYU pragma private; include "UnityEngine\Android\AndroidLocale.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidLocale_def.hpp"
//  Writing Method size for method: ::UnityEngine::Android::AndroidLocale.get_country
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Android::AndroidLocale::*)()>(&::UnityEngine::Android::AndroidLocale::get_country)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a34bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidLocale*>(), { "get_country", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidLocale.get_language
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Android::AndroidLocale::*)()>(&::UnityEngine::Android::AndroidLocale::get_language)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a34be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidLocale*>(), { "get_language", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidLocale._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Android::AndroidLocale::*)(::StringW, ::StringW)>(&::UnityEngine::Android::AndroidLocale::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a34bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidLocale*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Android::AndroidLocale::__cordl_internal_get__country_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____country_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Android::AndroidLocale::__cordl_internal_get__country_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____country_k__BackingField;
}
constexpr void UnityEngine::Android::AndroidLocale::__cordl_internal_set__country_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____country_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::Android::AndroidLocale::__cordl_internal_get__language_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____language_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Android::AndroidLocale::__cordl_internal_get__language_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____language_k__BackingField;
}
constexpr void UnityEngine::Android::AndroidLocale::__cordl_internal_set__language_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____language_k__BackingField = value;
}
inline ::StringW UnityEngine::Android::AndroidLocale::get_country() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidLocale*>(), { "get_country", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::Android::AndroidLocale::get_language() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidLocale*>(), { "get_language", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Android::AndroidLocale::_ctor(::StringW _country, ::StringW _language) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidLocale*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _country, _language);
}
inline ::UnityEngine::Android::AndroidLocale* UnityEngine::Android::AndroidLocale::New_ctor(::StringW _country, ::StringW _language) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Android::AndroidLocale*>(_country, _language));
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidLocale::AndroidLocale() {}
