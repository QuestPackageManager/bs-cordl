#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/InternalRemotingServices.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/zzzz__InternalRemotingServices_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::InternalRemotingServices.GetCachedSoapAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Metadata::SoapAttribute* (*)(::System::Object*)>(
    &::System::Runtime::Remoting::InternalRemotingServices::GetCachedSoapAttribute)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x5b1f0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::InternalRemotingServices*>(), { "GetCachedSoapAttribute", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::InternalRemotingServices::setStaticF__soapAttributes(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_soapAttributes", ::System::Runtime::Remoting::InternalRemotingServices*>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::InternalRemotingServices::getStaticF__soapAttributes() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_soapAttributes", ::System::Runtime::Remoting::InternalRemotingServices*>();
}
inline ::System::Runtime::Remoting::Metadata::SoapAttribute* System::Runtime::Remoting::InternalRemotingServices::GetCachedSoapAttribute(::System::Object* reflectionObject) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::InternalRemotingServices*>(), { "GetCachedSoapAttribute", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Metadata::SoapAttribute*>(nullptr, ___internal_method, reflectionObject);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::InternalRemotingServices::InternalRemotingServices() {}
