#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Contexts\ContextCallbackObject.hpp"
#include "System/zzzz__ContextBoundObject_impl.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__ContextCallbackObject_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__CrossContextDelegate_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::ContextCallbackObject.DoCallBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Contexts::ContextCallbackObject::*)(::System::Runtime::Remoting::Contexts::CrossContextDelegate*)>(
    &::System::Runtime::Remoting::Contexts::ContextCallbackObject::DoCallBack)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b382e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::ContextCallbackObject*>(),
                                                                                           { "DoCallBack", {}, { ::i2c::type_of<::System::Runtime::Remoting::Contexts::CrossContextDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::ContextCallbackObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Contexts::ContextCallbackObject::*)()>(
    &::System::Runtime::Remoting::Contexts::ContextCallbackObject::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b382e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::ContextCallbackObject*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Contexts::ContextCallbackObject::DoCallBack(::System::Runtime::Remoting::Contexts::CrossContextDelegate* deleg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::ContextCallbackObject*>(),
                                                                                         { "DoCallBack", {}, { ::i2c::type_of<::System::Runtime::Remoting::Contexts::CrossContextDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deleg);
}
inline void System::Runtime::Remoting::Contexts::ContextCallbackObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::ContextCallbackObject*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Contexts::ContextCallbackObject* System::Runtime::Remoting::Contexts::ContextCallbackObject::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Contexts::ContextCallbackObject*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Contexts::ContextCallbackObject::ContextCallbackObject() {}
