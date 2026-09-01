#pragma once
// IWYU pragma private; include "System\SerializableAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__SerializableAttribute_def.hpp"
//  Writing Method size for method: ::System::SerializableAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::SerializableAttribute::*)()>(&::System::SerializableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c5b29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SerializableAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::SerializableAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SerializableAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::SerializableAttribute* System::SerializableAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::SerializableAttribute*>());
}
// Ctor Parameters []
constexpr ::System::SerializableAttribute::SerializableAttribute() {}
