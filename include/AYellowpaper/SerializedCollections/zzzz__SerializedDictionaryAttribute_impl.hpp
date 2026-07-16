#pragma once
// IWYU pragma private; include "AYellowpaper/SerializedCollections/SerializedDictionaryAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "AYellowpaper/SerializedCollections/zzzz__SerializedDictionaryAttribute_def.hpp"
//  Writing Method size for method: ::AYellowpaper::SerializedCollections::SerializedDictionaryAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AYellowpaper::SerializedCollections::SerializedDictionaryAttribute::*)(::StringW, ::StringW)>(
    &::AYellowpaper::SerializedCollections::SerializedDictionaryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3257254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AYellowpaper::SerializedCollections::SerializedDictionaryAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& AYellowpaper::SerializedCollections::SerializedDictionaryAttribute::__cordl_internal_get_KeyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KeyName;
}
constexpr ::StringW const& AYellowpaper::SerializedCollections::SerializedDictionaryAttribute::__cordl_internal_get_KeyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KeyName;
}
constexpr void AYellowpaper::SerializedCollections::SerializedDictionaryAttribute::__cordl_internal_set_KeyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___KeyName = value;
}
constexpr ::StringW& AYellowpaper::SerializedCollections::SerializedDictionaryAttribute::__cordl_internal_get_ValueName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ValueName;
}
constexpr ::StringW const& AYellowpaper::SerializedCollections::SerializedDictionaryAttribute::__cordl_internal_get_ValueName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ValueName;
}
constexpr void AYellowpaper::SerializedCollections::SerializedDictionaryAttribute::__cordl_internal_set_ValueName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ValueName = value;
}
inline void AYellowpaper::SerializedCollections::SerializedDictionaryAttribute::_ctor(::StringW keyName, ::StringW valueName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AYellowpaper::SerializedCollections::SerializedDictionaryAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyName, valueName);
}
inline ::AYellowpaper::SerializedCollections::SerializedDictionaryAttribute* AYellowpaper::SerializedCollections::SerializedDictionaryAttribute::New_ctor(::StringW keyName, ::StringW valueName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::AYellowpaper::SerializedCollections::SerializedDictionaryAttribute*>(keyName, valueName));
}
// Ctor Parameters []
constexpr ::AYellowpaper::SerializedCollections::SerializedDictionaryAttribute::SerializedDictionaryAttribute() {}
