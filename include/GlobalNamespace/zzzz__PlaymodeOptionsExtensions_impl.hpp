#pragma once
// IWYU pragma private; include "GlobalNamespace/PlaymodeOptionsExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlaymodeOptionsExtensions_def.hpp"
#include "GlobalNamespace/zzzz__PlaymodeOptions_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlaymodeOptionsExtensions.IsRecorderActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::PlaymodeOptions)>(&::GlobalNamespace::PlaymodeOptionsExtensions::IsRecorderActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3709d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaymodeOptionsExtensions*>(), { "IsRecorderActive", {}, { ::i2c::type_of<::GlobalNamespace::PlaymodeOptions>() } })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::PlaymodeOptionsExtensions::IsRecorderActive(::GlobalNamespace::PlaymodeOptions playmodeOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaymodeOptionsExtensions*>(), { "IsRecorderActive", {}, { ::i2c::type_of<::GlobalNamespace::PlaymodeOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, playmodeOptions);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlaymodeOptionsExtensions::PlaymodeOptionsExtensions() {}
