#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\ServerIdentity.hpp"
#include "System/Runtime/Remoting/zzzz__Identity_impl.hpp"
#include "System/Runtime/Remoting/zzzz__ServerIdentity_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__ILease_def.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__Lease_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/zzzz__ObjRef_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ServerIdentity::*)(::StringW, ::System::Runtime::Remoting::Contexts::Context*, ::System::Type*)>(
    &::System::Runtime::Remoting::ServerIdentity::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b2e334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity.get_ObjectType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Remoting::ServerIdentity::*)()>(&::System::Runtime::Remoting::ServerIdentity::get_ObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2e344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(), { "get_ObjectType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity.StartTrackingLifetime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ServerIdentity::*)(::System::Runtime::Remoting::Lifetime::ILease*)>(
    &::System::Runtime::Remoting::ServerIdentity::StartTrackingLifetime)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5b2afa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(),
                                                                                           { "StartTrackingLifetime", {}, { ::i2c::type_of<::System::Runtime::Remoting::Lifetime::ILease*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity.OnLifetimeExpired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ServerIdentity::*)()>(&::System::Runtime::Remoting::ServerIdentity::OnLifetimeExpired)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b2e534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(), { ::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity.CreateObjRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::ObjRef* (::System::Runtime::Remoting::ServerIdentity::*)(::System::Type*)>(
    &::System::Runtime::Remoting::ServerIdentity::CreateObjRef)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5b2e58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(), { ::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity.AttachServerObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ServerIdentity::*)(::System::MarshalByRefObject*, ::System::Runtime::Remoting::Contexts::Context*)>(
    &::System::Runtime::Remoting::ServerIdentity::AttachServerObject)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b2d37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(),
                                                { "AttachServerObject", {}, { ::i2c::type_of<::System::MarshalByRefObject*>(), ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity.get_Lease
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Lifetime::Lease* (::System::Runtime::Remoting::ServerIdentity::*)()>(
    &::System::Runtime::Remoting::ServerIdentity::get_Lease)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2ec44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(), { "get_Lease", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity.get_Context
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Contexts::Context* (::System::Runtime::Remoting::ServerIdentity::*)()>(
    &::System::Runtime::Remoting::ServerIdentity::get_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2ec4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(), { "get_Context", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity.set_Context
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ServerIdentity::*)(::System::Runtime::Remoting::Contexts::Context*)>(
    &::System::Runtime::Remoting::ServerIdentity::set_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2ec54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(),
                                                                                           { "set_Context", {}, { ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity.SyncObjectProcessMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (
    ::System::Runtime::Remoting::ServerIdentity::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&::System::Runtime::Remoting::ServerIdentity::SyncObjectProcessMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(), { ::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity.AsyncObjectProcessMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl* (
    ::System::Runtime::Remoting::ServerIdentity::*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(
    &::System::Runtime::Remoting::ServerIdentity::AsyncObjectProcessMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(), { ::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ServerIdentity.DisposeServerObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ServerIdentity::*)()>(&::System::Runtime::Remoting::ServerIdentity::DisposeServerObject)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b2e538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(), { "DisposeServerObject", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Runtime::Remoting::ServerIdentity::__cordl_internal_get__objectType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectType;
}
constexpr ::System::Type* const& System::Runtime::Remoting::ServerIdentity::__cordl_internal_get__objectType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectType;
}
constexpr void System::Runtime::Remoting::ServerIdentity::__cordl_internal_set__objectType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectType = value;
}
constexpr ::System::MarshalByRefObject*& System::Runtime::Remoting::ServerIdentity::__cordl_internal_get__serverObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverObject;
}
constexpr ::System::MarshalByRefObject* const& System::Runtime::Remoting::ServerIdentity::__cordl_internal_get__serverObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverObject;
}
constexpr void System::Runtime::Remoting::ServerIdentity::__cordl_internal_set__serverObject(::System::MarshalByRefObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____serverObject = value;
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& System::Runtime::Remoting::ServerIdentity::__cordl_internal_get__serverSink() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverSink;
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* const& System::Runtime::Remoting::ServerIdentity::__cordl_internal_get__serverSink() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverSink;
}
constexpr void System::Runtime::Remoting::ServerIdentity::__cordl_internal_set__serverSink(::System::Runtime::Remoting::Messaging::IMessageSink* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____serverSink = value;
}
constexpr ::System::Runtime::Remoting::Contexts::Context*& System::Runtime::Remoting::ServerIdentity::__cordl_internal_get__context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr ::System::Runtime::Remoting::Contexts::Context* const& System::Runtime::Remoting::ServerIdentity::__cordl_internal_get__context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr void System::Runtime::Remoting::ServerIdentity::__cordl_internal_set__context(::System::Runtime::Remoting::Contexts::Context* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____context = value;
}
constexpr ::System::Runtime::Remoting::Lifetime::Lease*& System::Runtime::Remoting::ServerIdentity::__cordl_internal_get__lease() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lease;
}
constexpr ::System::Runtime::Remoting::Lifetime::Lease* const& System::Runtime::Remoting::ServerIdentity::__cordl_internal_get__lease() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lease;
}
constexpr void System::Runtime::Remoting::ServerIdentity::__cordl_internal_set__lease(::System::Runtime::Remoting::Lifetime::Lease* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lease = value;
}
inline void System::Runtime::Remoting::ServerIdentity::_ctor(::StringW objectUri, ::System::Runtime::Remoting::Contexts::Context* context, ::System::Type* objectType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectUri, context, objectType);
}
inline ::System::Type* System::Runtime::Remoting::ServerIdentity::get_ObjectType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(), { "get_ObjectType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::ServerIdentity::StartTrackingLifetime(::System::Runtime::Remoting::Lifetime::ILease* lease) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(),
                                                                                         { "StartTrackingLifetime", {}, { ::i2c::type_of<::System::Runtime::Remoting::Lifetime::ILease*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lease);
}
inline void System::Runtime::Remoting::ServerIdentity::OnLifetimeExpired() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::ObjRef* System::Runtime::Remoting::ServerIdentity::CreateObjRef(::System::Type* requestedType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ObjRef*>(this, ___internal_method, requestedType);
}
inline void System::Runtime::Remoting::ServerIdentity::AttachServerObject(::System::MarshalByRefObject* serverObject, ::System::Runtime::Remoting::Contexts::Context* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(),
                                              { "AttachServerObject", {}, { ::i2c::type_of<::System::MarshalByRefObject*>(), ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serverObject, context);
}
inline ::System::Runtime::Remoting::Lifetime::Lease* System::Runtime::Remoting::ServerIdentity::get_Lease() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(), { "get_Lease", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Lifetime::Lease*>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Contexts::Context* System::Runtime::Remoting::ServerIdentity::get_Context() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(), { "get_Context", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::Context*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::ServerIdentity::set_Context(::System::Runtime::Remoting::Contexts::Context* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(), { "set_Context", {}, { ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::ServerIdentity::SyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*>(this, ___internal_method, msg);
}
inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* System::Runtime::Remoting::ServerIdentity::AsyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                                                                  ::System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageCtrl*>(this, ___internal_method, msg, replySink);
}
inline void System::Runtime::Remoting::ServerIdentity::DisposeServerObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ServerIdentity*>(), { "DisposeServerObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::ServerIdentity* System::Runtime::Remoting::ServerIdentity::New_ctor(::StringW objectUri, ::System::Runtime::Remoting::Contexts::Context* context,
                                                                                                        ::System::Type* objectType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::ServerIdentity*>(objectUri, context, objectType));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::ServerIdentity::ServerIdentity() {}
