#pragma once
// IWYU pragma private; include "Oculus\Platform\LanguagePack.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__LanguagePack_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetails_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadResult_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::LanguagePack.GetCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* (*)()>(&::Oculus::Platform::LanguagePack::GetCurrent)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5dea13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::LanguagePack*>(), { "GetCurrent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::LanguagePack.SetCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* (*)(::StringW)>(
    &::Oculus::Platform::LanguagePack::SetCurrent)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5dea294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::LanguagePack*>(), { "SetCurrent", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* Oculus::Platform::LanguagePack::GetCurrent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::LanguagePack*>(), { "GetCurrent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>*>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* Oculus::Platform::LanguagePack::SetCurrent(::StringW tag) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::LanguagePack*>(), { "SetCurrent", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>*>(nullptr, ___internal_method, tag);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::LanguagePack::LanguagePack() {}
