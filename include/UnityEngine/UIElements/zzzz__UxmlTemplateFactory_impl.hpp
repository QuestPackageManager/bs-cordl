#pragma once
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTemplateTraits_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTemplateFactory_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlTemplateFactory.get_uxmlName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::UxmlTemplateFactory::*)()>(
    &::UnityEngine::UIElements::UxmlTemplateFactory::get_uxmlName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2e0e300;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTemplateFactory*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTemplateFactory*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlTemplateFactory.get_uxmlQualifiedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::UxmlTemplateFactory::*)()>(
    &::UnityEngine::UIElements::UxmlTemplateFactory::get_uxmlQualifiedName)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2e0e340;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTemplateFactory*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTemplateFactory*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlTemplateFactory.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::UxmlTemplateFactory::*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(
        &::UnityEngine::UIElements::UxmlTemplateFactory::Create)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e0e3b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTemplateFactory*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTemplateFactory*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlTemplateFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlTemplateFactory::*)()>(&::UnityEngine::UIElements::UxmlTemplateFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e0e3bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTemplateFactory*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::UIElements::UxmlTemplateFactory::get_uxmlName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTemplateFactory*>::get(),
                                                                             "get_uxmlName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::UxmlTemplateFactory::get_uxmlQualifiedName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTemplateFactory*>::get(),
                                                                             "get_uxmlQualifiedName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::UxmlTemplateFactory::Create(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTemplateFactory*>::get(), "Create", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method, bag, cc);
}
inline ::UnityEngine::UIElements::UxmlTemplateFactory* UnityEngine::UIElements::UxmlTemplateFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UxmlTemplateFactory*>());
}
inline void UnityEngine::UIElements::UxmlTemplateFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTemplateFactory*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlTemplateFactory::UxmlTemplateFactory() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
