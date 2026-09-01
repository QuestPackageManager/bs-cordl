#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Messaging\MethodReturnDictionary.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MessageDictionary_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MethodReturnDictionary_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodReturnMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodReturnDictionary._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MethodReturnDictionary::*)(::System::Runtime::Remoting::Messaging::IMethodReturnMessage*)>(
    &::System::Runtime::Remoting::Messaging::MethodReturnDictionary::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5b48d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodReturnDictionary*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Messaging::MethodReturnDictionary::setStaticF_InternalReturnKeys(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "InternalReturnKeys", ::System::Runtime::Remoting::Messaging::MethodReturnDictionary*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Runtime::Remoting::Messaging::MethodReturnDictionary::getStaticF_InternalReturnKeys() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "InternalReturnKeys", ::System::Runtime::Remoting::Messaging::MethodReturnDictionary*>();
}
inline void System::Runtime::Remoting::Messaging::MethodReturnDictionary::setStaticF_InternalExceptionKeys(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "InternalExceptionKeys", ::System::Runtime::Remoting::Messaging::MethodReturnDictionary*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Runtime::Remoting::Messaging::MethodReturnDictionary::getStaticF_InternalExceptionKeys() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "InternalExceptionKeys", ::System::Runtime::Remoting::Messaging::MethodReturnDictionary*>();
}
inline void System::Runtime::Remoting::Messaging::MethodReturnDictionary::_ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodReturnDictionary*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::System::Runtime::Remoting::Messaging::MethodReturnDictionary*
System::Runtime::Remoting::Messaging::MethodReturnDictionary::New_ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::MethodReturnDictionary*>(message));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::MethodReturnDictionary::MethodReturnDictionary() {}
