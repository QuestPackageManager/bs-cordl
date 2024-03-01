#pragma once
#include "UnityEngine/Scripting/APIUpdating/zzzz__MovedFromAttributeData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::*)(bool, ::StringW, ::StringW, ::StringW)>(
    &::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::Set)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2ddc658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @param sourceNamespace: ::StringW (default: nullptr)
/// @param sourceAssembly: ::StringW (default: nullptr)
/// @param sourceClassName: ::StringW (default: nullptr)
inline void UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::Set(bool autoUpdateAPI, ::StringW sourceNamespace, ::StringW sourceAssembly, ::StringW sourceClassName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, autoUpdateAPI, sourceNamespace, sourceAssembly, sourceClassName);
}
// Ctor Parameters [CppParam { name: "className", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "nameSpace", ty: "::StringW", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "assembly", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "classHasChanged", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "nameSpaceHasChanged", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "assemblyHasChanged", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "autoUdpateAPI", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::MovedFromAttributeData(::StringW className, ::StringW nameSpace, ::StringW assembly, bool classHasChanged,
                                                                                                bool nameSpaceHasChanged, bool assemblyHasChanged, bool autoUdpateAPI) noexcept {
  this->className = className;
  this->nameSpace = nameSpace;
  this->assembly = assembly;
  this->classHasChanged = classHasChanged;
  this->nameSpaceHasChanged = nameSpaceHasChanged;
  this->assemblyHasChanged = assemblyHasChanged;
  this->autoUdpateAPI = autoUdpateAPI;
}
// Ctor Parameters []
constexpr ::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::MovedFromAttributeData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
