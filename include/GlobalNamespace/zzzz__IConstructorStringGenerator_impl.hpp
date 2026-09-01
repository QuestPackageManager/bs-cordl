#pragma once
// IWYU pragma private; include "GlobalNamespace\IConstructorStringGenerator.hpp"
#include "GlobalNamespace/zzzz__IConstructorStringGenerator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IConstructorStringGenerator.ToConstructorString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::IConstructorStringGenerator::*)()>(&::GlobalNamespace::IConstructorStringGenerator::ToConstructorString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IConstructorStringGenerator*>(), { ::i2c::class_of<::GlobalNamespace::IConstructorStringGenerator*>(), 0 }));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::IConstructorStringGenerator::ToConstructorString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IConstructorStringGenerator*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
