#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Identity.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/zzzz__Identity_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__DynamicPropertyCollection_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/zzzz__ObjRef_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Identity._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Identity::*)(::StringW)>(&::System::Runtime::Remoting::Identity::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1ecd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Identity*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Identity.CreateObjRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::ObjRef* (::System::Runtime::Remoting::Identity::*)(::System::Type*)>(
    &::System::Runtime::Remoting::Identity::CreateObjRef)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Identity*>(), { ::i2c::class_of<::System::Runtime::Remoting::Identity*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Identity.get_ChannelSink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (::System::Runtime::Remoting::Identity::*)()>(
    &::System::Runtime::Remoting::Identity::get_ChannelSink)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1ecdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Identity*>(), { "get_ChannelSink", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Identity.set_ChannelSink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Identity::*)(::System::Runtime::Remoting::Messaging::IMessageSink*)>(
    &::System::Runtime::Remoting::Identity::set_ChannelSink)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1ece4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Identity*>(),
                                                                                           { "set_ChannelSink", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessageSink*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Identity.get_EnvoySink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (::System::Runtime::Remoting::Identity::*)()>(
    &::System::Runtime::Remoting::Identity::get_EnvoySink)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1ecec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Identity*>(), { "get_EnvoySink", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Identity.get_ObjectUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::Identity::*)()>(&::System::Runtime::Remoting::Identity::get_ObjectUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1ecf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Identity*>(), { "get_ObjectUri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Identity.set_ObjectUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Identity::*)(::StringW)>(&::System::Runtime::Remoting::Identity::set_ObjectUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1ecfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Identity*>(), { "set_ObjectUri", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Identity.get_IsConnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Identity::*)()>(&::System::Runtime::Remoting::Identity::get_IsConnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b1ed04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Identity*>(), { "get_IsConnected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Identity.get_Disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Identity::*)()>(&::System::Runtime::Remoting::Identity::get_Disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1ed14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Identity*>(), { "get_Disposed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Identity.set_Disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Identity::*)(bool)>(&::System::Runtime::Remoting::Identity::set_Disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1ed1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Identity*>(), { "set_Disposed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Identity.get_ClientDynamicProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* (::System::Runtime::Remoting::Identity::*)()>(
    &::System::Runtime::Remoting::Identity::get_ClientDynamicProperties)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b1ed24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Identity*>(), { "get_ClientDynamicProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Identity.get_HasServerDynamicSinks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Identity::*)()>(&::System::Runtime::Remoting::Identity::get_HasServerDynamicSinks)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5b1ed8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Identity*>(), { "get_HasServerDynamicSinks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Identity.NotifyClientDynamicSinks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Identity::*)(bool, ::System::Runtime::Remoting::Messaging::IMessage*, bool, bool)>(
    &::System::Runtime::Remoting::Identity::NotifyClientDynamicSinks)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b1edcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Remoting::Identity*>(),
            { "NotifyClientDynamicSinks", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Identity.NotifyServerDynamicSinks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Identity::*)(bool, ::System::Runtime::Remoting::Messaging::IMessage*, bool, bool)>(
    &::System::Runtime::Remoting::Identity::NotifyServerDynamicSinks)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b1ee54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Remoting::Identity*>(),
            { "NotifyServerDynamicSinks", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Remoting::Identity::__cordl_internal_get__objectUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectUri;
}
constexpr ::StringW const& System::Runtime::Remoting::Identity::__cordl_internal_get__objectUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectUri;
}
constexpr void System::Runtime::Remoting::Identity::__cordl_internal_set__objectUri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectUri = value;
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& System::Runtime::Remoting::Identity::__cordl_internal_get__channelSink() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____channelSink;
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* const& System::Runtime::Remoting::Identity::__cordl_internal_get__channelSink() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____channelSink;
}
constexpr void System::Runtime::Remoting::Identity::__cordl_internal_set__channelSink(::System::Runtime::Remoting::Messaging::IMessageSink* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____channelSink = value;
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& System::Runtime::Remoting::Identity::__cordl_internal_get__envoySink() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____envoySink;
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* const& System::Runtime::Remoting::Identity::__cordl_internal_get__envoySink() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____envoySink;
}
constexpr void System::Runtime::Remoting::Identity::__cordl_internal_set__envoySink(::System::Runtime::Remoting::Messaging::IMessageSink* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____envoySink = value;
}
constexpr ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*& System::Runtime::Remoting::Identity::__cordl_internal_get__clientDynamicProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientDynamicProperties;
}
constexpr ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* const& System::Runtime::Remoting::Identity::__cordl_internal_get__clientDynamicProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientDynamicProperties;
}
constexpr void System::Runtime::Remoting::Identity::__cordl_internal_set__clientDynamicProperties(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clientDynamicProperties = value;
}
constexpr ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*& System::Runtime::Remoting::Identity::__cordl_internal_get__serverDynamicProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverDynamicProperties;
}
constexpr ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* const& System::Runtime::Remoting::Identity::__cordl_internal_get__serverDynamicProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverDynamicProperties;
}
constexpr void System::Runtime::Remoting::Identity::__cordl_internal_set__serverDynamicProperties(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____serverDynamicProperties = value;
}
constexpr ::System::Runtime::Remoting::ObjRef*& System::Runtime::Remoting::Identity::__cordl_internal_get__objRef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objRef;
}
constexpr ::System::Runtime::Remoting::ObjRef* const& System::Runtime::Remoting::Identity::__cordl_internal_get__objRef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objRef;
}
constexpr void System::Runtime::Remoting::Identity::__cordl_internal_set__objRef(::System::Runtime::Remoting::ObjRef* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objRef = value;
}
constexpr bool& System::Runtime::Remoting::Identity::__cordl_internal_get__disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr bool const& System::Runtime::Remoting::Identity::__cordl_internal_get__disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr void System::Runtime::Remoting::Identity::__cordl_internal_set__disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed = value;
}
inline void System::Runtime::Remoting::Identity::_ctor(::StringW objectUri) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Identity*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectUri);
}
inline ::System::Runtime::Remoting::ObjRef* System::Runtime::Remoting::Identity::CreateObjRef(::System::Type* requestedType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Identity*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ObjRef*>(this, ___internal_method, requestedType);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Identity::get_ChannelSink() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Identity*>(), { "get_ChannelSink", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Identity::set_ChannelSink(::System::Runtime::Remoting::Messaging::IMessageSink* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Identity*>(),
                                                                                         { "set_ChannelSink", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessageSink*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Identity::get_EnvoySink() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Identity*>(), { "get_EnvoySink", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Identity::get_ObjectUri() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Identity*>(), { "get_ObjectUri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Identity::set_ObjectUri(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Identity*>(), { "set_ObjectUri", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Runtime::Remoting::Identity::get_IsConnected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Identity*>(), { "get_IsConnected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Identity::get_Disposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Identity*>(), { "get_Disposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Identity::set_Disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Identity*>(), { "set_Disposed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* System::Runtime::Remoting::Identity::get_ClientDynamicProperties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Identity*>(), { "get_ClientDynamicProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Identity::get_HasServerDynamicSinks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Identity*>(), { "get_HasServerDynamicSinks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Identity::NotifyClientDynamicSinks(bool start, ::System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Remoting::Identity*>(),
          { "NotifyClientDynamicSinks", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, req_msg, client_site, async);
}
inline void System::Runtime::Remoting::Identity::NotifyServerDynamicSinks(bool start, ::System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Remoting::Identity*>(),
          { "NotifyServerDynamicSinks", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, req_msg, client_site, async);
}
inline ::System::Runtime::Remoting::Identity* System::Runtime::Remoting::Identity::New_ctor(::StringW objectUri) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Identity*>(objectUri));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Identity::Identity() {}
