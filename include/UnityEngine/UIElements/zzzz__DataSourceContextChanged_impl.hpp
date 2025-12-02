#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DataSourceContextChanged.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DataSourceContext_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DataSourceContextChanged_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__DataSourceContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DataSourceContextChanged._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DataSourceContextChanged::*)(
    ::UnityEngine::UIElements::VisualElement*, ::ByRef<::UnityEngine::UIElements::BindingId>, ::ByRef<::UnityEngine::UIElements::DataSourceContext>,
    ::ByRef<::UnityEngine::UIElements::DataSourceContext>)>(&::UnityEngine::UIElements::DataSourceContextChanged::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a10c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DataSourceContextChanged>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::BindingId>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::DataSourceContext>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::DataSourceContext>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::DataSourceContextChanged::_ctor(::UnityEngine::UIElements::VisualElement* element, ::ByRef<::UnityEngine::UIElements::BindingId> bindingId,
                                                                     ::ByRef<::UnityEngine::UIElements::DataSourceContext> previousContext,
                                                                     ::ByRef<::UnityEngine::UIElements::DataSourceContext> newContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DataSourceContextChanged>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::BindingId>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::DataSourceContext>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::DataSourceContext>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element, bindingId, previousContext, newContext);
}
// Ctor Parameters [CppParam { name: "m_TargetElement", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BindingId", ty:
// "::UnityEngine::UIElements::BindingId", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PreviousContext", ty: "::UnityEngine::UIElements::DataSourceContext", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_NewContext", ty: "::UnityEngine::UIElements::DataSourceContext", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::DataSourceContextChanged::DataSourceContextChanged(::UnityEngine::UIElements::VisualElement* m_TargetElement, ::UnityEngine::UIElements::BindingId m_BindingId,
                                                                                        ::UnityEngine::UIElements::DataSourceContext m_PreviousContext,
                                                                                        ::UnityEngine::UIElements::DataSourceContext m_NewContext) noexcept {
  this->m_TargetElement = m_TargetElement;
  this->m_BindingId = m_BindingId;
  this->m_PreviousContext = m_PreviousContext;
  this->m_NewContext = m_NewContext;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DataSourceContextChanged::DataSourceContextChanged() {}
