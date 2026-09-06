#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IFocusRing.hpp"
#include "UnityEngine/UIElements/zzzz__IFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__Focusable_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IFocusRing.GetFocusChangeDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::FocusChangeDirection* (
    ::UnityEngine::UIElements::IFocusRing::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::IFocusRing::GetFocusChangeDirection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IFocusRing*>(), { ::i2c::class_of<::UnityEngine::UIElements::IFocusRing*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IFocusRing.GetNextFocusable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Focusable* (
    ::UnityEngine::UIElements::IFocusRing::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*)>(&::UnityEngine::UIElements::IFocusRing::GetNextFocusable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IFocusRing*>(), { ::i2c::class_of<::UnityEngine::UIElements::IFocusRing*>(), 1 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::FocusChangeDirection* UnityEngine::UIElements::IFocusRing::GetFocusChangeDirection(::UnityEngine::UIElements::Focusable* currentFocusable,
                                                                                                                     ::UnityEngine::UIElements::EventBase* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IFocusRing*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusChangeDirection*>(this, ___internal_method, currentFocusable, e);
}
inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::IFocusRing::GetNextFocusable(::UnityEngine::UIElements::Focusable* currentFocusable,
                                                                                                   ::UnityEngine::UIElements::FocusChangeDirection* direction) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IFocusRing*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*>(this, ___internal_method, currentFocusable, direction);
}
