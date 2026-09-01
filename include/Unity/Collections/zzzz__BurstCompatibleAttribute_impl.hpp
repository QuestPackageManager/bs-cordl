#pragma once
// IWYU pragma private; include "Unity\Collections\BurstCompatibleAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Collections/zzzz__BurstCompatibleAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Collections::BurstCompatibleAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::BurstCompatibleAttribute::*)()>(&::Unity::Collections::BurstCompatibleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c2044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::BurstCompatibleAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::BurstCompatibleAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::BurstCompatibleAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Collections::BurstCompatibleAttribute* Unity::Collections::BurstCompatibleAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Collections::BurstCompatibleAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Collections::BurstCompatibleAttribute::BurstCompatibleAttribute() {}
