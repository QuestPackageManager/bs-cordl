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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::DownloadHandlerAssetBundle*)>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e23530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle_BindingsMarshaller*>(),
                                                                                           { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerAssetBundle_BindingsMarshaller::ConvertToNative(::UnityEngine::Networking::DownloadHandlerAssetBundle* handler) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle_BindingsMarshaller*>(),
                                                                                         { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handler);
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::DownloadHandlerAssetBundle_BindingsMarshaller::DownloadHandlerAssetBundle_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::DownloadHandlerAssetBundle*, ::StringW, uint32_t)>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::Create)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6e22d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(),
                                         { "Create", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.CreateCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::DownloadHandlerAssetBundle*, ::StringW, ::StringW, ::UnityEngine::Hash128, uint32_t)>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::CreateCached)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6e22efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(),
                                                                                           { "CreateCached",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Hash128>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.InternalCreateAssetBundle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandlerAssetBundle::*)(::StringW, uint32_t)>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::InternalCreateAssetBundle)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e2313c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(),
                                                                                           { "InternalCreateAssetBundle", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.InternalCreateAssetBundleCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandlerAssetBundle::*)(::StringW, ::StringW, ::UnityEngine::Hash128, uint32_t)>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::InternalCreateAssetBundleCached)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e23154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(),
            { "InternalCreateAssetBundleCached", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Hash128>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandlerAssetBundle::*)(::StringW, uint32_t)>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e22c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandlerAssetBundle::*)(::StringW, ::UnityEngine::CachedAssetBundle, uint32_t)>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e22d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::CachedAssetBundle>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.GetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::UnityEngine::Networking::DownloadHandlerAssetBundle::*)()>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::GetData)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e2316c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.GetText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::DownloadHandlerAssetBundle::*)()>(&::UnityEngine::Networking::DownloadHandlerAssetBundle::GetText)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e231b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.get_assetBundle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AssetBundle> (::UnityEngine::Networking::DownloadHandlerAssetBundle::*)()>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::get_assetBundle)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6e23204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), { "get_assetBundle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.get_autoLoadAssetBundle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Networking::DownloadHandlerAssetBundle::*)()>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::get_autoLoadAssetBundle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e2337c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), { "get_autoLoadAssetBundle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.set_autoLoadAssetBundle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandlerAssetBundle::*)(bool)>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::set_autoLoadAssetBundle)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e23408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), { "set_autoLoadAssetBundle", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.get_isDownloadComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Networking::DownloadHandlerAssetBundle::*)()>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::get_isDownloadComplete)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e234a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), { "get_isDownloadComplete", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.Create_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::DownloadHandlerAssetBundle*, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, uint32_t)>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::Create_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e22ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(),
                                                             { "Create_Injected",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.CreateCached_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::DownloadHandlerAssetBundle*, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>,
                                                                            ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Hash128>, uint32_t)>(
    &::UnityEngine::Networking::DownloadHandlerAssetBundle::CreateCached_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e230d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(),
                            { "CreateCached_Injected",
                              {},
                              { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Hash128>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.get_assetBundle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Networking::DownloadHandlerAssetBundle::get_assetBundle_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e23340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), { "get_assetBundle_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.get_autoLoadAssetBundle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Networking::DownloadHandlerAssetBundle::get_autoLoadAssetBundle_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e233cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(),
                                                                                           { "get_autoLoadAssetBundle_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.set_autoLoadAssetBundle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Networking::DownloadHandlerAssetBundle::set_autoLoadAssetBundle_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e23460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(),
                                                             { "set_autoLoadAssetBundle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerAssetBundle.get_isDownloadComplete_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Networking::DownloadHandlerAssetBundle::get_isDownloadComplete_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e234f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(),
                                                                                           { "get_isDownloadComplete_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerAssetBundle::Create(::UnityEngine::Networking::DownloadHandlerAssetBundle* obj, ::StringW url, uint32_t crc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(),
                                       { "Create", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj, url, crc);
}
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerAssetBundle::CreateCached(::UnityEngine::Networking::DownloadHandlerAssetBundle* obj, ::StringW url, ::StringW name,
                                                                                          ::UnityEngine::Hash128 hash, uint32_t crc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(),
                                                                                         { "CreateCached",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Hash128>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj, url, name, hash, crc);
}
inline void UnityEngine::Networking::DownloadHandlerAssetBundle::InternalCreateAssetBundle(::StringW url, uint32_t crc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(),
                                                                                         { "InternalCreateAssetBundle", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url, crc);
}
inline void UnityEngine::Networking::DownloadHandlerAssetBundle::InternalCreateAssetBundleCached(::StringW url, ::StringW name, ::UnityEngine::Hash128 hash, uint32_t crc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(),
                       { "InternalCreateAssetBundleCached", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Hash128>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url, name, hash, crc);
}
inline void UnityEngine::Networking::DownloadHandlerAssetBundle::_ctor(::StringW url, uint32_t crc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url, crc);
}
inline void UnityEngine::Networking::DownloadHandlerAssetBundle::_ctor(::StringW url, ::UnityEngine::CachedAssetBundle cachedBundle, uint32_t crc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::CachedAssetBundle>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url, cachedBundle, crc);
}
inline ::ArrayW<uint8_t> UnityEngine::Networking::DownloadHandlerAssetBundle::GetData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::DownloadHandlerAssetBundle::GetText() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AssetBundle> UnityEngine::Networking::DownloadHandlerAssetBundle::get_assetBundle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), { "get_assetBundle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AssetBundle>>(this, ___internal_method);
}
inline bool UnityEngine::Networking::DownloadHandlerAssetBundle::get_autoLoadAssetBundle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), { "get_autoLoadAssetBundle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Networking::DownloadHandlerAssetBundle::set_autoLoadAssetBundle(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), { "set_autoLoadAssetBundle", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Networking::DownloadHandlerAssetBundle::get_isDownloadComplete() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), { "get_isDownloadComplete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerAssetBundle::Create_Injected(::UnityEngine::Networking::DownloadHandlerAssetBundle* obj,
                                                                                             ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> url, uint32_t crc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(),
                                                                                         { "Create_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj, url, crc);
}
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerAssetBundle::CreateCached_Injected(::UnityEngine::Networking::DownloadHandlerAssetBundle* obj,
                                                                                                   ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> url,
                                                                                                   ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, ::by_ref<::UnityEngine::Hash128> hash,
                                                                                                   uint32_t crc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(),
                          { "CreateCached_Injected",
                            {},
                            { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Hash128>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj, url, name, hash, crc);
}
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerAssetBundle::get_assetBundle_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), { "get_assetBundle_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Networking::DownloadHandlerAssetBundle::get_autoLoadAssetBundle_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), { "get_autoLoadAssetBundle_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Networking::DownloadHandlerAssetBundle::set_autoLoadAssetBundle_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(),
                                                                                         { "set_autoLoadAssetBundle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Networking::DownloadHandlerAssetBundle::get_isDownloadComplete_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(), { "get_isDownloadComplete_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Networking::DownloadHandlerAssetBundle* UnityEngine::Networking::DownloadHandlerAssetBundle::New_ctor(::StringW url, uint32_t crc) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(url, crc));
}
inline ::UnityEngine::Networking::DownloadHandlerAssetBundle* UnityEngine::Networking::DownloadHandlerAssetBundle::New_ctor(::StringW url, ::UnityEngine::CachedAssetBundle cachedBundle,
                                                                                                                            uint32_t crc) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::DownloadHandlerAssetBundle*>(url, cachedBundle, crc));
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::DownloadHandlerAssetBundle::DownloadHandlerAssetBundle() {}
