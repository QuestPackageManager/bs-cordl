#pragma once
// IWYU pragma private; include "HMUI\RoundedCornersDirectionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__RoundedCornersDirectionExtensions_def.hpp"
#include "HMUI/zzzz__RoundedCornersDirection_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::HMUI::RoundedCornersDirectionExtensions.GetFlipAndSymmetry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::HMUI::RoundedCornersDirection)>(&::HMUI::RoundedCornersDirectionExtensions::GetFlipAndSymmetry)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x588776c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RoundedCornersDirectionExtensions*>(), { "GetFlipAndSymmetry", {}, { ::i2c::type_of<::HMUI::RoundedCornersDirection>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector4 HMUI::RoundedCornersDirectionExtensions::GetFlipAndSymmetry(::HMUI::RoundedCornersDirection direction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RoundedCornersDirectionExtensions*>(), { "GetFlipAndSymmetry", {}, { ::i2c::type_of<::HMUI::RoundedCornersDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, direction);
}
// Ctor Parameters []
constexpr ::HMUI::RoundedCornersDirectionExtensions::RoundedCornersDirectionExtensions() {}
