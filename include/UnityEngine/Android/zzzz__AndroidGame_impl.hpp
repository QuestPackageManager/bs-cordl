#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidGame.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidGame_def.hpp"
//  Writing Method size for method: ::UnityEngine::Android::AndroidGame.StopLoading
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Android::AndroidGame::StopLoading)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a2e210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidGame*>(), { "StopLoading", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Android::AndroidGame::StopLoading(int32_t label) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidGame*>(), { "StopLoading", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, label);
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidGame::AndroidGame() {}
