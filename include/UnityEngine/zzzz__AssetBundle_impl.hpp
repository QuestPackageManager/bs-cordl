#pragma once
// IWYU pragma private; include "UnityEngine/AssetBundle.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__AssetBundleCreateRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundleRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundleUnloadOperation_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::AssetBundle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AssetBundle::*)()>(&::UnityEngine::AssetBundle::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a45030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.GetAllLoadedAssetBundles_Native
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::AssetBundle>> (*)()>(&::UnityEngine::AssetBundle::GetAllLoadedAssetBundles_Native)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a45088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "GetAllLoadedAssetBundles_Native", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.GetAllLoadedAssetBundles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::AssetBundle>>* (*)()>(
    &::UnityEngine::AssetBundle::GetAllLoadedAssetBundles)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a450b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "GetAllLoadedAssetBundles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.LoadFromFileAsync_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AssetBundleCreateRequest* (*)(::StringW, uint32_t, uint64_t)>(&::UnityEngine::AssetBundle::LoadFromFileAsync_Internal)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6a450d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(),
                                                             { "LoadFromFileAsync_Internal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.LoadFromFileAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AssetBundleCreateRequest* (*)(::StringW)>(&::UnityEngine::AssetBundle::LoadFromFileAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a45310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadFromFileAsync", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.LoadFromFileAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AssetBundleCreateRequest* (*)(::StringW, uint32_t)>(&::UnityEngine::AssetBundle::LoadFromFileAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a4531c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadFromFileAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.LoadFromFile_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AssetBundle> (*)(::StringW, uint32_t, uint64_t)>(&::UnityEngine::AssetBundle::LoadFromFile_Internal)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x6a45324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadFromFile_Internal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.LoadFromFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AssetBundle> (*)(::StringW)>(&::UnityEngine::AssetBundle::LoadFromFile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a455fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadFromFile", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.LoadAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::AssetBundle::*)(::StringW)>(&::UnityEngine::AssetBundle::LoadAsset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a45608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadAsset", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.LoadAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::AssetBundle::*)(::StringW, ::System::Type*)>(&::UnityEngine::AssetBundle::LoadAsset)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6a45688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadAsset", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.LoadAsset_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::AssetBundle::*)(::StringW, ::System::Type*)>(&::UnityEngine::AssetBundle::LoadAsset_Internal)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x6a45774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadAsset_Internal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.LoadAssetAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AssetBundleRequest* (::UnityEngine::AssetBundle::*)(::StringW, ::System::Type*)>(&::UnityEngine::AssetBundle::LoadAssetAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6a45a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadAssetAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.LoadAssetWithSubAssetsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AssetBundleRequest* (::UnityEngine::AssetBundle::*)(::StringW, ::System::Type*)>(
    &::UnityEngine::AssetBundle::LoadAssetWithSubAssetsAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6a45d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadAssetWithSubAssetsAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.LoadAllAssetsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AssetBundleRequest* (::UnityEngine::AssetBundle::*)()>(&::UnityEngine::AssetBundle::LoadAllAssetsAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a46050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadAllAssetsAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.LoadAllAssetsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AssetBundleRequest* (::UnityEngine::AssetBundle::*)(::System::Type*)>(&::UnityEngine::AssetBundle::LoadAllAssetsAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6a460c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadAllAssetsAsync", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.LoadAssetAsync_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AssetBundleRequest* (::UnityEngine::AssetBundle::*)(::StringW, ::System::Type*)>(
    &::UnityEngine::AssetBundle::LoadAssetAsync_Internal)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6a45b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadAssetAsync_Internal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.Unload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AssetBundle::*)(bool)>(&::UnityEngine::AssetBundle::Unload)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a461d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "Unload", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.UnloadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AssetBundleUnloadOperation* (::UnityEngine::AssetBundle::*)(bool)>(&::UnityEngine::AssetBundle::UnloadAsync)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a462a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "UnloadAsync", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.GetAllAssetNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::AssetBundle::*)()>(&::UnityEngine::AssetBundle::GetAllAssetNames)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a46414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "GetAllAssetNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.GetAllScenePaths
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::AssetBundle::*)()>(&::UnityEngine::AssetBundle::GetAllScenePaths)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a464d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "GetAllScenePaths", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.LoadAssetWithSubAssetsAsync_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AssetBundleRequest* (::UnityEngine::AssetBundle::*)(::StringW, ::System::Type*)>(
    &::UnityEngine::AssetBundle::LoadAssetWithSubAssetsAsync_Internal)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6a45e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadAssetWithSubAssetsAsync_Internal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.LoadFromFileAsync_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, uint32_t, uint64_t)>(
    &::UnityEngine::AssetBundle::LoadFromFileAsync_Internal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a452bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::AssetBundle*>(),
            { "LoadFromFileAsync_Internal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.LoadFromFile_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, uint32_t, uint64_t)>(
    &::UnityEngine::AssetBundle::LoadFromFile_Internal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a455a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::AssetBundle*>(),
            { "LoadFromFile_Internal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.LoadAsset_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::System::Type*)>(
    &::UnityEngine::AssetBundle::LoadAsset_Internal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a45a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(),
                                         { "LoadAsset_Internal_Injected",
                                           {},
                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.LoadAssetAsync_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::System::Type*)>(
    &::UnityEngine::AssetBundle::LoadAssetAsync_Internal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a4617c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(),
                                         { "LoadAssetAsync_Internal_Injected",
                                           {},
                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.Unload_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::AssetBundle::Unload_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a46260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "Unload_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.UnloadAsync_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, bool)>(&::UnityEngine::AssetBundle::UnloadAsync_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a4634c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "UnloadAsync_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.GetAllAssetNames_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::System::IntPtr)>(&::UnityEngine::AssetBundle::GetAllAssetNames_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a46494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "GetAllAssetNames_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.GetAllScenePaths_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::System::IntPtr)>(&::UnityEngine::AssetBundle::GetAllScenePaths_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a46550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "GetAllScenePaths_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundle.LoadAssetWithSubAssetsAsync_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::System::Type*)>(
    &::UnityEngine::AssetBundle::LoadAssetWithSubAssetsAsync_Internal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a4658c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(),
                                         { "LoadAssetWithSubAssetsAsync_Internal_Injected",
                                           {},
                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::AssetBundle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::AssetBundle>> UnityEngine::AssetBundle::GetAllLoadedAssetBundles_Native() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "GetAllLoadedAssetBundles_Native", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::AssetBundle>>>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::AssetBundle>>* UnityEngine::AssetBundle::GetAllLoadedAssetBundles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "GetAllLoadedAssetBundles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::AssetBundle>>*>(nullptr, ___internal_method);
}
inline ::UnityEngine::AssetBundleCreateRequest* UnityEngine::AssetBundle::LoadFromFileAsync_Internal(::StringW path, uint32_t crc, uint64_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(),
                                                           { "LoadFromFileAsync_Internal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AssetBundleCreateRequest*>(nullptr, ___internal_method, path, crc, offset);
}
inline ::UnityEngine::AssetBundleCreateRequest* UnityEngine::AssetBundle::LoadFromFileAsync(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadFromFileAsync", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AssetBundleCreateRequest*>(nullptr, ___internal_method, path);
}
inline ::UnityEngine::AssetBundleCreateRequest* UnityEngine::AssetBundle::LoadFromFileAsync(::StringW path, uint32_t crc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadFromFileAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AssetBundleCreateRequest*>(nullptr, ___internal_method, path, crc);
}
inline ::UnityW<::UnityEngine::AssetBundle> UnityEngine::AssetBundle::LoadFromFile_Internal(::StringW path, uint32_t crc, uint64_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadFromFile_Internal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AssetBundle>>(nullptr, ___internal_method, path, crc, offset);
}
inline ::UnityW<::UnityEngine::AssetBundle> UnityEngine::AssetBundle::LoadFromFile(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadFromFile", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AssetBundle>>(nullptr, ___internal_method, path);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::AssetBundle::LoadAsset(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadAsset", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, name);
}
template <typename T> inline T UnityEngine::AssetBundle::LoadAsset(::StringW name) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadAsset", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, name);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::AssetBundle::LoadAsset(::StringW name, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadAsset", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, name, type);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::AssetBundle::LoadAsset_Internal(::StringW name, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadAsset_Internal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, name, type);
}
template <typename T> inline ::UnityEngine::AssetBundleRequest* UnityEngine::AssetBundle::LoadAssetAsync(::StringW name) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadAssetAsync", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AssetBundleRequest*>(this, ___internal_method, name);
}
inline ::UnityEngine::AssetBundleRequest* UnityEngine::AssetBundle::LoadAssetAsync(::StringW name, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadAssetAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AssetBundleRequest*>(this, ___internal_method, name, type);
}
inline ::UnityEngine::AssetBundleRequest* UnityEngine::AssetBundle::LoadAssetWithSubAssetsAsync(::StringW name, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadAssetWithSubAssetsAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AssetBundleRequest*>(this, ___internal_method, name, type);
}
inline ::UnityEngine::AssetBundleRequest* UnityEngine::AssetBundle::LoadAllAssetsAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadAllAssetsAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AssetBundleRequest*>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::AssetBundleRequest* UnityEngine::AssetBundle::LoadAllAssetsAsync() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadAllAssetsAsync", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AssetBundleRequest*>(this, ___internal_method);
}
inline ::UnityEngine::AssetBundleRequest* UnityEngine::AssetBundle::LoadAllAssetsAsync(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadAllAssetsAsync", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AssetBundleRequest*>(this, ___internal_method, type);
}
inline ::UnityEngine::AssetBundleRequest* UnityEngine::AssetBundle::LoadAssetAsync_Internal(::StringW name, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadAssetAsync_Internal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AssetBundleRequest*>(this, ___internal_method, name, type);
}
inline void UnityEngine::AssetBundle::Unload(bool unloadAllLoadedObjects) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "Unload", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unloadAllLoadedObjects);
}
inline ::UnityEngine::AssetBundleUnloadOperation* UnityEngine::AssetBundle::UnloadAsync(bool unloadAllLoadedObjects) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "UnloadAsync", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AssetBundleUnloadOperation*>(this, ___internal_method, unloadAllLoadedObjects);
}
inline ::ArrayW<::StringW> UnityEngine::AssetBundle::GetAllAssetNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "GetAllAssetNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> UnityEngine::AssetBundle::GetAllScenePaths() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "GetAllScenePaths", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::UnityEngine::AssetBundleRequest* UnityEngine::AssetBundle::LoadAssetWithSubAssetsAsync_Internal(::StringW name, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "LoadAssetWithSubAssetsAsync_Internal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AssetBundleRequest*>(this, ___internal_method, name, type);
}
inline ::System::IntPtr UnityEngine::AssetBundle::LoadFromFileAsync_Internal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> path, uint32_t crc, uint64_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::AssetBundle*>(),
          { "LoadFromFileAsync_Internal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, path, crc, offset);
}
inline ::System::IntPtr UnityEngine::AssetBundle::LoadFromFile_Internal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> path, uint32_t crc, uint64_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::AssetBundle*>(),
                       { "LoadFromFile_Internal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, path, crc, offset);
}
inline ::System::IntPtr UnityEngine::AssetBundle::LoadAsset_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::AssetBundle*>(),
          { "LoadAsset_Internal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, name, type);
}
inline ::System::IntPtr UnityEngine::AssetBundle::LoadAssetAsync_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(),
                                              { "LoadAssetAsync_Internal_Injected",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, name, type);
}
inline void UnityEngine::AssetBundle::Unload_Injected(::System::IntPtr _unity_self, bool unloadAllLoadedObjects) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "Unload_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, unloadAllLoadedObjects);
}
inline ::System::IntPtr UnityEngine::AssetBundle::UnloadAsync_Injected(::System::IntPtr _unity_self, bool unloadAllLoadedObjects) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "UnloadAsync_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, unloadAllLoadedObjects);
}
inline ::ArrayW<::StringW> UnityEngine::AssetBundle::GetAllAssetNames_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "GetAllAssetNames_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, _unity_self);
}
inline ::ArrayW<::StringW> UnityEngine::AssetBundle::GetAllScenePaths_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(), { "GetAllScenePaths_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::AssetBundle::LoadAssetWithSubAssetsAsync_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name,
                                                                                                ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetBundle*>(),
                                              { "LoadAssetWithSubAssetsAsync_Internal_Injected",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, name, type);
}
inline ::UnityEngine::AssetBundle* UnityEngine::AssetBundle::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AssetBundle*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AssetBundle::AssetBundle() {}
