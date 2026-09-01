#pragma once
// IWYU pragma private; include "Zenject\ILateTickable.hpp"
#include "Zenject/zzzz__ILateTickable_def.hpp"
//  Writing Method size for method: ::Zenject::ILateTickable.LateTick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ILateTickable::*)()>(&::Zenject::ILateTickable::LateTick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::ILateTickable*>(), { ::i2c::class_of<::Zenject::ILateTickable*>(), 0 }));
    return ___internal_method;
  }
};
inline void Zenject::ILateTickable::LateTick() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::ILateTickable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
