#pragma once
// IWYU pragma private; include "GlobalNamespace\IStartSeekSongControllerProvider.hpp"
#include "GlobalNamespace/zzzz__IStartSeekSongControllerProvider_def.hpp"
#include "GlobalNamespace/zzzz__IStartSeekSongController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IStartSeekSongControllerProvider.get_songController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IStartSeekSongController* (::GlobalNamespace::IStartSeekSongControllerProvider::*)()>(
    &::GlobalNamespace::IStartSeekSongControllerProvider::get_songController)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IStartSeekSongControllerProvider*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::IStartSeekSongControllerProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IStartSeekSongController* GlobalNamespace::IStartSeekSongControllerProvider::get_songController() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IStartSeekSongControllerProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IStartSeekSongController*>(this, ___internal_method);
}
