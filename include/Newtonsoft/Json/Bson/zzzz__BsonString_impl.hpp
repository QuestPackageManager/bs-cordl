#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonString.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonValue_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonString_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonString.get_ByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Bson::BsonString::*)()>(&::Newtonsoft::Json::Bson::BsonString::get_ByteCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dac640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonString*>(), { "get_ByteCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonString.set_ByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonString::*)(int32_t)>(&::Newtonsoft::Json::Bson::BsonString::set_ByteCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dac648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonString*>(), { "set_ByteCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonString.get_IncludeLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Bson::BsonString::*)()>(&::Newtonsoft::Json::Bson::BsonString::get_IncludeLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dac650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonString*>(), { "get_IncludeLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonString::*)(::System::Object*, bool)>(&::Newtonsoft::Json::Bson::BsonString::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5dac2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonString*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Newtonsoft::Json::Bson::BsonString::__cordl_internal_get__ByteCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ByteCount_k__BackingField;
}
constexpr int32_t const& Newtonsoft::Json::Bson::BsonString::__cordl_internal_get__ByteCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ByteCount_k__BackingField;
}
constexpr void Newtonsoft::Json::Bson::BsonString::__cordl_internal_set__ByteCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ByteCount_k__BackingField = value;
}
constexpr bool& Newtonsoft::Json::Bson::BsonString::__cordl_internal_get__IncludeLength_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IncludeLength_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::Bson::BsonString::__cordl_internal_get__IncludeLength_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IncludeLength_k__BackingField;
}
constexpr void Newtonsoft::Json::Bson::BsonString::__cordl_internal_set__IncludeLength_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IncludeLength_k__BackingField = value;
}
inline int32_t Newtonsoft::Json::Bson::BsonString::get_ByteCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonString*>(), { "get_ByteCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonString::set_ByteCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonString*>(), { "set_ByteCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::Bson::BsonString::get_IncludeLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonString*>(), { "get_IncludeLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonString::_ctor(::System::Object* value, bool includeLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonString*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, includeLength);
}
inline ::Newtonsoft::Json::Bson::BsonString* Newtonsoft::Json::Bson::BsonString::New_ctor(::System::Object* value, bool includeLength) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Bson::BsonString*>(value, includeLength));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonString::BsonString() {}
