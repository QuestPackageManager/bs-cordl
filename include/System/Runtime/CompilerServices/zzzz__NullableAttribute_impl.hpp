#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/NullableAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__NullableAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::NullableAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::NullableAttribute::*)(uint8_t)>(&::System::Runtime::CompilerServices::NullableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x32c1cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::NullableAttribute*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::NullableAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::NullableAttribute::*)(::ArrayW<uint8_t>)>(
    &::System::Runtime::CompilerServices::NullableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32c1d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::NullableAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Runtime::CompilerServices::NullableAttribute::__cordl_internal_get_NullableFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NullableFlags;
}
constexpr ::ArrayW<uint8_t> const& System::Runtime::CompilerServices::NullableAttribute::__cordl_internal_get_NullableFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NullableFlags;
}
constexpr void System::Runtime::CompilerServices::NullableAttribute::__cordl_internal_set_NullableFlags(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NullableFlags = value;
}
inline void System::Runtime::CompilerServices::NullableAttribute::_ctor(uint8_t _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::NullableAttribute*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void System::Runtime::CompilerServices::NullableAttribute::_ctor(::ArrayW<uint8_t> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::NullableAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::Runtime::CompilerServices::NullableAttribute* System::Runtime::CompilerServices::NullableAttribute::New_ctor(uint8_t _cordl_fixed_empty_name_whitespace) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::NullableAttribute*>(_cordl_fixed_empty_name_whitespace));
}
inline ::System::Runtime::CompilerServices::NullableAttribute* System::Runtime::CompilerServices::NullableAttribute::New_ctor(::ArrayW<uint8_t> _cordl_fixed_empty_name_whitespace) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::NullableAttribute*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::NullableAttribute::NullableAttribute() {}
