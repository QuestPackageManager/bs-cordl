#pragma once
// IWYU pragma private; include "Unity\Burst\BurstAuthorizedExternalMethodAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Burst/zzzz__BurstAuthorizedExternalMethodAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Burst::BurstAuthorizedExternalMethodAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstAuthorizedExternalMethodAttribute::*)()>(&::Unity::Burst::BurstAuthorizedExternalMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a605e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstAuthorizedExternalMethodAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Burst::BurstAuthorizedExternalMethodAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstAuthorizedExternalMethodAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Burst::BurstAuthorizedExternalMethodAttribute* Unity::Burst::BurstAuthorizedExternalMethodAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Burst::BurstAuthorizedExternalMethodAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstAuthorizedExternalMethodAttribute::BurstAuthorizedExternalMethodAttribute() {}
