#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Contexts\IContributeEnvoySink.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IContributeEnvoySink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::IContributeEnvoySink.GetEnvoySink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (
    ::System::Runtime::Remoting::Contexts::IContributeEnvoySink::*)(::System::MarshalByRefObject*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(
    &::System::Runtime::Remoting::Contexts::IContributeEnvoySink::GetEnvoySink)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::IContributeEnvoySink*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Contexts::IContributeEnvoySink*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Contexts::IContributeEnvoySink::GetEnvoySink(::System::MarshalByRefObject* obj,
                                                                                                                                     ::System::Runtime::Remoting::Messaging::IMessageSink* nextSink) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Contexts::IContributeEnvoySink*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*>(this, ___internal_method, obj, nextSink);
}
