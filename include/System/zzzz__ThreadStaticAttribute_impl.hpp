#pragma once
// IWYU pragma private; include "System/ThreadStaticAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__ThreadStaticAttribute_def.hpp"
//  Writing Method size for method: ::System::ThreadStaticAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ThreadStaticAttribute::*)()>(&::System::ThreadStaticAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c5c848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ThreadStaticAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::ThreadStaticAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ThreadStaticAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ThreadStaticAttribute* System::ThreadStaticAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ThreadStaticAttribute*>());
}
// Ctor Parameters []
constexpr ::System::ThreadStaticAttribute::ThreadStaticAttribute() {}
