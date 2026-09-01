#pragma once
// IWYU pragma private; include "Unity\IL2CPP\CompilerServices\Il2CppEagerStaticClassConstructionAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/IL2CPP/CompilerServices/zzzz__Il2CppEagerStaticClassConstructionAttribute_def.hpp"
//  Writing Method size for method: ::Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute::*)()>(
    &::Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65ff46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute* Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute::Il2CppEagerStaticClassConstructionAttribute() {}
