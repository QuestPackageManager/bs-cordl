#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\DecimalConstantAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Decimal_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__DecimalConstantAttribute_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::DecimalConstantAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::DecimalConstantAttribute::*)(uint8_t, uint8_t, uint32_t, uint32_t, uint32_t)>(
    &::System::Runtime::CompilerServices::DecimalConstantAttribute::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b70368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::DecimalConstantAttribute*>(),
                            { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::DecimalConstantAttribute.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Runtime::CompilerServices::DecimalConstantAttribute::*)()>(
    &::System::Runtime::CompilerServices::DecimalConstantAttribute::get_Value)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b703dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::DecimalConstantAttribute*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Decimal& System::Runtime::CompilerServices::DecimalConstantAttribute::__cordl_internal_get__dec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dec;
}
constexpr ::System::Decimal const& System::Runtime::CompilerServices::DecimalConstantAttribute::__cordl_internal_get__dec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dec;
}
constexpr void System::Runtime::CompilerServices::DecimalConstantAttribute::__cordl_internal_set__dec(::System::Decimal value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dec = value;
}
inline void System::Runtime::CompilerServices::DecimalConstantAttribute::_ctor(uint8_t scale, uint8_t sign, uint32_t hi, uint32_t mid, uint32_t low) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::DecimalConstantAttribute*>(),
                                       { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scale, sign, hi, mid, low);
}
inline ::System::Decimal System::Runtime::CompilerServices::DecimalConstantAttribute::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::DecimalConstantAttribute*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::DecimalConstantAttribute* System::Runtime::CompilerServices::DecimalConstantAttribute::New_ctor(uint8_t scale, uint8_t sign, uint32_t hi, uint32_t mid,
                                                                                                                                            uint32_t low) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::DecimalConstantAttribute*>(scale, sign, hi, mid, low));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::DecimalConstantAttribute::DecimalConstantAttribute() {}
