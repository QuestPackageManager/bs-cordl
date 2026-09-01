#pragma once
// IWYU pragma private; include "Unity\Burst\CompilerServices\IgnoreWarningAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Burst/CompilerServices/zzzz__IgnoreWarningAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Burst::CompilerServices::IgnoreWarningAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::CompilerServices::IgnoreWarningAttribute::*)(int32_t)>(&::Unity::Burst::CompilerServices::IgnoreWarningAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a7624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::IgnoreWarningAttribute*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Unity::Burst::CompilerServices::IgnoreWarningAttribute::_ctor(int32_t warning) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::IgnoreWarningAttribute*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, warning);
}
inline ::Unity::Burst::CompilerServices::IgnoreWarningAttribute* Unity::Burst::CompilerServices::IgnoreWarningAttribute::New_ctor(int32_t warning) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Burst::CompilerServices::IgnoreWarningAttribute*>(warning));
}
// Ctor Parameters []
constexpr ::Unity::Burst::CompilerServices::IgnoreWarningAttribute::IgnoreWarningAttribute() {}
