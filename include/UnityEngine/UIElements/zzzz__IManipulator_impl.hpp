#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\IManipulator.hpp"
#include "UnityEngine/UIElements/zzzz__IManipulator_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IManipulator.set_target
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IManipulator::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::IManipulator::set_target)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IManipulator*>(), { ::i2c::class_of<::UnityEngine::UIElements::IManipulator*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::IManipulator::set_target(::UnityEngine::UIElements::VisualElement* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IManipulator*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
