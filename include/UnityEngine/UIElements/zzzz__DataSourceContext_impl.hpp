#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\DataSourceContext.hpp"
#include "Unity/Properties/zzzz__PropertyPath_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DataSourceContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DataSourceContext.get_dataSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UIElements::DataSourceContext::*)()>(&::UnityEngine::UIElements::DataSourceContext::get_dataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c453ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataSourceContext>(), { "get_dataSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataSourceContext.get_dataSourcePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::PropertyPath (::UnityEngine::UIElements::DataSourceContext::*)()>(
    &::UnityEngine::UIElements::DataSourceContext::get_dataSourcePath)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c453b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataSourceContext>(), { "get_dataSourcePath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataSourceContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataSourceContext::*)(::System::Object*, ::by_ref<::Unity::Properties::PropertyPath>)>(
    &::UnityEngine::UIElements::DataSourceContext::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c453c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataSourceContext>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>() } })));
    return ___internal_method;
  }
};
inline ::System::Object* UnityEngine::UIElements::DataSourceContext::get_dataSource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataSourceContext>(), { "get_dataSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline ::Unity::Properties::PropertyPath UnityEngine::UIElements::DataSourceContext::get_dataSourcePath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataSourceContext>(), { "get_dataSourcePath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyPath>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::DataSourceContext::_ctor(::System::Object* dataSource, ::by_ref<::Unity::Properties::PropertyPath> dataSourcePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataSourceContext>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dataSource, dataSourcePath);
}
// Ctor Parameters [CppParam { name: "_dataSource_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_dataSourcePath_k__BackingField", ty:
// "::Unity::Properties::PropertyPath", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::DataSourceContext::DataSourceContext(::System::Object* _dataSource_k__BackingField, ::Unity::Properties::PropertyPath _dataSourcePath_k__BackingField) noexcept {
  this->_dataSource_k__BackingField = _dataSource_k__BackingField;
  this->_dataSourcePath_k__BackingField = _dataSourcePath_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DataSourceContext::DataSourceContext() {}
