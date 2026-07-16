#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/RuntimeCompatibilityAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__RuntimeCompatibilityAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::*)()>(
    &::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b6e25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute.set_WrapNonExceptionThrows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::*)(bool)>(
    &::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6e260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute*>(), { "set_WrapNonExceptionThrows", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::__cordl_internal_get__WrapNonExceptionThrows_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WrapNonExceptionThrows_k__BackingField;
}
constexpr bool const& System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::__cordl_internal_get__WrapNonExceptionThrows_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WrapNonExceptionThrows_k__BackingField;
}
constexpr void System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::__cordl_internal_set__WrapNonExceptionThrows_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____WrapNonExceptionThrows_k__BackingField = value;
}
inline void System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute*>(), { "set_WrapNonExceptionThrows", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute* System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::RuntimeCompatibilityAttribute() {}
