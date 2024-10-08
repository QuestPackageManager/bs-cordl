#pragma once
// IWYU pragma private; include "GlobalNamespace/UnitySourceGeneratedAssemblyMonoScriptTypes_v1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnitySourceGeneratedAssemblyMonoScriptTypes_v1_def.hpp"
#include "GlobalNamespace/zzzz__UnitySourceGeneratedAssemblyMonoScriptTypes_v1_def.hpp"
// Ctor Parameters [CppParam { name: "FilePathsData", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "TypesData", ty:
// "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "TotalTypes", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "TotalFiles", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsEditorOnly", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__UnitySourceGeneratedAssemblyMonoScriptTypes_v1__MonoScriptData::__UnitySourceGeneratedAssemblyMonoScriptTypes_v1__MonoScriptData(
    ::ArrayW<uint8_t, ::Array<uint8_t>*> FilePathsData, ::ArrayW<uint8_t, ::Array<uint8_t>*> TypesData, int32_t TotalTypes, int32_t TotalFiles, bool IsEditorOnly) noexcept {
  this->FilePathsData = FilePathsData;
  this->TypesData = TypesData;
  this->TotalTypes = TotalTypes;
  this->TotalFiles = TotalFiles;
  this->IsEditorOnly = IsEditorOnly;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnitySourceGeneratedAssemblyMonoScriptTypes_v1__MonoScriptData::__UnitySourceGeneratedAssemblyMonoScriptTypes_v1__MonoScriptData() {}
//  Writing Method size for method: ::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__UnitySourceGeneratedAssemblyMonoScriptTypes_v1__MonoScriptData (*)()>(
    &::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1::Get)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x22432c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1*>::get(), "Get",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1::*)()>(
    &::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2243388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnitySourceGeneratedAssemblyMonoScriptTypes_v1__MonoScriptData GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1::Get() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1*>::get(), "Get",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__UnitySourceGeneratedAssemblyMonoScriptTypes_v1__MonoScriptData, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1* GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1*>());
}
inline void GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1::UnitySourceGeneratedAssemblyMonoScriptTypes_v1() {}
