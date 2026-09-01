#pragma once
// IWYU pragma private; include "System\NonSerializedAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__NonSerializedAttribute_def.hpp"
//  Writing Method size for method: ::System::NonSerializedAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::NonSerializedAttribute::*)()>(&::System::NonSerializedAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4b218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::NonSerializedAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::NonSerializedAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::NonSerializedAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::NonSerializedAttribute* System::NonSerializedAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::NonSerializedAttribute*>());
}
// Ctor Parameters []
constexpr ::System::NonSerializedAttribute::NonSerializedAttribute() {}
