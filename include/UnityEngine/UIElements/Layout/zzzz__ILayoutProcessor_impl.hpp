#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Layout\ILayoutProcessor.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__ILayoutProcessor_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDirection_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNode_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::ILayoutProcessor.CalculateLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::ILayoutProcessor::*)(
    ::UnityEngine::UIElements::Layout::LayoutNode, float_t, float_t, ::UnityEngine::UIElements::Layout::LayoutDirection)>(&::UnityEngine::UIElements::Layout::ILayoutProcessor::CalculateLayout)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::ILayoutProcessor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::Layout::ILayoutProcessor*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Layout::ILayoutProcessor::CalculateLayout(::UnityEngine::UIElements::Layout::LayoutNode node, float_t parentWidth, float_t parentHeight,
                                                                               ::UnityEngine::UIElements::Layout::LayoutDirection parentDirection) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Layout::ILayoutProcessor*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, parentWidth, parentHeight, parentDirection);
}
