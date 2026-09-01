#pragma once
// IWYU pragma private; include "System\Runtime\InteropServices\ComVisibleAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__ComVisibleAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::ComVisibleAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::ComVisibleAttribute::*)(bool)>(&::System::Runtime::InteropServices::ComVisibleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6c480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::ComVisibleAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& System::Runtime::InteropServices::ComVisibleAttribute::__cordl_internal_get__val() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____val;
}
constexpr bool const& System::Runtime::InteropServices::ComVisibleAttribute::__cordl_internal_get__val() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____val;
}
constexpr void System::Runtime::InteropServices::ComVisibleAttribute::__cordl_internal_set__val(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____val = value;
}
inline void System::Runtime::InteropServices::ComVisibleAttribute::_ctor(bool visibility) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::ComVisibleAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visibility);
}
inline ::System::Runtime::InteropServices::ComVisibleAttribute* System::Runtime::InteropServices::ComVisibleAttribute::New_ctor(bool visibility) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::InteropServices::ComVisibleAttribute*>(visibility));
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::ComVisibleAttribute::ComVisibleAttribute() {}
