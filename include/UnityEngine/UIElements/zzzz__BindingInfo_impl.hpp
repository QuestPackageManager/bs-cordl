#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BindingInfo.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingInfo_def.hpp"
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__Binding_def.hpp"
#include "UnityEngine/UIElements/zzzz__DataBindingManager_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BindingInfo.get_binding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Binding* (::UnityEngine::UIElements::BindingInfo::*)()>(
    &::UnityEngine::UIElements::BindingInfo::get_binding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a793d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindingInfo>::get(), "get_binding",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BindingInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BindingInfo::*)(
    ::UnityEngine::UIElements::VisualElement*, ::ByRef<::UnityEngine::UIElements::BindingId>, ::UnityEngine::UIElements::Binding*)>(&::UnityEngine::UIElements::BindingInfo::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6a793d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindingInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::BindingId>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Binding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BindingInfo.FromRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BindingInfo (*)(
    ::UnityEngine::UIElements::VisualElement*, ::ByRef<::Unity::Properties::PropertyPath>, ::UnityEngine::UIElements::Binding*)>(&::UnityEngine::UIElements::BindingInfo::FromRequest)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6a79408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindingInfo>::get(), "FromRequest", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Properties::PropertyPath>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Binding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BindingInfo.FromBindingData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BindingInfo (*)(::ByRef<::UnityEngine::UIElements::DataBindingManager_BindingData*>)>(
    &::UnityEngine::UIElements::BindingInfo::FromBindingData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a794b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindingInfo>::get(), "FromBindingData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::DataBindingManager_BindingData*>>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::Binding* UnityEngine::UIElements::BindingInfo::get_binding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindingInfo>::get(), "get_binding",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Binding*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BindingInfo::_ctor(::UnityEngine::UIElements::VisualElement* targetElement, ::ByRef<::UnityEngine::UIElements::BindingId> bindingId,
                                                        ::UnityEngine::UIElements::Binding* binding) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindingInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::BindingId>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Binding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetElement, bindingId, binding);
}
inline ::UnityEngine::UIElements::BindingInfo UnityEngine::UIElements::BindingInfo::FromRequest(::UnityEngine::UIElements::VisualElement* target, ::ByRef<::Unity::Properties::PropertyPath> targetPath,
                                                                                                ::UnityEngine::UIElements::Binding* binding) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindingInfo>::get(), "FromRequest", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Properties::PropertyPath>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Binding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingInfo, false>(nullptr, ___internal_method, target, targetPath, binding);
}
inline ::UnityEngine::UIElements::BindingInfo UnityEngine::UIElements::BindingInfo::FromBindingData(::ByRef<::UnityEngine::UIElements::DataBindingManager_BindingData*> bindingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindingInfo>::get(), "FromBindingData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::DataBindingManager_BindingData*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingInfo, false>(nullptr, ___internal_method, bindingData);
}
// Ctor Parameters [CppParam { name: "_targetElement_k__BackingField", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_bindingId_k__BackingField", ty: "::UnityEngine::UIElements::BindingId", modifiers: "", def_value: Some("{}") }, CppParam { name: "_binding_k__BackingField", ty:
// "::UnityEngine::UIElements::Binding*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::BindingInfo::BindingInfo(::UnityEngine::UIElements::VisualElement* _targetElement_k__BackingField, ::UnityEngine::UIElements::BindingId _bindingId_k__BackingField,
                                                              ::UnityEngine::UIElements::Binding* _binding_k__BackingField) noexcept {
  this->_targetElement_k__BackingField = _targetElement_k__BackingField;
  this->_bindingId_k__BackingField = _bindingId_k__BackingField;
  this->_binding_k__BackingField = _binding_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BindingInfo::BindingInfo() {}
