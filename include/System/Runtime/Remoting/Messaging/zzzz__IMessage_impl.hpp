#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Messaging\IMessage.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::IMessage.get_Properties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (::System::Runtime::Remoting::Messaging::IMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::IMessage::get_Properties)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::IMessage*>(), { ::i2c::class_of<::System::Runtime::Remoting::Messaging::IMessage*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Collections::IDictionary* System::Runtime::Remoting::Messaging::IMessage::get_Properties() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::IMessage*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method);
}
