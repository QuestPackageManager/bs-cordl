#pragma once
// IWYU pragma private; include "System/STAThreadAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__STAThreadAttribute_def.hpp"
//  Writing Method size for method: ::System::STAThreadAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::STAThreadAttribute::*)()>(&::System::STAThreadAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c5c844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::STAThreadAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::STAThreadAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::STAThreadAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::STAThreadAttribute* System::STAThreadAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::STAThreadAttribute*>());
}
// Ctor Parameters []
constexpr ::System::STAThreadAttribute::STAThreadAttribute() {}
