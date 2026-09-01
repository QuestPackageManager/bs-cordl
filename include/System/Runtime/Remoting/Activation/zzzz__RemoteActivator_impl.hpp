#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Activation\RemoteActivator.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__RemoteActivator_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IActivator_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionReturnMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::RemoteActivator.Activate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Activation::IConstructionReturnMessage* (
    ::System::Runtime::Remoting::Activation::RemoteActivator::*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(
    &::System::Runtime::Remoting::Activation::RemoteActivator::Activate)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x5b3ddc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::RemoteActivator*>(),
                                                             { "Activate", {}, { ::i2c::type_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::RemoteActivator.get_NextActivator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Activation::IActivator* (::System::Runtime::Remoting::Activation::RemoteActivator::*)()>(
    &::System::Runtime::Remoting::Activation::RemoteActivator::get_NextActivator)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b3e20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::RemoteActivator*>(), { "get_NextActivator", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Runtime::Remoting::Activation::IConstructionReturnMessage*
System::Runtime::Remoting::Activation::RemoteActivator::Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::RemoteActivator*>(),
                                                           { "Activate", {}, { ::i2c::type_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IConstructionReturnMessage*>(this, ___internal_method, msg);
}
inline ::System::Runtime::Remoting::Activation::IActivator* System::Runtime::Remoting::Activation::RemoteActivator::get_NextActivator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::RemoteActivator*>(), { "get_NextActivator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IActivator*>(this, ___internal_method);
}
/// @brief Convert operator to "::System::Runtime::Remoting::Activation::IActivator"
constexpr System::Runtime::Remoting::Activation::RemoteActivator::operator ::System::Runtime::Remoting::Activation::IActivator*() noexcept {
  return static_cast<::System::Runtime::Remoting::Activation::IActivator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Activation::IActivator"
constexpr ::System::Runtime::Remoting::Activation::IActivator* System::Runtime::Remoting::Activation::RemoteActivator::i___System__Runtime__Remoting__Activation__IActivator() noexcept {
  return static_cast<::System::Runtime::Remoting::Activation::IActivator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Activation::RemoteActivator::RemoteActivator() {}
