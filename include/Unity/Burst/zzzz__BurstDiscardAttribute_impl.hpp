#pragma once
// IWYU pragma private; include "Unity\Burst\BurstDiscardAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Burst/zzzz__BurstDiscardAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Burst::BurstDiscardAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstDiscardAttribute::*)()>(&::Unity::Burst::BurstDiscardAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a605ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstDiscardAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Burst::BurstDiscardAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstDiscardAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Burst::BurstDiscardAttribute* Unity::Burst::BurstDiscardAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Burst::BurstDiscardAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstDiscardAttribute::BurstDiscardAttribute() {}
