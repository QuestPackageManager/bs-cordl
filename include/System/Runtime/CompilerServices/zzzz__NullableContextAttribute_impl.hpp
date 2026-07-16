#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/NullableContextAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__NullableContextAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::NullableContextAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::NullableContextAttribute::*)(uint8_t)>(
    &::System::Runtime::CompilerServices::NullableContextAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bbdfac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::NullableContextAttribute*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
constexpr uint8_t& System::Runtime::CompilerServices::NullableContextAttribute::__cordl_internal_get_Flag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Flag;
}
constexpr uint8_t const& System::Runtime::CompilerServices::NullableContextAttribute::__cordl_internal_get_Flag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Flag;
}
constexpr void System::Runtime::CompilerServices::NullableContextAttribute::__cordl_internal_set_Flag(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Flag = value;
}
inline void System::Runtime::CompilerServices::NullableContextAttribute::_ctor(uint8_t _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::NullableContextAttribute*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::Runtime::CompilerServices::NullableContextAttribute* System::Runtime::CompilerServices::NullableContextAttribute::New_ctor(uint8_t _cordl_fixed_empty_name_whitespace) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::NullableContextAttribute*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::NullableContextAttribute::NullableContextAttribute() {}
