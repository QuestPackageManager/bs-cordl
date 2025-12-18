#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DataSourceContext.hpp"
#include "Unity/Properties/zzzz__PropertyPath_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DataSourceContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DataSourceContext.get_dataSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::UIElements::DataSourceContext::*)()>(
    &::UnityEngine::UIElements::DataSourceContext::get_dataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a79aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DataSourceContext>::get(),
                                                                               "get_dataSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataSourceContext.get_dataSourcePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Properties::PropertyPath (::UnityEngine::UIElements::DataSourceContext::*)()>(
    &::UnityEngine::UIElements::DataSourceContext::get_dataSourcePath)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a79af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DataSourceContext>::get(),
                                                                               "get_dataSourcePath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataSourceContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::UIElements::DataSourceContext::*)(::System::Object*, ::ByRef<::Unity::Properties::PropertyPath>)>(&::UnityEngine::UIElements::DataSourceContext::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a79b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DataSourceContext>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Properties::PropertyPath>>::get() })));
    return ___internal_method;
  }
};
inline ::System::Object* UnityEngine::UIElements::DataSourceContext::get_dataSource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DataSourceContext>::get(),
                                                                             "get_dataSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::Unity::Properties::PropertyPath UnityEngine::UIElements::DataSourceContext::get_dataSourcePath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DataSourceContext>::get(),
                                                                             "get_dataSourcePath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyPath, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DataSourceContext::_ctor(::System::Object* dataSource, ::ByRef<::Unity::Properties::PropertyPath> dataSourcePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DataSourceContext>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Properties::PropertyPath>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataSource, dataSourcePath);
}
// Ctor Parameters [CppParam { name: "_dataSource_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_dataSourcePath_k__BackingField", ty:
// "::Unity::Properties::PropertyPath", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::DataSourceContext::DataSourceContext(::System::Object* _dataSource_k__BackingField, ::Unity::Properties::PropertyPath _dataSourcePath_k__BackingField) noexcept {
  this->_dataSource_k__BackingField = _dataSource_k__BackingField;
  this->_dataSourcePath_k__BackingField = _dataSourcePath_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DataSourceContext::DataSourceContext() {}
