#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/ILayoutProcessor.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__ILayoutProcessor_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDirection_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNode_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::ILayoutProcessor.CalculateLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Layout::ILayoutProcessor::*)(
    ::UnityEngine::UIElements::Layout::LayoutNode, float_t, float_t, ::UnityEngine::UIElements::Layout::LayoutDirection)>(&::UnityEngine::UIElements::Layout::ILayoutProcessor::CalculateLayout)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::ILayoutProcessor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::ILayoutProcessor*>::get(), 0));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Layout::ILayoutProcessor::CalculateLayout(::UnityEngine::UIElements::Layout::LayoutNode node, float_t parentWidth, float_t parentHeight,
                                                                               ::UnityEngine::UIElements::Layout::LayoutDirection parentDirection) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::ILayoutProcessor*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, parentWidth, parentHeight, parentDirection);
}
