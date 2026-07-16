#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Activation/ActivationServices.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__ActivationServices_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IActivator_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ConstructionCall_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Proxies/zzzz__RemotingProxy_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.get_ConstructionActivator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Activation::IActivator* (*)()>(
    &::System::Runtime::Remoting::Activation::ActivationServices::get_ConstructionActivator)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b3a978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::ActivationServices*>(), { "get_ConstructionActivator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.Activate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Remoting::Messaging::IMessage* (*)(::System::Runtime::Remoting::Proxies::RemotingProxy*, ::System::Runtime::Remoting::Messaging::ConstructionCall*)>(
        &::System::Runtime::Remoting::Activation::ActivationServices::Activate)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5b324b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Runtime::Remoting::Activation::ActivationServices*>(),
                         { "Activate", {}, { ::i2c::type_of<::System::Runtime::Remoting::Proxies::RemotingProxy*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.RemoteActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(
    &::System::Runtime::Remoting::Activation::ActivationServices::RemoteActivate)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5b3aa04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::ActivationServices*>(),
                                                             { "RemoteActivate", {}, { ::i2c::type_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.CreateConstructionCall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::ConstructionCall* (*)(::System::Type*, ::StringW, ::ArrayW<::System::Object*>)>(
    &::System::Runtime::Remoting::Activation::ActivationServices::CreateConstructionCall)> {
  constexpr static std::size_t size = 0x918;
  constexpr static std::size_t addrs = 0x5b30d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::ActivationServices*>(),
                                                { "CreateConstructionCall", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.CreateInstanceFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(
    &::System::Runtime::Remoting::Activation::ActivationServices::CreateInstanceFromMessage)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5b3abf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::ActivationServices*>(),
                                                             { "CreateInstanceFromMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.CreateProxyForType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*)>(&::System::Runtime::Remoting::Activation::ActivationServices::CreateProxyForType)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5b3add8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::ActivationServices*>(), { "CreateProxyForType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.AllocateUninitializedClassInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*)>(&::System::Runtime::Remoting::Activation::ActivationServices::AllocateUninitializedClassInstance)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b3add4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::ActivationServices*>(),
                                                                                           { "AllocateUninitializedClassInstance", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.EnableProxyActivation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, bool)>(&::System::Runtime::Remoting::Activation::ActivationServices::EnableProxyActivation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3af10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::ActivationServices*>(),
                                                                                           { "EnableProxyActivation", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Activation::ActivationServices::setStaticF__constructionActivator(::System::Runtime::Remoting::Activation::IActivator* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Remoting::Activation::IActivator*, "_constructionActivator", ::System::Runtime::Remoting::Activation::ActivationServices*>(
      std::forward<::System::Runtime::Remoting::Activation::IActivator*>(value));
}
inline ::System::Runtime::Remoting::Activation::IActivator* System::Runtime::Remoting::Activation::ActivationServices::getStaticF__constructionActivator() {
  return ::cordl_internals::getStaticField<::System::Runtime::Remoting::Activation::IActivator*, "_constructionActivator", ::System::Runtime::Remoting::Activation::ActivationServices*>();
}
inline ::System::Runtime::Remoting::Activation::IActivator* System::Runtime::Remoting::Activation::ActivationServices::get_ConstructionActivator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::ActivationServices*>(), { "get_ConstructionActivator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IActivator*>(nullptr, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Activation::ActivationServices::Activate(::System::Runtime::Remoting::Proxies::RemotingProxy* proxy,
                                                                                                                             ::System::Runtime::Remoting::Messaging::ConstructionCall* ctorCall) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Runtime::Remoting::Activation::ActivationServices*>(),
                       { "Activate", {}, { ::i2c::type_of<::System::Runtime::Remoting::Proxies::RemotingProxy*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*>(nullptr, ___internal_method, proxy, ctorCall);
}
inline ::System::Runtime::Remoting::Messaging::IMessage*
System::Runtime::Remoting::Activation::ActivationServices::RemoteActivate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::ActivationServices*>(),
                                                           { "RemoteActivate", {}, { ::i2c::type_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*>(nullptr, ___internal_method, ctorCall);
}
inline ::System::Runtime::Remoting::Messaging::ConstructionCall* System::Runtime::Remoting::Activation::ActivationServices::CreateConstructionCall(::System::Type* type, ::StringW activationUrl,
                                                                                                                                                   ::ArrayW<::System::Object*> activationAttributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::ActivationServices*>(),
                                              { "CreateConstructionCall", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::ConstructionCall*>(nullptr, ___internal_method, type, activationUrl, activationAttributes);
}
inline ::System::Runtime::Remoting::Messaging::IMessage*
System::Runtime::Remoting::Activation::ActivationServices::CreateInstanceFromMessage(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::ActivationServices*>(),
                                                           { "CreateInstanceFromMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*>(nullptr, ___internal_method, ctorCall);
}
inline ::System::Object* System::Runtime::Remoting::Activation::ActivationServices::CreateProxyForType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::ActivationServices*>(), { "CreateProxyForType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type);
}
inline ::System::Object* System::Runtime::Remoting::Activation::ActivationServices::AllocateUninitializedClassInstance(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::ActivationServices*>(),
                                                                                         { "AllocateUninitializedClassInstance", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type);
}
inline void System::Runtime::Remoting::Activation::ActivationServices::EnableProxyActivation(::System::Type* type, bool enable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::ActivationServices*>(),
                                                                                         { "EnableProxyActivation", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, enable);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Activation::ActivationServices::ActivationServices() {}
