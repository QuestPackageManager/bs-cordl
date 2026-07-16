#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/UnityWebRequestUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__UnityWebRequestUtilities_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__UnityWebRequestResult_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities.RequestHasErrors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Networking::UnityWebRequest*, ::by_ref<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*>)>(
    &::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::RequestHasErrors)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x69130bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*>(),
                            { "RequestHasErrors",
                              {},
                              { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>(), ::i2c::type_of<::by_ref<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities.IsAssetBundleDownloaded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(
    &::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::IsAssetBundleDownloaded)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x690bb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*>(),
                                                             { "IsAssetBundleDownloaded", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities.LogOperationResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AsyncOperation*)>(&::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::LogOperationResult)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x69132c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*>(),
                                                                                           { "LogOperationResult", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::Log)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x69133f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::LogError)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6913394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::*)()>(
    &::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x691344c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::RequestHasErrors(::UnityEngine::Networking::UnityWebRequest* webReq,
                                                                                              ::by_ref<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*>(),
          { "RequestHasErrors", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>(), ::i2c::type_of<::by_ref<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, webReq, result);
}
inline bool UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::IsAssetBundleDownloaded(::UnityEngine::Networking::UnityWebRequestAsyncOperation* op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*>(),
                                                           { "IsAssetBundleDownloaded", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, op);
}
inline void UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::LogOperationResult(::UnityEngine::AsyncOperation* op) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*>(),
                                                                                         { "LogOperationResult", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, op);
}
inline void UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::Log(::StringW msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::LogError(::StringW msg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities* UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::UnityWebRequestUtilities() {}
