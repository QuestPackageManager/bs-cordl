#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Messaging\ConstructionCallDictionary.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MessageDictionary_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ConstructionCallDictionary_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCallDictionary._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCallDictionary::*)(
    ::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&::System::Runtime::Remoting::Messaging::ConstructionCallDictionary::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b434d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCallDictionary.GetMethodProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::ConstructionCallDictionary::*)(::StringW)>(
    &::System::Runtime::Remoting::Messaging::ConstructionCallDictionary::GetMethodProperty)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x5b44438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCallDictionary.SetMethodProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCallDictionary::*)(::StringW, ::System::Object*)>(
    &::System::Runtime::Remoting::Messaging::ConstructionCallDictionary::SetMethodProperty)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5b44dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*>(), 22 }));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Messaging::ConstructionCallDictionary::setStaticF_InternalKeys(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "InternalKeys", ::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Runtime::Remoting::Messaging::ConstructionCallDictionary::getStaticF_InternalKeys() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "InternalKeys", ::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*>();
}
inline void System::Runtime::Remoting::Messaging::ConstructionCallDictionary::_ctor(::System::Runtime::Remoting::Activation::IConstructionCallMessage* message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::ConstructionCallDictionary::GetMethodProperty(::StringW key) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
inline void System::Runtime::Remoting::Messaging::ConstructionCallDictionary::SetMethodProperty(::StringW key, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline ::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*
System::Runtime::Remoting::Messaging::ConstructionCallDictionary::New_ctor(::System::Runtime::Remoting::Activation::IConstructionCallMessage* message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*>(message));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::ConstructionCallDictionary::ConstructionCallDictionary() {}
