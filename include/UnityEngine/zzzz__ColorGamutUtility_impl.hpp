#pragma once
// IWYU pragma private; include "UnityEngine\ColorGamutUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ColorGamutUtility_def.hpp"
#include "UnityEngine/zzzz__ColorGamut_def.hpp"
#include "UnityEngine/zzzz__ColorPrimaries_def.hpp"
#include "UnityEngine/zzzz__TransferFunction_def.hpp"
#include "UnityEngine/zzzz__WhitePoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ColorGamutUtility.GetColorPrimaries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ColorPrimaries (*)(::UnityEngine::ColorGamut)>(&::UnityEngine::ColorGamutUtility::GetColorPrimaries)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8c0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorGamutUtility*>(), { "GetColorPrimaries", {}, { ::i2c::type_of<::UnityEngine::ColorGamut>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ColorGamutUtility.GetWhitePoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::WhitePoint (*)(::UnityEngine::ColorGamut)>(&::UnityEngine::ColorGamutUtility::GetWhitePoint)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8c108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorGamutUtility*>(), { "GetWhitePoint", {}, { ::i2c::type_of<::UnityEngine::ColorGamut>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ColorGamutUtility.GetTransferFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TransferFunction (*)(::UnityEngine::ColorGamut)>(&::UnityEngine::ColorGamutUtility::GetTransferFunction)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8c144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorGamutUtility*>(), { "GetTransferFunction", {}, { ::i2c::type_of<::UnityEngine::ColorGamut>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::ColorPrimaries UnityEngine::ColorGamutUtility::GetColorPrimaries(::UnityEngine::ColorGamut gamut) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorGamutUtility*>(), { "GetColorPrimaries", {}, { ::i2c::type_of<::UnityEngine::ColorGamut>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ColorPrimaries>(nullptr, ___internal_method, gamut);
}
inline ::UnityEngine::WhitePoint UnityEngine::ColorGamutUtility::GetWhitePoint(::UnityEngine::ColorGamut gamut) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorGamutUtility*>(), { "GetWhitePoint", {}, { ::i2c::type_of<::UnityEngine::ColorGamut>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::WhitePoint>(nullptr, ___internal_method, gamut);
}
inline ::UnityEngine::TransferFunction UnityEngine::ColorGamutUtility::GetTransferFunction(::UnityEngine::ColorGamut gamut) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorGamutUtility*>(), { "GetTransferFunction", {}, { ::i2c::type_of<::UnityEngine::ColorGamut>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TransferFunction>(nullptr, ___internal_method, gamut);
}
// Ctor Parameters []
constexpr ::UnityEngine::ColorGamutUtility::ColorGamutUtility() {}
