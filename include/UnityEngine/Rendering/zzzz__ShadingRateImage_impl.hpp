#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShadingRateImage.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateImage_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ShadingRateImage.GetAllocSizeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::UnityEngine::Rendering::ShadingRateImage::GetAllocSizeInternal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6f7a244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateImage*>(),
                            { "GetAllocSizeInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadingRateImage.GetAllocTileSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(::UnityEngine::Vector2Int)>(&::UnityEngine::Rendering::ShadingRateImage::GetAllocTileSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f7a2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateImage*>(), { "GetAllocTileSize", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadingRateImage.GetAllocTileSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::ShadingRateImage::GetAllocTileSize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f7a2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateImage*>(), { "GetAllocTileSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ShadingRateImage::GetAllocSizeInternal(int32_t pixelWidth, int32_t pixelHeight, ::by_ref<int32_t> tileWidth, ::by_ref<int32_t> tileHeight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateImage*>(),
                          { "GetAllocSizeInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pixelWidth, pixelHeight, tileWidth, tileHeight);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::ShadingRateImage::GetAllocTileSize(::UnityEngine::Vector2Int pixelSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateImage*>(), { "GetAllocTileSize", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, pixelSize);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::ShadingRateImage::GetAllocTileSize(int32_t pixelWidth, int32_t pixelHeight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateImage*>(), { "GetAllocTileSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, pixelWidth, pixelHeight);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShadingRateImage::ShadingRateImage() {}
