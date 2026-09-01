#pragma once
// IWYU pragma private; include "System\Runtime\InteropServices\InterfaceTypeAttribute.hpp"
#include "System/Runtime/InteropServices/zzzz__ComInterfaceType_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__InterfaceTypeAttribute_def.hpp"
#include "System/Runtime/InteropServices/zzzz__ComInterfaceType_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::InterfaceTypeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::InterfaceTypeAttribute::*)(::System::Runtime::InteropServices::ComInterfaceType)>(
    &::System::Runtime::InteropServices::InterfaceTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6c468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::InterfaceTypeAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::InteropServices::ComInterfaceType>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::ComInterfaceType& System::Runtime::InteropServices::InterfaceTypeAttribute::__cordl_internal_get__val() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____val;
}
constexpr ::System::Runtime::InteropServices::ComInterfaceType const& System::Runtime::InteropServices::InterfaceTypeAttribute::__cordl_internal_get__val() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____val;
}
constexpr void System::Runtime::InteropServices::InterfaceTypeAttribute::__cordl_internal_set__val(::System::Runtime::InteropServices::ComInterfaceType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____val = value;
}
inline void System::Runtime::InteropServices::InterfaceTypeAttribute::_ctor(::System::Runtime::InteropServices::ComInterfaceType interfaceType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::InterfaceTypeAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::InteropServices::ComInterfaceType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interfaceType);
}
inline ::System::Runtime::InteropServices::InterfaceTypeAttribute*
System::Runtime::InteropServices::InterfaceTypeAttribute::New_ctor(::System::Runtime::InteropServices::ComInterfaceType interfaceType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::InteropServices::InterfaceTypeAttribute*>(interfaceType));
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::InterfaceTypeAttribute::InterfaceTypeAttribute() {}
