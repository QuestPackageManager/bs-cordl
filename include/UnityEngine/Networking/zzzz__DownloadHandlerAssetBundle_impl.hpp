#pragma once
// IWYU pragma private; include "UnityEngine/Networking/DownloadHandlerAssetBundle.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_impl.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandlerAssetBundle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandlerAssetBundle_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "UnityEngine/zzzz__CachedAssetBundle_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::DownloadHandlerAssetBundle*)>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c5b1f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle_BindingsMarshaller*>::get(), "ConvertToNative",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get() })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerAssetBundle_BindingsMarshaller::ConvertToNative(::UnityEngine::Networking::DownloadHandlerAssetBundle* handler) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle_BindingsMarshaller*>::get(), "ConvertToNative",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, handler);
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::DownloadHandlerAssetBundle_BindingsMarshaller::DownloadHandlerAssetBundle_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::DownloadHandlerAssetBundle*, ::StringW, uint32_t)>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::Create)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6c5aa2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.CreateCached
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(
    ::UnityEngine::Networking::DownloadHandlerAssetBundle*, ::StringW, ::StringW, ::UnityEngine::Hash128, uint32_t)>(&::UnityEngine::Networking::DownloadHandlerAssetBundle::CreateCached)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6c5abc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), "CreateCached", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Hash128>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.InternalCreateAssetBundle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::DownloadHandlerAssetBundle::*)(::StringW, uint32_t)>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::InternalCreateAssetBundle)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c5ae04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), "InternalCreateAssetBundle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.InternalCreateAssetBundleCached
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::DownloadHandlerAssetBundle::*)(
    ::StringW, ::StringW, ::UnityEngine::Hash128, uint32_t)>(&::UnityEngine::Networking::DownloadHandlerAssetBundle::InternalCreateAssetBundleCached)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c5ae1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(),
                                                                               "InternalCreateAssetBundleCached", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Hash128>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::DownloadHandlerAssetBundle::*)(::StringW, uint32_t)>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c5a8e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::DownloadHandlerAssetBundle::*)(
    ::StringW, ::UnityEngine::CachedAssetBundle, uint32_t)>(&::UnityEngine::Networking::DownloadHandlerAssetBundle::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6c5aa04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CachedAssetBundle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.GetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::UnityEngine::Networking::DownloadHandlerAssetBundle::*)()>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::GetData)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6c5ae34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.GetText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Networking::DownloadHandlerAssetBundle::*)()>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::GetText)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6c5ae80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.get_assetBundle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AssetBundle> (::UnityEngine::Networking::DownloadHandlerAssetBundle::*)()>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::get_assetBundle)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6c5aecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(),
                                                                               "get_assetBundle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.get_autoLoadAssetBundle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Networking::DownloadHandlerAssetBundle::*)()>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::get_autoLoadAssetBundle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6c5b044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(),
                                                                               "get_autoLoadAssetBundle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.set_autoLoadAssetBundle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::DownloadHandlerAssetBundle::*)(bool)>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::set_autoLoadAssetBundle)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6c5b0d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), "set_autoLoadAssetBundle",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.get_isDownloadComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Networking::DownloadHandlerAssetBundle::*)()>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::get_isDownloadComplete)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6c5b16c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(),
                                                                               "get_isDownloadComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.Create_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(
    ::UnityEngine::Networking::DownloadHandlerAssetBundle*, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>, uint32_t)>(&::UnityEngine::Networking::DownloadHandlerAssetBundle::Create_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c5ab70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), "Create_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.CreateCached_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IntPtr (*)(::UnityEngine::Networking::DownloadHandlerAssetBundle*, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>,
                                     ::ByRef<::UnityEngine::Hash128>, uint32_t)>(&::UnityEngine::Networking::DownloadHandlerAssetBundle::CreateCached_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6c5ad98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), "CreateCached_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Hash128>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.get_assetBundle_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::get_assetBundle_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c5b008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), "get_assetBundle_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.get_autoLoadAssetBundle_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::get_autoLoadAssetBundle_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c5b094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), "get_autoLoadAssetBundle_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.set_autoLoadAssetBundle_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool)>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::set_autoLoadAssetBundle_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c5b128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), "set_autoLoadAssetBundle_Injected",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.get_isDownloadComplete_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::get_isDownloadComplete_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c5b1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), "get_isDownloadComplete_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerAssetBundle::Create(::UnityEngine::Networking::DownloadHandlerAssetBundle* obj, ::StringW url, uint32_t crc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, obj, url, crc);
}
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerAssetBundle::CreateCached(::UnityEngine::Networking::DownloadHandlerAssetBundle* obj, ::StringW url, ::StringW name,
                                                                                          ::UnityEngine::Hash128 hash, uint32_t crc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), "CreateCached", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Hash128>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, obj, url, name, hash, crc);
}
inline void UnityEngine::Networking::DownloadHandlerAssetBundle::InternalCreateAssetBundle(::StringW url, uint32_t crc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), "InternalCreateAssetBundle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, url, crc);
}
inline void UnityEngine::Networking::DownloadHandlerAssetBundle::InternalCreateAssetBundleCached(::StringW url, ::StringW name, ::UnityEngine::Hash128 hash, uint32_t crc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(),
                                                                             "InternalCreateAssetBundleCached", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Hash128>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, url, name, hash, crc);
}
inline void UnityEngine::Networking::DownloadHandlerAssetBundle::_ctor(::StringW url, uint32_t crc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, url, crc);
}
inline void UnityEngine::Networking::DownloadHandlerAssetBundle::_ctor(::StringW url, ::UnityEngine::CachedAssetBundle cachedBundle, uint32_t crc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CachedAssetBundle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, url, cachedBundle, crc);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnityEngine::Networking::DownloadHandlerAssetBundle::GetData() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::DownloadHandlerAssetBundle::GetText() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AssetBundle> UnityEngine::Networking::DownloadHandlerAssetBundle::get_assetBundle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(),
                                                                             "get_assetBundle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AssetBundle>, false>(this, ___internal_method);
}
inline bool UnityEngine::Networking::DownloadHandlerAssetBundle::get_autoLoadAssetBundle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(),
                                                                             "get_autoLoadAssetBundle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Networking::DownloadHandlerAssetBundle::set_autoLoadAssetBundle(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), "set_autoLoadAssetBundle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Networking::DownloadHandlerAssetBundle::get_isDownloadComplete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(),
                                                                             "get_isDownloadComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerAssetBundle::Create_Injected(::UnityEngine::Networking::DownloadHandlerAssetBundle* obj,
                                                                                             ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> url, uint32_t crc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), "Create_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, obj, url, crc);
}
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerAssetBundle::CreateCached_Injected(::UnityEngine::Networking::DownloadHandlerAssetBundle* obj,
                                                                                                   ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> url,
                                                                                                   ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name, ::ByRef<::UnityEngine::Hash128> hash,
                                                                                                   uint32_t crc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), "CreateCached_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Hash128>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, obj, url, name, hash, crc);
}
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerAssetBundle::get_assetBundle_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), "get_assetBundle_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Networking::DownloadHandlerAssetBundle::get_autoLoadAssetBundle_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), "get_autoLoadAssetBundle_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Networking::DownloadHandlerAssetBundle::set_autoLoadAssetBundle_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), "set_autoLoadAssetBundle_Injected",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Networking::DownloadHandlerAssetBundle::get_isDownloadComplete_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadHandlerAssetBundle*>::get(), "get_isDownloadComplete_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Networking::DownloadHandlerAssetBundle* UnityEngine::Networking::DownloadHandlerAssetBundle::New_ctor(::StringW url, uint32_t crc) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(url, crc));
}
inline ::UnityEngine::Networking::DownloadHandlerAssetBundle* UnityEngine::Networking::DownloadHandlerAssetBundle::New_ctor(::StringW url, ::UnityEngine::CachedAssetBundle cachedBundle,
                                                                                                                            uint32_t crc) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(url, cachedBundle, crc));
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::DownloadHandlerAssetBundle::DownloadHandlerAssetBundle() {}
