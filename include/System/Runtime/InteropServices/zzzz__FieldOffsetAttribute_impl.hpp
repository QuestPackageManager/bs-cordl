#pragma once
// IWYU pragma private; include "System\Runtime\InteropServices\FieldOffsetAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__FieldOffsetAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::FieldOffsetAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::FieldOffsetAttribute::*)(int32_t)>(&::System::Runtime::InteropServices::FieldOffsetAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6c5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::FieldOffsetAttribute*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::InteropServices::FieldOffsetAttribute::__cordl_internal_get__val() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____val;
}
constexpr int32_t const& System::Runtime::InteropServices::FieldOffsetAttribute::__cordl_internal_get__val() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____val;
}
constexpr void System::Runtime::InteropServices::FieldOffsetAttribute::__cordl_internal_set__val(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____val = value;
}
inline void System::Runtime::InteropServices::FieldOffsetAttribute::_ctor(int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::FieldOffsetAttribute*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset);
}
inline ::System::Runtime::InteropServices::FieldOffsetAttribute* System::Runtime::InteropServices::FieldOffsetAttribute::New_ctor(int32_t offset) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::InteropServices::FieldOffsetAttribute*>(offset));
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::FieldOffsetAttribute::FieldOffsetAttribute() {}
