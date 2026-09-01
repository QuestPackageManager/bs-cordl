#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Linq\JsonSelectSettings.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonSelectSettings_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonSelectSettings.get_RegexMatchTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::TimeSpan> (::Newtonsoft::Json::Linq::JsonSelectSettings::*)()>(
    &::Newtonsoft::Json::Linq::JsonSelectSettings::get_RegexMatchTimeout)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d7b000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonSelectSettings*>(), { "get_RegexMatchTimeout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonSelectSettings.set_RegexMatchTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JsonSelectSettings::*)(::System::Nullable_1<::System::TimeSpan>)>(
    &::Newtonsoft::Json::Linq::JsonSelectSettings::set_RegexMatchTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d7b00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonSelectSettings*>(),
                                                                                           { "set_RegexMatchTimeout", {}, { ::i2c::type_of<::System::Nullable_1<::System::TimeSpan>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonSelectSettings.get_ErrorWhenNoMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JsonSelectSettings::*)()>(&::Newtonsoft::Json::Linq::JsonSelectSettings::get_ErrorWhenNoMatch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d7b014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonSelectSettings*>(), { "get_ErrorWhenNoMatch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonSelectSettings.set_ErrorWhenNoMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JsonSelectSettings::*)(bool)>(&::Newtonsoft::Json::Linq::JsonSelectSettings::set_ErrorWhenNoMatch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d7b01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonSelectSettings*>(), { "set_ErrorWhenNoMatch", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonSelectSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JsonSelectSettings::*)()>(&::Newtonsoft::Json::Linq::JsonSelectSettings::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d7b024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonSelectSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::System::TimeSpan>& Newtonsoft::Json::Linq::JsonSelectSettings::__cordl_internal_get__RegexMatchTimeout_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RegexMatchTimeout_k__BackingField;
}
constexpr ::System::Nullable_1<::System::TimeSpan> const& Newtonsoft::Json::Linq::JsonSelectSettings::__cordl_internal_get__RegexMatchTimeout_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RegexMatchTimeout_k__BackingField;
}
constexpr void Newtonsoft::Json::Linq::JsonSelectSettings::__cordl_internal_set__RegexMatchTimeout_k__BackingField(::System::Nullable_1<::System::TimeSpan> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____RegexMatchTimeout_k__BackingField = value;
}
constexpr bool& Newtonsoft::Json::Linq::JsonSelectSettings::__cordl_internal_get__ErrorWhenNoMatch_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ErrorWhenNoMatch_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::Linq::JsonSelectSettings::__cordl_internal_get__ErrorWhenNoMatch_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ErrorWhenNoMatch_k__BackingField;
}
constexpr void Newtonsoft::Json::Linq::JsonSelectSettings::__cordl_internal_set__ErrorWhenNoMatch_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ErrorWhenNoMatch_k__BackingField = value;
}
inline ::System::Nullable_1<::System::TimeSpan> Newtonsoft::Json::Linq::JsonSelectSettings::get_RegexMatchTimeout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonSelectSettings*>(), { "get_RegexMatchTimeout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::TimeSpan>>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JsonSelectSettings::set_RegexMatchTimeout(::System::Nullable_1<::System::TimeSpan> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonSelectSettings*>(),
                                                                                         { "set_RegexMatchTimeout", {}, { ::i2c::type_of<::System::Nullable_1<::System::TimeSpan>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::Linq::JsonSelectSettings::get_ErrorWhenNoMatch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonSelectSettings*>(), { "get_ErrorWhenNoMatch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JsonSelectSettings::set_ErrorWhenNoMatch(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonSelectSettings*>(), { "set_ErrorWhenNoMatch", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JsonSelectSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonSelectSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JsonSelectSettings* Newtonsoft::Json::Linq::JsonSelectSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JsonSelectSettings*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JsonSelectSettings::JsonSelectSettings() {}
