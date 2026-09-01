#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\BindingContext.hpp"
#include "Unity/Properties/zzzz__PropertyPath_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BindingContext.get_targetElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::BindingContext::*)()>(
    &::UnityEngine::UIElements::BindingContext::get_targetElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c30ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingContext>(), { "get_targetElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BindingContext.get_bindingId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BindingId (::UnityEngine::UIElements::BindingContext::*)()>(
    &::UnityEngine::UIElements::BindingContext::get_bindingId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c30aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingContext>(), { "get_bindingId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BindingContext.get_dataSourcePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::PropertyPath (::UnityEngine::UIElements::BindingContext::*)()>(
    &::UnityEngine::UIElements::BindingContext::get_dataSourcePath)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c30afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingContext>(), { "get_dataSourcePath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BindingContext.get_dataSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UIElements::BindingContext::*)()>(&::UnityEngine::UIElements::BindingContext::get_dataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c30b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingContext>(), { "get_dataSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BindingContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BindingContext::*)(::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::UIElements::BindingId>,
                                                                                                           ::by_ref<::Unity::Properties::PropertyPath>, ::System::Object*)>(
    &::UnityEngine::UIElements::BindingContext::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c30b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingContext>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BindingContext::get_targetElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingContext>(), { "get_targetElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BindingContext::get_bindingId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingContext>(), { "get_bindingId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingId>(*this, ___internal_method);
}
inline ::Unity::Properties::PropertyPath UnityEngine::UIElements::BindingContext::get_dataSourcePath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingContext>(), { "get_dataSourcePath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyPath>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::UIElements::BindingContext::get_dataSource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingContext>(), { "get_dataSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BindingContext::_ctor(::UnityEngine::UIElements::VisualElement* targetElement, ::by_ref<::UnityEngine::UIElements::BindingId> bindingId,
                                                           ::by_ref<::Unity::Properties::PropertyPath> resolvedDataSourcePath, ::System::Object* resolvedDataSource) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindingContext>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, targetElement, bindingId, resolvedDataSourcePath, resolvedDataSource);
}
// Ctor Parameters [CppParam { name: "m_TargetElement", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BindingId", ty:
// "::UnityEngine::UIElements::BindingId", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DataSourcePath", ty: "::Unity::Properties::PropertyPath", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_DataSource", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::BindingContext::BindingContext(::UnityEngine::UIElements::VisualElement* m_TargetElement, ::UnityEngine::UIElements::BindingId m_BindingId,
                                                                    ::Unity::Properties::PropertyPath m_DataSourcePath, ::System::Object* m_DataSource) noexcept {
  this->m_TargetElement = m_TargetElement;
  this->m_BindingId = m_BindingId;
  this->m_DataSourcePath = m_DataSourcePath;
  this->m_DataSource = m_DataSource;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BindingContext::BindingContext() {}
