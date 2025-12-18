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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutProcessorNative::*)(
    ::UnityEngine::UIElements::Layout::LayoutNode, float_t, float_t, ::UnityEngine::UIElements::Layout::LayoutDirection)>(
    &::UnityEngine::UIElements::Layout::LayoutProcessorNative::UnityEngine_UIElements_Layout_ILayoutProcessor_CalculateLayout)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6b38704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutProcessorNative*>::get(), "UnityEngine.UIElements.Layout.ILayoutProcessor.CalculateLayout",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutNode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutProcessorNative._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutProcessorNative::*)()>(
    &::UnityEngine::UIElements::Layout::LayoutProcessorNative::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6b36c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutProcessorNative*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutProcessorNative*>::get(), "UnityEngine.UIElements.Layout.ILayoutProcessor.CalculateLayout",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutNode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, parentWidth, parentHeight, parentDirection);
}
inline void UnityEngine::UIElements::Layout::LayoutProcessorNative::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutProcessorNative*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Layout::LayoutProcessorNative* UnityEngine::UIElements::Layout::LayoutProcessorNative::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Layout::LayoutProcessorNative*>());
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
