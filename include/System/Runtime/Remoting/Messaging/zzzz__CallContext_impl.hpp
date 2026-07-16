#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/CallContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CallContext_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__LogicalCallContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CallContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::CallContext::*)()>(&::System::Runtime::Remoting::Messaging::CallContext::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b3c43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CallContext*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CallContext.SetCurrentCallContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Runtime::Remoting::Messaging::LogicalCallContext*)>(
    &::System::Runtime::Remoting::Messaging::CallContext::SetCurrentCallContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3c440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CallContext*>(),
                                                             { "SetCurrentCallContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CallContext.SetLogicalCallContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext* (*)(::System::Runtime::Remoting::Messaging::LogicalCallContext*)>(
    &::System::Runtime::Remoting::Messaging::CallContext::SetLogicalCallContext)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b279e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CallContext*>(),
                                                             { "SetLogicalCallContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CallContext.LogicalGetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW)>(&::System::Runtime::Remoting::Messaging::CallContext::LogicalGetData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5b3c448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CallContext*>(), { "LogicalGetData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CallContext.LogicalSetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Object*)>(&::System::Runtime::Remoting::Messaging::CallContext::LogicalSetData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b3c498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CallContext*>(),
                                                                                           { "LogicalSetData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Messaging::CallContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CallContext*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::CallContext::SetCurrentCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CallContext*>(),
                                                           { "SetCurrentCallContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, ctx);
}
inline ::System::Runtime::Remoting::Messaging::LogicalCallContext*
System::Runtime::Remoting::Messaging::CallContext::SetLogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CallContext*>(),
                                                           { "SetLogicalCallContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(nullptr, ___internal_method, callCtx);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::CallContext::LogicalGetData(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CallContext*>(), { "LogicalGetData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, name);
}
inline void System::Runtime::Remoting::Messaging::CallContext::LogicalSetData(::StringW name, ::System::Object* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CallContext*>(),
                                                                                         { "LogicalSetData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, data);
}
inline ::System::Runtime::Remoting::Messaging::CallContext* System::Runtime::Remoting::Messaging::CallContext::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::CallContext*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::CallContext::CallContext() {}
