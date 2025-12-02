#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutProcessor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutProcessor_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__ILayoutProcessor_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDirection_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNode_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutProcessor.CalculateLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::UIElements::Layout::LayoutNode, float_t, float_t, ::UnityEngine::UIElements::Layout::LayoutDirection)>(&::UnityEngine::UIElements::Layout::LayoutProcessor::CalculateLayout)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6acdc44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutProcessor*>::get(), "CalculateLayout", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutNode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutDirection>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Layout::LayoutProcessor::setStaticF_s_Processor(::UnityEngine::UIElements::Layout::ILayoutProcessor* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::Layout::ILayoutProcessor*, "s_Processor",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutProcessor*>::get>(
      std::forward<::UnityEngine::UIElements::Layout::ILayoutProcessor*>(value));
}
inline ::UnityEngine::UIElements::Layout::ILayoutProcessor* UnityEngine::UIElements::Layout::LayoutProcessor::getStaticF_s_Processor() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::Layout::ILayoutProcessor*, "s_Processor",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutProcessor*>::get>();
}
inline void UnityEngine::UIElements::Layout::LayoutProcessor::CalculateLayout(::UnityEngine::UIElements::Layout::LayoutNode node, float_t parentWidth, float_t parentHeight,
                                                                              ::UnityEngine::UIElements::Layout::LayoutDirection parentDirection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutProcessor*>::get(), "CalculateLayout", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutNode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, node, parentWidth, parentHeight, parentDirection);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutProcessor::LayoutProcessor() {}
