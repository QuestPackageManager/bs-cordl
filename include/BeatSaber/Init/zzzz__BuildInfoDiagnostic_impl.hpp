#pragma once
// IWYU pragma private; include "BeatSaber/Init/BuildInfoDiagnostic.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Init/zzzz__BuildInfoDiagnostic_def.hpp"
//  Writing Method size for method: ::BeatSaber::Init::BuildInfoDiagnostic.CollectAndFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::BeatSaber::Init::BuildInfoDiagnostic::CollectAndFormat)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x3540dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Init::BuildInfoDiagnostic*>(), { "CollectAndFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::BuildInfoDiagnostic.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, uint64_t, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(
    &::BeatSaber::Init::BuildInfoDiagnostic::Format)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x354144c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Init::BuildInfoDiagnostic*>(),
                                                { "Format",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                    ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::StringW BeatSaber::Init::BuildInfoDiagnostic::CollectAndFormat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Init::BuildInfoDiagnostic*>(), { "CollectAndFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW BeatSaber::Init::BuildInfoDiagnostic::Format(::StringW gameVersion, ::StringW contentVersion, uint64_t buildId, ::StringW platform, ::StringW platformVersion, ::StringW prerelease,
                                                              ::StringW buildLabel, ::StringW unityVersion, ::StringW buildGuid) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Init::BuildInfoDiagnostic*>(),
                                              { "Format",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                  ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, gameVersion, contentVersion, buildId, platform, platformVersion, prerelease, buildLabel, unityVersion, buildGuid);
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::BuildInfoDiagnostic::BuildInfoDiagnostic() {}
