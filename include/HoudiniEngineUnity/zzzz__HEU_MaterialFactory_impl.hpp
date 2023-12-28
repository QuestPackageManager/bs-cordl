#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MaterialFactory_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MaterialData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_MaterialInfo_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.FindShader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Shader* (*)(::StringW)>(&::HoudiniEngineUnity::HEU_MaterialFactory::FindShader)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x219f6d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "FindShader", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.FindPluginShader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Shader* (*)(::StringW)>(&::HoudiniEngineUnity::HEU_MaterialFactory::FindPluginShader)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x219e520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "FindPluginShader",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.GetNewMaterialWithShader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::StringW, ::StringW, ::StringW, bool)>(
    &::HoudiniEngineUnity::HEU_MaterialFactory::GetNewMaterialWithShader)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x219f720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "GetNewMaterialWithShader", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.CreateNewHoudiniStandardMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::StringW, ::StringW, bool)>(
    &::HoudiniEngineUnity::HEU_MaterialFactory::CreateNewHoudiniStandardMaterial)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x219f948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "CreateNewHoudiniStandardMaterial", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.WriteMaterialToAssetCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, ::StringW, bool)>(
    &::HoudiniEngineUnity::HEU_MaterialFactory::WriteMaterialToAssetCache)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x219f980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "WriteMaterialToAssetCache", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.DoesMaterialExistInAssetCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Material*)>(&::HoudiniEngineUnity::HEU_MaterialFactory::DoesMaterialExistInAssetCache)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x219fa74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "DoesMaterialExistInAssetCache",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.DestroyNonAssetMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*, bool)>(&::HoudiniEngineUnity::HEU_MaterialFactory::DestroyNonAssetMaterial)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x219fa98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "DestroyNonAssetMaterial", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.DeleteAssetMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*)>(&::HoudiniEngineUnity::HEU_MaterialFactory::DeleteAssetMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x219fb38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "DeleteAssetMaterial", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.RenderAndExtractImageToTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Texture2D* (*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_MaterialInfo, int32_t, ::StringW, ::StringW, bool, bool)>(
        &::HoudiniEngineUnity::HEU_MaterialFactory::RenderAndExtractImageToTexture)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x219ed90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "RenderAndExtractImageToTexture", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_MaterialInfo>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.ExtractHoudiniImageToTexturePNGJPEG
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Texture2D* (*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_MaterialInfo, ::StringW)>(
        &::HoudiniEngineUnity::HEU_MaterialFactory::ExtractHoudiniImageToTexturePNGJPEG)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x219fe2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "ExtractHoudiniImageToTexturePNGJPEG", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_MaterialInfo>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.ExtractHoudiniImageToTextureRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Texture2D* (*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_MaterialInfo, ::StringW)>(
        &::HoudiniEngineUnity::HEU_MaterialFactory::ExtractHoudiniImageToTextureRaw)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x219fb40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "ExtractHoudiniImageToTextureRaw", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_MaterialInfo>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.ExtractHoudiniImageToTextureFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Texture2D* (*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_MaterialInfo, ::StringW, ::StringW)>(
        &::HoudiniEngineUnity::HEU_MaterialFactory::ExtractHoudiniImageToTextureFile)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x219ff60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "ExtractHoudiniImageToTextureFile", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_MaterialInfo>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.LoadUnityMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::StringW)>(&::HoudiniEngineUnity::HEU_MaterialFactory::LoadUnityMaterial)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x21a0100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "LoadUnityMaterial",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.LoadSubstanceMaterialWithName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::StringW, ::StringW)>(
    &::HoudiniEngineUnity::HEU_MaterialFactory::LoadSubstanceMaterialWithName)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x21a0398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "LoadSubstanceMaterialWithName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.LoadSubstanceMaterialWithIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::StringW, int32_t)>(
    &::HoudiniEngineUnity::HEU_MaterialFactory::LoadSubstanceMaterialWithIndex)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x21a0574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "LoadSubstanceMaterialWithIndex", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.GetUnitySubstanceMaterialKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::StringW, int32_t)>(
    &::HoudiniEngineUnity::HEU_MaterialFactory::GetUnitySubstanceMaterialKey)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x21a07e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "GetUnitySubstanceMaterialKey", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.MaterialNameToKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::HoudiniEngineUnity::HEU_MaterialFactory::MaterialNameToKey)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21a08fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "MaterialNameToKey",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.EnableGPUInstancing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*)>(&::HoudiniEngineUnity::HEU_MaterialFactory::EnableGPUInstancing)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21a0918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "EnableGPUInstancing", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.MaterialHasGPUInstancingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Material*)>(&::HoudiniEngineUnity::HEU_MaterialFactory::MaterialHasGPUInstancingEnabled)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21a0930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "MaterialHasGPUInstancingEnabled",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.CopyMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::Material*)>(&::HoudiniEngineUnity::HEU_MaterialFactory::CopyMaterial)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21a0944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "CopyMaterial", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.GetDefaultStandardMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)()>(&::HoudiniEngineUnity::HEU_MaterialFactory::GetDefaultStandardMaterial)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x21a09a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(),
                                                                               "GetDefaultStandardMaterial", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.LoadTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (*)(::StringW)>(&::HoudiniEngineUnity::HEU_MaterialFactory::LoadTexture)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x21a0a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "LoadTexture", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.WhiteTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (*)()>(&::HoudiniEngineUnity::HEU_MaterialFactory::WhiteTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a0bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(),
                                                                               "WhiteTexture", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.CreateUnitySubstanceMaterialData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::HoudiniEngineUnity::HEU_MaterialData* (*)(int32_t, ::StringW, ::StringW, int32_t, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, ::StringW)>(
        &::HoudiniEngineUnity::HEU_MaterialFactory::CreateUnitySubstanceMaterialData)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x21a0bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "CreateUnitySubstanceMaterialData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.CreateMaterialInCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::HoudiniEngineUnity::HEU_MaterialData* (*)(int32_t, ::StringW, ::HoudiniEngineUnity::__HEU_MaterialData__Source, bool,
                                                            ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, ::StringW)>(
        &::HoudiniEngineUnity::HEU_MaterialFactory::CreateMaterialInCache)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x21a0f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "CreateMaterialInCache", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_MaterialData__Source>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.GetOrCreateDefaultMaterialInCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::HoudiniEngineUnity::HEU_MaterialData* (*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, bool, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*,
                                                ::StringW)>(&::HoudiniEngineUnity::HEU_MaterialFactory::GetOrCreateDefaultMaterialInCache)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x21a1084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "GetOrCreateDefaultMaterialInCache", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.GetMaterialDataFromCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::HoudiniEngineUnity::HEU_MaterialData* (*)(int32_t, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*)>(
        &::HoudiniEngineUnity::HEU_MaterialFactory::GetMaterialDataFromCache)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x21a122c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "GetMaterialDataFromCache", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.GenerateDefaultMaterialName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_MaterialFactory::GenerateDefaultMaterialName)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x21a1170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "GenerateDefaultMaterialName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.CreateHoudiniMaterialData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::HoudiniEngineUnity::HEU_MaterialData* (*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, int32_t, int32_t,
                                                            ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, ::StringW)>(
        &::HoudiniEngineUnity::HEU_MaterialFactory::CreateHoudiniMaterialData)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x21a1390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "CreateHoudiniMaterialData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialFactory.GetMaterialDataMapFromCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MaterialData*>* (*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*)>(
        &::HoudiniEngineUnity::HEU_MaterialFactory::GetMaterialDataMapFromCache)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x21a178c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "GetMaterialDataMapFromCache", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*>::get() })));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::HEU_MaterialFactory::setStaticF__defaultStandardMaterial(::UnityEngine::Material* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Material*, "_defaultStandardMaterial", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get>(
      std::forward<::UnityEngine::Material*>(value));
}
inline ::UnityEngine::Material* HoudiniEngineUnity::HEU_MaterialFactory::getStaticF__defaultStandardMaterial() {
  return ::cordl_internals::getStaticField<::UnityEngine::Material*, "_defaultStandardMaterial",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get>();
}
inline ::UnityEngine::Shader* HoudiniEngineUnity::HEU_MaterialFactory::FindShader(::StringW shaderName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "FindShader", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Shader*, false>(nullptr, ___internal_method, shaderName);
}
inline ::UnityEngine::Shader* HoudiniEngineUnity::HEU_MaterialFactory::FindPluginShader(::StringW shaderName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "FindPluginShader",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Shader*, false>(nullptr, ___internal_method, shaderName);
}
/// @param materialName: ::StringW (default: u"")
/// @param bWriteToFile: bool (default: true)
inline ::UnityEngine::Material* HoudiniEngineUnity::HEU_MaterialFactory::GetNewMaterialWithShader(::StringW assetCacheFolderPath, ::StringW shaderName, ::StringW materialName, bool bWriteToFile) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "GetNewMaterialWithShader", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(nullptr, ___internal_method, assetCacheFolderPath, shaderName, materialName, bWriteToFile);
}
inline ::UnityEngine::Material* HoudiniEngineUnity::HEU_MaterialFactory::CreateNewHoudiniStandardMaterial(::StringW assetCacheFolderPath, ::StringW materialName, bool bWriteToFile) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "CreateNewHoudiniStandardMaterial", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(nullptr, ___internal_method, assetCacheFolderPath, materialName, bWriteToFile);
}
inline void HoudiniEngineUnity::HEU_MaterialFactory::WriteMaterialToAssetCache(::UnityEngine::Material* material, ::StringW assetCacheFolderPath, ::StringW materialName, bool bOverwriteExisting) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "WriteMaterialToAssetCache", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, material, assetCacheFolderPath, materialName, bOverwriteExisting);
}
inline bool HoudiniEngineUnity::HEU_MaterialFactory::DoesMaterialExistInAssetCache(::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "DoesMaterialExistInAssetCache",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, material);
}
inline void HoudiniEngineUnity::HEU_MaterialFactory::DestroyNonAssetMaterial(::UnityEngine::Material* material, bool bRegisterUndo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "DestroyNonAssetMaterial", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, material, bRegisterUndo);
}
inline void HoudiniEngineUnity::HEU_MaterialFactory::DeleteAssetMaterial(::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "DeleteAssetMaterial", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, material);
}
/// @param invertTexture: bool (default: false)
inline ::UnityEngine::Texture2D* HoudiniEngineUnity::HEU_MaterialFactory::RenderAndExtractImageToTexture(::HoudiniEngineUnity::HEU_SessionBase* session,
                                                                                                         ::HoudiniEngineUnity::HAPI_MaterialInfo materialInfo, int32_t textureParmID,
                                                                                                         ::StringW textureName, ::StringW assetCacheFolderPath, bool isNormalMap, bool invertTexture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "RenderAndExtractImageToTexture", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_MaterialInfo>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Texture2D*, false>(nullptr, ___internal_method, session, materialInfo, textureParmID, textureName, assetCacheFolderPath, isNormalMap,
                                                                               invertTexture);
}
inline ::UnityEngine::Texture2D* HoudiniEngineUnity::HEU_MaterialFactory::ExtractHoudiniImageToTexturePNGJPEG(::HoudiniEngineUnity::HEU_SessionBase* session,
                                                                                                              ::HoudiniEngineUnity::HAPI_MaterialInfo materialInfo, ::StringW imagePlanes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "ExtractHoudiniImageToTexturePNGJPEG", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_MaterialInfo>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Texture2D*, false>(nullptr, ___internal_method, session, materialInfo, imagePlanes);
}
inline ::UnityEngine::Texture2D* HoudiniEngineUnity::HEU_MaterialFactory::ExtractHoudiniImageToTextureRaw(::HoudiniEngineUnity::HEU_SessionBase* session,
                                                                                                          ::HoudiniEngineUnity::HAPI_MaterialInfo materialInfo, ::StringW imagePlanes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "ExtractHoudiniImageToTextureRaw", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_MaterialInfo>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Texture2D*, false>(nullptr, ___internal_method, session, materialInfo, imagePlanes);
}
inline ::UnityEngine::Texture2D* HoudiniEngineUnity::HEU_MaterialFactory::ExtractHoudiniImageToTextureFile(::HoudiniEngineUnity::HEU_SessionBase* session,
                                                                                                           ::HoudiniEngineUnity::HAPI_MaterialInfo materialInfo, ::StringW imagePlanes,
                                                                                                           ::StringW assetCacheFolderPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "ExtractHoudiniImageToTextureFile", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_MaterialInfo>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Texture2D*, false>(nullptr, ___internal_method, session, materialInfo, imagePlanes, assetCacheFolderPath);
}
inline ::UnityEngine::Material* HoudiniEngineUnity::HEU_MaterialFactory::LoadUnityMaterial(::StringW materialPath) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "LoadUnityMaterial",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(nullptr, ___internal_method, materialPath);
}
inline ::UnityEngine::Material* HoudiniEngineUnity::HEU_MaterialFactory::LoadSubstanceMaterialWithName(::StringW materialPath, ::StringW substanceName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "LoadSubstanceMaterialWithName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(nullptr, ___internal_method, materialPath, substanceName);
}
inline ::UnityEngine::Material* HoudiniEngineUnity::HEU_MaterialFactory::LoadSubstanceMaterialWithIndex(::StringW materialPath, int32_t substanceMaterialIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "LoadSubstanceMaterialWithIndex", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(nullptr, ___internal_method, materialPath, substanceMaterialIndex);
}
inline int32_t HoudiniEngineUnity::HEU_MaterialFactory::GetUnitySubstanceMaterialKey(::StringW unityMaterialPath, ::StringW substanceName, int32_t substanceIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "GetUnitySubstanceMaterialKey", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, unityMaterialPath, substanceName, substanceIndex);
}
inline int32_t HoudiniEngineUnity::HEU_MaterialFactory::MaterialNameToKey(::StringW materialName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "MaterialNameToKey",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, materialName);
}
inline void HoudiniEngineUnity::HEU_MaterialFactory::EnableGPUInstancing(::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "EnableGPUInstancing", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, material);
}
inline bool HoudiniEngineUnity::HEU_MaterialFactory::MaterialHasGPUInstancingEnabled(::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "MaterialHasGPUInstancingEnabled",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, material);
}
inline ::UnityEngine::Material* HoudiniEngineUnity::HEU_MaterialFactory::CopyMaterial(::UnityEngine::Material* material) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "CopyMaterial", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(nullptr, ___internal_method, material);
}
inline ::UnityEngine::Material* HoudiniEngineUnity::HEU_MaterialFactory::GetDefaultStandardMaterial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(),
                                                                             "GetDefaultStandardMaterial", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Texture2D* HoudiniEngineUnity::HEU_MaterialFactory::LoadTexture(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "LoadTexture", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Texture2D*, false>(nullptr, ___internal_method, path);
}
inline ::UnityEngine::Texture2D* HoudiniEngineUnity::HEU_MaterialFactory::WhiteTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "WhiteTexture",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Texture2D*, false>(nullptr, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_MaterialData*
HoudiniEngineUnity::HEU_MaterialFactory::CreateUnitySubstanceMaterialData(int32_t materialKey, ::StringW materialPath, ::StringW substanceName, int32_t substanceIndex,
                                                                          ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* materialCache,
                                                                          ::StringW assetCacheFolderPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "CreateUnitySubstanceMaterialData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_MaterialData*, false>(nullptr, ___internal_method, materialKey, materialPath, substanceName, substanceIndex, materialCache,
                                                                                             assetCacheFolderPath);
}
inline ::HoudiniEngineUnity::HEU_MaterialData*
HoudiniEngineUnity::HEU_MaterialFactory::CreateMaterialInCache(int32_t materialKey, ::StringW materialName, ::HoudiniEngineUnity::__HEU_MaterialData__Source sourceType, bool bWriteToFile,
                                                               ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* materialCache, ::StringW assetCacheFolderPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "CreateMaterialInCache", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_MaterialData__Source>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_MaterialData*, false>(nullptr, ___internal_method, materialKey, materialName, sourceType, bWriteToFile, materialCache,
                                                                                             assetCacheFolderPath);
}
inline ::HoudiniEngineUnity::HEU_MaterialData*
HoudiniEngineUnity::HEU_MaterialFactory::GetOrCreateDefaultMaterialInCache(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, bool bWriteToFile,
                                                                           ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* materialCache,
                                                                           ::StringW assetCacheFolderPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "GetOrCreateDefaultMaterialInCache", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_MaterialData*, false>(nullptr, ___internal_method, session, geoID, partID, bWriteToFile, materialCache, assetCacheFolderPath);
}
inline ::HoudiniEngineUnity::HEU_MaterialData*
HoudiniEngineUnity::HEU_MaterialFactory::GetMaterialDataFromCache(int32_t materialKey, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* materialCache) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "GetMaterialDataFromCache", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_MaterialData*, false>(nullptr, ___internal_method, materialKey, materialCache);
}
inline ::StringW HoudiniEngineUnity::HEU_MaterialFactory::GenerateDefaultMaterialName(int32_t geoID, int32_t partID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "GenerateDefaultMaterialName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, geoID, partID);
}
inline ::HoudiniEngineUnity::HEU_MaterialData*
HoudiniEngineUnity::HEU_MaterialFactory::CreateHoudiniMaterialData(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t assetID, int32_t materialID, int32_t geoID, int32_t partID,
                                                                   ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* materialCache, ::StringW assetCacheFolderPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "CreateHoudiniMaterialData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_MaterialData*, false>(nullptr, ___internal_method, session, assetID, materialID, geoID, partID, materialCache,
                                                                                             assetCacheFolderPath);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MaterialData*>*
HoudiniEngineUnity::HEU_MaterialFactory::GetMaterialDataMapFromCache(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* materialCache) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialFactory*>::get(), "GetMaterialDataMapFromCache", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MaterialData*>*, false>(nullptr, ___internal_method, materialCache);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_MaterialFactory::HEU_MaterialFactory() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
