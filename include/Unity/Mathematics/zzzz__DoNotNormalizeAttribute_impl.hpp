#pragma once
// IWYU pragma private; include "Unity\Mathematics\DoNotNormalizeAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Unity/Mathematics/zzzz__DoNotNormalizeAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::DoNotNormalizeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::DoNotNormalizeAttribute::*)()>(&::Unity::Mathematics::DoNotNormalizeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66820fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::DoNotNormalizeAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::DoNotNormalizeAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::DoNotNormalizeAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Mathematics::DoNotNormalizeAttribute* Unity::Mathematics::DoNotNormalizeAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Mathematics::DoNotNormalizeAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::DoNotNormalizeAttribute::DoNotNormalizeAttribute() {}
