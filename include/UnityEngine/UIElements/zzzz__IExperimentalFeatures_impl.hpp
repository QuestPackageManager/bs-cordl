#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IExperimentalFeatures.hpp"
#include "UnityEngine/UIElements/zzzz__IExperimentalFeatures_def.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__ITransitionAnimations_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IExperimentalFeatures.get_animation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Experimental::ITransitionAnimations* (::UnityEngine::UIElements::IExperimentalFeatures::*)()>(
    &::UnityEngine::UIElements::IExperimentalFeatures::get_animation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IExperimentalFeatures*>(), { ::i2c::class_of<::UnityEngine::UIElements::IExperimentalFeatures*>(), 0 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::Experimental::ITransitionAnimations* UnityEngine::UIElements::IExperimentalFeatures::get_animation() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IExperimentalFeatures*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Experimental::ITransitionAnimations*>(this, ___internal_method);
}
