#pragma once
// IWYU pragma private; include "Zenject\IInitializable.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
//  Writing Method size for method: ::Zenject::IInitializable.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::IInitializable::*)()>(&::Zenject::IInitializable::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IInitializable*>(), { ::i2c::class_of<::Zenject::IInitializable*>(), 0 }));
    return ___internal_method;
  }
};
inline void Zenject::IInitializable::Initialize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInitializable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
