#pragma once
// IWYU pragma private; include "JetBrains/Annotations/AspMvcMasterAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__AspMvcMasterAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::AspMvcMasterAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::AspMvcMasterAttribute::*)()>(&::JetBrains::Annotations::AspMvcMasterAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3abc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcMasterAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void JetBrains::Annotations::AspMvcMasterAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcMasterAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JetBrains::Annotations::AspMvcMasterAttribute* JetBrains::Annotations::AspMvcMasterAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::AspMvcMasterAttribute*>());
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::AspMvcMasterAttribute::AspMvcMasterAttribute() {}
