#pragma once
// IWYU pragma private; include "Oculus/Platform/Application.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Application_def.hpp"
#include "Oculus/Platform/Models/zzzz__AppDownloadProgressResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AppDownloadResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationVersion_def.hpp"
#include "Oculus/Platform/zzzz__ApplicationOptions_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Application.CancelAppDownload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadResult*>* (*)()>(&::Oculus::Platform::Application::CancelAppDownload)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5de2b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Application*>(), { "CancelAppDownload", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Application.CheckAppDownloadProgress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadProgressResult*>* (*)()>(
    &::Oculus::Platform::Application::CheckAppDownloadProgress)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5de2ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Application*>(), { "CheckAppDownloadProgress", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Application.GetVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationVersion*>* (*)()>(&::Oculus::Platform::Application::GetVersion)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5de2e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Application*>(), { "GetVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Application.InstallAppUpdateAndRelaunch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadResult*>* (*)(::Oculus::Platform::ApplicationOptions*)>(
    &::Oculus::Platform::Application::InstallAppUpdateAndRelaunch)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5de2f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Application*>(), { "InstallAppUpdateAndRelaunch", {}, { ::i2c::type_of<::Oculus::Platform::ApplicationOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Application.LaunchOtherApp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::StringW>* (*)(uint64_t, ::Oculus::Platform::ApplicationOptions*)>(
    &::Oculus::Platform::Application::LaunchOtherApp)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5de3108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Application*>(), { "LaunchOtherApp", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::Oculus::Platform::ApplicationOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Application.StartAppDownload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadResult*>* (*)()>(&::Oculus::Platform::Application::StartAppDownload)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5de3280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Application*>(), { "StartAppDownload", {}, {} })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadResult*>* Oculus::Platform::Application::CancelAppDownload() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Application*>(), { "CancelAppDownload", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadResult*>*>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadProgressResult*>* Oculus::Platform::Application::CheckAppDownloadProgress() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Application*>(), { "CheckAppDownloadProgress", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadProgressResult*>*>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationVersion*>* Oculus::Platform::Application::GetVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Application*>(), { "GetVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationVersion*>*>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadResult*>*
Oculus::Platform::Application::InstallAppUpdateAndRelaunch(::Oculus::Platform::ApplicationOptions* deeplink_options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Application*>(), { "InstallAppUpdateAndRelaunch", {}, { ::i2c::type_of<::Oculus::Platform::ApplicationOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadResult*>*>(nullptr, ___internal_method, deeplink_options);
}
inline ::Oculus::Platform::Request_1<::StringW>* Oculus::Platform::Application::LaunchOtherApp(uint64_t appID, ::Oculus::Platform::ApplicationOptions* deeplink_options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Application*>(), { "LaunchOtherApp", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::Oculus::Platform::ApplicationOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::StringW>*>(nullptr, ___internal_method, appID, deeplink_options);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadResult*>* Oculus::Platform::Application::StartAppDownload() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Application*>(), { "StartAppDownload", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadResult*>*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Application::Application() {}
