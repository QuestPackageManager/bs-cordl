#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Experimental/ITransitionAnimations.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__ITransitionAnimations_def.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__StyleValues_def.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__ValueAnimation_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Experimental::ITransitionAnimations.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* (
    ::UnityEngine::UIElements::Experimental::ITransitionAnimations::*)(::UnityEngine::UIElements::Experimental::StyleValues, int32_t)>(
    &::UnityEngine::UIElements::Experimental::ITransitionAnimations::Start)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ITransitionAnimations*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::Experimental::ITransitionAnimations*>(), 0 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>*
UnityEngine::UIElements::Experimental::ITransitionAnimations::Start(::UnityEngine::UIElements::Experimental::StyleValues to, int32_t durationMs) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Experimental::ITransitionAnimations*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>*>(this, ___internal_method, to,
                                                                                                                                                               durationMs);
}
