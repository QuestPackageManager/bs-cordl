#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\LowLevel\FontEngineUtilities.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__FontEngineUtilities_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngineUtilities.MaxValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t)>(&::UnityEngine::TextCore::LowLevel::FontEngineUtilities::MaxValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bbe8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngineUtilities>(),
                                                                                           { "MaxValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::TextCore::LowLevel::FontEngineUtilities::MaxValue(int32_t a, int32_t b, int32_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngineUtilities>(),
                                                                                         { "MaxValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b, c);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineUtilities::FontEngineUtilities() {}
