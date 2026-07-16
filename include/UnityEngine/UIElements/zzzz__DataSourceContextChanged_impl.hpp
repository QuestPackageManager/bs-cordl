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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataSourceContextChanged::*)(
    ::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::UIElements::BindingId>, ::by_ref<::UnityEngine::UIElements::DataSourceContext>,
    ::by_ref<::UnityEngine::UIElements::DataSourceContext>)>(&::UnityEngine::UIElements::DataSourceContextChanged::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c41e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataSourceContextChanged>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::UIElements::DataSourceContext>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::DataSourceContext>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::DataSourceContextChanged::_ctor(::UnityEngine::UIElements::VisualElement* element, ::by_ref<::UnityEngine::UIElements::BindingId> bindingId,
                                                                     ::by_ref<::UnityEngine::UIElements::DataSourceContext> previousContext,
                                                                     ::by_ref<::UnityEngine::UIElements::DataSourceContext> newContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataSourceContextChanged>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::UIElements::DataSourceContext>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::DataSourceContext>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, element, bindingId, previousContext, newContext);
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
