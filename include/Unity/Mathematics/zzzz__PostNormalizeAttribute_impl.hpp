#pragma once
// IWYU pragma private; include "Unity/Mathematics/PostNormalizeAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Unity/Mathematics/zzzz__PostNormalizeAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::PostNormalizeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::PostNormalizeAttribute::*)()>(&::Unity::Mathematics::PostNormalizeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x667c8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::PostNormalizeAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::PostNormalizeAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::PostNormalizeAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Mathematics::PostNormalizeAttribute* Unity::Mathematics::PostNormalizeAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Mathematics::PostNormalizeAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::PostNormalizeAttribute::PostNormalizeAttribute() {}
