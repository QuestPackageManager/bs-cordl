#pragma once
// IWYU pragma private; include "UnityEngine/TerrainUtils/TerrainTileCoord.hpp"
#include "UnityEngine/TerrainUtils/zzzz__TerrainTileCoord_def.hpp"
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainTileCoord._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainUtils::TerrainTileCoord::*)(int32_t, int32_t)>(&::UnityEngine::TerrainUtils::TerrainTileCoord::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb6ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainTileCoord>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TerrainUtils::TerrainTileCoord::_ctor(int32_t tileX, int32_t tileZ) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainUtils::TerrainTileCoord>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tileX, tileZ);
}
// Ctor Parameters [CppParam { name: "tileX", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "tileZ", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TerrainUtils::TerrainTileCoord::TerrainTileCoord(int32_t tileX, int32_t tileZ) noexcept {
  this->tileX = tileX;
  this->tileZ = tileZ;
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainUtils::TerrainTileCoord::TerrainTileCoord() {}
