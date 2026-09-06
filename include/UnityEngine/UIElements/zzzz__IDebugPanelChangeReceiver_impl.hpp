#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IDebugPanelChangeReceiver.hpp"
#include "UnityEngine/UIElements/zzzz__IDebugPanelChangeReceiver_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IDebugPanelChangeReceiver.OnVisualElementChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IDebugPanelChangeReceiver::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&::UnityEngine::UIElements::IDebugPanelChangeReceiver::OnVisualElementChange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IDebugPanelChangeReceiver*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::IDebugPanelChangeReceiver*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::IDebugPanelChangeReceiver::OnVisualElementChange(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::VersionChangeType changeType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IDebugPanelChangeReceiver*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, changeType);
}
