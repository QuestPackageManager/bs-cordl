#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Metadata/SoapParameterAttribute.hpp"
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_impl.hpp"
#include "System/Runtime/Remoting/Metadata/zzzz__SoapParameterAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapParameterAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Metadata::SoapParameterAttribute::*)()>(
    &::System::Runtime::Remoting::Metadata::SoapParameterAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b3c204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Metadata::SoapParameterAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Metadata::SoapParameterAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Metadata::SoapParameterAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Metadata::SoapParameterAttribute* System::Runtime::Remoting::Metadata::SoapParameterAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Metadata::SoapParameterAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Metadata::SoapParameterAttribute::SoapParameterAttribute() {}
