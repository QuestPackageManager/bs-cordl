#pragma once
// IWYU pragma private; include "Unity\Properties\MissingPropertyBagException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Unity/Properties/zzzz__MissingPropertyBagException_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Unity::Properties::MissingPropertyBagException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::MissingPropertyBagException::*)(::System::Type*)>(&::Unity::Properties::MissingPropertyBagException::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b9e5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::MissingPropertyBagException*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::MissingPropertyBagException.GetMessageForType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::Unity::Properties::MissingPropertyBagException::GetMessageForType)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b9e638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::MissingPropertyBagException*>(), { "GetMessageForType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Unity::Properties::MissingPropertyBagException::__cordl_internal_get__Type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr ::System::Type* const& Unity::Properties::MissingPropertyBagException::__cordl_internal_get__Type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr void Unity::Properties::MissingPropertyBagException::__cordl_internal_set__Type_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Type_k__BackingField = value;
}
inline void Unity::Properties::MissingPropertyBagException::_ctor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::MissingPropertyBagException*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::StringW Unity::Properties::MissingPropertyBagException::GetMessageForType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::MissingPropertyBagException*>(), { "GetMessageForType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline ::Unity::Properties::MissingPropertyBagException* Unity::Properties::MissingPropertyBagException::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::MissingPropertyBagException*>(type));
}
// Ctor Parameters []
constexpr ::Unity::Properties::MissingPropertyBagException::MissingPropertyBagException() {}
