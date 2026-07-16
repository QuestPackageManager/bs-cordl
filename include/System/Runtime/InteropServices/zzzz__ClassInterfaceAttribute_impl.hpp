#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/ClassInterfaceAttribute.hpp"
#include "System/Runtime/InteropServices/zzzz__ClassInterfaceType_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__ClassInterfaceAttribute_def.hpp"
#include "System/Runtime/InteropServices/zzzz__ClassInterfaceType_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::ClassInterfaceAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::ClassInterfaceAttribute::*)(::System::Runtime::InteropServices::ClassInterfaceType)>(
    &::System::Runtime::InteropServices::ClassInterfaceAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6a178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::ClassInterfaceAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::InteropServices::ClassInterfaceType>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::ClassInterfaceType& System::Runtime::InteropServices::ClassInterfaceAttribute::__cordl_internal_get__val() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____val;
}
constexpr ::System::Runtime::InteropServices::ClassInterfaceType const& System::Runtime::InteropServices::ClassInterfaceAttribute::__cordl_internal_get__val() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____val;
}
constexpr void System::Runtime::InteropServices::ClassInterfaceAttribute::__cordl_internal_set__val(::System::Runtime::InteropServices::ClassInterfaceType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____val = value;
}
inline void System::Runtime::InteropServices::ClassInterfaceAttribute::_ctor(::System::Runtime::InteropServices::ClassInterfaceType classInterfaceType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::ClassInterfaceAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::InteropServices::ClassInterfaceType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, classInterfaceType);
}
inline ::System::Runtime::InteropServices::ClassInterfaceAttribute*
System::Runtime::InteropServices::ClassInterfaceAttribute::New_ctor(::System::Runtime::InteropServices::ClassInterfaceType classInterfaceType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::InteropServices::ClassInterfaceAttribute*>(classInterfaceType));
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::ClassInterfaceAttribute::ClassInterfaceAttribute() {}
