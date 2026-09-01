#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Messaging\StackBuilderSink.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__StackBuilderSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Proxies/zzzz__RealProxy_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::StackBuilderSink._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::StackBuilderSink::*)(::System::MarshalByRefObject*, bool)>(
    &::System::Runtime::Remoting::Messaging::StackBuilderSink::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b4b2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::StackBuilderSink*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::MarshalByRefObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::StackBuilderSink.SyncProcessMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (
    ::System::Runtime::Remoting::Messaging::StackBuilderSink::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&::System::Runtime::Remoting::Messaging::StackBuilderSink::SyncProcessMessage)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5b4b350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::StackBuilderSink*>(),
                                                                                           { "SyncProcessMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::StackBuilderSink.AsyncProcessMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl* (
    ::System::Runtime::Remoting::Messaging::StackBuilderSink::*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(
    &::System::Runtime::Remoting::Messaging::StackBuilderSink::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5b4b7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Remoting::Messaging::StackBuilderSink*>(),
            { "AsyncProcessMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessageSink*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::StackBuilderSink.ExecuteAsyncMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::StackBuilderSink::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Messaging::StackBuilderSink::ExecuteAsyncMessage)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5b4b8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::StackBuilderSink*>(), { "ExecuteAsyncMessage", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::StackBuilderSink.CheckParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::StackBuilderSink::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(
    &::System::Runtime::Remoting::Messaging::StackBuilderSink::CheckParameters)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5b4b430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::StackBuilderSink*>(),
                                                                                           { "CheckParameters", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::StackBuilderSink._AsyncProcessMessage_b__4_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::StackBuilderSink::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Messaging::StackBuilderSink::_AsyncProcessMessage_b__4_0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b4badc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::StackBuilderSink*>(),
                                                                                           { "<AsyncProcessMessage>b__4_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::MarshalByRefObject*& System::Runtime::Remoting::Messaging::StackBuilderSink::__cordl_internal_get__target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____target;
}
constexpr ::System::MarshalByRefObject* const& System::Runtime::Remoting::Messaging::StackBuilderSink::__cordl_internal_get__target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____target;
}
constexpr void System::Runtime::Remoting::Messaging::StackBuilderSink::__cordl_internal_set__target(::System::MarshalByRefObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____target = value;
}
constexpr ::System::Runtime::Remoting::Proxies::RealProxy*& System::Runtime::Remoting::Messaging::StackBuilderSink::__cordl_internal_get__rp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rp;
}
constexpr ::System::Runtime::Remoting::Proxies::RealProxy* const& System::Runtime::Remoting::Messaging::StackBuilderSink::__cordl_internal_get__rp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rp;
}
constexpr void System::Runtime::Remoting::Messaging::StackBuilderSink::__cordl_internal_set__rp(::System::Runtime::Remoting::Proxies::RealProxy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rp = value;
}
inline void System::Runtime::Remoting::Messaging::StackBuilderSink::_ctor(::System::MarshalByRefObject* obj, bool forceInternalExecute) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::StackBuilderSink*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::MarshalByRefObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, forceInternalExecute);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::StackBuilderSink::SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::StackBuilderSink*>(),
                                                                                         { "SyncProcessMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*>(this, ___internal_method, msg);
}
inline ::System::Runtime::Remoting::Messaging::IMessageCtrl*
System::Runtime::Remoting::Messaging::StackBuilderSink::AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Remoting::Messaging::StackBuilderSink*>(),
          { "AsyncProcessMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessageSink*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageCtrl*>(this, ___internal_method, msg, replySink);
}
inline void System::Runtime::Remoting::Messaging::StackBuilderSink::ExecuteAsyncMessage(::System::Object* ob) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::StackBuilderSink*>(), { "ExecuteAsyncMessage", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ob);
}
inline void System::Runtime::Remoting::Messaging::StackBuilderSink::CheckParameters(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::StackBuilderSink*>(),
                                                                                         { "CheckParameters", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void System::Runtime::Remoting::Messaging::StackBuilderSink::_AsyncProcessMessage_b__4_0(::System::Object* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::StackBuilderSink*>(), { "<AsyncProcessMessage>b__4_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::Runtime::Remoting::Messaging::StackBuilderSink* System::Runtime::Remoting::Messaging::StackBuilderSink::New_ctor(::System::MarshalByRefObject* obj, bool forceInternalExecute) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::StackBuilderSink*>(obj, forceInternalExecute));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr System::Runtime::Remoting::Messaging::StackBuilderSink::operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Messaging::StackBuilderSink::i___System__Runtime__Remoting__Messaging__IMessageSink() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::StackBuilderSink::StackBuilderSink() {}
