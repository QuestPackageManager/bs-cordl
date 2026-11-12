#pragma once
// IWYU pragma private; include "HMUI/RoundedCornersDirectionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__RoundedCornersDirectionExtensions_def.hpp"
#include "HMUI/zzzz__RoundedCornersDirection_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::HMUI::RoundedCornersDirectionExtensions.GetRoundedCornersMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::HMUI::RoundedCornersDirection)>(&::HMUI::RoundedCornersDirectionExtensions::GetRoundedCornersMask)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5cd6564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::HMUI::RoundedCornersDirectionExtensions*>(), { "GetRoundedCornersMask", {}, { ::i2c::type_of<::HMUI::RoundedCornersDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RoundedCornersDirectionExtensions.ClampRoundedCornersRadius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::HMUI::RoundedCornersDirection, float_t, ::UnityEngine::Vector2)>(
    &::HMUI::RoundedCornersDirectionExtensions::ClampRoundedCornersRadius)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5cd6608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::RoundedCornersDirectionExtensions*>(),
                            { "ClampRoundedCornersRadius", {}, { ::i2c::type_of<::HMUI::RoundedCornersDirection>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector4 HMUI::RoundedCornersDirectionExtensions::GetRoundedCornersMask(::HMUI::RoundedCornersDirection direction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RoundedCornersDirectionExtensions*>(), { "GetRoundedCornersMask", {}, { ::i2c::type_of<::HMUI::RoundedCornersDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, direction);
}
inline float_t HMUI::RoundedCornersDirectionExtensions::ClampRoundedCornersRadius(::HMUI::RoundedCornersDirection direction, float_t radius, ::UnityEngine::Vector2 size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::RoundedCornersDirectionExtensions*>(),
                          { "ClampRoundedCornersRadius", {}, { ::i2c::type_of<::HMUI::RoundedCornersDirection>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, direction, radius, size);
}
// Ctor Parameters []
constexpr ::HMUI::RoundedCornersDirectionExtensions::RoundedCornersDirectionExtensions() {}
