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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Binding* (::UnityEngine::UIElements::BindingInfo::*)()>(&::UnityEngine::UIElements::BindingInfo::get_binding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c41708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingInfo>(), { "get_binding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BindingInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BindingInfo::*)(::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::UIElements::BindingId>,
                                                                                                        ::UnityEngine::UIElements::Binding*)>(&::UnityEngine::UIElements::BindingInfo::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6c41710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingInfo>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::Binding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BindingInfo.FromRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BindingInfo (*)(::UnityEngine::UIElements::VisualElement*, ::by_ref<::Unity::Properties::PropertyPath>,
                                                                                                  ::UnityEngine::UIElements::Binding*)>(&::UnityEngine::UIElements::BindingInfo::FromRequest)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6c41740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingInfo>(),
                                                             { "FromRequest",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::Binding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BindingInfo.FromBindingData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BindingInfo (*)(::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*>)>(
    &::UnityEngine::UIElements::BindingInfo::FromBindingData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c417f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingInfo>(),
                                                             { "FromBindingData", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::Binding* UnityEngine::UIElements::BindingInfo::get_binding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingInfo>(), { "get_binding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Binding*>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BindingInfo::_ctor(::UnityEngine::UIElements::VisualElement* targetElement, ::by_ref<::UnityEngine::UIElements::BindingId> bindingId,
                                                        ::UnityEngine::UIElements::Binding* binding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingInfo>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::Binding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, targetElement, bindingId, binding);
}
inline ::UnityEngine::UIElements::BindingInfo UnityEngine::UIElements::BindingInfo::FromRequest(::UnityEngine::UIElements::VisualElement* target,
                                                                                                ::by_ref<::Unity::Properties::PropertyPath> targetPath, ::UnityEngine::UIElements::Binding* binding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingInfo>(),
                                                           { "FromRequest",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::Binding*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingInfo>(nullptr, ___internal_method, target, targetPath, binding);
}
inline ::UnityEngine::UIElements::BindingInfo UnityEngine::UIElements::BindingInfo::FromBindingData(::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*> bindingData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingInfo>(),
                                                           { "FromBindingData", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingInfo>(nullptr, ___internal_method, bindingData);
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
