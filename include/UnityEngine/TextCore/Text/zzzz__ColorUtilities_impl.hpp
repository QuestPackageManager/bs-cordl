#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/ColorUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__ColorUtilities_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::ColorUtilities.CompareColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Color32, ::UnityEngine::Color32)>(&::UnityEngine::TextCore::Text::ColorUtilities::CompareColors)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6bc3204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::ColorUtilities*>(),
                                                             { "CompareColors", {}, { ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::ColorUtilities.MultiplyColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (*)(::UnityEngine::Color32, ::UnityEngine::Color32)>(&::UnityEngine::TextCore::Text::ColorUtilities::MultiplyColors)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6bc3214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::ColorUtilities*>(),
                                                             { "MultiplyColors", {}, { ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::TextCore::Text::ColorUtilities::CompareColors(::UnityEngine::Color32 a, ::UnityEngine::Color32 b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::ColorUtilities*>(),
                                                           { "CompareColors", {}, { ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Color32 UnityEngine::TextCore::Text::ColorUtilities::MultiplyColors(::UnityEngine::Color32 c1, ::UnityEngine::Color32 c2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::ColorUtilities*>(),
                                                           { "MultiplyColors", {}, { ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(nullptr, ___internal_method, c1, c2);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::ColorUtilities::ColorUtilities() {}
