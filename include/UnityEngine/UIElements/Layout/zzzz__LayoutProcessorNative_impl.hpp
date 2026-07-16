#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutProcessorNative.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutState_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutProcessorNative_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__ILayoutProcessor_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDirection_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNode_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutProcessorNative.UnityEngine_UIElements_Layout_ILayoutProcessor_CalculateLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutProcessorNative::*)(::UnityEngine::UIElements::Layout::LayoutNode, float_t, float_t,
                                                                                                                          ::UnityEngine::UIElements::Layout::LayoutDirection)>(
    &::UnityEngine::UIElements::Layout::LayoutProcessorNative::UnityEngine_UIElements_Layout_ILayoutProcessor_CalculateLayout)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6d00a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutProcessorNative*>(),
                                                                                           { "UnityEngine.UIElements.Layout.ILayoutProcessor.CalculateLayout",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutNode>(), ::i2c::type_of<float_t>(),
                                                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutProcessorNative._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutProcessorNative::*)()>(&::UnityEngine::UIElements::Layout::LayoutProcessorNative::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6cfefc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutProcessorNative*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::Layout::LayoutState& UnityEngine::UIElements::Layout::LayoutProcessorNative::__cordl_internal_get_m_State() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_State;
}
constexpr ::UnityEngine::UIElements::Layout::LayoutState const& UnityEngine::UIElements::Layout::LayoutProcessorNative::__cordl_internal_get_m_State() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_State;
}
constexpr void UnityEngine::UIElements::Layout::LayoutProcessorNative::__cordl_internal_set_m_State(::UnityEngine::UIElements::Layout::LayoutState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_State = value;
}
inline void UnityEngine::UIElements::Layout::LayoutProcessorNative::UnityEngine_UIElements_Layout_ILayoutProcessor_CalculateLayout(::UnityEngine::UIElements::Layout::LayoutNode node,
                                                                                                                                   float_t parentWidth, float_t parentHeight,
                                                                                                                                   ::UnityEngine::UIElements::Layout::LayoutDirection parentDirection) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutProcessorNative*>(),
                                                                                         { "UnityEngine.UIElements.Layout.ILayoutProcessor.CalculateLayout",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutNode>(), ::i2c::type_of<float_t>(),
                                                                                             ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, parentWidth, parentHeight, parentDirection);
}
inline void UnityEngine::UIElements::Layout::LayoutProcessorNative::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutProcessorNative*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Layout::LayoutProcessorNative* UnityEngine::UIElements::Layout::LayoutProcessorNative::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Layout::LayoutProcessorNative*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::Layout::ILayoutProcessor"
constexpr UnityEngine::UIElements::Layout::LayoutProcessorNative::operator ::UnityEngine::UIElements::Layout::ILayoutProcessor*() noexcept {
  return static_cast<::UnityEngine::UIElements::Layout::ILayoutProcessor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::Layout::ILayoutProcessor"
constexpr ::UnityEngine::UIElements::Layout::ILayoutProcessor* UnityEngine::UIElements::Layout::LayoutProcessorNative::i___UnityEngine__UIElements__Layout__ILayoutProcessor() noexcept {
  return static_cast<::UnityEngine::UIElements::Layout::ILayoutProcessor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutProcessorNative::LayoutProcessorNative() {}
