#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/MCMDictionary.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MessageDictionary_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MCMDictionary_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MCMDictionary._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MCMDictionary::*)(::System::Runtime::Remoting::Messaging::IMethodMessage*)>(
    &::System::Runtime::Remoting::Messaging::MCMDictionary::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b43ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MCMDictionary*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodMessage*>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Messaging::MCMDictionary::setStaticF_InternalKeys(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "InternalKeys", ::System::Runtime::Remoting::Messaging::MCMDictionary*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Runtime::Remoting::Messaging::MCMDictionary::getStaticF_InternalKeys() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "InternalKeys", ::System::Runtime::Remoting::Messaging::MCMDictionary*>();
}
inline void System::Runtime::Remoting::Messaging::MCMDictionary::_ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MCMDictionary*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::System::Runtime::Remoting::Messaging::MCMDictionary* System::Runtime::Remoting::Messaging::MCMDictionary::New_ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::MCMDictionary*>(message));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::MCMDictionary::MCMDictionary() {}
