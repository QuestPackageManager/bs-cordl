#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Contexts\IContributeServerContextSink.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IContributeServerContextSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::IContributeServerContextSink.GetServerContextSink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (::System::Runtime::Remoting::Contexts::IContributeServerContextSink::*)(::System::Runtime::Remoting::Messaging::IMessageSink*)>(
        &::System::Runtime::Remoting::Contexts::IContributeServerContextSink::GetServerContextSink)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::IContributeServerContextSink*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Contexts::IContributeServerContextSink*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Runtime::Remoting::Messaging::IMessageSink*
System::Runtime::Remoting::Contexts::IContributeServerContextSink::GetServerContextSink(::System::Runtime::Remoting::Messaging::IMessageSink* nextSink) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Contexts::IContributeServerContextSink*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*>(this, ___internal_method, nextSink);
}
