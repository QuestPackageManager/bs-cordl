#pragma once
// IWYU pragma private; include "GlobalNamespace\UnitySourceGeneratedAssemblyMonoScriptTypes_v1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnitySourceGeneratedAssemblyMonoScriptTypes_v1_def.hpp"
#include "GlobalNamespace/zzzz__UnitySourceGeneratedAssemblyMonoScriptTypes_v1_def.hpp"
// Ctor Parameters [CppParam { name: "FilePathsData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TypesData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "TotalTypes", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "TotalFiles", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "IsEditorOnly", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData(::ArrayW<uint8_t> FilePathsData,
                                                                                                                                                          ::ArrayW<uint8_t> TypesData,
                                                                                                                                                          int32_t TotalTypes, int32_t TotalFiles,
                                                                                                                                                          bool IsEditorOnly) noexcept {
  this->FilePathsData = FilePathsData;
  this->TypesData = TypesData;
  this->TotalTypes = TotalTypes;
  this->TotalFiles = TotalFiles;
  this->IsEditorOnly = IsEditorOnly;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData() {}
//  Writing Method size for method: ::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData (*)()>(
    &::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1::Get)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x32c3c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1*>(), { "Get", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1::*)()>(
    &::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32c3cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1::Get() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1*>(), { "Get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData>(nullptr, ___internal_method);
}
inline void GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1* GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1::UnitySourceGeneratedAssemblyMonoScriptTypes_v1() {}
