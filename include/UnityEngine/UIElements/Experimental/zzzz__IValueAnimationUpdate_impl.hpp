#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Experimental/IValueAnimationUpdate.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__IValueAnimationUpdate_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Experimental::IValueAnimationUpdate.Tick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Experimental::IValueAnimationUpdate::*)(int64_t)>(
    &::UnityEngine::UIElements::Experimental::IValueAnimationUpdate::Tick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Experimental::IValueAnimationUpdate::Tick(int64_t currentTimeMs) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTimeMs);
}
