#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/ClientActivatedIdentity.hpp"
#include "System/Runtime/Remoting/zzzz__ServerIdentity_impl.hpp"
#include "System/Runtime/Remoting/zzzz__ClientActivatedIdentity_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::ClientActivatedIdentity._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ClientActivatedIdentity::*)(::StringW, ::System::Type*)>(
    &::System::Runtime::Remoting::ClientActivatedIdentity::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b2b048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ClientActivatedIdentity*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ClientActivatedIdentity.GetServerObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::MarshalByRefObject* (::System::Runtime::Remoting::ClientActivatedIdentity::*)()>(
    &::System::Runtime::Remoting::ClientActivatedIdentity::GetServerObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2cc64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ClientActivatedIdentity*>(), { "GetServerObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ClientActivatedIdentity.SetClientProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ClientActivatedIdentity::*)(::System::MarshalByRefObject*)>(
    &::System::Runtime::Remoting::ClientActivatedIdentity::SetClientProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2cc6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ClientActivatedIdentity*>(), { "SetClientProxy", {}, { ::i2c::type_of<::System::MarshalByRefObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ClientActivatedIdentity.OnLifetimeExpired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ClientActivatedIdentity::*)()>(&::System::Runtime::Remoting::ClientActivatedIdentity::OnLifetimeExpired)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b2cc74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ClientActivatedIdentity*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::ClientActivatedIdentity*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ClientActivatedIdentity.SyncObjectProcessMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (
    ::System::Runtime::Remoting::ClientActivatedIdentity::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&::System::Runtime::Remoting::ClientActivatedIdentity::SyncObjectProcessMessage)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5b2ccd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ClientActivatedIdentity*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::ClientActivatedIdentity*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ClientActivatedIdentity.AsyncObjectProcessMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl* (
    ::System::Runtime::Remoting::ClientActivatedIdentity::*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(
    &::System::Runtime::Remoting::ClientActivatedIdentity::AsyncObjectProcessMessage)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5b2cf78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ClientActivatedIdentity*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::ClientActivatedIdentity*>(), 7 }));
    return ___internal_method;
  }
};
constexpr ::System::MarshalByRefObject*& System::Runtime::Remoting::ClientActivatedIdentity::__cordl_internal_get__targetThis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetThis;
}
constexpr ::System::MarshalByRefObject* const& System::Runtime::Remoting::ClientActivatedIdentity::__cordl_internal_get__targetThis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetThis;
}
constexpr void System::Runtime::Remoting::ClientActivatedIdentity::__cordl_internal_set__targetThis(::System::MarshalByRefObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetThis = value;
}
inline void System::Runtime::Remoting::ClientActivatedIdentity::_ctor(::StringW objectUri, ::System::Type* objectType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ClientActivatedIdentity*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectUri, objectType);
}
inline ::System::MarshalByRefObject* System::Runtime::Remoting::ClientActivatedIdentity::GetServerObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ClientActivatedIdentity*>(), { "GetServerObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::MarshalByRefObject*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::ClientActivatedIdentity::SetClientProxy(::System::MarshalByRefObject* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ClientActivatedIdentity*>(), { "SetClientProxy", {}, { ::i2c::type_of<::System::MarshalByRefObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void System::Runtime::Remoting::ClientActivatedIdentity::OnLifetimeExpired() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::ClientActivatedIdentity*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::ClientActivatedIdentity::SyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::ClientActivatedIdentity*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*>(this, ___internal_method, msg);
}
inline ::System::Runtime::Remoting::Messaging::IMessageCtrl*
System::Runtime::Remoting::ClientActivatedIdentity::AsyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::ClientActivatedIdentity*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageCtrl*>(this, ___internal_method, msg, replySink);
}
inline ::System::Runtime::Remoting::ClientActivatedIdentity* System::Runtime::Remoting::ClientActivatedIdentity::New_ctor(::StringW objectUri, ::System::Type* objectType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::ClientActivatedIdentity*>(objectUri, objectType));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::ClientActivatedIdentity::ClientActivatedIdentity() {}
