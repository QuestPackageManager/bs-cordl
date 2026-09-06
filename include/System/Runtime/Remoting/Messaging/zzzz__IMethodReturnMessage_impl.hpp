#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/IMethodReturnMessage.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodReturnMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::IMethodReturnMessage.get_Exception
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Runtime::Remoting::Messaging::IMethodReturnMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::IMethodReturnMessage::get_Exception)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::IMethodReturnMessage.get_OutArgs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Runtime::Remoting::Messaging::IMethodReturnMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::IMethodReturnMessage::get_OutArgs)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::IMethodReturnMessage.get_ReturnValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::IMethodReturnMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::IMethodReturnMessage::get_ReturnValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>(), 2 }));
    return ___internal_method;
  }
};
inline ::System::Exception* System::Runtime::Remoting::Messaging::IMethodReturnMessage::get_Exception() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*> System::Runtime::Remoting::Messaging::IMethodReturnMessage::get_OutArgs() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::IMethodReturnMessage::get_ReturnValue() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodMessage"
constexpr System::Runtime::Remoting::Messaging::IMethodReturnMessage::operator ::System::Runtime::Remoting::Messaging::IMethodMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodMessage"
constexpr ::System::Runtime::Remoting::Messaging::IMethodMessage* System::Runtime::Remoting::Messaging::IMethodReturnMessage::i___System__Runtime__Remoting__Messaging__IMethodMessage() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessage"
constexpr System::Runtime::Remoting::Messaging::IMethodReturnMessage::operator ::System::Runtime::Remoting::Messaging::IMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessage"
constexpr ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::IMethodReturnMessage::i___System__Runtime__Remoting__Messaging__IMessage() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessage*>(static_cast<void*>(this));
}
