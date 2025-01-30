#pragma once
// IWYU pragma private; include "GlobalNamespace/HEU_ScriptMeshInputUVLayoutExample.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__HEU_ScriptMeshInputUVLayoutExample_def.hpp"
#include "GlobalNamespace/zzzz__HEU_ScriptMeshInputUVLayoutExample_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample_OutputMode::HEU_ScriptMeshInputUVLayoutExample_OutputMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample_OutputMode::HEU_ScriptMeshInputUVLayoutExample_OutputMode() {}
constexpr ::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample_OutputMode GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample_OutputMode::COPY{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample_OutputMode GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample_OutputMode::REPLACE{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample.ApplyUVLayoutTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>, ::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample_OutputMode, ::StringW)>(
        &::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::ApplyUVLayoutTo)> {
  constexpr static std::size_t size = 0x858;
  constexpr static std::size_t addrs = 0x3a078c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample*>::get(), "ApplyUVLayoutTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample_OutputMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::*)()>(
    &::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a081c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::ApplyUVLayoutTo(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> gameObjects,
                                                                                 ::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample_OutputMode outputMode, ::StringW output_name_suffix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample*>::get(), "ApplyUVLayoutTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample_OutputMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, gameObjects, outputMode, output_name_suffix);
}
inline void GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample* GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::HEU_ScriptMeshInputUVLayoutExample() {}
