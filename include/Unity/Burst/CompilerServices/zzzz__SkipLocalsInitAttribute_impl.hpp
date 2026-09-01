#pragma once
// IWYU pragma private; include "Unity\Burst\CompilerServices\SkipLocalsInitAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Burst/CompilerServices/zzzz__SkipLocalsInitAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Burst::CompilerServices::SkipLocalsInitAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::CompilerServices::SkipLocalsInitAttribute::*)()>(&::Unity::Burst::CompilerServices::SkipLocalsInitAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a7628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::SkipLocalsInitAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Burst::CompilerServices::SkipLocalsInitAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::SkipLocalsInitAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Burst::CompilerServices::SkipLocalsInitAttribute* Unity::Burst::CompilerServices::SkipLocalsInitAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Burst::CompilerServices::SkipLocalsInitAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Burst::CompilerServices::SkipLocalsInitAttribute::SkipLocalsInitAttribute() {}
