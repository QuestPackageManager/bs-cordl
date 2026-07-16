#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/PlatformUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__PlatformUtilities_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::PlatformUtilities.PlatformUsesMultiThreading
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RuntimePlatform)>(&::UnityEngine::ResourceManagement::Util::PlatformUtilities::PlatformUsesMultiThreading)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6911f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::PlatformUtilities*>(),
                                                                                           { "PlatformUsesMultiThreading", {}, { ::i2c::type_of<::UnityEngine::RuntimePlatform>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::PlatformUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::PlatformUtilities::*)()>(&::UnityEngine::ResourceManagement::Util::PlatformUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6911f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::PlatformUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::ResourceManagement::Util::PlatformUtilities::PlatformUsesMultiThreading(::UnityEngine::RuntimePlatform platform) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::PlatformUtilities*>(),
                                                                                         { "PlatformUsesMultiThreading", {}, { ::i2c::type_of<::UnityEngine::RuntimePlatform>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, platform);
}
inline void UnityEngine::ResourceManagement::Util::PlatformUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::PlatformUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::PlatformUtilities* UnityEngine::ResourceManagement::Util::PlatformUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Util::PlatformUtilities*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::PlatformUtilities::PlatformUtilities() {}
