#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IRuntimePanelComponent.hpp"
#include "UnityEngine/UIElements/zzzz__IRuntimePanelComponent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IRuntimePanelComponent.set_panel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IRuntimePanelComponent::*)(::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::IRuntimePanelComponent::set_panel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IRuntimePanelComponent*>(), { ::i2c::class_of<::UnityEngine::UIElements::IRuntimePanelComponent*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::IRuntimePanelComponent::set_panel(::UnityEngine::UIElements::IPanel* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IRuntimePanelComponent*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
