#pragma once
// IWYU pragma private; include "Zenject/IAnimatorIkHandler.hpp"
#include "Zenject/zzzz__IAnimatorIkHandler_def.hpp"
//  Writing Method size for method: ::Zenject::IAnimatorIkHandler.OnAnimatorIk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::IAnimatorIkHandler::*)()>(&::Zenject::IAnimatorIkHandler::OnAnimatorIk)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IAnimatorIkHandler*>(), { ::i2c::class_of<::Zenject::IAnimatorIkHandler*>(), 0 }));
    return ___internal_method;
  }
};
inline void Zenject::IAnimatorIkHandler::OnAnimatorIk() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IAnimatorIkHandler*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
