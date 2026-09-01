#pragma once
// IWYU pragma private; include "UnityEngine\UI\ILayoutController.hpp"
#include "UnityEngine/UI/zzzz__ILayoutController_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::ILayoutController.SetLayoutHorizontal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ILayoutController::*)()>(&::UnityEngine::UI::ILayoutController::SetLayoutHorizontal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ILayoutController*>(), { ::i2c::class_of<::UnityEngine::UI::ILayoutController*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ILayoutController.SetLayoutVertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ILayoutController::*)()>(&::UnityEngine::UI::ILayoutController::SetLayoutVertical)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ILayoutController*>(), { ::i2c::class_of<::UnityEngine::UI::ILayoutController*>(), 1 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::ILayoutController::SetLayoutHorizontal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ILayoutController*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ILayoutController::SetLayoutVertical() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ILayoutController*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
