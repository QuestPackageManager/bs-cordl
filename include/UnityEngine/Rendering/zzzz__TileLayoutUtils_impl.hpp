#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\TileLayoutUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__TileLayoutUtils_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::TileLayoutUtils.TryLayoutByTiles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RectInt, uint32_t, ::by_ref<::UnityEngine::RectInt>, ::by_ref<::UnityEngine::RectInt>, ::by_ref<::UnityEngine::RectInt>,
                                                                ::by_ref<::UnityEngine::RectInt>)>(&::UnityEngine::Rendering::TileLayoutUtils::TryLayoutByTiles)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x67c92dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TileLayoutUtils*>(),
                            { "TryLayoutByTiles",
                              {},
                              { ::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>(), ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>(), ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TileLayoutUtils.TryLayoutByRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RectInt, uint32_t, ::by_ref<::UnityEngine::RectInt>, ::by_ref<::UnityEngine::RectInt>)>(
    &::UnityEngine::Rendering::TileLayoutUtils::TryLayoutByRow)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x67c9368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TileLayoutUtils*>(),
                                                             { "TryLayoutByRow",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TileLayoutUtils.TryLayoutByCol
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RectInt, uint32_t, ::by_ref<::UnityEngine::RectInt>, ::by_ref<::UnityEngine::RectInt>)>(
    &::UnityEngine::Rendering::TileLayoutUtils::TryLayoutByCol)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x67c93c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TileLayoutUtils*>(),
                                                             { "TryLayoutByCol",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::TileLayoutUtils::TryLayoutByTiles(::UnityEngine::RectInt src, uint32_t tileSize, ::by_ref<::UnityEngine::RectInt> main, ::by_ref<::UnityEngine::RectInt> topRow,
                                                                      ::by_ref<::UnityEngine::RectInt> rightCol, ::by_ref<::UnityEngine::RectInt> topRight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TileLayoutUtils*>(),
                          { "TryLayoutByTiles",
                            {},
                            { ::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>(), ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>(), ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, src, tileSize, main, topRow, rightCol, topRight);
}
inline bool UnityEngine::Rendering::TileLayoutUtils::TryLayoutByRow(::UnityEngine::RectInt src, uint32_t tileSize, ::by_ref<::UnityEngine::RectInt> main, ::by_ref<::UnityEngine::RectInt> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TileLayoutUtils*>(),
                                                           { "TryLayoutByRow",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, src, tileSize, main, other);
}
inline bool UnityEngine::Rendering::TileLayoutUtils::TryLayoutByCol(::UnityEngine::RectInt src, uint32_t tileSize, ::by_ref<::UnityEngine::RectInt> main, ::by_ref<::UnityEngine::RectInt> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TileLayoutUtils*>(),
                                                           { "TryLayoutByCol",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, src, tileSize, main, other);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::TileLayoutUtils::TileLayoutUtils() {}
