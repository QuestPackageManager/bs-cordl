#pragma once
// IWYU pragma private; include "Zenject/IValidatable.hpp"
#include "Zenject/zzzz__IValidatable_def.hpp"
//  Writing Method size for method: ::Zenject::IValidatable.Validate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::IValidatable::*)()>(&::Zenject::IValidatable::Validate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IValidatable*>(), { ::i2c::class_of<::Zenject::IValidatable*>(), 0 }));
    return ___internal_method;
  }
};
inline void Zenject::IValidatable::Validate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IValidatable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
