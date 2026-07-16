#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutProcessor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutProcessor_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__ILayoutProcessor_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDirection_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNode_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutProcessor.CalculateLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::Layout::LayoutNode, float_t, float_t, ::UnityEngine::UIElements::Layout::LayoutDirection)>(
    &::UnityEngine::UIElements::Layout::LayoutProcessor::CalculateLayout)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6cfee00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutProcessor*>(),
                                                                                           { "CalculateLayout",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutNode>(), ::i2c::type_of<float_t>(),
                                                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutDirection>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Layout::LayoutProcessor::setStaticF_s_Processor(::UnityEngine::UIElements::Layout::ILayoutProcessor* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::Layout::ILayoutProcessor*, "s_Processor", ::UnityEngine::UIElements::Layout::LayoutProcessor*>(
      std::forward<::UnityEngine::UIElements::Layout::ILayoutProcessor*>(value));
}
inline ::UnityEngine::UIElements::Layout::ILayoutProcessor* UnityEngine::UIElements::Layout::LayoutProcessor::getStaticF_s_Processor() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::Layout::ILayoutProcessor*, "s_Processor", ::UnityEngine::UIElements::Layout::LayoutProcessor*>();
}
inline void UnityEngine::UIElements::Layout::LayoutProcessor::CalculateLayout(::UnityEngine::UIElements::Layout::LayoutNode node, float_t parentWidth, float_t parentHeight,
                                                                              ::UnityEngine::UIElements::Layout::LayoutDirection parentDirection) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutProcessor*>(),
                                                                                         { "CalculateLayout",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutNode>(), ::i2c::type_of<float_t>(),
                                                                                             ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node, parentWidth, parentHeight, parentDirection);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutProcessor::LayoutProcessor() {}
