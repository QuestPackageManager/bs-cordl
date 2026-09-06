#pragma once
// IWYU pragma private; include "Zenject/IAnimatorMoveHandler.hpp"
#include "Zenject/zzzz__IAnimatorMoveHandler_def.hpp"
//  Writing Method size for method: ::Zenject::IAnimatorMoveHandler.OnAnimatorMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::IAnimatorMoveHandler::*)()>(&::Zenject::IAnimatorMoveHandler::OnAnimatorMove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IAnimatorMoveHandler*>(), { ::i2c::class_of<::Zenject::IAnimatorMoveHandler*>(), 0 }));
    return ___internal_method;
  }
};
inline void Zenject::IAnimatorMoveHandler::OnAnimatorMove() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IAnimatorMoveHandler*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
