#pragma once
// IWYU pragma private; include "System/ContextBoundObject.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/zzzz__ContextBoundObject_def.hpp"
//  Writing Method size for method: ::System::ContextBoundObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ContextBoundObject::*)()>(&::System::ContextBoundObject::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c730d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ContextBoundObject*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::ContextBoundObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ContextBoundObject*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ContextBoundObject* System::ContextBoundObject::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ContextBoundObject*>());
}
// Ctor Parameters []
constexpr ::System::ContextBoundObject::ContextBoundObject() {}
