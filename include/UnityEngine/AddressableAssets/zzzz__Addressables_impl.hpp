#pragma once
// IWYU pragma private; include "UnityEngine\AddressableAssets\Addressables.hpp"
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
#include "UnityEngine/AddressableAssets/zzzz__ResourceLocatorInfo_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__ResourceLocationBase_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IInstanceProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__InstantiationParameters_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneReleaseMode_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneParameters_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__UnloadSceneOptions_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AddressableAssets::Addressables_MergeMode::Addressables_MergeMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::Addressables_MergeMode::Addressables_MergeMode() {}
constexpr ::UnityEngine::AddressableAssets::Addressables_MergeMode UnityEngine::AddressableAssets::Addressables_MergeMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::AddressableAssets::Addressables_MergeMode UnityEngine::AddressableAssets::Addressables_MergeMode::UseFirst{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::AddressableAssets::Addressables_MergeMode UnityEngine::AddressableAssets::Addressables_MergeMode::Union{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::AddressableAssets::Addressables_MergeMode UnityEngine::AddressableAssets::Addressables_MergeMode::Intersection{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_m_Addressables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AddressableAssets::AddressablesImpl* (*)()>(&::UnityEngine::AddressableAssets::Addressables::get_m_Addressables)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x644f190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_m_Addressables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::AddressableAssets::Addressables::get_Version)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x644f1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_ResourceManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::ResourceManager* (*)()>(&::UnityEngine::AddressableAssets::Addressables::get_ResourceManager)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x644f230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_ResourceManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_Instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AddressableAssets::AddressablesImpl* (*)()>(&::UnityEngine::AddressableAssets::Addressables::get_Instance)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x644a1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_Instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_InstanceProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* (*)()>(
    &::UnityEngine::AddressableAssets::Addressables::get_InstanceProvider)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x644f2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_InstanceProvider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ResolveInternalId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::AddressableAssets::Addressables::ResolveInternalId)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x644f370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "ResolveInternalId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_InternalIdTransformFunc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* (*)()>(
    &::UnityEngine::AddressableAssets::Addressables::get_InternalIdTransformFunc)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x644f474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_InternalIdTransformFunc", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.set_InternalIdTransformFunc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*)>(
    &::UnityEngine::AddressableAssets::Addressables::set_InternalIdTransformFunc)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x644f534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                            { "set_InternalIdTransformFunc", {}, { ::i2c::type_of<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_WebRequestOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* (*)()>(
    &::UnityEngine::AddressableAssets::Addressables::get_WebRequestOverride)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x644f600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_WebRequestOverride", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.set_WebRequestOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*)>(
    &::UnityEngine::AddressableAssets::Addressables::set_WebRequestOverride)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x644f6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                             { "set_WebRequestOverride", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_StreamingAssetsSubFolder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::AddressableAssets::Addressables::get_StreamingAssetsSubFolder)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x644f78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_StreamingAssetsSubFolder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_BuildPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::AddressableAssets::Addressables::get_BuildPath)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x644f89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_BuildPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_PlayerBuildDataPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::AddressableAssets::Addressables::get_PlayerBuildDataPath)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x644fa1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_PlayerBuildDataPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_RuntimePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::AddressableAssets::Addressables::get_RuntimePath)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x644fb68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_RuntimePath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.get_ResourceLocators
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* (*)()>(
    &::UnityEngine::AddressableAssets::Addressables::get_ResourceLocators)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x644fc08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_ResourceLocators", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.InternalSafeSerializationLog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::LogType)>(&::UnityEngine::AddressableAssets::Addressables::InternalSafeSerializationLog)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x644fca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                             { "InternalSafeSerializationLog", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.InternalSafeSerializationLogFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::LogType, ::ArrayW<::System::Object*>)>(
    &::UnityEngine::AddressableAssets::Addressables::InternalSafeSerializationLogFormat)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x644fed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                            { "InternalSafeSerializationLogFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::AddressableAssets::Addressables::Log)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x645013c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LogFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::AddressableAssets::Addressables::LogFormat)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x64501e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                           { "LogFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LogWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::AddressableAssets::Addressables::LogWarning)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x644ada0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LogWarningFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::AddressableAssets::Addressables::LogWarningFormat)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x645029c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                             { "LogWarningFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::AddressableAssets::Addressables::LogError)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x644ae4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LogException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*)>(
    &::UnityEngine::AddressableAssets::Addressables::LogException)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6450350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                            { "LogException", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LogException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*)>(&::UnityEngine::AddressableAssets::Addressables::LogException)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x64504cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LogErrorFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::AddressableAssets::Addressables::LogErrorFormat)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x644b758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                           { "LogErrorFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.InitializeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (*)()>(
        &::UnityEngine::AddressableAssets::Addressables::InitializeAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x645056c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "InitializeAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.InitializeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (*)(bool)>(
        &::UnityEngine::AddressableAssets::Addressables::InitializeAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x64506c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "InitializeAsync", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadContentCatalogAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (*)(::StringW, ::StringW)>(
        &::UnityEngine::AddressableAssets::Addressables::LoadContentCatalogAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6450830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                           { "LoadContentCatalogAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadContentCatalogAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (*)(::StringW, bool, ::StringW)>(
        &::UnityEngine::AddressableAssets::Addressables::LoadContentCatalogAsync)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6450b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                             { "LoadContentCatalogAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadResourceLocationsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> (*)(
        ::System::Collections::IEnumerable*, ::UnityEngine::AddressableAssets::Addressables_MergeMode, ::System::Type*)>(&::UnityEngine::AddressableAssets::Addressables::LoadResourceLocationsAsync)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6450c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                             { "LoadResourceLocationsAsync",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>(),
                                                                 ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadResourceLocationsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> (*)(::System::Object*, ::System::Type*)>(&::UnityEngine::AddressableAssets::Addressables::LoadResourceLocationsAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6450e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                             { "LoadResourceLocationsAsync", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::AddressableAssets::Addressables::Release)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6451038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                             { "Release", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ReleaseInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GameObject*)>(&::UnityEngine::AddressableAssets::Addressables::ReleaseInstance)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6451040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "ReleaseInstance", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ReleaseInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::AddressableAssets::Addressables::ReleaseInstance)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64511e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                             { "ReleaseInstance", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ReleaseInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>)>(
    &::UnityEngine::AddressableAssets::Addressables::ReleaseInstance)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64511fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                            { "ReleaseInstance", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.GetDownloadSizeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (*)(::System::Object*)>(
    &::UnityEngine::AddressableAssets::Addressables::GetDownloadSizeAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6451250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "GetDownloadSizeAsync", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.GetDownloadSizeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (*)(::StringW)>(
    &::UnityEngine::AddressableAssets::Addressables::GetDownloadSizeAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x64513e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "GetDownloadSizeAsync", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.GetDownloadSizeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (*)(::System::Collections::IEnumerable*)>(
    &::UnityEngine::AddressableAssets::Addressables::GetDownloadSizeAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x64514b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                           { "GetDownloadSizeAsync", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.DownloadDependenciesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (*)(::System::Object*, bool)>(
    &::UnityEngine::AddressableAssets::Addressables::DownloadDependenciesAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x64523ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                           { "DownloadDependenciesAsync", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.DownloadDependenciesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, bool)>(
    &::UnityEngine::AddressableAssets::Addressables::DownloadDependenciesAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x64526fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                            { "DownloadDependenciesAsync",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.DownloadDependenciesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (*)(
    ::System::Collections::IEnumerable*, ::UnityEngine::AddressableAssets::Addressables_MergeMode, bool)>(&::UnityEngine::AddressableAssets::Addressables::DownloadDependenciesAsync)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6452908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                            { "DownloadDependenciesAsync",
                              {},
                              { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6452c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "ClearDependencyCacheAsync", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*)>(
    &::UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6452f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
            { "ClearDependencyCacheAsync", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IEnumerable*)>(&::UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x64534b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                           { "ClearDependencyCacheAsync", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6453a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "ClearDependencyCacheAsync", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (*)(::System::Object*, bool)>(
    &::UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6453b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                           { "ClearDependencyCacheAsync", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, bool)>(
    &::UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6453be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                            { "ClearDependencyCacheAsync",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (*)(::System::Collections::IEnumerable*, bool)>(
    &::UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6453cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                             { "ClearDependencyCacheAsync", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (*)(::StringW, bool)>(
    &::UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6453da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                           { "ClearDependencyCacheAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.GetLocatorInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AddressableAssets::ResourceLocatorInfo* (*)(::StringW)>(&::UnityEngine::AddressableAssets::Addressables::GetLocatorInfo)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6453e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "GetLocatorInfo", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.GetLocatorInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AddressableAssets::ResourceLocatorInfo* (*)(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*)>(
    &::UnityEngine::AddressableAssets::Addressables::GetLocatorInfo)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6453f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                             { "GetLocatorInfo", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.InstantiateAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::Transform*, bool, bool)>(&::UnityEngine::AddressableAssets::Addressables::InstantiateAsync)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x645404c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                           { "InstantiateAsync",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.InstantiateAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*, bool)>(
    &::UnityEngine::AddressableAssets::Addressables::InstantiateAsync)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6454294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                             { "InstantiateAsync",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.InstantiateAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (*)(
    ::System::Object*, ::UnityEngine::Transform*, bool, bool)>(&::UnityEngine::AddressableAssets::Addressables::InstantiateAsync)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x645443c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                            { "InstantiateAsync", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.InstantiateAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (*)(
    ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*, bool)>(&::UnityEngine::AddressableAssets::Addressables::InstantiateAsync)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x64545d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                             { "InstantiateAsync",
                                                               {},
                                                               { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                                 ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.InstantiateAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (*)(
    ::System::Object*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, bool)>(&::UnityEngine::AddressableAssets::Addressables::InstantiateAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6454778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                            { "InstantiateAsync",
                              {},
                              { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.InstantiateAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, bool)>(
    &::UnityEngine::AddressableAssets::Addressables::InstantiateAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6454c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                             { "InstantiateAsync",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                                 ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::System::Object*, ::UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t, ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode)>(
        &::UnityEngine::AddressableAssets::Addressables::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6454d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                             { "LoadSceneAsync",
                                                               {},
                                                               { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::System::Object*, ::UnityEngine::SceneManagement::LoadSceneMode, ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode, bool, int32_t)>(
        &::UnityEngine::AddressableAssets::Addressables::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6455098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                { "LoadSceneAsync",
                                                  {},
                                                  { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(),
                                                    ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::System::Object*, ::UnityEngine::SceneManagement::LoadSceneParameters, bool, int32_t)>(&::UnityEngine::AddressableAssets::Addressables::LoadSceneAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x645519c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                            { "LoadSceneAsync",
                              {},
                              { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::System::Object*, ::UnityEngine::SceneManagement::LoadSceneParameters, ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode, bool, int32_t)>(
        &::UnityEngine::AddressableAssets::Addressables::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6455298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                { "LoadSceneAsync",
                                                  {},
                                                  { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                                                    ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t)>(
        &::UnityEngine::AddressableAssets::Addressables::LoadSceneAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x645539c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                             { "LoadSceneAsync",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                                 ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneMode, ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode,
        bool, int32_t)>(&::UnityEngine::AddressableAssets::Addressables::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x645559c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                            { "LoadSceneAsync",
                              {},
                              { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(),
                                ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneParameters, bool, int32_t)>(
        &::UnityEngine::AddressableAssets::Addressables::LoadSceneAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x64556a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                             { "LoadSceneAsync",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                                 ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.LoadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneParameters,
        ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode, bool, int32_t)>(&::UnityEngine::AddressableAssets::Addressables::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x645579c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                            { "LoadSceneAsync",
                              {},
                              { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                                ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.UnloadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, ::UnityEngine::SceneManagement::UnloadSceneOptions, bool)>(
        &::UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x64558a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                           { "UnloadSceneAsync",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(),
                                                                                               ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.UnloadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::SceneManagement::UnloadSceneOptions, bool)>(
        &::UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6455be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                           { "UnloadSceneAsync",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                                                               ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.UnloadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, bool)>(&::UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6455e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                { "UnloadSceneAsync", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.UnloadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, bool)>(&::UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6455f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                { "UnloadSceneAsync", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.UnloadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(
        ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, bool)>(
        &::UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6456028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                            { "UnloadSceneAsync",
                              {},
                              { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(),
                                ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.CheckForCatalogUpdates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> (*)(bool)>(
    &::UnityEngine::AddressableAssets::Addressables::CheckForCatalogUpdates)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x64561f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "CheckForCatalogUpdates", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.UpdateCatalogs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> (*)(::System::Collections::Generic::IEnumerable_1<::StringW>*, bool)>(
    &::UnityEngine::AddressableAssets::Addressables::UpdateCatalogs)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6456420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                             { "UpdateCatalogs", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.UpdateCatalogs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> (*)(bool, ::System::Collections::Generic::IEnumerable_1<::StringW>*, bool)>(
    &::UnityEngine::AddressableAssets::Addressables::UpdateCatalogs)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x645678c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                         { "UpdateCatalogs", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.AddResourceLocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, ::StringW, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
        &::UnityEngine::AddressableAssets::Addressables::AddResourceLocator)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6456874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                             { "AddResourceLocator",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.RemoveResourceLocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*)>(
    &::UnityEngine::AddressableAssets::Addressables::RemoveResourceLocator)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6456a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                             { "RemoveResourceLocator", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.ClearResourceLocators
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::AddressableAssets::Addressables::ClearResourceLocators)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6456bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "ClearResourceLocators", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Addressables.CleanBundleCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::UnityEngine::AddressableAssets::Addressables::CleanBundleCache)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6456ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                             { "CleanBundleCache", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::AddressableAssets::Addressables::setStaticF_reinitializeAddressables(bool value) {
  ::cordl_internals::setStaticField<bool, "reinitializeAddressables", ::UnityEngine::AddressableAssets::Addressables*>(std::forward<bool>(value));
}
inline bool UnityEngine::AddressableAssets::Addressables::getStaticF_reinitializeAddressables() {
  return ::cordl_internals::getStaticField<bool, "reinitializeAddressables", ::UnityEngine::AddressableAssets::Addressables*>();
}
inline void UnityEngine::AddressableAssets::Addressables::setStaticF_m_AddressablesInstance(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AddressableAssets::AddressablesImpl*, "m_AddressablesInstance", ::UnityEngine::AddressableAssets::Addressables*>(
      std::forward<::UnityEngine::AddressableAssets::AddressablesImpl*>(value));
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl* UnityEngine::AddressableAssets::Addressables::getStaticF_m_AddressablesInstance() {
  return ::cordl_internals::getStaticField<::UnityEngine::AddressableAssets::AddressablesImpl*, "m_AddressablesInstance", ::UnityEngine::AddressableAssets::Addressables*>();
}
inline void UnityEngine::AddressableAssets::Addressables::setStaticF_LibraryPath(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "LibraryPath", ::UnityEngine::AddressableAssets::Addressables*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::AddressableAssets::Addressables::getStaticF_LibraryPath() {
  return ::cordl_internals::getStaticField<::StringW, "LibraryPath", ::UnityEngine::AddressableAssets::Addressables*>();
}
inline void UnityEngine::AddressableAssets::Addressables::setStaticF_BuildReportPath(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "BuildReportPath", ::UnityEngine::AddressableAssets::Addressables*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::AddressableAssets::Addressables::getStaticF_BuildReportPath() {
  return ::cordl_internals::getStaticField<::StringW, "BuildReportPath", ::UnityEngine::AddressableAssets::Addressables*>();
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl* UnityEngine::AddressableAssets::Addressables::get_m_Addressables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_m_Addressables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AddressablesImpl*>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::Addressables::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceManager* UnityEngine::AddressableAssets::Addressables::get_ResourceManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_ResourceManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceManager*>(nullptr, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::AddressablesImpl* UnityEngine::AddressableAssets::Addressables::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_Instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AddressablesImpl*>(nullptr, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* UnityEngine::AddressableAssets::Addressables::get_InstanceProvider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_InstanceProvider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::Addressables::ResolveInternalId(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "ResolveInternalId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, id);
}
inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* UnityEngine::AddressableAssets::Addressables::get_InternalIdTransformFunc() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_InternalIdTransformFunc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*>(nullptr, ___internal_method);
}
inline void UnityEngine::AddressableAssets::Addressables::set_InternalIdTransformFunc(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                          { "set_InternalIdTransformFunc", {}, { ::i2c::type_of<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* UnityEngine::AddressableAssets::Addressables::get_WebRequestOverride() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_WebRequestOverride", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*>(nullptr, ___internal_method);
}
inline void UnityEngine::AddressableAssets::Addressables::set_WebRequestOverride(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "set_WebRequestOverride", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW UnityEngine::AddressableAssets::Addressables::get_StreamingAssetsSubFolder() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_StreamingAssetsSubFolder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::Addressables::get_BuildPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_BuildPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::Addressables::get_PlayerBuildDataPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_PlayerBuildDataPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::Addressables::get_RuntimePath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_RuntimePath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* UnityEngine::AddressableAssets::Addressables::get_ResourceLocators() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "get_ResourceLocators", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>(nullptr, ___internal_method);
}
inline void UnityEngine::AddressableAssets::Addressables::InternalSafeSerializationLog(::StringW msg, ::UnityEngine::LogType logType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "InternalSafeSerializationLog", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, logType);
}
inline void UnityEngine::AddressableAssets::Addressables::InternalSafeSerializationLogFormat(::StringW format, ::UnityEngine::LogType logType, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                          { "InternalSafeSerializationLogFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, logType, args);
}
inline void UnityEngine::AddressableAssets::Addressables::Log(::StringW msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void UnityEngine::AddressableAssets::Addressables::LogFormat(::StringW format, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                         { "LogFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, args);
}
inline void UnityEngine::AddressableAssets::Addressables::LogWarning(::StringW msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void UnityEngine::AddressableAssets::Addressables::LogWarningFormat(::StringW format, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                         { "LogWarningFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, args);
}
inline void UnityEngine::AddressableAssets::Addressables::LogError(::StringW msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void UnityEngine::AddressableAssets::Addressables::LogException(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op, ::System::Exception* ex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                          { "LogException", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, op, ex);
}
inline void UnityEngine::AddressableAssets::Addressables::LogException(::System::Exception* ex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ex);
}
inline void UnityEngine::AddressableAssets::Addressables::LogErrorFormat(::StringW format, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                         { "LogErrorFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, args);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::Addressables::InitializeAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "InitializeAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>(
      nullptr, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::Addressables::InitializeAsync(bool autoReleaseHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "InitializeAsync", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>(
      nullptr, ___internal_method, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::Addressables::LoadContentCatalogAsync(::StringW catalogPath, ::StringW providerSuffix) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                         { "LoadContentCatalogAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>(
      nullptr, ___internal_method, catalogPath, providerSuffix);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
UnityEngine::AddressableAssets::Addressables::LoadContentCatalogAsync(::StringW catalogPath, bool autoReleaseHandle, ::StringW providerSuffix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "LoadContentCatalogAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>(
      nullptr, ___internal_method, catalogPath, autoReleaseHandle, providerSuffix);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>
UnityEngine::AddressableAssets::Addressables::LoadAssetAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                              { "LoadAssetAsync", { ::i2c::class_of<TObject>() }, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(nullptr, ___internal_method, location);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::AddressableAssets::Addressables::LoadAssetAsync(::System::Object* key) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                              { "LoadAssetAsync", { ::i2c::class_of<TObject>() }, { ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(nullptr, ___internal_method, key);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
UnityEngine::AddressableAssets::Addressables::LoadResourceLocationsAsync(::System::Collections::IEnumerable* keys, ::UnityEngine::AddressableAssets::Addressables_MergeMode mode,
                                                                         ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "LoadResourceLocationsAsync",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>(),
                                                               ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>(
      nullptr, ___internal_method, keys, mode, type);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>
UnityEngine::AddressableAssets::Addressables::LoadResourceLocationsAsync(::System::Object* key, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "LoadResourceLocationsAsync", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>(
      nullptr, ___internal_method, key, type);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations,
                                                              ::System::Action_1<TObject>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "LoadAssetsAsync",
                                                             { ::i2c::class_of<TObject>() },
                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(),
                                                               ::i2c::type_of<::System::Action_1<TObject>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(nullptr, ___internal_method,
                                                                                                                                                                            locations, callback);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations,
                                                              ::System::Action_1<TObject>* callback, bool releaseDependenciesOnFailure) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "LoadAssetsAsync",
                                                             { ::i2c::class_of<TObject>() },
                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(),
                                                               ::i2c::type_of<::System::Action_1<TObject>*>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(
      nullptr, ___internal_method, locations, callback, releaseDependenciesOnFailure);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(::System::Collections::IEnumerable* keys, ::System::Action_1<TObject>* callback,
                                                              ::UnityEngine::AddressableAssets::Addressables_MergeMode mode) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                              { "LoadAssetsAsync",
                                                                                                { ::i2c::class_of<TObject>() },
                                                                                                { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::System::Action_1<TObject>*>(),
                                                                                                  ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(nullptr, ___internal_method,
                                                                                                                                                                            keys, callback, mode);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(::StringW key, ::System::Action_1<TObject>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "LoadAssetsAsync", { ::i2c::class_of<TObject>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<TObject>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(nullptr, ___internal_method,
                                                                                                                                                                            key, callback);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(::System::Collections::IEnumerable* keys, ::System::Action_1<TObject>* callback,
                                                              ::UnityEngine::AddressableAssets::Addressables_MergeMode mode, bool releaseDependenciesOnFailure) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "LoadAssetsAsync",
                                                             { ::i2c::class_of<TObject>() },
                                                             { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::System::Action_1<TObject>*>(),
                                                               ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(
      nullptr, ___internal_method, keys, callback, mode, releaseDependenciesOnFailure);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(::StringW key, bool releaseDependenciesOnFailure, ::System::Action_1<TObject>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                          { "LoadAssetsAsync", { ::i2c::class_of<TObject>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<TObject>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(
      nullptr, ___internal_method, key, releaseDependenciesOnFailure, callback);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(::System::Object* key, ::System::Action_1<TObject>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                              { "LoadAssetsAsync", { ::i2c::class_of<TObject>() }, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_1<TObject>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(nullptr, ___internal_method,
                                                                                                                                                                            key, callback);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(::System::Object* key, ::System::Action_1<TObject>* callback, bool releaseDependenciesOnFailure) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                          { "LoadAssetsAsync", { ::i2c::class_of<TObject>() }, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_1<TObject>*>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(
      nullptr, ___internal_method, key, callback, releaseDependenciesOnFailure);
}
template <typename TObject> inline void UnityEngine::AddressableAssets::Addressables::Release(TObject obj) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "Release", { ::i2c::class_of<TObject>() }, { ::i2c::type_of<TObject>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
template <typename TObject> inline void UnityEngine::AddressableAssets::Addressables::Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> handle) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                       { "Release", { ::i2c::class_of<TObject>() }, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline void UnityEngine::AddressableAssets::Addressables::Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "Release", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline bool UnityEngine::AddressableAssets::Addressables::ReleaseInstance(::UnityEngine::GameObject* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "ReleaseInstance", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, instance);
}
inline bool UnityEngine::AddressableAssets::Addressables::ReleaseInstance(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "ReleaseInstance", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline bool UnityEngine::AddressableAssets::Addressables::ReleaseInstance(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                          { "ReleaseInstance", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> UnityEngine::AddressableAssets::Addressables::GetDownloadSizeAsync(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "GetDownloadSizeAsync", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>(nullptr, ___internal_method, key);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> UnityEngine::AddressableAssets::Addressables::GetDownloadSizeAsync(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "GetDownloadSizeAsync", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>(nullptr, ___internal_method, key);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>
UnityEngine::AddressableAssets::Addressables::GetDownloadSizeAsync(::System::Collections::IEnumerable* keys) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "GetDownloadSizeAsync", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>(nullptr, ___internal_method, keys);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::AddressableAssets::Addressables::DownloadDependenciesAsync(::System::Object* key, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                         { "DownloadDependenciesAsync", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(nullptr, ___internal_method, key, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
UnityEngine::AddressableAssets::Addressables::DownloadDependenciesAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations,
                                                                        bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                          { "DownloadDependenciesAsync",
                            {},
                            { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(nullptr, ___internal_method, locations, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
UnityEngine::AddressableAssets::Addressables::DownloadDependenciesAsync(::System::Collections::IEnumerable* keys, ::UnityEngine::AddressableAssets::Addressables_MergeMode mode,
                                                                        bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                          { "DownloadDependenciesAsync",
                            {},
                            { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(nullptr, ___internal_method, keys, mode, autoReleaseHandle);
}
inline void UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "ClearDependencyCacheAsync", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, key);
}
inline void
UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                       { "ClearDependencyCacheAsync", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, locations);
}
inline void UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(::System::Collections::IEnumerable* keys) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                         { "ClearDependencyCacheAsync", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys);
}
inline void UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "ClearDependencyCacheAsync", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, key);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(::System::Object* key,
                                                                                                                                                                bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                         { "ClearDependencyCacheAsync", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(nullptr, ___internal_method, key, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations,
                                                                        bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                          { "ClearDependencyCacheAsync",
                            {},
                            { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(nullptr, ___internal_method, locations, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(::System::Collections::IEnumerable* keys, bool autoReleaseHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "ClearDependencyCacheAsync", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(nullptr, ___internal_method, keys, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(::StringW key, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                         { "ClearDependencyCacheAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(nullptr, ___internal_method, key, autoReleaseHandle);
}
inline ::UnityEngine::AddressableAssets::ResourceLocatorInfo* UnityEngine::AddressableAssets::Addressables::GetLocatorInfo(::StringW locatorId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "GetLocatorInfo", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>(nullptr, ___internal_method, locatorId);
}
inline ::UnityEngine::AddressableAssets::ResourceLocatorInfo*
UnityEngine::AddressableAssets::Addressables::GetLocatorInfo(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "GetLocatorInfo", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>(nullptr, ___internal_method, locator);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::Addressables::InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Transform* parent,
                                                               bool instantiateInWorldSpace, bool trackHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                         { "InstantiateAsync",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>(
      nullptr, ___internal_method, location, parent, instantiateInWorldSpace, trackHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::Addressables::InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::Vector3 position,
                                                               ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent, bool trackHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "InstantiateAsync",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>(nullptr, ___internal_method, location,
                                                                                                                                                              position, rotation, parent, trackHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::Addressables::InstantiateAsync(::System::Object* key, ::UnityEngine::Transform* parent, bool instantiateInWorldSpace, bool trackHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                          { "InstantiateAsync", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>(nullptr, ___internal_method, key, parent,
                                                                                                                                                              instantiateInWorldSpace, trackHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::Addressables::InstantiateAsync(::System::Object* key, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent,
                                                               bool trackHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "InstantiateAsync",
                                                             {},
                                                             { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                               ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>(nullptr, ___internal_method, key,
                                                                                                                                                              position, rotation, parent, trackHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::Addressables::InstantiateAsync(::System::Object* key, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters,
                                                               bool trackHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                          { "InstantiateAsync",
                            {},
                            { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>(nullptr, ___internal_method, key,
                                                                                                                                                              instantiateParameters, trackHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::AddressableAssets::Addressables::InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                               ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "InstantiateAsync",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>(nullptr, ___internal_method, location,
                                                                                                                                                              instantiateParameters, trackHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::LoadSceneAsync(::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority,
                                                             ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode releaseMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "LoadSceneAsync",
                                                             {},
                                                             { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      nullptr, ___internal_method, key, loadMode, activateOnLoad, priority, releaseMode);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::LoadSceneAsync(::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneMode loadMode,
                                                             ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode releaseMode, bool activateOnLoad, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                              { "LoadSceneAsync",
                                                {},
                                                { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(),
                                                  ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      nullptr, ___internal_method, key, loadMode, releaseMode, activateOnLoad, priority);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::LoadSceneAsync(::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters, bool activateOnLoad, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                          { "LoadSceneAsync",
                            {},
                            { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      nullptr, ___internal_method, key, loadSceneParameters, activateOnLoad, priority);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::LoadSceneAsync(::System::Object* key, ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters,
                                                             ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode releaseMode, bool activateOnLoad, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                              { "LoadSceneAsync",
                                                {},
                                                { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                                                  ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      nullptr, ___internal_method, key, loadSceneParameters, releaseMode, activateOnLoad, priority);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::LoadSceneAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneMode loadMode,
                                                             bool activateOnLoad, int32_t priority) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "LoadSceneAsync",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                               ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      nullptr, ___internal_method, location, loadMode, activateOnLoad, priority);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::LoadSceneAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneMode loadMode,
                                                             ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode releaseMode, bool activateOnLoad, int32_t priority) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                       { "LoadSceneAsync",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(),
                                           ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      nullptr, ___internal_method, location, loadMode, releaseMode, activateOnLoad, priority);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::LoadSceneAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                             ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters, bool activateOnLoad, int32_t priority) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "LoadSceneAsync",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                               ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      nullptr, ___internal_method, location, loadSceneParameters, activateOnLoad, priority);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::LoadSceneAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                             ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters,
                                                             ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode releaseMode, bool activateOnLoad, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                          { "LoadSceneAsync",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                              ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      nullptr, ___internal_method, location, loadSceneParameters, releaseMode, activateOnLoad, priority);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene,
                                                               ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                         { "UnloadSceneAsync",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(),
                                                                                             ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      nullptr, ___internal_method, scene, unloadOptions, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle,
                                                               ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                         { "UnloadSceneAsync",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                                                             ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      nullptr, ___internal_method, handle, unloadOptions, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                              { "UnloadSceneAsync", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      nullptr, ___internal_method, scene, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                              { "UnloadSceneAsync", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      nullptr, ___internal_method, handle, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle, bool autoReleaseHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                          { "UnloadSceneAsync",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(),
                              ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      nullptr, ___internal_method, handle, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*>
UnityEngine::AddressableAssets::Addressables::CheckForCatalogUpdates(bool autoReleaseHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "CheckForCatalogUpdates", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*>>(
      nullptr, ___internal_method, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>
UnityEngine::AddressableAssets::Addressables::UpdateCatalogs(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogs, bool autoReleaseHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "UpdateCatalogs", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>>(
      nullptr, ___internal_method, catalogs, autoReleaseHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>
UnityEngine::AddressableAssets::Addressables::UpdateCatalogs(bool autoCleanBundleCache, ::System::Collections::Generic::IEnumerable_1<::StringW>* catalogs, bool autoReleaseHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                       { "UpdateCatalogs", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>>(
      nullptr, ___internal_method, autoCleanBundleCache, catalogs, autoReleaseHandle);
}
inline void UnityEngine::AddressableAssets::Addressables::AddResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator, ::StringW localCatalogHash,
                                                                             ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteCatalogLocation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "AddResourceLocator",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, locator, localCatalogHash, remoteCatalogLocation);
}
inline void UnityEngine::AddressableAssets::Addressables::RemoveResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "RemoveResourceLocator", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, locator);
}
inline void UnityEngine::AddressableAssets::Addressables::ClearResourceLocators() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(), { "ClearResourceLocators", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
UnityEngine::AddressableAssets::Addressables::CleanBundleCache(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogsIds) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                                                         { "CleanBundleCache", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(nullptr, ___internal_method, catalogsIds);
}
template <typename T>
inline ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*
UnityEngine::AddressableAssets::Addressables::CreateCatalogLocationWithHashDependencies(::StringW remoteCatalogPath) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "CreateCatalogLocationWithHashDependencies", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*>(nullptr, ___internal_method, remoteCatalogPath);
}
template <typename T>
inline ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*
UnityEngine::AddressableAssets::Addressables::CreateCatalogLocationWithHashDependencies(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteCatalogLocation) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                          { "CreateCatalogLocationWithHashDependencies", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*>(nullptr, ___internal_method, remoteCatalogLocation);
}
template <typename T>
inline ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase* UnityEngine::AddressableAssets::Addressables::CreateCatalogLocationWithHashDependencies(::StringW remoteCatalogPath,
                                                                                                                                                                           ::StringW remoteHashPath) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Addressables*>(),
                                                           { "CreateCatalogLocationWithHashDependencies", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*>(nullptr, ___internal_method, remoteCatalogPath, remoteHashPath);
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::Addressables::Addressables() {}
