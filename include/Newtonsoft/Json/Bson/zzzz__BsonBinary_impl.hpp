#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Bson\BsonBinary.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonBinaryType_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonValue_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonBinary_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonBinaryType_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinary.get_BinaryType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Bson::BsonBinaryType (::Newtonsoft::Json::Bson::BsonBinary::*)()>(&::Newtonsoft::Json::Bson::BsonBinary::get_BinaryType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dae880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinary*>(), { "get_BinaryType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinary.set_BinaryType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonBinary::*)(::Newtonsoft::Json::Bson::BsonBinaryType)>(
    &::Newtonsoft::Json::Bson::BsonBinary::set_BinaryType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dae888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinary*>(), { "set_BinaryType", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonBinaryType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinary._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonBinary::*)(::ArrayW<uint8_t>, ::Newtonsoft::Json::Bson::BsonBinaryType)>(
    &::Newtonsoft::Json::Bson::BsonBinary::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5dae890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinary*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Newtonsoft::Json::Bson::BsonBinaryType>() } })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType& Newtonsoft::Json::Bson::BsonBinary::__cordl_internal_get__BinaryType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BinaryType_k__BackingField;
}
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType const& Newtonsoft::Json::Bson::BsonBinary::__cordl_internal_get__BinaryType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BinaryType_k__BackingField;
}
constexpr void Newtonsoft::Json::Bson::BsonBinary::__cordl_internal_set__BinaryType_k__BackingField(::Newtonsoft::Json::Bson::BsonBinaryType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BinaryType_k__BackingField = value;
}
inline ::Newtonsoft::Json::Bson::BsonBinaryType Newtonsoft::Json::Bson::BsonBinary::get_BinaryType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinary*>(), { "get_BinaryType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Bson::BsonBinaryType>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonBinary::set_BinaryType(::Newtonsoft::Json::Bson::BsonBinaryType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinary*>(), { "set_BinaryType", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonBinaryType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonBinary::_ctor(::ArrayW<uint8_t> value, ::Newtonsoft::Json::Bson::BsonBinaryType binaryType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinary*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Newtonsoft::Json::Bson::BsonBinaryType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, binaryType);
}
inline ::Newtonsoft::Json::Bson::BsonBinary* Newtonsoft::Json::Bson::BsonBinary::New_ctor(::ArrayW<uint8_t> value, ::Newtonsoft::Json::Bson::BsonBinaryType binaryType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Bson::BsonBinary*>(value, binaryType));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonBinary::BsonBinary() {}
