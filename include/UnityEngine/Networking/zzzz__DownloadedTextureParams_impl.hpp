#pragma once
// IWYU pragma private; include "UnityEngine\Networking\DownloadedTextureParams.hpp"
#include "UnityEngine/Networking/zzzz__DownloadedTextureFlags_impl.hpp"
#include "UnityEngine/Networking/zzzz__DownloadedTextureParams_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadedTextureFlags_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::DownloadedTextureParams.get_Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::DownloadedTextureParams (*)()>(&::UnityEngine::Networking::DownloadedTextureParams::get_Default)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2b520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadedTextureParams>(), { "get_Default", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadedTextureParams.set_readable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadedTextureParams::*)(bool)>(&::UnityEngine::Networking::DownloadedTextureParams::set_readable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e2b528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadedTextureParams>(), { "set_readable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadedTextureParams.SetFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadedTextureParams::*)(::UnityEngine::Networking::DownloadedTextureFlags, bool)>(
    &::UnityEngine::Networking::DownloadedTextureParams::SetFlags)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e2b538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadedTextureParams>(),
                                                             { "SetFlags", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadedTextureFlags>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Networking::DownloadedTextureParams UnityEngine::Networking::DownloadedTextureParams::get_Default() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadedTextureParams>(), { "get_Default", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::DownloadedTextureParams>(nullptr, ___internal_method);
}
inline void UnityEngine::Networking::DownloadedTextureParams::set_readable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadedTextureParams>(), { "set_readable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Networking::DownloadedTextureParams::SetFlags(::UnityEngine::Networking::DownloadedTextureFlags flgs, bool add) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadedTextureParams>(),
                                                           { "SetFlags", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadedTextureFlags>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, flgs, add);
}
// Ctor Parameters [CppParam { name: "flags", ty: "::UnityEngine::Networking::DownloadedTextureFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "mipmapCount", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::Networking::DownloadedTextureParams::DownloadedTextureParams(::UnityEngine::Networking::DownloadedTextureFlags flags, int32_t mipmapCount) noexcept {
  this->flags = flags;
  this->mipmapCount = mipmapCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::DownloadedTextureParams::DownloadedTextureParams() {}
