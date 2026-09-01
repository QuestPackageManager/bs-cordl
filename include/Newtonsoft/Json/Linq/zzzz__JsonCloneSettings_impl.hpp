#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Linq\JsonCloneSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonCloneSettings_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonCloneSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JsonCloneSettings::*)()>(&::Newtonsoft::Json::Linq::JsonCloneSettings::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d7ad14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonCloneSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonCloneSettings.get_CopyAnnotations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JsonCloneSettings::*)()>(&::Newtonsoft::Json::Linq::JsonCloneSettings::get_CopyAnnotations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d7ad20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonCloneSettings*>(), { "get_CopyAnnotations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonCloneSettings.set_CopyAnnotations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JsonCloneSettings::*)(bool)>(&::Newtonsoft::Json::Linq::JsonCloneSettings::set_CopyAnnotations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d7ad28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonCloneSettings*>(), { "set_CopyAnnotations", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& Newtonsoft::Json::Linq::JsonCloneSettings::__cordl_internal_get__CopyAnnotations_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CopyAnnotations_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::Linq::JsonCloneSettings::__cordl_internal_get__CopyAnnotations_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CopyAnnotations_k__BackingField;
}
constexpr void Newtonsoft::Json::Linq::JsonCloneSettings::__cordl_internal_set__CopyAnnotations_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CopyAnnotations_k__BackingField = value;
}
inline void Newtonsoft::Json::Linq::JsonCloneSettings::setStaticF_SkipCopyAnnotations(::Newtonsoft::Json::Linq::JsonCloneSettings* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Linq::JsonCloneSettings*, "SkipCopyAnnotations", ::Newtonsoft::Json::Linq::JsonCloneSettings*>(
      std::forward<::Newtonsoft::Json::Linq::JsonCloneSettings*>(value));
}
inline ::Newtonsoft::Json::Linq::JsonCloneSettings* Newtonsoft::Json::Linq::JsonCloneSettings::getStaticF_SkipCopyAnnotations() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Linq::JsonCloneSettings*, "SkipCopyAnnotations", ::Newtonsoft::Json::Linq::JsonCloneSettings*>();
}
inline void Newtonsoft::Json::Linq::JsonCloneSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonCloneSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JsonCloneSettings::get_CopyAnnotations() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonCloneSettings*>(), { "get_CopyAnnotations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JsonCloneSettings::set_CopyAnnotations(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonCloneSettings*>(), { "set_CopyAnnotations", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JsonCloneSettings* Newtonsoft::Json::Linq::JsonCloneSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JsonCloneSettings*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JsonCloneSettings::JsonCloneSettings() {}
