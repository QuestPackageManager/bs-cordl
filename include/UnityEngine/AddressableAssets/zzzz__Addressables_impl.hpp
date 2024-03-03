#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AddressableAssets/zzzz__Addressables_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__IResourceLocator_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AddressablesImpl_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__Addressables_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IInstanceProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__InstantiationParameters_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__UnloadSceneOptions_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AddressableAssets::__Addressables__MergeMode::__Addressables__MergeMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::__Addressables__MergeMode::__Addressables__MergeMode() {}
constexpr ::UnityEngine::AddressableAssets::__Addressables__MergeMode UnityEngine::AddressableAssets::__Addressables__MergeMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::AddressableAssets::__Addressables__MergeMode UnityEngine::AddressableAssets::__Addressables__MergeMode::UseFirst{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::AddressableAssets::__Addressables__MergeMode UnityEngine::AddressableAssets::__Addressables__MergeMode::Union{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::AddressableAssets::__Addressables__MergeMode UnityEngine::AddressableAssets::__Addressables__MergeMode::Intersection{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_m_Addressables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::AddressablesImpl* (*)()>(
    &::UnityEngine::AddressableAssets::Addressables::get_m_Addressables)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2afdc40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                               "get_m_Addressables", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_ResourceManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::ResourceManager* (*)()>(
    &::UnityEngine::AddressableAssets::Addressables::get_ResourceManager)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2afdc98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                               "get_ResourceManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::AddressablesImpl* (*)()>(
    &::UnityEngine::AddressableAssets::Addressables::get_Instance)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2afdd28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                               "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_InstanceProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* (*)()>(
    &::UnityEngine::AddressableAssets::Addressables::get_InstanceProvider)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2afddb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                               "get_InstanceProvider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ResolveInternalId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::AddressableAssets::Addressables::ResolveInternalId)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2afde44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ResolveInternalId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_InternalIdTransformFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* (*)()>(
    &::UnityEngine::AddressableAssets::Addressables::get_InternalIdTransformFunc)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2afdedc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                               "get_InternalIdTransformFunc", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.set_InternalIdTransformFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*)>(
    &::UnityEngine::AddressableAssets::Addressables::set_InternalIdTransformFunc)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2afdf94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "set_InternalIdTransformFunc", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_WebRequestOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* (*)()>(
    &::UnityEngine::AddressableAssets::Addressables::get_WebRequestOverride)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2afe054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                               "get_WebRequestOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.set_WebRequestOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*)>(
    &::UnityEngine::AddressableAssets::Addressables::set_WebRequestOverride)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2afe10c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "set_WebRequestOverride", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_StreamingAssetsSubFolder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::AddressableAssets::Addressables::get_StreamingAssetsSubFolder)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2afe1cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                               "get_StreamingAssetsSubFolder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_BuildPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::AddressableAssets::Addressables::get_BuildPath)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2afe2c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                               "get_BuildPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_PlayerBuildDataPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::AddressableAssets::Addressables::get_PlayerBuildDataPath)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2afe434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                               "get_PlayerBuildDataPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_RuntimePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::AddressableAssets::Addressables::get_RuntimePath)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2afe54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                               "get_RuntimePath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_ResourceLocators
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* (*)()>(
        &::UnityEngine::AddressableAssets::Addressables::get_ResourceLocators)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2afe5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                               "get_ResourceLocators", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.InternalSafeSerializationLog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::LogType)>(
    &::UnityEngine::AddressableAssets::Addressables::InternalSafeSerializationLog)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2afe670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "InternalSafeSerializationLog", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.InternalSafeSerializationLogFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::LogType, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::UnityEngine::AddressableAssets::Addressables::InternalSafeSerializationLogFormat)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2afe88c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "InternalSafeSerializationLogFormat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::AddressableAssets::Addressables::Log)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2afeae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LogFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::UnityEngine::AddressableAssets::Addressables::LogFormat)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2afeb80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LogFormat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LogWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::AddressableAssets::Addressables::LogWarning)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2afa094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LogWarning",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LogWarningFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::UnityEngine::AddressableAssets::Addressables::LogWarningFormat)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2afec28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LogWarningFormat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LogError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::AddressableAssets::Addressables::LogError)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2afa12c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LogError",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LogException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*)>(
    &::UnityEngine::AddressableAssets::Addressables::LogException)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2afecd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LogException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LogException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Exception*)>(&::UnityEngine::AddressableAssets::Addressables::LogException)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2afee40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LogException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LogErrorFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::UnityEngine::AddressableAssets::Addressables::LogErrorFormat)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2afaa58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LogErrorFormat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (*)()>(
        &::UnityEngine::AddressableAssets::Addressables::Initialize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2afeed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                               "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.InitializeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (*)()>(
        &::UnityEngine::AddressableAssets::Addressables::InitializeAsync)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2afef3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                               "InitializeAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.InitializeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (*)(bool)>(
        &::UnityEngine::AddressableAssets::Addressables::InitializeAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2aff074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "InitializeAsync",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadContentCatalog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (*)(::StringW, ::StringW)>(
        &::UnityEngine::AddressableAssets::Addressables::LoadContentCatalog)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2aff1c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadContentCatalog", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadContentCatalogAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (*)(::StringW, ::StringW)>(
        &::UnityEngine::AddressableAssets::Addressables::LoadContentCatalogAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2aff240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadContentCatalogAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadContentCatalogAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (*)(::StringW, bool, ::StringW)>(
        &::UnityEngine::AddressableAssets::Addressables::LoadContentCatalogAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2aff500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadContentCatalogAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_InitializationOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (*)()>(
        &::UnityEngine::AddressableAssets::Addressables::get_InitializationOperation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aff5d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                               "get_InitializationOperation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadResourceLocations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> (*)(
        ::System::Collections::Generic::IList_1<::System::Object*>*, ::UnityEngine::AddressableAssets::__Addressables__MergeMode, ::System::Type*)>(
    &::UnityEngine::AddressableAssets::Addressables::LoadResourceLocations)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2aff5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadResourceLocations", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::__Addressables__MergeMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadResourceLocationsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> (*)(
        ::System::Collections::Generic::IList_1<::System::Object*>*, ::UnityEngine::AddressableAssets::__Addressables__MergeMode, ::System::Type*)>(
    &::UnityEngine::AddressableAssets::Addressables::LoadResourceLocationsAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2aff670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadResourceLocationsAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::__Addressables__MergeMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadResourceLocationsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> (*)(::System::Collections::IEnumerable*, ::UnityEngine::AddressableAssets::__Addressables__MergeMode, ::System::Type*)>(
    &::UnityEngine::AddressableAssets::Addressables::LoadResourceLocationsAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2aff898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadResourceLocationsAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::__Addressables__MergeMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadResourceLocations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> (*)(::System::Object*, ::System::Type*)>(&::UnityEngine::AddressableAssets::Addressables::LoadResourceLocations)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2aff96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                               "LoadResourceLocations", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadResourceLocationsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> (*)(::System::Object*, ::System::Type*)>(&::UnityEngine::AddressableAssets::Addressables::LoadResourceLocationsAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2aff9ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                               "LoadResourceLocationsAsync", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::Addressables::Release)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2affbf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "Release", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ReleaseInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::GameObject*)>(&::UnityEngine::AddressableAssets::Addressables::ReleaseInstance)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2affd08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ReleaseInstance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ReleaseInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::Addressables::ReleaseInstance)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2affe9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ReleaseInstance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ReleaseInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>)>(&::UnityEngine::AddressableAssets::Addressables::ReleaseInstance)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2afff64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ReleaseInstance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.GetDownloadSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (*)(::System::Object*)>(
    &::UnityEngine::AddressableAssets::Addressables::GetDownloadSize)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b00034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "GetDownloadSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.GetDownloadSizeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (*)(::System::Object*)>(
    &::UnityEngine::AddressableAssets::Addressables::GetDownloadSizeAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2b000ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "GetDownloadSizeAsync",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.GetDownloadSizeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (*)(::StringW)>(
    &::UnityEngine::AddressableAssets::Addressables::GetDownloadSizeAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2b00224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "GetDownloadSizeAsync",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.GetDownloadSizeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (*)(
    ::System::Collections::Generic::IList_1<::System::Object*>*)>(&::UnityEngine::AddressableAssets::Addressables::GetDownloadSizeAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2b002e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "GetDownloadSizeAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.GetDownloadSizeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (*)(
    ::System::Collections::IEnumerable*)>(&::UnityEngine::AddressableAssets::Addressables::GetDownloadSizeAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2b011d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "GetDownloadSizeAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.DownloadDependencies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (*)(::System::Object*)>(
    &::UnityEngine::AddressableAssets::Addressables::DownloadDependencies)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b0128c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "DownloadDependencies",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.DownloadDependenciesAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (*)(::System::Object*, bool)>(
    &::UnityEngine::AddressableAssets::Addressables::DownloadDependenciesAsync)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2b0130c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "DownloadDependenciesAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.DownloadDependenciesAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, bool)>(
    &::UnityEngine::AddressableAssets::Addressables::DownloadDependenciesAsync)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2b01654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "DownloadDependenciesAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.DownloadDependenciesAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (*)(
    ::System::Collections::Generic::IList_1<::System::Object*>*, ::UnityEngine::AddressableAssets::__Addressables__MergeMode, bool)>(
    &::UnityEngine::AddressableAssets::Addressables::DownloadDependenciesAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2b01860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "DownloadDependenciesAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::__Addressables__MergeMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.DownloadDependenciesAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (*)(
    ::System::Collections::IEnumerable*, ::UnityEngine::AddressableAssets::__Addressables__MergeMode, bool)>(&::UnityEngine::AddressableAssets::Addressables::DownloadDependenciesAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2b01bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "DownloadDependenciesAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::__Addressables__MergeMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2b01c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ClearDependencyCacheAsync",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*)>(&::UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2b01f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ClearDependencyCacheAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::IList_1<::System::Object*>*)>(
    &::UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2b02554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ClearDependencyCacheAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::IEnumerable*)>(
    &::UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2b02b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ClearDependencyCacheAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2b02bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ClearDependencyCacheAsync",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (*)(::System::Object*, bool)>(
    &::UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b02c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ClearDependencyCacheAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, bool)>(
    &::UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b02d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ClearDependencyCacheAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (*)(
    ::System::Collections::Generic::IList_1<::System::Object*>*, bool)>(&::UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b02dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ClearDependencyCacheAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (*)(
    ::System::Collections::IEnumerable*, bool)>(&::UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b02ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ClearDependencyCacheAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (*)(::StringW, bool)>(
    &::UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b02f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ClearDependencyCacheAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.Instantiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::Transform*, bool, bool)>(&::UnityEngine::AddressableAssets::Addressables::Instantiate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b03048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "Instantiate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.Instantiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*, bool)>(
    &::UnityEngine::AddressableAssets::Addressables::Instantiate)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2b03200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "Instantiate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.Instantiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (*)(
    ::System::Object*, ::UnityEngine::Transform*, bool, bool)>(&::UnityEngine::AddressableAssets::Addressables::Instantiate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2b03414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "Instantiate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.Instantiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (*)(
    ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*, bool)>(&::UnityEngine::AddressableAssets::Addressables::Instantiate)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2b03588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "Instantiate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.Instantiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (*)(
    ::System::Object*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, bool)>(&::UnityEngine::AddressableAssets::Addressables::Instantiate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2b0379c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "Instantiate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.Instantiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, bool)>(
    &::UnityEngine::AddressableAssets::Addressables::Instantiate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2b03940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "Instantiate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.InstantiateAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::Transform*, bool, bool)>(&::UnityEngine::AddressableAssets::Addressables::InstantiateAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2b039f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "InstantiateAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.InstantiateAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*, bool)>(
    &::UnityEngine::AddressableAssets::Addressables::InstantiateAsync)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2b032e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "InstantiateAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.InstantiateAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (*)(
    ::System::Object*, ::UnityEngine::Transform*, bool, bool)>(&::UnityEngine::AddressableAssets::Addressables::InstantiateAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2b034ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "InstantiateAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.InstantiateAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (*)(
    ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*, bool)>(&::UnityEngine::AddressableAssets::Addressables::InstantiateAsync)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2b03670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "InstantiateAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.InstantiateAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (*)(
    ::System::Object*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, bool)>(&::UnityEngine::AddressableAssets::Addressables::InstantiateAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2b0384c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "InstantiateAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.InstantiateAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, bool)>(
    &::UnityEngine::AddressableAssets::Addressables::InstantiateAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2b0310c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "InstantiateAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::System::Object*, ::UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t)>(&::UnityEngine::AddressableAssets::Addressables::LoadScene)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2b041ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadScene", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t)>(
        &::UnityEngine::AddressableAssets::Addressables::LoadScene)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2b04364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadScene", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadSceneAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::System::Object*, ::UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t)>(&::UnityEngine::AddressableAssets::Addressables::LoadSceneAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2b04284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadSceneAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadSceneAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t)>(
        &::UnityEngine::AddressableAssets::Addressables::LoadSceneAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2b043fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadSceneAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.UnloadScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, bool)>(&::UnityEngine::AddressableAssets::Addressables::UnloadScene)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2b047ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "UnloadScene", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.UnloadScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, bool)>(&::UnityEngine::AddressableAssets::Addressables::UnloadScene)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2b04954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "UnloadScene", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.UnloadScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, bool)>(
        &::UnityEngine::AddressableAssets::Addressables::UnloadScene)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2b04adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "UnloadScene", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.UnloadSceneAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, ::UnityEngine::SceneManagement::UnloadSceneOptions, bool)>(
        &::UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2b04c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "UnloadSceneAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::UnloadSceneOptions>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.UnloadSceneAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::SceneManagement::UnloadSceneOptions, bool)>(
        &::UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2b04f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "UnloadSceneAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::UnloadSceneOptions>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.UnloadScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>,
        ::UnityEngine::SceneManagement::UnloadSceneOptions, bool)>(&::UnityEngine::AddressableAssets::Addressables::UnloadScene)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2b05188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "UnloadScene", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::UnloadSceneOptions>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.UnloadSceneAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, bool)>(&::UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2b0487c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "UnloadSceneAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.UnloadSceneAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, bool)>(&::UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2b049f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "UnloadSceneAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.UnloadSceneAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, bool)>(
        &::UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2b04b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "UnloadSceneAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.CheckForCatalogUpdates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> (*)(bool)>(
        &::UnityEngine::AddressableAssets::Addressables::CheckForCatalogUpdates)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2b05330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "CheckForCatalogUpdates",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.UpdateCatalogs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> (*)(::System::Collections::Generic::IEnumerable_1<::StringW>*, bool)>(
    &::UnityEngine::AddressableAssets::Addressables::UpdateCatalogs)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2b0552c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "UpdateCatalogs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.UpdateCatalogs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> (*)(bool, ::System::Collections::Generic::IEnumerable_1<::StringW>*, bool)>(
    &::UnityEngine::AddressableAssets::Addressables::UpdateCatalogs)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2b0581c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "UpdateCatalogs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.AddResourceLocator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, ::StringW, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
        &::UnityEngine::AddressableAssets::Addressables::AddResourceLocator)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2b058f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "AddResourceLocator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.RemoveResourceLocator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*)>(
    &::UnityEngine::AddressableAssets::Addressables::RemoveResourceLocator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2b05aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "RemoveResourceLocator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ClearResourceLocators
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::AddressableAssets::Addressables::ClearResourceLocators)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2b05c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                               "ClearResourceLocators", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.CleanBundleCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (*)(
    ::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::UnityEngine::AddressableAssets::Addressables::CleanBundleCache)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2b05d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "CleanBundleCache", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::AddressableAssets::Addressables::setStaticF_reinitializeAddressables(bool value) {
  ::cordl_internals::setStaticField<bool, "reinitializeAddressables", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get>(
      std::forward<bool>(value));
}
inline bool UnityEngine::AddressableAssets::Addressables::getStaticF_reinitializeAddressables() {
  return ::cordl_internals::getStaticField<bool, "reinitializeAddressables", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get>();
}
inline void UnityEngine::AddressableAssets::Addressables::setStaticF_m_AddressablesInstance(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AddressableAssets::AddressablesImpl*, "m_AddressablesInstance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get>(
      std::forward<::UnityEngine::AddressableAssets::AddressablesImpl*>(value));
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl* UnityEngine::AddressableAssets::Addressables::getStaticF_m_AddressablesInstance() {
  return ::cordl_internals::getStaticField<::UnityEngine::AddressableAssets::AddressablesImpl*, "m_AddressablesInstance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get>();
}
inline void UnityEngine::AddressableAssets::Addressables::setStaticF_LibraryPath(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "LibraryPath", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::AddressableAssets::Addressables::getStaticF_LibraryPath() {
  return ::cordl_internals::getStaticField<::StringW, "LibraryPath", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get>();
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl* UnityEngine::AddressableAssets::Addressables::get_m_Addressables() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                             "get_m_Addressables", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AddressablesImpl*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceManager* UnityEngine::AddressableAssets::Addressables::get_ResourceManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                             "get_ResourceManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceManager*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl* UnityEngine::AddressableAssets::Addressables::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                             "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AddressablesImpl*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* UnityEngine::AddressableAssets::Addressables::get_InstanceProvider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                             "get_InstanceProvider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*, false>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::Addressables::ResolveInternalId(::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ResolveInternalId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, id);
}
inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* UnityEngine::AddressableAssets::Addressables::get_InternalIdTransformFunc() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                             "get_InternalIdTransformFunc", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::AddressableAssets::Addressables::set_InternalIdTransformFunc(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "set_InternalIdTransformFunc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* UnityEngine::AddressableAssets::Addressables::get_WebRequestOverride() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                             "get_WebRequestOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::AddressableAssets::Addressables::set_WebRequestOverride(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "set_WebRequestOverride", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::StringW UnityEngine::AddressableAssets::Addressables::get_StreamingAssetsSubFolder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                             "get_StreamingAssetsSubFolder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::Addressables::get_BuildPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                             "get_BuildPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::Addressables::get_PlayerBuildDataPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                             "get_PlayerBuildDataPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::Addressables::get_RuntimePath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                             "get_RuntimePath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* UnityEngine::AddressableAssets::Addressables::get_ResourceLocators() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                             "get_ResourceLocators", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*, false>(nullptr, ___internal_method);
}
/// @param logType: ::UnityEngine::LogType (default: static_cast<int32_t>(0x3))
inline void UnityEngine::AddressableAssets::Addressables::InternalSafeSerializationLog(::StringW msg, ::UnityEngine::LogType logType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "InternalSafeSerializationLog", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, msg, logType);
}
/// @param logType: ::UnityEngine::LogType (default: static_cast<int32_t>(0x3))
inline void UnityEngine::AddressableAssets::Addressables::InternalSafeSerializationLogFormat(::StringW format, ::UnityEngine::LogType logType,
                                                                                             ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "InternalSafeSerializationLogFormat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, format, logType, args);
}
inline void UnityEngine::AddressableAssets::Addressables::Log(::StringW msg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, msg);
}
inline void UnityEngine::AddressableAssets::Addressables::LogFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LogFormat", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, format, args);
}
inline void UnityEngine::AddressableAssets::Addressables::LogWarning(::StringW msg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LogWarning",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, msg);
}
inline void UnityEngine::AddressableAssets::Addressables::LogWarningFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LogWarningFormat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, format, args);
}
inline void UnityEngine::AddressableAssets::Addressables::LogError(::StringW msg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LogError", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, msg);
}
inline void UnityEngine::AddressableAssets::Addressables::LogException(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op, ::System::Exception* ex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LogException", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, op, ex);
}
inline void UnityEngine::AddressableAssets::Addressables::LogException(::System::Exception* ex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LogException",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ex);
}
inline void UnityEngine::AddressableAssets::Addressables::LogErrorFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LogErrorFormat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, format, args);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::Addressables::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                             "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>, false>(
      nullptr, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::Addressables::InitializeAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                             "InitializeAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>, false>(
      nullptr, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::Addressables::InitializeAsync(bool autoReleaseHandle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "InitializeAsync",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>, false>(
      nullptr, ___internal_method, autoReleaseHandle);
}
/// @param providerSuffix: ::StringW (default: nullptr)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::Addressables::LoadContentCatalog(::StringW catalogPath, ::StringW providerSuffix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadContentCatalog", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>, false>(
      nullptr, ___internal_method, catalogPath, providerSuffix);
}
/// @param providerSuffix: ::StringW (default: nullptr)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::Addressables::LoadContentCatalogAsync(::StringW catalogPath, ::StringW providerSuffix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadContentCatalogAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>, false>(
      nullptr, ___internal_method, catalogPath, providerSuffix);
}
/// @param providerSuffix: ::StringW (default: nullptr)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::Addressables::LoadContentCatalogAsync(::StringW catalogPath, bool autoReleaseHandle, ::StringW providerSuffix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadContentCatalogAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>, false>(
      nullptr, ___internal_method, catalogPath, autoReleaseHandle, providerSuffix);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::Addressables::get_InitializationOperation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                             "get_InitializationOperation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>, false>(
      nullptr, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>
UnityEngine::AddressableAssets::Addressables::LoadAsset(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadAsset",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(nullptr, ___internal_method, location);
}
template <typename TObject> inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::AddressableAssets::Addressables::LoadAsset(::System::Object* key) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadAsset",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(nullptr, ___internal_method, key);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>
UnityEngine::AddressableAssets::Addressables::LoadAssetAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadAssetAsync",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(nullptr, ___internal_method, location);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::AddressableAssets::Addressables::LoadAssetAsync(::System::Object* key) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadAssetAsync",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(nullptr, ___internal_method, key);
}
/// @param type: ::System::Type* (default: nullptr)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
UnityEngine::AddressableAssets::Addressables::LoadResourceLocations(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode,
                                                                    ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadResourceLocations", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::__Addressables__MergeMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>,
      false>(nullptr, ___internal_method, keys, mode, type);
}
/// @param type: ::System::Type* (default: nullptr)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
UnityEngine::AddressableAssets::Addressables::LoadResourceLocationsAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys,
                                                                         ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadResourceLocationsAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::__Addressables__MergeMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>,
      false>(nullptr, ___internal_method, keys, mode, type);
}
/// @param type: ::System::Type* (default: nullptr)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
UnityEngine::AddressableAssets::Addressables::LoadResourceLocationsAsync(::System::Collections::IEnumerable* keys, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode,
                                                                         ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadResourceLocationsAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::__Addressables__MergeMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>,
      false>(nullptr, ___internal_method, keys, mode, type);
}
/// @param type: ::System::Type* (default: nullptr)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
UnityEngine::AddressableAssets::Addressables::LoadResourceLocations(::System::Object* key, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                             "LoadResourceLocations", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>,
      false>(nullptr, ___internal_method, key, type);
}
/// @param type: ::System::Type* (default: nullptr)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
UnityEngine::AddressableAssets::Addressables::LoadResourceLocationsAsync(::System::Object* key, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                             "LoadResourceLocationsAsync", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>,
      false>(nullptr, ___internal_method, key, type);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::Addressables::LoadAssets(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations,
                                                         ::System::Action_1<TObject>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadAssets",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() },
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TObject>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>, false>(
      nullptr, ___internal_method, locations, callback);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations,
                                                              ::System::Action_1<TObject>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadAssetsAsync",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() },
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TObject>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>, false>(
      nullptr, ___internal_method, locations, callback);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations,
                                                              ::System::Action_1<TObject>* callback, bool releaseDependenciesOnFailure) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadAssetsAsync",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() },
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TObject>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>, false>(
      nullptr, ___internal_method, locations, callback, releaseDependenciesOnFailure);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::Addressables::LoadAssets(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::System::Action_1<TObject>* callback,
                                                         ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadAssets",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TObject>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::__Addressables__MergeMode>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>, false>(
      nullptr, ___internal_method, keys, callback, mode);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::System::Action_1<TObject>* callback,
                                                              ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadAssetsAsync",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TObject>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::__Addressables__MergeMode>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>, false>(
      nullptr, ___internal_method, keys, callback, mode);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(::System::Collections::IEnumerable* keys, ::System::Action_1<TObject>* callback,
                                                              ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadAssetsAsync",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TObject>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::__Addressables__MergeMode>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>, false>(
      nullptr, ___internal_method, keys, callback, mode);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys, ::System::Action_1<TObject>* callback,
                                                              ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, bool releaseDependenciesOnFailure) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadAssetsAsync",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() },
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TObject>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::__Addressables__MergeMode>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>, false>(
      nullptr, ___internal_method, keys, callback, mode, releaseDependenciesOnFailure);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(::System::Collections::IEnumerable* keys, ::System::Action_1<TObject>* callback,
                                                              ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, bool releaseDependenciesOnFailure) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadAssetsAsync",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() },
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TObject>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::__Addressables__MergeMode>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>, false>(
      nullptr, ___internal_method, keys, callback, mode, releaseDependenciesOnFailure);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::Addressables::LoadAssets(::System::Object* key, ::System::Action_1<TObject>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadAssets",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TObject>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>, false>(
      nullptr, ___internal_method, key, callback);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(::System::Object* key, ::System::Action_1<TObject>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadAssetsAsync",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TObject>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>, false>(
      nullptr, ___internal_method, key, callback);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(::System::Object* key, ::System::Action_1<TObject>* callback, bool releaseDependenciesOnFailure) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadAssetsAsync",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TObject>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>, false>(
      nullptr, ___internal_method, key, callback, releaseDependenciesOnFailure);
}
template <typename TObject> inline void UnityEngine::AddressableAssets::Addressables::Release(TObject obj) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "Release",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
template <typename TObject> inline void UnityEngine::AddressableAssets::Addressables::Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> handle) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "Release",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle);
}
inline void UnityEngine::AddressableAssets::Addressables::Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "Release", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle);
}
inline bool UnityEngine::AddressableAssets::Addressables::ReleaseInstance(::UnityEngine::GameObject* instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ReleaseInstance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, instance);
}
inline bool UnityEngine::AddressableAssets::Addressables::ReleaseInstance(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ReleaseInstance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle);
}
inline bool UnityEngine::AddressableAssets::Addressables::ReleaseInstance(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ReleaseInstance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> UnityEngine::AddressableAssets::Addressables::GetDownloadSize(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "GetDownloadSize",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>, false>(nullptr, ___internal_method, key);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> UnityEngine::AddressableAssets::Addressables::GetDownloadSizeAsync(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "GetDownloadSizeAsync",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>, false>(nullptr, ___internal_method, key);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> UnityEngine::AddressableAssets::Addressables::GetDownloadSizeAsync(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "GetDownloadSizeAsync",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>, false>(nullptr, ___internal_method, key);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>
UnityEngine::AddressableAssets::Addressables::GetDownloadSizeAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "GetDownloadSizeAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>, false>(nullptr, ___internal_method, keys);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>
UnityEngine::AddressableAssets::Addressables::GetDownloadSizeAsync(::System::Collections::IEnumerable* keys) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "GetDownloadSizeAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>, false>(nullptr, ___internal_method, keys);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::AddressableAssets::Addressables::DownloadDependencies(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "DownloadDependencies",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(nullptr, ___internal_method, key);
}
/// @param autoReleaseHandle: bool (default: false)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::AddressableAssets::Addressables::DownloadDependenciesAsync(::System::Object* key, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "DownloadDependenciesAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(nullptr, ___internal_method, key, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: false)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
UnityEngine::AddressableAssets::Addressables::DownloadDependenciesAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations,
                                                                        bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "DownloadDependenciesAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(nullptr, ___internal_method, locations, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: false)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
UnityEngine::AddressableAssets::Addressables::DownloadDependenciesAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys,
                                                                        ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "DownloadDependenciesAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::__Addressables__MergeMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(nullptr, ___internal_method, keys, mode, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: false)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
UnityEngine::AddressableAssets::Addressables::DownloadDependenciesAsync(::System::Collections::IEnumerable* keys, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mode,
                                                                        bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "DownloadDependenciesAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::__Addressables__MergeMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(nullptr, ___internal_method, keys, mode, autoReleaseHandle);
}
inline void UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ClearDependencyCacheAsync",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, key);
}
inline void
UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ClearDependencyCacheAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, locations);
}
inline void UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ClearDependencyCacheAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys);
}
inline void UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(::System::Collections::IEnumerable* keys) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ClearDependencyCacheAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys);
}
inline void UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ClearDependencyCacheAsync",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, key);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(::System::Object* key,
                                                                                                                                                                bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ClearDependencyCacheAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>, false>(nullptr, ___internal_method, key, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations,
                                                                        bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ClearDependencyCacheAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>, false>(nullptr, ___internal_method, locations, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::System::Object*>* keys, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ClearDependencyCacheAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>, false>(nullptr, ___internal_method, keys, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(::System::Collections::IEnumerable* keys, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ClearDependencyCacheAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>, false>(nullptr, ___internal_method, keys, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(::StringW key, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "ClearDependencyCacheAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>, false>(nullptr, ___internal_method, key, autoReleaseHandle);
}
/// @param parent: ::UnityEngine::Transform* (default: nullptr)
/// @param instantiateInWorldSpace: bool (default: false)
/// @param trackHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::Addressables::Instantiate(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Transform* parent,
                                                          bool instantiateInWorldSpace, bool trackHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "Instantiate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>, false>(
      nullptr, ___internal_method, location, parent, instantiateInWorldSpace, trackHandle);
}
/// @param parent: ::UnityEngine::Transform* (default: nullptr)
/// @param trackHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::Addressables::Instantiate(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Vector3 position,
                                                          ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent, bool trackHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "Instantiate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>, false>(
      nullptr, ___internal_method, location, position, rotation, parent, trackHandle);
}
/// @param parent: ::UnityEngine::Transform* (default: nullptr)
/// @param instantiateInWorldSpace: bool (default: false)
/// @param trackHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::Addressables::Instantiate(::System::Object* key, ::UnityEngine::Transform* parent, bool instantiateInWorldSpace, bool trackHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "Instantiate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>, false>(
      nullptr, ___internal_method, key, parent, instantiateInWorldSpace, trackHandle);
}
/// @param parent: ::UnityEngine::Transform* (default: nullptr)
/// @param trackHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::Addressables::Instantiate(::System::Object* key, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent,
                                                          bool trackHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "Instantiate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>, false>(
      nullptr, ___internal_method, key, position, rotation, parent, trackHandle);
}
/// @param trackHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::Addressables::Instantiate(::System::Object* key, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters,
                                                          bool trackHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "Instantiate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>, false>(
      nullptr, ___internal_method, key, instantiateParameters, trackHandle);
}
/// @param trackHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::Addressables::Instantiate(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                          ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "Instantiate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>, false>(
      nullptr, ___internal_method, location, instantiateParameters, trackHandle);
}
/// @param parent: ::UnityEngine::Transform* (default: nullptr)
/// @param instantiateInWorldSpace: bool (default: false)
/// @param trackHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::Addressables::InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Transform* parent,
                                                               bool instantiateInWorldSpace, bool trackHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "InstantiateAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>, false>(
      nullptr, ___internal_method, location, parent, instantiateInWorldSpace, trackHandle);
}
/// @param parent: ::UnityEngine::Transform* (default: nullptr)
/// @param trackHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::Addressables::InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Vector3 position,
                                                               ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent, bool trackHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "InstantiateAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>, false>(
      nullptr, ___internal_method, location, position, rotation, parent, trackHandle);
}
/// @param parent: ::UnityEngine::Transform* (default: nullptr)
/// @param instantiateInWorldSpace: bool (default: false)
/// @param trackHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::Addressables::InstantiateAsync(::System::Object* key, ::UnityEngine::Transform* parent, bool instantiateInWorldSpace, bool trackHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "InstantiateAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>, false>(
      nullptr, ___internal_method, key, parent, instantiateInWorldSpace, trackHandle);
}
/// @param parent: ::UnityEngine::Transform* (default: nullptr)
/// @param trackHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::Addressables::InstantiateAsync(::System::Object* key, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent,
                                                               bool trackHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "InstantiateAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>, false>(
      nullptr, ___internal_method, key, position, rotation, parent, trackHandle);
}
/// @param trackHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::Addressables::InstantiateAsync(::System::Object* key, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters,
                                                               bool trackHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "InstantiateAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>, false>(
      nullptr, ___internal_method, key, instantiateParameters, trackHandle);
}
/// @param trackHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::Addressables::InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                               ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "InstantiateAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>, false>(
      nullptr, ___internal_method, location, instantiateParameters, trackHandle);
}
/// @param loadMode: ::UnityEngine::SceneManagement::LoadSceneMode (default: static_cast<int32_t>(0x0))
/// @param activateOnLoad: bool (default: true)
/// @param priority: int32_t (default: static_cast<int32_t>(0x64))
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::LoadScene(::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadScene", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(
      nullptr, ___internal_method, key, loadMode, activateOnLoad, priority);
}
/// @param loadMode: ::UnityEngine::SceneManagement::LoadSceneMode (default: static_cast<int32_t>(0x0))
/// @param activateOnLoad: bool (default: true)
/// @param priority: int32_t (default: static_cast<int32_t>(0x64))
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::LoadScene(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneMode loadMode,
                                                        bool activateOnLoad, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadScene", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(
      nullptr, ___internal_method, location, loadMode, activateOnLoad, priority);
}
/// @param loadMode: ::UnityEngine::SceneManagement::LoadSceneMode (default: static_cast<int32_t>(0x0))
/// @param activateOnLoad: bool (default: true)
/// @param priority: int32_t (default: static_cast<int32_t>(0x64))
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::LoadSceneAsync(::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadSceneAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(
      nullptr, ___internal_method, key, loadMode, activateOnLoad, priority);
}
/// @param loadMode: ::UnityEngine::SceneManagement::LoadSceneMode (default: static_cast<int32_t>(0x0))
/// @param activateOnLoad: bool (default: true)
/// @param priority: int32_t (default: static_cast<int32_t>(0x64))
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::LoadSceneAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneMode loadMode,
                                                             bool activateOnLoad, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "LoadSceneAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(
      nullptr, ___internal_method, location, loadMode, activateOnLoad, priority);
}
/// @param autoReleaseHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::UnloadScene(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "UnloadScene", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(
      nullptr, ___internal_method, scene, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::UnloadScene(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "UnloadScene", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(
      nullptr, ___internal_method, handle, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::UnloadScene(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "UnloadScene", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(
      nullptr, ___internal_method, handle, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene,
                                                               ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "UnloadSceneAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::UnloadSceneOptions>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(
      nullptr, ___internal_method, scene, unloadOptions, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle,
                                                               ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "UnloadSceneAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::UnloadSceneOptions>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(
      nullptr, ___internal_method, handle, unloadOptions, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::UnloadScene(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle,
    ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "UnloadScene", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::UnloadSceneOptions>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(
      nullptr, ___internal_method, handle, unloadOptions, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "UnloadSceneAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(
      nullptr, ___internal_method, scene, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "UnloadSceneAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(
      nullptr, ___internal_method, handle, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "UnloadSceneAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(
      nullptr, ___internal_method, handle, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*>
UnityEngine::AddressableAssets::Addressables::CheckForCatalogUpdates(bool autoReleaseHandle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "CheckForCatalogUpdates",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*>, false>(
      nullptr, ___internal_method, autoReleaseHandle);
}
/// @param catalogs: ::System::Collections::Generic::IEnumerable_1<::StringW>* (default: nullptr)
/// @param autoReleaseHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>
UnityEngine::AddressableAssets::Addressables::UpdateCatalogs(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogs, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "UpdateCatalogs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>,
      false>(nullptr, ___internal_method, catalogs, autoReleaseHandle);
}
/// @param catalogs: ::System::Collections::Generic::IEnumerable_1<::StringW>* (default: nullptr)
/// @param autoReleaseHandle: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>
UnityEngine::AddressableAssets::Addressables::UpdateCatalogs(bool autoCleanBundleCache, ::System::Collections::Generic::IEnumerable_1<::StringW>* catalogs, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "UpdateCatalogs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>,
      false>(nullptr, ___internal_method, autoCleanBundleCache, catalogs, autoReleaseHandle);
}
/// @param localCatalogHash: ::StringW (default: nullptr)
/// @param remoteCatalogLocation: ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* (default: nullptr)
inline void UnityEngine::AddressableAssets::Addressables::AddResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator, ::StringW localCatalogHash,
                                                                             ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteCatalogLocation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "AddResourceLocator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, locator, localCatalogHash, remoteCatalogLocation);
}
inline void UnityEngine::AddressableAssets::Addressables::RemoveResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "RemoveResourceLocator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, locator);
}
inline void UnityEngine::AddressableAssets::Addressables::ClearResourceLocators() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(),
                                                                             "ClearResourceLocators", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
/// @param catalogsIds: ::System::Collections::Generic::IEnumerable_1<::StringW>* (default: nullptr)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
UnityEngine::AddressableAssets::Addressables::CleanBundleCache(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogsIds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Addressables*>::get(), "CleanBundleCache", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>, false>(nullptr, ___internal_method, catalogsIds);
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::Addressables::Addressables() {}
