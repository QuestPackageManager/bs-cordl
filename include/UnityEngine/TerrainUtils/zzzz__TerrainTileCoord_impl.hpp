#pragma once
// IWYU pragma private; include "UnityEngine/TerrainUtils/TerrainTileCoord.hpp"
#include "UnityEngine/TerrainUtils/zzzz__TerrainTileCoord_def.hpp"
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainTileCoord._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TerrainUtils::TerrainTileCoord::*)(int32_t, int32_t)>(
    &::UnityEngine::TerrainUtils::TerrainTileCoord::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x491939c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainTileCoord>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::TerrainUtils::TerrainTileCoord::_ctor(int32_t tileX, int32_t tileZ) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainTileCoord>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tileX, tileZ);
}
// Ctor Parameters [CppParam { name: "tileX", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "tileZ", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TerrainUtils::TerrainTileCoord::TerrainTileCoord(int32_t tileX, int32_t tileZ) noexcept {
  this->tileX = tileX;
  this->tileZ = tileZ;
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainUtils::TerrainTileCoord::TerrainTileCoord() {}
