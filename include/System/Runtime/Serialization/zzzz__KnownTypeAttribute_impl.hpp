#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\KnownTypeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Serialization/zzzz__KnownTypeAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::KnownTypeAttribute.get_MethodName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::KnownTypeAttribute::*)()>(&::System::Runtime::Serialization::KnownTypeAttribute::get_MethodName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6157e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::KnownTypeAttribute*>(), { "get_MethodName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::KnownTypeAttribute.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::KnownTypeAttribute::*)()>(&::System::Runtime::Serialization::KnownTypeAttribute::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6157e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::KnownTypeAttribute*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Serialization::KnownTypeAttribute::__cordl_internal_get_methodName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodName;
}
constexpr ::StringW const& System::Runtime::Serialization::KnownTypeAttribute::__cordl_internal_get_methodName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodName;
}
constexpr void System::Runtime::Serialization::KnownTypeAttribute::__cordl_internal_set_methodName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___methodName = value;
}
constexpr ::System::Type*& System::Runtime::Serialization::KnownTypeAttribute::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& System::Runtime::Serialization::KnownTypeAttribute::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Runtime::Serialization::KnownTypeAttribute::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
inline ::StringW System::Runtime::Serialization::KnownTypeAttribute::get_MethodName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::KnownTypeAttribute*>(), { "get_MethodName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Serialization::KnownTypeAttribute::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::KnownTypeAttribute*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::KnownTypeAttribute::KnownTypeAttribute() {}
