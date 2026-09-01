#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Activation\IActivator.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IActivator_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionReturnMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::IActivator.get_NextActivator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Activation::IActivator* (::System::Runtime::Remoting::Activation::IActivator::*)()>(
    &::System::Runtime::Remoting::Activation::IActivator::get_NextActivator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::IActivator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Activation::IActivator*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::IActivator.Activate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Activation::IConstructionReturnMessage* (
    ::System::Runtime::Remoting::Activation::IActivator::*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&::System::Runtime::Remoting::Activation::IActivator::Activate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::IActivator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Activation::IActivator*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::Runtime::Remoting::Activation::IActivator* System::Runtime::Remoting::Activation::IActivator::get_NextActivator() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Activation::IActivator*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IActivator*>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Activation::IConstructionReturnMessage*
System::Runtime::Remoting::Activation::IActivator::Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Activation::IActivator*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IConstructionReturnMessage*>(this, ___internal_method, msg);
}
