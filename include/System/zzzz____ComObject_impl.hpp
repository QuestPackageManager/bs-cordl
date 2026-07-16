#pragma once
// IWYU pragma private; include "System/__ComObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz____ComObject_def.hpp"
//  Writing Method size for method: ::System::__ComObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::__ComObject::*)()>(&::System::__ComObject::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c9f288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__ComObject*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::__ComObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__ComObject*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::__ComObject* System::__ComObject::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::__ComObject*>());
}
// Ctor Parameters []
constexpr ::System::__ComObject::__ComObject() {}
