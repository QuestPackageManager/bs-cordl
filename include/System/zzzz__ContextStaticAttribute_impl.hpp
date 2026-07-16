#pragma once
// IWYU pragma private; include "System/ContextStaticAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__ContextStaticAttribute_def.hpp"
//  Writing Method size for method: ::System::ContextStaticAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ContextStaticAttribute::*)()>(&::System::ContextStaticAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c730dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ContextStaticAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::ContextStaticAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ContextStaticAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ContextStaticAttribute* System::ContextStaticAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ContextStaticAttribute*>());
}
// Ctor Parameters []
constexpr ::System::ContextStaticAttribute::ContextStaticAttribute() {}
