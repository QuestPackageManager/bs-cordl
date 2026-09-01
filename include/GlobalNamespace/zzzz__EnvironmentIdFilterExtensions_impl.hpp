#pragma once
// IWYU pragma private; include "GlobalNamespace\EnvironmentIdFilterExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentIdFilterExtensions_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentIdFilter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentIdFilterExtensions.ShouldExcludeTutorial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::EnvironmentIdFilter)>(&::GlobalNamespace::EnvironmentIdFilterExtensions::ShouldExcludeTutorial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentIdFilterExtensions*>(),
                                                                                           { "ShouldExcludeTutorial", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentIdFilter>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentIdFilterExtensions.ShouldExcludeMultiplayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::EnvironmentIdFilter)>(&::GlobalNamespace::EnvironmentIdFilterExtensions::ShouldExcludeMultiplayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentIdFilterExtensions*>(),
                                                                                           { "ShouldExcludeMultiplayer", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentIdFilter>() } })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::EnvironmentIdFilterExtensions::ShouldExcludeTutorial(::GlobalNamespace::EnvironmentIdFilter filter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentIdFilterExtensions*>(),
                                                                                         { "ShouldExcludeTutorial", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentIdFilter>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, filter);
}
inline bool GlobalNamespace::EnvironmentIdFilterExtensions::ShouldExcludeMultiplayer(::GlobalNamespace::EnvironmentIdFilter filter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentIdFilterExtensions*>(),
                                                                                         { "ShouldExcludeMultiplayer", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentIdFilter>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, filter);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentIdFilterExtensions::EnvironmentIdFilterExtensions() {}
