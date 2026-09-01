#pragma once
// IWYU pragma private; include "UnityEngine\Networking\UnityWebRequestAssetBundle.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAssetBundle_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__CachedAssetBundle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequestAssetBundle.GetAssetBundle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (*)(::StringW)>(&::UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e25fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequestAssetBundle*>(), { "GetAssetBundle", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequestAssetBundle.GetAssetBundle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (*)(::System::Uri*)>(&::UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e260bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequestAssetBundle*>(), { "GetAssetBundle", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequestAssetBundle.GetAssetBundle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (*)(::StringW, uint32_t)>(&::UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6e25ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequestAssetBundle*>(),
                                                                                           { "GetAssetBundle", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequestAssetBundle.GetAssetBundle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (*)(::System::Uri*, uint32_t)>(
    &::UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6e260c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequestAssetBundle*>(),
                                                                                           { "GetAssetBundle", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequestAssetBundle.GetAssetBundle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (*)(::System::Uri*, ::UnityEngine::CachedAssetBundle, uint32_t)>(
    &::UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6e261c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequestAssetBundle*>(),
                                                { "GetAssetBundle", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::UnityEngine::CachedAssetBundle>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle(::StringW uri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequestAssetBundle*>(), { "GetAssetBundle", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(nullptr, ___internal_method, uri);
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle(::System::Uri* uri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequestAssetBundle*>(), { "GetAssetBundle", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(nullptr, ___internal_method, uri);
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle(::StringW uri, uint32_t crc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequestAssetBundle*>(),
                                                                                         { "GetAssetBundle", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(nullptr, ___internal_method, uri, crc);
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle(::System::Uri* uri, uint32_t crc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequestAssetBundle*>(),
                                                                                         { "GetAssetBundle", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(nullptr, ___internal_method, uri, crc);
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle(::System::Uri* uri, ::UnityEngine::CachedAssetBundle cachedAssetBundle,
                                                                                                                       uint32_t crc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequestAssetBundle*>(),
                                              { "GetAssetBundle", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::UnityEngine::CachedAssetBundle>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(nullptr, ___internal_method, uri, cachedAssetBundle, crc);
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::UnityWebRequestAssetBundle::UnityWebRequestAssetBundle() {}
