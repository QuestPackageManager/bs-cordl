#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Serialization\JsonISerializableContract.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContainerContract_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonISerializableContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ObjectConstructor_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonISerializableContract.get_ISerializableCreator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* (::Newtonsoft::Json::Serialization::JsonISerializableContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonISerializableContract::get_ISerializableCreator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonISerializableContract*>(), { "get_ISerializableCreator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonISerializableContract.set_ISerializableCreator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonISerializableContract::*)(
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*)>(&::Newtonsoft::Json::Serialization::JsonISerializableContract::set_ISerializableCreator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonISerializableContract*>(),
                                                             { "set_ISerializableCreator", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonISerializableContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonISerializableContract::*)(::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonISerializableContract::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d3d350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonISerializableContract*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*&
Newtonsoft::Json::Serialization::JsonISerializableContract::__cordl_internal_get__ISerializableCreator_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ISerializableCreator_k__BackingField;
}
constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* const&
Newtonsoft::Json::Serialization::JsonISerializableContract::__cordl_internal_get__ISerializableCreator_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ISerializableCreator_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::JsonISerializableContract::__cordl_internal_set__ISerializableCreator_k__BackingField(
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ISerializableCreator_k__BackingField = value;
}
inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* Newtonsoft::Json::Serialization::JsonISerializableContract::get_ISerializableCreator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonISerializableContract*>(), { "get_ISerializableCreator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonISerializableContract::set_ISerializableCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonISerializableContract*>(),
                                                           { "set_ISerializableCreator", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::JsonISerializableContract::_ctor(::System::Type* underlyingType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonISerializableContract*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, underlyingType);
}
inline ::Newtonsoft::Json::Serialization::JsonISerializableContract* Newtonsoft::Json::Serialization::JsonISerializableContract::New_ctor(::System::Type* underlyingType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::JsonISerializableContract*>(underlyingType));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonISerializableContract::JsonISerializableContract() {}
