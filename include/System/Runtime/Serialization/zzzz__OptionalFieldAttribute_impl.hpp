#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\OptionalFieldAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Serialization/zzzz__OptionalFieldAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::OptionalFieldAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::OptionalFieldAttribute::*)()>(&::System::Runtime::Serialization::OptionalFieldAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b54f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::OptionalFieldAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::OptionalFieldAttribute.set_VersionAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::OptionalFieldAttribute::*)(int32_t)>(
    &::System::Runtime::Serialization::OptionalFieldAttribute::set_VersionAdded)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b54f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::OptionalFieldAttribute*>(), { "set_VersionAdded", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::Serialization::OptionalFieldAttribute::__cordl_internal_get_versionAdded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versionAdded;
}
constexpr int32_t const& System::Runtime::Serialization::OptionalFieldAttribute::__cordl_internal_get_versionAdded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versionAdded;
}
constexpr void System::Runtime::Serialization::OptionalFieldAttribute::__cordl_internal_set_versionAdded(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___versionAdded = value;
}
inline void System::Runtime::Serialization::OptionalFieldAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::OptionalFieldAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::OptionalFieldAttribute::set_VersionAdded(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::OptionalFieldAttribute*>(), { "set_VersionAdded", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::OptionalFieldAttribute* System::Runtime::Serialization::OptionalFieldAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::OptionalFieldAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::OptionalFieldAttribute::OptionalFieldAttribute() {}
