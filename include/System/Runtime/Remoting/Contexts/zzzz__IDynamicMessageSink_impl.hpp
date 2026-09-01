#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Contexts\IDynamicMessageSink.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IDynamicMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::IDynamicMessageSink.ProcessMessageFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Contexts::IDynamicMessageSink::*)(::System::Runtime::Remoting::Messaging::IMessage*, bool, bool)>(
    &::System::Runtime::Remoting::Contexts::IDynamicMessageSink::ProcessMessageFinish)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::IDynamicMessageSink*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Contexts::IDynamicMessageSink*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::IDynamicMessageSink.ProcessMessageStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Contexts::IDynamicMessageSink::*)(::System::Runtime::Remoting::Messaging::IMessage*, bool, bool)>(
    &::System::Runtime::Remoting::Contexts::IDynamicMessageSink::ProcessMessageStart)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::IDynamicMessageSink*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Contexts::IDynamicMessageSink*>(), 1 }));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Contexts::IDynamicMessageSink::ProcessMessageFinish(::System::Runtime::Remoting::Messaging::IMessage* replyMsg, bool bCliSide, bool bAsync) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Contexts::IDynamicMessageSink*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, replyMsg, bCliSide, bAsync);
}
inline void System::Runtime::Remoting::Contexts::IDynamicMessageSink::ProcessMessageStart(::System::Runtime::Remoting::Messaging::IMessage* reqMsg, bool bCliSide, bool bAsync) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Contexts::IDynamicMessageSink*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reqMsg, bCliSide, bAsync);
}
