#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Contexts\IContributeDynamicSink.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IContributeDynamicSink_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IDynamicMessageSink_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::IContributeDynamicSink.GetDynamicSink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Contexts::IDynamicMessageSink* (::System::Runtime::Remoting::Contexts::IContributeDynamicSink::*)()>(
    &::System::Runtime::Remoting::Contexts::IContributeDynamicSink::GetDynamicSink)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::IContributeDynamicSink*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Contexts::IContributeDynamicSink*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Runtime::Remoting::Contexts::IDynamicMessageSink* System::Runtime::Remoting::Contexts::IContributeDynamicSink::GetDynamicSink() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Contexts::IContributeDynamicSink*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::IDynamicMessageSink*>(this, ___internal_method);
}
