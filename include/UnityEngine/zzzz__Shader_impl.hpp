#pragma once
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeywordSpace_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTextureSubElement_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderHardwareTier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderPropertyFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderPropertyType_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__DisableBatchingType_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Shader.get_globalShaderHardwareTier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ShaderHardwareTier (*)()>(&::UnityEngine::Shader::get_globalShaderHardwareTier)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2cbbd04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_globalShaderHardwareTier",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.set_globalShaderHardwareTier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::ShaderHardwareTier)>(&::UnityEngine::Shader::set_globalShaderHardwareTier)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2cbbd6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "set_globalShaderHardwareTier", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderHardwareTier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.Find
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Shader> (*)(::StringW)>(&::UnityEngine::Shader::Find)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2cbbde0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "Find", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.FindBuiltin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Shader> (*)(::StringW)>(&::UnityEngine::Shader::FindBuiltin)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbbe4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "FindBuiltin", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_maximumChunksOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::Shader::get_maximumChunksOverride)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2cbbe88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_maximumChunksOverride",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.set_maximumChunksOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::UnityEngine::Shader::set_maximumChunksOverride)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbbeb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "set_maximumChunksOverride", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_maximumLOD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Shader::*)()>(&::UnityEngine::Shader::get_maximumLOD)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbbeec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_maximumLOD",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.set_maximumLOD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Shader::*)(int32_t)>(&::UnityEngine::Shader::set_maximumLOD)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbbf28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "set_maximumLOD", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_globalMaximumLOD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::Shader::get_globalMaximumLOD)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2cbbf6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_globalMaximumLOD",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.set_globalMaximumLOD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::UnityEngine::Shader::set_globalMaximumLOD)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbbf94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "set_globalMaximumLOD", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_isSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Shader::*)()>(&::UnityEngine::Shader::get_isSupported)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbbfd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_isSupported",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_globalRenderPipeline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::Shader::get_globalRenderPipeline)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2cbc00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_globalRenderPipeline",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.set_globalRenderPipeline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::Shader::set_globalRenderPipeline)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbc034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "set_globalRenderPipeline", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_enabledGlobalKeywords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> (*)()>(
    &::UnityEngine::Shader::get_enabledGlobalKeywords)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2cbc070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_enabledGlobalKeywords",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_globalKeywords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> (*)()>(
    &::UnityEngine::Shader::get_globalKeywords)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2cbc0c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_globalKeywords",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_keywordSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::LocalKeywordSpace (::UnityEngine::Shader::*)()>(&::UnityEngine::Shader::get_keywordSpace)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2cbc110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_keywordSpace",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetEnabledGlobalKeywords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> (*)()>(
    &::UnityEngine::Shader::GetEnabledGlobalKeywords)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2cbc098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetEnabledGlobalKeywords",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetAllGlobalKeywords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> (*)()>(
    &::UnityEngine::Shader::GetAllGlobalKeywords)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2cbc0e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetAllGlobalKeywords",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.EnableKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::Shader::EnableKeyword)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbc1a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "EnableKeyword", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.DisableKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::Shader::DisableKeyword)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbc1dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "DisableKeyword", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.IsKeywordEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::UnityEngine::Shader::IsKeywordEnabled)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbc218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "IsKeywordEnabled", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.EnableKeywordFast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::GlobalKeyword)>(&::UnityEngine::Shader::EnableKeywordFast)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2cbc254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "EnableKeywordFast", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GlobalKeyword>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.DisableKeywordFast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::GlobalKeyword)>(&::UnityEngine::Shader::DisableKeywordFast)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2cbc2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "DisableKeywordFast", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GlobalKeyword>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetKeywordFast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::GlobalKeyword, bool)>(&::UnityEngine::Shader::SetKeywordFast)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2cbc34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetKeywordFast", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GlobalKeyword>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.IsKeywordEnabledFast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::GlobalKeyword)>(&::UnityEngine::Shader::IsKeywordEnabledFast)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbc3e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "IsKeywordEnabledFast", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GlobalKeyword>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.EnableKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Rendering::GlobalKeyword>)>(&::UnityEngine::Shader::EnableKeyword)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cbc460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "EnableKeyword", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.DisableKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Rendering::GlobalKeyword>)>(&::UnityEngine::Shader::DisableKeyword)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cbc46c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "DisableKeyword", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Rendering::GlobalKeyword>, bool)>(&::UnityEngine::Shader::SetKeyword)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2cbc478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetKeyword", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.IsKeywordEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::Rendering::GlobalKeyword>)>(&::UnityEngine::Shader::IsKeywordEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cbc48c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "IsKeywordEnabled", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_renderQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Shader::*)()>(&::UnityEngine::Shader::get_renderQueue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbc498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_renderQueue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_disableBatching
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::DisableBatchingType (::UnityEngine::Shader::*)()>(&::UnityEngine::Shader::get_disableBatching)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbc4d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_disableBatching",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.WarmupAllShaders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Shader::WarmupAllShaders)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2cbc510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "WarmupAllShaders",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.TagToID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::UnityEngine::Shader::TagToID)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbc538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "TagToID", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.IDToTag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&::UnityEngine::Shader::IDToTag)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbc574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "IDToTag", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.PropertyToID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::UnityEngine::Shader::PropertyToID)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbb37c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "PropertyToID", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetDependency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Shader::*)(::StringW)>(&::UnityEngine::Shader::GetDependency)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbc5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetDependency", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_passCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Shader::*)()>(&::UnityEngine::Shader::get_passCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbc5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_passCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_subshaderCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Shader::*)()>(&::UnityEngine::Shader::get_subshaderCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbc630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_subshaderCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPassCountInSubshader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Shader::*)(int32_t)>(&::UnityEngine::Shader::GetPassCountInSubshader)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbc66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPassCountInSubshader", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.FindPassTagValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ShaderTagId (::UnityEngine::Shader::*)(int32_t, ::UnityEngine::Rendering::ShaderTagId)>(
    &::UnityEngine::Shader::FindPassTagValue)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2cbc6b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "FindPassTagValue", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderTagId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.FindPassTagValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::ShaderTagId (::UnityEngine::Shader::*)(int32_t, int32_t, ::UnityEngine::Rendering::ShaderTagId)>(&::UnityEngine::Shader::FindPassTagValue)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2cbc810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "FindPassTagValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderTagId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.FindSubshaderTagValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ShaderTagId (::UnityEngine::Shader::*)(int32_t, ::UnityEngine::Rendering::ShaderTagId)>(
    &::UnityEngine::Shader::FindSubshaderTagValue)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2cbc9dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "FindSubshaderTagValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderTagId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.Internal_FindPassTagValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Shader::*)(int32_t, int32_t)>(&::UnityEngine::Shader::Internal_FindPassTagValue)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2cbc7bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "Internal_FindPassTagValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.Internal_FindPassTagValueInSubShader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Shader::*)(int32_t, int32_t, int32_t)>(
    &::UnityEngine::Shader::Internal_FindPassTagValueInSubShader)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2cbc980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "Internal_FindPassTagValueInSubShader", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.Internal_FindSubshaderTagValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Shader::*)(int32_t, int32_t)>(&::UnityEngine::Shader::Internal_FindSubshaderTagValue)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2cbcae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "Internal_FindSubshaderTagValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalIntImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::Shader::SetGlobalIntImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbcb3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalIntImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalFloatImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, float_t)>(&::UnityEngine::Shader::SetGlobalFloatImpl)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2cbcb80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalFloatImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalVectorImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::Vector4)>(&::UnityEngine::Shader::SetGlobalVectorImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2cbcbcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalVectorImpl", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalMatrixImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::Matrix4x4)>(&::UnityEngine::Shader::SetGlobalMatrixImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbcc64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalMatrixImpl", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalTextureImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::Texture*)>(&::UnityEngine::Shader::SetGlobalTextureImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbccec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalTextureImpl", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalRenderTextureImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement)>(
    &::UnityEngine::Shader::SetGlobalRenderTextureImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2cbcd30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalRenderTextureImpl", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTextureSubElement>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalBufferImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::ComputeBuffer*)>(&::UnityEngine::Shader::SetGlobalBufferImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbcd84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalBufferImpl", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalGraphicsBufferImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Shader::SetGlobalGraphicsBufferImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbcdc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalGraphicsBufferImpl", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalConstantBufferImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(
    &::UnityEngine::Shader::SetGlobalConstantBufferImpl)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2cbce0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalConstantBufferImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalConstantGraphicsBufferImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(
    &::UnityEngine::Shader::SetGlobalConstantGraphicsBufferImpl)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2cbce68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalConstantGraphicsBufferImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalIntImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalIntImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbcec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalIntImpl", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalFloatImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalFloatImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbcf00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalFloatImpl", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalVectorImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalVectorImpl)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2cbcf3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalVectorImpl", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalMatrixImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalMatrixImpl)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2cbcfd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalMatrixImpl", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalTextureImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture> (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalTextureImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbd088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalTextureImpl", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalFloatArrayImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::ArrayW<float_t, ::Array<float_t>*>, int32_t)>(&::UnityEngine::Shader::SetGlobalFloatArrayImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2cbd0c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalFloatArrayImpl", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalVectorArrayImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>, int32_t)>(
    &::UnityEngine::Shader::SetGlobalVectorArrayImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2cbd118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalVectorArrayImpl", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalMatrixArrayImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, int32_t)>(
    &::UnityEngine::Shader::SetGlobalMatrixArrayImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2cbd16c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalMatrixArrayImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalFloatArrayImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t, ::Array<float_t>*> (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalFloatArrayImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbd1c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalFloatArrayImpl", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalVectorArrayImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> (*)(int32_t)>(
    &::UnityEngine::Shader::GetGlobalVectorArrayImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbd1fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalVectorArrayImpl", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalMatrixArrayImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> (*)(int32_t)>(
    &::UnityEngine::Shader::GetGlobalMatrixArrayImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbd238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalMatrixArrayImpl", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalFloatArrayCountImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalFloatArrayCountImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbd274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalFloatArrayCountImpl", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalVectorArrayCountImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalVectorArrayCountImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbd2b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalVectorArrayCountImpl", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalMatrixArrayCountImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalMatrixArrayCountImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbd2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalMatrixArrayCountImpl", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.ExtractGlobalFloatArrayImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ByRef<::ArrayW<float_t, ::Array<float_t>*>>)>(
    &::UnityEngine::Shader::ExtractGlobalFloatArrayImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbd328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "ExtractGlobalFloatArrayImpl", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t, ::Array<float_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.ExtractGlobalVectorArrayImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>)>(
    &::UnityEngine::Shader::ExtractGlobalVectorArrayImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbd36c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "ExtractGlobalVectorArrayImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.ExtractGlobalMatrixArrayImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ByRef<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>)>(
    &::UnityEngine::Shader::ExtractGlobalMatrixArrayImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbd3b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "ExtractGlobalMatrixArrayImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::ArrayW<float_t, ::Array<float_t>*>, int32_t)>(&::UnityEngine::Shader::SetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2cbd3f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>, int32_t)>(
    &::UnityEngine::Shader::SetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2cbd504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, int32_t)>(
    &::UnityEngine::Shader::SetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2cbd614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.ExtractGlobalFloatArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::System::Collections::Generic::List_1<float_t>*)>(
    &::UnityEngine::Shader::ExtractGlobalFloatArray)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2cbd724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "ExtractGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.ExtractGlobalVectorArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(
    &::UnityEngine::Shader::ExtractGlobalVectorArray)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2cbd89c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "ExtractGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.ExtractGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*)>(
    &::UnityEngine::Shader::ExtractGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2cbda14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "ExtractGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, int32_t)>(&::UnityEngine::Shader::SetGlobalInt)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2cbdb8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalInt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::Shader::SetGlobalInt)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2cbdc08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalInt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, float_t)>(&::UnityEngine::Shader::SetGlobalFloat)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2cbdc54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalFloat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, float_t)>(&::UnityEngine::Shader::SetGlobalFloat)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2cbdccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalFloat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, int32_t)>(&::UnityEngine::Shader::SetGlobalInteger)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2cbdd18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalInteger", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::Shader::SetGlobalInteger)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbdd88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalInteger", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalVector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::Vector4)>(&::UnityEngine::Shader::SetGlobalVector)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2cbddcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalVector", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalVector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::Vector4)>(&::UnityEngine::Shader::SetGlobalVector)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cbde3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalVector", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::Color)>(&::UnityEngine::Shader::SetGlobalColor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2cbde40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalColor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::Color)>(&::UnityEngine::Shader::SetGlobalColor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cbdeb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalColor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::Matrix4x4)>(&::UnityEngine::Shader::SetGlobalMatrix)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2cbdeb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalMatrix", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::Matrix4x4)>(&::UnityEngine::Shader::SetGlobalMatrix)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2cbdf40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalMatrix", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::Texture*)>(&::UnityEngine::Shader::SetGlobalTexture)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2cbdf9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalTexture", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::Texture*)>(&::UnityEngine::Shader::SetGlobalTexture)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbe00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalTexture", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement)>(
    &::UnityEngine::Shader::SetGlobalTexture)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2cbe050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalTexture", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTextureSubElement>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement)>(
    &::UnityEngine::Shader::SetGlobalTexture)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2cbe0d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalTexture", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTextureSubElement>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::ComputeBuffer*)>(&::UnityEngine::Shader::SetGlobalBuffer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2cbe124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalBuffer", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::ComputeBuffer*)>(&::UnityEngine::Shader::SetGlobalBuffer)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbe194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalBuffer", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Shader::SetGlobalBuffer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2cbe1d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalBuffer", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Shader::SetGlobalBuffer)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbe248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalBuffer", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalConstantBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(
    &::UnityEngine::Shader::SetGlobalConstantBuffer)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2cbe28c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalConstantBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalConstantBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(
    &::UnityEngine::Shader::SetGlobalConstantBuffer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2cbe314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalConstantBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalConstantBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(
    &::UnityEngine::Shader::SetGlobalConstantBuffer)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2cbe370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalConstantBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalConstantBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(
    &::UnityEngine::Shader::SetGlobalConstantBuffer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2cbe3f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalConstantBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Collections::Generic::List_1<float_t>*)>(&::UnityEngine::Shader::SetGlobalFloatArray)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2cbe454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::System::Collections::Generic::List_1<float_t>*)>(&::UnityEngine::Shader::SetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2cbe4f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<float_t, ::Array<float_t>*>)>(&::UnityEngine::Shader::SetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2cbe570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::ArrayW<float_t, ::Array<float_t>*>)>(&::UnityEngine::Shader::SetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2cbe5c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(
    &::UnityEngine::Shader::SetGlobalVectorArray)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2cbe5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(
    &::UnityEngine::Shader::SetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2cbe680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>)>(
    &::UnityEngine::Shader::SetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2cbe6f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>)>(
    &::UnityEngine::Shader::SetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2cbe74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*)>(
    &::UnityEngine::Shader::SetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2cbe764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*)>(
    &::UnityEngine::Shader::SetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2cbe808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>)>(
    &::UnityEngine::Shader::SetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2cbe880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>)>(
    &::UnityEngine::Shader::SetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2cbe8d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::UnityEngine::Shader::GetGlobalInt)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2cbe8ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalInt", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalInt)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2cbe970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalInt", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::StringW)>(&::UnityEngine::Shader::GetGlobalFloat)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2cbe9c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalFloat", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalFloat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbea30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalFloat", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::UnityEngine::Shader::GetGlobalInteger)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2cbea6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalInteger", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalInteger)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbead4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalInteger", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalVector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (*)(::StringW)>(&::UnityEngine::Shader::GetGlobalVector)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2cbeb10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalVector", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalVector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalVector)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cbeb50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalVector", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(::StringW)>(&::UnityEngine::Shader::GetGlobalColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2cbeb54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalColor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalColor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cbeb94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalColor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (*)(::StringW)>(&::UnityEngine::Shader::GetGlobalMatrix)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2cbeb98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalMatrix", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalMatrix)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2cbec44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalMatrix", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture> (*)(::StringW)>(&::UnityEngine::Shader::GetGlobalTexture)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2cbecc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalTexture", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture> (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalTexture)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbed28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalTexture", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t, ::Array<float_t>*> (*)(::StringW)>(&::UnityEngine::Shader::GetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2cbed64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t, ::Array<float_t>*> (*)(int32_t)>(&::UnityEngine::Shader::GetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2cbeda4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> (*)(::StringW)>(
    &::UnityEngine::Shader::GetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2cbee1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> (*)(int32_t)>(
    &::UnityEngine::Shader::GetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2cbee5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> (*)(::StringW)>(
    &::UnityEngine::Shader::GetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2cbeed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> (*)(int32_t)>(
    &::UnityEngine::Shader::GetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2cbef14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Collections::Generic::List_1<float_t>*)>(&::UnityEngine::Shader::GetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cbef8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::System::Collections::Generic::List_1<float_t>*)>(&::UnityEngine::Shader::GetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cbefd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(
    &::UnityEngine::Shader::GetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cbefd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(
    &::UnityEngine::Shader::GetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cbf020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*)>(
    &::UnityEngine::Shader::GetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cbf024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*)>(
    &::UnityEngine::Shader::GetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cbf06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Shader::*)()>(&::UnityEngine::Shader::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2cbf070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Shader*, int32_t)>(&::UnityEngine::Shader::GetPropertyName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbf0c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyNameId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Shader*, int32_t)>(&::UnityEngine::Shader::GetPropertyNameId)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbf10c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyNameId", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ShaderPropertyType (*)(::UnityEngine::Shader*, int32_t)>(
    &::UnityEngine::Shader::GetPropertyType)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbf150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Shader*, int32_t)>(&::UnityEngine::Shader::GetPropertyDescription)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbf194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyDescription", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ShaderPropertyFlags (*)(::UnityEngine::Shader*, int32_t)>(
    &::UnityEngine::Shader::GetPropertyFlags)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbf1d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyFlags", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)(::UnityEngine::Shader*, int32_t)>(
    &::UnityEngine::Shader::GetPropertyAttributes)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbf21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyAttributes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyDefaultIntValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Shader*, int32_t)>(&::UnityEngine::Shader::GetPropertyDefaultIntValue)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbf260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyDefaultIntValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyDefaultValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Shader*, int32_t)>(&::UnityEngine::Shader::GetPropertyDefaultValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2cbf2a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyDefaultValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyTextureDimension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::TextureDimension (*)(::UnityEngine::Shader*, int32_t)>(
    &::UnityEngine::Shader::GetPropertyTextureDimension)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbf358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyTextureDimension", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyTextureDefaultName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Shader*, int32_t)>(&::UnityEngine::Shader::GetPropertyTextureDefaultName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbf39c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyTextureDefaultName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.FindTextureStackImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Shader*, int32_t, ByRef<::StringW>, ByRef<int32_t>)>(
    &::UnityEngine::Shader::FindTextureStackImpl)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2cbf3e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "FindTextureStackImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.CheckPropertyIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Shader*, int32_t)>(&::UnityEngine::Shader::CheckPropertyIndex)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2cbf43c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "CheckPropertyIndex", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Shader::*)()>(&::UnityEngine::Shader::GetPropertyCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbf4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.FindPropertyIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Shader::*)(::StringW)>(&::UnityEngine::Shader::FindPropertyIndex)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbf51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "FindPropertyIndex", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Shader::*)(int32_t)>(&::UnityEngine::Shader::GetPropertyName)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cbf560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyNameId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Shader::*)(int32_t)>(&::UnityEngine::Shader::GetPropertyNameId)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cbf5a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyNameId", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ShaderPropertyType (::UnityEngine::Shader::*)(int32_t)>(
    &::UnityEngine::Shader::GetPropertyType)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cbf5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Shader::*)(int32_t)>(&::UnityEngine::Shader::GetPropertyDescription)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cbf638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyDescription", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ShaderPropertyFlags (::UnityEngine::Shader::*)(int32_t)>(
    &::UnityEngine::Shader::GetPropertyFlags)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cbf680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyFlags", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::UnityEngine::Shader::*)(int32_t)>(
    &::UnityEngine::Shader::GetPropertyAttributes)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cbf6c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyAttributes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyDefaultFloatValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Shader::*)(int32_t)>(&::UnityEngine::Shader::GetPropertyDefaultFloatValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2cbf710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyDefaultFloatValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyDefaultVectorValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Shader::*)(int32_t)>(&::UnityEngine::Shader::GetPropertyDefaultVectorValue)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2cbf79c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyDefaultVectorValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyRangeLimits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Shader::*)(int32_t)>(&::UnityEngine::Shader::GetPropertyRangeLimits)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2cbf824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyRangeLimits", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyTextureDimension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::TextureDimension (::UnityEngine::Shader::*)(int32_t)>(
    &::UnityEngine::Shader::GetPropertyTextureDimension)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2cbf8b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyTextureDimension", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyTextureDefaultName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Shader::*)(int32_t)>(&::UnityEngine::Shader::GetPropertyTextureDefaultName)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2cbf960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyTextureDefaultName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.FindTextureStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Shader::*)(int32_t, ByRef<::StringW>, ByRef<int32_t>)>(
    &::UnityEngine::Shader::FindTextureStack)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2cbfa08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "FindTextureStack", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.get_keywordSpace_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Shader::*)(ByRef<::UnityEngine::Rendering::LocalKeywordSpace>)>(
    &::UnityEngine::Shader::get_keywordSpace_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbc15c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_keywordSpace_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::LocalKeywordSpace>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.EnableKeywordFast_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Rendering::GlobalKeyword>)>(&::UnityEngine::Shader::EnableKeywordFast_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbc294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "EnableKeywordFast_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.DisableKeywordFast_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Rendering::GlobalKeyword>)>(&::UnityEngine::Shader::DisableKeywordFast_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbc310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "DisableKeywordFast_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetKeywordFast_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Rendering::GlobalKeyword>, bool)>(&::UnityEngine::Shader::SetKeywordFast_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbc39c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetKeywordFast_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.IsKeywordEnabledFast_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::Rendering::GlobalKeyword>)>(&::UnityEngine::Shader::IsKeywordEnabledFast_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cbc424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "IsKeywordEnabledFast_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalVectorImpl_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ByRef<::UnityEngine::Vector4>)>(&::UnityEngine::Shader::SetGlobalVectorImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbcc20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalVectorImpl_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.SetGlobalMatrixImpl_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ByRef<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Shader::SetGlobalMatrixImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbcca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalMatrixImpl_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalVectorImpl_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ByRef<::UnityEngine::Vector4>)>(&::UnityEngine::Shader::GetGlobalVectorImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbcf94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalVectorImpl_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetGlobalMatrixImpl_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ByRef<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Shader::GetGlobalMatrixImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cbd044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalMatrixImpl_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Shader.GetPropertyDefaultValue_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Shader*, int32_t, ByRef<::UnityEngine::Vector4>)>(
    &::UnityEngine::Shader::GetPropertyDefaultValue_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2cbf304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyDefaultValue_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::ShaderHardwareTier UnityEngine::Shader::get_globalShaderHardwareTier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_globalShaderHardwareTier",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderHardwareTier, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Shader::set_globalShaderHardwareTier(::UnityEngine::Rendering::ShaderHardwareTier value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "set_globalShaderHardwareTier", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderHardwareTier>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Shader::Find(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "Find", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>, false>(nullptr, ___internal_method, name);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Shader::FindBuiltin(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "FindBuiltin", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>, false>(nullptr, ___internal_method, name);
}
inline int32_t UnityEngine::Shader::get_maximumChunksOverride() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_maximumChunksOverride",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Shader::set_maximumChunksOverride(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "set_maximumChunksOverride",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::Shader::get_maximumLOD() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_maximumLOD",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Shader::set_maximumLOD(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "set_maximumLOD", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Shader::get_globalMaximumLOD() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_globalMaximumLOD",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Shader::set_globalMaximumLOD(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "set_globalMaximumLOD", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Shader::get_isSupported() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_isSupported",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::Shader::get_globalRenderPipeline() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_globalRenderPipeline",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Shader::set_globalRenderPipeline(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "set_globalRenderPipeline", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> UnityEngine::Shader::get_enabledGlobalKeywords() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_enabledGlobalKeywords",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*>, false>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> UnityEngine::Shader::get_globalKeywords() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_globalKeywords",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*>, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::LocalKeywordSpace UnityEngine::Shader::get_keywordSpace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_keywordSpace",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LocalKeywordSpace, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> UnityEngine::Shader::GetEnabledGlobalKeywords() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetEnabledGlobalKeywords",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*>, false>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*> UnityEngine::Shader::GetAllGlobalKeywords() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetAllGlobalKeywords",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::GlobalKeyword, ::Array<::UnityEngine::Rendering::GlobalKeyword>*>, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Shader::EnableKeyword(::StringW keyword) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "EnableKeyword", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Shader::DisableKeyword(::StringW keyword) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "DisableKeyword", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keyword);
}
inline bool UnityEngine::Shader::IsKeywordEnabled(::StringW keyword) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "IsKeywordEnabled", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Shader::EnableKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "EnableKeywordFast", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GlobalKeyword>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Shader::DisableKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "DisableKeywordFast", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GlobalKeyword>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Shader::SetKeywordFast(::UnityEngine::Rendering::GlobalKeyword keyword, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetKeywordFast", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GlobalKeyword>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keyword, value);
}
inline bool UnityEngine::Shader::IsKeywordEnabledFast(::UnityEngine::Rendering::GlobalKeyword keyword) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "IsKeywordEnabledFast", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GlobalKeyword>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Shader::EnableKeyword(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "EnableKeyword", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Shader::DisableKeyword(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "DisableKeyword", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Shader::SetKeyword(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetKeyword", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keyword, value);
}
inline bool UnityEngine::Shader::IsKeywordEnabled(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "IsKeywordEnabled", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, keyword);
}
inline int32_t UnityEngine::Shader::get_renderQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_renderQueue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::DisableBatchingType UnityEngine::Shader::get_disableBatching() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_disableBatching",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::DisableBatchingType, false>(this, ___internal_method);
}
inline void UnityEngine::Shader::WarmupAllShaders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "WarmupAllShaders",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Shader::TagToID(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "TagToID", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, name);
}
inline ::StringW UnityEngine::Shader::IDToTag(int32_t name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "IDToTag", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, name);
}
inline int32_t UnityEngine::Shader::PropertyToID(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "PropertyToID", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, name);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Shader::GetDependency(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetDependency", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>, false>(this, ___internal_method, name);
}
inline int32_t UnityEngine::Shader::get_passCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_passCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Shader::get_subshaderCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_subshaderCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Shader::GetPassCountInSubshader(int32_t subshaderIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPassCountInSubshader",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, subshaderIndex);
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Shader::FindPassTagValue(int32_t passIndex, ::UnityEngine::Rendering::ShaderTagId tagName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "FindPassTagValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderTagId>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderTagId, false>(this, ___internal_method, passIndex, tagName);
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Shader::FindPassTagValue(int32_t subshaderIndex, int32_t passIndex, ::UnityEngine::Rendering::ShaderTagId tagName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "FindPassTagValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderTagId>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderTagId, false>(this, ___internal_method, subshaderIndex, passIndex, tagName);
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Shader::FindSubshaderTagValue(int32_t subshaderIndex, ::UnityEngine::Rendering::ShaderTagId tagName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "FindSubshaderTagValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderTagId>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderTagId, false>(this, ___internal_method, subshaderIndex, tagName);
}
inline int32_t UnityEngine::Shader::Internal_FindPassTagValue(int32_t passIndex, int32_t tagName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "Internal_FindPassTagValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, passIndex, tagName);
}
inline int32_t UnityEngine::Shader::Internal_FindPassTagValueInSubShader(int32_t subShaderIndex, int32_t passIndex, int32_t tagName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "Internal_FindPassTagValueInSubShader", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, subShaderIndex, passIndex, tagName);
}
inline int32_t UnityEngine::Shader::Internal_FindSubshaderTagValue(int32_t subShaderIndex, int32_t tagName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "Internal_FindSubshaderTagValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, subShaderIndex, tagName);
}
inline void UnityEngine::Shader::SetGlobalIntImpl(int32_t name, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalIntImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalFloatImpl(int32_t name, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalFloatImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalVectorImpl(int32_t name, ::UnityEngine::Vector4 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalVectorImpl", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalMatrixImpl(int32_t name, ::UnityEngine::Matrix4x4 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalMatrixImpl", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalTextureImpl(int32_t name, ::UnityEngine::Texture* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalTextureImpl", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalRenderTextureImpl(int32_t name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalRenderTextureImpl", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTextureSubElement>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value, element);
}
inline void UnityEngine::Shader::SetGlobalBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalBufferImpl", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalGraphicsBufferImpl", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalConstantBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalConstantBufferImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value, offset, size);
}
inline void UnityEngine::Shader::SetGlobalConstantGraphicsBufferImpl(int32_t name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalConstantGraphicsBufferImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value, offset, size);
}
inline int32_t UnityEngine::Shader::GetGlobalIntImpl(int32_t name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalIntImpl", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, name);
}
inline float_t UnityEngine::Shader::GetGlobalFloatImpl(int32_t name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalFloatImpl", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, name);
}
inline ::UnityEngine::Vector4 UnityEngine::Shader::GetGlobalVectorImpl(int32_t name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalVectorImpl", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(nullptr, ___internal_method, name);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Shader::GetGlobalMatrixImpl(int32_t name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalMatrixImpl", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(nullptr, ___internal_method, name);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Shader::GetGlobalTextureImpl(int32_t name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalTextureImpl", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>, false>(nullptr, ___internal_method, name);
}
inline void UnityEngine::Shader::SetGlobalFloatArrayImpl(int32_t name, ::ArrayW<float_t, ::Array<float_t>*> values, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalFloatArrayImpl", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, values, count);
}
inline void UnityEngine::Shader::SetGlobalVectorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalVectorArrayImpl", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, values, count);
}
inline void UnityEngine::Shader::SetGlobalMatrixArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalMatrixArrayImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, values, count);
}
inline ::ArrayW<float_t, ::Array<float_t>*> UnityEngine::Shader::GetGlobalFloatArrayImpl(int32_t name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalFloatArrayImpl",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t, ::Array<float_t>*>, false>(nullptr, ___internal_method, name);
}
inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> UnityEngine::Shader::GetGlobalVectorArrayImpl(int32_t name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalVectorArrayImpl",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>, false>(nullptr, ___internal_method, name);
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> UnityEngine::Shader::GetGlobalMatrixArrayImpl(int32_t name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalMatrixArrayImpl",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, false>(nullptr, ___internal_method, name);
}
inline int32_t UnityEngine::Shader::GetGlobalFloatArrayCountImpl(int32_t name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalFloatArrayCountImpl",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, name);
}
inline int32_t UnityEngine::Shader::GetGlobalVectorArrayCountImpl(int32_t name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalVectorArrayCountImpl",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, name);
}
inline int32_t UnityEngine::Shader::GetGlobalMatrixArrayCountImpl(int32_t name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalMatrixArrayCountImpl",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, name);
}
inline void UnityEngine::Shader::ExtractGlobalFloatArrayImpl(int32_t name, ByRef<::ArrayW<float_t, ::Array<float_t>*>> val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "ExtractGlobalFloatArrayImpl", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t, ::Array<float_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, val);
}
inline void UnityEngine::Shader::ExtractGlobalVectorArrayImpl(int32_t name, ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>> val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "ExtractGlobalVectorArrayImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, val);
}
inline void UnityEngine::Shader::ExtractGlobalMatrixArrayImpl(int32_t name, ByRef<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>> val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "ExtractGlobalMatrixArrayImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, val);
}
inline void UnityEngine::Shader::SetGlobalFloatArray(int32_t name, ::ArrayW<float_t, ::Array<float_t>*> values, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, values, count);
}
inline void UnityEngine::Shader::SetGlobalVectorArray(int32_t name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, values, count);
}
inline void UnityEngine::Shader::SetGlobalMatrixArray(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, values, count);
}
inline void UnityEngine::Shader::ExtractGlobalFloatArray(int32_t name, ::System::Collections::Generic::List_1<float_t>* values) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "ExtractGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::ExtractGlobalVectorArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "ExtractGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::ExtractGlobalMatrixArray(int32_t name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "ExtractGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::SetGlobalInt(::StringW name, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalInt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalInt(int32_t nameID, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalInt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nameID, value);
}
inline void UnityEngine::Shader::SetGlobalFloat(::StringW name, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalFloat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalFloat(int32_t nameID, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalFloat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nameID, value);
}
inline void UnityEngine::Shader::SetGlobalInteger(::StringW name, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalInteger", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalInteger(int32_t nameID, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalInteger", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nameID, value);
}
inline void UnityEngine::Shader::SetGlobalVector(::StringW name, ::UnityEngine::Vector4 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalVector", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalVector(int32_t nameID, ::UnityEngine::Vector4 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalVector", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nameID, value);
}
inline void UnityEngine::Shader::SetGlobalColor(::StringW name, ::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalColor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalColor(int32_t nameID, ::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalColor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nameID, value);
}
inline void UnityEngine::Shader::SetGlobalMatrix(::StringW name, ::UnityEngine::Matrix4x4 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalMatrix", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalMatrix", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nameID, value);
}
inline void UnityEngine::Shader::SetGlobalTexture(::StringW name, ::UnityEngine::Texture* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalTexture", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalTexture(int32_t nameID, ::UnityEngine::Texture* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalTexture", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nameID, value);
}
inline void UnityEngine::Shader::SetGlobalTexture(::StringW name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalTexture", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTextureSubElement>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value, element);
}
inline void UnityEngine::Shader::SetGlobalTexture(int32_t nameID, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalTexture", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTextureSubElement>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nameID, value, element);
}
inline void UnityEngine::Shader::SetGlobalBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalBuffer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalBuffer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nameID, value);
}
inline void UnityEngine::Shader::SetGlobalBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalBuffer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalBuffer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nameID, value);
}
inline void UnityEngine::Shader::SetGlobalConstantBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalConstantBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value, offset, size);
}
inline void UnityEngine::Shader::SetGlobalConstantBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalConstantBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nameID, value, offset, size);
}
inline void UnityEngine::Shader::SetGlobalConstantBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalConstantBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value, offset, size);
}
inline void UnityEngine::Shader::SetGlobalConstantBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalConstantBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nameID, value, offset, size);
}
inline void UnityEngine::Shader::SetGlobalFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::SetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nameID, values);
}
inline void UnityEngine::Shader::SetGlobalFloatArray(::StringW name, ::ArrayW<float_t, ::Array<float_t>*> values) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::SetGlobalFloatArray(int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nameID, values);
}
inline void UnityEngine::Shader::SetGlobalVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::SetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nameID, values);
}
inline void UnityEngine::Shader::SetGlobalVectorArray(::StringW name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::SetGlobalVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nameID, values);
}
inline void UnityEngine::Shader::SetGlobalMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::SetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nameID, values);
}
inline void UnityEngine::Shader::SetGlobalMatrixArray(::StringW name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::SetGlobalMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nameID, values);
}
inline int32_t UnityEngine::Shader::GetGlobalInt(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalInt", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, name);
}
inline int32_t UnityEngine::Shader::GetGlobalInt(int32_t nameID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalInt", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, nameID);
}
inline float_t UnityEngine::Shader::GetGlobalFloat(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalFloat", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, name);
}
inline float_t UnityEngine::Shader::GetGlobalFloat(int32_t nameID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalFloat", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, nameID);
}
inline int32_t UnityEngine::Shader::GetGlobalInteger(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalInteger", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, name);
}
inline int32_t UnityEngine::Shader::GetGlobalInteger(int32_t nameID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalInteger", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, nameID);
}
inline ::UnityEngine::Vector4 UnityEngine::Shader::GetGlobalVector(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalVector", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(nullptr, ___internal_method, name);
}
inline ::UnityEngine::Vector4 UnityEngine::Shader::GetGlobalVector(int32_t nameID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalVector", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(nullptr, ___internal_method, nameID);
}
inline ::UnityEngine::Color UnityEngine::Shader::GetGlobalColor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalColor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(nullptr, ___internal_method, name);
}
inline ::UnityEngine::Color UnityEngine::Shader::GetGlobalColor(int32_t nameID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalColor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(nullptr, ___internal_method, nameID);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Shader::GetGlobalMatrix(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalMatrix", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(nullptr, ___internal_method, name);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Shader::GetGlobalMatrix(int32_t nameID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalMatrix", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(nullptr, ___internal_method, nameID);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Shader::GetGlobalTexture(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalTexture", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>, false>(nullptr, ___internal_method, name);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Shader::GetGlobalTexture(int32_t nameID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalTexture", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>, false>(nullptr, ___internal_method, nameID);
}
inline ::ArrayW<float_t, ::Array<float_t>*> UnityEngine::Shader::GetGlobalFloatArray(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t, ::Array<float_t>*>, false>(nullptr, ___internal_method, name);
}
inline ::ArrayW<float_t, ::Array<float_t>*> UnityEngine::Shader::GetGlobalFloatArray(int32_t nameID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t, ::Array<float_t>*>, false>(nullptr, ___internal_method, nameID);
}
inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> UnityEngine::Shader::GetGlobalVectorArray(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>, false>(nullptr, ___internal_method, name);
}
inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> UnityEngine::Shader::GetGlobalVectorArray(int32_t nameID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>, false>(nullptr, ___internal_method, nameID);
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> UnityEngine::Shader::GetGlobalMatrixArray(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, false>(nullptr, ___internal_method, name);
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> UnityEngine::Shader::GetGlobalMatrixArray(int32_t nameID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, false>(nullptr, ___internal_method, nameID);
}
inline void UnityEngine::Shader::GetGlobalFloatArray(::StringW name, ::System::Collections::Generic::List_1<float_t>* values) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::GetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nameID, values);
}
inline void UnityEngine::Shader::GetGlobalVectorArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::GetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nameID, values);
}
inline void UnityEngine::Shader::GetGlobalMatrixArray(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, values);
}
inline void UnityEngine::Shader::GetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nameID, values);
}
inline ::UnityEngine::Shader* UnityEngine::Shader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Shader*>());
}
inline void UnityEngine::Shader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::Shader::GetPropertyName(::UnityEngine::Shader* shader, int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, shader, propertyIndex);
}
inline int32_t UnityEngine::Shader::GetPropertyNameId(::UnityEngine::Shader* shader, int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyNameId", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, shader, propertyIndex);
}
inline ::UnityEngine::Rendering::ShaderPropertyType UnityEngine::Shader::GetPropertyType(::UnityEngine::Shader* shader, int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderPropertyType, false>(nullptr, ___internal_method, shader, propertyIndex);
}
inline ::StringW UnityEngine::Shader::GetPropertyDescription(::UnityEngine::Shader* shader, int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyDescription", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, shader, propertyIndex);
}
inline ::UnityEngine::Rendering::ShaderPropertyFlags UnityEngine::Shader::GetPropertyFlags(::UnityEngine::Shader* shader, int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyFlags", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderPropertyFlags, false>(nullptr, ___internal_method, shader, propertyIndex);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::Shader::GetPropertyAttributes(::UnityEngine::Shader* shader, int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyAttributes", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(nullptr, ___internal_method, shader, propertyIndex);
}
inline int32_t UnityEngine::Shader::GetPropertyDefaultIntValue(::UnityEngine::Shader* shader, int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyDefaultIntValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, shader, propertyIndex);
}
inline ::UnityEngine::Vector4 UnityEngine::Shader::GetPropertyDefaultValue(::UnityEngine::Shader* shader, int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyDefaultValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(nullptr, ___internal_method, shader, propertyIndex);
}
inline ::UnityEngine::Rendering::TextureDimension UnityEngine::Shader::GetPropertyTextureDimension(::UnityEngine::Shader* shader, int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyTextureDimension", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::TextureDimension, false>(nullptr, ___internal_method, shader, propertyIndex);
}
inline ::StringW UnityEngine::Shader::GetPropertyTextureDefaultName(::UnityEngine::Shader* shader, int32_t propertyIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyTextureDefaultName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, shader, propertyIndex);
}
inline bool UnityEngine::Shader::FindTextureStackImpl(::UnityEngine::Shader* s, int32_t propertyIdx, ByRef<::StringW> stackName, ByRef<int32_t> layerIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "FindTextureStackImpl", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, propertyIdx, stackName, layerIndex);
}
inline void UnityEngine::Shader::CheckPropertyIndex(::UnityEngine::Shader* s, int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "CheckPropertyIndex", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, s, propertyIndex);
}
inline int32_t UnityEngine::Shader::GetPropertyCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Shader::FindPropertyIndex(::StringW propertyName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "FindPropertyIndex", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, propertyName);
}
inline ::StringW UnityEngine::Shader::GetPropertyName(int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, propertyIndex);
}
inline int32_t UnityEngine::Shader::GetPropertyNameId(int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyNameId", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, propertyIndex);
}
inline ::UnityEngine::Rendering::ShaderPropertyType UnityEngine::Shader::GetPropertyType(int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderPropertyType, false>(this, ___internal_method, propertyIndex);
}
inline ::StringW UnityEngine::Shader::GetPropertyDescription(int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyDescription",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, propertyIndex);
}
inline ::UnityEngine::Rendering::ShaderPropertyFlags UnityEngine::Shader::GetPropertyFlags(int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyFlags", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderPropertyFlags, false>(this, ___internal_method, propertyIndex);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::Shader::GetPropertyAttributes(int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyAttributes", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, propertyIndex);
}
inline float_t UnityEngine::Shader::GetPropertyDefaultFloatValue(int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyDefaultFloatValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, propertyIndex);
}
inline ::UnityEngine::Vector4 UnityEngine::Shader::GetPropertyDefaultVectorValue(int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyDefaultVectorValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method, propertyIndex);
}
inline ::UnityEngine::Vector2 UnityEngine::Shader::GetPropertyRangeLimits(int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyRangeLimits",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, propertyIndex);
}
inline ::UnityEngine::Rendering::TextureDimension UnityEngine::Shader::GetPropertyTextureDimension(int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyTextureDimension",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::TextureDimension, false>(this, ___internal_method, propertyIndex);
}
inline ::StringW UnityEngine::Shader::GetPropertyTextureDefaultName(int32_t propertyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyTextureDefaultName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, propertyIndex);
}
inline bool UnityEngine::Shader::FindTextureStack(int32_t propertyIndex, ByRef<::StringW> stackName, ByRef<int32_t> layerIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "FindTextureStack", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, propertyIndex, stackName, layerIndex);
}
inline void UnityEngine::Shader::get_keywordSpace_Injected(ByRef<::UnityEngine::Rendering::LocalKeywordSpace> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "get_keywordSpace_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::LocalKeywordSpace>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ret);
}
inline void UnityEngine::Shader::EnableKeywordFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "EnableKeywordFast_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Shader::DisableKeywordFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "DisableKeywordFast_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Shader::SetKeywordFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetKeywordFast_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keyword, value);
}
inline bool UnityEngine::Shader::IsKeywordEnabledFast_Injected(ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "IsKeywordEnabledFast_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Shader::SetGlobalVectorImpl_Injected(int32_t name, ByRef<::UnityEngine::Vector4> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalVectorImpl_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::SetGlobalMatrixImpl_Injected(int32_t name, ByRef<::UnityEngine::Matrix4x4> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "SetGlobalMatrixImpl_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, value);
}
inline void UnityEngine::Shader::GetGlobalVectorImpl_Injected(int32_t name, ByRef<::UnityEngine::Vector4> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalVectorImpl_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, ret);
}
inline void UnityEngine::Shader::GetGlobalMatrixImpl_Injected(int32_t name, ByRef<::UnityEngine::Matrix4x4> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetGlobalMatrixImpl_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, ret);
}
inline void UnityEngine::Shader::GetPropertyDefaultValue_Injected(::UnityEngine::Shader* shader, int32_t propertyIndex, ByRef<::UnityEngine::Vector4> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Shader*>::get(), "GetPropertyDefaultValue_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, shader, propertyIndex, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::Shader::Shader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
