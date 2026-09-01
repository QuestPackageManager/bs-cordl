#pragma once
// IWYU pragma private; include "OculusStudios\Platform\Core\PlatformExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/Platform/Core/zzzz__PlatformExtensions_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
template <typename T> inline void OculusStudios::Platform::Core::PlatformExtensions::SetRichPresenceStatus(::OculusStudios::Platform::Core::IPlatform* platform) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::PlatformExtensions*>(),
                                                           { "SetRichPresenceStatus", { ::i2c::class_of<T>() }, { ::i2c::type_of<::OculusStudios::Platform::Core::IPlatform*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, platform);
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::PlatformExtensions::PlatformExtensions() {}
