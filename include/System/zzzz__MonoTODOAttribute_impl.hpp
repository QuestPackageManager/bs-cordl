#pragma once
// IWYU pragma private; include "System/MonoTODOAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__MonoTODOAttribute_def.hpp"
//  Writing Method size for method: ::System::MonoTODOAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::MonoTODOAttribute::*)()>(&::System::MonoTODOAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x618c470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoTODOAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::MonoTODOAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoTODOAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::MonoTODOAttribute* System::MonoTODOAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::MonoTODOAttribute*>());
}
// Ctor Parameters []
constexpr ::System::MonoTODOAttribute::MonoTODOAttribute() {}
